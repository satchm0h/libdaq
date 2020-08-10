/*
 * VLIB API definitions 2020-07-24 16:28:06
 * Input file: bond.api
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
#warning no content included from bond.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_BOND_CREATE, vl_api_bond_create_t_handler)
vl_msg_id(VL_API_BOND_CREATE_REPLY, vl_api_bond_create_reply_t_handler)
vl_msg_id(VL_API_BOND_DELETE, vl_api_bond_delete_t_handler)
vl_msg_id(VL_API_BOND_DELETE_REPLY, vl_api_bond_delete_reply_t_handler)
vl_msg_id(VL_API_BOND_ENSLAVE, vl_api_bond_enslave_t_handler)
vl_msg_id(VL_API_BOND_ENSLAVE_REPLY, vl_api_bond_enslave_reply_t_handler)
vl_msg_id(VL_API_BOND_DETACH_SLAVE, vl_api_bond_detach_slave_t_handler)
vl_msg_id(VL_API_BOND_DETACH_SLAVE_REPLY, vl_api_bond_detach_slave_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_BOND_DUMP, vl_api_sw_interface_bond_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_BOND_DETAILS, vl_api_sw_interface_bond_details_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SLAVE_DUMP, vl_api_sw_interface_slave_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SLAVE_DETAILS, vl_api_sw_interface_slave_details_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_BOND_WEIGHT, vl_api_sw_interface_set_bond_weight_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_BOND_WEIGHT_REPLY, vl_api_sw_interface_set_bond_weight_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_bond_create_t, 1)
vl_msg_name(vl_api_bond_create_reply_t, 1)
vl_msg_name(vl_api_bond_delete_t, 1)
vl_msg_name(vl_api_bond_delete_reply_t, 1)
vl_msg_name(vl_api_bond_enslave_t, 1)
vl_msg_name(vl_api_bond_enslave_reply_t, 1)
vl_msg_name(vl_api_bond_detach_slave_t, 1)
vl_msg_name(vl_api_bond_detach_slave_reply_t, 1)
vl_msg_name(vl_api_sw_interface_bond_dump_t, 1)
vl_msg_name(vl_api_sw_interface_bond_details_t, 1)
vl_msg_name(vl_api_sw_interface_slave_dump_t, 1)
vl_msg_name(vl_api_sw_interface_slave_details_t, 1)
vl_msg_name(vl_api_sw_interface_set_bond_weight_t, 1)
vl_msg_name(vl_api_sw_interface_set_bond_weight_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_bond \
_(VL_API_BOND_CREATE, bond_create, 48883c7e) \
_(VL_API_BOND_CREATE_REPLY, bond_create_reply, 5383d31f) \
_(VL_API_BOND_DELETE, bond_delete, f9e6675e) \
_(VL_API_BOND_DELETE_REPLY, bond_delete_reply, e8d4e804) \
_(VL_API_BOND_ENSLAVE, bond_enslave, 076ecfa7) \
_(VL_API_BOND_ENSLAVE_REPLY, bond_enslave_reply, e8d4e804) \
_(VL_API_BOND_DETACH_SLAVE, bond_detach_slave, f9e6675e) \
_(VL_API_BOND_DETACH_SLAVE_REPLY, bond_detach_slave_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_BOND_DUMP, sw_interface_bond_dump, 51077d14) \
_(VL_API_SW_INTERFACE_BOND_DETAILS, sw_interface_bond_details, f5ef2106) \
_(VL_API_SW_INTERFACE_SLAVE_DUMP, sw_interface_slave_dump, f9e6675e) \
_(VL_API_SW_INTERFACE_SLAVE_DETAILS, sw_interface_slave_details, 3c4a0e23) \
_(VL_API_SW_INTERFACE_SET_BOND_WEIGHT, sw_interface_set_bond_weight, deb510a0) \
_(VL_API_SW_INTERFACE_SET_BOND_WEIGHT_REPLY, sw_interface_set_bond_weight_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "bond.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_bond_printfun_types
#define included_bond_printfun_types

static inline u8 *format_vl_api_bond_mode_t (u8 *s, va_list * args)
{
    vl_api_bond_mode_t *a = va_arg (*args, vl_api_bond_mode_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "BOND_API_MODE_ROUND_ROBIN");
    case 2:
        return format(s, "BOND_API_MODE_ACTIVE_BACKUP");
    case 3:
        return format(s, "BOND_API_MODE_XOR");
    case 4:
        return format(s, "BOND_API_MODE_BROADCAST");
    case 5:
        return format(s, "BOND_API_MODE_LACP");
    }
    return s;
}

static inline u8 *format_vl_api_bond_lb_algo_t (u8 *s, va_list * args)
{
    vl_api_bond_lb_algo_t *a = va_arg (*args, vl_api_bond_lb_algo_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "BOND_API_LB_ALGO_L2");
    case 1:
        return format(s, "BOND_API_LB_ALGO_L34");
    case 2:
        return format(s, "BOND_API_LB_ALGO_L23");
    case 3:
        return format(s, "BOND_API_LB_ALGO_RR");
    case 4:
        return format(s, "BOND_API_LB_ALGO_BC");
    case 5:
        return format(s, "BOND_API_LB_ALGO_AB");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_bond_printfun
#define included_bond_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_bond_create_t_print (vl_api_bond_create_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bond_create_t: */
    s = format(s, "vl_api_bond_create_t:");
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    s = format(s, "\n%Uuse_custom_mac: %u", format_white_space, indent, a->use_custom_mac);
    s = format(s, "\n%Umac_address: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac_address, indent);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_bond_mode_t, &a->mode, indent);
    s = format(s, "\n%Ulb: %U", format_white_space, indent, format_vl_api_bond_lb_algo_t, &a->lb, indent);
    s = format(s, "\n%Unuma_only: %u", format_white_space, indent, a->numa_only);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bond_create_reply_t_print (vl_api_bond_create_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bond_create_reply_t: */
    s = format(s, "vl_api_bond_create_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bond_delete_t_print (vl_api_bond_delete_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bond_delete_t: */
    s = format(s, "vl_api_bond_delete_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bond_delete_reply_t_print (vl_api_bond_delete_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bond_delete_reply_t: */
    s = format(s, "vl_api_bond_delete_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bond_enslave_t_print (vl_api_bond_enslave_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bond_enslave_t: */
    s = format(s, "vl_api_bond_enslave_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ubond_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->bond_sw_if_index, indent);
    s = format(s, "\n%Uis_passive: %u", format_white_space, indent, a->is_passive);
    s = format(s, "\n%Uis_long_timeout: %u", format_white_space, indent, a->is_long_timeout);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bond_enslave_reply_t_print (vl_api_bond_enslave_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bond_enslave_reply_t: */
    s = format(s, "vl_api_bond_enslave_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bond_detach_slave_t_print (vl_api_bond_detach_slave_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bond_detach_slave_t: */
    s = format(s, "vl_api_bond_detach_slave_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bond_detach_slave_reply_t_print (vl_api_bond_detach_slave_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bond_detach_slave_reply_t: */
    s = format(s, "vl_api_bond_detach_slave_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_bond_dump_t_print (vl_api_sw_interface_bond_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_bond_dump_t: */
    s = format(s, "vl_api_sw_interface_bond_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_bond_details_t_print (vl_api_sw_interface_bond_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_bond_details_t: */
    s = format(s, "vl_api_sw_interface_bond_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_bond_mode_t, &a->mode, indent);
    s = format(s, "\n%Ulb: %U", format_white_space, indent, format_vl_api_bond_lb_algo_t, &a->lb, indent);
    s = format(s, "\n%Unuma_only: %u", format_white_space, indent, a->numa_only);
    s = format(s, "\n%Uactive_slaves: %u", format_white_space, indent, a->active_slaves);
    s = format(s, "\n%Uslaves: %u", format_white_space, indent, a->slaves);
    s = format(s, "\n%Uinterface_name: %s", format_white_space, indent, a->interface_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_slave_dump_t_print (vl_api_sw_interface_slave_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_slave_dump_t: */
    s = format(s, "vl_api_sw_interface_slave_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_slave_details_t_print (vl_api_sw_interface_slave_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_slave_details_t: */
    s = format(s, "vl_api_sw_interface_slave_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uinterface_name: %s", format_white_space, indent, a->interface_name);
    s = format(s, "\n%Uis_passive: %u", format_white_space, indent, a->is_passive);
    s = format(s, "\n%Uis_long_timeout: %u", format_white_space, indent, a->is_long_timeout);
    s = format(s, "\n%Uis_local_numa: %u", format_white_space, indent, a->is_local_numa);
    s = format(s, "\n%Uweight: %u", format_white_space, indent, a->weight);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_bond_weight_t_print (vl_api_sw_interface_set_bond_weight_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_bond_weight_t: */
    s = format(s, "vl_api_sw_interface_set_bond_weight_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uweight: %u", format_white_space, indent, a->weight);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_bond_weight_reply_t_print (vl_api_sw_interface_set_bond_weight_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_bond_weight_reply_t: */
    s = format(s, "vl_api_sw_interface_set_bond_weight_reply_t:");
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
#ifndef included_bond_endianfun
#define included_bond_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_bond_mode_t_endian (vl_api_bond_mode_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_bond_lb_algo_t_endian (vl_api_bond_lb_algo_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_bond_create_t_endian (vl_api_bond_create_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u32(a->id);
    /* a->use_custom_mac = a->use_custom_mac (no-op) */
    vl_api_mac_address_t_endian(&a->mac_address);
    vl_api_bond_mode_t_endian(&a->mode);
    vl_api_bond_lb_algo_t_endian(&a->lb);
    /* a->numa_only = a->numa_only (no-op) */
}

static inline void vl_api_bond_create_reply_t_endian (vl_api_bond_create_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_bond_delete_t_endian (vl_api_bond_delete_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_bond_delete_reply_t_endian (vl_api_bond_delete_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bond_enslave_t_endian (vl_api_bond_enslave_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_interface_index_t_endian(&a->bond_sw_if_index);
    /* a->is_passive = a->is_passive (no-op) */
    /* a->is_long_timeout = a->is_long_timeout (no-op) */
}

static inline void vl_api_bond_enslave_reply_t_endian (vl_api_bond_enslave_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bond_detach_slave_t_endian (vl_api_bond_detach_slave_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_bond_detach_slave_reply_t_endian (vl_api_bond_detach_slave_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_bond_dump_t_endian (vl_api_sw_interface_bond_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_sw_interface_bond_details_t_endian (vl_api_sw_interface_bond_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->id = clib_net_to_host_u32(a->id);
    vl_api_bond_mode_t_endian(&a->mode);
    vl_api_bond_lb_algo_t_endian(&a->lb);
    /* a->numa_only = a->numa_only (no-op) */
    a->active_slaves = clib_net_to_host_u32(a->active_slaves);
    a->slaves = clib_net_to_host_u32(a->slaves);
    /* a->interface_name = a->interface_name (no-op) */
}

static inline void vl_api_sw_interface_slave_dump_t_endian (vl_api_sw_interface_slave_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_sw_interface_slave_details_t_endian (vl_api_sw_interface_slave_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->interface_name = a->interface_name (no-op) */
    /* a->is_passive = a->is_passive (no-op) */
    /* a->is_long_timeout = a->is_long_timeout (no-op) */
    /* a->is_local_numa = a->is_local_numa (no-op) */
    a->weight = clib_net_to_host_u32(a->weight);
}

static inline void vl_api_sw_interface_set_bond_weight_t_endian (vl_api_sw_interface_set_bond_weight_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->weight = clib_net_to_host_u32(a->weight);
}

static inline void vl_api_sw_interface_set_bond_weight_reply_t_endian (vl_api_sw_interface_set_bond_weight_reply_t *a)
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

vl_api_version_tuple(bond.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(bond.api, 0xce1d14a0)

#endif

