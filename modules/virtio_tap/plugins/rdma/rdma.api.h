/*
 * VLIB API definitions 2020-07-24 16:29:16
 * Input file: rdma.api
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
#warning no content included from rdma.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_RDMA_CREATE, vl_api_rdma_create_t_handler)
vl_msg_id(VL_API_RDMA_CREATE_REPLY, vl_api_rdma_create_reply_t_handler)
vl_msg_id(VL_API_RDMA_DELETE, vl_api_rdma_delete_t_handler)
vl_msg_id(VL_API_RDMA_DELETE_REPLY, vl_api_rdma_delete_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_rdma_create_t, 1)
vl_msg_name(vl_api_rdma_create_reply_t, 1)
vl_msg_name(vl_api_rdma_delete_t, 1)
vl_msg_name(vl_api_rdma_delete_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_rdma \
_(VL_API_RDMA_CREATE, rdma_create, 076fe418) \
_(VL_API_RDMA_CREATE_REPLY, rdma_create_reply, 5383d31f) \
_(VL_API_RDMA_DELETE, rdma_delete, f9e6675e) \
_(VL_API_RDMA_DELETE_REPLY, rdma_delete_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "rdma.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_rdma_printfun_types
#define included_rdma_printfun_types

static inline u8 *format_vl_api_rdma_mode_t (u8 *s, va_list * args)
{
    vl_api_rdma_mode_t *a = va_arg (*args, vl_api_rdma_mode_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "RDMA_API_MODE_AUTO");
    case 1:
        return format(s, "RDMA_API_MODE_IBV");
    case 2:
        return format(s, "RDMA_API_MODE_DV");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_rdma_printfun
#define included_rdma_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_rdma_create_t_print (vl_api_rdma_create_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_rdma_create_t: */
    s = format(s, "vl_api_rdma_create_t:");
    s = format(s, "\n%Uhost_if: %s", format_white_space, indent, a->host_if);
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Urxq_num: %u", format_white_space, indent, a->rxq_num);
    s = format(s, "\n%Urxq_size: %u", format_white_space, indent, a->rxq_size);
    s = format(s, "\n%Utxq_size: %u", format_white_space, indent, a->txq_size);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_rdma_mode_t, &a->mode, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_rdma_create_reply_t_print (vl_api_rdma_create_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_rdma_create_reply_t: */
    s = format(s, "vl_api_rdma_create_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_rdma_delete_t_print (vl_api_rdma_delete_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_rdma_delete_t: */
    s = format(s, "vl_api_rdma_delete_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_rdma_delete_reply_t_print (vl_api_rdma_delete_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_rdma_delete_reply_t: */
    s = format(s, "vl_api_rdma_delete_reply_t:");
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
#ifndef included_rdma_endianfun
#define included_rdma_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_rdma_mode_t_endian (vl_api_rdma_mode_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_rdma_create_t_endian (vl_api_rdma_create_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->host_if = a->host_if (no-op) */
    /* a->name = a->name (no-op) */
    a->rxq_num = clib_net_to_host_u16(a->rxq_num);
    a->rxq_size = clib_net_to_host_u16(a->rxq_size);
    a->txq_size = clib_net_to_host_u16(a->txq_size);
    vl_api_rdma_mode_t_endian(&a->mode);
}

static inline void vl_api_rdma_create_reply_t_endian (vl_api_rdma_create_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_rdma_delete_t_endian (vl_api_rdma_delete_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_rdma_delete_reply_t_endian (vl_api_rdma_delete_reply_t *a)
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

vl_api_version_tuple(rdma.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(rdma.api, 0xe22a9d05)

#endif

