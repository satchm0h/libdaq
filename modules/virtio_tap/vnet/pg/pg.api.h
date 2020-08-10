/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: pg.api
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
#warning no content included from pg.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_PG_CREATE_INTERFACE, vl_api_pg_create_interface_t_handler)
vl_msg_id(VL_API_PG_CREATE_INTERFACE_REPLY, vl_api_pg_create_interface_reply_t_handler)
vl_msg_id(VL_API_PG_CAPTURE, vl_api_pg_capture_t_handler)
vl_msg_id(VL_API_PG_CAPTURE_REPLY, vl_api_pg_capture_reply_t_handler)
vl_msg_id(VL_API_PG_ENABLE_DISABLE, vl_api_pg_enable_disable_t_handler)
vl_msg_id(VL_API_PG_ENABLE_DISABLE_REPLY, vl_api_pg_enable_disable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_pg_create_interface_t, 1)
vl_msg_name(vl_api_pg_create_interface_reply_t, 1)
vl_msg_name(vl_api_pg_capture_t, 1)
vl_msg_name(vl_api_pg_capture_reply_t, 1)
vl_msg_name(vl_api_pg_enable_disable_t, 1)
vl_msg_name(vl_api_pg_enable_disable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_pg \
_(VL_API_PG_CREATE_INTERFACE, pg_create_interface, b7c893d7) \
_(VL_API_PG_CREATE_INTERFACE_REPLY, pg_create_interface_reply, 5383d31f) \
_(VL_API_PG_CAPTURE, pg_capture, 3712fb6c) \
_(VL_API_PG_CAPTURE_REPLY, pg_capture_reply, e8d4e804) \
_(VL_API_PG_ENABLE_DISABLE, pg_enable_disable, 01f94f3a) \
_(VL_API_PG_ENABLE_DISABLE_REPLY, pg_enable_disable_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "pg.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_pg_printfun_types
#define included_pg_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_pg_printfun
#define included_pg_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_pg_create_interface_t_print (vl_api_pg_create_interface_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_pg_create_interface_t: */
    s = format(s, "vl_api_pg_create_interface_t:");
    s = format(s, "\n%Uinterface_id: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->interface_id, indent);
    s = format(s, "\n%Ugso_enabled: %u", format_white_space, indent, a->gso_enabled);
    s = format(s, "\n%Ugso_size: %u", format_white_space, indent, a->gso_size);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_pg_create_interface_reply_t_print (vl_api_pg_create_interface_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_pg_create_interface_reply_t: */
    s = format(s, "vl_api_pg_create_interface_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_pg_capture_t_print (vl_api_pg_capture_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_pg_capture_t: */
    s = format(s, "vl_api_pg_capture_t:");
    s = format(s, "\n%Uinterface_id: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->interface_id, indent);
    s = format(s, "\n%Uis_enabled: %u", format_white_space, indent, a->is_enabled);
    s = format(s, "\n%Ucount: %u", format_white_space, indent, a->count);
    if (vl_api_string_len(&a->pcap_file_name) > 0) {
        s = format(s, "\n%Upcap_file_name: %U", format_white_space, indent, vl_api_format_string, (&a->pcap_file_name));
    } else {
        s = format(s, "\n%Upcap_file_name:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_pg_capture_reply_t_print (vl_api_pg_capture_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_pg_capture_reply_t: */
    s = format(s, "vl_api_pg_capture_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_pg_enable_disable_t_print (vl_api_pg_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_pg_enable_disable_t: */
    s = format(s, "vl_api_pg_enable_disable_t:");
    s = format(s, "\n%Uis_enabled: %u", format_white_space, indent, a->is_enabled);
    if (vl_api_string_len(&a->stream_name) > 0) {
        s = format(s, "\n%Ustream_name: %U", format_white_space, indent, vl_api_format_string, (&a->stream_name));
    } else {
        s = format(s, "\n%Ustream_name:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_pg_enable_disable_reply_t_print (vl_api_pg_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_pg_enable_disable_reply_t: */
    s = format(s, "vl_api_pg_enable_disable_reply_t:");
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
#ifndef included_pg_endianfun
#define included_pg_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_pg_create_interface_t_endian (vl_api_pg_create_interface_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->interface_id);
    /* a->gso_enabled = a->gso_enabled (no-op) */
    a->gso_size = clib_net_to_host_u32(a->gso_size);
}

static inline void vl_api_pg_create_interface_reply_t_endian (vl_api_pg_create_interface_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_pg_capture_t_endian (vl_api_pg_capture_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->interface_id);
    /* a->is_enabled = a->is_enabled (no-op) */
    a->count = clib_net_to_host_u32(a->count);
    /* a->pcap_file_name = a->pcap_file_name (no-op) */
}

static inline void vl_api_pg_capture_reply_t_endian (vl_api_pg_capture_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_pg_enable_disable_t_endian (vl_api_pg_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enabled = a->is_enabled (no-op) */
    /* a->stream_name = a->stream_name (no-op) */
}

static inline void vl_api_pg_enable_disable_reply_t_endian (vl_api_pg_enable_disable_reply_t *a)
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

vl_api_version_tuple(pg.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(pg.api, 0xa7eb3f27)

#endif

