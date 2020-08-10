/*
 * VLIB API definitions 2020-07-24 16:28:59
 * Input file: udp_ping.api
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
#warning no content included from udp_ping.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_UDP_PING_ADD_DEL, vl_api_udp_ping_add_del_t_handler)
vl_msg_id(VL_API_UDP_PING_ADD_DEL_REPLY, vl_api_udp_ping_add_del_reply_t_handler)
vl_msg_id(VL_API_UDP_PING_EXPORT, vl_api_udp_ping_export_t_handler)
vl_msg_id(VL_API_UDP_PING_EXPORT_REPLY, vl_api_udp_ping_export_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_udp_ping_add_del_t, 1)
vl_msg_name(vl_api_udp_ping_add_del_reply_t, 1)
vl_msg_name(vl_api_udp_ping_export_t, 1)
vl_msg_name(vl_api_udp_ping_export_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_udp_ping \
_(VL_API_UDP_PING_ADD_DEL, udp_ping_add_del, c692b188) \
_(VL_API_UDP_PING_ADD_DEL_REPLY, udp_ping_add_del_reply, e8d4e804) \
_(VL_API_UDP_PING_EXPORT, udp_ping_export, b3e225d2) \
_(VL_API_UDP_PING_EXPORT_REPLY, udp_ping_export_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "udp_ping.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_udp_ping_printfun_types
#define included_udp_ping_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_udp_ping_printfun
#define included_udp_ping_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_udp_ping_add_del_t_print (vl_api_udp_ping_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_udp_ping_add_del_t: */
    s = format(s, "vl_api_udp_ping_add_del_t:");
    s = format(s, "\n%Usrc_ip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->src_ip_address, indent);
    s = format(s, "\n%Udst_ip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->dst_ip_address, indent);
    s = format(s, "\n%Ustart_src_port: %u", format_white_space, indent, a->start_src_port);
    s = format(s, "\n%Uend_src_port: %u", format_white_space, indent, a->end_src_port);
    s = format(s, "\n%Ustart_dst_port: %u", format_white_space, indent, a->start_dst_port);
    s = format(s, "\n%Uend_dst_port: %u", format_white_space, indent, a->end_dst_port);
    s = format(s, "\n%Uinterval: %u", format_white_space, indent, a->interval);
    s = format(s, "\n%Udis: %u", format_white_space, indent, a->dis);
    s = format(s, "\n%Ufault_det: %u", format_white_space, indent, a->fault_det);
    s = format(s, "\n%Ureserve: %U", format_white_space, indent, format_hex_bytes, a, 3);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_udp_ping_add_del_reply_t_print (vl_api_udp_ping_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_udp_ping_add_del_reply_t: */
    s = format(s, "vl_api_udp_ping_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_udp_ping_export_t_print (vl_api_udp_ping_export_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_udp_ping_export_t: */
    s = format(s, "vl_api_udp_ping_export_t:");
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_udp_ping_export_reply_t_print (vl_api_udp_ping_export_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_udp_ping_export_reply_t: */
    s = format(s, "vl_api_udp_ping_export_reply_t:");
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
#ifndef included_udp_ping_endianfun
#define included_udp_ping_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_udp_ping_add_del_t_endian (vl_api_udp_ping_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_t_endian(&a->src_ip_address);
    vl_api_address_t_endian(&a->dst_ip_address);
    a->start_src_port = clib_net_to_host_u16(a->start_src_port);
    a->end_src_port = clib_net_to_host_u16(a->end_src_port);
    a->start_dst_port = clib_net_to_host_u16(a->start_dst_port);
    a->end_dst_port = clib_net_to_host_u16(a->end_dst_port);
    a->interval = clib_net_to_host_u16(a->interval);
    /* a->dis = a->dis (no-op) */
    /* a->fault_det = a->fault_det (no-op) */
    /* a->reserve = a->reserve (no-op) */
}

static inline void vl_api_udp_ping_add_del_reply_t_endian (vl_api_udp_ping_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_udp_ping_export_t_endian (vl_api_udp_ping_export_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_udp_ping_export_reply_t_endian (vl_api_udp_ping_export_reply_t *a)
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

vl_api_version_tuple(udp_ping.api, 3, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(udp_ping.api, 0xa88fa111)

#endif

