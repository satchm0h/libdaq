/*
 * VLIB API definitions 2020-07-24 16:28:45
 * Input file: avf.api
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
#warning no content included from avf.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_AVF_CREATE, vl_api_avf_create_t_handler)
vl_msg_id(VL_API_AVF_CREATE_REPLY, vl_api_avf_create_reply_t_handler)
vl_msg_id(VL_API_AVF_DELETE, vl_api_avf_delete_t_handler)
vl_msg_id(VL_API_AVF_DELETE_REPLY, vl_api_avf_delete_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_avf_create_t, 1)
vl_msg_name(vl_api_avf_create_reply_t, 1)
vl_msg_name(vl_api_avf_delete_t, 1)
vl_msg_name(vl_api_avf_delete_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_avf \
_(VL_API_AVF_CREATE, avf_create, daab8ae2) \
_(VL_API_AVF_CREATE_REPLY, avf_create_reply, 5383d31f) \
_(VL_API_AVF_DELETE, avf_delete, f9e6675e) \
_(VL_API_AVF_DELETE_REPLY, avf_delete_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "avf.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_avf_printfun_types
#define included_avf_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_avf_printfun
#define included_avf_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_avf_create_t_print (vl_api_avf_create_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_avf_create_t: */
    s = format(s, "vl_api_avf_create_t:");
    s = format(s, "\n%Upci_addr: %u", format_white_space, indent, a->pci_addr);
    s = format(s, "\n%Uenable_elog: %ld", format_white_space, indent, a->enable_elog);
    s = format(s, "\n%Urxq_num: %u", format_white_space, indent, a->rxq_num);
    s = format(s, "\n%Urxq_size: %u", format_white_space, indent, a->rxq_size);
    s = format(s, "\n%Utxq_size: %u", format_white_space, indent, a->txq_size);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_avf_create_reply_t_print (vl_api_avf_create_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_avf_create_reply_t: */
    s = format(s, "vl_api_avf_create_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_avf_delete_t_print (vl_api_avf_delete_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_avf_delete_t: */
    s = format(s, "vl_api_avf_delete_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_avf_delete_reply_t_print (vl_api_avf_delete_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_avf_delete_reply_t: */
    s = format(s, "vl_api_avf_delete_reply_t:");
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
#ifndef included_avf_endianfun
#define included_avf_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_avf_create_t_endian (vl_api_avf_create_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->pci_addr = clib_net_to_host_u32(a->pci_addr);
    a->enable_elog = clib_net_to_host_i32(a->enable_elog);
    a->rxq_num = clib_net_to_host_u16(a->rxq_num);
    a->rxq_size = clib_net_to_host_u16(a->rxq_size);
    a->txq_size = clib_net_to_host_u16(a->txq_size);
}

static inline void vl_api_avf_create_reply_t_endian (vl_api_avf_create_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_avf_delete_t_endian (vl_api_avf_delete_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_avf_delete_reply_t_endian (vl_api_avf_delete_reply_t *a)
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

vl_api_version_tuple(avf.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(avf.api, 0x45056ab4)

#endif

