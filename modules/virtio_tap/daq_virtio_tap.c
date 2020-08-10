#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#define _GNU_SOURCE
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <net/if.h>
#include <linux/if_tun.h>
#include <sys/ioctl.h>
#include <linux/virtio_net.h>
#include <linux/vhost.h>
#include <sys/eventfd.h>
#include <net/if_arp.h>
#include <sched.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <linux/netlink.h>
#include <linux/rtnetlink.h>

#include <vlib/vlib.h>
#include <vlib/physmem.h>

#include <vlib/unix/unix.h>
#include <vnet/ethernet/ethernet.h>
#include <vnet/ip/ip4_packet.h>
#include <vnet/ip/ip6_packet.h>
#include <vnet/devices/netlink.h>
#include <vnet/devices/tap/tap.h>
#include <vnet/devices/virtio/virtio.h>
// WLR: above includes from tap.c in vpp

#include "daq_dlt.h"
#include "daq_module_api.h"

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long int u64;

#define DAQ_TAP_VIRTIO_VERSION 1
#define SET_ERROR(modinst, ...)    daq_base_api.set_errbuf(modinst, __VA_ARGS__)

#define CLIB_LOG2_CACHE_LINE_BYTES 6
#define CLIB_CACHE_LINE_BYTES (1 << CLIB_LOG2_CACHE_LINE_BYTES)
#define CLIB_CACHE_LINE_ALIGN_MARK(mark) u8 mark[0] __attribute__((aligned(CLIB_CACHE_LINE_BYTES)))

#define AF_PACKET_MAX_INTERFACES         32

static DAQ_BaseAPI_t daq_base_api;

static DAQ_VariableDesc_t virtio_tap_variable_descriptions[] = {
    { "debug", "Enable debugging output to stdout", DAQ_VAR_DESC_FORBIDS_ARGUMENT },

};

#define MAX_QUEUES (4)
#define DEFAULT_RING_SIZE (256)

typedef struct _virtio_tap_instance
{
    struct _virtio_tap_instance *next;
    int tap_fd;
#define TAP_FLAG_ATTACH  0x0001
#define TAP_FLAG_PERSIST 0x0002
    unsigned tap_flags;
    int vhost_fd[MAX_QUEUES];
    unsigned tp_version;
    unsigned tp_hdrlen;
    unsigned tp_reserve;
    unsigned tp_frame_size;
    unsigned actual_snaplen;
    void *buffer;
    int rx_queues;
    int tx_queues;
    int rx_ring_size;
    int tx_ring_size;
    virtio_vring_t *rx_ring;
    virtio_vring_t *tx_ring;
    char *name;
    char *namespace;
    int type;
    int index;
    struct _virtio_tap_instance *peer;
    int mtu;
    int ifindex;
    bool active;
    virtio_if_t *vif;
    vlib_main_t * vm;
} VirtioTapInstance;

typedef struct _virtio_tap_pkt_desc
{
    DAQ_Msg_t msg;
    DAQ_PktHdr_t pkthdr;
    uint8_t *data;
    VirtioTapInstance *instance;
    unsigned int length;
    struct _virtio_tap_pkt_desc *next;
} VirtioTapPktDesc;


typedef struct _virtio_tap_msg_pool
{
    VirtioTapPktDesc *pool;
    VirtioTapPktDesc *freelist;
    DAQ_MsgPoolInfo_t info;
} VirtioTapMsgPool;

typedef struct _virtio_tap_context
{
    /* Configuration */
    char *device;
    char *filter;
    int snaplen;
    int timeout;
    uint32_t ring_size;
    //VirtioTapFanoutCfg fanout_cfg;
    bool use_tx_ring;
    bool debug;
    /* State */
    DAQ_ModuleInstance_h modinst;
    VirtioTapMsgPool pool;
    VirtioTapInstance *instances;
    uint32_t intf_count;

    volatile bool interrupted;
    DAQ_Stats_t stats;
    /* Message receive state */
    VirtioTapInstance *curr_instance;
} VirtioTap_Context_t;

typedef struct
{
  u8 *data;
} vnet_netlink_msg_t;

// TODO: What to do with this struct from vlib/main.c?
//vlib_main_t vlib_global_main;

#define always_inline static inline __attribute__ ((__always_inline__))

/*
 * prototypes
 */

#ifdef WLR_USE_VPP_NOW
static clib_error_t *clib_error_return_unix(int rc, const char *str)
{
    clib_error_t *err = malloc(sizeof(clib_error_t));
    err->rc = rc;
    return err;
}

