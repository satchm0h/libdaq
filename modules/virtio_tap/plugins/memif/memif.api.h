/*
 * VLIB API definitions 2020-07-24 16:29:04
 * Input file: memif.api
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
#warning no content included from memif.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_MEMIF_SOCKET_FILENAME_ADD_DEL, vl_api_memif_socket_filename_add_del_t_handler)
vl_msg_id(VL_API_MEMIF_SOCKET_FILENAME_ADD_DEL_REPLY, vl_api_memif_socket_filename_add_del_reply_t_handler)
vl_msg_id(VL_API_MEMIF_CREATE, vl_api_memif_create_t_handler)
vl_msg_id(VL_API_MEMIF_CREATE_REPLY, vl_api_memif_create_reply_t_handler)
vl_msg_id(VL_API_MEMIF_DELETE, vl_api_memif_delete_t_handler)
vl_msg_id(VL_API_MEMIF_DELETE_REPLY, vl_api_memif_delete_reply_t_handler)
vl_msg_id(VL_API_MEMIF_SOCKET_FILENAME_DETAILS, vl_api_memif_socket_filename_details_t_handler)
vl_msg_id(VL_API_MEMIF_SOCKET_FILENAME_DUMP, vl_api_memif_socket_filename_dump_t_handler)
vl_msg_id(VL_API_MEMIF_DETAILS, vl_api_memif_details_t_handler)
vl_msg_id(VL_API_MEMIF_DUMP, vl_api_memif_dump_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_memif_socket_filename_add_del_t, 1)
vl_msg_name(vl_api_memif_socket_filename_add_del_reply_t, 1)
vl_msg_name(vl_api_memif_create_t, 1)
vl_msg_name(vl_api_memif_create_reply_t, 1)
vl_msg_name(vl_api_memif_delete_t, 1)
vl_msg_name(vl_api_memif_delete_reply_t, 1)
vl_msg_name(vl_api_memif_socket_filename_details_t, 1)
vl_msg_name(vl_api_memif_socket_filename_dump_t, 1)
vl_msg_name(vl_api_memif_details_t, 1)
vl_msg_name(vl_api_memif_dump_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_memif \
_(VL_API_MEMIF_SOCKET_FILENAME_ADD_DEL, memif_socket_filename_add_del, a2ce1a10) \
_(VL_API_MEMIF_SOCKET_FILENAME_ADD_DEL_REPLY, memif_socket_filename_add_del_reply, e8d4e804) \
_(VL_API_MEMIF_CREATE, memif_create, b1b25061) \
_(VL_API_MEMIF_CREATE_REPLY, memif_create_reply, 5383d31f) \
_(VL_API_MEMIF_DELETE, memif_delete, f9e6675e) \
_(VL_API_MEMIF_DELETE_REPLY, memif_delete_reply, e8d4e804) \
_(VL_API_MEMIF_SOCKET_FILENAME_DETAILS, memif_socket_filename_details, 7ff326f7) \
_(VL_API_MEMIF_SOCKET_FILENAME_DUMP, memif_socket_filename_dump, 51077d14) \
_(VL_API_MEMIF_DETAILS, memif_details, d0382c4c) \
_(VL_API_MEMIF_DUMP, memif_dump, 51077d14) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "memif.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_memif_printfun_types
#define included_memif_printfun_types

static inline u8 *format_vl_api_memif_role_t (u8 *s, va_list * args)
{
    vl_api_memif_role_t *a = va_arg (*args, vl_api_memif_role_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "MEMIF_ROLE_API_MASTER");
    case 1:
        return format(s, "MEMIF_ROLE_API_SLAVE");
    }
    return s;
}

static inline u8 *format_vl_api_memif_mode_t (u8 *s, va_list * args)
{
    vl_api_memif_mode_t *a = va_arg (*args, vl_api_memif_mode_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "MEMIF_MODE_API_ETHERNET");
    case 1:
        return format(s, "MEMIF_MODE_API_IP");
    case 2:
        return format(s, "MEMIF_MODE_API_PUNT_INJECT");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_memif_printfun
#define included_memif_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_memif_socket_filename_add_del_t_print (vl_api_memif_socket_filename_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_memif_socket_filename_add_del_t: */
    s = format(s, "vl_api_memif_socket_filename_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Usocket_id: %u", format_white_space, indent, a->socket_id);
    s = format(s, "\n%Usocket_filename: %s", format_white_space, indent, a->socket_filename);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_memif_socket_filename_add_del_reply_t_print (vl_api_memif_socket_filename_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_memif_socket_filename_add_del_reply_t: */
    s = format(s, "vl_api_memif_socket_filename_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_memif_create_t_print (vl_api_memif_create_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_memif_create_t: */
    s = format(s, "vl_api_memif_create_t:");
    s = format(s, "\n%Urole: %U", format_white_space, indent, format_vl_api_memif_role_t, &a->role, indent);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_memif_mode_t, &a->mode, indent);
    s = format(s, "\n%Urx_queues: %u", format_white_space, indent, a->rx_queues);
    s = format(s, "\n%Utx_queues: %u", format_white_space, indent, a->tx_queues);
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    s = format(s, "\n%Usocket_id: %u", format_white_space, indent, a->socket_id);
    s = format(s, "\n%Uring_size: %u", format_white_space, indent, a->ring_size);
    s = format(s, "\n%Ubuffer_size: %u", format_white_space, indent, a->buffer_size);
    s = format(s, "\n%Uno_zero_copy: %u", format_white_space, indent, a->no_zero_copy);
    s = format(s, "\n%Uhw_addr: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->hw_addr, indent);
    s = format(s, "\n%Usecret: %s", format_white_space, indent, a->secret);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_memif_create_reply_t_print (vl_api_memif_create_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_memif_create_reply_t: */
    s = format(s, "vl_api_memif_create_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_memif_delete_t_print (vl_api_memif_delete_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_memif_delete_t: */
    s = format(s, "vl_api_memif_delete_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_memif_delete_reply_t_print (vl_api_memif_delete_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_memif_delete_reply_t: */
    s = format(s, "vl_api_memif_delete_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_memif_socket_filename_details_t_print (vl_api_memif_socket_filename_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_memif_socket_filename_details_t: */
    s = format(s, "vl_api_memif_socket_filename_details_t:");
    s = format(s, "\n%Usocket_id: %u", format_white_space, indent, a->socket_id);
    s = format(s, "\n%Usocket_filename: %s", format_white_space, indent, a->socket_filename);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_memif_socket_filename_dump_t_print (vl_api_memif_socket_filename_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_memif_socket_filename_dump_t: */
    s = format(s, "vl_api_memif_socket_filename_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_memif_details_t_print (vl_api_memif_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_memif_details_t: */
    s = format(s, "vl_api_memif_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uhw_addr: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->hw_addr, indent);
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    s = format(s, "\n%Urole: %U", format_white_space, indent, format_vl_api_memif_role_t, &a->role, indent);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_memif_mode_t, &a->mode, indent);
    s = format(s, "\n%Uzero_copy: %u", format_white_space, indent, a->zero_copy);
    s = format(s, "\n%Usocket_id: %u", format_white_space, indent, a->socket_id);
    s = format(s, "\n%Uring_size: %u", format_white_space, indent, a->ring_size);
    s = format(s, "\n%Ubuffer_size: %u", format_white_space, indent, a->buffer_size);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_if_status_flags_t, &a->flags, indent);
    s = format(s, "\n%Uif_name: %s", format_white_space, indent, a->if_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_memif_dump_t_print (vl_api_memif_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_memif_dump_t: */
    s = format(s, "vl_api_memif_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_memif_endianfun
#define included_memif_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_memif_role_t_endian (vl_api_memif_role_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_memif_mode_t_endian (vl_api_memif_mode_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_memif_socket_filename_add_del_t_endian (vl_api_memif_socket_filename_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->socket_id = clib_net_to_host_u32(a->socket_id);
    /* a->socket_filename = a->socket_filename (no-op) */
}

static inline void vl_api_memif_socket_filename_add_del_reply_t_endian (vl_api_memif_socket_filename_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_memif_create_t_endian (vl_api_memif_create_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_memif_role_t_endian(&a->role);
    vl_api_memif_mode_t_endian(&a->mode);
    /* a->rx_queues = a->rx_queues (no-op) */
    /* a->tx_queues = a->tx_queues (no-op) */
    a->id = clib_net_to_host_u32(a->id);
    a->socket_id = clib_net_to_host_u32(a->socket_id);
    a->ring_size = clib_net_to_host_u32(a->ring_size);
    a->buffer_size = clib_net_to_host_u16(a->buffer_size);
    /* a->no_zero_copy = a->no_zero_copy (no-op) */
    vl_api_mac_address_t_endian(&a->hw_addr);
    /* a->secret = a->secret (no-op) */
}

static inline void vl_api_memif_create_reply_t_endian (vl_api_memif_create_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_memif_delete_t_endian (vl_api_memif_delete_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_memif_delete_reply_t_endian (vl_api_memif_delete_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_memif_socket_filename_details_t_endian (vl_api_memif_socket_filename_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->socket_id = clib_net_to_host_u32(a->socket_id);
    /* a->socket_filename = a->socket_filename (no-op) */
}

static inline void vl_api_memif_socket_filename_dump_t_endian (vl_api_memif_socket_filename_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_memif_details_t_endian (vl_api_memif_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_mac_address_t_endian(&a->hw_addr);
    a->id = clib_net_to_host_u32(a->id);
    vl_api_memif_role_t_endian(&a->role);
    vl_api_memif_mode_t_endian(&a->mode);
    /* a->zero_copy = a->zero_copy (no-op) */
    a->socket_id = clib_net_to_host_u32(a->socket_id);
    a->ring_size = clib_net_to_host_u32(a->ring_size);
    a->buffer_size = clib_net_to_host_u16(a->buffer_size);
    vl_api_if_status_flags_t_endian(&a->flags);
    /* a->if_name = a->if_name (no-op) */
}

static inline void vl_api_memif_dump_t_endian (vl_api_memif_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(memif.api, 3, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(memif.api, 0x1cebc00e)

#endif

