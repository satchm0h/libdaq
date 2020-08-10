/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: udp.api
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
#warning no content included from udp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_UDP_ENCAP_ADD, vl_api_udp_encap_add_t_handler)
vl_msg_id(VL_API_UDP_ENCAP_ADD_REPLY, vl_api_udp_encap_add_reply_t_handler)
vl_msg_id(VL_API_UDP_ENCAP_DEL, vl_api_udp_encap_del_t_handler)
vl_msg_id(VL_API_UDP_ENCAP_DEL_REPLY, vl_api_udp_encap_del_reply_t_handler)
vl_msg_id(VL_API_UDP_ENCAP_DUMP, vl_api_udp_encap_dump_t_handler)
vl_msg_id(VL_API_UDP_ENCAP_DETAILS, vl_api_udp_encap_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_udp_encap_add_t, 1)
vl_msg_name(vl_api_udp_encap_add_reply_t, 1)
vl_msg_name(vl_api_udp_encap_del_t, 1)
vl_msg_name(vl_api_udp_encap_del_reply_t, 1)
vl_msg_name(vl_api_udp_encap_dump_t, 1)
vl_msg_name(vl_api_udp_encap_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_udp \
_(VL_API_UDP_ENCAP_ADD, udp_encap_add, 61d5fc48) \
_(VL_API_UDP_ENCAP_ADD_REPLY, udp_encap_add_reply, e2fc8294) \
_(VL_API_UDP_ENCAP_DEL, udp_encap_del, 3a91bde5) \
_(VL_API_UDP_ENCAP_DEL_REPLY, udp_encap_del_reply, e8d4e804) \
_(VL_API_UDP_ENCAP_DUMP, udp_encap_dump, 51077d14) \
_(VL_API_UDP_ENCAP_DETAILS, udp_encap_details, 87c82821) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "udp.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_udp_printfun_types
#define included_udp_printfun_types

static inline u8 *format_vl_api_udp_encap_t (u8 *s, va_list * args)
{
    vl_api_udp_encap_t *a = va_arg (*args, vl_api_udp_encap_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Usrc_port: %u", format_white_space, indent, a->src_port);
    s = format(s, "\n%Udst_port: %u", format_white_space, indent, a->dst_port);
    s = format(s, "\n%Usrc_ip: %U", format_white_space, indent, format_vl_api_address_t, &a->src_ip, indent);
    s = format(s, "\n%Udst_ip: %U", format_white_space, indent, format_vl_api_address_t, &a->dst_ip, indent);
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_udp_printfun
#define included_udp_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_udp_encap_add_t_print (vl_api_udp_encap_add_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_udp_encap_add_t: */
    s = format(s, "vl_api_udp_encap_add_t:");
    s = format(s, "\n%Uudp_encap: %U", format_white_space, indent, format_vl_api_udp_encap_t, &a->udp_encap, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_udp_encap_add_reply_t_print (vl_api_udp_encap_add_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_udp_encap_add_reply_t: */
    s = format(s, "vl_api_udp_encap_add_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_udp_encap_del_t_print (vl_api_udp_encap_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_udp_encap_del_t: */
    s = format(s, "vl_api_udp_encap_del_t:");
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_udp_encap_del_reply_t_print (vl_api_udp_encap_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_udp_encap_del_reply_t: */
    s = format(s, "vl_api_udp_encap_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_udp_encap_dump_t_print (vl_api_udp_encap_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_udp_encap_dump_t: */
    s = format(s, "vl_api_udp_encap_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_udp_encap_details_t_print (vl_api_udp_encap_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_udp_encap_details_t: */
    s = format(s, "vl_api_udp_encap_details_t:");
    s = format(s, "\n%Uudp_encap: %U", format_white_space, indent, format_vl_api_udp_encap_t, &a->udp_encap, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_udp_endianfun
#define included_udp_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_udp_encap_t_endian (vl_api_udp_encap_t *a)
{
    int i __attribute__((unused));
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->src_port = clib_net_to_host_u16(a->src_port);
    a->dst_port = clib_net_to_host_u16(a->dst_port);
    vl_api_address_t_endian(&a->src_ip);
    vl_api_address_t_endian(&a->dst_ip);
    a->id = clib_net_to_host_u32(a->id);
}

static inline void vl_api_udp_encap_add_t_endian (vl_api_udp_encap_add_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_udp_encap_t_endian(&a->udp_encap);
}

static inline void vl_api_udp_encap_add_reply_t_endian (vl_api_udp_encap_add_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->id = clib_net_to_host_u32(a->id);
}

static inline void vl_api_udp_encap_del_t_endian (vl_api_udp_encap_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u32(a->id);
}

static inline void vl_api_udp_encap_del_reply_t_endian (vl_api_udp_encap_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_udp_encap_dump_t_endian (vl_api_udp_encap_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_udp_encap_details_t_endian (vl_api_udp_encap_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_udp_encap_t_endian(&a->udp_encap);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(udp.api, 1, 1, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(udp.api, 0x9ef9a909)

#endif

