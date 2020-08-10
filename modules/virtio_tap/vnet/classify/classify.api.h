/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: classify.api
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
#warning no content included from classify.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_CLASSIFY_ADD_DEL_TABLE, vl_api_classify_add_del_table_t_handler)
vl_msg_id(VL_API_CLASSIFY_ADD_DEL_TABLE_REPLY, vl_api_classify_add_del_table_reply_t_handler)
vl_msg_id(VL_API_CLASSIFY_ADD_DEL_SESSION, vl_api_classify_add_del_session_t_handler)
vl_msg_id(VL_API_CLASSIFY_ADD_DEL_SESSION_REPLY, vl_api_classify_add_del_session_reply_t_handler)
vl_msg_id(VL_API_POLICER_CLASSIFY_SET_INTERFACE, vl_api_policer_classify_set_interface_t_handler)
vl_msg_id(VL_API_POLICER_CLASSIFY_SET_INTERFACE_REPLY, vl_api_policer_classify_set_interface_reply_t_handler)
vl_msg_id(VL_API_POLICER_CLASSIFY_DUMP, vl_api_policer_classify_dump_t_handler)
vl_msg_id(VL_API_POLICER_CLASSIFY_DETAILS, vl_api_policer_classify_details_t_handler)
vl_msg_id(VL_API_CLASSIFY_TABLE_IDS, vl_api_classify_table_ids_t_handler)
vl_msg_id(VL_API_CLASSIFY_TABLE_IDS_REPLY, vl_api_classify_table_ids_reply_t_handler)
vl_msg_id(VL_API_CLASSIFY_TABLE_BY_INTERFACE, vl_api_classify_table_by_interface_t_handler)
vl_msg_id(VL_API_CLASSIFY_TABLE_BY_INTERFACE_REPLY, vl_api_classify_table_by_interface_reply_t_handler)
vl_msg_id(VL_API_CLASSIFY_TABLE_INFO, vl_api_classify_table_info_t_handler)
vl_msg_id(VL_API_CLASSIFY_TABLE_INFO_REPLY, vl_api_classify_table_info_reply_t_handler)
vl_msg_id(VL_API_CLASSIFY_SESSION_DUMP, vl_api_classify_session_dump_t_handler)
vl_msg_id(VL_API_CLASSIFY_SESSION_DETAILS, vl_api_classify_session_details_t_handler)
vl_msg_id(VL_API_FLOW_CLASSIFY_SET_INTERFACE, vl_api_flow_classify_set_interface_t_handler)
vl_msg_id(VL_API_FLOW_CLASSIFY_SET_INTERFACE_REPLY, vl_api_flow_classify_set_interface_reply_t_handler)
vl_msg_id(VL_API_FLOW_CLASSIFY_DUMP, vl_api_flow_classify_dump_t_handler)
vl_msg_id(VL_API_FLOW_CLASSIFY_DETAILS, vl_api_flow_classify_details_t_handler)
vl_msg_id(VL_API_CLASSIFY_SET_INTERFACE_IP_TABLE, vl_api_classify_set_interface_ip_table_t_handler)
vl_msg_id(VL_API_CLASSIFY_SET_INTERFACE_IP_TABLE_REPLY, vl_api_classify_set_interface_ip_table_reply_t_handler)
vl_msg_id(VL_API_CLASSIFY_SET_INTERFACE_L2_TABLES, vl_api_classify_set_interface_l2_tables_t_handler)
vl_msg_id(VL_API_CLASSIFY_SET_INTERFACE_L2_TABLES_REPLY, vl_api_classify_set_interface_l2_tables_reply_t_handler)
vl_msg_id(VL_API_INPUT_ACL_SET_INTERFACE, vl_api_input_acl_set_interface_t_handler)
vl_msg_id(VL_API_INPUT_ACL_SET_INTERFACE_REPLY, vl_api_input_acl_set_interface_reply_t_handler)
vl_msg_id(VL_API_OUTPUT_ACL_SET_INTERFACE, vl_api_output_acl_set_interface_t_handler)
vl_msg_id(VL_API_OUTPUT_ACL_SET_INTERFACE_REPLY, vl_api_output_acl_set_interface_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_classify_add_del_table_t, 1)
vl_msg_name(vl_api_classify_add_del_table_reply_t, 1)
vl_msg_name(vl_api_classify_add_del_session_t, 1)
vl_msg_name(vl_api_classify_add_del_session_reply_t, 1)
vl_msg_name(vl_api_policer_classify_set_interface_t, 1)
vl_msg_name(vl_api_policer_classify_set_interface_reply_t, 1)
vl_msg_name(vl_api_policer_classify_dump_t, 1)
vl_msg_name(vl_api_policer_classify_details_t, 1)
vl_msg_name(vl_api_classify_table_ids_t, 1)
vl_msg_name(vl_api_classify_table_ids_reply_t, 1)
vl_msg_name(vl_api_classify_table_by_interface_t, 1)
vl_msg_name(vl_api_classify_table_by_interface_reply_t, 1)
vl_msg_name(vl_api_classify_table_info_t, 1)
vl_msg_name(vl_api_classify_table_info_reply_t, 1)
vl_msg_name(vl_api_classify_session_dump_t, 1)
vl_msg_name(vl_api_classify_session_details_t, 1)
vl_msg_name(vl_api_flow_classify_set_interface_t, 1)
vl_msg_name(vl_api_flow_classify_set_interface_reply_t, 1)
vl_msg_name(vl_api_flow_classify_dump_t, 1)
vl_msg_name(vl_api_flow_classify_details_t, 1)
vl_msg_name(vl_api_classify_set_interface_ip_table_t, 1)
vl_msg_name(vl_api_classify_set_interface_ip_table_reply_t, 1)
vl_msg_name(vl_api_classify_set_interface_l2_tables_t, 1)
vl_msg_name(vl_api_classify_set_interface_l2_tables_reply_t, 1)
vl_msg_name(vl_api_input_acl_set_interface_t, 1)
vl_msg_name(vl_api_input_acl_set_interface_reply_t, 1)
vl_msg_name(vl_api_output_acl_set_interface_t, 1)
vl_msg_name(vl_api_output_acl_set_interface_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_classify \
_(VL_API_CLASSIFY_ADD_DEL_TABLE, classify_add_del_table, 6849e39e) \
_(VL_API_CLASSIFY_ADD_DEL_TABLE_REPLY, classify_add_del_table_reply, 05486349) \
_(VL_API_CLASSIFY_ADD_DEL_SESSION, classify_add_del_session, f20879f0) \
_(VL_API_CLASSIFY_ADD_DEL_SESSION_REPLY, classify_add_del_session_reply, e8d4e804) \
_(VL_API_POLICER_CLASSIFY_SET_INTERFACE, policer_classify_set_interface, de7ad708) \
_(VL_API_POLICER_CLASSIFY_SET_INTERFACE_REPLY, policer_classify_set_interface_reply, e8d4e804) \
_(VL_API_POLICER_CLASSIFY_DUMP, policer_classify_dump, 6bfe6603) \
_(VL_API_POLICER_CLASSIFY_DETAILS, policer_classify_details, dfd08765) \
_(VL_API_CLASSIFY_TABLE_IDS, classify_table_ids, 51077d14) \
_(VL_API_CLASSIFY_TABLE_IDS_REPLY, classify_table_ids_reply, d1d20e1d) \
_(VL_API_CLASSIFY_TABLE_BY_INTERFACE, classify_table_by_interface, f9e6675e) \
_(VL_API_CLASSIFY_TABLE_BY_INTERFACE_REPLY, classify_table_by_interface_reply, ed4197db) \
_(VL_API_CLASSIFY_TABLE_INFO, classify_table_info, 0cca2cd9) \
_(VL_API_CLASSIFY_TABLE_INFO_REPLY, classify_table_info_reply, 4a573c0e) \
_(VL_API_CLASSIFY_SESSION_DUMP, classify_session_dump, 0cca2cd9) \
_(VL_API_CLASSIFY_SESSION_DETAILS, classify_session_details, 60e3ef94) \
_(VL_API_FLOW_CLASSIFY_SET_INTERFACE, flow_classify_set_interface, b6192f1c) \
_(VL_API_FLOW_CLASSIFY_SET_INTERFACE_REPLY, flow_classify_set_interface_reply, e8d4e804) \
_(VL_API_FLOW_CLASSIFY_DUMP, flow_classify_dump, 8a6ad43d) \
_(VL_API_FLOW_CLASSIFY_DETAILS, flow_classify_details, dfd08765) \
_(VL_API_CLASSIFY_SET_INTERFACE_IP_TABLE, classify_set_interface_ip_table, e0b097c7) \
_(VL_API_CLASSIFY_SET_INTERFACE_IP_TABLE_REPLY, classify_set_interface_ip_table_reply, e8d4e804) \
_(VL_API_CLASSIFY_SET_INTERFACE_L2_TABLES, classify_set_interface_l2_tables, 5a6ddf65) \
_(VL_API_CLASSIFY_SET_INTERFACE_L2_TABLES_REPLY, classify_set_interface_l2_tables_reply, e8d4e804) \
_(VL_API_INPUT_ACL_SET_INTERFACE, input_acl_set_interface, de7ad708) \
_(VL_API_INPUT_ACL_SET_INTERFACE_REPLY, input_acl_set_interface_reply, e8d4e804) \
_(VL_API_OUTPUT_ACL_SET_INTERFACE, output_acl_set_interface, de7ad708) \
_(VL_API_OUTPUT_ACL_SET_INTERFACE_REPLY, output_acl_set_interface_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "classify.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_classify_printfun_types
#define included_classify_printfun_types

static inline u8 *format_vl_api_classify_action_t (u8 *s, va_list * args)
{
    vl_api_classify_action_t *a = va_arg (*args, vl_api_classify_action_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "CLASSIFY_API_ACTION_NONE");
    case 1:
        return format(s, "CLASSIFY_API_ACTION_SET_IP4_FIB_INDEX");
    case 2:
        return format(s, "CLASSIFY_API_ACTION_SET_IP6_FIB_INDEX");
    case 3:
        return format(s, "CLASSIFY_API_ACTION_SET_METADATA");
    }
    return s;
}

static inline u8 *format_vl_api_policer_classify_table_t (u8 *s, va_list * args)
{
    vl_api_policer_classify_table_t *a = va_arg (*args, vl_api_policer_classify_table_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "POLICER_CLASSIFY_API_TABLE_IP4");
    case 2:
        return format(s, "POLICER_CLASSIFY_API_TABLE_IP6");
    case 3:
        return format(s, "POLICER_CLASSIFY_API_TABLE_L2");
    }
    return s;
}

