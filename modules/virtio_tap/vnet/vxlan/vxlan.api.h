/*
 * VLIB API definitions 2020-07-24 16:28:06
 * Input file: vxlan.api
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
#warning no content included from vxlan.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_VXLAN_ADD_DEL_TUNNEL, vl_api_vxlan_add_del_tunnel_t_handler)
vl_msg_id(VL_API_VXLAN_ADD_DEL_TUNNEL_REPLY, vl_api_vxlan_add_del_tunnel_reply_t_handler)
vl_msg_id(VL_API_VXLAN_TUNNEL_DUMP, vl_api_vxlan_tunnel_dump_t_handler)
vl_msg_id(VL_API_VXLAN_TUNNEL_DETAILS, vl_api_vxlan_tunnel_details_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_VXLAN_BYPASS, vl_api_sw_interface_set_vxlan_bypass_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_VXLAN_BYPASS_REPLY, vl_api_sw_interface_set_vxlan_bypass_reply_t_handler)
vl_msg_id(VL_API_VXLAN_OFFLOAD_RX, vl_api_vxlan_offload_rx_t_handler)
vl_msg_id(VL_API_VXLAN_OFFLOAD_RX_REPLY, vl_api_vxlan_offload_rx_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_vxlan_add_del_tunnel_t, 1)
vl_msg_name(vl_api_vxlan_add_del_tunnel_reply_t, 1)
vl_msg_name(vl_api_vxlan_tunnel_dump_t, 1)
vl_msg_name(vl_api_vxlan_tunnel_details_t, 1)
vl_msg_name(vl_api_sw_interface_set_vxlan_bypass_t, 1)
vl_msg_name(vl_api_sw_interface_set_vxlan_bypass_reply_t, 1)
vl_msg_name(vl_api_vxlan_offload_rx_t, 1)
vl_msg_name(vl_api_vxlan_offload_rx_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_vxlan \
_(VL_API_VXLAN_ADD_DEL_TUNNEL, vxlan_add_del_tunnel, a35dc8f5) \
_(VL_API_VXLAN_ADD_DEL_TUNNEL_REPLY, vxlan_add_del_tunnel_reply, 5383d31f) \
_(VL_API_VXLAN_TUNNEL_DUMP, vxlan_tunnel_dump, f9e6675e) \
_(VL_API_VXLAN_TUNNEL_DETAILS, vxlan_tunnel_details, e782f70f) \
_(VL_API_SW_INTERFACE_SET_VXLAN_BYPASS, sw_interface_set_vxlan_bypass, 65247409) \
_(VL_API_SW_INTERFACE_SET_VXLAN_BYPASS_REPLY, sw_interface_set_vxlan_bypass_reply, e8d4e804) \
_(VL_API_VXLAN_OFFLOAD_RX, vxlan_offload_rx, 89a1564b) \
_(VL_API_VXLAN_OFFLOAD_RX_REPLY, vxlan_offload_rx_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "vxlan.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_vxlan_printfun_types
#define included_vxlan_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_vxlan_printfun
#define included_vxlan_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_vxlan_add_del_tunnel_t_print (vl_api_vxlan_add_del_tunnel_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_add_del_tunnel_t: */
    s = format(s, "vl_api_vxlan_add_del_tunnel_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uinstance: %u", format_white_space, indent, a->instance);
    s = format(s, "\n%Usrc_address: %U", format_white_space, indent, format_vl_api_address_t, &a->src_address, indent);
    s = format(s, "\n%Udst_address: %U", format_white_space, indent, format_vl_api_address_t, &a->dst_address, indent);
    s = format(s, "\n%Umcast_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->mcast_sw_if_index, indent);
    s = format(s, "\n%Uencap_vrf_id: %u", format_white_space, indent, a->encap_vrf_id);
    s = format(s, "\n%Udecap_next_index: %u", format_white_space, indent, a->decap_next_index);
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_add_del_tunnel_reply_t_print (vl_api_vxlan_add_del_tunnel_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_add_del_tunnel_reply_t: */
    s = format(s, "vl_api_vxlan_add_del_tunnel_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_tunnel_dump_t_print (vl_api_vxlan_tunnel_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_tunnel_dump_t: */
    s = format(s, "vl_api_vxlan_tunnel_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_tunnel_details_t_print (vl_api_vxlan_tunnel_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_tunnel_details_t: */
    s = format(s, "vl_api_vxlan_tunnel_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uinstance: %u", format_white_space, indent, a->instance);
    s = format(s, "\n%Usrc_address: %U", format_white_space, indent, format_vl_api_address_t, &a->src_address, indent);
    s = format(s, "\n%Udst_address: %U", format_white_space, indent, format_vl_api_address_t, &a->dst_address, indent);
    s = format(s, "\n%Umcast_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->mcast_sw_if_index, indent);
    s = format(s, "\n%Uencap_vrf_id: %u", format_white_space, indent, a->encap_vrf_id);
    s = format(s, "\n%Udecap_next_index: %u", format_white_space, indent, a->decap_next_index);
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_vxlan_bypass_t_print (vl_api_sw_interface_set_vxlan_bypass_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_vxlan_bypass_t: */
    s = format(s, "vl_api_sw_interface_set_vxlan_bypass_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_vxlan_bypass_reply_t_print (vl_api_sw_interface_set_vxlan_bypass_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_vxlan_bypass_reply_t: */
    s = format(s, "vl_api_sw_interface_set_vxlan_bypass_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_offload_rx_t_print (vl_api_vxlan_offload_rx_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_offload_rx_t: */
    s = format(s, "vl_api_vxlan_offload_rx_t:");
    s = format(s, "\n%Uhw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->hw_if_index, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_offload_rx_reply_t_print (vl_api_vxlan_offload_rx_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_offload_rx_reply_t: */
    s = format(s, "vl_api_vxlan_offload_rx_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_vxlan_endianfun
#define included_vxlan_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_vxlan_add_del_tunnel_t_endian (vl_api_vxlan_add_del_tunnel_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->instance = clib_net_to_host_u32(a->instance);
    vl_api_address_t_endian(&a->src_address);
    vl_api_address_t_endian(&a->dst_address);
    vl_api_interface_index_t_endian(&a->mcast_sw_if_index);
    a->encap_vrf_id = clib_net_to_host_u32(a->encap_vrf_id);
    a->decap_next_index = clib_net_to_host_u32(a->decap_next_index);
    a->vni = clib_net_to_host_u32(a->vni);
}

static inline void vl_api_vxlan_add_del_tunnel_reply_t_endian (vl_api_vxlan_add_del_tunnel_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_vxlan_tunnel_dump_t_endian (vl_api_vxlan_tunnel_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_vxlan_tunnel_details_t_endian (vl_api_vxlan_tunnel_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->instance = clib_net_to_host_u32(a->instance);
    vl_api_address_t_endian(&a->src_address);
    vl_api_address_t_endian(&a->dst_address);
    vl_api_interface_index_t_endian(&a->mcast_sw_if_index);
    a->encap_vrf_id = clib_net_to_host_u32(a->encap_vrf_id);
    a->decap_next_index = clib_net_to_host_u32(a->decap_next_index);
    a->vni = clib_net_to_host_u32(a->vni);
}

static inline void vl_api_sw_interface_set_vxlan_bypass_t_endian (vl_api_sw_interface_set_vxlan_bypass_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_sw_interface_set_vxlan_bypass_reply_t_endian (vl_api_sw_interface_set_vxlan_bypass_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_vxlan_offload_rx_t_endian (vl_api_vxlan_offload_rx_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->hw_if_index);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_vxlan_offload_rx_reply_t_endian (vl_api_vxlan_offload_rx_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(vxlan.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(vxlan.api, 0x6e2de7f4)

#endif

