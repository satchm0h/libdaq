/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: ipip.api
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
#warning no content included from ipip.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ip/ip_types.api.h>
#include <vnet/tunnel/tunnel_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_IPIP_ADD_TUNNEL, vl_api_ipip_add_tunnel_t_handler)
vl_msg_id(VL_API_IPIP_ADD_TUNNEL_REPLY, vl_api_ipip_add_tunnel_reply_t_handler)
vl_msg_id(VL_API_IPIP_DEL_TUNNEL, vl_api_ipip_del_tunnel_t_handler)
vl_msg_id(VL_API_IPIP_DEL_TUNNEL_REPLY, vl_api_ipip_del_tunnel_reply_t_handler)
vl_msg_id(VL_API_IPIP_6RD_ADD_TUNNEL, vl_api_ipip_6rd_add_tunnel_t_handler)
vl_msg_id(VL_API_IPIP_6RD_ADD_TUNNEL_REPLY, vl_api_ipip_6rd_add_tunnel_reply_t_handler)
vl_msg_id(VL_API_IPIP_6RD_DEL_TUNNEL, vl_api_ipip_6rd_del_tunnel_t_handler)
vl_msg_id(VL_API_IPIP_6RD_DEL_TUNNEL_REPLY, vl_api_ipip_6rd_del_tunnel_reply_t_handler)
vl_msg_id(VL_API_IPIP_TUNNEL_DUMP, vl_api_ipip_tunnel_dump_t_handler)
vl_msg_id(VL_API_IPIP_TUNNEL_DETAILS, vl_api_ipip_tunnel_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_ipip_add_tunnel_t, 1)
vl_msg_name(vl_api_ipip_add_tunnel_reply_t, 1)
vl_msg_name(vl_api_ipip_del_tunnel_t, 1)
vl_msg_name(vl_api_ipip_del_tunnel_reply_t, 1)
vl_msg_name(vl_api_ipip_6rd_add_tunnel_t, 1)
vl_msg_name(vl_api_ipip_6rd_add_tunnel_reply_t, 1)
vl_msg_name(vl_api_ipip_6rd_del_tunnel_t, 1)
vl_msg_name(vl_api_ipip_6rd_del_tunnel_reply_t, 1)
vl_msg_name(vl_api_ipip_tunnel_dump_t, 1)
vl_msg_name(vl_api_ipip_tunnel_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ipip \
_(VL_API_IPIP_ADD_TUNNEL, ipip_add_tunnel, a9decfcd) \
_(VL_API_IPIP_ADD_TUNNEL_REPLY, ipip_add_tunnel_reply, 5383d31f) \
_(VL_API_IPIP_DEL_TUNNEL, ipip_del_tunnel, f9e6675e) \
_(VL_API_IPIP_DEL_TUNNEL_REPLY, ipip_del_tunnel_reply, e8d4e804) \
_(VL_API_IPIP_6RD_ADD_TUNNEL, ipip_6rd_add_tunnel, 56e93cc0) \
_(VL_API_IPIP_6RD_ADD_TUNNEL_REPLY, ipip_6rd_add_tunnel_reply, 5383d31f) \
_(VL_API_IPIP_6RD_DEL_TUNNEL, ipip_6rd_del_tunnel, f9e6675e) \
_(VL_API_IPIP_6RD_DEL_TUNNEL_REPLY, ipip_6rd_del_tunnel_reply, e8d4e804) \
_(VL_API_IPIP_TUNNEL_DUMP, ipip_tunnel_dump, f9e6675e) \
_(VL_API_IPIP_TUNNEL_DETAILS, ipip_tunnel_details, 53236d75) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "ipip.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ipip_printfun_types
#define included_ipip_printfun_types

static inline u8 *format_vl_api_ipip_tunnel_t (u8 *s, va_list * args)
{
    vl_api_ipip_tunnel_t *a = va_arg (*args, vl_api_ipip_tunnel_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uinstance: %u", format_white_space, indent, a->instance);
    s = format(s, "\n%Usrc: %U", format_white_space, indent, format_vl_api_address_t, &a->src, indent);
    s = format(s, "\n%Udst: %U", format_white_space, indent, format_vl_api_address_t, &a->dst, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_tunnel_encap_decap_flags_t, &a->flags, indent);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_tunnel_mode_t, &a->mode, indent);
    s = format(s, "\n%Udscp: %U", format_white_space, indent, format_vl_api_ip_dscp_t, &a->dscp, indent);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ipip_printfun
#define included_ipip_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_ipip_add_tunnel_t_print (vl_api_ipip_add_tunnel_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipip_add_tunnel_t: */
    s = format(s, "vl_api_ipip_add_tunnel_t:");
    s = format(s, "\n%Utunnel: %U", format_white_space, indent, format_vl_api_ipip_tunnel_t, &a->tunnel, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipip_add_tunnel_reply_t_print (vl_api_ipip_add_tunnel_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipip_add_tunnel_reply_t: */
    s = format(s, "vl_api_ipip_add_tunnel_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipip_del_tunnel_t_print (vl_api_ipip_del_tunnel_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipip_del_tunnel_t: */
    s = format(s, "vl_api_ipip_del_tunnel_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipip_del_tunnel_reply_t_print (vl_api_ipip_del_tunnel_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipip_del_tunnel_reply_t: */
    s = format(s, "vl_api_ipip_del_tunnel_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipip_6rd_add_tunnel_t_print (vl_api_ipip_6rd_add_tunnel_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipip_6rd_add_tunnel_t: */
    s = format(s, "vl_api_ipip_6rd_add_tunnel_t:");
    s = format(s, "\n%Uip6_table_id: %u", format_white_space, indent, a->ip6_table_id);
    s = format(s, "\n%Uip4_table_id: %u", format_white_space, indent, a->ip4_table_id);
    s = format(s, "\n%Uip6_prefix: %U", format_white_space, indent, format_vl_api_ip6_prefix_t, &a->ip6_prefix, indent);
    s = format(s, "\n%Uip4_prefix: %U", format_white_space, indent, format_vl_api_ip4_prefix_t, &a->ip4_prefix, indent);
    s = format(s, "\n%Uip4_src: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip4_src, indent);
    s = format(s, "\n%Usecurity_check: %u", format_white_space, indent, a->security_check);
    s = format(s, "\n%Utc_tos: %u", format_white_space, indent, a->tc_tos);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipip_6rd_add_tunnel_reply_t_print (vl_api_ipip_6rd_add_tunnel_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipip_6rd_add_tunnel_reply_t: */
    s = format(s, "vl_api_ipip_6rd_add_tunnel_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipip_6rd_del_tunnel_t_print (vl_api_ipip_6rd_del_tunnel_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipip_6rd_del_tunnel_t: */
    s = format(s, "vl_api_ipip_6rd_del_tunnel_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipip_6rd_del_tunnel_reply_t_print (vl_api_ipip_6rd_del_tunnel_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipip_6rd_del_tunnel_reply_t: */
    s = format(s, "vl_api_ipip_6rd_del_tunnel_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipip_tunnel_dump_t_print (vl_api_ipip_tunnel_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipip_tunnel_dump_t: */
    s = format(s, "vl_api_ipip_tunnel_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipip_tunnel_details_t_print (vl_api_ipip_tunnel_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipip_tunnel_details_t: */
    s = format(s, "vl_api_ipip_tunnel_details_t:");
    s = format(s, "\n%Utunnel: %U", format_white_space, indent, format_vl_api_ipip_tunnel_t, &a->tunnel, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_ipip_endianfun
#define included_ipip_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_ipip_tunnel_t_endian (vl_api_ipip_tunnel_t *a)
{
    int i __attribute__((unused));
    a->instance = clib_net_to_host_u32(a->instance);
    vl_api_address_t_endian(&a->src);
    vl_api_address_t_endian(&a->dst);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->table_id = clib_net_to_host_u32(a->table_id);
    vl_api_tunnel_encap_decap_flags_t_endian(&a->flags);
    vl_api_tunnel_mode_t_endian(&a->mode);
    vl_api_ip_dscp_t_endian(&a->dscp);
}

static inline void vl_api_ipip_add_tunnel_t_endian (vl_api_ipip_add_tunnel_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ipip_tunnel_t_endian(&a->tunnel);
}

static inline void vl_api_ipip_add_tunnel_reply_t_endian (vl_api_ipip_add_tunnel_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ipip_del_tunnel_t_endian (vl_api_ipip_del_tunnel_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ipip_del_tunnel_reply_t_endian (vl_api_ipip_del_tunnel_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ipip_6rd_add_tunnel_t_endian (vl_api_ipip_6rd_add_tunnel_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->ip6_table_id = clib_net_to_host_u32(a->ip6_table_id);
    a->ip4_table_id = clib_net_to_host_u32(a->ip4_table_id);
    vl_api_ip6_prefix_t_endian(&a->ip6_prefix);
    vl_api_ip4_prefix_t_endian(&a->ip4_prefix);
    vl_api_ip4_address_t_endian(&a->ip4_src);
    /* a->security_check = a->security_check (no-op) */
    /* a->tc_tos = a->tc_tos (no-op) */
}

static inline void vl_api_ipip_6rd_add_tunnel_reply_t_endian (vl_api_ipip_6rd_add_tunnel_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ipip_6rd_del_tunnel_t_endian (vl_api_ipip_6rd_del_tunnel_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ipip_6rd_del_tunnel_reply_t_endian (vl_api_ipip_6rd_del_tunnel_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ipip_tunnel_dump_t_endian (vl_api_ipip_tunnel_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ipip_tunnel_details_t_endian (vl_api_ipip_tunnel_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ipip_tunnel_t_endian(&a->tunnel);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(ipip.api, 2, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ipip.api, 0x3c9c667)

#endif

