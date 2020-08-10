/*
 * VLIB API definitions 2020-07-24 16:28:59
 * Input file: ioam_vxlan_gpe.api
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
#warning no content included from ioam_vxlan_gpe.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_VXLAN_GPE_IOAM_ENABLE, vl_api_vxlan_gpe_ioam_enable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_ENABLE_REPLY, vl_api_vxlan_gpe_ioam_enable_reply_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_DISABLE, vl_api_vxlan_gpe_ioam_disable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_DISABLE_REPLY, vl_api_vxlan_gpe_ioam_disable_reply_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_VNI_ENABLE, vl_api_vxlan_gpe_ioam_vni_enable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_VNI_ENABLE_REPLY, vl_api_vxlan_gpe_ioam_vni_enable_reply_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_VNI_DISABLE, vl_api_vxlan_gpe_ioam_vni_disable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_VNI_DISABLE_REPLY, vl_api_vxlan_gpe_ioam_vni_disable_reply_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_TRANSIT_ENABLE, vl_api_vxlan_gpe_ioam_transit_enable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_TRANSIT_ENABLE_REPLY, vl_api_vxlan_gpe_ioam_transit_enable_reply_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_TRANSIT_DISABLE, vl_api_vxlan_gpe_ioam_transit_disable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_TRANSIT_DISABLE_REPLY, vl_api_vxlan_gpe_ioam_transit_disable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_vxlan_gpe_ioam_enable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_enable_reply_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_disable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_disable_reply_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_vni_enable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_vni_enable_reply_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_vni_disable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_vni_disable_reply_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_transit_enable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_transit_enable_reply_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_transit_disable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_transit_disable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ioam_vxlan_gpe \
_(VL_API_VXLAN_GPE_IOAM_ENABLE, vxlan_gpe_ioam_enable, 2481bef7) \
_(VL_API_VXLAN_GPE_IOAM_ENABLE_REPLY, vxlan_gpe_ioam_enable_reply, e8d4e804) \
_(VL_API_VXLAN_GPE_IOAM_DISABLE, vxlan_gpe_ioam_disable, 6b16a45e) \
_(VL_API_VXLAN_GPE_IOAM_DISABLE_REPLY, vxlan_gpe_ioam_disable_reply, e8d4e804) \
_(VL_API_VXLAN_GPE_IOAM_VNI_ENABLE, vxlan_gpe_ioam_vni_enable, 997161fb) \
_(VL_API_VXLAN_GPE_IOAM_VNI_ENABLE_REPLY, vxlan_gpe_ioam_vni_enable_reply, e8d4e804) \
_(VL_API_VXLAN_GPE_IOAM_VNI_DISABLE, vxlan_gpe_ioam_vni_disable, 997161fb) \
_(VL_API_VXLAN_GPE_IOAM_VNI_DISABLE_REPLY, vxlan_gpe_ioam_vni_disable_reply, e8d4e804) \
_(VL_API_VXLAN_GPE_IOAM_TRANSIT_ENABLE, vxlan_gpe_ioam_transit_enable, 553f5b7b) \
_(VL_API_VXLAN_GPE_IOAM_TRANSIT_ENABLE_REPLY, vxlan_gpe_ioam_transit_enable_reply, e8d4e804) \
_(VL_API_VXLAN_GPE_IOAM_TRANSIT_DISABLE, vxlan_gpe_ioam_transit_disable, 553f5b7b) \
_(VL_API_VXLAN_GPE_IOAM_TRANSIT_DISABLE_REPLY, vxlan_gpe_ioam_transit_disable_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "ioam_vxlan_gpe.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ioam_vxlan_gpe_printfun_types
#define included_ioam_vxlan_gpe_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ioam_vxlan_gpe_printfun
#define included_ioam_vxlan_gpe_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_vxlan_gpe_ioam_enable_t_print (vl_api_vxlan_gpe_ioam_enable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_enable_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_enable_t:");
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    s = format(s, "\n%Utrace_ppc: %u", format_white_space, indent, a->trace_ppc);
    s = format(s, "\n%Upow_enable: %u", format_white_space, indent, a->pow_enable);
    s = format(s, "\n%Utrace_enable: %u", format_white_space, indent, a->trace_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_gpe_ioam_enable_reply_t_print (vl_api_vxlan_gpe_ioam_enable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_enable_reply_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_enable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_gpe_ioam_disable_t_print (vl_api_vxlan_gpe_ioam_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_disable_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_disable_t:");
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_gpe_ioam_disable_reply_t_print (vl_api_vxlan_gpe_ioam_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_disable_reply_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_gpe_ioam_vni_enable_t_print (vl_api_vxlan_gpe_ioam_vni_enable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_vni_enable_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_vni_enable_t:");
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Ulocal: %U", format_white_space, indent, format_vl_api_address_t, &a->local, indent);
    s = format(s, "\n%Uremote: %U", format_white_space, indent, format_vl_api_address_t, &a->remote, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_gpe_ioam_vni_enable_reply_t_print (vl_api_vxlan_gpe_ioam_vni_enable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_vni_enable_reply_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_vni_enable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_gpe_ioam_vni_disable_t_print (vl_api_vxlan_gpe_ioam_vni_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_vni_disable_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_vni_disable_t:");
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Ulocal: %U", format_white_space, indent, format_vl_api_address_t, &a->local, indent);
    s = format(s, "\n%Uremote: %U", format_white_space, indent, format_vl_api_address_t, &a->remote, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_gpe_ioam_vni_disable_reply_t_print (vl_api_vxlan_gpe_ioam_vni_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_vni_disable_reply_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_vni_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_gpe_ioam_transit_enable_t_print (vl_api_vxlan_gpe_ioam_transit_enable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_transit_enable_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_transit_enable_t:");
    s = format(s, "\n%Uouter_fib_index: %u", format_white_space, indent, a->outer_fib_index);
    s = format(s, "\n%Udst_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->dst_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_gpe_ioam_transit_enable_reply_t_print (vl_api_vxlan_gpe_ioam_transit_enable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_transit_enable_reply_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_transit_enable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_gpe_ioam_transit_disable_t_print (vl_api_vxlan_gpe_ioam_transit_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_transit_disable_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_transit_disable_t:");
    s = format(s, "\n%Uouter_fib_index: %u", format_white_space, indent, a->outer_fib_index);
    s = format(s, "\n%Udst_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->dst_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vxlan_gpe_ioam_transit_disable_reply_t_print (vl_api_vxlan_gpe_ioam_transit_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vxlan_gpe_ioam_transit_disable_reply_t: */
    s = format(s, "vl_api_vxlan_gpe_ioam_transit_disable_reply_t:");
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
#ifndef included_ioam_vxlan_gpe_endianfun
#define included_ioam_vxlan_gpe_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_vxlan_gpe_ioam_enable_t_endian (vl_api_vxlan_gpe_ioam_enable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u16(a->id);
    /* a->trace_ppc = a->trace_ppc (no-op) */
    /* a->pow_enable = a->pow_enable (no-op) */
    /* a->trace_enable = a->trace_enable (no-op) */
}

