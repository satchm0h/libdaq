/*
 * VLIB API definitions 2020-07-24 16:28:59
 * Input file: l3xc.api
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
#warning no content included from l3xc.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/fib/fib_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_L3XC_PLUGIN_GET_VERSION, vl_api_l3xc_plugin_get_version_t_handler)
vl_msg_id(VL_API_L3XC_PLUGIN_GET_VERSION_REPLY, vl_api_l3xc_plugin_get_version_reply_t_handler)
vl_msg_id(VL_API_L3XC_UPDATE, vl_api_l3xc_update_t_handler)
vl_msg_id(VL_API_L3XC_UPDATE_REPLY, vl_api_l3xc_update_reply_t_handler)
vl_msg_id(VL_API_L3XC_DEL, vl_api_l3xc_del_t_handler)
vl_msg_id(VL_API_L3XC_DEL_REPLY, vl_api_l3xc_del_reply_t_handler)
vl_msg_id(VL_API_L3XC_DUMP, vl_api_l3xc_dump_t_handler)
vl_msg_id(VL_API_L3XC_DETAILS, vl_api_l3xc_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_l3xc_plugin_get_version_t, 1)
vl_msg_name(vl_api_l3xc_plugin_get_version_reply_t, 1)
vl_msg_name(vl_api_l3xc_update_t, 1)
vl_msg_name(vl_api_l3xc_update_reply_t, 1)
vl_msg_name(vl_api_l3xc_del_t, 1)
vl_msg_name(vl_api_l3xc_del_reply_t, 1)
vl_msg_name(vl_api_l3xc_dump_t, 1)
vl_msg_name(vl_api_l3xc_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_l3xc \
_(VL_API_L3XC_PLUGIN_GET_VERSION, l3xc_plugin_get_version, 51077d14) \
_(VL_API_L3XC_PLUGIN_GET_VERSION_REPLY, l3xc_plugin_get_version_reply, 9b32cf86) \
_(VL_API_L3XC_UPDATE, l3xc_update, 0787b1d3) \
_(VL_API_L3XC_UPDATE_REPLY, l3xc_update_reply, 1992deab) \
_(VL_API_L3XC_DEL, l3xc_del, e7dbef91) \
_(VL_API_L3XC_DEL_REPLY, l3xc_del_reply, e8d4e804) \
_(VL_API_L3XC_DUMP, l3xc_dump, f9e6675e) \
_(VL_API_L3XC_DETAILS, l3xc_details, d4f69627) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "l3xc.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_l3xc_printfun_types
#define included_l3xc_printfun_types

static inline u8 *format_vl_api_l3xc_t (u8 *s, va_list * args)
{
    vl_api_l3xc_t *a = va_arg (*args, vl_api_l3xc_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_ip6: %u", format_white_space, indent, a->is_ip6);
    s = format(s, "\n%Un_paths: %u", format_white_space, indent, a->n_paths);
    for (i = 0; i < a->n_paths; i++) {
        s = format(s, "\n%Upaths: %U",
                   format_white_space, indent, format_vl_api_fib_path_t, &a->paths[i], indent);
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_l3xc_printfun
#define included_l3xc_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_l3xc_plugin_get_version_t_print (vl_api_l3xc_plugin_get_version_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l3xc_plugin_get_version_t: */
    s = format(s, "vl_api_l3xc_plugin_get_version_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l3xc_plugin_get_version_reply_t_print (vl_api_l3xc_plugin_get_version_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l3xc_plugin_get_version_reply_t: */
    s = format(s, "vl_api_l3xc_plugin_get_version_reply_t:");
    s = format(s, "\n%Umajor: %u", format_white_space, indent, a->major);
    s = format(s, "\n%Uminor: %u", format_white_space, indent, a->minor);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l3xc_update_t_print (vl_api_l3xc_update_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l3xc_update_t: */
    s = format(s, "vl_api_l3xc_update_t:");
    s = format(s, "\n%Ul3xc: %U", format_white_space, indent, format_vl_api_l3xc_t, &a->l3xc, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l3xc_update_reply_t_print (vl_api_l3xc_update_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l3xc_update_reply_t: */
    s = format(s, "vl_api_l3xc_update_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ustats_index: %u", format_white_space, indent, a->stats_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l3xc_del_t_print (vl_api_l3xc_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l3xc_del_t: */
    s = format(s, "vl_api_l3xc_del_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_ip6: %u", format_white_space, indent, a->is_ip6);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l3xc_del_reply_t_print (vl_api_l3xc_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l3xc_del_reply_t: */
    s = format(s, "vl_api_l3xc_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l3xc_dump_t_print (vl_api_l3xc_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l3xc_dump_t: */
    s = format(s, "vl_api_l3xc_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l3xc_details_t_print (vl_api_l3xc_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l3xc_details_t: */
    s = format(s, "vl_api_l3xc_details_t:");
    s = format(s, "\n%Ul3xc: %U", format_white_space, indent, format_vl_api_l3xc_t, &a->l3xc, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_l3xc_endianfun
#define included_l3xc_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_l3xc_t_endian (vl_api_l3xc_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_ip6 = a->is_ip6 (no-op) */
    /* a->n_paths = a->n_paths (no-op) */
    for (i = 0; i < a->n_paths; i++) {
        vl_api_fib_path_t_endian(&a->paths[i]);
    }
}

static inline void vl_api_l3xc_plugin_get_version_t_endian (vl_api_l3xc_plugin_get_version_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_l3xc_plugin_get_version_reply_t_endian (vl_api_l3xc_plugin_get_version_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->major = clib_net_to_host_u32(a->major);
    a->minor = clib_net_to_host_u32(a->minor);
}

static inline void vl_api_l3xc_update_t_endian (vl_api_l3xc_update_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_l3xc_t_endian(&a->l3xc);
}

static inline void vl_api_l3xc_update_reply_t_endian (vl_api_l3xc_update_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->stats_index = clib_net_to_host_u32(a->stats_index);
}

static inline void vl_api_l3xc_del_t_endian (vl_api_l3xc_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_ip6 = a->is_ip6 (no-op) */
}

static inline void vl_api_l3xc_del_reply_t_endian (vl_api_l3xc_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_l3xc_dump_t_endian (vl_api_l3xc_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_l3xc_details_t_endian (vl_api_l3xc_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_l3xc_t_endian(&a->l3xc);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(l3xc.api, 1, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(l3xc.api, 0x5a81a1af)

#endif

