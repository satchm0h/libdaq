/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: syslog.api
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
#warning no content included from syslog.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SYSLOG_SET_SENDER, vl_api_syslog_set_sender_t_handler)
vl_msg_id(VL_API_SYSLOG_SET_SENDER_REPLY, vl_api_syslog_set_sender_reply_t_handler)
vl_msg_id(VL_API_SYSLOG_GET_SENDER, vl_api_syslog_get_sender_t_handler)
vl_msg_id(VL_API_SYSLOG_GET_SENDER_REPLY, vl_api_syslog_get_sender_reply_t_handler)
vl_msg_id(VL_API_SYSLOG_SET_FILTER, vl_api_syslog_set_filter_t_handler)
vl_msg_id(VL_API_SYSLOG_SET_FILTER_REPLY, vl_api_syslog_set_filter_reply_t_handler)
vl_msg_id(VL_API_SYSLOG_GET_FILTER, vl_api_syslog_get_filter_t_handler)
vl_msg_id(VL_API_SYSLOG_GET_FILTER_REPLY, vl_api_syslog_get_filter_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_syslog_set_sender_t, 1)
vl_msg_name(vl_api_syslog_set_sender_reply_t, 1)
vl_msg_name(vl_api_syslog_get_sender_t, 1)
vl_msg_name(vl_api_syslog_get_sender_reply_t, 1)
vl_msg_name(vl_api_syslog_set_filter_t, 1)
vl_msg_name(vl_api_syslog_set_filter_reply_t, 1)
vl_msg_name(vl_api_syslog_get_filter_t, 1)
vl_msg_name(vl_api_syslog_get_filter_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_syslog \
_(VL_API_SYSLOG_SET_SENDER, syslog_set_sender, bb641285) \
_(VL_API_SYSLOG_SET_SENDER_REPLY, syslog_set_sender_reply, e8d4e804) \
_(VL_API_SYSLOG_GET_SENDER, syslog_get_sender, 51077d14) \
_(VL_API_SYSLOG_GET_SENDER_REPLY, syslog_get_sender_reply, d3da60ac) \
_(VL_API_SYSLOG_SET_FILTER, syslog_set_filter, 571348c3) \
_(VL_API_SYSLOG_SET_FILTER_REPLY, syslog_set_filter_reply, e8d4e804) \
_(VL_API_SYSLOG_GET_FILTER, syslog_get_filter, 51077d14) \
_(VL_API_SYSLOG_GET_FILTER_REPLY, syslog_get_filter_reply, eb1833f8) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "syslog.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_syslog_printfun_types
#define included_syslog_printfun_types

static inline u8 *format_vl_api_syslog_severity_t (u8 *s, va_list * args)
{
    vl_api_syslog_severity_t *a = va_arg (*args, vl_api_syslog_severity_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "SYSLOG_API_SEVERITY_EMERG");
    case 1:
        return format(s, "SYSLOG_API_SEVERITY_ALERT");
    case 2:
        return format(s, "SYSLOG_API_SEVERITY_CRIT");
    case 3:
        return format(s, "SYSLOG_API_SEVERITY_ERR");
    case 4:
        return format(s, "SYSLOG_API_SEVERITY_WARN");
    case 5:
        return format(s, "SYSLOG_API_SEVERITY_NOTICE");
    case 6:
        return format(s, "SYSLOG_API_SEVERITY_INFO");
    case 7:
        return format(s, "SYSLOG_API_SEVERITY_DBG");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_syslog_printfun
#define included_syslog_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_syslog_set_sender_t_print (vl_api_syslog_set_sender_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_syslog_set_sender_t: */
    s = format(s, "vl_api_syslog_set_sender_t:");
    s = format(s, "\n%Usrc_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->src_address, indent);
    s = format(s, "\n%Ucollector_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->collector_address, indent);
    s = format(s, "\n%Ucollector_port: %u", format_white_space, indent, a->collector_port);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Umax_msg_size: %u", format_white_space, indent, a->max_msg_size);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_syslog_set_sender_reply_t_print (vl_api_syslog_set_sender_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_syslog_set_sender_reply_t: */
    s = format(s, "vl_api_syslog_set_sender_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_syslog_get_sender_t_print (vl_api_syslog_get_sender_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_syslog_get_sender_t: */
    s = format(s, "vl_api_syslog_get_sender_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_syslog_get_sender_reply_t_print (vl_api_syslog_get_sender_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_syslog_get_sender_reply_t: */
    s = format(s, "vl_api_syslog_get_sender_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usrc_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->src_address, indent);
    s = format(s, "\n%Ucollector_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->collector_address, indent);
    s = format(s, "\n%Ucollector_port: %u", format_white_space, indent, a->collector_port);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Umax_msg_size: %u", format_white_space, indent, a->max_msg_size);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_syslog_set_filter_t_print (vl_api_syslog_set_filter_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_syslog_set_filter_t: */
    s = format(s, "vl_api_syslog_set_filter_t:");
    s = format(s, "\n%Useverity: %U", format_white_space, indent, format_vl_api_syslog_severity_t, &a->severity, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_syslog_set_filter_reply_t_print (vl_api_syslog_set_filter_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_syslog_set_filter_reply_t: */
    s = format(s, "vl_api_syslog_set_filter_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_syslog_get_filter_t_print (vl_api_syslog_get_filter_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_syslog_get_filter_t: */
    s = format(s, "vl_api_syslog_get_filter_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_syslog_get_filter_reply_t_print (vl_api_syslog_get_filter_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_syslog_get_filter_reply_t: */
    s = format(s, "vl_api_syslog_get_filter_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Useverity: %U", format_white_space, indent, format_vl_api_syslog_severity_t, &a->severity, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_syslog_endianfun
#define included_syslog_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_syslog_severity_t_endian (vl_api_syslog_severity_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_syslog_set_sender_t_endian (vl_api_syslog_set_sender_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->src_address);
    vl_api_ip4_address_t_endian(&a->collector_address);
    a->collector_port = clib_net_to_host_u16(a->collector_port);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    a->max_msg_size = clib_net_to_host_u32(a->max_msg_size);
}

static inline void vl_api_syslog_set_sender_reply_t_endian (vl_api_syslog_set_sender_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_syslog_get_sender_t_endian (vl_api_syslog_get_sender_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_syslog_get_sender_reply_t_endian (vl_api_syslog_get_sender_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_ip4_address_t_endian(&a->src_address);
    vl_api_ip4_address_t_endian(&a->collector_address);
    a->collector_port = clib_net_to_host_u16(a->collector_port);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    a->max_msg_size = clib_net_to_host_u32(a->max_msg_size);
}

static inline void vl_api_syslog_set_filter_t_endian (vl_api_syslog_set_filter_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_syslog_severity_t_endian(&a->severity);
}

static inline void vl_api_syslog_set_filter_reply_t_endian (vl_api_syslog_set_filter_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_syslog_get_filter_t_endian (vl_api_syslog_get_filter_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_syslog_get_filter_reply_t_endian (vl_api_syslog_get_filter_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_syslog_severity_t_endian(&a->severity);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(syslog.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(syslog.api, 0x9229df5b)

#endif