static clib_error_t *vnet_netlink_msg_send(vnet_netlink_msg_t * m)
{
    clib_error_t *err = 0;
    struct sockaddr_nl ra = { 0 };
    int len, sock;
    struct nlmsghdr *nh = (struct nlmsghdr *) m->data;
    nh->nlmsg_len = vec_len (m->data);
    char buf[4096];

    if ((sock = socket (AF_NETLINK, SOCK_RAW, NETLINK_ROUTE)) == -1)
    {
        err = clib_error_return_unix (0, "socket(AF_NETLINK)");
        goto done;
    }

    ra.nl_family = AF_NETLINK;
    ra.nl_pid = 0;

    if ((bind (sock, (struct sockaddr *) &ra, sizeof (ra))) == -1)
    {
        err = clib_error_return_unix (0, "bind");
        goto done;
    }

    if ((send (sock, m->data, vec_len (m->data), 0)) == -1)
        err = clib_error_return_unix (0, "send");

    if ((len = recv (sock, buf, sizeof (buf), 0)) == -1)
        err = clib_error_return_unix (0, "recv");

    for (nh = (struct nlmsghdr *) buf; NLMSG_OK (nh, len);
        nh = NLMSG_NEXT (nh, len))
    {
        if (nh->nlmsg_type == NLMSG_DONE)
            goto done;

        if (nh->nlmsg_type == NLMSG_ERROR)
        {
            struct nlmsgerr *e = (struct nlmsgerr *) NLMSG_DATA (nh);
            if (e->error)
            {
                printf("WLR: nlmsg error: %d\n", e->error);
                printf("WLR err link set %s (%d/%d)\n", strerror(e->error), e->error, errno);
            }
            //err = clib_error_return_unix(0, "netlink error %d", e->error);
            goto done;
        }
    }

done:
  close (sock);
  free (m->data);
  return err;
}

#endif // WLR_USE_VPP_NOW

/* Module->load() */
static int virtio_tap_daq_module_load(const DAQ_BaseAPI_t *base_api)
{
    printf("%s():\n", __func__);
    if (base_api->api_version != DAQ_BASE_API_VERSION || base_api->api_size != sizeof(DAQ_BaseAPI_t))
        return DAQ_ERROR;

    daq_base_api = *base_api;

    return DAQ_SUCCESS;
}

/* Module->unload() */
static int virtio_tap_daq_module_unload(void)
{
    printf("%s():\n", __func__);
    memset(&daq_base_api, 0, sizeof(daq_base_api));
    return DAQ_SUCCESS;
}

/* Module->get_variable_descs() */
static int virtio_tap_daq_get_variable_descs(const DAQ_VariableDesc_t **var_desc_table)
{
    *var_desc_table = virtio_tap_variable_descriptions;
    printf("%s():\n", __func__);

    return sizeof(virtio_tap_variable_descriptions) / sizeof(DAQ_VariableDesc_t);
}


static int create_packet_pool(VirtioTap_Context_t *afpc, unsigned size)
{
    VirtioTapMsgPool *pool = &afpc->pool;
    printf("WLR: %s: size=%u, snap %u\n", __func__, size, afpc->instances->actual_snaplen);
    pool->pool = calloc(sizeof(VirtioTapPktDesc), size);
    if (!pool->pool)
    {
        SET_ERROR(afpc->modinst, "%s: Could not allocate %zu bytes for a packet descriptor pool!",
                __func__, sizeof(VirtioTapPktDesc) * size);
        return DAQ_ERROR_NOMEM;
    }
    pool->info.mem_size = sizeof(VirtioTapPktDesc) * size;
    while (pool->info.size < size)
    {
        /* Allocate packet data and set up descriptor */
        VirtioTapPktDesc *desc = &pool->pool[pool->info.size];
        desc->data = malloc(afpc->instances->actual_snaplen);
        if (!desc->data)
        {
            SET_ERROR(afpc->modinst, "%s: Could not allocate %d bytes for a packet descriptor message buffer!",
                    __func__, afpc->instances->actual_snaplen);
            return DAQ_ERROR_NOMEM;
        }
        pool->info.mem_size += afpc->instances->actual_snaplen;

        /* Initialize non-zero invariant packet header fields. */
        DAQ_PktHdr_t *pkthdr = &desc->pkthdr;
        pkthdr->ingress_group = DAQ_PKTHDR_UNKNOWN;
        pkthdr->egress_group = DAQ_PKTHDR_UNKNOWN;

        /* Initialize non-zero invariant message header fields. */
        DAQ_Msg_t *msg = &desc->msg;
        msg->type = DAQ_MSG_TYPE_PACKET;
        msg->hdr_len = sizeof(desc->pkthdr);
        msg->hdr = &desc->pkthdr;
        msg->data = desc->data;
        msg->owner = afpc->modinst;
        msg->priv = desc;

        /* Place it on the free list */
        desc->next = pool->freelist;
        pool->freelist = desc;

        pool->info.size++;
    }
    pool->info.available = pool->info.size;
    return DAQ_SUCCESS;
}


