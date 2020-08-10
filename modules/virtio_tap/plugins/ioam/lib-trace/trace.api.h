/*
 * VLIB API definitions 2020-07-24 16:28:59
 * Input file: trace.api
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
#warning no content included from trace.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_TRACE_PROFILE_ADD, vl_api_trace_profile_add_t_handler)
vl_msg_id(VL_API_TRACE_PROFILE_ADD_REPLY, vl_api_trace_profile_add_reply_t_handler)
vl_msg_id(VL_API_TRACE_PROFILE_DEL, vl_api_trace_profile_del_t_handler)
vl_msg_id(VL_API_TRACE_PROFILE_DEL_REPLY, vl_api_trace_profile_del_reply_t_handler)
vl_msg_id(VL_API_TRACE_PROFILE_SHOW_CONFIG, vl_api_trace_profile_show_config_t_handler)
vl_msg_id(VL_API_TRACE_PROFILE_SHOW_CONFIG_REPLY, vl_api_trace_profile_show_config_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_trace_profile_add_t, 1)
vl_msg_name(vl_api_trace_profile_add_reply_t, 1)
vl_msg_name(vl_api_trace_profile_del_t, 1)
vl_msg_name(vl_api_trace_profile_del_reply_t, 1)
vl_msg_name(vl_api_trace_profile_show_config_t, 1)
vl_msg_name(vl_api_trace_profile_show_config_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_trace \
_(VL_API_TRACE_PROFILE_ADD, trace_profile_add, de08aa6d) \
_(VL_API_TRACE_PROFILE_ADD_REPLY, trace_profile_add_reply, e8d4e804) \
_(VL_API_TRACE_PROFILE_DEL, trace_profile_del, 51077d14) \
_(VL_API_TRACE_PROFILE_DEL_REPLY, trace_profile_del_reply, e8d4e804) \
_(VL_API_TRACE_PROFILE_SHOW_CONFIG, trace_profile_show_config, 51077d14) \
_(VL_API_TRACE_PROFILE_SHOW_CONFIG_REPLY, trace_profile_show_config_reply, 0f1d374c) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "trace.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_trace_printfun_types
#define included_trace_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_trace_printfun
#define included_trace_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_trace_profile_add_t_print (vl_api_trace_profile_add_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_trace_profile_add_t: */
    s = format(s, "vl_api_trace_profile_add_t:");
    s = format(s, "\n%Utrace_type: %u", format_white_space, indent, a->trace_type);
    s = format(s, "\n%Unum_elts: %u", format_white_space, indent, a->num_elts);
    s = format(s, "\n%Utrace_tsp: %u", format_white_space, indent, a->trace_tsp);
    s = format(s, "\n%Unode_id: %u", format_white_space, indent, a->node_id);
    s = format(s, "\n%Uapp_data: %u", format_white_space, indent, a->app_data);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_trace_profile_add_reply_t_print (vl_api_trace_profile_add_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_trace_profile_add_reply_t: */
    s = format(s, "vl_api_trace_profile_add_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_trace_profile_del_t_print (vl_api_trace_profile_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_trace_profile_del_t: */
    s = format(s, "vl_api_trace_profile_del_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_trace_profile_del_reply_t_print (vl_api_trace_profile_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_trace_profile_del_reply_t: */
    s = format(s, "vl_api_trace_profile_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_trace_profile_show_config_t_print (vl_api_trace_profile_show_config_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_trace_profile_show_config_t: */
    s = format(s, "vl_api_trace_profile_show_config_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_trace_profile_show_config_reply_t_print (vl_api_trace_profile_show_config_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_trace_profile_show_config_reply_t: */
    s = format(s, "vl_api_trace_profile_show_config_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Utrace_type: %u", format_white_space, indent, a->trace_type);
    s = format(s, "\n%Unum_elts: %u", format_white_space, indent, a->num_elts);
    s = format(s, "\n%Utrace_tsp: %u", format_white_space, indent, a->trace_tsp);
    s = format(s, "\n%Unode_id: %u", format_white_space, indent, a->node_id);
    s = format(s, "\n%Uapp_data: %u", format_white_space, indent, a->app_data);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_trace_endianfun
#define included_trace_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_trace_profile_add_t_endian (vl_api_trace_profile_add_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->trace_type = a->trace_type (no-op) */
    /* a->num_elts = a->num_elts (no-op) */
    /* a->trace_tsp = a->trace_tsp (no-op) */
    a->node_id = clib_net_to_host_u32(a->node_id);
    a->app_data = clib_net_to_host_u32(a->app_data);
}

static inline void vl_api_trace_profile_add_reply_t_endian (vl_api_trace_profile_add_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_trace_profile_del_t_endian (vl_api_trace_profile_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_trace_profile_del_reply_t_endian (vl_api_trace_profile_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_trace_profile_show_config_t_endian (vl_api_trace_profile_show_config_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_trace_profile_show_config_reply_t_endian (vl_api_trace_profile_show_config_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->trace_type = a->trace_type (no-op) */
    /* a->num_elts = a->num_elts (no-op) */
    /* a->trace_tsp = a->trace_tsp (no-op) */
    a->node_id = clib_net_to_host_u32(a->node_id);
    a->app_data = clib_net_to_host_u32(a->app_data);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(trace.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(trace.api, 0x397cbf90)

#endif

