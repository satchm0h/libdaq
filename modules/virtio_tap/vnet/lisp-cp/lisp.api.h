/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: lisp.api
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
#warning no content included from lisp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/lisp-cp/lisp_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_LISP_ADD_DEL_LOCATOR_SET, vl_api_lisp_add_del_locator_set_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_LOCATOR_SET_REPLY, vl_api_lisp_add_del_locator_set_reply_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_LOCATOR, vl_api_lisp_add_del_locator_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_LOCATOR_REPLY, vl_api_lisp_add_del_locator_reply_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_LOCAL_EID, vl_api_lisp_add_del_local_eid_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_LOCAL_EID_REPLY, vl_api_lisp_add_del_local_eid_reply_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_MAP_SERVER, vl_api_lisp_add_del_map_server_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_MAP_SERVER_REPLY, vl_api_lisp_add_del_map_server_reply_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_MAP_RESOLVER, vl_api_lisp_add_del_map_resolver_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_MAP_RESOLVER_REPLY, vl_api_lisp_add_del_map_resolver_reply_t_handler)
vl_msg_id(VL_API_LISP_ENABLE_DISABLE, vl_api_lisp_enable_disable_t_handler)
vl_msg_id(VL_API_LISP_ENABLE_DISABLE_REPLY, vl_api_lisp_enable_disable_reply_t_handler)
vl_msg_id(VL_API_LISP_PITR_SET_LOCATOR_SET, vl_api_lisp_pitr_set_locator_set_t_handler)
vl_msg_id(VL_API_LISP_PITR_SET_LOCATOR_SET_REPLY, vl_api_lisp_pitr_set_locator_set_reply_t_handler)
vl_msg_id(VL_API_LISP_USE_PETR, vl_api_lisp_use_petr_t_handler)
vl_msg_id(VL_API_LISP_USE_PETR_REPLY, vl_api_lisp_use_petr_reply_t_handler)
vl_msg_id(VL_API_SHOW_LISP_USE_PETR, vl_api_show_lisp_use_petr_t_handler)
vl_msg_id(VL_API_SHOW_LISP_USE_PETR_REPLY, vl_api_show_lisp_use_petr_reply_t_handler)
vl_msg_id(VL_API_SHOW_LISP_RLOC_PROBE_STATE, vl_api_show_lisp_rloc_probe_state_t_handler)
vl_msg_id(VL_API_SHOW_LISP_RLOC_PROBE_STATE_REPLY, vl_api_show_lisp_rloc_probe_state_reply_t_handler)
vl_msg_id(VL_API_LISP_RLOC_PROBE_ENABLE_DISABLE, vl_api_lisp_rloc_probe_enable_disable_t_handler)
vl_msg_id(VL_API_LISP_RLOC_PROBE_ENABLE_DISABLE_REPLY, vl_api_lisp_rloc_probe_enable_disable_reply_t_handler)
vl_msg_id(VL_API_LISP_MAP_REGISTER_ENABLE_DISABLE, vl_api_lisp_map_register_enable_disable_t_handler)
vl_msg_id(VL_API_LISP_MAP_REGISTER_ENABLE_DISABLE_REPLY, vl_api_lisp_map_register_enable_disable_reply_t_handler)
vl_msg_id(VL_API_SHOW_LISP_MAP_REGISTER_STATE, vl_api_show_lisp_map_register_state_t_handler)
vl_msg_id(VL_API_SHOW_LISP_MAP_REGISTER_STATE_REPLY, vl_api_show_lisp_map_register_state_reply_t_handler)
vl_msg_id(VL_API_LISP_MAP_REQUEST_MODE, vl_api_lisp_map_request_mode_t_handler)
vl_msg_id(VL_API_LISP_MAP_REQUEST_MODE_REPLY, vl_api_lisp_map_request_mode_reply_t_handler)
vl_msg_id(VL_API_SHOW_LISP_MAP_REQUEST_MODE, vl_api_show_lisp_map_request_mode_t_handler)
vl_msg_id(VL_API_SHOW_LISP_MAP_REQUEST_MODE_REPLY, vl_api_show_lisp_map_request_mode_reply_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_REMOTE_MAPPING, vl_api_lisp_add_del_remote_mapping_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_REMOTE_MAPPING_REPLY, vl_api_lisp_add_del_remote_mapping_reply_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_ADJACENCY, vl_api_lisp_add_del_adjacency_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_ADJACENCY_REPLY, vl_api_lisp_add_del_adjacency_reply_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_MAP_REQUEST_ITR_RLOCS, vl_api_lisp_add_del_map_request_itr_rlocs_t_handler)
vl_msg_id(VL_API_LISP_ADD_DEL_MAP_REQUEST_ITR_RLOCS_REPLY, vl_api_lisp_add_del_map_request_itr_rlocs_reply_t_handler)
vl_msg_id(VL_API_LISP_EID_TABLE_ADD_DEL_MAP, vl_api_lisp_eid_table_add_del_map_t_handler)
vl_msg_id(VL_API_LISP_EID_TABLE_ADD_DEL_MAP_REPLY, vl_api_lisp_eid_table_add_del_map_reply_t_handler)
vl_msg_id(VL_API_LISP_LOCATOR_DUMP, vl_api_lisp_locator_dump_t_handler)
vl_msg_id(VL_API_LISP_LOCATOR_DETAILS, vl_api_lisp_locator_details_t_handler)
vl_msg_id(VL_API_LISP_LOCATOR_SET_DETAILS, vl_api_lisp_locator_set_details_t_handler)
vl_msg_id(VL_API_LISP_LOCATOR_SET_DUMP, vl_api_lisp_locator_set_dump_t_handler)
vl_msg_id(VL_API_LISP_EID_TABLE_DETAILS, vl_api_lisp_eid_table_details_t_handler)
vl_msg_id(VL_API_LISP_EID_TABLE_DUMP, vl_api_lisp_eid_table_dump_t_handler)
vl_msg_id(VL_API_LISP_ADJACENCIES_GET_REPLY, vl_api_lisp_adjacencies_get_reply_t_handler)
vl_msg_id(VL_API_LISP_ADJACENCIES_GET, vl_api_lisp_adjacencies_get_t_handler)
vl_msg_id(VL_API_LISP_EID_TABLE_MAP_DETAILS, vl_api_lisp_eid_table_map_details_t_handler)
vl_msg_id(VL_API_LISP_EID_TABLE_MAP_DUMP, vl_api_lisp_eid_table_map_dump_t_handler)
vl_msg_id(VL_API_LISP_EID_TABLE_VNI_DUMP, vl_api_lisp_eid_table_vni_dump_t_handler)
vl_msg_id(VL_API_LISP_EID_TABLE_VNI_DETAILS, vl_api_lisp_eid_table_vni_details_t_handler)
vl_msg_id(VL_API_LISP_MAP_RESOLVER_DETAILS, vl_api_lisp_map_resolver_details_t_handler)
vl_msg_id(VL_API_LISP_MAP_RESOLVER_DUMP, vl_api_lisp_map_resolver_dump_t_handler)
vl_msg_id(VL_API_LISP_MAP_SERVER_DETAILS, vl_api_lisp_map_server_details_t_handler)
vl_msg_id(VL_API_LISP_MAP_SERVER_DUMP, vl_api_lisp_map_server_dump_t_handler)
vl_msg_id(VL_API_SHOW_LISP_STATUS, vl_api_show_lisp_status_t_handler)
vl_msg_id(VL_API_SHOW_LISP_STATUS_REPLY, vl_api_show_lisp_status_reply_t_handler)
vl_msg_id(VL_API_LISP_GET_MAP_REQUEST_ITR_RLOCS, vl_api_lisp_get_map_request_itr_rlocs_t_handler)
vl_msg_id(VL_API_LISP_GET_MAP_REQUEST_ITR_RLOCS_REPLY, vl_api_lisp_get_map_request_itr_rlocs_reply_t_handler)
vl_msg_id(VL_API_SHOW_LISP_PITR, vl_api_show_lisp_pitr_t_handler)
vl_msg_id(VL_API_SHOW_LISP_PITR_REPLY, vl_api_show_lisp_pitr_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_lisp_add_del_locator_set_t, 1)
vl_msg_name(vl_api_lisp_add_del_locator_set_reply_t, 1)
vl_msg_name(vl_api_lisp_add_del_locator_t, 1)
vl_msg_name(vl_api_lisp_add_del_locator_reply_t, 1)
vl_msg_name(vl_api_lisp_add_del_local_eid_t, 1)
vl_msg_name(vl_api_lisp_add_del_local_eid_reply_t, 1)
vl_msg_name(vl_api_lisp_add_del_map_server_t, 1)
vl_msg_name(vl_api_lisp_add_del_map_server_reply_t, 1)
vl_msg_name(vl_api_lisp_add_del_map_resolver_t, 1)
vl_msg_name(vl_api_lisp_add_del_map_resolver_reply_t, 1)
vl_msg_name(vl_api_lisp_enable_disable_t, 1)
vl_msg_name(vl_api_lisp_enable_disable_reply_t, 1)
vl_msg_name(vl_api_lisp_pitr_set_locator_set_t, 1)
vl_msg_name(vl_api_lisp_pitr_set_locator_set_reply_t, 1)
vl_msg_name(vl_api_lisp_use_petr_t, 1)
vl_msg_name(vl_api_lisp_use_petr_reply_t, 1)
vl_msg_name(vl_api_show_lisp_use_petr_t, 1)
vl_msg_name(vl_api_show_lisp_use_petr_reply_t, 1)
vl_msg_name(vl_api_show_lisp_rloc_probe_state_t, 1)
vl_msg_name(vl_api_show_lisp_rloc_probe_state_reply_t, 1)
vl_msg_name(vl_api_lisp_rloc_probe_enable_disable_t, 1)
vl_msg_name(vl_api_lisp_rloc_probe_enable_disable_reply_t, 1)
vl_msg_name(vl_api_lisp_map_register_enable_disable_t, 1)
vl_msg_name(vl_api_lisp_map_register_enable_disable_reply_t, 1)
vl_msg_name(vl_api_show_lisp_map_register_state_t, 1)
vl_msg_name(vl_api_show_lisp_map_register_state_reply_t, 1)
vl_msg_name(vl_api_lisp_map_request_mode_t, 1)
vl_msg_name(vl_api_lisp_map_request_mode_reply_t, 1)
vl_msg_name(vl_api_show_lisp_map_request_mode_t, 1)
vl_msg_name(vl_api_show_lisp_map_request_mode_reply_t, 1)
vl_msg_name(vl_api_lisp_add_del_remote_mapping_t, 1)
vl_msg_name(vl_api_lisp_add_del_remote_mapping_reply_t, 1)
vl_msg_name(vl_api_lisp_add_del_adjacency_t, 1)
vl_msg_name(vl_api_lisp_add_del_adjacency_reply_t, 1)
vl_msg_name(vl_api_lisp_add_del_map_request_itr_rlocs_t, 1)
vl_msg_name(vl_api_lisp_add_del_map_request_itr_rlocs_reply_t, 1)
vl_msg_name(vl_api_lisp_eid_table_add_del_map_t, 1)
vl_msg_name(vl_api_lisp_eid_table_add_del_map_reply_t, 1)
vl_msg_name(vl_api_lisp_locator_dump_t, 1)
vl_msg_name(vl_api_lisp_locator_details_t, 1)
vl_msg_name(vl_api_lisp_locator_set_details_t, 1)
vl_msg_name(vl_api_lisp_locator_set_dump_t, 1)
vl_msg_name(vl_api_lisp_eid_table_details_t, 1)
vl_msg_name(vl_api_lisp_eid_table_dump_t, 1)
vl_msg_name(vl_api_lisp_adjacencies_get_reply_t, 1)
vl_msg_name(vl_api_lisp_adjacencies_get_t, 1)
vl_msg_name(vl_api_lisp_eid_table_map_details_t, 1)
vl_msg_name(vl_api_lisp_eid_table_map_dump_t, 1)
vl_msg_name(vl_api_lisp_eid_table_vni_dump_t, 1)
vl_msg_name(vl_api_lisp_eid_table_vni_details_t, 1)
vl_msg_name(vl_api_lisp_map_resolver_details_t, 1)
vl_msg_name(vl_api_lisp_map_resolver_dump_t, 1)
vl_msg_name(vl_api_lisp_map_server_details_t, 1)
vl_msg_name(vl_api_lisp_map_server_dump_t, 1)
vl_msg_name(vl_api_show_lisp_status_t, 1)
vl_msg_name(vl_api_show_lisp_status_reply_t, 1)
vl_msg_name(vl_api_lisp_get_map_request_itr_rlocs_t, 1)
vl_msg_name(vl_api_lisp_get_map_request_itr_rlocs_reply_t, 1)
vl_msg_name(vl_api_show_lisp_pitr_t, 1)
vl_msg_name(vl_api_show_lisp_pitr_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_lisp \
_(VL_API_LISP_ADD_DEL_LOCATOR_SET, lisp_add_del_locator_set, 6fcd6471) \
_(VL_API_LISP_ADD_DEL_LOCATOR_SET_REPLY, lisp_add_del_locator_set_reply, b6666db4) \
_(VL_API_LISP_ADD_DEL_LOCATOR, lisp_add_del_locator, af4d8f13) \
_(VL_API_LISP_ADD_DEL_LOCATOR_REPLY, lisp_add_del_locator_reply, e8d4e804) \
_(VL_API_LISP_ADD_DEL_LOCAL_EID, lisp_add_del_local_eid, 21f573bd) \
_(VL_API_LISP_ADD_DEL_LOCAL_EID_REPLY, lisp_add_del_local_eid_reply, e8d4e804) \
_(VL_API_LISP_ADD_DEL_MAP_SERVER, lisp_add_del_map_server, 6598ea7c) \
_(VL_API_LISP_ADD_DEL_MAP_SERVER_REPLY, lisp_add_del_map_server_reply, e8d4e804) \
_(VL_API_LISP_ADD_DEL_MAP_RESOLVER, lisp_add_del_map_resolver, 6598ea7c) \
_(VL_API_LISP_ADD_DEL_MAP_RESOLVER_REPLY, lisp_add_del_map_resolver_reply, e8d4e804) \
_(VL_API_LISP_ENABLE_DISABLE, lisp_enable_disable, c264d7bf) \
_(VL_API_LISP_ENABLE_DISABLE_REPLY, lisp_enable_disable_reply, e8d4e804) \
_(VL_API_LISP_PITR_SET_LOCATOR_SET, lisp_pitr_set_locator_set, 486e2b76) \
_(VL_API_LISP_PITR_SET_LOCATOR_SET_REPLY, lisp_pitr_set_locator_set_reply, e8d4e804) \
_(VL_API_LISP_USE_PETR, lisp_use_petr, 9e141831) \
_(VL_API_LISP_USE_PETR_REPLY, lisp_use_petr_reply, e8d4e804) \
_(VL_API_SHOW_LISP_USE_PETR, show_lisp_use_petr, 51077d14) \
_(VL_API_SHOW_LISP_USE_PETR_REPLY, show_lisp_use_petr_reply, dcad8a81) \
_(VL_API_SHOW_LISP_RLOC_PROBE_STATE, show_lisp_rloc_probe_state, 51077d14) \
_(VL_API_SHOW_LISP_RLOC_PROBE_STATE_REPLY, show_lisp_rloc_probe_state_reply, e33a377b) \
_(VL_API_LISP_RLOC_PROBE_ENABLE_DISABLE, lisp_rloc_probe_enable_disable, c264d7bf) \
_(VL_API_LISP_RLOC_PROBE_ENABLE_DISABLE_REPLY, lisp_rloc_probe_enable_disable_reply, e8d4e804) \
_(VL_API_LISP_MAP_REGISTER_ENABLE_DISABLE, lisp_map_register_enable_disable, c264d7bf) \
_(VL_API_LISP_MAP_REGISTER_ENABLE_DISABLE_REPLY, lisp_map_register_enable_disable_reply, e8d4e804) \
_(VL_API_SHOW_LISP_MAP_REGISTER_STATE, show_lisp_map_register_state, 51077d14) \
_(VL_API_SHOW_LISP_MAP_REGISTER_STATE_REPLY, show_lisp_map_register_state_reply, e33a377b) \
_(VL_API_LISP_MAP_REQUEST_MODE, lisp_map_request_mode, f43c26ae) \
_(VL_API_LISP_MAP_REQUEST_MODE_REPLY, lisp_map_request_mode_reply, e8d4e804) \
_(VL_API_SHOW_LISP_MAP_REQUEST_MODE, show_lisp_map_request_mode, 51077d14) \
_(VL_API_SHOW_LISP_MAP_REQUEST_MODE_REPLY, show_lisp_map_request_mode_reply, 5b05038e) \
_(VL_API_LISP_ADD_DEL_REMOTE_MAPPING, lisp_add_del_remote_mapping, fae8ed77) \
_(VL_API_LISP_ADD_DEL_REMOTE_MAPPING_REPLY, lisp_add_del_remote_mapping_reply, e8d4e804) \
_(VL_API_LISP_ADD_DEL_ADJACENCY, lisp_add_del_adjacency, cf5edb61) \
_(VL_API_LISP_ADD_DEL_ADJACENCY_REPLY, lisp_add_del_adjacency_reply, e8d4e804) \
_(VL_API_LISP_ADD_DEL_MAP_REQUEST_ITR_RLOCS, lisp_add_del_map_request_itr_rlocs, 6be88e45) \
_(VL_API_LISP_ADD_DEL_MAP_REQUEST_ITR_RLOCS_REPLY, lisp_add_del_map_request_itr_rlocs_reply, e8d4e804) \
_(VL_API_LISP_EID_TABLE_ADD_DEL_MAP, lisp_eid_table_add_del_map, 9481416b) \
_(VL_API_LISP_EID_TABLE_ADD_DEL_MAP_REPLY, lisp_eid_table_add_del_map_reply, e8d4e804) \
_(VL_API_LISP_LOCATOR_DUMP, lisp_locator_dump, b954fad7) \
_(VL_API_LISP_LOCATOR_DETAILS, lisp_locator_details, c0c4c2a7) \
_(VL_API_LISP_LOCATOR_SET_DETAILS, lisp_locator_set_details, 5b33a105) \
_(VL_API_LISP_LOCATOR_SET_DUMP, lisp_locator_set_dump, c2cb5922) \
_(VL_API_LISP_EID_TABLE_DETAILS, lisp_eid_table_details, 4bc32e3a) \
_(VL_API_LISP_EID_TABLE_DUMP, lisp_eid_table_dump, b959b73b) \
_(VL_API_LISP_ADJACENCIES_GET_REPLY, lisp_adjacencies_get_reply, 3f97bcdd) \
_(VL_API_LISP_ADJACENCIES_GET, lisp_adjacencies_get, 8d1f2fe9) \
_(VL_API_LISP_EID_TABLE_MAP_DETAILS, lisp_eid_table_map_details, 0b6859e2) \
_(VL_API_LISP_EID_TABLE_MAP_DUMP, lisp_eid_table_map_dump, d6cf0c3d) \
_(VL_API_LISP_EID_TABLE_VNI_DUMP, lisp_eid_table_vni_dump, 51077d14) \
_(VL_API_LISP_EID_TABLE_VNI_DETAILS, lisp_eid_table_vni_details, 64abc01e) \
_(VL_API_LISP_MAP_RESOLVER_DETAILS, lisp_map_resolver_details, 82a09deb) \
_(VL_API_LISP_MAP_RESOLVER_DUMP, lisp_map_resolver_dump, 51077d14) \
_(VL_API_LISP_MAP_SERVER_DETAILS, lisp_map_server_details, 82a09deb) \
_(VL_API_LISP_MAP_SERVER_DUMP, lisp_map_server_dump, 51077d14) \
_(VL_API_SHOW_LISP_STATUS, show_lisp_status, 51077d14) \
_(VL_API_SHOW_LISP_STATUS_REPLY, show_lisp_status_reply, 9e8f10c0) \
_(VL_API_LISP_GET_MAP_REQUEST_ITR_RLOCS, lisp_get_map_request_itr_rlocs, 51077d14) \
_(VL_API_LISP_GET_MAP_REQUEST_ITR_RLOCS_REPLY, lisp_get_map_request_itr_rlocs_reply, 76580f3a) \
_(VL_API_SHOW_LISP_PITR, show_lisp_pitr, 51077d14) \
_(VL_API_SHOW_LISP_PITR_REPLY, show_lisp_pitr_reply, 27aa69b1) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "lisp.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_lisp_printfun_types
#define included_lisp_printfun_types

static inline u8 *format_vl_api_lisp_locator_set_filter_t (u8 *s, va_list * args)
{
    vl_api_lisp_locator_set_filter_t *a = va_arg (*args, vl_api_lisp_locator_set_filter_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "LISP_LOCATOR_SET_FILTER_API_ALL");
    case 1:
        return format(s, "LISP_LOCATOR_SET_FILTER_API_LOCAL");
    case 2:
        return format(s, "LISP_LOCATOR_SET_FILTER_API_REMOTE");
    }
    return s;
}

