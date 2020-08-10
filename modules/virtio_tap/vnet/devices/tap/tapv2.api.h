/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: tapv2.api
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
#warning no content included from tapv2.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_TAP_CREATE_V2, vl_api_tap_create_v2_t_handler)
vl_msg_id(VL_API_TAP_CREATE_V2_REPLY, vl_api_tap_create_v2_reply_t_handler)
vl_msg_id(VL_API_TAP_DELETE_V2, vl_api_tap_delete_v2_t_handler)
vl_msg_id(VL_API_TAP_DELETE_V2_REPLY, vl_api_tap_delete_v2_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_TAP_V2_DUMP, vl_api_sw_interface_tap_v2_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_TAP_V2_DETAILS, vl_api_sw_interface_tap_v2_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_tap_create_v2_t, 1)
vl_msg_name(vl_api_tap_create_v2_reply_t, 1)
vl_msg_name(vl_api_tap_delete_v2_t, 1)
vl_msg_name(vl_api_tap_delete_v2_reply_t, 1)
vl_msg_name(vl_api_sw_interface_tap_v2_dump_t, 1)
vl_msg_name(vl_api_sw_interface_tap_v2_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_tapv2 \
_(VL_API_TAP_CREATE_V2, tap_create_v2, 445835fd) \
_(VL_API_TAP_CREATE_V2_REPLY, tap_create_v2_reply, 5383d31f) \
_(VL_API_TAP_DELETE_V2, tap_delete_v2, f9e6675e) \
_(VL_API_TAP_DELETE_V2_REPLY, tap_delete_v2_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_TAP_V2_DUMP, sw_interface_tap_v2_dump, f9e6675e) \
_(VL_API_SW_INTERFACE_TAP_V2_DETAILS, sw_interface_tap_v2_details, e53c16de) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "tapv2.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_tapv2_printfun_types
#define included_tapv2_printfun_types

static inline u8 *format_vl_api_tap_flags_t (u8 *s, va_list * args)
{
    vl_api_tap_flags_t *a = va_arg (*args, vl_api_tap_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "TAP_API_FLAG_GSO");
    case 2:
        return format(s, "TAP_API_FLAG_CSUM_OFFLOAD");
    case 4:
        return format(s, "TAP_API_FLAG_PERSIST");
    case 8:
        return format(s, "TAP_API_FLAG_ATTACH");
    case 16:
        return format(s, "TAP_API_FLAG_TUN");
    case 32:
        return format(s, "TAP_API_FLAG_GRO_COALESCE");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_tapv2_printfun
#define included_tapv2_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_tap_create_v2_t_print (vl_api_tap_create_v2_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_tap_create_v2_t: */
    s = format(s, "vl_api_tap_create_v2_t:");
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    s = format(s, "\n%Uuse_random_mac: %u", format_white_space, indent, a->use_random_mac);
    s = format(s, "\n%Umac_address: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac_address, indent);
    s = format(s, "\n%Unum_rx_queues: %u", format_white_space, indent, a->num_rx_queues);
    s = format(s, "\n%Utx_ring_sz: %u", format_white_space, indent, a->tx_ring_sz);
    s = format(s, "\n%Urx_ring_sz: %u", format_white_space, indent, a->rx_ring_sz);
    s = format(s, "\n%Uhost_mtu_set: %u", format_white_space, indent, a->host_mtu_set);
    s = format(s, "\n%Uhost_mtu_size: %u", format_white_space, indent, a->host_mtu_size);
    s = format(s, "\n%Uhost_mac_addr_set: %u", format_white_space, indent, a->host_mac_addr_set);
    s = format(s, "\n%Uhost_mac_addr: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->host_mac_addr, indent);
    s = format(s, "\n%Uhost_ip4_prefix_set: %u", format_white_space, indent, a->host_ip4_prefix_set);
    s = format(s, "\n%Uhost_ip4_prefix: %U", format_white_space, indent, format_vl_api_ip4_address_with_prefix_t, &a->host_ip4_prefix, indent);
    s = format(s, "\n%Uhost_ip6_prefix_set: %u", format_white_space, indent, a->host_ip6_prefix_set);
    s = format(s, "\n%Uhost_ip6_prefix: %U", format_white_space, indent, format_vl_api_ip6_address_with_prefix_t, &a->host_ip6_prefix, indent);
    s = format(s, "\n%Uhost_ip4_gw_set: %u", format_white_space, indent, a->host_ip4_gw_set);
    s = format(s, "\n%Uhost_ip4_gw: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->host_ip4_gw, indent);
    s = format(s, "\n%Uhost_ip6_gw_set: %u", format_white_space, indent, a->host_ip6_gw_set);
    s = format(s, "\n%Uhost_ip6_gw: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->host_ip6_gw, indent);
    s = format(s, "\n%Utap_flags: %U", format_white_space, indent, format_vl_api_tap_flags_t, &a->tap_flags, indent);
    s = format(s, "\n%Uhost_namespace_set: %u", format_white_space, indent, a->host_namespace_set);
    s = format(s, "\n%Uhost_namespace: %s", format_white_space, indent, a->host_namespace);
    s = format(s, "\n%Uhost_if_name_set: %u", format_white_space, indent, a->host_if_name_set);
    s = format(s, "\n%Uhost_if_name: %s", format_white_space, indent, a->host_if_name);
    s = format(s, "\n%Uhost_bridge_set: %u", format_white_space, indent, a->host_bridge_set);
    s = format(s, "\n%Uhost_bridge: %s", format_white_space, indent, a->host_bridge);
    if (vl_api_string_len(&a->tag) > 0) {
        s = format(s, "\n%Utag: %U", format_white_space, indent, vl_api_format_string, (&a->tag));
    } else {
        s = format(s, "\n%Utag:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_tap_create_v2_reply_t_print (vl_api_tap_create_v2_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_tap_create_v2_reply_t: */
    s = format(s, "vl_api_tap_create_v2_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_tap_delete_v2_t_print (vl_api_tap_delete_v2_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_tap_delete_v2_t: */
    s = format(s, "vl_api_tap_delete_v2_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_tap_delete_v2_reply_t_print (vl_api_tap_delete_v2_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_tap_delete_v2_reply_t: */
    s = format(s, "vl_api_tap_delete_v2_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_tap_v2_dump_t_print (vl_api_sw_interface_tap_v2_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_tap_v2_dump_t: */
    s = format(s, "vl_api_sw_interface_tap_v2_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_tap_v2_details_t_print (vl_api_sw_interface_tap_v2_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_tap_v2_details_t: */
    s = format(s, "vl_api_sw_interface_tap_v2_details_t:");
    s = format(s, "\n%Usw_if_index: %u", format_white_space, indent, a->sw_if_index);
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    s = format(s, "\n%Utx_ring_sz: %u", format_white_space, indent, a->tx_ring_sz);
    s = format(s, "\n%Urx_ring_sz: %u", format_white_space, indent, a->rx_ring_sz);
    s = format(s, "\n%Uhost_mtu_size: %u", format_white_space, indent, a->host_mtu_size);
    s = format(s, "\n%Uhost_mac_addr: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->host_mac_addr, indent);
    s = format(s, "\n%Uhost_ip4_prefix: %U", format_white_space, indent, format_vl_api_ip4_address_with_prefix_t, &a->host_ip4_prefix, indent);
    s = format(s, "\n%Uhost_ip6_prefix: %U", format_white_space, indent, format_vl_api_ip6_address_with_prefix_t, &a->host_ip6_prefix, indent);
    s = format(s, "\n%Utap_flags: %U", format_white_space, indent, format_vl_api_tap_flags_t, &a->tap_flags, indent);
    s = format(s, "\n%Udev_name: %s", format_white_space, indent, a->dev_name);
    s = format(s, "\n%Uhost_if_name: %s", format_white_space, indent, a->host_if_name);
    s = format(s, "\n%Uhost_namespace: %s", format_white_space, indent, a->host_namespace);
    s = format(s, "\n%Uhost_bridge: %s", format_white_space, indent, a->host_bridge);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_tapv2_endianfun
#define included_tapv2_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_tap_flags_t_endian (vl_api_tap_flags_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_tap_create_v2_t_endian (vl_api_tap_create_v2_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u32(a->id);
    /* a->use_random_mac = a->use_random_mac (no-op) */
    vl_api_mac_address_t_endian(&a->mac_address);
    /* a->num_rx_queues = a->num_rx_queues (no-op) */
    a->tx_ring_sz = clib_net_to_host_u16(a->tx_ring_sz);
    a->rx_ring_sz = clib_net_to_host_u16(a->rx_ring_sz);
    /* a->host_mtu_set = a->host_mtu_set (no-op) */
    a->host_mtu_size = clib_net_to_host_u32(a->host_mtu_size);
    /* a->host_mac_addr_set = a->host_mac_addr_set (no-op) */
    vl_api_mac_address_t_endian(&a->host_mac_addr);
    /* a->host_ip4_prefix_set = a->host_ip4_prefix_set (no-op) */
    vl_api_ip4_address_with_prefix_t_endian(&a->host_ip4_prefix);
    /* a->host_ip6_prefix_set = a->host_ip6_prefix_set (no-op) */
    vl_api_ip6_address_with_prefix_t_endian(&a->host_ip6_prefix);
    /* a->host_ip4_gw_set = a->host_ip4_gw_set (no-op) */
    vl_api_ip4_address_t_endian(&a->host_ip4_gw);
    /* a->host_ip6_gw_set = a->host_ip6_gw_set (no-op) */
    vl_api_ip6_address_t_endian(&a->host_ip6_gw);
    vl_api_tap_flags_t_endian(&a->tap_flags);
    /* a->host_namespace_set = a->host_namespace_set (no-op) */
    /* a->host_namespace = a->host_namespace (no-op) */
    /* a->host_if_name_set = a->host_if_name_set (no-op) */
    /* a->host_if_name = a->host_if_name (no-op) */
    /* a->host_bridge_set = a->host_bridge_set (no-op) */
    /* a->host_bridge = a->host_bridge (no-op) */
    /* a->tag = a->tag (no-op) */
}

static inline void vl_api_tap_create_v2_reply_t_endian (vl_api_tap_create_v2_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_tap_delete_v2_t_endian (vl_api_tap_delete_v2_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_tap_delete_v2_reply_t_endian (vl_api_tap_delete_v2_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_tap_v2_dump_t_endian (vl_api_sw_interface_tap_v2_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_sw_interface_tap_v2_details_t_endian (vl_api_sw_interface_tap_v2_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->id = clib_net_to_host_u32(a->id);
    a->tx_ring_sz = clib_net_to_host_u16(a->tx_ring_sz);
    a->rx_ring_sz = clib_net_to_host_u16(a->rx_ring_sz);
    a->host_mtu_size = clib_net_to_host_u32(a->host_mtu_size);
    vl_api_mac_address_t_endian(&a->host_mac_addr);
    vl_api_ip4_address_with_prefix_t_endian(&a->host_ip4_prefix);
    vl_api_ip6_address_with_prefix_t_endian(&a->host_ip6_prefix);
    vl_api_tap_flags_t_endian(&a->tap_flags);
    /* a->dev_name = a->dev_name (no-op) */
    /* a->host_if_name = a->host_if_name (no-op) */
    /* a->host_namespace = a->host_namespace (no-op) */
    /* a->host_bridge = a->host_bridge (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(tapv2.api, 4, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(tapv2.api, 0xb650c61a)

#endif

