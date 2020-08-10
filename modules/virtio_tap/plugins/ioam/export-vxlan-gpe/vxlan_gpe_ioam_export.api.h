/*
 * VLIB API definitions 2020-07-24 16:28:59
 * Input file: vxlan_gpe_ioam_export.api
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
#warning no content included from vxlan_gpe_ioam_export.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_VXLAN_GPE_IOAM_EXPORT_ENABLE_DISABLE, vl_api_vxlan_gpe_ioam_export_enable_disable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_EXPORT_ENABLE_DISABLE_REPLY, vl_api_vxlan_gpe_ioam_export_enable_disable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_vxlan_gpe_ioam_export_enable_disable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_export_enable_disable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_vxlan_gpe_ioam_export \
_(VL_API_VXLAN_GPE_IOAM_EXPORT_ENABLE_DISABLE, vxlan_gpe_ioam_export_enable_disable, e4d4ebfa) \
_(VL_API_VXLAN_GPE_IOAM_EXPORT_ENABLE_DISABLE_REPLY, vxlan_gpe_ioam_export_enable_disable_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "vxlan_gpe_ioam_export.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_vxlan_gpe_ioam_export_printfun_types
#define included_vxlan_gpe_ioam_export_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_vxlan_gpe_ioam_export_printfun
#define included_vxlan_gpe_ioam_export_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_vxlan_gpe_ioam_export_enable_disable_t_print (vl_api_vxlan_gpe_ioam_export_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_export_enable_disable_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_export_enable_disable_t:");
    s = format(s, "\n%Uis_disable: %u", format_white_space, indent, a->is_disable);
    s = format(s, "\n%Ucollector_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->collector_address, indent);
    s = format(s, "\n%Usrc_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->src_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_gpe_ioam_export_enable_disable_reply_t_print (vl_api_vxlan_gpe_ioam_export_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_export_enable_disable_reply_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_export_enable_disable_reply_t:");
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
#ifndef included_vxlan_gpe_ioam_export_endianfun
#define included_vxlan_gpe_ioam_export_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_vxlan_gpe_ioam_export_enable_disable_t_endian (vl_api_vxlan_gpe_ioam_export_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_disable = a->is_disable (no-op) */
    vl_api_ip4_address_t_endian(&a->collector_address);
    vl_api_ip4_address_t_endian(&a->src_address);
}

static inline void vl_api_vxlan_gpe_ioam_export_enable_disable_reply_t_endian (vl_api_vxlan_gpe_ioam_export_enable_disable_reply_t *a)
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

vl_api_version_tuple(vxlan_gpe_ioam_export.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(vxlan_gpe_ioam_export.api, 0x55d9fe50)

#endif

