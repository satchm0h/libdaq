/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: span.api
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
#warning no content included from span.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SW_INTERFACE_SPAN_ENABLE_DISABLE, vl_api_sw_interface_span_enable_disable_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SPAN_ENABLE_DISABLE_REPLY, vl_api_sw_interface_span_enable_disable_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SPAN_DUMP, vl_api_sw_interface_span_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SPAN_DETAILS, vl_api_sw_interface_span_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_sw_interface_span_enable_disable_t, 1)
vl_msg_name(vl_api_sw_interface_span_enable_disable_reply_t, 1)
vl_msg_name(vl_api_sw_interface_span_dump_t, 1)
vl_msg_name(vl_api_sw_interface_span_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_span \
_(VL_API_SW_INTERFACE_SPAN_ENABLE_DISABLE, sw_interface_span_enable_disable, acc8fea1) \
_(VL_API_SW_INTERFACE_SPAN_ENABLE_DISABLE_REPLY, sw_interface_span_enable_disable_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SPAN_DUMP, sw_interface_span_dump, d6cf0c3d) \
_(VL_API_SW_INTERFACE_SPAN_DETAILS, sw_interface_span_details, 055643fc) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "span.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_span_printfun_types
#define included_span_printfun_types

static inline u8 *format_vl_api_span_state_t (u8 *s, va_list * args)
{
    vl_api_span_state_t *a = va_arg (*args, vl_api_span_state_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "SPAN_STATE_API_DISABLED");
    case 1:
        return format(s, "SPAN_STATE_API_RX");
    case 2:
        return format(s, "SPAN_STATE_API_TX");
    case 3:
        return format(s, "SPAN_STATE_API_RX_TX");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_span_printfun
#define included_span_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_sw_interface_span_enable_disable_t_print (vl_api_sw_interface_span_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_span_enable_disable_t: */
    s = format(s, "vl_api_sw_interface_span_enable_disable_t:");
    s = format(s, "\n%Usw_if_index_from: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index_from, indent);
    s = format(s, "\n%Usw_if_index_to: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index_to, indent);
    s = format(s, "\n%Ustate: %U", format_white_space, indent, format_vl_api_span_state_t, &a->state, indent);
    s = format(s, "\n%Uis_l2: %u", format_white_space, indent, a->is_l2);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_span_enable_disable_reply_t_print (vl_api_sw_interface_span_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_span_enable_disable_reply_t: */
    s = format(s, "vl_api_sw_interface_span_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_span_dump_t_print (vl_api_sw_interface_span_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_span_dump_t: */
    s = format(s, "vl_api_sw_interface_span_dump_t:");
    s = format(s, "\n%Uis_l2: %u", format_white_space, indent, a->is_l2);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_span_details_t_print (vl_api_sw_interface_span_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_span_details_t: */
    s = format(s, "vl_api_sw_interface_span_details_t:");
    s = format(s, "\n%Usw_if_index_from: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index_from, indent);
    s = format(s, "\n%Usw_if_index_to: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index_to, indent);
    s = format(s, "\n%Ustate: %U", format_white_space, indent, format_vl_api_span_state_t, &a->state, indent);
    s = format(s, "\n%Uis_l2: %u", format_white_space, indent, a->is_l2);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_span_endianfun
#define included_span_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_span_state_t_endian (vl_api_span_state_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_sw_interface_span_enable_disable_t_endian (vl_api_sw_interface_span_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index_from);
    vl_api_interface_index_t_endian(&a->sw_if_index_to);
    vl_api_span_state_t_endian(&a->state);
    /* a->is_l2 = a->is_l2 (no-op) */
}

static inline void vl_api_sw_interface_span_enable_disable_reply_t_endian (vl_api_sw_interface_span_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_span_dump_t_endian (vl_api_sw_interface_span_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_l2 = a->is_l2 (no-op) */
}

static inline void vl_api_sw_interface_span_details_t_endian (vl_api_sw_interface_span_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index_from);
    vl_api_interface_index_t_endian(&a->sw_if_index_to);
    vl_api_span_state_t_endian(&a->state);
    /* a->is_l2 = a->is_l2 (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(span.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(span.api, 0xfe511ce4)

#endif

