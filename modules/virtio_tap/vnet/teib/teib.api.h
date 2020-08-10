/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: teib.api
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
#warning no content included from teib.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_TEIB_ENTRY_ADD_DEL, vl_api_teib_entry_add_del_t_handler)
vl_msg_id(VL_API_TEIB_ENTRY_ADD_DEL_REPLY, vl_api_teib_entry_add_del_reply_t_handler)
vl_msg_id(VL_API_TEIB_DUMP, vl_api_teib_dump_t_handler)
vl_msg_id(VL_API_TEIB_DETAILS, vl_api_teib_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_teib_entry_add_del_t, 1)
vl_msg_name(vl_api_teib_entry_add_del_reply_t, 1)
vl_msg_name(vl_api_teib_dump_t, 1)
vl_msg_name(vl_api_teib_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_teib \
_(VL_API_TEIB_ENTRY_ADD_DEL, teib_entry_add_del, 5aa0a538) \
_(VL_API_TEIB_ENTRY_ADD_DEL_REPLY, teib_entry_add_del_reply, e8d4e804) \
_(VL_API_TEIB_DUMP, teib_dump, 51077d14) \
_(VL_API_TEIB_DETAILS, teib_details, e3b6a503) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "teib.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_teib_printfun_types
#define included_teib_printfun_types

static inline u8 *format_vl_api_teib_entry_t (u8 *s, va_list * args)
{
    vl_api_teib_entry_t *a = va_arg (*args, vl_api_teib_entry_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Upeer: %U", format_white_space, indent, format_vl_api_address_t, &a->peer, indent);
    s = format(s, "\n%Unh: %U", format_white_space, indent, format_vl_api_address_t, &a->nh, indent);
    s = format(s, "\n%Unh_table_id: %u", format_white_space, indent, a->nh_table_id);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_teib_printfun
#define included_teib_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_teib_entry_add_del_t_print (vl_api_teib_entry_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_teib_entry_add_del_t: */
    s = format(s, "vl_api_teib_entry_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uentry: %U", format_white_space, indent, format_vl_api_teib_entry_t, &a->entry, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_teib_entry_add_del_reply_t_print (vl_api_teib_entry_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_teib_entry_add_del_reply_t: */
    s = format(s, "vl_api_teib_entry_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_teib_dump_t_print (vl_api_teib_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_teib_dump_t: */
    s = format(s, "vl_api_teib_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_teib_details_t_print (vl_api_teib_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_teib_details_t: */
    s = format(s, "vl_api_teib_details_t:");
    s = format(s, "\n%Uentry: %U", format_white_space, indent, format_vl_api_teib_entry_t, &a->entry, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_teib_endianfun
#define included_teib_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_teib_entry_t_endian (vl_api_teib_entry_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_address_t_endian(&a->peer);
    vl_api_address_t_endian(&a->nh);
    a->nh_table_id = clib_net_to_host_u32(a->nh_table_id);
}

static inline void vl_api_teib_entry_add_del_t_endian (vl_api_teib_entry_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_teib_entry_t_endian(&a->entry);
}

static inline void vl_api_teib_entry_add_del_reply_t_endian (vl_api_teib_entry_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_teib_dump_t_endian (vl_api_teib_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_teib_details_t_endian (vl_api_teib_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_teib_entry_t_endian(&a->entry);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(teib.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(teib.api, 0x1c9f7540)

#endif

