/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: qos.api
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
#warning no content included from qos.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_QOS_STORE_ENABLE_DISABLE, vl_api_qos_store_enable_disable_t_handler)
vl_msg_id(VL_API_QOS_STORE_ENABLE_DISABLE_REPLY, vl_api_qos_store_enable_disable_reply_t_handler)
vl_msg_id(VL_API_QOS_STORE_DUMP, vl_api_qos_store_dump_t_handler)
vl_msg_id(VL_API_QOS_STORE_DETAILS, vl_api_qos_store_details_t_handler)
vl_msg_id(VL_API_QOS_RECORD_ENABLE_DISABLE, vl_api_qos_record_enable_disable_t_handler)
vl_msg_id(VL_API_QOS_RECORD_ENABLE_DISABLE_REPLY, vl_api_qos_record_enable_disable_reply_t_handler)
vl_msg_id(VL_API_QOS_RECORD_DUMP, vl_api_qos_record_dump_t_handler)
vl_msg_id(VL_API_QOS_RECORD_DETAILS, vl_api_qos_record_details_t_handler)
vl_msg_id(VL_API_QOS_EGRESS_MAP_UPDATE, vl_api_qos_egress_map_update_t_handler)
vl_msg_id(VL_API_QOS_EGRESS_MAP_UPDATE_REPLY, vl_api_qos_egress_map_update_reply_t_handler)
vl_msg_id(VL_API_QOS_EGRESS_MAP_DELETE, vl_api_qos_egress_map_delete_t_handler)
vl_msg_id(VL_API_QOS_EGRESS_MAP_DELETE_REPLY, vl_api_qos_egress_map_delete_reply_t_handler)
vl_msg_id(VL_API_QOS_EGRESS_MAP_DUMP, vl_api_qos_egress_map_dump_t_handler)
vl_msg_id(VL_API_QOS_EGRESS_MAP_DETAILS, vl_api_qos_egress_map_details_t_handler)
vl_msg_id(VL_API_QOS_MARK_ENABLE_DISABLE, vl_api_qos_mark_enable_disable_t_handler)
vl_msg_id(VL_API_QOS_MARK_ENABLE_DISABLE_REPLY, vl_api_qos_mark_enable_disable_reply_t_handler)
vl_msg_id(VL_API_QOS_MARK_DUMP, vl_api_qos_mark_dump_t_handler)
vl_msg_id(VL_API_QOS_MARK_DETAILS, vl_api_qos_mark_details_t_handler)
vl_msg_id(VL_API_QOS_MARK_DETAILS_REPLY, vl_api_qos_mark_details_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_qos_store_enable_disable_t, 1)
vl_msg_name(vl_api_qos_store_enable_disable_reply_t, 1)
vl_msg_name(vl_api_qos_store_dump_t, 1)
vl_msg_name(vl_api_qos_store_details_t, 1)
vl_msg_name(vl_api_qos_record_enable_disable_t, 1)
vl_msg_name(vl_api_qos_record_enable_disable_reply_t, 1)
vl_msg_name(vl_api_qos_record_dump_t, 1)
vl_msg_name(vl_api_qos_record_details_t, 1)
vl_msg_name(vl_api_qos_egress_map_update_t, 1)
vl_msg_name(vl_api_qos_egress_map_update_reply_t, 1)
vl_msg_name(vl_api_qos_egress_map_delete_t, 1)
vl_msg_name(vl_api_qos_egress_map_delete_reply_t, 1)
vl_msg_name(vl_api_qos_egress_map_dump_t, 1)
vl_msg_name(vl_api_qos_egress_map_details_t, 1)
vl_msg_name(vl_api_qos_mark_enable_disable_t, 1)
vl_msg_name(vl_api_qos_mark_enable_disable_reply_t, 1)
vl_msg_name(vl_api_qos_mark_dump_t, 1)
vl_msg_name(vl_api_qos_mark_details_t, 1)
vl_msg_name(vl_api_qos_mark_details_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_qos \
_(VL_API_QOS_STORE_ENABLE_DISABLE, qos_store_enable_disable, 3507235e) \
_(VL_API_QOS_STORE_ENABLE_DISABLE_REPLY, qos_store_enable_disable_reply, e8d4e804) \
_(VL_API_QOS_STORE_DUMP, qos_store_dump, 51077d14) \
_(VL_API_QOS_STORE_DETAILS, qos_store_details, 038a6d48) \
_(VL_API_QOS_RECORD_ENABLE_DISABLE, qos_record_enable_disable, 25b33f88) \
_(VL_API_QOS_RECORD_ENABLE_DISABLE_REPLY, qos_record_enable_disable_reply, e8d4e804) \
_(VL_API_QOS_RECORD_DUMP, qos_record_dump, 51077d14) \
_(VL_API_QOS_RECORD_DETAILS, qos_record_details, 4956ccdd) \
_(VL_API_QOS_EGRESS_MAP_UPDATE, qos_egress_map_update, 6d1c065f) \
_(VL_API_QOS_EGRESS_MAP_UPDATE_REPLY, qos_egress_map_update_reply, e8d4e804) \
_(VL_API_QOS_EGRESS_MAP_DELETE, qos_egress_map_delete, 3a91bde5) \
_(VL_API_QOS_EGRESS_MAP_DELETE_REPLY, qos_egress_map_delete_reply, e8d4e804) \
_(VL_API_QOS_EGRESS_MAP_DUMP, qos_egress_map_dump, 51077d14) \
_(VL_API_QOS_EGRESS_MAP_DETAILS, qos_egress_map_details, 46c5653c) \
_(VL_API_QOS_MARK_ENABLE_DISABLE, qos_mark_enable_disable, 1a010f74) \
_(VL_API_QOS_MARK_ENABLE_DISABLE_REPLY, qos_mark_enable_disable_reply, e8d4e804) \
_(VL_API_QOS_MARK_DUMP, qos_mark_dump, f9e6675e) \
_(VL_API_QOS_MARK_DETAILS, qos_mark_details, 89fe81a9) \
_(VL_API_QOS_MARK_DETAILS_REPLY, qos_mark_details_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "qos.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_qos_printfun_types
#define included_qos_printfun_types

static inline u8 *format_vl_api_qos_source_t (u8 *s, va_list * args)
{
    vl_api_qos_source_t *a = va_arg (*args, vl_api_qos_source_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "QOS_API_SOURCE_EXT");
    case 1:
        return format(s, "QOS_API_SOURCE_VLAN");
    case 2:
        return format(s, "QOS_API_SOURCE_MPLS");
    case 3:
        return format(s, "QOS_API_SOURCE_IP");
    }
    return s;
}

static inline u8 *format_vl_api_qos_store_t (u8 *s, va_list * args)
{
    vl_api_qos_store_t *a = va_arg (*args, vl_api_qos_store_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uinput_source: %U", format_white_space, indent, format_vl_api_qos_source_t, &a->input_source, indent);
    s = format(s, "\n%Uvalue: %u", format_white_space, indent, a->value);
    return s;
}

static inline u8 *format_vl_api_qos_record_t (u8 *s, va_list * args)
{
    vl_api_qos_record_t *a = va_arg (*args, vl_api_qos_record_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uinput_source: %U", format_white_space, indent, format_vl_api_qos_source_t, &a->input_source, indent);
    return s;
}

static inline u8 *format_vl_api_qos_egress_map_row_t (u8 *s, va_list * args)
{
    vl_api_qos_egress_map_row_t *a = va_arg (*args, vl_api_qos_egress_map_row_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uoutputs: %U", format_white_space, indent, format_hex_bytes, a, 256);
    return s;
}

static inline u8 *format_vl_api_qos_egress_map_t (u8 *s, va_list * args)
{
    vl_api_qos_egress_map_t *a = va_arg (*args, vl_api_qos_egress_map_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    for (i = 0; i < 4; i++) {
        s = format(s, "\n%Urows: %U",
                   format_white_space, indent, format_vl_api_qos_egress_map_row_t, &a->rows[i], indent);
    }
    return s;
}

static inline u8 *format_vl_api_qos_mark_t (u8 *s, va_list * args)
{
    vl_api_qos_mark_t *a = va_arg (*args, vl_api_qos_mark_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %u", format_white_space, indent, a->sw_if_index);
    s = format(s, "\n%Umap_id: %u", format_white_space, indent, a->map_id);
    s = format(s, "\n%Uoutput_source: %U", format_white_space, indent, format_vl_api_qos_source_t, &a->output_source, indent);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_qos_printfun
#define included_qos_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_qos_store_enable_disable_t_print (vl_api_qos_store_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_store_enable_disable_t: */
    s = format(s, "vl_api_qos_store_enable_disable_t:");
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    s = format(s, "\n%Ustore: %U", format_white_space, indent, format_vl_api_qos_store_t, &a->store, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_store_enable_disable_reply_t_print (vl_api_qos_store_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_store_enable_disable_reply_t: */
    s = format(s, "vl_api_qos_store_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_store_dump_t_print (vl_api_qos_store_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_store_dump_t: */
    s = format(s, "vl_api_qos_store_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_store_details_t_print (vl_api_qos_store_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_store_details_t: */
    s = format(s, "vl_api_qos_store_details_t:");
    s = format(s, "\n%Ustore: %U", format_white_space, indent, format_vl_api_qos_store_t, &a->store, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_record_enable_disable_t_print (vl_api_qos_record_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_record_enable_disable_t: */
    s = format(s, "vl_api_qos_record_enable_disable_t:");
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    s = format(s, "\n%Urecord: %U", format_white_space, indent, format_vl_api_qos_record_t, &a->record, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_record_enable_disable_reply_t_print (vl_api_qos_record_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_record_enable_disable_reply_t: */
    s = format(s, "vl_api_qos_record_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_record_dump_t_print (vl_api_qos_record_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_record_dump_t: */
    s = format(s, "vl_api_qos_record_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_record_details_t_print (vl_api_qos_record_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_record_details_t: */
    s = format(s, "vl_api_qos_record_details_t:");
    s = format(s, "\n%Urecord: %U", format_white_space, indent, format_vl_api_qos_record_t, &a->record, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_egress_map_update_t_print (vl_api_qos_egress_map_update_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_egress_map_update_t: */
    s = format(s, "vl_api_qos_egress_map_update_t:");
    s = format(s, "\n%Umap: %U", format_white_space, indent, format_vl_api_qos_egress_map_t, &a->map, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_egress_map_update_reply_t_print (vl_api_qos_egress_map_update_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_egress_map_update_reply_t: */
    s = format(s, "vl_api_qos_egress_map_update_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_egress_map_delete_t_print (vl_api_qos_egress_map_delete_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_egress_map_delete_t: */
    s = format(s, "vl_api_qos_egress_map_delete_t:");
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_egress_map_delete_reply_t_print (vl_api_qos_egress_map_delete_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_egress_map_delete_reply_t: */
    s = format(s, "vl_api_qos_egress_map_delete_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_egress_map_dump_t_print (vl_api_qos_egress_map_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_egress_map_dump_t: */
    s = format(s, "vl_api_qos_egress_map_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_egress_map_details_t_print (vl_api_qos_egress_map_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_egress_map_details_t: */
    s = format(s, "vl_api_qos_egress_map_details_t:");
    s = format(s, "\n%Umap: %U", format_white_space, indent, format_vl_api_qos_egress_map_t, &a->map, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_mark_enable_disable_t_print (vl_api_qos_mark_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_mark_enable_disable_t: */
    s = format(s, "vl_api_qos_mark_enable_disable_t:");
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    s = format(s, "\n%Umark: %U", format_white_space, indent, format_vl_api_qos_mark_t, &a->mark, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_mark_enable_disable_reply_t_print (vl_api_qos_mark_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_mark_enable_disable_reply_t: */
    s = format(s, "vl_api_qos_mark_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_mark_dump_t_print (vl_api_qos_mark_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_mark_dump_t: */
    s = format(s, "vl_api_qos_mark_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_mark_details_t_print (vl_api_qos_mark_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_mark_details_t: */
    s = format(s, "vl_api_qos_mark_details_t:");
    s = format(s, "\n%Umark: %U", format_white_space, indent, format_vl_api_qos_mark_t, &a->mark, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_qos_mark_details_reply_t_print (vl_api_qos_mark_details_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_qos_mark_details_reply_t: */
    s = format(s, "vl_api_qos_mark_details_reply_t:");
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
#ifndef included_qos_endianfun
#define included_qos_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_qos_source_t_endian (vl_api_qos_source_t *a)
{
    int i __attribute__((unused));
    /* a->qos_source = a->qos_source (no-op) */
}

static inline void vl_api_qos_store_t_endian (vl_api_qos_store_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_qos_source_t_endian(&a->input_source);
    /* a->value = a->value (no-op) */
}

static inline void vl_api_qos_record_t_endian (vl_api_qos_record_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_qos_source_t_endian(&a->input_source);
}

static inline void vl_api_qos_egress_map_row_t_endian (vl_api_qos_egress_map_row_t *a)
{
    int i __attribute__((unused));
    /* a->outputs = a->outputs (no-op) */
}

static inline void vl_api_qos_egress_map_t_endian (vl_api_qos_egress_map_t *a)
{
    int i __attribute__((unused));
    a->id = clib_net_to_host_u32(a->id);
    for (i = 0; i < 4; i++) {
        vl_api_qos_egress_map_row_t_endian(&a->rows[i]);
    }
}

static inline void vl_api_qos_mark_t_endian (vl_api_qos_mark_t *a)
{
    int i __attribute__((unused));
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->map_id = clib_net_to_host_u32(a->map_id);
    vl_api_qos_source_t_endian(&a->output_source);
}

static inline void vl_api_qos_store_enable_disable_t_endian (vl_api_qos_store_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
    vl_api_qos_store_t_endian(&a->store);
}

static inline void vl_api_qos_store_enable_disable_reply_t_endian (vl_api_qos_store_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_qos_store_dump_t_endian (vl_api_qos_store_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_qos_store_details_t_endian (vl_api_qos_store_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_qos_store_t_endian(&a->store);
}

static inline void vl_api_qos_record_enable_disable_t_endian (vl_api_qos_record_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
    vl_api_qos_record_t_endian(&a->record);
}

static inline void vl_api_qos_record_enable_disable_reply_t_endian (vl_api_qos_record_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_qos_record_dump_t_endian (vl_api_qos_record_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_qos_record_details_t_endian (vl_api_qos_record_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_qos_record_t_endian(&a->record);
}

static inline void vl_api_qos_egress_map_update_t_endian (vl_api_qos_egress_map_update_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_qos_egress_map_t_endian(&a->map);
}

static inline void vl_api_qos_egress_map_update_reply_t_endian (vl_api_qos_egress_map_update_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_qos_egress_map_delete_t_endian (vl_api_qos_egress_map_delete_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u32(a->id);
}

static inline void vl_api_qos_egress_map_delete_reply_t_endian (vl_api_qos_egress_map_delete_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_qos_egress_map_dump_t_endian (vl_api_qos_egress_map_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_qos_egress_map_details_t_endian (vl_api_qos_egress_map_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_qos_egress_map_t_endian(&a->map);
}

static inline void vl_api_qos_mark_enable_disable_t_endian (vl_api_qos_mark_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
    vl_api_qos_mark_t_endian(&a->mark);
}

static inline void vl_api_qos_mark_enable_disable_reply_t_endian (vl_api_qos_mark_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_qos_mark_dump_t_endian (vl_api_qos_mark_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_qos_mark_details_t_endian (vl_api_qos_mark_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_qos_mark_t_endian(&a->mark);
}

static inline void vl_api_qos_mark_details_reply_t_endian (vl_api_qos_mark_details_reply_t *a)
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

vl_api_version_tuple(qos.api, 1, 1, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(qos.api, 0xad857fa4)

#endif