static inline u8 *format_vl_api_flow_classify_table_t (u8 *s, va_list * args)
{
    vl_api_flow_classify_table_t *a = va_arg (*args, vl_api_flow_classify_table_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "FLOW_CLASSIFY_API_TABLE_IP4");
    case 2:
        return format(s, "FLOW_CLASSIFY_API_TABLE_IP6");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_classify_printfun
#define included_classify_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_classify_add_del_table_t_print (vl_api_classify_add_del_table_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_add_del_table_t: */
    s = format(s, "vl_api_classify_add_del_table_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Udel_chain: %u", format_white_space, indent, a->del_chain);
    s = format(s, "\n%Utable_index: %u", format_white_space, indent, a->table_index);
    s = format(s, "\n%Unbuckets: %u", format_white_space, indent, a->nbuckets);
    s = format(s, "\n%Umemory_size: %u", format_white_space, indent, a->memory_size);
    s = format(s, "\n%Uskip_n_vectors: %u", format_white_space, indent, a->skip_n_vectors);
    s = format(s, "\n%Umatch_n_vectors: %u", format_white_space, indent, a->match_n_vectors);
    s = format(s, "\n%Unext_table_index: %u", format_white_space, indent, a->next_table_index);
    s = format(s, "\n%Umiss_next_index: %u", format_white_space, indent, a->miss_next_index);
    s = format(s, "\n%Ucurrent_data_flag: %u", format_white_space, indent, a->current_data_flag);
    s = format(s, "\n%Ucurrent_data_offset: %d", format_white_space, indent, a->current_data_offset);
    s = format(s, "\n%Umask_len: %u", format_white_space, indent, a->mask_len);
    s = format(s, "\n%Umask: %U", format_white_space, indent, format_hex_bytes, a->mask, a->mask_len);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_add_del_table_reply_t_print (vl_api_classify_add_del_table_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_add_del_table_reply_t: */
    s = format(s, "vl_api_classify_add_del_table_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Unew_table_index: %u", format_white_space, indent, a->new_table_index);
    s = format(s, "\n%Uskip_n_vectors: %u", format_white_space, indent, a->skip_n_vectors);
    s = format(s, "\n%Umatch_n_vectors: %u", format_white_space, indent, a->match_n_vectors);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_add_del_session_t_print (vl_api_classify_add_del_session_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_add_del_session_t: */
    s = format(s, "vl_api_classify_add_del_session_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Utable_index: %u", format_white_space, indent, a->table_index);
    s = format(s, "\n%Uhit_next_index: %u", format_white_space, indent, a->hit_next_index);
    s = format(s, "\n%Uopaque_index: %u", format_white_space, indent, a->opaque_index);
    s = format(s, "\n%Uadvance: %ld", format_white_space, indent, a->advance);
    s = format(s, "\n%Uaction: %U", format_white_space, indent, format_vl_api_classify_action_t, &a->action, indent);
    s = format(s, "\n%Umetadata: %u", format_white_space, indent, a->metadata);
    s = format(s, "\n%Umatch_len: %u", format_white_space, indent, a->match_len);
    s = format(s, "\n%Umatch: %U", format_white_space, indent, format_hex_bytes, a->match, a->match_len);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_add_del_session_reply_t_print (vl_api_classify_add_del_session_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_add_del_session_reply_t: */
    s = format(s, "vl_api_classify_add_del_session_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_policer_classify_set_interface_t_print (vl_api_policer_classify_set_interface_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_policer_classify_set_interface_t: */
    s = format(s, "vl_api_policer_classify_set_interface_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uip4_table_index: %u", format_white_space, indent, a->ip4_table_index);
    s = format(s, "\n%Uip6_table_index: %u", format_white_space, indent, a->ip6_table_index);
    s = format(s, "\n%Ul2_table_index: %u", format_white_space, indent, a->l2_table_index);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_policer_classify_set_interface_reply_t_print (vl_api_policer_classify_set_interface_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_policer_classify_set_interface_reply_t: */
    s = format(s, "vl_api_policer_classify_set_interface_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_policer_classify_dump_t_print (vl_api_policer_classify_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_policer_classify_dump_t: */
    s = format(s, "vl_api_policer_classify_dump_t:");
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_policer_classify_table_t, &a->type, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_policer_classify_details_t_print (vl_api_policer_classify_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_policer_classify_details_t: */
    s = format(s, "vl_api_policer_classify_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Utable_index: %u", format_white_space, indent, a->table_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_table_ids_t_print (vl_api_classify_table_ids_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_table_ids_t: */
    s = format(s, "vl_api_classify_table_ids_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_table_ids_reply_t_print (vl_api_classify_table_ids_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_table_ids_reply_t: */
    s = format(s, "vl_api_classify_table_ids_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ucount: %u", format_white_space, indent, a->count);
    for (i = 0; i < a->count; i++) {
        s = format(s, "\n%Uids: %u",
                   format_white_space, indent, a->ids[i]);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_table_by_interface_t_print (vl_api_classify_table_by_interface_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_table_by_interface_t: */
    s = format(s, "vl_api_classify_table_by_interface_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_table_by_interface_reply_t_print (vl_api_classify_table_by_interface_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_table_by_interface_reply_t: */
    s = format(s, "vl_api_classify_table_by_interface_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ul2_table_id: %u", format_white_space, indent, a->l2_table_id);
    s = format(s, "\n%Uip4_table_id: %u", format_white_space, indent, a->ip4_table_id);
    s = format(s, "\n%Uip6_table_id: %u", format_white_space, indent, a->ip6_table_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_table_info_t_print (vl_api_classify_table_info_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_table_info_t: */
    s = format(s, "vl_api_classify_table_info_t:");
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_table_info_reply_t_print (vl_api_classify_table_info_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_table_info_reply_t: */
    s = format(s, "vl_api_classify_table_info_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Unbuckets: %u", format_white_space, indent, a->nbuckets);
    s = format(s, "\n%Umatch_n_vectors: %u", format_white_space, indent, a->match_n_vectors);
    s = format(s, "\n%Uskip_n_vectors: %u", format_white_space, indent, a->skip_n_vectors);
    s = format(s, "\n%Uactive_sessions: %u", format_white_space, indent, a->active_sessions);
    s = format(s, "\n%Unext_table_index: %u", format_white_space, indent, a->next_table_index);
    s = format(s, "\n%Umiss_next_index: %u", format_white_space, indent, a->miss_next_index);
    s = format(s, "\n%Umask_length: %u", format_white_space, indent, a->mask_length);
    s = format(s, "\n%Umask: %U", format_white_space, indent, format_hex_bytes, a->mask, a->mask_length);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_session_dump_t_print (vl_api_classify_session_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_session_dump_t: */
    s = format(s, "vl_api_classify_session_dump_t:");
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_session_details_t_print (vl_api_classify_session_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_session_details_t: */
    s = format(s, "vl_api_classify_session_details_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Uhit_next_index: %u", format_white_space, indent, a->hit_next_index);
    s = format(s, "\n%Uadvance: %ld", format_white_space, indent, a->advance);
    s = format(s, "\n%Uopaque_index: %u", format_white_space, indent, a->opaque_index);
    s = format(s, "\n%Umatch_length: %u", format_white_space, indent, a->match_length);
    s = format(s, "\n%Umatch: %U", format_white_space, indent, format_hex_bytes, a->match, a->match_length);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_flow_classify_set_interface_t_print (vl_api_flow_classify_set_interface_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_flow_classify_set_interface_t: */
    s = format(s, "vl_api_flow_classify_set_interface_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uip4_table_index: %u", format_white_space, indent, a->ip4_table_index);
    s = format(s, "\n%Uip6_table_index: %u", format_white_space, indent, a->ip6_table_index);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_flow_classify_set_interface_reply_t_print (vl_api_flow_classify_set_interface_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_flow_classify_set_interface_reply_t: */
    s = format(s, "vl_api_flow_classify_set_interface_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_flow_classify_dump_t_print (vl_api_flow_classify_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_flow_classify_dump_t: */
    s = format(s, "vl_api_flow_classify_dump_t:");
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_flow_classify_table_t, &a->type, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_flow_classify_details_t_print (vl_api_flow_classify_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_flow_classify_details_t: */
    s = format(s, "vl_api_flow_classify_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Utable_index: %u", format_white_space, indent, a->table_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_set_interface_ip_table_t_print (vl_api_classify_set_interface_ip_table_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_set_interface_ip_table_t: */
    s = format(s, "vl_api_classify_set_interface_ip_table_t:");
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Utable_index: %u", format_white_space, indent, a->table_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_set_interface_ip_table_reply_t_print (vl_api_classify_set_interface_ip_table_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_set_interface_ip_table_reply_t: */
    s = format(s, "vl_api_classify_set_interface_ip_table_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_set_interface_l2_tables_t_print (vl_api_classify_set_interface_l2_tables_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_set_interface_l2_tables_t: */
    s = format(s, "vl_api_classify_set_interface_l2_tables_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uip4_table_index: %u", format_white_space, indent, a->ip4_table_index);
    s = format(s, "\n%Uip6_table_index: %u", format_white_space, indent, a->ip6_table_index);
    s = format(s, "\n%Uother_table_index: %u", format_white_space, indent, a->other_table_index);
    s = format(s, "\n%Uis_input: %u", format_white_space, indent, a->is_input);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_classify_set_interface_l2_tables_reply_t_print (vl_api_classify_set_interface_l2_tables_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_classify_set_interface_l2_tables_reply_t: */
    s = format(s, "vl_api_classify_set_interface_l2_tables_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_input_acl_set_interface_t_print (vl_api_input_acl_set_interface_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_input_acl_set_interface_t: */
    s = format(s, "vl_api_input_acl_set_interface_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uip4_table_index: %u", format_white_space, indent, a->ip4_table_index);
    s = format(s, "\n%Uip6_table_index: %u", format_white_space, indent, a->ip6_table_index);
    s = format(s, "\n%Ul2_table_index: %u", format_white_space, indent, a->l2_table_index);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_input_acl_set_interface_reply_t_print (vl_api_input_acl_set_interface_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_input_acl_set_interface_reply_t: */
    s = format(s, "vl_api_input_acl_set_interface_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_output_acl_set_interface_t_print (vl_api_output_acl_set_interface_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_output_acl_set_interface_t: */
    s = format(s, "vl_api_output_acl_set_interface_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uip4_table_index: %u", format_white_space, indent, a->ip4_table_index);
    s = format(s, "\n%Uip6_table_index: %u", format_white_space, indent, a->ip6_table_index);
    s = format(s, "\n%Ul2_table_index: %u", format_white_space, indent, a->l2_table_index);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_output_acl_set_interface_reply_t_print (vl_api_output_acl_set_interface_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_output_acl_set_interface_reply_t: */
    s = format(s, "vl_api_output_acl_set_interface_reply_t:");
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
#ifndef included_classify_endianfun
#define included_classify_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_classify_action_t_endian (vl_api_classify_action_t *a)
{
    int i __attribute__((unused));
    /* a->classify_action = a->classify_action (no-op) */
}

static inline void vl_api_policer_classify_table_t_endian (vl_api_policer_classify_table_t *a)
{
    int i __attribute__((unused));
    /* a->policer_classify_table = a->policer_classify_table (no-op) */
}

static inline void vl_api_flow_classify_table_t_endian (vl_api_flow_classify_table_t *a)
{
    int i __attribute__((unused));
    /* a->flow_classify_table = a->flow_classify_table (no-op) */
}

static inline void vl_api_classify_add_del_table_t_endian (vl_api_classify_add_del_table_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->del_chain = a->del_chain (no-op) */
    a->table_index = clib_net_to_host_u32(a->table_index);
    a->nbuckets = clib_net_to_host_u32(a->nbuckets);
    a->memory_size = clib_net_to_host_u32(a->memory_size);
    a->skip_n_vectors = clib_net_to_host_u32(a->skip_n_vectors);
    a->match_n_vectors = clib_net_to_host_u32(a->match_n_vectors);
    a->next_table_index = clib_net_to_host_u32(a->next_table_index);
    a->miss_next_index = clib_net_to_host_u32(a->miss_next_index);
    /* a->current_data_flag = a->current_data_flag (no-op) */
    a->current_data_offset = clib_net_to_host_i16(a->current_data_offset);
    a->mask_len = clib_net_to_host_u32(a->mask_len);
    /* a->mask = a->mask (no-op) */
}

static inline void vl_api_classify_add_del_table_reply_t_endian (vl_api_classify_add_del_table_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->new_table_index = clib_net_to_host_u32(a->new_table_index);
    a->skip_n_vectors = clib_net_to_host_u32(a->skip_n_vectors);
    a->match_n_vectors = clib_net_to_host_u32(a->match_n_vectors);
}

static inline void vl_api_classify_add_del_session_t_endian (vl_api_classify_add_del_session_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->table_index = clib_net_to_host_u32(a->table_index);
    a->hit_next_index = clib_net_to_host_u32(a->hit_next_index);
    a->opaque_index = clib_net_to_host_u32(a->opaque_index);
    a->advance = clib_net_to_host_i32(a->advance);
    vl_api_classify_action_t_endian(&a->action);
    a->metadata = clib_net_to_host_u32(a->metadata);
    a->match_len = clib_net_to_host_u32(a->match_len);
    /* a->match = a->match (no-op) */
}

static inline void vl_api_classify_add_del_session_reply_t_endian (vl_api_classify_add_del_session_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_policer_classify_set_interface_t_endian (vl_api_policer_classify_set_interface_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->ip4_table_index = clib_net_to_host_u32(a->ip4_table_index);
    a->ip6_table_index = clib_net_to_host_u32(a->ip6_table_index);
    a->l2_table_index = clib_net_to_host_u32(a->l2_table_index);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_policer_classify_set_interface_reply_t_endian (vl_api_policer_classify_set_interface_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_policer_classify_dump_t_endian (vl_api_policer_classify_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_policer_classify_table_t_endian(&a->type);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_policer_classify_details_t_endian (vl_api_policer_classify_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->table_index = clib_net_to_host_u32(a->table_index);
}

static inline void vl_api_classify_table_ids_t_endian (vl_api_classify_table_ids_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_classify_table_ids_reply_t_endian (vl_api_classify_table_ids_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->count = clib_net_to_host_u32(a->count);
    for (i = 0; i < a->count; i++) {
        a->ids[i] = clib_net_to_host_u32(a->ids[i]);
    }
}

static inline void vl_api_classify_table_by_interface_t_endian (vl_api_classify_table_by_interface_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_classify_table_by_interface_reply_t_endian (vl_api_classify_table_by_interface_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->l2_table_id = clib_net_to_host_u32(a->l2_table_id);
    a->ip4_table_id = clib_net_to_host_u32(a->ip4_table_id);
    a->ip6_table_id = clib_net_to_host_u32(a->ip6_table_id);
}

static inline void vl_api_classify_table_info_t_endian (vl_api_classify_table_info_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->table_id = clib_net_to_host_u32(a->table_id);
}

static inline void vl_api_classify_table_info_reply_t_endian (vl_api_classify_table_info_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->nbuckets = clib_net_to_host_u32(a->nbuckets);
    a->match_n_vectors = clib_net_to_host_u32(a->match_n_vectors);
    a->skip_n_vectors = clib_net_to_host_u32(a->skip_n_vectors);
    a->active_sessions = clib_net_to_host_u32(a->active_sessions);
    a->next_table_index = clib_net_to_host_u32(a->next_table_index);
    a->miss_next_index = clib_net_to_host_u32(a->miss_next_index);
    a->mask_length = clib_net_to_host_u32(a->mask_length);
    /* a->mask = a->mask (no-op) */
}

static inline void vl_api_classify_session_dump_t_endian (vl_api_classify_session_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->table_id = clib_net_to_host_u32(a->table_id);
}

static inline void vl_api_classify_session_details_t_endian (vl_api_classify_session_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->hit_next_index = clib_net_to_host_u32(a->hit_next_index);
    a->advance = clib_net_to_host_i32(a->advance);
    a->opaque_index = clib_net_to_host_u32(a->opaque_index);
    a->match_length = clib_net_to_host_u32(a->match_length);
    /* a->match = a->match (no-op) */
}

static inline void vl_api_flow_classify_set_interface_t_endian (vl_api_flow_classify_set_interface_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->ip4_table_index = clib_net_to_host_u32(a->ip4_table_index);
    a->ip6_table_index = clib_net_to_host_u32(a->ip6_table_index);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_flow_classify_set_interface_reply_t_endian (vl_api_flow_classify_set_interface_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_flow_classify_dump_t_endian (vl_api_flow_classify_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_flow_classify_table_t_endian(&a->type);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_flow_classify_details_t_endian (vl_api_flow_classify_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->table_index = clib_net_to_host_u32(a->table_index);
}

static inline void vl_api_classify_set_interface_ip_table_t_endian (vl_api_classify_set_interface_ip_table_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->table_index = clib_net_to_host_u32(a->table_index);
}

static inline void vl_api_classify_set_interface_ip_table_reply_t_endian (vl_api_classify_set_interface_ip_table_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_classify_set_interface_l2_tables_t_endian (vl_api_classify_set_interface_l2_tables_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->ip4_table_index = clib_net_to_host_u32(a->ip4_table_index);
    a->ip6_table_index = clib_net_to_host_u32(a->ip6_table_index);
    a->other_table_index = clib_net_to_host_u32(a->other_table_index);
    /* a->is_input = a->is_input (no-op) */
}

static inline void vl_api_classify_set_interface_l2_tables_reply_t_endian (vl_api_classify_set_interface_l2_tables_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_input_acl_set_interface_t_endian (vl_api_input_acl_set_interface_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->ip4_table_index = clib_net_to_host_u32(a->ip4_table_index);
    a->ip6_table_index = clib_net_to_host_u32(a->ip6_table_index);
    a->l2_table_index = clib_net_to_host_u32(a->l2_table_index);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_input_acl_set_interface_reply_t_endian (vl_api_input_acl_set_interface_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_output_acl_set_interface_t_endian (vl_api_output_acl_set_interface_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->ip4_table_index = clib_net_to_host_u32(a->ip4_table_index);
    a->ip6_table_index = clib_net_to_host_u32(a->ip6_table_index);
    a->l2_table_index = clib_net_to_host_u32(a->l2_table_index);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_output_acl_set_interface_reply_t_endian (vl_api_output_acl_set_interface_reply_t *a)
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

vl_api_version_tuple(classify.api, 3, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(classify.api, 0xdc4059bc)

#endif