static inline u8 *format_vl_api_lisp_adjacency_t (u8 *s, va_list * args)
{
    vl_api_lisp_adjacency_t *a = va_arg (*args, vl_api_lisp_adjacency_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ureid: %U", format_white_space, indent, format_vl_api_eid_t, &a->reid, indent);
    s = format(s, "\n%Uleid: %U", format_white_space, indent, format_vl_api_eid_t, &a->leid, indent);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_lisp_printfun
#define included_lisp_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

/***** manual: vl_api_lisp_add_del_locator_set_t_print  *****/

static inline void *vl_api_lisp_add_del_locator_set_reply_t_print (vl_api_lisp_add_del_locator_set_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_locator_set_reply_t: */
    s = format(s, "vl_api_lisp_add_del_locator_set_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uls_index: %u", format_white_space, indent, a->ls_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_add_del_locator_t_print (vl_api_lisp_add_del_locator_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_locator_t: */
    s = format(s, "vl_api_lisp_add_del_locator_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Ulocator_set_name: %s", format_white_space, indent, a->locator_set_name);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Upriority: %u", format_white_space, indent, a->priority);
    s = format(s, "\n%Uweight: %u", format_white_space, indent, a->weight);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_add_del_locator_reply_t_print (vl_api_lisp_add_del_locator_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_locator_reply_t: */
    s = format(s, "vl_api_lisp_add_del_locator_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_add_del_local_eid_t_print (vl_api_lisp_add_del_local_eid_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_local_eid_t: */
    s = format(s, "vl_api_lisp_add_del_local_eid_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Ueid: %U", format_white_space, indent, format_vl_api_eid_t, &a->eid, indent);
    s = format(s, "\n%Ulocator_set_name: %s", format_white_space, indent, a->locator_set_name);
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Ukey: %U", format_white_space, indent, format_vl_api_hmac_key_t, &a->key, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_add_del_local_eid_reply_t_print (vl_api_lisp_add_del_local_eid_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_local_eid_reply_t: */
    s = format(s, "vl_api_lisp_add_del_local_eid_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_add_del_map_server_t_print (vl_api_lisp_add_del_map_server_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_map_server_t: */
    s = format(s, "vl_api_lisp_add_del_map_server_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_add_del_map_server_reply_t_print (vl_api_lisp_add_del_map_server_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_map_server_reply_t: */
    s = format(s, "vl_api_lisp_add_del_map_server_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_add_del_map_resolver_t_print (vl_api_lisp_add_del_map_resolver_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_map_resolver_t: */
    s = format(s, "vl_api_lisp_add_del_map_resolver_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_add_del_map_resolver_reply_t_print (vl_api_lisp_add_del_map_resolver_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_map_resolver_reply_t: */
    s = format(s, "vl_api_lisp_add_del_map_resolver_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_enable_disable_t_print (vl_api_lisp_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_enable_disable_t: */
    s = format(s, "vl_api_lisp_enable_disable_t:");
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_enable_disable_reply_t_print (vl_api_lisp_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_enable_disable_reply_t: */
    s = format(s, "vl_api_lisp_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_pitr_set_locator_set_t_print (vl_api_lisp_pitr_set_locator_set_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_pitr_set_locator_set_t: */
    s = format(s, "vl_api_lisp_pitr_set_locator_set_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uls_name: %s", format_white_space, indent, a->ls_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_pitr_set_locator_set_reply_t_print (vl_api_lisp_pitr_set_locator_set_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_pitr_set_locator_set_reply_t: */
    s = format(s, "vl_api_lisp_pitr_set_locator_set_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_use_petr_t_print (vl_api_lisp_use_petr_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_use_petr_t: */
    s = format(s, "vl_api_lisp_use_petr_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_use_petr_reply_t_print (vl_api_lisp_use_petr_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_use_petr_reply_t: */
    s = format(s, "vl_api_lisp_use_petr_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_lisp_use_petr_t_print (vl_api_show_lisp_use_petr_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_lisp_use_petr_t: */
    s = format(s, "vl_api_show_lisp_use_petr_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_lisp_use_petr_reply_t_print (vl_api_show_lisp_use_petr_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_lisp_use_petr_reply_t: */
    s = format(s, "vl_api_show_lisp_use_petr_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_petr_enable: %u", format_white_space, indent, a->is_petr_enable);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_lisp_rloc_probe_state_t_print (vl_api_show_lisp_rloc_probe_state_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_lisp_rloc_probe_state_t: */
    s = format(s, "vl_api_show_lisp_rloc_probe_state_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_lisp_rloc_probe_state_reply_t_print (vl_api_show_lisp_rloc_probe_state_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_lisp_rloc_probe_state_reply_t: */
    s = format(s, "vl_api_show_lisp_rloc_probe_state_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_enabled: %u", format_white_space, indent, a->is_enabled);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_rloc_probe_enable_disable_t_print (vl_api_lisp_rloc_probe_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_rloc_probe_enable_disable_t: */
    s = format(s, "vl_api_lisp_rloc_probe_enable_disable_t:");
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_rloc_probe_enable_disable_reply_t_print (vl_api_lisp_rloc_probe_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_rloc_probe_enable_disable_reply_t: */
    s = format(s, "vl_api_lisp_rloc_probe_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_map_register_enable_disable_t_print (vl_api_lisp_map_register_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_map_register_enable_disable_t: */
    s = format(s, "vl_api_lisp_map_register_enable_disable_t:");
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_map_register_enable_disable_reply_t_print (vl_api_lisp_map_register_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_map_register_enable_disable_reply_t: */
    s = format(s, "vl_api_lisp_map_register_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_lisp_map_register_state_t_print (vl_api_show_lisp_map_register_state_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_lisp_map_register_state_t: */
    s = format(s, "vl_api_show_lisp_map_register_state_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_lisp_map_register_state_reply_t_print (vl_api_show_lisp_map_register_state_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_lisp_map_register_state_reply_t: */
    s = format(s, "vl_api_show_lisp_map_register_state_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_enabled: %u", format_white_space, indent, a->is_enabled);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_map_request_mode_t_print (vl_api_lisp_map_request_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_map_request_mode_t: */
    s = format(s, "vl_api_lisp_map_request_mode_t:");
    s = format(s, "\n%Uis_src_dst: %u", format_white_space, indent, a->is_src_dst);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_map_request_mode_reply_t_print (vl_api_lisp_map_request_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_map_request_mode_reply_t: */
    s = format(s, "vl_api_lisp_map_request_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_lisp_map_request_mode_t_print (vl_api_show_lisp_map_request_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_lisp_map_request_mode_t: */
    s = format(s, "vl_api_show_lisp_map_request_mode_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_lisp_map_request_mode_reply_t_print (vl_api_show_lisp_map_request_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_lisp_map_request_mode_reply_t: */
    s = format(s, "vl_api_show_lisp_map_request_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_src_dst: %u", format_white_space, indent, a->is_src_dst);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_lisp_add_del_remote_mapping_t_print  *****/

static inline void *vl_api_lisp_add_del_remote_mapping_reply_t_print (vl_api_lisp_add_del_remote_mapping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_remote_mapping_reply_t: */
    s = format(s, "vl_api_lisp_add_del_remote_mapping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_add_del_adjacency_t_print (vl_api_lisp_add_del_adjacency_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_adjacency_t: */
    s = format(s, "vl_api_lisp_add_del_adjacency_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Ureid: %U", format_white_space, indent, format_vl_api_eid_t, &a->reid, indent);
    s = format(s, "\n%Uleid: %U", format_white_space, indent, format_vl_api_eid_t, &a->leid, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_add_del_adjacency_reply_t_print (vl_api_lisp_add_del_adjacency_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_adjacency_reply_t: */
    s = format(s, "vl_api_lisp_add_del_adjacency_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_add_del_map_request_itr_rlocs_t_print (vl_api_lisp_add_del_map_request_itr_rlocs_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_map_request_itr_rlocs_t: */
    s = format(s, "vl_api_lisp_add_del_map_request_itr_rlocs_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Ulocator_set_name: %s", format_white_space, indent, a->locator_set_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_add_del_map_request_itr_rlocs_reply_t_print (vl_api_lisp_add_del_map_request_itr_rlocs_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_add_del_map_request_itr_rlocs_reply_t: */
    s = format(s, "vl_api_lisp_add_del_map_request_itr_rlocs_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_eid_table_add_del_map_t_print (vl_api_lisp_eid_table_add_del_map_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_eid_table_add_del_map_t: */
    s = format(s, "vl_api_lisp_eid_table_add_del_map_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Udp_table: %u", format_white_space, indent, a->dp_table);
    s = format(s, "\n%Uis_l2: %u", format_white_space, indent, a->is_l2);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_eid_table_add_del_map_reply_t_print (vl_api_lisp_eid_table_add_del_map_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_eid_table_add_del_map_reply_t: */
    s = format(s, "vl_api_lisp_eid_table_add_del_map_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_locator_dump_t_print (vl_api_lisp_locator_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_locator_dump_t: */
    s = format(s, "vl_api_lisp_locator_dump_t:");
    s = format(s, "\n%Uls_index: %u", format_white_space, indent, a->ls_index);
    s = format(s, "\n%Uls_name: %s", format_white_space, indent, a->ls_name);
    s = format(s, "\n%Uis_index_set: %u", format_white_space, indent, a->is_index_set);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_locator_details_t_print (vl_api_lisp_locator_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_locator_details_t: */
    s = format(s, "vl_api_lisp_locator_details_t:");
    s = format(s, "\n%Ulocal: %u", format_white_space, indent, a->local);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    s = format(s, "\n%Upriority: %u", format_white_space, indent, a->priority);
    s = format(s, "\n%Uweight: %u", format_white_space, indent, a->weight);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_locator_set_details_t_print (vl_api_lisp_locator_set_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_locator_set_details_t: */
    s = format(s, "vl_api_lisp_locator_set_details_t:");
    s = format(s, "\n%Uls_index: %u", format_white_space, indent, a->ls_index);
    s = format(s, "\n%Uls_name: %s", format_white_space, indent, a->ls_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_locator_set_dump_t_print (vl_api_lisp_locator_set_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_locator_set_dump_t: */
    s = format(s, "vl_api_lisp_locator_set_dump_t:");
    s = format(s, "\n%Ufilter: %U", format_white_space, indent, format_vl_api_lisp_locator_set_filter_t, &a->filter, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_eid_table_details_t_print (vl_api_lisp_eid_table_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_eid_table_details_t: */
    s = format(s, "vl_api_lisp_eid_table_details_t:");
    s = format(s, "\n%Ulocator_set_index: %u", format_white_space, indent, a->locator_set_index);
    s = format(s, "\n%Uaction: %u", format_white_space, indent, a->action);
    s = format(s, "\n%Uis_local: %u", format_white_space, indent, a->is_local);
    s = format(s, "\n%Uis_src_dst: %u", format_white_space, indent, a->is_src_dst);
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Udeid: %U", format_white_space, indent, format_vl_api_eid_t, &a->deid, indent);
    s = format(s, "\n%Useid: %U", format_white_space, indent, format_vl_api_eid_t, &a->seid, indent);
    s = format(s, "\n%Uttl: %u", format_white_space, indent, a->ttl);
    s = format(s, "\n%Uauthoritative: %u", format_white_space, indent, a->authoritative);
    s = format(s, "\n%Ukey: %U", format_white_space, indent, format_vl_api_hmac_key_t, &a->key, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_eid_table_dump_t_print (vl_api_lisp_eid_table_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_eid_table_dump_t: */
    s = format(s, "vl_api_lisp_eid_table_dump_t:");
    s = format(s, "\n%Ueid_set: %u", format_white_space, indent, a->eid_set);
    s = format(s, "\n%Uprefix_length: %u", format_white_space, indent, a->prefix_length);
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Ueid: %U", format_white_space, indent, format_vl_api_eid_t, &a->eid, indent);
    s = format(s, "\n%Ufilter: %U", format_white_space, indent, format_vl_api_lisp_locator_set_filter_t, &a->filter, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_lisp_adjacencies_get_reply_t_print  *****/

static inline void *vl_api_lisp_adjacencies_get_t_print (vl_api_lisp_adjacencies_get_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_adjacencies_get_t: */
    s = format(s, "vl_api_lisp_adjacencies_get_t:");
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_eid_table_map_details_t_print (vl_api_lisp_eid_table_map_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_eid_table_map_details_t: */
    s = format(s, "vl_api_lisp_eid_table_map_details_t:");
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Udp_table: %u", format_white_space, indent, a->dp_table);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_eid_table_map_dump_t_print (vl_api_lisp_eid_table_map_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_eid_table_map_dump_t: */
    s = format(s, "vl_api_lisp_eid_table_map_dump_t:");
    s = format(s, "\n%Uis_l2: %u", format_white_space, indent, a->is_l2);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_eid_table_vni_dump_t_print (vl_api_lisp_eid_table_vni_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_eid_table_vni_dump_t: */
    s = format(s, "vl_api_lisp_eid_table_vni_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_eid_table_vni_details_t_print (vl_api_lisp_eid_table_vni_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_eid_table_vni_details_t: */
    s = format(s, "vl_api_lisp_eid_table_vni_details_t:");
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_map_resolver_details_t_print (vl_api_lisp_map_resolver_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_map_resolver_details_t: */
    s = format(s, "vl_api_lisp_map_resolver_details_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_map_resolver_dump_t_print (vl_api_lisp_map_resolver_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_map_resolver_dump_t: */
    s = format(s, "vl_api_lisp_map_resolver_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_map_server_details_t_print (vl_api_lisp_map_server_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_map_server_details_t: */
    s = format(s, "vl_api_lisp_map_server_details_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_map_server_dump_t_print (vl_api_lisp_map_server_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_map_server_dump_t: */
    s = format(s, "vl_api_lisp_map_server_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_lisp_status_t_print (vl_api_show_lisp_status_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_lisp_status_t: */
    s = format(s, "vl_api_show_lisp_status_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_lisp_status_reply_t_print (vl_api_show_lisp_status_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_lisp_status_reply_t: */
    s = format(s, "vl_api_show_lisp_status_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_lisp_enabled: %u", format_white_space, indent, a->is_lisp_enabled);
    s = format(s, "\n%Uis_gpe_enabled: %u", format_white_space, indent, a->is_gpe_enabled);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_get_map_request_itr_rlocs_t_print (vl_api_lisp_get_map_request_itr_rlocs_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_get_map_request_itr_rlocs_t: */
    s = format(s, "vl_api_lisp_get_map_request_itr_rlocs_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lisp_get_map_request_itr_rlocs_reply_t_print (vl_api_lisp_get_map_request_itr_rlocs_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lisp_get_map_request_itr_rlocs_reply_t: */
    s = format(s, "vl_api_lisp_get_map_request_itr_rlocs_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ulocator_set_name: %s", format_white_space, indent, a->locator_set_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_lisp_pitr_t_print (vl_api_show_lisp_pitr_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_lisp_pitr_t: */
    s = format(s, "vl_api_show_lisp_pitr_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_lisp_pitr_reply_t_print (vl_api_show_lisp_pitr_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_lisp_pitr_reply_t: */
    s = format(s, "vl_api_show_lisp_pitr_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_enabled: %u", format_white_space, indent, a->is_enabled);
    s = format(s, "\n%Ulocator_set_name: %s", format_white_space, indent, a->locator_set_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_lisp_endianfun
#define included_lisp_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_lisp_locator_set_filter_t_endian (vl_api_lisp_locator_set_filter_t *a)
{
    int i __attribute__((unused));
    /* a->lisp_locator_set_filter = a->lisp_locator_set_filter (no-op) */
}

static inline void vl_api_lisp_adjacency_t_endian (vl_api_lisp_adjacency_t *a)
{
    int i __attribute__((unused));
    vl_api_eid_t_endian(&a->reid);
    vl_api_eid_t_endian(&a->leid);
}

/***** manual: vl_api_lisp_add_del_locator_set_t_endian  *****/

static inline void vl_api_lisp_add_del_locator_set_reply_t_endian (vl_api_lisp_add_del_locator_set_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->ls_index = clib_net_to_host_u32(a->ls_index);
}

static inline void vl_api_lisp_add_del_locator_t_endian (vl_api_lisp_add_del_locator_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->locator_set_name = a->locator_set_name (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->priority = a->priority (no-op) */
    /* a->weight = a->weight (no-op) */
}

static inline void vl_api_lisp_add_del_locator_reply_t_endian (vl_api_lisp_add_del_locator_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lisp_add_del_local_eid_t_endian (vl_api_lisp_add_del_local_eid_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_eid_t_endian(&a->eid);
    /* a->locator_set_name = a->locator_set_name (no-op) */
    a->vni = clib_net_to_host_u32(a->vni);
    vl_api_hmac_key_t_endian(&a->key);
}

static inline void vl_api_lisp_add_del_local_eid_reply_t_endian (vl_api_lisp_add_del_local_eid_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lisp_add_del_map_server_t_endian (vl_api_lisp_add_del_map_server_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_address_t_endian(&a->ip_address);
}

static inline void vl_api_lisp_add_del_map_server_reply_t_endian (vl_api_lisp_add_del_map_server_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lisp_add_del_map_resolver_t_endian (vl_api_lisp_add_del_map_resolver_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_address_t_endian(&a->ip_address);
}

static inline void vl_api_lisp_add_del_map_resolver_reply_t_endian (vl_api_lisp_add_del_map_resolver_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lisp_enable_disable_t_endian (vl_api_lisp_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_lisp_enable_disable_reply_t_endian (vl_api_lisp_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lisp_pitr_set_locator_set_t_endian (vl_api_lisp_pitr_set_locator_set_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->ls_name = a->ls_name (no-op) */
}

static inline void vl_api_lisp_pitr_set_locator_set_reply_t_endian (vl_api_lisp_pitr_set_locator_set_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lisp_use_petr_t_endian (vl_api_lisp_use_petr_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_t_endian(&a->ip_address);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_lisp_use_petr_reply_t_endian (vl_api_lisp_use_petr_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_show_lisp_use_petr_t_endian (vl_api_show_lisp_use_petr_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_lisp_use_petr_reply_t_endian (vl_api_show_lisp_use_petr_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_petr_enable = a->is_petr_enable (no-op) */
    vl_api_address_t_endian(&a->ip_address);
}

static inline void vl_api_show_lisp_rloc_probe_state_t_endian (vl_api_show_lisp_rloc_probe_state_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_lisp_rloc_probe_state_reply_t_endian (vl_api_show_lisp_rloc_probe_state_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_enabled = a->is_enabled (no-op) */
}

static inline void vl_api_lisp_rloc_probe_enable_disable_t_endian (vl_api_lisp_rloc_probe_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_lisp_rloc_probe_enable_disable_reply_t_endian (vl_api_lisp_rloc_probe_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lisp_map_register_enable_disable_t_endian (vl_api_lisp_map_register_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_lisp_map_register_enable_disable_reply_t_endian (vl_api_lisp_map_register_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_show_lisp_map_register_state_t_endian (vl_api_show_lisp_map_register_state_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_lisp_map_register_state_reply_t_endian (vl_api_show_lisp_map_register_state_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_enabled = a->is_enabled (no-op) */
}

static inline void vl_api_lisp_map_request_mode_t_endian (vl_api_lisp_map_request_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_src_dst = a->is_src_dst (no-op) */
}

static inline void vl_api_lisp_map_request_mode_reply_t_endian (vl_api_lisp_map_request_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_show_lisp_map_request_mode_t_endian (vl_api_show_lisp_map_request_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_lisp_map_request_mode_reply_t_endian (vl_api_show_lisp_map_request_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_src_dst = a->is_src_dst (no-op) */
}

/***** manual: vl_api_lisp_add_del_remote_mapping_t_endian  *****/

static inline void vl_api_lisp_add_del_remote_mapping_reply_t_endian (vl_api_lisp_add_del_remote_mapping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lisp_add_del_adjacency_t_endian (vl_api_lisp_add_del_adjacency_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->vni = clib_net_to_host_u32(a->vni);
    vl_api_eid_t_endian(&a->reid);
    vl_api_eid_t_endian(&a->leid);
}

static inline void vl_api_lisp_add_del_adjacency_reply_t_endian (vl_api_lisp_add_del_adjacency_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lisp_add_del_map_request_itr_rlocs_t_endian (vl_api_lisp_add_del_map_request_itr_rlocs_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->locator_set_name = a->locator_set_name (no-op) */
}

static inline void vl_api_lisp_add_del_map_request_itr_rlocs_reply_t_endian (vl_api_lisp_add_del_map_request_itr_rlocs_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lisp_eid_table_add_del_map_t_endian (vl_api_lisp_eid_table_add_del_map_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->vni = clib_net_to_host_u32(a->vni);
    a->dp_table = clib_net_to_host_u32(a->dp_table);
    /* a->is_l2 = a->is_l2 (no-op) */
}

static inline void vl_api_lisp_eid_table_add_del_map_reply_t_endian (vl_api_lisp_eid_table_add_del_map_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lisp_locator_dump_t_endian (vl_api_lisp_locator_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->ls_index = clib_net_to_host_u32(a->ls_index);
    /* a->ls_name = a->ls_name (no-op) */
    /* a->is_index_set = a->is_index_set (no-op) */
}

static inline void vl_api_lisp_locator_details_t_endian (vl_api_lisp_locator_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->local = a->local (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_address_t_endian(&a->ip_address);
    /* a->priority = a->priority (no-op) */
    /* a->weight = a->weight (no-op) */
}

static inline void vl_api_lisp_locator_set_details_t_endian (vl_api_lisp_locator_set_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->ls_index = clib_net_to_host_u32(a->ls_index);
    /* a->ls_name = a->ls_name (no-op) */
}

static inline void vl_api_lisp_locator_set_dump_t_endian (vl_api_lisp_locator_set_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_lisp_locator_set_filter_t_endian(&a->filter);
}

static inline void vl_api_lisp_eid_table_details_t_endian (vl_api_lisp_eid_table_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->locator_set_index = clib_net_to_host_u32(a->locator_set_index);
    /* a->action = a->action (no-op) */
    /* a->is_local = a->is_local (no-op) */
    /* a->is_src_dst = a->is_src_dst (no-op) */
    a->vni = clib_net_to_host_u32(a->vni);
    vl_api_eid_t_endian(&a->deid);
    vl_api_eid_t_endian(&a->seid);
    a->ttl = clib_net_to_host_u32(a->ttl);
    /* a->authoritative = a->authoritative (no-op) */
    vl_api_hmac_key_t_endian(&a->key);
}

static inline void vl_api_lisp_eid_table_dump_t_endian (vl_api_lisp_eid_table_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->eid_set = a->eid_set (no-op) */
    /* a->prefix_length = a->prefix_length (no-op) */
    a->vni = clib_net_to_host_u32(a->vni);
    vl_api_eid_t_endian(&a->eid);
    vl_api_lisp_locator_set_filter_t_endian(&a->filter);
}

/***** manual: vl_api_lisp_adjacencies_get_reply_t_endian  *****/

static inline void vl_api_lisp_adjacencies_get_t_endian (vl_api_lisp_adjacencies_get_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
}

static inline void vl_api_lisp_eid_table_map_details_t_endian (vl_api_lisp_eid_table_map_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
    a->dp_table = clib_net_to_host_u32(a->dp_table);
}

static inline void vl_api_lisp_eid_table_map_dump_t_endian (vl_api_lisp_eid_table_map_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_l2 = a->is_l2 (no-op) */
}

static inline void vl_api_lisp_eid_table_vni_dump_t_endian (vl_api_lisp_eid_table_vni_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_lisp_eid_table_vni_details_t_endian (vl_api_lisp_eid_table_vni_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
}

static inline void vl_api_lisp_map_resolver_details_t_endian (vl_api_lisp_map_resolver_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_t_endian(&a->ip_address);
}

static inline void vl_api_lisp_map_resolver_dump_t_endian (vl_api_lisp_map_resolver_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_lisp_map_server_details_t_endian (vl_api_lisp_map_server_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_t_endian(&a->ip_address);
}

static inline void vl_api_lisp_map_server_dump_t_endian (vl_api_lisp_map_server_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_lisp_status_t_endian (vl_api_show_lisp_status_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_lisp_status_reply_t_endian (vl_api_show_lisp_status_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_lisp_enabled = a->is_lisp_enabled (no-op) */
    /* a->is_gpe_enabled = a->is_gpe_enabled (no-op) */
}

static inline void vl_api_lisp_get_map_request_itr_rlocs_t_endian (vl_api_lisp_get_map_request_itr_rlocs_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_lisp_get_map_request_itr_rlocs_reply_t_endian (vl_api_lisp_get_map_request_itr_rlocs_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->locator_set_name = a->locator_set_name (no-op) */
}

static inline void vl_api_show_lisp_pitr_t_endian (vl_api_show_lisp_pitr_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_lisp_pitr_reply_t_endian (vl_api_show_lisp_pitr_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_enabled = a->is_enabled (no-op) */
    /* a->locator_set_name = a->locator_set_name (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(lisp.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(lisp.api, 0x2ec1dfcd)

#endif

