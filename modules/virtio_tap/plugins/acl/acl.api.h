/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: acl.api
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
#warning no content included from acl.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <acl/acl_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_ACL_PLUGIN_GET_VERSION, vl_api_acl_plugin_get_version_t_handler)
vl_msg_id(VL_API_ACL_PLUGIN_GET_VERSION_REPLY, vl_api_acl_plugin_get_version_reply_t_handler)
vl_msg_id(VL_API_ACL_PLUGIN_CONTROL_PING, vl_api_acl_plugin_control_ping_t_handler)
vl_msg_id(VL_API_ACL_PLUGIN_CONTROL_PING_REPLY, vl_api_acl_plugin_control_ping_reply_t_handler)
vl_msg_id(VL_API_ACL_PLUGIN_GET_CONN_TABLE_MAX_ENTRIES, vl_api_acl_plugin_get_conn_table_max_entries_t_handler)
vl_msg_id(VL_API_ACL_PLUGIN_GET_CONN_TABLE_MAX_ENTRIES_REPLY, vl_api_acl_plugin_get_conn_table_max_entries_reply_t_handler)
vl_msg_id(VL_API_ACL_ADD_REPLACE, vl_api_acl_add_replace_t_handler)
vl_msg_id(VL_API_ACL_ADD_REPLACE_REPLY, vl_api_acl_add_replace_reply_t_handler)
vl_msg_id(VL_API_ACL_DEL, vl_api_acl_del_t_handler)
vl_msg_id(VL_API_ACL_DEL_REPLY, vl_api_acl_del_reply_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_ADD_DEL, vl_api_acl_interface_add_del_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_ADD_DEL_REPLY, vl_api_acl_interface_add_del_reply_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_SET_ACL_LIST, vl_api_acl_interface_set_acl_list_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_SET_ACL_LIST_REPLY, vl_api_acl_interface_set_acl_list_reply_t_handler)
vl_msg_id(VL_API_ACL_DUMP, vl_api_acl_dump_t_handler)
vl_msg_id(VL_API_ACL_DETAILS, vl_api_acl_details_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_LIST_DUMP, vl_api_acl_interface_list_dump_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_LIST_DETAILS, vl_api_acl_interface_list_details_t_handler)
vl_msg_id(VL_API_MACIP_ACL_ADD, vl_api_macip_acl_add_t_handler)
vl_msg_id(VL_API_MACIP_ACL_ADD_REPLY, vl_api_macip_acl_add_reply_t_handler)
vl_msg_id(VL_API_MACIP_ACL_ADD_REPLACE, vl_api_macip_acl_add_replace_t_handler)
vl_msg_id(VL_API_MACIP_ACL_ADD_REPLACE_REPLY, vl_api_macip_acl_add_replace_reply_t_handler)
vl_msg_id(VL_API_MACIP_ACL_DEL, vl_api_macip_acl_del_t_handler)
vl_msg_id(VL_API_MACIP_ACL_DEL_REPLY, vl_api_macip_acl_del_reply_t_handler)
vl_msg_id(VL_API_MACIP_ACL_INTERFACE_ADD_DEL, vl_api_macip_acl_interface_add_del_t_handler)
vl_msg_id(VL_API_MACIP_ACL_INTERFACE_ADD_DEL_REPLY, vl_api_macip_acl_interface_add_del_reply_t_handler)
vl_msg_id(VL_API_MACIP_ACL_DUMP, vl_api_macip_acl_dump_t_handler)
vl_msg_id(VL_API_MACIP_ACL_DETAILS, vl_api_macip_acl_details_t_handler)
vl_msg_id(VL_API_MACIP_ACL_INTERFACE_GET, vl_api_macip_acl_interface_get_t_handler)
vl_msg_id(VL_API_MACIP_ACL_INTERFACE_GET_REPLY, vl_api_macip_acl_interface_get_reply_t_handler)
vl_msg_id(VL_API_MACIP_ACL_INTERFACE_LIST_DUMP, vl_api_macip_acl_interface_list_dump_t_handler)
vl_msg_id(VL_API_MACIP_ACL_INTERFACE_LIST_DETAILS, vl_api_macip_acl_interface_list_details_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_SET_ETYPE_WHITELIST, vl_api_acl_interface_set_etype_whitelist_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_SET_ETYPE_WHITELIST_REPLY, vl_api_acl_interface_set_etype_whitelist_reply_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_ETYPE_WHITELIST_DUMP, vl_api_acl_interface_etype_whitelist_dump_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_ETYPE_WHITELIST_DETAILS, vl_api_acl_interface_etype_whitelist_details_t_handler)
vl_msg_id(VL_API_ACL_STATS_INTF_COUNTERS_ENABLE, vl_api_acl_stats_intf_counters_enable_t_handler)
vl_msg_id(VL_API_ACL_STATS_INTF_COUNTERS_ENABLE_REPLY, vl_api_acl_stats_intf_counters_enable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_acl_plugin_get_version_t, 1)
vl_msg_name(vl_api_acl_plugin_get_version_reply_t, 1)
vl_msg_name(vl_api_acl_plugin_control_ping_t, 1)
vl_msg_name(vl_api_acl_plugin_control_ping_reply_t, 1)
vl_msg_name(vl_api_acl_plugin_get_conn_table_max_entries_t, 1)
vl_msg_name(vl_api_acl_plugin_get_conn_table_max_entries_reply_t, 1)
vl_msg_name(vl_api_acl_add_replace_t, 1)
vl_msg_name(vl_api_acl_add_replace_reply_t, 1)
vl_msg_name(vl_api_acl_del_t, 1)
vl_msg_name(vl_api_acl_del_reply_t, 1)
vl_msg_name(vl_api_acl_interface_add_del_t, 1)
vl_msg_name(vl_api_acl_interface_add_del_reply_t, 1)
vl_msg_name(vl_api_acl_interface_set_acl_list_t, 1)
vl_msg_name(vl_api_acl_interface_set_acl_list_reply_t, 1)
vl_msg_name(vl_api_acl_dump_t, 1)
vl_msg_name(vl_api_acl_details_t, 1)
vl_msg_name(vl_api_acl_interface_list_dump_t, 1)
vl_msg_name(vl_api_acl_interface_list_details_t, 1)
vl_msg_name(vl_api_macip_acl_add_t, 1)
vl_msg_name(vl_api_macip_acl_add_reply_t, 1)
vl_msg_name(vl_api_macip_acl_add_replace_t, 1)
vl_msg_name(vl_api_macip_acl_add_replace_reply_t, 1)
vl_msg_name(vl_api_macip_acl_del_t, 1)
vl_msg_name(vl_api_macip_acl_del_reply_t, 1)
vl_msg_name(vl_api_macip_acl_interface_add_del_t, 1)
vl_msg_name(vl_api_macip_acl_interface_add_del_reply_t, 1)
vl_msg_name(vl_api_macip_acl_dump_t, 1)
vl_msg_name(vl_api_macip_acl_details_t, 1)
vl_msg_name(vl_api_macip_acl_interface_get_t, 1)
vl_msg_name(vl_api_macip_acl_interface_get_reply_t, 1)
vl_msg_name(vl_api_macip_acl_interface_list_dump_t, 1)
vl_msg_name(vl_api_macip_acl_interface_list_details_t, 1)
vl_msg_name(vl_api_acl_interface_set_etype_whitelist_t, 1)
vl_msg_name(vl_api_acl_interface_set_etype_whitelist_reply_t, 1)
vl_msg_name(vl_api_acl_interface_etype_whitelist_dump_t, 1)
vl_msg_name(vl_api_acl_interface_etype_whitelist_details_t, 1)
vl_msg_name(vl_api_acl_stats_intf_counters_enable_t, 1)
vl_msg_name(vl_api_acl_stats_intf_counters_enable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_acl \
_(VL_API_ACL_PLUGIN_GET_VERSION, acl_plugin_get_version, 51077d14) \
_(VL_API_ACL_PLUGIN_GET_VERSION_REPLY, acl_plugin_get_version_reply, 9b32cf86) \
_(VL_API_ACL_PLUGIN_CONTROL_PING, acl_plugin_control_ping, 51077d14) \
_(VL_API_ACL_PLUGIN_CONTROL_PING_REPLY, acl_plugin_control_ping_reply, f6b0b8ca) \
_(VL_API_ACL_PLUGIN_GET_CONN_TABLE_MAX_ENTRIES, acl_plugin_get_conn_table_max_entries, 51077d14) \
_(VL_API_ACL_PLUGIN_GET_CONN_TABLE_MAX_ENTRIES_REPLY, acl_plugin_get_conn_table_max_entries_reply, 7a096d3d) \
_(VL_API_ACL_ADD_REPLACE, acl_add_replace, 1cabdeab) \
_(VL_API_ACL_ADD_REPLACE_REPLY, acl_add_replace_reply, ac407b0c) \
_(VL_API_ACL_DEL, acl_del, ef34fea4) \
_(VL_API_ACL_DEL_REPLY, acl_del_reply, e8d4e804) \
_(VL_API_ACL_INTERFACE_ADD_DEL, acl_interface_add_del, 4b54bebd) \
_(VL_API_ACL_INTERFACE_ADD_DEL_REPLY, acl_interface_add_del_reply, e8d4e804) \
_(VL_API_ACL_INTERFACE_SET_ACL_LIST, acl_interface_set_acl_list, 473982bd) \
_(VL_API_ACL_INTERFACE_SET_ACL_LIST_REPLY, acl_interface_set_acl_list_reply, e8d4e804) \
_(VL_API_ACL_DUMP, acl_dump, ef34fea4) \
_(VL_API_ACL_DETAILS, acl_details, 7a97f21c) \
_(VL_API_ACL_INTERFACE_LIST_DUMP, acl_interface_list_dump, f9e6675e) \
_(VL_API_ACL_INTERFACE_LIST_DETAILS, acl_interface_list_details, e695d256) \
_(VL_API_MACIP_ACL_ADD, macip_acl_add, d648fd0a) \
_(VL_API_MACIP_ACL_ADD_REPLY, macip_acl_add_reply, ac407b0c) \
_(VL_API_MACIP_ACL_ADD_REPLACE, macip_acl_add_replace, e34402a7) \
_(VL_API_MACIP_ACL_ADD_REPLACE_REPLY, macip_acl_add_replace_reply, ac407b0c) \
_(VL_API_MACIP_ACL_DEL, macip_acl_del, ef34fea4) \
_(VL_API_MACIP_ACL_DEL_REPLY, macip_acl_del_reply, e8d4e804) \
_(VL_API_MACIP_ACL_INTERFACE_ADD_DEL, macip_acl_interface_add_del, 4b8690b1) \
_(VL_API_MACIP_ACL_INTERFACE_ADD_DEL_REPLY, macip_acl_interface_add_del_reply, e8d4e804) \
_(VL_API_MACIP_ACL_DUMP, macip_acl_dump, ef34fea4) \
_(VL_API_MACIP_ACL_DETAILS, macip_acl_details, 57c7482f) \
_(VL_API_MACIP_ACL_INTERFACE_GET, macip_acl_interface_get, 51077d14) \
_(VL_API_MACIP_ACL_INTERFACE_GET_REPLY, macip_acl_interface_get_reply, accf9b05) \
_(VL_API_MACIP_ACL_INTERFACE_LIST_DUMP, macip_acl_interface_list_dump, f9e6675e) \
_(VL_API_MACIP_ACL_INTERFACE_LIST_DETAILS, macip_acl_interface_list_details, a0c5d56d) \
_(VL_API_ACL_INTERFACE_SET_ETYPE_WHITELIST, acl_interface_set_etype_whitelist, 3f5c2d2d) \
_(VL_API_ACL_INTERFACE_SET_ETYPE_WHITELIST_REPLY, acl_interface_set_etype_whitelist_reply, e8d4e804) \
_(VL_API_ACL_INTERFACE_ETYPE_WHITELIST_DUMP, acl_interface_etype_whitelist_dump, f9e6675e) \
_(VL_API_ACL_INTERFACE_ETYPE_WHITELIST_DETAILS, acl_interface_etype_whitelist_details, cc2bfded) \
_(VL_API_ACL_STATS_INTF_COUNTERS_ENABLE, acl_stats_intf_counters_enable, b3e225d2) \
_(VL_API_ACL_STATS_INTF_COUNTERS_ENABLE_REPLY, acl_stats_intf_counters_enable_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "acl.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_acl_printfun_types
#define included_acl_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_acl_printfun
#define included_acl_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_acl_plugin_get_version_t_print (vl_api_acl_plugin_get_version_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_plugin_get_version_t: */
    s = format(s, "vl_api_acl_plugin_get_version_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_acl_plugin_get_version_reply_t_print (vl_api_acl_plugin_get_version_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_plugin_get_version_reply_t: */
    s = format(s, "vl_api_acl_plugin_get_version_reply_t:");
    s = format(s, "\n%Umajor: %u", format_white_space, indent, a->major);
    s = format(s, "\n%Uminor: %u", format_white_space, indent, a->minor);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_acl_plugin_control_ping_t_print (vl_api_acl_plugin_control_ping_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_plugin_control_ping_t: */
    s = format(s, "vl_api_acl_plugin_control_ping_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_acl_plugin_control_ping_reply_t_print (vl_api_acl_plugin_control_ping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_plugin_control_ping_reply_t: */
    s = format(s, "vl_api_acl_plugin_control_ping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uvpe_pid: %u", format_white_space, indent, a->vpe_pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_acl_plugin_get_conn_table_max_entries_t_print (vl_api_acl_plugin_get_conn_table_max_entries_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_plugin_get_conn_table_max_entries_t: */
    s = format(s, "vl_api_acl_plugin_get_conn_table_max_entries_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_acl_plugin_get_conn_table_max_entries_reply_t_print (vl_api_acl_plugin_get_conn_table_max_entries_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_plugin_get_conn_table_max_entries_reply_t: */
    s = format(s, "vl_api_acl_plugin_get_conn_table_max_entries_reply_t:");
    s = format(s, "\n%Uconn_table_max_entries: %llu", format_white_space, indent, a->conn_table_max_entries);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_acl_add_replace_t_print  *****/

static inline void *vl_api_acl_add_replace_reply_t_print (vl_api_acl_add_replace_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_add_replace_reply_t: */
    s = format(s, "vl_api_acl_add_replace_reply_t:");
    s = format(s, "\n%Uacl_index: %u", format_white_space, indent, a->acl_index);
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_acl_del_t_print  *****/

static inline void *vl_api_acl_del_reply_t_print (vl_api_acl_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_del_reply_t: */
    s = format(s, "vl_api_acl_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_acl_interface_add_del_t_print  *****/

static inline void *vl_api_acl_interface_add_del_reply_t_print (vl_api_acl_interface_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_interface_add_del_reply_t: */
    s = format(s, "vl_api_acl_interface_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_acl_interface_set_acl_list_t_print  *****/

static inline void *vl_api_acl_interface_set_acl_list_reply_t_print (vl_api_acl_interface_set_acl_list_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_interface_set_acl_list_reply_t: */
    s = format(s, "vl_api_acl_interface_set_acl_list_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_acl_dump_t_print (vl_api_acl_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_dump_t: */
    s = format(s, "vl_api_acl_dump_t:");
    s = format(s, "\n%Uacl_index: %u", format_white_space, indent, a->acl_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_acl_details_t_print  *****/

static inline void *vl_api_acl_interface_list_dump_t_print (vl_api_acl_interface_list_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_interface_list_dump_t: */
    s = format(s, "vl_api_acl_interface_list_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_acl_interface_list_details_t_print (vl_api_acl_interface_list_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_interface_list_details_t: */
    s = format(s, "vl_api_acl_interface_list_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ucount: %u", format_white_space, indent, a->count);
    s = format(s, "\n%Un_input: %u", format_white_space, indent, a->n_input);
    for (i = 0; i < a->count; i++) {
        s = format(s, "\n%Uacls: %u",
                   format_white_space, indent, a->acls[i]);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_macip_acl_add_t_print  *****/

static inline void *vl_api_macip_acl_add_reply_t_print (vl_api_macip_acl_add_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_macip_acl_add_reply_t: */
    s = format(s, "vl_api_macip_acl_add_reply_t:");
    s = format(s, "\n%Uacl_index: %u", format_white_space, indent, a->acl_index);
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_macip_acl_add_replace_t_print  *****/

static inline void *vl_api_macip_acl_add_replace_reply_t_print (vl_api_macip_acl_add_replace_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_macip_acl_add_replace_reply_t: */
    s = format(s, "vl_api_macip_acl_add_replace_reply_t:");
    s = format(s, "\n%Uacl_index: %u", format_white_space, indent, a->acl_index);
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_macip_acl_del_t_print  *****/

static inline void *vl_api_macip_acl_del_reply_t_print (vl_api_macip_acl_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_macip_acl_del_reply_t: */
    s = format(s, "vl_api_macip_acl_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_macip_acl_interface_add_del_t_print  *****/

static inline void *vl_api_macip_acl_interface_add_del_reply_t_print (vl_api_macip_acl_interface_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_macip_acl_interface_add_del_reply_t: */
    s = format(s, "vl_api_macip_acl_interface_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_macip_acl_dump_t_print (vl_api_macip_acl_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_macip_acl_dump_t: */
    s = format(s, "vl_api_macip_acl_dump_t:");
    s = format(s, "\n%Uacl_index: %u", format_white_space, indent, a->acl_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_macip_acl_details_t_print  *****/

static inline void *vl_api_macip_acl_interface_get_t_print (vl_api_macip_acl_interface_get_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_macip_acl_interface_get_t: */
    s = format(s, "vl_api_macip_acl_interface_get_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_macip_acl_interface_get_reply_t_print (vl_api_macip_acl_interface_get_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_macip_acl_interface_get_reply_t: */
    s = format(s, "vl_api_macip_acl_interface_get_reply_t:");
    s = format(s, "\n%Ucount: %u", format_white_space, indent, a->count);
    for (i = 0; i < a->count; i++) {
        s = format(s, "\n%Uacls: %u",
                   format_white_space, indent, a->acls[i]);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_macip_acl_interface_list_dump_t_print (vl_api_macip_acl_interface_list_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_macip_acl_interface_list_dump_t: */
    s = format(s, "vl_api_macip_acl_interface_list_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_macip_acl_interface_list_details_t_print (vl_api_macip_acl_interface_list_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_macip_acl_interface_list_details_t: */
    s = format(s, "vl_api_macip_acl_interface_list_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ucount: %u", format_white_space, indent, a->count);
    for (i = 0; i < a->count; i++) {
        s = format(s, "\n%Uacls: %u",
                   format_white_space, indent, a->acls[i]);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_acl_interface_set_etype_whitelist_t_print  *****/

static inline void *vl_api_acl_interface_set_etype_whitelist_reply_t_print (vl_api_acl_interface_set_etype_whitelist_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_interface_set_etype_whitelist_reply_t: */
    s = format(s, "vl_api_acl_interface_set_etype_whitelist_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_acl_interface_etype_whitelist_dump_t_print (vl_api_acl_interface_etype_whitelist_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_interface_etype_whitelist_dump_t: */
    s = format(s, "vl_api_acl_interface_etype_whitelist_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_acl_interface_etype_whitelist_details_t_print (vl_api_acl_interface_etype_whitelist_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_interface_etype_whitelist_details_t: */
    s = format(s, "vl_api_acl_interface_etype_whitelist_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ucount: %u", format_white_space, indent, a->count);
    s = format(s, "\n%Un_input: %u", format_white_space, indent, a->n_input);
    for (i = 0; i < a->count; i++) {
        s = format(s, "\n%Uwhitelist: %u",
                   format_white_space, indent, a->whitelist[i]);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_acl_stats_intf_counters_enable_t_print (vl_api_acl_stats_intf_counters_enable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_stats_intf_counters_enable_t: */
    s = format(s, "vl_api_acl_stats_intf_counters_enable_t:");
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_acl_stats_intf_counters_enable_reply_t_print (vl_api_acl_stats_intf_counters_enable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_acl_stats_intf_counters_enable_reply_t: */
    s = format(s, "vl_api_acl_stats_intf_counters_enable_reply_t:");
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
#ifndef included_acl_endianfun
#define included_acl_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_acl_plugin_get_version_t_endian (vl_api_acl_plugin_get_version_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_acl_plugin_get_version_reply_t_endian (vl_api_acl_plugin_get_version_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->major = clib_net_to_host_u32(a->major);
    a->minor = clib_net_to_host_u32(a->minor);
}

static inline void vl_api_acl_plugin_control_ping_t_endian (vl_api_acl_plugin_control_ping_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_acl_plugin_control_ping_reply_t_endian (vl_api_acl_plugin_control_ping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->client_index = a->client_index (no-op) */
    a->vpe_pid = clib_net_to_host_u32(a->vpe_pid);
}

static inline void vl_api_acl_plugin_get_conn_table_max_entries_t_endian (vl_api_acl_plugin_get_conn_table_max_entries_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_acl_plugin_get_conn_table_max_entries_reply_t_endian (vl_api_acl_plugin_get_conn_table_max_entries_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->conn_table_max_entries = clib_net_to_host_u64(a->conn_table_max_entries);
}

/***** manual: vl_api_acl_add_replace_t_endian  *****/

static inline void vl_api_acl_add_replace_reply_t_endian (vl_api_acl_add_replace_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_acl_del_t_endian (vl_api_acl_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
}

static inline void vl_api_acl_del_reply_t_endian (vl_api_acl_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_acl_interface_add_del_t_endian (vl_api_acl_interface_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_input = a->is_input (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
}

static inline void vl_api_acl_interface_add_del_reply_t_endian (vl_api_acl_interface_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_acl_interface_set_acl_list_t_endian (vl_api_acl_interface_set_acl_list_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->count = a->count (no-op) */
    /* a->n_input = a->n_input (no-op) */
    for (i = 0; i < a->count; i++) {
        a->acls[i] = clib_net_to_host_u32(a->acls[i]);
    }
}

static inline void vl_api_acl_interface_set_acl_list_reply_t_endian (vl_api_acl_interface_set_acl_list_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_acl_dump_t_endian (vl_api_acl_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
}

/***** manual: vl_api_acl_details_t_endian  *****/

static inline void vl_api_acl_interface_list_dump_t_endian (vl_api_acl_interface_list_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_acl_interface_list_details_t_endian (vl_api_acl_interface_list_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->count = a->count (no-op) */
    /* a->n_input = a->n_input (no-op) */
    for (i = 0; i < a->count; i++) {
        a->acls[i] = clib_net_to_host_u32(a->acls[i]);
    }
}

/***** manual: vl_api_macip_acl_add_t_endian  *****/

static inline void vl_api_macip_acl_add_reply_t_endian (vl_api_macip_acl_add_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
    a->retval = clib_net_to_host_i32(a->retval);
}

/***** manual: vl_api_macip_acl_add_replace_t_endian  *****/

static inline void vl_api_macip_acl_add_replace_reply_t_endian (vl_api_macip_acl_add_replace_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_macip_acl_del_t_endian (vl_api_macip_acl_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
}

static inline void vl_api_macip_acl_del_reply_t_endian (vl_api_macip_acl_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_macip_acl_interface_add_del_t_endian (vl_api_macip_acl_interface_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
}

static inline void vl_api_macip_acl_interface_add_del_reply_t_endian (vl_api_macip_acl_interface_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_macip_acl_dump_t_endian (vl_api_macip_acl_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
}

/***** manual: vl_api_macip_acl_details_t_endian  *****/

static inline void vl_api_macip_acl_interface_get_t_endian (vl_api_macip_acl_interface_get_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_macip_acl_interface_get_reply_t_endian (vl_api_macip_acl_interface_get_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->count = clib_net_to_host_u32(a->count);
    for (i = 0; i < a->count; i++) {
        a->acls[i] = clib_net_to_host_u32(a->acls[i]);
    }
}

static inline void vl_api_macip_acl_interface_list_dump_t_endian (vl_api_macip_acl_interface_list_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_macip_acl_interface_list_details_t_endian (vl_api_macip_acl_interface_list_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->count = a->count (no-op) */
    for (i = 0; i < a->count; i++) {
        a->acls[i] = clib_net_to_host_u32(a->acls[i]);
    }
}

static inline void vl_api_acl_interface_set_etype_whitelist_t_endian (vl_api_acl_interface_set_etype_whitelist_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->count = a->count (no-op) */
    /* a->n_input = a->n_input (no-op) */
    for (i = 0; i < a->count; i++) {
        a->whitelist[i] = clib_net_to_host_u16(a->whitelist[i]);
    }
}

static inline void vl_api_acl_interface_set_etype_whitelist_reply_t_endian (vl_api_acl_interface_set_etype_whitelist_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_acl_interface_etype_whitelist_dump_t_endian (vl_api_acl_interface_etype_whitelist_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_acl_interface_etype_whitelist_details_t_endian (vl_api_acl_interface_etype_whitelist_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->count = a->count (no-op) */
    /* a->n_input = a->n_input (no-op) */
    for (i = 0; i < a->count; i++) {
        a->whitelist[i] = clib_net_to_host_u16(a->whitelist[i]);
    }
}

static inline void vl_api_acl_stats_intf_counters_enable_t_endian (vl_api_acl_stats_intf_counters_enable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_acl_stats_intf_counters_enable_reply_t_endian (vl_api_acl_stats_intf_counters_enable_reply_t *a)
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

vl_api_version_tuple(acl.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(acl.api, 0xa97181af)

#endif

