/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: arp.api
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
#warning no content included from arp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_PROXY_ARP_ADD_DEL, vl_api_proxy_arp_add_del_t_handler)
vl_msg_id(VL_API_PROXY_ARP_ADD_DEL_REPLY, vl_api_proxy_arp_add_del_reply_t_handler)
vl_msg_id(VL_API_PROXY_ARP_DUMP, vl_api_proxy_arp_dump_t_handler)
vl_msg_id(VL_API_PROXY_ARP_DETAILS, vl_api_proxy_arp_details_t_handler)
vl_msg_id(VL_API_PROXY_ARP_INTFC_ENABLE_DISABLE, vl_api_proxy_arp_intfc_enable_disable_t_handler)
vl_msg_id(VL_API_PROXY_ARP_INTFC_ENABLE_DISABLE_REPLY, vl_api_proxy_arp_intfc_enable_disable_reply_t_handler)
vl_msg_id(VL_API_PROXY_ARP_INTFC_DUMP, vl_api_proxy_arp_intfc_dump_t_handler)
vl_msg_id(VL_API_PROXY_ARP_INTFC_DETAILS, vl_api_proxy_arp_intfc_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_proxy_arp_add_del_t, 1)
vl_msg_name(vl_api_proxy_arp_add_del_reply_t, 1)
vl_msg_name(vl_api_proxy_arp_dump_t, 1)
vl_msg_name(vl_api_proxy_arp_details_t, 1)
vl_msg_name(vl_api_proxy_arp_intfc_enable_disable_t, 1)
vl_msg_name(vl_api_proxy_arp_intfc_enable_disable_reply_t, 1)
vl_msg_name(vl_api_proxy_arp_intfc_dump_t, 1)
vl_msg_name(vl_api_proxy_arp_intfc_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_arp \
_(VL_API_PROXY_ARP_ADD_DEL, proxy_arp_add_del, 85486cbd) \
_(VL_API_PROXY_ARP_ADD_DEL_REPLY, proxy_arp_add_del_reply, e8d4e804) \
_(VL_API_PROXY_ARP_DUMP, proxy_arp_dump, 51077d14) \
_(VL_API_PROXY_ARP_DETAILS, proxy_arp_details, 9228c150) \
_(VL_API_PROXY_ARP_INTFC_ENABLE_DISABLE, proxy_arp_intfc_enable_disable, ae6cfcfb) \
_(VL_API_PROXY_ARP_INTFC_ENABLE_DISABLE_REPLY, proxy_arp_intfc_enable_disable_reply, e8d4e804) \
_(VL_API_PROXY_ARP_INTFC_DUMP, proxy_arp_intfc_dump, 51077d14) \
_(VL_API_PROXY_ARP_INTFC_DETAILS, proxy_arp_intfc_details, f6458e5f) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "arp.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_arp_printfun_types
#define included_arp_printfun_types

static inline u8 *format_vl_api_proxy_arp_t (u8 *s, va_list * args)
{
    vl_api_proxy_arp_t *a = va_arg (*args, vl_api_proxy_arp_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Ulow: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->low, indent);
    s = format(s, "\n%Uhi: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->hi, indent);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_arp_printfun
#define included_arp_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_proxy_arp_add_del_t_print (vl_api_proxy_arp_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_proxy_arp_add_del_t: */
    s = format(s, "vl_api_proxy_arp_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uproxy: %U", format_white_space, indent, format_vl_api_proxy_arp_t, &a->proxy, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_proxy_arp_add_del_reply_t_print (vl_api_proxy_arp_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_proxy_arp_add_del_reply_t: */
    s = format(s, "vl_api_proxy_arp_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_proxy_arp_dump_t_print (vl_api_proxy_arp_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_proxy_arp_dump_t: */
    s = format(s, "vl_api_proxy_arp_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_proxy_arp_details_t_print (vl_api_proxy_arp_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_proxy_arp_details_t: */
    s = format(s, "vl_api_proxy_arp_details_t:");
    s = format(s, "\n%Uproxy: %U", format_white_space, indent, format_vl_api_proxy_arp_t, &a->proxy, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_proxy_arp_intfc_enable_disable_t_print (vl_api_proxy_arp_intfc_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_proxy_arp_intfc_enable_disable_t: */
    s = format(s, "vl_api_proxy_arp_intfc_enable_disable_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_proxy_arp_intfc_enable_disable_reply_t_print (vl_api_proxy_arp_intfc_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_proxy_arp_intfc_enable_disable_reply_t: */
    s = format(s, "vl_api_proxy_arp_intfc_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_proxy_arp_intfc_dump_t_print (vl_api_proxy_arp_intfc_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_proxy_arp_intfc_dump_t: */
    s = format(s, "vl_api_proxy_arp_intfc_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_proxy_arp_intfc_details_t_print (vl_api_proxy_arp_intfc_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_proxy_arp_intfc_details_t: */
    s = format(s, "vl_api_proxy_arp_intfc_details_t:");
    s = format(s, "\n%Usw_if_index: %u", format_white_space, indent, a->sw_if_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_arp_endianfun
#define included_arp_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_proxy_arp_t_endian (vl_api_proxy_arp_t *a)
{
    int i __attribute__((unused));
    a->table_id = clib_net_to_host_u32(a->table_id);
    vl_api_ip4_address_t_endian(&a->low);
    vl_api_ip4_address_t_endian(&a->hi);
}

static inline void vl_api_proxy_arp_add_del_t_endian (vl_api_proxy_arp_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_proxy_arp_t_endian(&a->proxy);
}

static inline void vl_api_proxy_arp_add_del_reply_t_endian (vl_api_proxy_arp_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_proxy_arp_dump_t_endian (vl_api_proxy_arp_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_proxy_arp_details_t_endian (vl_api_proxy_arp_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_proxy_arp_t_endian(&a->proxy);
}

static inline void vl_api_proxy_arp_intfc_enable_disable_t_endian (vl_api_proxy_arp_intfc_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_proxy_arp_intfc_enable_disable_reply_t_endian (vl_api_proxy_arp_intfc_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_proxy_arp_intfc_dump_t_endian (vl_api_proxy_arp_intfc_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_proxy_arp_intfc_details_t_endian (vl_api_proxy_arp_intfc_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(arp.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(arp.api, 0xcfdf7292)

#endif

