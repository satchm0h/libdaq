/*
 * VLIB API definitions 2020-07-24 16:29:02
 * Input file: mactime.api
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
#warning no content included from mactime.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ethernet/ethernet_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_MACTIME_ENABLE_DISABLE, vl_api_mactime_enable_disable_t_handler)
vl_msg_id(VL_API_MACTIME_ENABLE_DISABLE_REPLY, vl_api_mactime_enable_disable_reply_t_handler)
vl_msg_id(VL_API_MACTIME_ADD_DEL_RANGE, vl_api_mactime_add_del_range_t_handler)
vl_msg_id(VL_API_MACTIME_ADD_DEL_RANGE_REPLY, vl_api_mactime_add_del_range_reply_t_handler)
vl_msg_id(VL_API_MACTIME_DUMP, vl_api_mactime_dump_t_handler)
vl_msg_id(VL_API_MACTIME_DETAILS, vl_api_mactime_details_t_handler)
vl_msg_id(VL_API_MACTIME_DUMP_REPLY, vl_api_mactime_dump_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_mactime_enable_disable_t, 1)
vl_msg_name(vl_api_mactime_enable_disable_reply_t, 1)
vl_msg_name(vl_api_mactime_add_del_range_t, 1)
vl_msg_name(vl_api_mactime_add_del_range_reply_t, 1)
vl_msg_name(vl_api_mactime_dump_t, 1)
vl_msg_name(vl_api_mactime_details_t, 1)
vl_msg_name(vl_api_mactime_dump_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_mactime \
_(VL_API_MACTIME_ENABLE_DISABLE, mactime_enable_disable, 3865946c) \
_(VL_API_MACTIME_ENABLE_DISABLE_REPLY, mactime_enable_disable_reply, e8d4e804) \
_(VL_API_MACTIME_ADD_DEL_RANGE, mactime_add_del_range, 101858ef) \
_(VL_API_MACTIME_ADD_DEL_RANGE_REPLY, mactime_add_del_range_reply, e8d4e804) \
_(VL_API_MACTIME_DUMP, mactime_dump, 8f454e23) \
_(VL_API_MACTIME_DETAILS, mactime_details, 44921c06) \
_(VL_API_MACTIME_DUMP_REPLY, mactime_dump_reply, 49bcc753) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "mactime.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_mactime_printfun_types
#define included_mactime_printfun_types

static inline u8 *format_vl_api_time_range_t (u8 *s, va_list * args)
{
    vl_api_time_range_t *a = va_arg (*args, vl_api_time_range_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ustart: %.2f", format_white_space, indent, a->start);
    s = format(s, "\n%Uend: %.2f", format_white_space, indent, a->end);
    return s;
}

static inline u8 *format_vl_api_mactime_time_range_t (u8 *s, va_list * args)
{
    vl_api_mactime_time_range_t *a = va_arg (*args, vl_api_mactime_time_range_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ustart: %.2f", format_white_space, indent, a->start);
    s = format(s, "\n%Uend: %.2f", format_white_space, indent, a->end);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_mactime_printfun
#define included_mactime_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_mactime_enable_disable_t_print (vl_api_mactime_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_mactime_enable_disable_t: */
    s = format(s, "vl_api_mactime_enable_disable_t:");
    s = format(s, "\n%Uenable_disable: %u", format_white_space, indent, a->enable_disable);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_mactime_enable_disable_reply_t_print (vl_api_mactime_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_mactime_enable_disable_reply_t: */
    s = format(s, "vl_api_mactime_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_mactime_add_del_range_t_print (vl_api_mactime_add_del_range_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_mactime_add_del_range_t: */
    s = format(s, "vl_api_mactime_add_del_range_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Udrop: %u", format_white_space, indent, a->drop);
    s = format(s, "\n%Uallow: %u", format_white_space, indent, a->allow);
    s = format(s, "\n%Uallow_quota: %u", format_white_space, indent, a->allow_quota);
    s = format(s, "\n%Uno_udp_10001: %u", format_white_space, indent, a->no_udp_10001);
    s = format(s, "\n%Udata_quota: %llu", format_white_space, indent, a->data_quota);
    s = format(s, "\n%Umac_address: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac_address, indent);
    s = format(s, "\n%Udevice_name: %s", format_white_space, indent, a->device_name);
    s = format(s, "\n%Ucount: %u", format_white_space, indent, a->count);
    for (i = 0; i < a->count; i++) {
        s = format(s, "\n%Uranges: %U",
                   format_white_space, indent, format_vl_api_time_range_t, &a->ranges[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_mactime_add_del_range_reply_t_print (vl_api_mactime_add_del_range_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_mactime_add_del_range_reply_t: */
    s = format(s, "vl_api_mactime_add_del_range_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_mactime_dump_t_print (vl_api_mactime_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_mactime_dump_t: */
    s = format(s, "vl_api_mactime_dump_t:");
    s = format(s, "\n%Umy_table_epoch: %u", format_white_space, indent, a->my_table_epoch);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_mactime_details_t_print (vl_api_mactime_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_mactime_details_t: */
    s = format(s, "vl_api_mactime_details_t:");
    s = format(s, "\n%Upool_index: %u", format_white_space, indent, a->pool_index);
    s = format(s, "\n%Umac_address: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac_address, indent);
    s = format(s, "\n%Udata_quota: %llu", format_white_space, indent, a->data_quota);
    s = format(s, "\n%Udata_used_in_range: %llu", format_white_space, indent, a->data_used_in_range);
    s = format(s, "\n%Uflags: %u", format_white_space, indent, a->flags);
    s = format(s, "\n%Udevice_name: %s", format_white_space, indent, a->device_name);
    s = format(s, "\n%Unranges: %u", format_white_space, indent, a->nranges);
    for (i = 0; i < a->nranges; i++) {
        s = format(s, "\n%Uranges: %U",
                   format_white_space, indent, format_vl_api_mactime_time_range_t, &a->ranges[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_mactime_dump_reply_t_print (vl_api_mactime_dump_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_mactime_dump_reply_t: */
    s = format(s, "vl_api_mactime_dump_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Utable_epoch: %u", format_white_space, indent, a->table_epoch);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_mactime_endianfun
#define included_mactime_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_time_range_t_endian (vl_api_time_range_t *a)
{
    int i __attribute__((unused));
    a->start = clib_net_to_host_f64(a->start);
    a->end = clib_net_to_host_f64(a->end);
}

static inline void vl_api_mactime_time_range_t_endian (vl_api_mactime_time_range_t *a)
{
    int i __attribute__((unused));
    a->start = clib_net_to_host_f64(a->start);
    a->end = clib_net_to_host_f64(a->end);
}

static inline void vl_api_mactime_enable_disable_t_endian (vl_api_mactime_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_mactime_enable_disable_reply_t_endian (vl_api_mactime_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_mactime_add_del_range_t_endian (vl_api_mactime_add_del_range_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->drop = a->drop (no-op) */
    /* a->allow = a->allow (no-op) */
    /* a->allow_quota = a->allow_quota (no-op) */
    /* a->no_udp_10001 = a->no_udp_10001 (no-op) */
    a->data_quota = clib_net_to_host_u64(a->data_quota);
    vl_api_mac_address_t_endian(&a->mac_address);
    /* a->device_name = a->device_name (no-op) */
    a->count = clib_net_to_host_u32(a->count);
    for (i = 0; i < a->count; i++) {
        vl_api_time_range_t_endian(&a->ranges[i]);
    }
}

static inline void vl_api_mactime_add_del_range_reply_t_endian (vl_api_mactime_add_del_range_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_mactime_dump_t_endian (vl_api_mactime_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->my_table_epoch = clib_net_to_host_u32(a->my_table_epoch);
}

static inline void vl_api_mactime_details_t_endian (vl_api_mactime_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->pool_index = clib_net_to_host_u32(a->pool_index);
    vl_api_mac_address_t_endian(&a->mac_address);
    a->data_quota = clib_net_to_host_u64(a->data_quota);
    a->data_used_in_range = clib_net_to_host_u64(a->data_used_in_range);
    a->flags = clib_net_to_host_u32(a->flags);
    /* a->device_name = a->device_name (no-op) */
    a->nranges = clib_net_to_host_u32(a->nranges);
    for (i = 0; i < a->nranges; i++) {
        vl_api_mactime_time_range_t_endian(&a->ranges[i]);
    }
}

static inline void vl_api_mactime_dump_reply_t_endian (vl_api_mactime_dump_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->table_epoch = clib_net_to_host_u32(a->table_epoch);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(mactime.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(mactime.api, 0xf50faf9b)

#endif

