/*
 * VLIB API definitions 2020-07-24 16:29:17
 * Input file: stn.api
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
#warning no content included from stn.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_STN_ADD_DEL_RULE, vl_api_stn_add_del_rule_t_handler)
vl_msg_id(VL_API_STN_ADD_DEL_RULE_REPLY, vl_api_stn_add_del_rule_reply_t_handler)
vl_msg_id(VL_API_STN_RULES_DUMP, vl_api_stn_rules_dump_t_handler)
vl_msg_id(VL_API_STN_RULES_DETAILS, vl_api_stn_rules_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_stn_add_del_rule_t, 1)
vl_msg_name(vl_api_stn_add_del_rule_reply_t, 1)
vl_msg_name(vl_api_stn_rules_dump_t, 1)
vl_msg_name(vl_api_stn_rules_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_stn \
_(VL_API_STN_ADD_DEL_RULE, stn_add_del_rule, 53f751e6) \
_(VL_API_STN_ADD_DEL_RULE_REPLY, stn_add_del_rule_reply, e8d4e804) \
_(VL_API_STN_RULES_DUMP, stn_rules_dump, 51077d14) \
_(VL_API_STN_RULES_DETAILS, stn_rules_details, b0f6606c) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "stn.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_stn_printfun_types
#define included_stn_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_stn_printfun
#define included_stn_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

/***** manual: vl_api_stn_add_del_rule_t_print  *****/

static inline void *vl_api_stn_add_del_rule_reply_t_print (vl_api_stn_add_del_rule_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_stn_add_del_rule_reply_t: */
    s = format(s, "vl_api_stn_add_del_rule_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_stn_rules_dump_t_print (vl_api_stn_rules_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_stn_rules_dump_t: */
    s = format(s, "vl_api_stn_rules_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_stn_rules_details_t_print (vl_api_stn_rules_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_stn_rules_details_t: */
    s = format(s, "vl_api_stn_rules_details_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_stn_endianfun
#define included_stn_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_stn_add_del_rule_t_endian (vl_api_stn_add_del_rule_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_t_endian(&a->ip_address);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_stn_add_del_rule_reply_t_endian (vl_api_stn_add_del_rule_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_stn_rules_dump_t_endian (vl_api_stn_rules_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_stn_rules_details_t_endian (vl_api_stn_rules_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_t_endian(&a->ip_address);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(stn.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(stn.api, 0x80cc51b1)

#endif

