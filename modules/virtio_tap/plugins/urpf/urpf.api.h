/*
 * VLIB API definitions 2020-07-24 16:29:21
 * Input file: urpf.api
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
#warning no content included from urpf.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/fib/fib_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_URPF_UPDATE, vl_api_urpf_update_t_handler)
vl_msg_id(VL_API_URPF_UPDATE_REPLY, vl_api_urpf_update_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_urpf_update_t, 1)
vl_msg_name(vl_api_urpf_update_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_urpf \
_(VL_API_URPF_UPDATE, urpf_update, 2bf8a77c) \
_(VL_API_URPF_UPDATE_REPLY, urpf_update_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "urpf.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_urpf_printfun_types
#define included_urpf_printfun_types

static inline u8 *format_vl_api_urpf_mode_t (u8 *s, va_list * args)
{
    vl_api_urpf_mode_t *a = va_arg (*args, vl_api_urpf_mode_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "URPF_API_MODE_OFF");
    case 2:
        return format(s, "URPF_API_MODE_LOOSE");
    case 3:
        return format(s, "URPF_API_MODE_STRICT");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_urpf_printfun
#define included_urpf_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_urpf_update_t_print (vl_api_urpf_update_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_urpf_update_t: */
    s = format(s, "vl_api_urpf_update_t:");
    s = format(s, "\n%Uis_input: %u", format_white_space, indent, a->is_input);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_urpf_mode_t, &a->mode, indent);
    s = format(s, "\n%Uaf: %U", format_white_space, indent, format_vl_api_address_family_t, &a->af, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_urpf_update_reply_t_print (vl_api_urpf_update_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_urpf_update_reply_t: */
    s = format(s, "vl_api_urpf_update_reply_t:");
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
#ifndef included_urpf_endianfun
#define included_urpf_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_urpf_mode_t_endian (vl_api_urpf_mode_t *a)
{
    int i __attribute__((unused));
    /* a->urpf_mode = a->urpf_mode (no-op) */
}

static inline void vl_api_urpf_update_t_endian (vl_api_urpf_update_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_input = a->is_input (no-op) */
    vl_api_urpf_mode_t_endian(&a->mode);
    vl_api_address_family_t_endian(&a->af);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_urpf_update_reply_t_endian (vl_api_urpf_update_reply_t *a)
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

vl_api_version_tuple(urpf.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(urpf.api, 0xc2c07c88)

#endif

