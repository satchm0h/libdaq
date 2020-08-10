/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: af_packet.api
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
#warning no content included from af_packet.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_AF_PACKET_CREATE, vl_api_af_packet_create_t_handler)
vl_msg_id(VL_API_AF_PACKET_CREATE_REPLY, vl_api_af_packet_create_reply_t_handler)
vl_msg_id(VL_API_AF_PACKET_DELETE, vl_api_af_packet_delete_t_handler)
vl_msg_id(VL_API_AF_PACKET_DELETE_REPLY, vl_api_af_packet_delete_reply_t_handler)
vl_msg_id(VL_API_AF_PACKET_SET_L4_CKSUM_OFFLOAD, vl_api_af_packet_set_l4_cksum_offload_t_handler)
vl_msg_id(VL_API_AF_PACKET_SET_L4_CKSUM_OFFLOAD_REPLY, vl_api_af_packet_set_l4_cksum_offload_reply_t_handler)
vl_msg_id(VL_API_AF_PACKET_DUMP, vl_api_af_packet_dump_t_handler)
vl_msg_id(VL_API_AF_PACKET_DETAILS, vl_api_af_packet_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_af_packet_create_t, 1)
vl_msg_name(vl_api_af_packet_create_reply_t, 1)
vl_msg_name(vl_api_af_packet_delete_t, 1)
vl_msg_name(vl_api_af_packet_delete_reply_t, 1)
vl_msg_name(vl_api_af_packet_set_l4_cksum_offload_t, 1)
vl_msg_name(vl_api_af_packet_set_l4_cksum_offload_reply_t, 1)
vl_msg_name(vl_api_af_packet_dump_t, 1)
vl_msg_name(vl_api_af_packet_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_af_packet \
_(VL_API_AF_PACKET_CREATE, af_packet_create, a190415f) \
_(VL_API_AF_PACKET_CREATE_REPLY, af_packet_create_reply, 5383d31f) \
_(VL_API_AF_PACKET_DELETE, af_packet_delete, 863fa648) \
_(VL_API_AF_PACKET_DELETE_REPLY, af_packet_delete_reply, e8d4e804) \
_(VL_API_AF_PACKET_SET_L4_CKSUM_OFFLOAD, af_packet_set_l4_cksum_offload, 319cd5c8) \
_(VL_API_AF_PACKET_SET_L4_CKSUM_OFFLOAD_REPLY, af_packet_set_l4_cksum_offload_reply, e8d4e804) \
_(VL_API_AF_PACKET_DUMP, af_packet_dump, 51077d14) \
_(VL_API_AF_PACKET_DETAILS, af_packet_details, 58c7c042) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "af_packet.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_af_packet_printfun_types
#define included_af_packet_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_af_packet_printfun
#define included_af_packet_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_af_packet_create_t_print (vl_api_af_packet_create_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_af_packet_create_t: */
    s = format(s, "vl_api_af_packet_create_t:");
    s = format(s, "\n%Uhw_addr: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->hw_addr, indent);
    s = format(s, "\n%Uuse_random_hw_addr: %u", format_white_space, indent, a->use_random_hw_addr);
    s = format(s, "\n%Uhost_if_name: %s", format_white_space, indent, a->host_if_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_af_packet_create_reply_t_print (vl_api_af_packet_create_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_af_packet_create_reply_t: */
    s = format(s, "vl_api_af_packet_create_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_af_packet_delete_t_print (vl_api_af_packet_delete_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_af_packet_delete_t: */
    s = format(s, "vl_api_af_packet_delete_t:");
    s = format(s, "\n%Uhost_if_name: %s", format_white_space, indent, a->host_if_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_af_packet_delete_reply_t_print (vl_api_af_packet_delete_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_af_packet_delete_reply_t: */
    s = format(s, "vl_api_af_packet_delete_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_af_packet_set_l4_cksum_offload_t_print (vl_api_af_packet_set_l4_cksum_offload_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_af_packet_set_l4_cksum_offload_t: */
    s = format(s, "vl_api_af_packet_set_l4_cksum_offload_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uset: %u", format_white_space, indent, a->set);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_af_packet_set_l4_cksum_offload_reply_t_print (vl_api_af_packet_set_l4_cksum_offload_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_af_packet_set_l4_cksum_offload_reply_t: */
    s = format(s, "vl_api_af_packet_set_l4_cksum_offload_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_af_packet_dump_t_print (vl_api_af_packet_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_af_packet_dump_t: */
    s = format(s, "vl_api_af_packet_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_af_packet_details_t_print (vl_api_af_packet_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_af_packet_details_t: */
    s = format(s, "vl_api_af_packet_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uhost_if_name: %s", format_white_space, indent, a->host_if_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_af_packet_endianfun
#define included_af_packet_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_af_packet_create_t_endian (vl_api_af_packet_create_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_mac_address_t_endian(&a->hw_addr);
    /* a->use_random_hw_addr = a->use_random_hw_addr (no-op) */
    /* a->host_if_name = a->host_if_name (no-op) */
}

static inline void vl_api_af_packet_create_reply_t_endian (vl_api_af_packet_create_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_af_packet_delete_t_endian (vl_api_af_packet_delete_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->host_if_name = a->host_if_name (no-op) */
}

static inline void vl_api_af_packet_delete_reply_t_endian (vl_api_af_packet_delete_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_af_packet_set_l4_cksum_offload_t_endian (vl_api_af_packet_set_l4_cksum_offload_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->set = a->set (no-op) */
}

static inline void vl_api_af_packet_set_l4_cksum_offload_reply_t_endian (vl_api_af_packet_set_l4_cksum_offload_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_af_packet_dump_t_endian (vl_api_af_packet_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_af_packet_details_t_endian (vl_api_af_packet_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->host_if_name = a->host_if_name (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(af_packet.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(af_packet.api, 0x9376338)

#endif