// WLR TODO do this right
#define IF_TAP 0
#define IF_TUN 1
#ifdef WLR_USE_VPP
static int virtio_create_tap_interface(VirtioTap_Context_t *afpc, VirtioTapInstance *instance)
{
    int nsfd;
    int tfd;
    int vfd;
    int ret = DAQ_ERROR;
    int old_netns_fd = 0;
    int num_queue_pairs = 0;
    size_t hdrsz;
    printf("Create tap for %s\n", instance->name);
    struct ifreq ifr = {.ifr_flags = IFF_NO_PI | IFF_VNET_HDR };
    unsigned int tap_features;
    unsigned long vhost_features;
    unsigned int offload = 0;

    virtio_if_t *vif = malloc(sizeof(virtio_if_t));

    vif->type = VIRTIO_IF_TYPE_TAP;
    vif->dev_instance = 1;
    vif->id = 1;

    if (instance->type == IF_TAP) {
        ifr.ifr_flags |= IFF_TAP;
    } else {
        ifr.ifr_flags |= IFF_TUN;
    }
    memcpy(ifr.ifr_name, instance->name, strlen(instance->name));

    if (instance->tap_flags & TAP_FLAG_ATTACH)
    {
        if (instance->namespace)
        {
            if ((old_netns_fd = open ("/proc/self/ns/net", O_RDONLY)) < 0)
            {
                printf("Error getting current network ns: %s (%d)\n", strerror(errno), errno);
                return ret;
            }
            printf("WLR: old ns fd: %d\n", old_netns_fd);
            nsfd = open(instance->namespace, O_RDONLY);
            if (setns (nsfd, CLONE_NEWNET) == -1)
            {
                printf("Error setting network ns: %s (%d)\n", strerror(errno), errno);
                return ret;
            }
            printf("WLR: in pod ns %s, fd %d\n", instance->namespace, nsfd);
        }
    }

    // Now create TAP and virtio socket...
    if ((instance->tap_fd = tfd = open ("/dev/net/tun", O_RDWR | O_NONBLOCK)) < 0)
    {
        printf("Error setting opening tun/tap: %s (%d)\n", strerror(errno), errno);
        return ret;
    }
    if (ioctl (tfd, TUNGETFEATURES, &tap_features) < 0)
    {
        printf("Error tetting tun/tap features: %s (%d)\n", strerror(errno), errno);
        return ret;
    }
    printf("WLR: Tap features: %x\n", tap_features);
    if ((tap_features & IFF_VNET_HDR) == 0)
    {
        printf("Error virtio backend not installed\n");
        return ret;

    }
    instance->rx_queues = 1; // TODO: add option to set number of queues
    instance->tx_queues = 1; // TODO: add option to set number of queues
    instance->rx_ring_size = DEFAULT_RING_SIZE;
    instance->tx_ring_size = DEFAULT_RING_SIZE;
    num_queue_pairs = clib_max(instance->rx_queues, instance->tx_queues);

    if ((tap_features & IFF_MULTI_QUEUE) == 0)
    {
        instance->rx_queues = instance->tx_queues = num_queue_pairs = 1;
    }
    else
        ifr.ifr_flags |= IFF_MULTI_QUEUE;

    /* Allocate rx and tx queue rings aligned */
    if ((instance->rx_ring = clib_mem_alloc_aligned(sizeof(virtio_vring_t) *instance->rx_queues,
                                                    CLIB_CACHE_LINE_BYTES)) == 0)
    {
        printf("Error allocating space for rx ring\n");
        return ret;
    }
    memset(instance->rx_ring, 0, sizeof(virtio_vring_t) *instance->rx_queues);
    if ((instance->tx_ring = clib_mem_alloc_aligned(sizeof(virtio_vring_t) *instance->tx_queues,
                                                    CLIB_CACHE_LINE_BYTES)) == 0)
    {
        printf("Error allocating space for tx ring\n");
        return ret;
    }
    memset(instance->tx_ring, 0, sizeof(virtio_vring_t) *instance->tx_queues);

    hdrsz = sizeof (struct virtio_net_hdr_v1);
    offload = TUN_F_CSUM | TUN_F_TSO4 | TUN_F_TSO6; // enable GSO

    if (ioctl(tfd, TUNSETIFF, (void *) &ifr))
    {
        printf("Error setting up tun if: %s (%d)\n", strerror(errno), errno);
        return ret;
    }
    vif->ifindex = instance->ifindex = if_nametoindex (ifr.ifr_ifrn.ifrn_name);

    printf("WLR: ifindex for %s=%d\n", ifr.ifr_ifrn.ifrn_name, instance->ifindex);
    if (fcntl (tfd, F_SETFL, O_NONBLOCK) < 0)
    {
        printf("Error setting up tun if to non-blocking: %s (%d)\n", strerror(errno), errno);
        return ret;
    }

    /*
     * unset the persistence when attaching to existing
     * interface
     */
    if (instance->tap_flags & TAP_FLAG_ATTACH)
    {
        ioctl(tfd, TUNSETPERSIST, (void *)(uintptr_t)0);
    }

    if (instance->tap_flags & TAP_FLAG_PERSIST)
    {
        struct ifreq get_ifr;
        if (ioctl(tfd, TUNSETPERSIST, (void *)(uintptr_t)1) < 0)
        {
            printf("Error setting persistence on inteface\n");
            return ret;
        }
        if (ioctl(tfd, TUNGETIFF, (void *)&get_ifr) < 0)
        {
            printf("Error geting if settings: %s (%d)\n", strerror(errno), errno);
            return ret;
        }
        if ((get_ifr.ifr_flags & IFF_PERSIST) == 0)
        {
            printf("Persistence not supported\n");
            return ret;
        }
    }

    if (ioctl(tfd, TUNSETVNETHDRSZ, &hdrsz) < 0)
    {
        printf("Error setting tun vnet hdr size: %s (%d)\n", strerror(errno), errno);
        return ret;
    }
    int i = INT_MAX;
    if (ioctl(tfd, TUNSETSNDBUF, &i) < 0)
    {
        printf("Error setting tun snd buf size: %s (%d)\n", strerror(errno), errno);
        return ret;
    }

    if (ioctl(tfd, TUNSETOFFLOAD, offload) < 0)
    {
        printf("Error setting tun offload: %s (%d)\n", strerror(errno), errno);
        return ret;
    }

    for (i=0;i<num_queue_pairs;i++) {
        if ((vfd = open ("/dev/vhost-net", O_RDWR | O_NONBLOCK)) < 0) {
            printf("ERROR opening vhost-net: %s (%d)\n", strerror(errno), errno);
            return ret;
        }
        vec_add1 (vif->vhost_fds, vfd);

        if (ioctl(vfd, VHOST_SET_OWNER, 0) < 0)
        {
            printf("Error setting owner to vhost-net: %s (%d)\n", strerror(errno), errno);
            return ret;
        }
        instance->vhost_fd[i] = vfd;
        printf("VHost fd: %d\n", vfd);
    }

    if (ioctl(vif->vhost_fds[0], VHOST_GET_FEATURES, &vhost_features) < 0)
    {
        printf("Error getting vhost features: %s (%d)\n", strerror(errno), errno);
        return ret;
    }
    vif->remote_features = vhost_features;
    printf("WLR: Vhost features: %lx\n", vhost_features);

#define VIRTIO_FEATURE(X) (1ULL << X)

  if ((vhost_features & VIRTIO_FEATURE (VIRTIO_NET_F_MRG_RXBUF)) == 0)
    {
      printf("vhost-net backend doesn't support "
                       "VIRTIO_NET_F_MRG_RXBUF feature");
      return ret;
    }
     if ((vhost_features & VIRTIO_FEATURE (VIRTIO_RING_F_INDIRECT_DESC)) == 0)
    {
      printf("vhost-net backend doesn't support "
                       "VIRTIO_RING_F_INDIRECT_DESC feature");
      return ret;
    }
    if ((vhost_features & VIRTIO_FEATURE (VIRTIO_F_VERSION_1)) == 0)
    {
      printf("vhost-net backend doesn't support "
                       "VIRTIO_F_VERSION_1 features");
      return ret;
    }

    if (!(instance->tap_flags & TAP_FLAG_ATTACH))
    {
        if (instance->namespace)
        {
            if ((old_netns_fd = open ("/proc/self/ns/net", O_RDONLY)) < 0)
            {
                printf("Error opening current network ns: %s (%d)\n", strerror(errno), errno);
                return ret;
            }
            if ((nsfd = open(instance->namespace, O_RDONLY)) < 0)
            {
                printf("Error opening new network ns: %s (%d)\n", strerror(errno), errno);
                return ret;
            }
            printf("WLR: old ns fd: %d, new ns fd: %d\n", old_netns_fd, nsfd);
            clib_error_t *err = vnet_netlink_set_link_netns(instance->ifindex, nsfd, instance->name);
            if (err && err->code)
            {
                printf("Error from set_link_ns: %d\n", err->code);
                return ret;
            }
            if (setns (nsfd, CLONE_NEWNET) == -1)
            {
                printf("Error setting network ns: %s (%d)\n", strerror(errno), errno);
                return ret;
            }
            printf("WLR: in pod ns %s, fd %d\n", instance->namespace, nsfd);
        }
    }

    clib_error_t *err = vnet_netlink_set_link_state (instance->ifindex, 1 /* UP */);
    if (err)
    {
        printf("Error beinging up interface\n");
    }

    /* Back to original namspace */
    if (old_netns_fd) {
        if (setns (old_netns_fd, CLONE_NEWNET) == -1)
        {
            printf("Error setting network ns: %s (%d)\n", strerror(errno), errno);
        }
        printf("WLR: Switched back to host ns\n");
    }
    printf("WLR: vif->type:  %d\n", vif->type);
    for (i=0;i<num_queue_pairs;i++) {
        if (i < instance->rx_queues && (err = virtio_vring_init(vif, instance->rx_ring, i, instance->rx_ring_size)))
        {
            printf("Error initializing rx ring %d\n", i);
            return DAQ_ERROR;
        }
        if (i < instance->tx_queues && (err = virtio_vring_init(vif, instance->tx_ring, i, instance->tx_ring_size)))
        {
            printf("Error initializing tx ring %d\n", i);
            return DAQ_ERROR;
        }
    }
    return DAQ_SUCCESS;
}
#endif // WLR_USE_VPP

