/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: vhost_user.api
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
#warning no content included from vhost_user.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#include <vnet/devices/virtio/virtio_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_CREATE_VHOST_USER_IF, vl_api_create_vhost_user_if_t_handler)
vl_msg_id(VL_API_CREATE_VHOST_USER_IF_REPLY, vl_api_create_vhost_user_if_reply_t_handler)
vl_msg_id(VL_API_MODIFY_VHOST_USER_IF, vl_api_modify_vhost_user_if_t_handler)
vl_msg_id(VL_API_MODIFY_VHOST_USER_IF_REPLY, vl_api_modify_vhost_user_if_reply_t_handler)
vl_msg_id(VL_API_DELETE_VHOST_USER_IF, vl_api_delete_vhost_user_if_t_handler)
vl_msg_id(VL_API_DELETE_VHOST_USER_IF_REPLY, vl_api_delete_vhost_user_if_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_VHOST_USER_DETAILS, vl_api_sw_interface_vhost_user_details_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_VHOST_USER_DUMP, vl_api_sw_interface_vhost_user_dump_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_create_vhost_user_if_t, 1)
vl_msg_name(vl_api_create_vhost_user_if_reply_t, 1)
vl_msg_name(vl_api_modify_vhost_user_if_t, 1)
vl_msg_name(vl_api_modify_vhost_user_if_reply_t, 1)
vl_msg_name(vl_api_delete_vhost_user_if_t, 1)
vl_msg_name(vl_api_delete_vhost_user_if_reply_t, 1)
vl_msg_name(vl_api_sw_interface_vhost_user_details_t, 1)
vl_msg_name(vl_api_sw_interface_vhost_user_dump_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_vhost_user \
_(VL_API_CREATE_VHOST_USER_IF, create_vhost_user_if, c785c6fc) \
_(VL_API_CREATE_VHOST_USER_IF_REPLY, create_vhost_user_if_reply, 5383d31f) \
_(VL_API_MODIFY_VHOST_USER_IF, modify_vhost_user_if, 0e71d40b) \
_(VL_API_MODIFY_VHOST_USER_IF_REPLY, modify_vhost_user_if_reply, e8d4e804) \
_(VL_API_DELETE_VHOST_USER_IF, delete_vhost_user_if, f9e6675e) \
_(VL_API_DELETE_VHOST_USER_IF_REPLY, delete_vhost_user_if_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_VHOST_USER_DETAILS, sw_interface_vhost_user_details, 98530df1) \
_(VL_API_SW_INTERFACE_VHOST_USER_DUMP, sw_interface_vhost_user_dump, f9e6675e) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "vhost_user.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_vhost_user_printfun_types
#define included_vhost_user_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_vhost_user_printfun
#define included_vhost_user_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_create_vhost_user_if_t_print (vl_api_create_vhost_user_if_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_create_vhost_user_if_t: */
    s = format(s, "vl_api_create_vhost_user_if_t:");
    s = format(s, "\n%Uis_server: %u", format_white_space, indent, a->is_server);
    s = format(s, "\n%Usock_filename: %s", format_white_space, indent, a->sock_filename);
    s = format(s, "\n%Urenumber: %u", format_white_space, indent, a->renumber);
    s = format(s, "\n%Udisable_mrg_rxbuf: %u", format_white_space, indent, a->disable_mrg_rxbuf);
    s = format(s, "\n%Udisable_indirect_desc: %u", format_white_space, indent, a->disable_indirect_desc);
    s = format(s, "\n%Uenable_gso: %u", format_white_space, indent, a->enable_gso);
    s = format(s, "\n%Uenable_packed: %u", format_white_space, indent, a->enable_packed);
    s = format(s, "\n%Ucustom_dev_instance: %u", format_white_space, indent, a->custom_dev_instance);
    s = format(s, "\n%Uuse_custom_mac: %u", format_white_space, indent, a->use_custom_mac);
    s = format(s, "\n%Umac_address: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac_address, indent);
    s = format(s, "\n%Utag: %s", format_white_space, indent, a->tag);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_create_vhost_user_if_reply_t_print (vl_api_create_vhost_user_if_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_create_vhost_user_if_reply_t: */
    s = format(s, "vl_api_create_vhost_user_if_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_modify_vhost_user_if_t_print (vl_api_modify_vhost_user_if_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_modify_vhost_user_if_t: */
    s = format(s, "vl_api_modify_vhost_user_if_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_server: %u", format_white_space, indent, a->is_server);
    s = format(s, "\n%Usock_filename: %s", format_white_space, indent, a->sock_filename);
    s = format(s, "\n%Urenumber: %u", format_white_space, indent, a->renumber);
    s = format(s, "\n%Uenable_gso: %u", format_white_space, indent, a->enable_gso);
    s = format(s, "\n%Uenable_packed: %u", format_white_space, indent, a->enable_packed);
    s = format(s, "\n%Ucustom_dev_instance: %u", format_white_space, indent, a->custom_dev_instance);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_modify_vhost_user_if_reply_t_print (vl_api_modify_vhost_user_if_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_modify_vhost_user_if_reply_t: */
    s = format(s, "vl_api_modify_vhost_user_if_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_delete_vhost_user_if_t_print (vl_api_delete_vhost_user_if_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_delete_vhost_user_if_t: */
    s = format(s, "vl_api_delete_vhost_user_if_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_delete_vhost_user_if_reply_t_print (vl_api_delete_vhost_user_if_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_delete_vhost_user_if_reply_t: */
    s = format(s, "vl_api_delete_vhost_user_if_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_vhost_user_details_t_print (vl_api_sw_interface_vhost_user_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_vhost_user_details_t: */
    s = format(s, "vl_api_sw_interface_vhost_user_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uinterface_name: %s", format_white_space, indent, a->interface_name);
    s = format(s, "\n%Uvirtio_net_hdr_sz: %u", format_white_space, indent, a->virtio_net_hdr_sz);
    s = format(s, "\n%Ufeatures_first_32: %U", format_white_space, indent, format_vl_api_virtio_net_features_first_32_t, &a->features_first_32, indent);
    s = format(s, "\n%Ufeatures_last_32: %U", format_white_space, indent, format_vl_api_virtio_net_features_last_32_t, &a->features_last_32, indent);
    s = format(s, "\n%Uis_server: %u", format_white_space, indent, a->is_server);
    s = format(s, "\n%Usock_filename: %s", format_white_space, indent, a->sock_filename);
    s = format(s, "\n%Unum_regions: %u", format_white_space, indent, a->num_regions);
    s = format(s, "\n%Usock_errno: %ld", format_white_space, indent, a->sock_errno);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_vhost_user_dump_t_print (vl_api_sw_interface_vhost_user_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_vhost_user_dump_t: */
    s = format(s, "vl_api_sw_interface_vhost_user_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_vhost_user_endianfun
#define included_vhost_user_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_create_vhost_user_if_t_endian (vl_api_create_vhost_user_if_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_server = a->is_server (no-op) */
    /* a->sock_filename = a->sock_filename (no-op) */
    /* a->renumber = a->renumber (no-op) */
    /* a->disable_mrg_rxbuf = a->disable_mrg_rxbuf (no-op) */
    /* a->disable_indirect_desc = a->disable_indirect_desc (no-op) */
    /* a->enable_gso = a->enable_gso (no-op) */
    /* a->enable_packed = a->enable_packed (no-op) */
    a->custom_dev_instance = clib_net_to_host_u32(a->custom_dev_instance);
    /* a->use_custom_mac = a->use_custom_mac (no-op) */
    vl_api_mac_address_t_endian(&a->mac_address);
    /* a->tag = a->tag (no-op) */
}

static inline void vl_api_create_vhost_user_if_reply_t_endian (vl_api_create_vhost_user_if_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_modify_vhost_user_if_t_endian (vl_api_modify_vhost_user_if_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_server = a->is_server (no-op) */
    /* a->sock_filename = a->sock_filename (no-op) */
    /* a->renumber = a->renumber (no-op) */
    /* a->enable_gso = a->enable_gso (no-op) */
    /* a->enable_packed = a->enable_packed (no-op) */
    a->custom_dev_instance = clib_net_to_host_u32(a->custom_dev_instance);
}

static inline void vl_api_modify_vhost_user_if_reply_t_endian (vl_api_modify_vhost_user_if_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_delete_vhost_user_if_t_endian (vl_api_delete_vhost_user_if_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_delete_vhost_user_if_reply_t_endian (vl_api_delete_vhost_user_if_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_vhost_user_details_t_endian (vl_api_sw_interface_vhost_user_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->interface_name = a->interface_name (no-op) */
    a->virtio_net_hdr_sz = clib_net_to_host_u32(a->virtio_net_hdr_sz);
    vl_api_virtio_net_features_first_32_t_endian(&a->features_first_32);
    vl_api_virtio_net_features_last_32_t_endian(&a->features_last_32);
    /* a->is_server = a->is_server (no-op) */
    /* a->sock_filename = a->sock_filename (no-op) */
    a->num_regions = clib_net_to_host_u32(a->num_regions);
    a->sock_errno = clib_net_to_host_i32(a->sock_errno);
}

static inline void vl_api_sw_interface_vhost_user_dump_t_endian (vl_api_sw_interface_vhost_user_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(vhost_user.api, 4, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(vhost_user.api, 0xcd48ff69)

#endif

