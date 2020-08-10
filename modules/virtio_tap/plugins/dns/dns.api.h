/*
 * VLIB API definitions 2020-07-24 16:28:48
 * Input file: dns.api
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
#warning no content included from dns.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_DNS_ENABLE_DISABLE, vl_api_dns_enable_disable_t_handler)
vl_msg_id(VL_API_DNS_ENABLE_DISABLE_REPLY, vl_api_dns_enable_disable_reply_t_handler)
vl_msg_id(VL_API_DNS_NAME_SERVER_ADD_DEL, vl_api_dns_name_server_add_del_t_handler)
vl_msg_id(VL_API_DNS_NAME_SERVER_ADD_DEL_REPLY, vl_api_dns_name_server_add_del_reply_t_handler)
vl_msg_id(VL_API_DNS_RESOLVE_NAME, vl_api_dns_resolve_name_t_handler)
vl_msg_id(VL_API_DNS_RESOLVE_NAME_REPLY, vl_api_dns_resolve_name_reply_t_handler)
vl_msg_id(VL_API_DNS_RESOLVE_IP, vl_api_dns_resolve_ip_t_handler)
vl_msg_id(VL_API_DNS_RESOLVE_IP_REPLY, vl_api_dns_resolve_ip_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_dns_enable_disable_t, 1)
vl_msg_name(vl_api_dns_enable_disable_reply_t, 1)
vl_msg_name(vl_api_dns_name_server_add_del_t, 1)
vl_msg_name(vl_api_dns_name_server_add_del_reply_t, 1)
vl_msg_name(vl_api_dns_resolve_name_t, 1)
vl_msg_name(vl_api_dns_resolve_name_reply_t, 1)
vl_msg_name(vl_api_dns_resolve_ip_t, 1)
vl_msg_name(vl_api_dns_resolve_ip_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_dns \
_(VL_API_DNS_ENABLE_DISABLE, dns_enable_disable, 8050327d) \
_(VL_API_DNS_ENABLE_DISABLE_REPLY, dns_enable_disable_reply, e8d4e804) \
_(VL_API_DNS_NAME_SERVER_ADD_DEL, dns_name_server_add_del, 3bb05d8c) \
_(VL_API_DNS_NAME_SERVER_ADD_DEL_REPLY, dns_name_server_add_del_reply, e8d4e804) \
_(VL_API_DNS_RESOLVE_NAME, dns_resolve_name, c6566676) \
_(VL_API_DNS_RESOLVE_NAME_REPLY, dns_resolve_name_reply, c2d758c3) \
_(VL_API_DNS_RESOLVE_IP, dns_resolve_ip, ae96a1a3) \
_(VL_API_DNS_RESOLVE_IP_REPLY, dns_resolve_ip_reply, 49ed78d6) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "dns.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_dns_printfun_types
#define included_dns_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_dns_printfun
#define included_dns_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

/***** manual: vl_api_dns_enable_disable_t_print  *****/

static inline void *vl_api_dns_enable_disable_reply_t_print (vl_api_dns_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dns_enable_disable_reply_t: */
    s = format(s, "vl_api_dns_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_dns_name_server_add_del_t_print  *****/

static inline void *vl_api_dns_name_server_add_del_reply_t_print (vl_api_dns_name_server_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dns_name_server_add_del_reply_t: */
    s = format(s, "vl_api_dns_name_server_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_dns_resolve_name_t_print  *****/

static inline void *vl_api_dns_resolve_name_reply_t_print (vl_api_dns_resolve_name_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dns_resolve_name_reply_t: */
    s = format(s, "vl_api_dns_resolve_name_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uip4_set: %u", format_white_space, indent, a->ip4_set);
    s = format(s, "\n%Uip6_set: %u", format_white_space, indent, a->ip6_set);
    s = format(s, "\n%Uip4_address: %U", format_white_space, indent, format_hex_bytes, a, 4);
    s = format(s, "\n%Uip6_address: %U", format_white_space, indent, format_hex_bytes, a, 16);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_dns_resolve_ip_t_print  *****/

static inline void *vl_api_dns_resolve_ip_reply_t_print (vl_api_dns_resolve_ip_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dns_resolve_ip_reply_t: */
    s = format(s, "vl_api_dns_resolve_ip_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uname: %U", format_white_space, indent, format_hex_bytes, a, 256);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_dns_endianfun
#define included_dns_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_dns_enable_disable_t_endian (vl_api_dns_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_dns_enable_disable_reply_t_endian (vl_api_dns_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_dns_name_server_add_del_t_endian (vl_api_dns_name_server_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip6 = a->is_ip6 (no-op) */
    /* a->is_add = a->is_add (no-op) */
    /* a->server_address = a->server_address (no-op) */
}

static inline void vl_api_dns_name_server_add_del_reply_t_endian (vl_api_dns_name_server_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_dns_resolve_name_t_endian (vl_api_dns_resolve_name_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
}

static inline void vl_api_dns_resolve_name_reply_t_endian (vl_api_dns_resolve_name_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->ip4_set = a->ip4_set (no-op) */
    /* a->ip6_set = a->ip6_set (no-op) */
    /* a->ip4_address = a->ip4_address (no-op) */
    /* a->ip6_address = a->ip6_address (no-op) */
}

static inline void vl_api_dns_resolve_ip_t_endian (vl_api_dns_resolve_ip_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip6 = a->is_ip6 (no-op) */
    /* a->address = a->address (no-op) */
}

static inline void vl_api_dns_resolve_ip_reply_t_endian (vl_api_dns_resolve_ip_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->name = a->name (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(dns.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(dns.api, 0x269575cd)

#endif