static VirtioTapInstance *create_instance(VirtioTap_Context_t *afpc, const char *device, const char *namespace)
{
    VirtioTapInstance *instance = NULL;
    struct ifreq ifr;
    socklen_t len;
    tap_create_if_args_t tapd;
    //int val;

    memset(&tapd,0, sizeof(tap_create_if_args_t));
    tapd.id = ~0;
    instance = calloc(1, sizeof(VirtioTapInstance));
    if (!instance)
    {
        SET_ERROR(afpc->modinst, "%s: Could not allocate a new instance structure.", __func__);
        goto err;
    }

    instance->rx_queues = 1; // TODO: add option to set number of queues
    instance->tx_queues = 1; // TODO: add option to set number of queues
    instance->rx_ring_size = DEFAULT_RING_SIZE;
    instance->tx_ring_size = DEFAULT_RING_SIZE;
    tapd.tx_ring_sz = instance->tx_ring_size;
    tapd.rx_ring_sz = instance->rx_ring_size;
    tapd.num_rx_queues = instance->rx_queues;
    if ((instance->name = strdup(device)) == NULL)
    {
        SET_ERROR(afpc->modinst, "%s: Could not allocate a copy of the device name.", __func__);
        goto err;
    }
    tapd.host_if_name = instance->name;
    if (*namespace == '/')
        if ((instance->namespace = strdup(namespace)) == NULL)
        {
            SET_ERROR(afpc->modinst, "%s: Could not allocate a copy of the device name.", __func__);
            goto err;
        }
    tapd.host_namespace = instance->namespace;
    instance->actual_snaplen = afpc->snaplen; // WLR FIXME

    vlib_main_t * vm = vlib_get_main();
    instance->vm = vm;
    tap_create_if(vm, &tapd);
    if (tapd.rv) {
        printf("WLR: Tap creat failed, rv %d, if idx %u, if name %s\n", tapd.rv, tapd.sw_if_index, tapd.host_if_name);
        return NULL;
    }
#ifdef WLR_SKIP
    if (virtio_create_tap_interface(afpc, instance)) {
        SET_ERROR(afpc->modinst, "%s: Couldn't create tap device!", __func__);
        return(NULL);
    }
#endif // WLR_SKIP
    if (afpc->debug)
    {
        printf("[%s]\n", instance->name);
        printf("  Namespace: %s\n", instance->namespace);
        printf("  Snaplen: %u\n", instance->actual_snaplen);
#ifdef WLR_SKIP
        printf("  TPacket Version: %u\n", instance->tp_version);
        printf("  TPacket Header Length: %u\n", instance->tp_hdrlen);
        printf("  MTU: %d\n", instance->mtu);
        printf("  Reservation: %u\n", instance->tp_reserve);
#endif
    }

    return instance;

err:
    //destroy_instance(instance); WLR TODO
    return NULL;
}

