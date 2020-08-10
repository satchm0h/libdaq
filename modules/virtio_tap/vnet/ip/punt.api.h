/*
 * VLIB API definitions 2020-07-24 16:27:55
 * Input file: punt.api
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
#warning no content included from punt.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SET_PUNT, vl_api_set_punt_t_handler)
vl_msg_id(VL_API_SET_PUNT_REPLY, vl_api_set_punt_reply_t_handler)
vl_msg_id(VL_API_PUNT_SOCKET_REGISTER, vl_api_punt_socket_register_t_handler)
vl_msg_id(VL_API_PUNT_SOCKET_REGISTER_REPLY, vl_api_punt_socket_register_reply_t_handler)
vl_msg_id(VL_API_PUNT_SOCKET_DUMP, vl_api_punt_socket_dump_t_handler)
vl_msg_id(VL_API_PUNT_SOCKET_DETAILS, vl_api_punt_socket_details_t_handler)
vl_msg_id(VL_API_PUNT_SOCKET_DEREGISTER, vl_api_punt_socket_deregister_t_handler)
vl_msg_id(VL_API_PUNT_SOCKET_DEREGISTER_REPLY, vl_api_punt_socket_deregister_reply_t_handler)
vl_msg_id(VL_API_PUNT_REASON_DUMP, vl_api_punt_reason_dump_t_handler)
vl_msg_id(VL_API_PUNT_REASON_DETAILS, vl_api_punt_reason_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_set_punt_t, 1)
vl_msg_name(vl_api_set_punt_reply_t, 1)
vl_msg_name(vl_api_punt_socket_register_t, 1)
vl_msg_name(vl_api_punt_socket_register_reply_t, 1)
vl_msg_name(vl_api_punt_socket_dump_t, 1)
vl_msg_name(vl_api_punt_socket_details_t, 1)
vl_msg_name(vl_api_punt_socket_deregister_t, 1)
vl_msg_name(vl_api_punt_socket_deregister_reply_t, 1)
vl_msg_name(vl_api_punt_reason_dump_t, 1)
vl_msg_name(vl_api_punt_reason_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_punt \
_(VL_API_SET_PUNT, set_punt, 83799618) \
_(VL_API_SET_PUNT_REPLY, set_punt_reply, e8d4e804) \
_(VL_API_PUNT_SOCKET_REGISTER, punt_socket_register, c8cd10fa) \
_(VL_API_PUNT_SOCKET_REGISTER_REPLY, punt_socket_register_reply, bd30ae90) \
_(VL_API_PUNT_SOCKET_DUMP, punt_socket_dump, 52974935) \
_(VL_API_PUNT_SOCKET_DETAILS, punt_socket_details, 1de0ce75) \
_(VL_API_PUNT_SOCKET_DEREGISTER, punt_socket_deregister, 98a444f4) \
_(VL_API_PUNT_SOCKET_DEREGISTER_REPLY, punt_socket_deregister_reply, e8d4e804) \
_(VL_API_PUNT_REASON_DUMP, punt_reason_dump, 5c0dd4fe) \
_(VL_API_PUNT_REASON_DETAILS, punt_reason_details, 2c9d4a40) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "punt.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_punt_printfun_types
#define included_punt_printfun_types

static inline u8 *format_vl_api_punt_type_t (u8 *s, va_list * args)
{
    vl_api_punt_type_t *a = va_arg (*args, vl_api_punt_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "PUNT_API_TYPE_L4");
    case 2:
        return format(s, "PUNT_API_TYPE_IP_PROTO");
    case 3:
        return format(s, "PUNT_API_TYPE_EXCEPTION");
    }
    return s;
}

static inline u8 *format_vl_api_punt_l4_t (u8 *s, va_list * args)
{
    vl_api_punt_l4_t *a = va_arg (*args, vl_api_punt_l4_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uaf: %U", format_white_space, indent, format_vl_api_address_family_t, &a->af, indent);
    s = format(s, "\n%Uprotocol: %U", format_white_space, indent, format_vl_api_ip_proto_t, &a->protocol, indent);
    s = format(s, "\n%Uport: %u", format_white_space, indent, a->port);
    return s;
}

static inline u8 *format_vl_api_punt_ip_proto_t (u8 *s, va_list * args)
{
    vl_api_punt_ip_proto_t *a = va_arg (*args, vl_api_punt_ip_proto_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uaf: %U", format_white_space, indent, format_vl_api_address_family_t, &a->af, indent);
    s = format(s, "\n%Uprotocol: %U", format_white_space, indent, format_vl_api_ip_proto_t, &a->protocol, indent);
    return s;
}

static inline u8 *format_vl_api_punt_exception_t (u8 *s, va_list * args)
{
    vl_api_punt_exception_t *a = va_arg (*args, vl_api_punt_exception_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    return s;
}

static inline u8 *format_vl_api_punt_union_t (u8 *s, va_list * args)
{
    vl_api_punt_union_t *a = va_arg (*args, vl_api_punt_union_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uexception: %U", format_white_space, indent, format_vl_api_punt_exception_t, &a->exception, indent);
    s = format(s, "\n%Ul4: %U", format_white_space, indent, format_vl_api_punt_l4_t, &a->l4, indent);
    s = format(s, "\n%Uip_proto: %U", format_white_space, indent, format_vl_api_punt_ip_proto_t, &a->ip_proto, indent);
    return s;
}

static inline u8 *format_vl_api_punt_t (u8 *s, va_list * args)
{
    vl_api_punt_t *a = va_arg (*args, vl_api_punt_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_punt_type_t, &a->type, indent);
    s = format(s, "\n%Upunt: %U", format_white_space, indent, format_vl_api_punt_union_t, &a->punt, indent);
    return s;
}

static inline u8 *format_vl_api_punt_reason_t (u8 *s, va_list * args)
{
    vl_api_punt_reason_t *a = va_arg (*args, vl_api_punt_reason_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    if (vl_api_string_len(&a->name) > 0) {
        s = format(s, "\n%Uname: %U", format_white_space, indent, vl_api_format_string, (&a->name));
    } else {
        s = format(s, "\n%Uname:", format_white_space, indent);
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_punt_printfun
#define included_punt_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_set_punt_t_print (vl_api_set_punt_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_set_punt_t: */
    s = format(s, "vl_api_set_punt_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Upunt: %U", format_white_space, indent, format_vl_api_punt_t, &a->punt, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_set_punt_reply_t_print (vl_api_set_punt_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_set_punt_reply_t: */
    s = format(s, "vl_api_set_punt_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_punt_socket_register_t_print (vl_api_punt_socket_register_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_punt_socket_register_t: */
    s = format(s, "vl_api_punt_socket_register_t:");
    s = format(s, "\n%Uheader_version: %u", format_white_space, indent, a->header_version);
    s = format(s, "\n%Upunt: %U", format_white_space, indent, format_vl_api_punt_t, &a->punt, indent);
    s = format(s, "\n%Upathname: %s", format_white_space, indent, a->pathname);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_punt_socket_register_reply_t_print (vl_api_punt_socket_register_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_punt_socket_register_reply_t: */
    s = format(s, "vl_api_punt_socket_register_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Upathname: %s", format_white_space, indent, a->pathname);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_punt_socket_dump_t_print (vl_api_punt_socket_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_punt_socket_dump_t: */
    s = format(s, "vl_api_punt_socket_dump_t:");
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_punt_type_t, &a->type, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_punt_socket_details_t_print (vl_api_punt_socket_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_punt_socket_details_t: */
    s = format(s, "vl_api_punt_socket_details_t:");
    s = format(s, "\n%Upunt: %U", format_white_space, indent, format_vl_api_punt_t, &a->punt, indent);
    s = format(s, "\n%Upathname: %s", format_white_space, indent, a->pathname);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_punt_socket_deregister_t_print (vl_api_punt_socket_deregister_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_punt_socket_deregister_t: */
    s = format(s, "vl_api_punt_socket_deregister_t:");
    s = format(s, "\n%Upunt: %U", format_white_space, indent, format_vl_api_punt_t, &a->punt, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_punt_socket_deregister_reply_t_print (vl_api_punt_socket_deregister_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_punt_socket_deregister_reply_t: */
    s = format(s, "vl_api_punt_socket_deregister_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_punt_reason_dump_t_print (vl_api_punt_reason_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_punt_reason_dump_t: */
    s = format(s, "vl_api_punt_reason_dump_t:");
    s = format(s, "\n%Ureason: %U", format_white_space, indent, format_vl_api_punt_reason_t, &a->reason, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_punt_reason_details_t_print (vl_api_punt_reason_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_punt_reason_details_t: */
    s = format(s, "vl_api_punt_reason_details_t:");
    s = format(s, "\n%Ureason: %U", format_white_space, indent, format_vl_api_punt_reason_t, &a->reason, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_punt_endianfun
#define included_punt_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_punt_type_t_endian (vl_api_punt_type_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_punt_l4_t_endian (vl_api_punt_l4_t *a)
{
    int i __attribute__((unused));
    vl_api_address_family_t_endian(&a->af);
    vl_api_ip_proto_t_endian(&a->protocol);
    a->port = clib_net_to_host_u16(a->port);
}

static inline void vl_api_punt_ip_proto_t_endian (vl_api_punt_ip_proto_t *a)
{
    int i __attribute__((unused));
    vl_api_address_family_t_endian(&a->af);
    vl_api_ip_proto_t_endian(&a->protocol);
}

static inline void vl_api_punt_exception_t_endian (vl_api_punt_exception_t *a)
{
    int i __attribute__((unused));
    a->id = clib_net_to_host_u32(a->id);
}

static inline void vl_api_punt_union_t_endian (vl_api_punt_union_t *a)
{
    int i __attribute__((unused));
    vl_api_punt_exception_t_endian(&a->exception);
    vl_api_punt_l4_t_endian(&a->l4);
    vl_api_punt_ip_proto_t_endian(&a->ip_proto);
}

static inline void vl_api_punt_t_endian (vl_api_punt_t *a)
{
    int i __attribute__((unused));
    vl_api_punt_type_t_endian(&a->type);
    vl_api_punt_union_t_endian(&a->punt);
}

static inline void vl_api_punt_reason_t_endian (vl_api_punt_reason_t *a)
{
    int i __attribute__((unused));
    a->id = clib_net_to_host_u32(a->id);
    /* a->name = a->name (no-op) */
}

static inline void vl_api_set_punt_t_endian (vl_api_set_punt_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_punt_t_endian(&a->punt);
}

static inline void vl_api_set_punt_reply_t_endian (vl_api_set_punt_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_punt_socket_register_t_endian (vl_api_punt_socket_register_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->header_version = clib_net_to_host_u32(a->header_version);
    vl_api_punt_t_endian(&a->punt);
    /* a->pathname = a->pathname (no-op) */
}

static inline void vl_api_punt_socket_register_reply_t_endian (vl_api_punt_socket_register_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->pathname = a->pathname (no-op) */
}

static inline void vl_api_punt_socket_dump_t_endian (vl_api_punt_socket_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_punt_type_t_endian(&a->type);
}

static inline void vl_api_punt_socket_details_t_endian (vl_api_punt_socket_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_punt_t_endian(&a->punt);
    /* a->pathname = a->pathname (no-op) */
}

static inline void vl_api_punt_socket_deregister_t_endian (vl_api_punt_socket_deregister_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_punt_t_endian(&a->punt);
}

static inline void vl_api_punt_socket_deregister_reply_t_endian (vl_api_punt_socket_deregister_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_punt_reason_dump_t_endian (vl_api_punt_reason_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_punt_reason_t_endian(&a->reason);
}

static inline void vl_api_punt_reason_details_t_endian (vl_api_punt_reason_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_punt_reason_t_endian(&a->reason);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(punt.api, 2, 2, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(punt.api, 0xa39ed2d4)

#endif

