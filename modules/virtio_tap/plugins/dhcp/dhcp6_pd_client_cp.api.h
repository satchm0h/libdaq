/*
 * VLIB API definitions 2020-07-24 16:28:47
 * Input file: dhcp6_pd_client_cp.api
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
#warning no content included from dhcp6_pd_client_cp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_DHCP6_PD_CLIENT_ENABLE_DISABLE, vl_api_dhcp6_pd_client_enable_disable_t_handler)
vl_msg_id(VL_API_DHCP6_PD_CLIENT_ENABLE_DISABLE_REPLY, vl_api_dhcp6_pd_client_enable_disable_reply_t_handler)
vl_msg_id(VL_API_IP6_ADD_DEL_ADDRESS_USING_PREFIX, vl_api_ip6_add_del_address_using_prefix_t_handler)
vl_msg_id(VL_API_IP6_ADD_DEL_ADDRESS_USING_PREFIX_REPLY, vl_api_ip6_add_del_address_using_prefix_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_dhcp6_pd_client_enable_disable_t, 1)
vl_msg_name(vl_api_dhcp6_pd_client_enable_disable_reply_t, 1)
vl_msg_name(vl_api_ip6_add_del_address_using_prefix_t, 1)
vl_msg_name(vl_api_ip6_add_del_address_using_prefix_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_dhcp6_pd_client_cp \
_(VL_API_DHCP6_PD_CLIENT_ENABLE_DISABLE, dhcp6_pd_client_enable_disable, a75a0772) \
_(VL_API_DHCP6_PD_CLIENT_ENABLE_DISABLE_REPLY, dhcp6_pd_client_enable_disable_reply, e8d4e804) \
_(VL_API_IP6_ADD_DEL_ADDRESS_USING_PREFIX, ip6_add_del_address_using_prefix, 9b3d11e0) \
_(VL_API_IP6_ADD_DEL_ADDRESS_USING_PREFIX_REPLY, ip6_add_del_address_using_prefix_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "dhcp6_pd_client_cp.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_dhcp6_pd_client_cp_printfun_types
#define included_dhcp6_pd_client_cp_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_dhcp6_pd_client_cp_printfun
#define included_dhcp6_pd_client_cp_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_dhcp6_pd_client_enable_disable_t_print (vl_api_dhcp6_pd_client_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp6_pd_client_enable_disable_t: */
    s = format(s, "vl_api_dhcp6_pd_client_enable_disable_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uprefix_group: %s", format_white_space, indent, a->prefix_group);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp6_pd_client_enable_disable_reply_t_print (vl_api_dhcp6_pd_client_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp6_pd_client_enable_disable_reply_t: */
    s = format(s, "vl_api_dhcp6_pd_client_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip6_add_del_address_using_prefix_t_print (vl_api_ip6_add_del_address_using_prefix_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip6_add_del_address_using_prefix_t: */
    s = format(s, "vl_api_ip6_add_del_address_using_prefix_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uprefix_group: %s", format_white_space, indent, a->prefix_group);
    s = format(s, "\n%Uaddress_with_prefix: %U", format_white_space, indent, format_vl_api_ip6_address_with_prefix_t, &a->address_with_prefix, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip6_add_del_address_using_prefix_reply_t_print (vl_api_ip6_add_del_address_using_prefix_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip6_add_del_address_using_prefix_reply_t: */
    s = format(s, "vl_api_ip6_add_del_address_using_prefix_reply_t:");
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
#ifndef included_dhcp6_pd_client_cp_endianfun
#define included_dhcp6_pd_client_cp_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_dhcp6_pd_client_enable_disable_t_endian (vl_api_dhcp6_pd_client_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->prefix_group = a->prefix_group (no-op) */
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_dhcp6_pd_client_enable_disable_reply_t_endian (vl_api_dhcp6_pd_client_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip6_add_del_address_using_prefix_t_endian (vl_api_ip6_add_del_address_using_prefix_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->prefix_group = a->prefix_group (no-op) */
    vl_api_ip6_address_with_prefix_t_endian(&a->address_with_prefix);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_ip6_add_del_address_using_prefix_reply_t_endian (vl_api_ip6_add_del_address_using_prefix_reply_t *a)
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

vl_api_version_tuple(dhcp6_pd_client_cp.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(dhcp6_pd_client_cp.api, 0x5b1cb936)

#endif