static int create_bridge(VirtioTap_Context_t *afpc, const char *device_name1, const char *device_name2)
{
    VirtioTapInstance *instance, *peer1, *peer2;

    peer1 = peer2 = NULL;
    for (instance = afpc->instances; instance; instance = instance->next)
    {
        if (!strcmp(instance->name, device_name1))
            peer1 = instance;
        else if (!strcmp(instance->name, device_name2))
            peer2 = instance;
    }

    if (!peer1 || !peer2)
        return DAQ_ERROR_NODEV;

    peer1->peer = peer2;
    peer2->peer = peer1;

    if (afpc->debug) {
        printf("Setting up peers %s:%s\n",device_name1, device_name2);
    }
    return DAQ_SUCCESS;
}

#define NS_SIZE 128
static int create_interfaces(VirtioTap_Context_t *afpc, const DAQ_ModuleConfig_h modcfg)
{
    char *dev =  afpc->device;
    char *name1, *name2;
    int num_intfs = 0;
    char intf[IFNAMSIZ];
    size_t len;
    VirtioTapInstance *afi;
    char *netns = malloc(NS_SIZE);
    if (!netns) {
        SET_ERROR(afpc->modinst, "%s: unabble to malloc netns (%d)", __func__, errno);
        goto iferr;
    }

    while (*dev != '\0')
    {
        len = strcspn(dev, ":");
        if (len >= IFNAMSIZ)
        {
            SET_ERROR(afpc->modinst, "%s: Interface name too long! (%zu)", __func__, len);

            goto iferr;
        }
        if (len != 0)
        {
            afpc->intf_count++;
            if (afpc->intf_count >= AF_PACKET_MAX_INTERFACES)
            {
                SET_ERROR(afpc->modinst, "%s: Using more than %d interfaces is not supported!", __func__, AF_PACKET_MAX_INTERFACES);
                goto iferr;
            }
            snprintf(intf, len + 1, "%s", dev);

            if (dev[len+1] == '/')
            {
                dev += len+1;
                len = strcspn(dev, ":");
                if (len != 0)
                {
                    if (len >= NS_SIZE)
                    {
                        SET_ERROR(afpc->modinst, "%s: Interface name too long! (%zu %zu)", __func__, len, IFNAMSIZ);

                        goto iferr;
                    }
                    snprintf(netns, len + 1, "%s", dev);
                }
            }
            afi = create_instance(afpc, intf, netns);
            if (!afi)
                goto iferr;

            afi->next = afpc->instances;
            afpc->instances = afi;
            num_intfs++;
            if (daq_base_api.config_get_mode(modcfg) != DAQ_MODE_PASSIVE)
            {
                if (num_intfs == 2)
                {
                    name1 = afpc->instances->next->name;
                    name2 = afpc->instances->name;
                    if (create_bridge(afpc, name1, name2) != DAQ_SUCCESS)
                    {
                        SET_ERROR(afpc->modinst, "%s: Couldn't create the bridge between %s and %s!", __func__, name1, name2);
                        goto iferr;
                    }
                    num_intfs = 0;

                }
                else if (num_intfs > 2)
                    break;
            }
        }
        else
            len = 1;
        dev += len;
    }

    return DAQ_SUCCESS;

iferr:
    return DAQ_ERROR;
}

