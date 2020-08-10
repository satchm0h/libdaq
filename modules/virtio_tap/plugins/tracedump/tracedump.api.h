/*
 * VLIB API definitions 2020-07-24 16:29:18
 * Input file: tracedump.api
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
#warning no content included from tracedump.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_TRACE_DUMP, vl_api_trace_dump_t_handler)
vl_msg_id(VL_API_TRACE_DUMP_REPLY, vl_api_trace_dump_reply_t_handler)
vl_msg_id(VL_API_TRACE_DETAILS, vl_api_trace_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_trace_dump_t, 1)
vl_msg_name(vl_api_trace_dump_reply_t, 1)
vl_msg_name(vl_api_trace_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_tracedump \
_(VL_API_TRACE_DUMP, trace_dump, c7d6681f) \
_(VL_API_TRACE_DUMP_REPLY, trace_dump_reply, e0e87f9d) \
_(VL_API_TRACE_DETAILS, trace_details, 3f211194) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "tracedump.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_tracedump_printfun_types
#define included_tracedump_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_tracedump_printfun
#define included_tracedump_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_trace_dump_t_print (vl_api_trace_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_trace_dump_t: */
    s = format(s, "vl_api_trace_dump_t:");
    s = format(s, "\n%Uclear_cache: %u", format_white_space, indent, a->clear_cache);
    s = format(s, "\n%Uthread_id: %u", format_white_space, indent, a->thread_id);
    s = format(s, "\n%Uposition: %u", format_white_space, indent, a->position);
    s = format(s, "\n%Umax_records: %u", format_white_space, indent, a->max_records);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_trace_dump_reply_t_print (vl_api_trace_dump_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_trace_dump_reply_t: */
    s = format(s, "vl_api_trace_dump_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ulast_thread_id: %u", format_white_space, indent, a->last_thread_id);
    s = format(s, "\n%Ulast_position: %u", format_white_space, indent, a->last_position);
    s = format(s, "\n%Umore_this_thread: %u", format_white_space, indent, a->more_this_thread);
    s = format(s, "\n%Umore_threads: %u", format_white_space, indent, a->more_threads);
    s = format(s, "\n%Uflush_only: %u", format_white_space, indent, a->flush_only);
    s = format(s, "\n%Udone: %u", format_white_space, indent, a->done);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_trace_details_t_print (vl_api_trace_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_trace_details_t: */
    s = format(s, "vl_api_trace_details_t:");
    s = format(s, "\n%Uthread_id: %u", format_white_space, indent, a->thread_id);
    s = format(s, "\n%Uposition: %u", format_white_space, indent, a->position);
    s = format(s, "\n%Umore_this_thread: %u", format_white_space, indent, a->more_this_thread);
    s = format(s, "\n%Umore_threads: %u", format_white_space, indent, a->more_threads);
    s = format(s, "\n%Udone: %u", format_white_space, indent, a->done);
    if (vl_api_string_len(&a->trace_data) > 0) {
        s = format(s, "\n%Utrace_data: %U", format_white_space, indent, vl_api_format_string, (&a->trace_data));
    } else {
        s = format(s, "\n%Utrace_data:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_tracedump_endianfun
#define included_tracedump_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_trace_dump_t_endian (vl_api_trace_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->clear_cache = a->clear_cache (no-op) */
    a->thread_id = clib_net_to_host_u32(a->thread_id);
    a->position = clib_net_to_host_u32(a->position);
    a->max_records = clib_net_to_host_u32(a->max_records);
}

static inline void vl_api_trace_dump_reply_t_endian (vl_api_trace_dump_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->last_thread_id = clib_net_to_host_u32(a->last_thread_id);
    a->last_position = clib_net_to_host_u32(a->last_position);
    /* a->more_this_thread = a->more_this_thread (no-op) */
    /* a->more_threads = a->more_threads (no-op) */
    /* a->flush_only = a->flush_only (no-op) */
    /* a->done = a->done (no-op) */
}

static inline void vl_api_trace_details_t_endian (vl_api_trace_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->thread_id = clib_net_to_host_u32(a->thread_id);
    a->position = clib_net_to_host_u32(a->position);
    /* a->more_this_thread = a->more_this_thread (no-op) */
    /* a->more_threads = a->more_threads (no-op) */
    /* a->done = a->done (no-op) */
    /* a->trace_data = a->trace_data (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(tracedump.api, 0, 1, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(tracedump.api, 0xd6940891)

#endif

