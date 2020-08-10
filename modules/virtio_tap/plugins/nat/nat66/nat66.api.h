/*
 * VLIB API definitions 2020-07-24 16:29:08
 * Input file: nat66.api
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
#warning no content included from nat66.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/interface_types.api.h>
#include <nat/nat_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_NAT66_ADD_DEL_INTERFACE, vl_api_nat66_add_del_interface_t_handler)
vl_msg_id(VL_API_NAT66_ADD_DEL_INTERFACE_REPLY, vl_api_nat66_add_del_interface_reply_t_handler)
vl_msg_id(VL_API_NAT66_INTERFACE_DUMP, vl_api_nat66_interface_dump_t_handler)
vl_msg_id(VL_API_NAT66_INTERFACE_DETAILS, vl_api_nat66_interface_details_t_handler)
vl_msg_id(VL_API_NAT66_ADD_DEL_STATIC_MAPPING, vl_api_nat66_add_del_static_mapping_t_handler)
vl_msg_id(VL_API_NAT66_ADD_DEL_STATIC_MAPPING_REPLY, vl_api_nat66_add_del_static_mapping_reply_t_handler)
vl_msg_id(VL_API_NAT66_STATIC_MAPPING_DUMP, vl_api_nat66_static_mapping_dump_t_handler)
vl_msg_id(VL_API_NAT66_STATIC_MAPPING_DETAILS, vl_api_nat66_static_mapping_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_nat66_add_del_interface_t, 1)
vl_msg_name(vl_api_nat66_add_del_interface_reply_t, 1)
vl_msg_name(vl_api_nat66_interface_dump_t, 1)
vl_msg_name(vl_api_nat66_interface_details_t, 1)
vl_msg_name(vl_api_nat66_add_del_static_mapping_t, 1)
vl_msg_name(vl_api_nat66_add_del_static_mapping_reply_t, 1)
vl_msg_name(vl_api_nat66_static_mapping_dump_t, 1)
vl_msg_name(vl_api_nat66_static_mapping_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_nat66 \
_(VL_API_NAT66_ADD_DEL_INTERFACE, nat66_add_del_interface, f3699b83) \
_(VL_API_NAT66_ADD_DEL_INTERFACE_REPLY, nat66_add_del_interface_reply, e8d4e804) \
_(VL_API_NAT66_INTERFACE_DUMP, nat66_interface_dump, 51077d14) \
_(VL_API_NAT66_INTERFACE_DETAILS, nat66_interface_details, 5d286289) \
_(VL_API_NAT66_ADD_DEL_STATIC_MAPPING, nat66_add_del_static_mapping, fb64e50b) \
_(VL_API_NAT66_ADD_DEL_STATIC_MAPPING_REPLY, nat66_add_del_static_mapping_reply, e8d4e804) \
_(VL_API_NAT66_STATIC_MAPPING_DUMP, nat66_static_mapping_dump, 51077d14) \
_(VL_API_NAT66_STATIC_MAPPING_DETAILS, nat66_static_mapping_details, 5c568448) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "nat66.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_nat66_printfun_types
#define included_nat66_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_nat66_printfun
#define included_nat66_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_nat66_add_del_interface_t_print (vl_api_nat66_add_del_interface_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat66_add_del_interface_t: */
    s = format(s, "vl_api_nat66_add_del_interface_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat66_add_del_interface_reply_t_print (vl_api_nat66_add_del_interface_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat66_add_del_interface_reply_t: */
    s = format(s, "vl_api_nat66_add_del_interface_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat66_interface_dump_t_print (vl_api_nat66_interface_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat66_interface_dump_t: */
    s = format(s, "vl_api_nat66_interface_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat66_interface_details_t_print (vl_api_nat66_interface_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat66_interface_details_t: */
    s = format(s, "vl_api_nat66_interface_details_t:");
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat66_add_del_static_mapping_t_print (vl_api_nat66_add_del_static_mapping_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat66_add_del_static_mapping_t: */
    s = format(s, "vl_api_nat66_add_del_static_mapping_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Ulocal_ip_address: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->local_ip_address, indent);
    s = format(s, "\n%Uexternal_ip_address: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->external_ip_address, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat66_add_del_static_mapping_reply_t_print (vl_api_nat66_add_del_static_mapping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat66_add_del_static_mapping_reply_t: */
    s = format(s, "vl_api_nat66_add_del_static_mapping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat66_static_mapping_dump_t_print (vl_api_nat66_static_mapping_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat66_static_mapping_dump_t: */
    s = format(s, "vl_api_nat66_static_mapping_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat66_static_mapping_details_t_print (vl_api_nat66_static_mapping_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat66_static_mapping_details_t: */
    s = format(s, "vl_api_nat66_static_mapping_details_t:");
    s = format(s, "\n%Ulocal_ip_address: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->local_ip_address, indent);
    s = format(s, "\n%Uexternal_ip_address: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->external_ip_address, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Utotal_bytes: %llu", format_white_space, indent, a->total_bytes);
    s = format(s, "\n%Utotal_pkts: %llu", format_white_space, indent, a->total_pkts);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_nat66_endianfun
#define included_nat66_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_nat66_add_del_interface_t_endian (vl_api_nat66_add_del_interface_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_nat66_add_del_interface_reply_t_endian (vl_api_nat66_add_del_interface_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat66_interface_dump_t_endian (vl_api_nat66_interface_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat66_interface_details_t_endian (vl_api_nat66_interface_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_nat66_add_del_static_mapping_t_endian (vl_api_nat66_add_del_static_mapping_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_ip6_address_t_endian(&a->local_ip_address);
    vl_api_ip6_address_t_endian(&a->external_ip_address);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

static inline void vl_api_nat66_add_del_static_mapping_reply_t_endian (vl_api_nat66_add_del_static_mapping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat66_static_mapping_dump_t_endian (vl_api_nat66_static_mapping_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat66_static_mapping_details_t_endian (vl_api_nat66_static_mapping_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_address_t_endian(&a->local_ip_address);
    vl_api_ip6_address_t_endian(&a->external_ip_address);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    a->total_bytes = clib_net_to_host_u64(a->total_bytes);
    a->total_pkts = clib_net_to_host_u64(a->total_pkts);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(nat66.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(nat66.api, 0xc2f919b5)

#endif