static int daq_parse_options(const DAQ_ModuleConfig_h modcfg, VirtioTap_Context_t *afpc)
{
    const char *varKey, *varValue;
    daq_base_api.config_first_variable(modcfg, &varKey, &varValue);
    while (varKey)
    {
        if (!strcmp(varKey, "debug")) {
            afpc->debug = true;
        }

        daq_base_api.config_next_variable(modcfg, &varKey, &varValue);
    }
    return DAQ_SUCCESS;
}

static int virtio_tap_daq_instantiate(const DAQ_ModuleConfig_h modcfg, DAQ_ModuleInstance_h modinst, void **ctxt_ptr)
{

    VirtioTapInstance *afi;
    VirtioTap_Context_t *afpc;
    int rval = DAQ_ERROR;
    clib_error_t *err;
    vlib_main_t *vm = &vlib_global_main;  /* one and only time for this! */

    //clib_mem_init (0, 64ULL << 10);
    clib_mem_init_thread_safe (0, 128 << 20);
    clib_time_init (&vm->clib_time);
    unix_main_init(vm);
    virtio_main.log_default = VLIB_LOG_LEVEL_DEBUG;
    err = linux_epoll_input_init(vm);
    if (err && err->code) {
        printf("Error from linux_epoll_input_init(), rc=%d, what=%s, where=%s\n", err->code, err->what, err->where);
        return rval;
    }
    err = vlib_physmem_init(vm);
    if (err && err->code) {
        printf("Error from vlib_physmem_init(), rc=%d, what=%s, where=%s\n", err->code, err->what, err->where);
        return rval;
    }
    virtio_main.log_default = VLIB_LOG_LEVEL_DEBUG;
#ifdef WLR_SKIP
    err = vnet_main_init(vm);
    if (err && err->code) {
        printf("Error from vnet_main_init(), rc=%d, what=%s, where=%s\n", err->code, err->what, err->where);
        return rval;
    }
#endif
    err = vlib_map_stat_segment_init();
    if (err && err->code) {
        printf("Error from vlib_map_stat_segment_init:(), rc=%d, what=%s, where=%s\n", err->code, err->what, err->where);
        return rval;
    }
    vec_validate(vlib_thread_stacks, 0);
    vlib_thread_stack_init (0);
    err = vlib_thread_init (vm);
    if (err && err->code) {
        printf("Error from vlib_thread_init(), rc=%d, what=%s, where=%s\n", err->code, err->what, err->where);
        return rval;
    }
    err = vnet_interface_init(vm);
    if (err && err->code) {
        printf("Error from vlib_interface_init(), rc=%d, what=%s, where=%s\n", err->code, err->what, err->where);
        return rval;
    }
    printf("%s():\n", __func__);
    afpc = calloc(1, sizeof(VirtioTap_Context_t));
    if (!afpc)
    {
        SET_ERROR(modinst, "%s: Couldn't allocate memory for the new VirtioTap context!", __func__);
        return(DAQ_ERROR_NOMEM);
    }
    afpc->modinst = modinst;

    afpc->device = strdup(daq_base_api.config_get_input(modcfg));
    if (!afpc->device)
    {
        SET_ERROR(modinst, "%s: Couldn't allocate memory for the device string!", __func__);
        return(DAQ_ERROR_NOMEM);
    }

    afpc->snaplen = daq_base_api.config_get_snaplen(modcfg);
    afpc->timeout = (int) daq_base_api.config_get_timeout(modcfg);
    rval = daq_parse_options(modcfg, afpc);
    if (rval)
        return (rval);

    if (create_interfaces(afpc,modcfg)) {
        //SET_ERROR(modinst, "%s: Couldn't create tap device!", __func__);
        return(DAQ_ERROR_NODEV);
    }

    /* Finally, create the message buffer pool. */
    uint32_t pool_size = daq_base_api.config_get_msg_pool_size(modcfg);
    if (pool_size == 0)
    {
        /* Default the pool size to 10% of the allocated RX frames. */
        for (afi = afpc->instances; afi; afi = afi->next) {
            pool_size += 512;// WLR FIXMIE
            afi->actual_snaplen = afpc->snaplen; // WLR FIXME
        }
            //pool_size += afi->rx_ring.layout.tp_frame_nr;
        pool_size /= 10;
    }
    if (afpc->debug) {
        printf("       snaplen = %d\n       timeout = %d\n     pool size = %d\n",
                afpc->snaplen, afpc->timeout, pool_size);
    }

    if ((rval = create_packet_pool(afpc, pool_size)) != DAQ_SUCCESS)
        goto err;

    *ctxt_ptr = afpc;
    return DAQ_SUCCESS;

err:
    return rval;
}


