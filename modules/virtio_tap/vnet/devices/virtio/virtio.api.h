/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: virtio.api
 * Automatically generated: please edit the input file NOT this file!
 */

#include <stdbool.h>
#if defined(vl_msg_id)||defined(vl_union_id) \
    || defined(vl_printfun) ||defined(vl_endianfun) \
    || defined(vl_api_version)||defined(vl_typedefs) \
    || defined(vl_msg_name)||defined(vl_msg_name_crc_list) \
    || defined(vl_api_version_tuple)
/* ok, something was selected */
#else
#warning no content included from virtio.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#include <vlib/pci/pci_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_VIRTIO_PCI_CREATE, vl_api_virtio_pci_create_t_handler)
vl_msg_id(VL_API_VIRTIO_PCI_CREATE_REPLY, vl_api_virtio_pci_create_reply_t_handler)
vl_msg_id(VL_API_VIRTIO_PCI_DELETE, vl_api_virtio_pci_delete_t_handler)
vl_msg_id(VL_API_VIRTIO_PCI_DELETE_REPLY, vl_api_virtio_pci_delete_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_VIRTIO_PCI_DUMP, vl_api_sw_interface_virtio_pci_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_VIRTIO_PCI_DETAILS, vl_api_sw_interface_virtio_pci_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_virtio_pci_create_t, 1)
vl_msg_name(vl_api_virtio_pci_create_reply_t, 1)
vl_msg_name(vl_api_virtio_pci_delete_t, 1)
vl_msg_name(vl_api_virtio_pci_delete_reply_t, 1)
vl_msg_name(vl_api_sw_interface_virtio_pci_dump_t, 1)
vl_msg_name(vl_api_sw_interface_virtio_pci_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_virtio \
_(VL_API_VIRTIO_PCI_CREATE, virtio_pci_create, a9f1370c) \
_(VL_API_VIRTIO_PCI_CREATE_REPLY, virtio_pci_create_reply, 5383d31f) \
_(VL_API_VIRTIO_PCI_DELETE, virtio_pci_delete, f9e6675e) \
_(VL_API_VIRTIO_PCI_DELETE_REPLY, virtio_pci_delete_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_VIRTIO_PCI_DUMP, sw_interface_virtio_pci_dump, 51077d14) \
_(VL_API_SW_INTERFACE_VIRTIO_PCI_DETAILS, sw_interface_virtio_pci_details, 16187f3a) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "virtio.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_virtio_printfun_types
#define included_virtio_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_virtio_printfun
#define included_virtio_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_virtio_pci_create_t_print (vl_api_virtio_pci_create_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_virtio_pci_create_t: */
    s = format(s, "vl_api_virtio_pci_create_t:");
    s = format(s, "\n%Upci_addr: %U", format_white_space, indent, format_vl_api_pci_address_t, &a->pci_addr, indent);
    s = format(s, "\n%Uuse_random_mac: %u", format_white_space, indent, a->use_random_mac);
    s = format(s, "\n%Umac_address: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac_address, indent);
    s = format(s, "\n%Ugso_enabled: %u", format_white_space, indent, a->gso_enabled);
    s = format(s, "\n%Uchecksum_offload_enabled: %u", format_white_space, indent, a->checksum_offload_enabled);
    s = format(s, "\n%Ufeatures: %llu", format_white_space, indent, a->features);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_virtio_pci_create_reply_t_print (vl_api_virtio_pci_create_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_virtio_pci_create_reply_t: */
    s = format(s, "vl_api_virtio_pci_create_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_virtio_pci_delete_t_print (vl_api_virtio_pci_delete_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_virtio_pci_delete_t: */
    s = format(s, "vl_api_virtio_pci_delete_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_virtio_pci_delete_reply_t_print (vl_api_virtio_pci_delete_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_virtio_pci_delete_reply_t: */
    s = format(s, "vl_api_virtio_pci_delete_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_virtio_pci_dump_t_print (vl_api_sw_interface_virtio_pci_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_virtio_pci_dump_t: */
    s = format(s, "vl_api_sw_interface_virtio_pci_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_virtio_pci_details_t_print (vl_api_sw_interface_virtio_pci_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_virtio_pci_details_t: */
    s = format(s, "vl_api_sw_interface_virtio_pci_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Upci_addr: %U", format_white_space, indent, format_vl_api_pci_address_t, &a->pci_addr, indent);
    s = format(s, "\n%Umac_addr: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac_addr, indent);
    s = format(s, "\n%Utx_ring_sz: %u", format_white_space, indent, a->tx_ring_sz);
    s = format(s, "\n%Urx_ring_sz: %u", format_white_space, indent, a->rx_ring_sz);
    s = format(s, "\n%Ufeatures: %llu", format_white_space, indent, a->features);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_virtio_endianfun
#define included_virtio_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_virtio_pci_create_t_endian (vl_api_virtio_pci_create_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_pci_address_t_endian(&a->pci_addr);
    /* a->use_random_mac = a->use_random_mac (no-op) */
    vl_api_mac_address_t_endian(&a->mac_address);
    /* a->gso_enabled = a->gso_enabled (no-op) */
    /* a->checksum_offload_enabled = a->checksum_offload_enabled (no-op) */
    a->features = clib_net_to_host_u64(a->features);
}

static inline void vl_api_virtio_pci_create_reply_t_endian (vl_api_virtio_pci_create_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_virtio_pci_delete_t_endian (vl_api_virtio_pci_delete_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_virtio_pci_delete_reply_t_endian (vl_api_virtio_pci_delete_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_virtio_pci_dump_t_endian (vl_api_sw_interface_virtio_pci_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_sw_interface_virtio_pci_details_t_endian (vl_api_sw_interface_virtio_pci_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_pci_address_t_endian(&a->pci_addr);
    vl_api_mac_address_t_endian(&a->mac_addr);
    a->tx_ring_sz = clib_net_to_host_u16(a->tx_ring_sz);
    a->rx_ring_sz = clib_net_to_host_u16(a->rx_ring_sz);
    a->features = clib_net_to_host_u64(a->features);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(virtio.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(virtio.api, 0xbeb616a4)

#endif

