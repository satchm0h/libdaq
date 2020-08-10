/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: cop.api
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
#warning no content included from cop.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_COP_INTERFACE_ENABLE_DISABLE, vl_api_cop_interface_enable_disable_t_handler)
vl_msg_id(VL_API_COP_INTERFACE_ENABLE_DISABLE_REPLY, vl_api_cop_interface_enable_disable_reply_t_handler)
vl_msg_id(VL_API_COP_WHITELIST_ENABLE_DISABLE, vl_api_cop_whitelist_enable_disable_t_handler)
vl_msg_id(VL_API_COP_WHITELIST_ENABLE_DISABLE_REPLY, vl_api_cop_whitelist_enable_disable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_cop_interface_enable_disable_t, 1)
vl_msg_name(vl_api_cop_interface_enable_disable_reply_t, 1)
vl_msg_name(vl_api_cop_whitelist_enable_disable_t, 1)
vl_msg_name(vl_api_cop_whitelist_enable_disable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_cop \
_(VL_API_COP_INTERFACE_ENABLE_DISABLE, cop_interface_enable_disable, 5501adee) \
_(VL_API_COP_INTERFACE_ENABLE_DISABLE_REPLY, cop_interface_enable_disable_reply, e8d4e804) \
_(VL_API_COP_WHITELIST_ENABLE_DISABLE, cop_whitelist_enable_disable, debe13ea) \
_(VL_API_COP_WHITELIST_ENABLE_DISABLE_REPLY, cop_whitelist_enable_disable_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "cop.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_cop_printfun_types
#define included_cop_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_cop_printfun
#define included_cop_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_cop_interface_enable_disable_t_print (vl_api_cop_interface_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_cop_interface_enable_disable_t: */
    s = format(s, "vl_api_cop_interface_enable_disable_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uenable_disable: %u", format_white_space, indent, a->enable_disable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_cop_interface_enable_disable_reply_t_print (vl_api_cop_interface_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_cop_interface_enable_disable_reply_t: */
    s = format(s, "vl_api_cop_interface_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_cop_whitelist_enable_disable_t_print (vl_api_cop_whitelist_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_cop_whitelist_enable_disable_t: */
    s = format(s, "vl_api_cop_whitelist_enable_disable_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ufib_id: %u", format_white_space, indent, a->fib_id);
    s = format(s, "\n%Uip4: %u", format_white_space, indent, a->ip4);
    s = format(s, "\n%Uip6: %u", format_white_space, indent, a->ip6);
    s = format(s, "\n%Udefault_cop: %u", format_white_space, indent, a->default_cop);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_cop_whitelist_enable_disable_reply_t_print (vl_api_cop_whitelist_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_cop_whitelist_enable_disable_reply_t: */
    s = format(s, "vl_api_cop_whitelist_enable_disable_reply_t:");
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
#ifndef included_cop_endianfun
#define included_cop_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_cop_interface_enable_disable_t_endian (vl_api_cop_interface_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->enable_disable = a->enable_disable (no-op) */
}

static inline void vl_api_cop_interface_enable_disable_reply_t_endian (vl_api_cop_interface_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_cop_whitelist_enable_disable_t_endian (vl_api_cop_whitelist_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->fib_id = clib_net_to_host_u32(a->fib_id);
    /* a->ip4 = a->ip4 (no-op) */
    /* a->ip6 = a->ip6 (no-op) */
    /* a->default_cop = a->default_cop (no-op) */
}

static inline void vl_api_cop_whitelist_enable_disable_reply_t_endian (vl_api_cop_whitelist_enable_disable_reply_t *a)
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

vl_api_version_tuple(cop.api, 1, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(cop.api, 0x17f9c4d0)

#endif

