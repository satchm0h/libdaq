/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: lldp.api
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
#warning no content included from lldp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_LLDP_CONFIG, vl_api_lldp_config_t_handler)
vl_msg_id(VL_API_LLDP_CONFIG_REPLY, vl_api_lldp_config_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_LLDP, vl_api_sw_interface_set_lldp_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_LLDP_REPLY, vl_api_sw_interface_set_lldp_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_lldp_config_t, 1)
vl_msg_name(vl_api_lldp_config_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_lldp_t, 1)
vl_msg_name(vl_api_sw_interface_set_lldp_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_lldp \
_(VL_API_LLDP_CONFIG, lldp_config, c14445df) \
_(VL_API_LLDP_CONFIG_REPLY, lldp_config_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_LLDP, sw_interface_set_lldp, d646ae0f) \
_(VL_API_SW_INTERFACE_SET_LLDP_REPLY, sw_interface_set_lldp_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "lldp.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_lldp_printfun_types
#define included_lldp_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_lldp_printfun
#define included_lldp_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_lldp_config_t_print (vl_api_lldp_config_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lldp_config_t: */
    s = format(s, "vl_api_lldp_config_t:");
    s = format(s, "\n%Utx_hold: %u", format_white_space, indent, a->tx_hold);
    s = format(s, "\n%Utx_interval: %u", format_white_space, indent, a->tx_interval);
    if (vl_api_string_len(&a->system_name) > 0) {
        s = format(s, "\n%Usystem_name: %U", format_white_space, indent, vl_api_format_string, (&a->system_name));
    } else {
        s = format(s, "\n%Usystem_name:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lldp_config_reply_t_print (vl_api_lldp_config_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lldp_config_reply_t: */
    s = format(s, "vl_api_lldp_config_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_lldp_t_print (vl_api_sw_interface_set_lldp_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_lldp_t: */
    s = format(s, "vl_api_sw_interface_set_lldp_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Umgmt_ip4: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->mgmt_ip4, indent);
    s = format(s, "\n%Umgmt_ip6: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->mgmt_ip6, indent);
    s = format(s, "\n%Umgmt_oid: %U", format_white_space, indent, format_hex_bytes, a, 128);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    if (vl_api_string_len(&a->port_desc) > 0) {
        s = format(s, "\n%Uport_desc: %U", format_white_space, indent, vl_api_format_string, (&a->port_desc));
    } else {
        s = format(s, "\n%Uport_desc:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_lldp_reply_t_print (vl_api_sw_interface_set_lldp_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_lldp_reply_t: */
    s = format(s, "vl_api_sw_interface_set_lldp_reply_t:");
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
#ifndef included_lldp_endianfun
#define included_lldp_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_lldp_config_t_endian (vl_api_lldp_config_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->tx_hold = clib_net_to_host_u32(a->tx_hold);
    a->tx_interval = clib_net_to_host_u32(a->tx_interval);
    /* a->system_name = a->system_name (no-op) */
}

static inline void vl_api_lldp_config_reply_t_endian (vl_api_lldp_config_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_set_lldp_t_endian (vl_api_sw_interface_set_lldp_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_ip4_address_t_endian(&a->mgmt_ip4);
    vl_api_ip6_address_t_endian(&a->mgmt_ip6);
    /* a->mgmt_oid = a->mgmt_oid (no-op) */
    /* a->enable = a->enable (no-op) */
    /* a->port_desc = a->port_desc (no-op) */
}

static inline void vl_api_sw_interface_set_lldp_reply_t_endian (vl_api_sw_interface_set_lldp_reply_t *a)
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

vl_api_version_tuple(lldp.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(lldp.api, 0x4f6d24e8)

#endif

