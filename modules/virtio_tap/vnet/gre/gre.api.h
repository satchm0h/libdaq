/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: gre.api
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
#warning no content included from gre.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/tunnel/tunnel_types.api.h>
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_GRE_TUNNEL_ADD_DEL, vl_api_gre_tunnel_add_del_t_handler)
vl_msg_id(VL_API_GRE_TUNNEL_ADD_DEL_REPLY, vl_api_gre_tunnel_add_del_reply_t_handler)
vl_msg_id(VL_API_GRE_TUNNEL_DUMP, vl_api_gre_tunnel_dump_t_handler)
vl_msg_id(VL_API_GRE_TUNNEL_DETAILS, vl_api_gre_tunnel_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_gre_tunnel_add_del_t, 1)
vl_msg_name(vl_api_gre_tunnel_add_del_reply_t, 1)
vl_msg_name(vl_api_gre_tunnel_dump_t, 1)
vl_msg_name(vl_api_gre_tunnel_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_gre \
_(VL_API_GRE_TUNNEL_ADD_DEL, gre_tunnel_add_del, 6efc9c22) \
_(VL_API_GRE_TUNNEL_ADD_DEL_REPLY, gre_tunnel_add_del_reply, 5383d31f) \
_(VL_API_GRE_TUNNEL_DUMP, gre_tunnel_dump, f9e6675e) \
_(VL_API_GRE_TUNNEL_DETAILS, gre_tunnel_details, 003bfbf1) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "gre.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_gre_printfun_types
#define included_gre_printfun_types

static inline u8 *format_vl_api_gre_tunnel_type_t (u8 *s, va_list * args)
{
    vl_api_gre_tunnel_type_t *a = va_arg (*args, vl_api_gre_tunnel_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "GRE_API_TUNNEL_TYPE_L3");
    case 1:
        return format(s, "GRE_API_TUNNEL_TYPE_TEB");
    case 2:
        return format(s, "GRE_API_TUNNEL_TYPE_ERSPAN");
    }
    return s;
}

static inline u8 *format_vl_api_gre_tunnel_t (u8 *s, va_list * args)
{
    vl_api_gre_tunnel_t *a = va_arg (*args, vl_api_gre_tunnel_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_gre_tunnel_type_t, &a->type, indent);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_tunnel_mode_t, &a->mode, indent);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_tunnel_encap_decap_flags_t, &a->flags, indent);
    s = format(s, "\n%Usession_id: %u", format_white_space, indent, a->session_id);
    s = format(s, "\n%Uinstance: %u", format_white_space, indent, a->instance);
    s = format(s, "\n%Uouter_table_id: %u", format_white_space, indent, a->outer_table_id);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Usrc: %U", format_white_space, indent, format_vl_api_address_t, &a->src, indent);
    s = format(s, "\n%Udst: %U", format_white_space, indent, format_vl_api_address_t, &a->dst, indent);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_gre_printfun
#define included_gre_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_gre_tunnel_add_del_t_print (vl_api_gre_tunnel_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gre_tunnel_add_del_t: */
    s = format(s, "vl_api_gre_tunnel_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Utunnel: %U", format_white_space, indent, format_vl_api_gre_tunnel_t, &a->tunnel, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gre_tunnel_add_del_reply_t_print (vl_api_gre_tunnel_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gre_tunnel_add_del_reply_t: */
    s = format(s, "vl_api_gre_tunnel_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gre_tunnel_dump_t_print (vl_api_gre_tunnel_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gre_tunnel_dump_t: */
    s = format(s, "vl_api_gre_tunnel_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gre_tunnel_details_t_print (vl_api_gre_tunnel_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gre_tunnel_details_t: */
    s = format(s, "vl_api_gre_tunnel_details_t:");
    s = format(s, "\n%Utunnel: %U", format_white_space, indent, format_vl_api_gre_tunnel_t, &a->tunnel, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_gre_endianfun
#define included_gre_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_gre_tunnel_type_t_endian (vl_api_gre_tunnel_type_t *a)
{
    int i __attribute__((unused));
    /* a->gre_tunnel_type = a->gre_tunnel_type (no-op) */
}

static inline void vl_api_gre_tunnel_t_endian (vl_api_gre_tunnel_t *a)
{
    int i __attribute__((unused));
    vl_api_gre_tunnel_type_t_endian(&a->type);
    vl_api_tunnel_mode_t_endian(&a->mode);
    vl_api_tunnel_encap_decap_flags_t_endian(&a->flags);
    a->session_id = clib_net_to_host_u16(a->session_id);
    a->instance = clib_net_to_host_u32(a->instance);
    a->outer_table_id = clib_net_to_host_u32(a->outer_table_id);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_address_t_endian(&a->src);
    vl_api_address_t_endian(&a->dst);
}

static inline void vl_api_gre_tunnel_add_del_t_endian (vl_api_gre_tunnel_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_gre_tunnel_t_endian(&a->tunnel);
}

static inline void vl_api_gre_tunnel_add_del_reply_t_endian (vl_api_gre_tunnel_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_gre_tunnel_dump_t_endian (vl_api_gre_tunnel_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_gre_tunnel_details_t_endian (vl_api_gre_tunnel_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gre_tunnel_t_endian(&a->tunnel);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(gre.api, 2, 1, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(gre.api, 0x2062e0ab)

#endif

