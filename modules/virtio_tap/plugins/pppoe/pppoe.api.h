/*
 * VLIB API definitions 2020-07-24 16:29:15
 * Input file: pppoe.api
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
#warning no content included from pppoe.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_PPPOE_ADD_DEL_SESSION, vl_api_pppoe_add_del_session_t_handler)
vl_msg_id(VL_API_PPPOE_ADD_DEL_SESSION_REPLY, vl_api_pppoe_add_del_session_reply_t_handler)
vl_msg_id(VL_API_PPPOE_SESSION_DUMP, vl_api_pppoe_session_dump_t_handler)
vl_msg_id(VL_API_PPPOE_SESSION_DETAILS, vl_api_pppoe_session_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_pppoe_add_del_session_t, 1)
vl_msg_name(vl_api_pppoe_add_del_session_reply_t, 1)
vl_msg_name(vl_api_pppoe_session_dump_t, 1)
vl_msg_name(vl_api_pppoe_session_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_pppoe \
_(VL_API_PPPOE_ADD_DEL_SESSION, pppoe_add_del_session, 46ace853) \
_(VL_API_PPPOE_ADD_DEL_SESSION_REPLY, pppoe_add_del_session_reply, 5383d31f) \
_(VL_API_PPPOE_SESSION_DUMP, pppoe_session_dump, f9e6675e) \
_(VL_API_PPPOE_SESSION_DETAILS, pppoe_session_details, 332bc742) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "pppoe.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_pppoe_printfun_types
#define included_pppoe_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_pppoe_printfun
#define included_pppoe_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_pppoe_add_del_session_t_print (vl_api_pppoe_add_del_session_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_pppoe_add_del_session_t: */
    s = format(s, "vl_api_pppoe_add_del_session_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Usession_id: %u", format_white_space, indent, a->session_id);
    s = format(s, "\n%Uclient_ip: %U", format_white_space, indent, format_vl_api_address_t, &a->client_ip, indent);
    s = format(s, "\n%Udecap_vrf_id: %u", format_white_space, indent, a->decap_vrf_id);
    s = format(s, "\n%Uclient_mac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->client_mac, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_pppoe_add_del_session_reply_t_print (vl_api_pppoe_add_del_session_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_pppoe_add_del_session_reply_t: */
    s = format(s, "vl_api_pppoe_add_del_session_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_pppoe_session_dump_t_print (vl_api_pppoe_session_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_pppoe_session_dump_t: */
    s = format(s, "vl_api_pppoe_session_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_pppoe_session_details_t_print (vl_api_pppoe_session_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_pppoe_session_details_t: */
    s = format(s, "vl_api_pppoe_session_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Usession_id: %u", format_white_space, indent, a->session_id);
    s = format(s, "\n%Uclient_ip: %U", format_white_space, indent, format_vl_api_address_t, &a->client_ip, indent);
    s = format(s, "\n%Uencap_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->encap_if_index, indent);
    s = format(s, "\n%Udecap_vrf_id: %u", format_white_space, indent, a->decap_vrf_id);
    s = format(s, "\n%Ulocal_mac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->local_mac, indent);
    s = format(s, "\n%Uclient_mac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->client_mac, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_pppoe_endianfun
#define included_pppoe_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_pppoe_add_del_session_t_endian (vl_api_pppoe_add_del_session_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->session_id = clib_net_to_host_u16(a->session_id);
    vl_api_address_t_endian(&a->client_ip);
    a->decap_vrf_id = clib_net_to_host_u32(a->decap_vrf_id);
    vl_api_mac_address_t_endian(&a->client_mac);
}

static inline void vl_api_pppoe_add_del_session_reply_t_endian (vl_api_pppoe_add_del_session_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_pppoe_session_dump_t_endian (vl_api_pppoe_session_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_pppoe_session_details_t_endian (vl_api_pppoe_session_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->session_id = clib_net_to_host_u16(a->session_id);
    vl_api_address_t_endian(&a->client_ip);
    vl_api_interface_index_t_endian(&a->encap_if_index);
    a->decap_vrf_id = clib_net_to_host_u32(a->decap_vrf_id);
    vl_api_mac_address_t_endian(&a->local_mac);
    vl_api_mac_address_t_endian(&a->client_mac);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(pppoe.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(pppoe.api, 0xc75d2b4e)

#endif

