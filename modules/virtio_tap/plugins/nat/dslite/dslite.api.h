/*
 * VLIB API definitions 2020-07-24 16:29:08
 * Input file: dslite.api
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
#warning no content included from dslite.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_DSLITE_ADD_DEL_POOL_ADDR_RANGE, vl_api_dslite_add_del_pool_addr_range_t_handler)
vl_msg_id(VL_API_DSLITE_ADD_DEL_POOL_ADDR_RANGE_REPLY, vl_api_dslite_add_del_pool_addr_range_reply_t_handler)
vl_msg_id(VL_API_DSLITE_ADDRESS_DUMP, vl_api_dslite_address_dump_t_handler)
vl_msg_id(VL_API_DSLITE_ADDRESS_DETAILS, vl_api_dslite_address_details_t_handler)
vl_msg_id(VL_API_DSLITE_SET_AFTR_ADDR, vl_api_dslite_set_aftr_addr_t_handler)
vl_msg_id(VL_API_DSLITE_SET_AFTR_ADDR_REPLY, vl_api_dslite_set_aftr_addr_reply_t_handler)
vl_msg_id(VL_API_DSLITE_GET_AFTR_ADDR, vl_api_dslite_get_aftr_addr_t_handler)
vl_msg_id(VL_API_DSLITE_GET_AFTR_ADDR_REPLY, vl_api_dslite_get_aftr_addr_reply_t_handler)
vl_msg_id(VL_API_DSLITE_SET_B4_ADDR, vl_api_dslite_set_b4_addr_t_handler)
vl_msg_id(VL_API_DSLITE_SET_B4_ADDR_REPLY, vl_api_dslite_set_b4_addr_reply_t_handler)
vl_msg_id(VL_API_DSLITE_GET_B4_ADDR, vl_api_dslite_get_b4_addr_t_handler)
vl_msg_id(VL_API_DSLITE_GET_B4_ADDR_REPLY, vl_api_dslite_get_b4_addr_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_dslite_add_del_pool_addr_range_t, 1)
vl_msg_name(vl_api_dslite_add_del_pool_addr_range_reply_t, 1)
vl_msg_name(vl_api_dslite_address_dump_t, 1)
vl_msg_name(vl_api_dslite_address_details_t, 1)
vl_msg_name(vl_api_dslite_set_aftr_addr_t, 1)
vl_msg_name(vl_api_dslite_set_aftr_addr_reply_t, 1)
vl_msg_name(vl_api_dslite_get_aftr_addr_t, 1)
vl_msg_name(vl_api_dslite_get_aftr_addr_reply_t, 1)
vl_msg_name(vl_api_dslite_set_b4_addr_t, 1)
vl_msg_name(vl_api_dslite_set_b4_addr_reply_t, 1)
vl_msg_name(vl_api_dslite_get_b4_addr_t, 1)
vl_msg_name(vl_api_dslite_get_b4_addr_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_dslite \
_(VL_API_DSLITE_ADD_DEL_POOL_ADDR_RANGE, dslite_add_del_pool_addr_range, c448457a) \
_(VL_API_DSLITE_ADD_DEL_POOL_ADDR_RANGE_REPLY, dslite_add_del_pool_addr_range_reply, e8d4e804) \
_(VL_API_DSLITE_ADDRESS_DUMP, dslite_address_dump, 51077d14) \
_(VL_API_DSLITE_ADDRESS_DETAILS, dslite_address_details, ec26d648) \
_(VL_API_DSLITE_SET_AFTR_ADDR, dslite_set_aftr_addr, 1e955f8d) \
_(VL_API_DSLITE_SET_AFTR_ADDR_REPLY, dslite_set_aftr_addr_reply, e8d4e804) \
_(VL_API_DSLITE_GET_AFTR_ADDR, dslite_get_aftr_addr, 51077d14) \
_(VL_API_DSLITE_GET_AFTR_ADDR_REPLY, dslite_get_aftr_addr_reply, 38e30db1) \
_(VL_API_DSLITE_SET_B4_ADDR, dslite_set_b4_addr, 1e955f8d) \
_(VL_API_DSLITE_SET_B4_ADDR_REPLY, dslite_set_b4_addr_reply, e8d4e804) \
_(VL_API_DSLITE_GET_B4_ADDR, dslite_get_b4_addr, 51077d14) \
_(VL_API_DSLITE_GET_B4_ADDR_REPLY, dslite_get_b4_addr_reply, 38e30db1) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "dslite.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_dslite_printfun_types
#define included_dslite_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_dslite_printfun
#define included_dslite_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_dslite_add_del_pool_addr_range_t_print (vl_api_dslite_add_del_pool_addr_range_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dslite_add_del_pool_addr_range_t: */
    s = format(s, "vl_api_dslite_add_del_pool_addr_range_t:");
    s = format(s, "\n%Ustart_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->start_addr, indent);
    s = format(s, "\n%Uend_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->end_addr, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dslite_add_del_pool_addr_range_reply_t_print (vl_api_dslite_add_del_pool_addr_range_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dslite_add_del_pool_addr_range_reply_t: */
    s = format(s, "vl_api_dslite_add_del_pool_addr_range_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dslite_address_dump_t_print (vl_api_dslite_address_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dslite_address_dump_t: */
    s = format(s, "vl_api_dslite_address_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dslite_address_details_t_print (vl_api_dslite_address_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dslite_address_details_t: */
    s = format(s, "vl_api_dslite_address_details_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dslite_set_aftr_addr_t_print (vl_api_dslite_set_aftr_addr_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dslite_set_aftr_addr_t: */
    s = format(s, "vl_api_dslite_set_aftr_addr_t:");
    s = format(s, "\n%Uip4_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip4_addr, indent);
    s = format(s, "\n%Uip6_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->ip6_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dslite_set_aftr_addr_reply_t_print (vl_api_dslite_set_aftr_addr_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dslite_set_aftr_addr_reply_t: */
    s = format(s, "vl_api_dslite_set_aftr_addr_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dslite_get_aftr_addr_t_print (vl_api_dslite_get_aftr_addr_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dslite_get_aftr_addr_t: */
    s = format(s, "vl_api_dslite_get_aftr_addr_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dslite_get_aftr_addr_reply_t_print (vl_api_dslite_get_aftr_addr_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dslite_get_aftr_addr_reply_t: */
    s = format(s, "vl_api_dslite_get_aftr_addr_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uip4_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip4_addr, indent);
    s = format(s, "\n%Uip6_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->ip6_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dslite_set_b4_addr_t_print (vl_api_dslite_set_b4_addr_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dslite_set_b4_addr_t: */
    s = format(s, "vl_api_dslite_set_b4_addr_t:");
    s = format(s, "\n%Uip4_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip4_addr, indent);
    s = format(s, "\n%Uip6_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->ip6_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dslite_set_b4_addr_reply_t_print (vl_api_dslite_set_b4_addr_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dslite_set_b4_addr_reply_t: */
    s = format(s, "vl_api_dslite_set_b4_addr_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dslite_get_b4_addr_t_print (vl_api_dslite_get_b4_addr_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dslite_get_b4_addr_t: */
    s = format(s, "vl_api_dslite_get_b4_addr_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dslite_get_b4_addr_reply_t_print (vl_api_dslite_get_b4_addr_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dslite_get_b4_addr_reply_t: */
    s = format(s, "vl_api_dslite_get_b4_addr_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uip4_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip4_addr, indent);
    s = format(s, "\n%Uip6_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->ip6_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_dslite_endianfun
#define included_dslite_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_dslite_add_del_pool_addr_range_t_endian (vl_api_dslite_add_del_pool_addr_range_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->start_addr);
    vl_api_ip4_address_t_endian(&a->end_addr);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_dslite_add_del_pool_addr_range_reply_t_endian (vl_api_dslite_add_del_pool_addr_range_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_dslite_address_dump_t_endian (vl_api_dslite_address_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_dslite_address_details_t_endian (vl_api_dslite_address_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->ip_address);
}

static inline void vl_api_dslite_set_aftr_addr_t_endian (vl_api_dslite_set_aftr_addr_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->ip4_addr);
    vl_api_ip6_address_t_endian(&a->ip6_addr);
}

static inline void vl_api_dslite_set_aftr_addr_reply_t_endian (vl_api_dslite_set_aftr_addr_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_dslite_get_aftr_addr_t_endian (vl_api_dslite_get_aftr_addr_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_dslite_get_aftr_addr_reply_t_endian (vl_api_dslite_get_aftr_addr_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_ip4_address_t_endian(&a->ip4_addr);
    vl_api_ip6_address_t_endian(&a->ip6_addr);
}

static inline void vl_api_dslite_set_b4_addr_t_endian (vl_api_dslite_set_b4_addr_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->ip4_addr);
    vl_api_ip6_address_t_endian(&a->ip6_addr);
}

static inline void vl_api_dslite_set_b4_addr_reply_t_endian (vl_api_dslite_set_b4_addr_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_dslite_get_b4_addr_t_endian (vl_api_dslite_get_b4_addr_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_dslite_get_b4_addr_reply_t_endian (vl_api_dslite_get_b4_addr_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_ip4_address_t_endian(&a->ip4_addr);
    vl_api_ip6_address_t_endian(&a->ip6_addr);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(dslite.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(dslite.api, 0x4bc15f82)

#endif