static inline void vl_api_vxlan_gpe_ioam_enable_reply_t_endian (vl_api_vxlan_gpe_ioam_enable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_vxlan_gpe_ioam_disable_t_endian (vl_api_vxlan_gpe_ioam_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u16(a->id);
}

static inline void vl_api_vxlan_gpe_ioam_disable_reply_t_endian (vl_api_vxlan_gpe_ioam_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_vxlan_gpe_ioam_vni_enable_t_endian (vl_api_vxlan_gpe_ioam_vni_enable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
    vl_api_address_t_endian(&a->local);
    vl_api_address_t_endian(&a->remote);
}

static inline void vl_api_vxlan_gpe_ioam_vni_enable_reply_t_endian (vl_api_vxlan_gpe_ioam_vni_enable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_vxlan_gpe_ioam_vni_disable_t_endian (vl_api_vxlan_gpe_ioam_vni_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
    vl_api_address_t_endian(&a->local);
    vl_api_address_t_endian(&a->remote);
}

static inline void vl_api_vxlan_gpe_ioam_vni_disable_reply_t_endian (vl_api_vxlan_gpe_ioam_vni_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_vxlan_gpe_ioam_transit_enable_t_endian (vl_api_vxlan_gpe_ioam_transit_enable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->outer_fib_index = clib_net_to_host_u32(a->outer_fib_index);
    vl_api_address_t_endian(&a->dst_addr);
}

static inline void vl_api_vxlan_gpe_ioam_transit_enable_reply_t_endian (vl_api_vxlan_gpe_ioam_transit_enable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_vxlan_gpe_ioam_transit_disable_t_endian (vl_api_vxlan_gpe_ioam_transit_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->outer_fib_index = clib_net_to_host_u32(a->outer_fib_index);
    vl_api_address_t_endian(&a->dst_addr);
}

static inline void vl_api_vxlan_gpe_ioam_transit_disable_reply_t_endian (vl_api_vxlan_gpe_ioam_transit_disable_reply_t *a)
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

vl_api_version_tuple(ioam_vxlan_gpe.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ioam_vxlan_gpe.api, 0xb9e086eb)

#endif

