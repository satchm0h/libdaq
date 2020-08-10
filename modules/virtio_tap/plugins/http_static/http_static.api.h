/*
 * VLIB API definitions 2020-07-24 16:28:56
 * Input file: http_static.api
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
#warning no content included from http_static.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_HTTP_STATIC_ENABLE, vl_api_http_static_enable_t_handler)
vl_msg_id(VL_API_HTTP_STATIC_ENABLE_REPLY, vl_api_http_static_enable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_http_static_enable_t, 1)
vl_msg_name(vl_api_http_static_enable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_http_static \
_(VL_API_HTTP_STATIC_ENABLE, http_static_enable, 075f8292) \
_(VL_API_HTTP_STATIC_ENABLE_REPLY, http_static_enable_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "http_static.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_http_static_printfun_types
#define included_http_static_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_http_static_printfun
#define included_http_static_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_http_static_enable_t_print (vl_api_http_static_enable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_http_static_enable_t: */
    s = format(s, "vl_api_http_static_enable_t:");
    s = format(s, "\n%Ufifo_size: %u", format_white_space, indent, a->fifo_size);
    s = format(s, "\n%Ucache_size_limit: %u", format_white_space, indent, a->cache_size_limit);
    s = format(s, "\n%Uprealloc_fifos: %u", format_white_space, indent, a->prealloc_fifos);
    s = format(s, "\n%Uprivate_segment_size: %u", format_white_space, indent, a->private_segment_size);
    s = format(s, "\n%Uwww_root: %s", format_white_space, indent, a->www_root);
    s = format(s, "\n%Uuri: %s", format_white_space, indent, a->uri);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_http_static_enable_reply_t_print (vl_api_http_static_enable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_http_static_enable_reply_t: */
    s = format(s, "vl_api_http_static_enable_reply_t:");
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
#ifndef included_http_static_endianfun
#define included_http_static_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_http_static_enable_t_endian (vl_api_http_static_enable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->fifo_size = clib_net_to_host_u32(a->fifo_size);
    a->cache_size_limit = clib_net_to_host_u32(a->cache_size_limit);
    a->prealloc_fifos = clib_net_to_host_u32(a->prealloc_fifos);
    a->private_segment_size = clib_net_to_host_u32(a->private_segment_size);
    /* a->www_root = a->www_root (no-op) */
    /* a->uri = a->uri (no-op) */
}

static inline void vl_api_http_static_enable_reply_t_endian (vl_api_http_static_enable_reply_t *a)
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

vl_api_version_tuple(http_static.api, 2, 1, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(http_static.api, 0xd29e72e9)

#endif

