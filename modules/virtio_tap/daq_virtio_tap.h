#ifndef _DAQ_VIRTIO_TAP
#define _DAQ_VIRTIO_TAP
/* Memory allocator which may call os_out_of_memory() if it fails */

extern int virto_add_epoll_fd(virtio_if_t * vif, virtio_vring_t *vring, int idx);

#endif