static void virtio_tap_daq_destroy(void *handle)
{
    printf("%s():\n", __func__);
    return;
}

/* Module->start() */
static int virtio_tap_daq_start(void *handle)
{
    printf("%s():\n", __func__);
    return DAQ_SUCCESS;
}

/* Module->interrupt() */
static int virtio_tap_daq_interrupt(void *handle)
{
    VirtioTap_Context_t *viotc = (VirtioTap_Context_t *) handle;

    printf("%s():\n", __func__);
    viotc->interrupted = true;

    return DAQ_SUCCESS;
}

static int virtio_tap_daq_stop(void *handle)
{
    VirtioTap_Context_t *viotc = (VirtioTap_Context_t *) handle;

    printf("%s():\n", __func__);
    //virtio_tap_close(viotc);

    return DAQ_SUCCESS;
}

static int virtio_tap_daq_get_stats(void *handle, DAQ_Stats_t *stats)
{
    VirtioTap_Context_t *viotc = (VirtioTap_Context_t *) handle;
    printf("%s():\n", __func__);

    //update_hw_stats(viotc);
    memcpy(stats, &viotc->stats, sizeof(DAQ_Stats_t));

    return DAQ_SUCCESS;
}

static void virtio_tap_daq_reset_stats(void *handle)
{
    VirtioTap_Context_t *viotc = (VirtioTap_Context_t *) handle;
    printf("%s():\n", __func__);

    //reset_stats(viotc);
}

static int virtio_tap_daq_get_snaplen(void *handle)
{
    VirtioTap_Context_t *viotc = (VirtioTap_Context_t *) handle;
    printf("%s():\n", __func__);

    /* Note: This returns the maximum capture length that will be returned by the kernel.
        It is slightly larger than the originally requested snaplen due to reserving room
        for reconstructing the VLAN tag as well as rounding up due to alignment. */

    return viotc->instances->actual_snaplen;
}

static uint32_t virtio_tap_daq_get_capabilities(void *handle)
{
    printf("%s():\n", __func__);
    // nfq daq
    return DAQ_CAPA_BLOCK | DAQ_CAPA_REPLACE | DAQ_CAPA_INTERRUPT;

    // afpacket daq
    //uint32_t capabilities = DAQ_CAPA_BLOCK | DAQ_CAPA_REPLACE | DAQ_CAPA_INJECT |
    //                        DAQ_CAPA_UNPRIV_START | DAQ_CAPA_INTERRUPT | DAQ_CAPA_DEVICE_INDEX;
    //return capabilities;
}

static int virtio_tap_daq_get_datalink_type(void *handle)
{
    printf("%s():\n", __func__);
    return DLT_RAW; // nlq.  What should it be?
    //return DLT_EN10MB; afpacket
}

static unsigned virtio_tap_daq_msg_receive(void *handle, const unsigned max_recv, const DAQ_Msg_t *msgs[], DAQ_RecvStatus *rstat)
{
    struct timeval start, now;
    unsigned idx = 0;
    VirtioTap_Context_t *afpc = (VirtioTap_Context_t *)handle;

    gettimeofday(&start, NULL);

    //if (afpc->debug)
        //printf("%s():\n", __func__);
    while (idx < max_recv)
    {
        if (afpc->interrupted)
        {
            afpc->interrupted = false;
            *rstat = DAQ_RSTAT_INTERRUPTED;
            break;
        }
        if (afpc->timeout) {
            gettimeofday(&now, NULL);
            if (((now.tv_sec - start.tv_sec) * 1000 +
                (now.tv_usec - start.tv_usec) / 1000) > afpc->timeout) {
                 *rstat = DAQ_RSTAT_TIMEOUT;
                //if (afpc->debug)
                //    printf("%s: timeout\n", __func__);
                break;
             }
        }
    }
    return DAQ_SUCCESS;
}

static int virtio_tap_daq_msg_finalize(void *handle, const DAQ_Msg_t *msg, DAQ_Verdict verdict)
{
    VirtioTap_Context_t *viotc = (VirtioTap_Context_t *) handle;
    printf("%s():\n", __func__);
    return DAQ_SUCCESS;
}


static int virtio_tap_daq_get_msg_pool_info(void *handle, DAQ_MsgPoolInfo_t *info)
{
    VirtioTap_Context_t *viotc = (VirtioTap_Context_t *) handle;
    printf("%s():\n", __func__);

    *info = viotc->pool.info;

    return DAQ_SUCCESS;
}

#ifdef BUILDING_SO
DAQ_SO_PUBLIC const DAQ_ModuleAPI_t DAQ_MODULE_DATA =
#else
const DAQ_ModuleAPI_t virtio_tap_daq_module_data =
#endif
{
    /* .api_version = */ DAQ_MODULE_API_VERSION,
    /* .api_size = */ sizeof(DAQ_ModuleAPI_t),
    /* .module_version = */ DAQ_TAP_VIRTIO_VERSION,
    /* .name = */ "virtio_tap",
    /* .type = */ DAQ_TYPE_INTF_CAPABLE | DAQ_TYPE_INLINE_CAPABLE | DAQ_TYPE_MULTI_INSTANCE | DAQ_TYPE_NO_UNPRIV,
    /* .load = */ virtio_tap_daq_module_load,
    /* .unload = */ virtio_tap_daq_module_unload,
    /* .get_variable_descs = */ virtio_tap_daq_get_variable_descs,
    /* .instantiate = */ virtio_tap_daq_instantiate,
    /* .destroy = */ virtio_tap_daq_destroy,
    /* .set_filter = */ NULL,
    /* .start = */ virtio_tap_daq_start,
    /* .inject = */ NULL,
    /* .inject_relative = */ NULL,
    /* .interrupt = */ virtio_tap_daq_interrupt,
    /* .stop = */ virtio_tap_daq_stop,
    /* .ioctl = */ NULL,
    /* .get_stats = */ virtio_tap_daq_get_stats,
    /* .reset_stats = */ virtio_tap_daq_reset_stats,
    /* .get_snaplen = */ virtio_tap_daq_get_snaplen,
    /* .get_capabilities = */ virtio_tap_daq_get_capabilities,
    /* .get_datalink_type = */ virtio_tap_daq_get_datalink_type,
    /* .config_load = */ NULL,
    /* .config_swap = */ NULL,
    /* .config_free = */ NULL,
    /* .msg_receive = */ virtio_tap_daq_msg_receive,
    /* .msg_finalize = */ virtio_tap_daq_msg_finalize,
    /* .get_msg_pool_info = */ virtio_tap_daq_get_msg_pool_info,
};
