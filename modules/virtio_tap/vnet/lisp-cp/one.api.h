/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: one.api
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
#warning no content included from one.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/lisp-cp/lisp_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_ONE_ADD_DEL_LOCATOR_SET, vl_api_one_add_del_locator_set_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_LOCATOR_SET_REPLY, vl_api_one_add_del_locator_set_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_LOCATOR, vl_api_one_add_del_locator_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_LOCATOR_REPLY, vl_api_one_add_del_locator_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_LOCAL_EID, vl_api_one_add_del_local_eid_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_LOCAL_EID_REPLY, vl_api_one_add_del_local_eid_reply_t_handler)
vl_msg_id(VL_API_ONE_MAP_REGISTER_SET_TTL, vl_api_one_map_register_set_ttl_t_handler)
vl_msg_id(VL_API_ONE_MAP_REGISTER_SET_TTL_REPLY, vl_api_one_map_register_set_ttl_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REGISTER_TTL, vl_api_show_one_map_register_ttl_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REGISTER_TTL_REPLY, vl_api_show_one_map_register_ttl_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_MAP_SERVER, vl_api_one_add_del_map_server_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_MAP_SERVER_REPLY, vl_api_one_add_del_map_server_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_MAP_RESOLVER, vl_api_one_add_del_map_resolver_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_MAP_RESOLVER_REPLY, vl_api_one_add_del_map_resolver_reply_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE, vl_api_one_enable_disable_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_REPLY, vl_api_one_enable_disable_reply_t_handler)
vl_msg_id(VL_API_ONE_NSH_SET_LOCATOR_SET, vl_api_one_nsh_set_locator_set_t_handler)
vl_msg_id(VL_API_ONE_NSH_SET_LOCATOR_SET_REPLY, vl_api_one_nsh_set_locator_set_reply_t_handler)
vl_msg_id(VL_API_ONE_PITR_SET_LOCATOR_SET, vl_api_one_pitr_set_locator_set_t_handler)
vl_msg_id(VL_API_ONE_PITR_SET_LOCATOR_SET_REPLY, vl_api_one_pitr_set_locator_set_reply_t_handler)
vl_msg_id(VL_API_ONE_USE_PETR, vl_api_one_use_petr_t_handler)
vl_msg_id(VL_API_ONE_USE_PETR_REPLY, vl_api_one_use_petr_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_USE_PETR, vl_api_show_one_use_petr_t_handler)
vl_msg_id(VL_API_SHOW_ONE_USE_PETR_REPLY, vl_api_show_one_use_petr_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_RLOC_PROBE_STATE, vl_api_show_one_rloc_probe_state_t_handler)
vl_msg_id(VL_API_SHOW_ONE_RLOC_PROBE_STATE_REPLY, vl_api_show_one_rloc_probe_state_reply_t_handler)
vl_msg_id(VL_API_ONE_RLOC_PROBE_ENABLE_DISABLE, vl_api_one_rloc_probe_enable_disable_t_handler)
vl_msg_id(VL_API_ONE_RLOC_PROBE_ENABLE_DISABLE_REPLY, vl_api_one_rloc_probe_enable_disable_reply_t_handler)
vl_msg_id(VL_API_ONE_MAP_REGISTER_ENABLE_DISABLE, vl_api_one_map_register_enable_disable_t_handler)
vl_msg_id(VL_API_ONE_MAP_REGISTER_ENABLE_DISABLE_REPLY, vl_api_one_map_register_enable_disable_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REGISTER_STATE, vl_api_show_one_map_register_state_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REGISTER_STATE_REPLY, vl_api_show_one_map_register_state_reply_t_handler)
vl_msg_id(VL_API_ONE_MAP_REQUEST_MODE, vl_api_one_map_request_mode_t_handler)
vl_msg_id(VL_API_ONE_MAP_REQUEST_MODE_REPLY, vl_api_one_map_request_mode_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REQUEST_MODE, vl_api_show_one_map_request_mode_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REQUEST_MODE_REPLY, vl_api_show_one_map_request_mode_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_REMOTE_MAPPING, vl_api_one_add_del_remote_mapping_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_REMOTE_MAPPING_REPLY, vl_api_one_add_del_remote_mapping_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_L2_ARP_ENTRY, vl_api_one_add_del_l2_arp_entry_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_L2_ARP_ENTRY_REPLY, vl_api_one_add_del_l2_arp_entry_reply_t_handler)
vl_msg_id(VL_API_ONE_L2_ARP_ENTRIES_GET, vl_api_one_l2_arp_entries_get_t_handler)
vl_msg_id(VL_API_ONE_L2_ARP_ENTRIES_GET_REPLY, vl_api_one_l2_arp_entries_get_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_NDP_ENTRY, vl_api_one_add_del_ndp_entry_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_NDP_ENTRY_REPLY, vl_api_one_add_del_ndp_entry_reply_t_handler)
vl_msg_id(VL_API_ONE_NDP_ENTRIES_GET, vl_api_one_ndp_entries_get_t_handler)
vl_msg_id(VL_API_ONE_NDP_ENTRIES_GET_REPLY, vl_api_one_ndp_entries_get_reply_t_handler)
vl_msg_id(VL_API_ONE_SET_TRANSPORT_PROTOCOL, vl_api_one_set_transport_protocol_t_handler)
vl_msg_id(VL_API_ONE_SET_TRANSPORT_PROTOCOL_REPLY, vl_api_one_set_transport_protocol_reply_t_handler)
vl_msg_id(VL_API_ONE_GET_TRANSPORT_PROTOCOL, vl_api_one_get_transport_protocol_t_handler)
vl_msg_id(VL_API_ONE_GET_TRANSPORT_PROTOCOL_REPLY, vl_api_one_get_transport_protocol_reply_t_handler)
vl_msg_id(VL_API_ONE_NDP_BD_GET, vl_api_one_ndp_bd_get_t_handler)
vl_msg_id(VL_API_ONE_NDP_BD_GET_REPLY, vl_api_one_ndp_bd_get_reply_t_handler)
vl_msg_id(VL_API_ONE_L2_ARP_BD_GET, vl_api_one_l2_arp_bd_get_t_handler)
vl_msg_id(VL_API_ONE_L2_ARP_BD_GET_REPLY, vl_api_one_l2_arp_bd_get_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_ADJACENCY, vl_api_one_add_del_adjacency_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_ADJACENCY_REPLY, vl_api_one_add_del_adjacency_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_MAP_REQUEST_ITR_RLOCS, vl_api_one_add_del_map_request_itr_rlocs_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_MAP_REQUEST_ITR_RLOCS_REPLY, vl_api_one_add_del_map_request_itr_rlocs_reply_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_ADD_DEL_MAP, vl_api_one_eid_table_add_del_map_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_ADD_DEL_MAP_REPLY, vl_api_one_eid_table_add_del_map_reply_t_handler)
vl_msg_id(VL_API_ONE_LOCATOR_DUMP, vl_api_one_locator_dump_t_handler)
vl_msg_id(VL_API_ONE_LOCATOR_DETAILS, vl_api_one_locator_details_t_handler)
vl_msg_id(VL_API_ONE_LOCATOR_SET_DETAILS, vl_api_one_locator_set_details_t_handler)
vl_msg_id(VL_API_ONE_LOCATOR_SET_DUMP, vl_api_one_locator_set_dump_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_DETAILS, vl_api_one_eid_table_details_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_DUMP, vl_api_one_eid_table_dump_t_handler)
vl_msg_id(VL_API_ONE_ADJACENCIES_GET_REPLY, vl_api_one_adjacencies_get_reply_t_handler)
vl_msg_id(VL_API_ONE_ADJACENCIES_GET, vl_api_one_adjacencies_get_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_MAP_DETAILS, vl_api_one_eid_table_map_details_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_MAP_DUMP, vl_api_one_eid_table_map_dump_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_VNI_DUMP, vl_api_one_eid_table_vni_dump_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_VNI_DETAILS, vl_api_one_eid_table_vni_details_t_handler)
vl_msg_id(VL_API_ONE_MAP_RESOLVER_DETAILS, vl_api_one_map_resolver_details_t_handler)
vl_msg_id(VL_API_ONE_MAP_RESOLVER_DUMP, vl_api_one_map_resolver_dump_t_handler)
vl_msg_id(VL_API_ONE_MAP_SERVER_DETAILS, vl_api_one_map_server_details_t_handler)
vl_msg_id(VL_API_ONE_MAP_SERVER_DUMP, vl_api_one_map_server_dump_t_handler)
vl_msg_id(VL_API_SHOW_ONE_STATUS, vl_api_show_one_status_t_handler)
vl_msg_id(VL_API_SHOW_ONE_STATUS_REPLY, vl_api_show_one_status_reply_t_handler)
vl_msg_id(VL_API_ONE_GET_MAP_REQUEST_ITR_RLOCS, vl_api_one_get_map_request_itr_rlocs_t_handler)
vl_msg_id(VL_API_ONE_GET_MAP_REQUEST_ITR_RLOCS_REPLY, vl_api_one_get_map_request_itr_rlocs_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_NSH_MAPPING, vl_api_show_one_nsh_mapping_t_handler)
vl_msg_id(VL_API_SHOW_ONE_NSH_MAPPING_REPLY, vl_api_show_one_nsh_mapping_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_PITR, vl_api_show_one_pitr_t_handler)
vl_msg_id(VL_API_SHOW_ONE_PITR_REPLY, vl_api_show_one_pitr_reply_t_handler)
vl_msg_id(VL_API_ONE_STATS_DUMP, vl_api_one_stats_dump_t_handler)
vl_msg_id(VL_API_ONE_STATS_DETAILS, vl_api_one_stats_details_t_handler)
vl_msg_id(VL_API_ONE_STATS_FLUSH, vl_api_one_stats_flush_t_handler)
vl_msg_id(VL_API_ONE_STATS_FLUSH_REPLY, vl_api_one_stats_flush_reply_t_handler)
vl_msg_id(VL_API_ONE_STATS_ENABLE_DISABLE, vl_api_one_stats_enable_disable_t_handler)
vl_msg_id(VL_API_ONE_STATS_ENABLE_DISABLE_REPLY, vl_api_one_stats_enable_disable_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_STATS_ENABLE_DISABLE, vl_api_show_one_stats_enable_disable_t_handler)
vl_msg_id(VL_API_SHOW_ONE_STATS_ENABLE_DISABLE_REPLY, vl_api_show_one_stats_enable_disable_reply_t_handler)
vl_msg_id(VL_API_ONE_MAP_REGISTER_FALLBACK_THRESHOLD, vl_api_one_map_register_fallback_threshold_t_handler)
vl_msg_id(VL_API_ONE_MAP_REGISTER_FALLBACK_THRESHOLD_REPLY, vl_api_one_map_register_fallback_threshold_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REGISTER_FALLBACK_THRESHOLD, vl_api_show_one_map_register_fallback_threshold_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REGISTER_FALLBACK_THRESHOLD_REPLY, vl_api_show_one_map_register_fallback_threshold_reply_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_XTR_MODE, vl_api_one_enable_disable_xtr_mode_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_XTR_MODE_REPLY, vl_api_one_enable_disable_xtr_mode_reply_t_handler)
vl_msg_id(VL_API_ONE_SHOW_XTR_MODE, vl_api_one_show_xtr_mode_t_handler)
vl_msg_id(VL_API_ONE_SHOW_XTR_MODE_REPLY, vl_api_one_show_xtr_mode_reply_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_PETR_MODE, vl_api_one_enable_disable_petr_mode_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_PETR_MODE_REPLY, vl_api_one_enable_disable_petr_mode_reply_t_handler)
vl_msg_id(VL_API_ONE_SHOW_PETR_MODE, vl_api_one_show_petr_mode_t_handler)
vl_msg_id(VL_API_ONE_SHOW_PETR_MODE_REPLY, vl_api_one_show_petr_mode_reply_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_PITR_MODE, vl_api_one_enable_disable_pitr_mode_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_PITR_MODE_REPLY, vl_api_one_enable_disable_pitr_mode_reply_t_handler)
vl_msg_id(VL_API_ONE_SHOW_PITR_MODE, vl_api_one_show_pitr_mode_t_handler)
vl_msg_id(VL_API_ONE_SHOW_PITR_MODE_REPLY, vl_api_one_show_pitr_mode_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_one_add_del_locator_set_t, 1)
vl_msg_name(vl_api_one_add_del_locator_set_reply_t, 1)
vl_msg_name(vl_api_one_add_del_locator_t, 1)
vl_msg_name(vl_api_one_add_del_locator_reply_t, 1)
vl_msg_name(vl_api_one_add_del_local_eid_t, 1)
vl_msg_name(vl_api_one_add_del_local_eid_reply_t, 1)
vl_msg_name(vl_api_one_map_register_set_ttl_t, 1)
vl_msg_name(vl_api_one_map_register_set_ttl_reply_t, 1)
vl_msg_name(vl_api_show_one_map_register_ttl_t, 1)
vl_msg_name(vl_api_show_one_map_register_ttl_reply_t, 1)
vl_msg_name(vl_api_one_add_del_map_server_t, 1)
vl_msg_name(vl_api_one_add_del_map_server_reply_t, 1)
vl_msg_name(vl_api_one_add_del_map_resolver_t, 1)
vl_msg_name(vl_api_one_add_del_map_resolver_reply_t, 1)
vl_msg_name(vl_api_one_enable_disable_t, 1)
vl_msg_name(vl_api_one_enable_disable_reply_t, 1)
vl_msg_name(vl_api_one_nsh_set_locator_set_t, 1)
vl_msg_name(vl_api_one_nsh_set_locator_set_reply_t, 1)
vl_msg_name(vl_api_one_pitr_set_locator_set_t, 1)
vl_msg_name(vl_api_one_pitr_set_locator_set_reply_t, 1)
vl_msg_name(vl_api_one_use_petr_t, 1)
vl_msg_name(vl_api_one_use_petr_reply_t, 1)
vl_msg_name(vl_api_show_one_use_petr_t, 1)
vl_msg_name(vl_api_show_one_use_petr_reply_t, 1)
vl_msg_name(vl_api_show_one_rloc_probe_state_t, 1)
vl_msg_name(vl_api_show_one_rloc_probe_state_reply_t, 1)
vl_msg_name(vl_api_one_rloc_probe_enable_disable_t, 1)
vl_msg_name(vl_api_one_rloc_probe_enable_disable_reply_t, 1)
vl_msg_name(vl_api_one_map_register_enable_disable_t, 1)
vl_msg_name(vl_api_one_map_register_enable_disable_reply_t, 1)
vl_msg_name(vl_api_show_one_map_register_state_t, 1)
vl_msg_name(vl_api_show_one_map_register_state_reply_t, 1)
vl_msg_name(vl_api_one_map_request_mode_t, 1)
vl_msg_name(vl_api_one_map_request_mode_reply_t, 1)
vl_msg_name(vl_api_show_one_map_request_mode_t, 1)
vl_msg_name(vl_api_show_one_map_request_mode_reply_t, 1)
vl_msg_name(vl_api_one_add_del_remote_mapping_t, 1)
vl_msg_name(vl_api_one_add_del_remote_mapping_reply_t, 1)
vl_msg_name(vl_api_one_add_del_l2_arp_entry_t, 1)
vl_msg_name(vl_api_one_add_del_l2_arp_entry_reply_t, 1)
vl_msg_name(vl_api_one_l2_arp_entries_get_t, 1)
vl_msg_name(vl_api_one_l2_arp_entries_get_reply_t, 1)
vl_msg_name(vl_api_one_add_del_ndp_entry_t, 1)
vl_msg_name(vl_api_one_add_del_ndp_entry_reply_t, 1)
vl_msg_name(vl_api_one_ndp_entries_get_t, 1)
vl_msg_name(vl_api_one_ndp_entries_get_reply_t, 1)
vl_msg_name(vl_api_one_set_transport_protocol_t, 1)
vl_msg_name(vl_api_one_set_transport_protocol_reply_t, 1)
vl_msg_name(vl_api_one_get_transport_protocol_t, 1)
vl_msg_name(vl_api_one_get_transport_protocol_reply_t, 1)
vl_msg_name(vl_api_one_ndp_bd_get_t, 1)
vl_msg_name(vl_api_one_ndp_bd_get_reply_t, 1)
vl_msg_name(vl_api_one_l2_arp_bd_get_t, 1)
vl_msg_name(vl_api_one_l2_arp_bd_get_reply_t, 1)
vl_msg_name(vl_api_one_add_del_adjacency_t, 1)
vl_msg_name(vl_api_one_add_del_adjacency_reply_t, 1)
vl_msg_name(vl_api_one_add_del_map_request_itr_rlocs_t, 1)
vl_msg_name(vl_api_one_add_del_map_request_itr_rlocs_reply_t, 1)
vl_msg_name(vl_api_one_eid_table_add_del_map_t, 1)
vl_msg_name(vl_api_one_eid_table_add_del_map_reply_t, 1)
vl_msg_name(vl_api_one_locator_dump_t, 1)
vl_msg_name(vl_api_one_locator_details_t, 1)
vl_msg_name(vl_api_one_locator_set_details_t, 1)
vl_msg_name(vl_api_one_locator_set_dump_t, 1)
vl_msg_name(vl_api_one_eid_table_details_t, 1)
vl_msg_name(vl_api_one_eid_table_dump_t, 1)
vl_msg_name(vl_api_one_adjacencies_get_reply_t, 1)
vl_msg_name(vl_api_one_adjacencies_get_t, 1)
vl_msg_name(vl_api_one_eid_table_map_details_t, 1)
vl_msg_name(vl_api_one_eid_table_map_dump_t, 1)
vl_msg_name(vl_api_one_eid_table_vni_dump_t, 1)
vl_msg_name(vl_api_one_eid_table_vni_details_t, 1)
vl_msg_name(vl_api_one_map_resolver_details_t, 1)
vl_msg_name(vl_api_one_map_resolver_dump_t, 1)
vl_msg_name(vl_api_one_map_server_details_t, 1)
vl_msg_name(vl_api_one_map_server_dump_t, 1)
vl_msg_name(vl_api_show_one_status_t, 1)
vl_msg_name(vl_api_show_one_status_reply_t, 1)
vl_msg_name(vl_api_one_get_map_request_itr_rlocs_t, 1)
vl_msg_name(vl_api_one_get_map_request_itr_rlocs_reply_t, 1)
vl_msg_name(vl_api_show_one_nsh_mapping_t, 1)
vl_msg_name(vl_api_show_one_nsh_mapping_reply_t, 1)
vl_msg_name(vl_api_show_one_pitr_t, 1)
vl_msg_name(vl_api_show_one_pitr_reply_t, 1)
vl_msg_name(vl_api_one_stats_dump_t, 1)
vl_msg_name(vl_api_one_stats_details_t, 1)
vl_msg_name(vl_api_one_stats_flush_t, 1)
vl_msg_name(vl_api_one_stats_flush_reply_t, 1)
vl_msg_name(vl_api_one_stats_enable_disable_t, 1)
vl_msg_name(vl_api_one_stats_enable_disable_reply_t, 1)
vl_msg_name(vl_api_show_one_stats_enable_disable_t, 1)
vl_msg_name(vl_api_show_one_stats_enable_disable_reply_t, 1)
vl_msg_name(vl_api_one_map_register_fallback_threshold_t, 1)
vl_msg_name(vl_api_one_map_register_fallback_threshold_reply_t, 1)
vl_msg_name(vl_api_show_one_map_register_fallback_threshold_t, 1)
vl_msg_name(vl_api_show_one_map_register_fallback_threshold_reply_t, 1)
vl_msg_name(vl_api_one_enable_disable_xtr_mode_t, 1)
vl_msg_name(vl_api_one_enable_disable_xtr_mode_reply_t, 1)
vl_msg_name(vl_api_one_show_xtr_mode_t, 1)
vl_msg_name(vl_api_one_show_xtr_mode_reply_t, 1)
vl_msg_name(vl_api_one_enable_disable_petr_mode_t, 1)
vl_msg_name(vl_api_one_enable_disable_petr_mode_reply_t, 1)
vl_msg_name(vl_api_one_show_petr_mode_t, 1)
vl_msg_name(vl_api_one_show_petr_mode_reply_t, 1)
vl_msg_name(vl_api_one_enable_disable_pitr_mode_t, 1)
vl_msg_name(vl_api_one_enable_disable_pitr_mode_reply_t, 1)
vl_msg_name(vl_api_one_show_pitr_mode_t, 1)
vl_msg_name(vl_api_one_show_pitr_mode_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_one \
_(VL_API_ONE_ADD_DEL_LOCATOR_SET, one_add_del_locator_set, 6fcd6471) \
_(VL_API_ONE_ADD_DEL_LOCATOR_SET_REPLY, one_add_del_locator_set_reply, b6666db4) \
_(VL_API_ONE_ADD_DEL_LOCATOR, one_add_del_locator, af4d8f13) \
_(VL_API_ONE_ADD_DEL_LOCATOR_REPLY, one_add_del_locator_reply, e8d4e804) \
_(VL_API_ONE_ADD_DEL_LOCAL_EID, one_add_del_local_eid, 21f573bd) \
_(VL_API_ONE_ADD_DEL_LOCAL_EID_REPLY, one_add_del_local_eid_reply, e8d4e804) \
_(VL_API_ONE_MAP_REGISTER_SET_TTL, one_map_register_set_ttl, dd59f1f3) \
_(VL_API_ONE_MAP_REGISTER_SET_TTL_REPLY, one_map_register_set_ttl_reply, e8d4e804) \
_(VL_API_SHOW_ONE_MAP_REGISTER_TTL, show_one_map_register_ttl, 51077d14) \
_(VL_API_SHOW_ONE_MAP_REGISTER_TTL_REPLY, show_one_map_register_ttl_reply, fa83dd66) \
_(VL_API_ONE_ADD_DEL_MAP_SERVER, one_add_del_map_server, 6598ea7c) \
_(VL_API_ONE_ADD_DEL_MAP_SERVER_REPLY, one_add_del_map_server_reply, e8d4e804) \
_(VL_API_ONE_ADD_DEL_MAP_RESOLVER, one_add_del_map_resolver, 6598ea7c) \
_(VL_API_ONE_ADD_DEL_MAP_RESOLVER_REPLY, one_add_del_map_resolver_reply, e8d4e804) \
_(VL_API_ONE_ENABLE_DISABLE, one_enable_disable, c264d7bf) \
_(VL_API_ONE_ENABLE_DISABLE_REPLY, one_enable_disable_reply, e8d4e804) \
_(VL_API_ONE_NSH_SET_LOCATOR_SET, one_nsh_set_locator_set, 486e2b76) \
_(VL_API_ONE_NSH_SET_LOCATOR_SET_REPLY, one_nsh_set_locator_set_reply, e8d4e804) \
_(VL_API_ONE_PITR_SET_LOCATOR_SET, one_pitr_set_locator_set, 486e2b76) \
_(VL_API_ONE_PITR_SET_LOCATOR_SET_REPLY, one_pitr_set_locator_set_reply, e8d4e804) \
_(VL_API_ONE_USE_PETR, one_use_petr, 9e141831) \
_(VL_API_ONE_USE_PETR_REPLY, one_use_petr_reply, e8d4e804) \
_(VL_API_SHOW_ONE_USE_PETR, show_one_use_petr, 51077d14) \
_(VL_API_SHOW_ONE_USE_PETR_REPLY, show_one_use_petr_reply, 10e744a6) \
_(VL_API_SHOW_ONE_RLOC_PROBE_STATE, show_one_rloc_probe_state, 51077d14) \
_(VL_API_SHOW_ONE_RLOC_PROBE_STATE_REPLY, show_one_rloc_probe_state_reply, f15abb16) \
_(VL_API_ONE_RLOC_PROBE_ENABLE_DISABLE, one_rloc_probe_enable_disable, c264d7bf) \
_(VL_API_ONE_RLOC_PROBE_ENABLE_DISABLE_REPLY, one_rloc_probe_enable_disable_reply, e8d4e804) \
_(VL_API_ONE_MAP_REGISTER_ENABLE_DISABLE, one_map_register_enable_disable, c264d7bf) \
_(VL_API_ONE_MAP_REGISTER_ENABLE_DISABLE_REPLY, one_map_register_enable_disable_reply, e8d4e804) \
_(VL_API_SHOW_ONE_MAP_REGISTER_STATE, show_one_map_register_state, 51077d14) \
_(VL_API_SHOW_ONE_MAP_REGISTER_STATE_REPLY, show_one_map_register_state_reply, f15abb16) \
_(VL_API_ONE_MAP_REQUEST_MODE, one_map_request_mode, ffa5d2f5) \
_(VL_API_ONE_MAP_REQUEST_MODE_REPLY, one_map_request_mode_reply, e8d4e804) \
_(VL_API_SHOW_ONE_MAP_REQUEST_MODE, show_one_map_request_mode, 51077d14) \
_(VL_API_SHOW_ONE_MAP_REQUEST_MODE_REPLY, show_one_map_request_mode_reply, d41f3c1d) \
_(VL_API_ONE_ADD_DEL_REMOTE_MAPPING, one_add_del_remote_mapping, fae8ed77) \
_(VL_API_ONE_ADD_DEL_REMOTE_MAPPING_REPLY, one_add_del_remote_mapping_reply, e8d4e804) \
_(VL_API_ONE_ADD_DEL_L2_ARP_ENTRY, one_add_del_l2_arp_entry, 33209078) \
_(VL_API_ONE_ADD_DEL_L2_ARP_ENTRY_REPLY, one_add_del_l2_arp_entry_reply, e8d4e804) \
_(VL_API_ONE_L2_ARP_ENTRIES_GET, one_l2_arp_entries_get, 4d418cf4) \
_(VL_API_ONE_L2_ARP_ENTRIES_GET_REPLY, one_l2_arp_entries_get_reply, b0a47bbe) \
_(VL_API_ONE_ADD_DEL_NDP_ENTRY, one_add_del_ndp_entry, d1629a2f) \
_(VL_API_ONE_ADD_DEL_NDP_ENTRY_REPLY, one_add_del_ndp_entry_reply, e8d4e804) \
_(VL_API_ONE_NDP_ENTRIES_GET, one_ndp_entries_get, 4d418cf4) \
_(VL_API_ONE_NDP_ENTRIES_GET_REPLY, one_ndp_entries_get_reply, 0bd34161) \
_(VL_API_ONE_SET_TRANSPORT_PROTOCOL, one_set_transport_protocol, 07b6b85f) \
_(VL_API_ONE_SET_TRANSPORT_PROTOCOL_REPLY, one_set_transport_protocol_reply, e8d4e804) \
_(VL_API_ONE_GET_TRANSPORT_PROTOCOL, one_get_transport_protocol, 51077d14) \
_(VL_API_ONE_GET_TRANSPORT_PROTOCOL_REPLY, one_get_transport_protocol_reply, 62a28eb3) \
_(VL_API_ONE_NDP_BD_GET, one_ndp_bd_get, 51077d14) \
_(VL_API_ONE_NDP_BD_GET_REPLY, one_ndp_bd_get_reply, 221ac888) \
_(VL_API_ONE_L2_ARP_BD_GET, one_l2_arp_bd_get, 51077d14) \
_(VL_API_ONE_L2_ARP_BD_GET_REPLY, one_l2_arp_bd_get_reply, 221ac888) \
_(VL_API_ONE_ADD_DEL_ADJACENCY, one_add_del_adjacency, e48e7afe) \
_(VL_API_ONE_ADD_DEL_ADJACENCY_REPLY, one_add_del_adjacency_reply, e8d4e804) \
_(VL_API_ONE_ADD_DEL_MAP_REQUEST_ITR_RLOCS, one_add_del_map_request_itr_rlocs, 6be88e45) \
_(VL_API_ONE_ADD_DEL_MAP_REQUEST_ITR_RLOCS_REPLY, one_add_del_map_request_itr_rlocs_reply, e8d4e804) \
_(VL_API_ONE_EID_TABLE_ADD_DEL_MAP, one_eid_table_add_del_map, 9481416b) \
_(VL_API_ONE_EID_TABLE_ADD_DEL_MAP_REPLY, one_eid_table_add_del_map_reply, e8d4e804) \
_(VL_API_ONE_LOCATOR_DUMP, one_locator_dump, 9b11076c) \
_(VL_API_ONE_LOCATOR_DETAILS, one_locator_details, c0c4c2a7) \
_(VL_API_ONE_LOCATOR_SET_DETAILS, one_locator_set_details, 5b33a105) \
_(VL_API_ONE_LOCATOR_SET_DUMP, one_locator_set_dump, 71190768) \
_(VL_API_ONE_EID_TABLE_DETAILS, one_eid_table_details, 4bc32e3a) \
_(VL_API_ONE_EID_TABLE_DUMP, one_eid_table_dump, 95151038) \
_(VL_API_ONE_ADJACENCIES_GET_REPLY, one_adjacencies_get_reply, a8ed89a5) \
_(VL_API_ONE_ADJACENCIES_GET, one_adjacencies_get, 8d1f2fe9) \
_(VL_API_ONE_EID_TABLE_MAP_DETAILS, one_eid_table_map_details, 0b6859e2) \
_(VL_API_ONE_EID_TABLE_MAP_DUMP, one_eid_table_map_dump, d6cf0c3d) \
_(VL_API_ONE_EID_TABLE_VNI_DUMP, one_eid_table_vni_dump, 51077d14) \
_(VL_API_ONE_EID_TABLE_VNI_DETAILS, one_eid_table_vni_details, 64abc01e) \
_(VL_API_ONE_MAP_RESOLVER_DETAILS, one_map_resolver_details, 82a09deb) \
_(VL_API_ONE_MAP_RESOLVER_DUMP, one_map_resolver_dump, 51077d14) \
_(VL_API_ONE_MAP_SERVER_DETAILS, one_map_server_details, 82a09deb) \
_(VL_API_ONE_MAP_SERVER_DUMP, one_map_server_dump, 51077d14) \
_(VL_API_SHOW_ONE_STATUS, show_one_status, 51077d14) \
_(VL_API_SHOW_ONE_STATUS_REPLY, show_one_status_reply, 961bb25b) \
_(VL_API_ONE_GET_MAP_REQUEST_ITR_RLOCS, one_get_map_request_itr_rlocs, 51077d14) \
_(VL_API_ONE_GET_MAP_REQUEST_ITR_RLOCS_REPLY, one_get_map_request_itr_rlocs_reply, 76580f3a) \
_(VL_API_SHOW_ONE_NSH_MAPPING, show_one_nsh_mapping, 51077d14) \
_(VL_API_SHOW_ONE_NSH_MAPPING_REPLY, show_one_nsh_mapping_reply, 46478c02) \
_(VL_API_SHOW_ONE_PITR, show_one_pitr, 51077d14) \
_(VL_API_SHOW_ONE_PITR_REPLY, show_one_pitr_reply, a2d1a49f) \
_(VL_API_ONE_STATS_DUMP, one_stats_dump, 51077d14) \
_(VL_API_ONE_STATS_DETAILS, one_stats_details, ff6ef238) \
_(VL_API_ONE_STATS_FLUSH, one_stats_flush, 51077d14) \
_(VL_API_ONE_STATS_FLUSH_REPLY, one_stats_flush_reply, e8d4e804) \
_(VL_API_ONE_STATS_ENABLE_DISABLE, one_stats_enable_disable, c264d7bf) \
_(VL_API_ONE_STATS_ENABLE_DISABLE_REPLY, one_stats_enable_disable_reply, e8d4e804) \
_(VL_API_SHOW_ONE_STATS_ENABLE_DISABLE, show_one_stats_enable_disable, 51077d14) \
_(VL_API_SHOW_ONE_STATS_ENABLE_DISABLE_REPLY, show_one_stats_enable_disable_reply, f15abb16) \
_(VL_API_ONE_MAP_REGISTER_FALLBACK_THRESHOLD, one_map_register_fallback_threshold, f7d4a475) \
_(VL_API_ONE_MAP_REGISTER_FALLBACK_THRESHOLD_REPLY, one_map_register_fallback_threshold_reply, e8d4e804) \
_(VL_API_SHOW_ONE_MAP_REGISTER_FALLBACK_THRESHOLD, show_one_map_register_fallback_threshold, 51077d14) \
_(VL_API_SHOW_ONE_MAP_REGISTER_FALLBACK_THRESHOLD_REPLY, show_one_map_register_fallback_threshold_reply, c93a9113) \
_(VL_API_ONE_ENABLE_DISABLE_XTR_MODE, one_enable_disable_xtr_mode, c264d7bf) \
_(VL_API_ONE_ENABLE_DISABLE_XTR_MODE_REPLY, one_enable_disable_xtr_mode_reply, e8d4e804) \
_(VL_API_ONE_SHOW_XTR_MODE, one_show_xtr_mode, 51077d14) \
_(VL_API_ONE_SHOW_XTR_MODE_REPLY, one_show_xtr_mode_reply, f15abb16) \
_(VL_API_ONE_ENABLE_DISABLE_PETR_MODE, one_enable_disable_petr_mode, c264d7bf) \
_(VL_API_ONE_ENABLE_DISABLE_PETR_MODE_REPLY, one_enable_disable_petr_mode_reply, e8d4e804) \
_(VL_API_ONE_SHOW_PETR_MODE, one_show_petr_mode, 51077d14) \
_(VL_API_ONE_SHOW_PETR_MODE_REPLY, one_show_petr_mode_reply, f15abb16) \
_(VL_API_ONE_ENABLE_DISABLE_PITR_MODE, one_enable_disable_pitr_mode, c264d7bf) \
_(VL_API_ONE_ENABLE_DISABLE_PITR_MODE_REPLY, one_enable_disable_pitr_mode_reply, e8d4e804) \
_(VL_API_ONE_SHOW_PITR_MODE, one_show_pitr_mode, 51077d14) \
_(VL_API_ONE_SHOW_PITR_MODE_REPLY, one_show_pitr_mode_reply, f15abb16) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "one.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_one_printfun_types
#define included_one_printfun_types

static inline u8 *format_vl_api_one_map_mode_t (u8 *s, va_list * args)
{
    vl_api_one_map_mode_t *a = va_arg (*args, vl_api_one_map_mode_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "ONE_MAP_MODE_API_DST_ONLY");
    case 1:
        return format(s, "ONE_MAP_MODE_API_SRC_DST");
    }
    return s;
}

static inline u8 *format_vl_api_one_l2_arp_entry_t (u8 *s, va_list * args)
{
    vl_api_one_l2_arp_entry_t *a = va_arg (*args, vl_api_one_l2_arp_entry_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Umac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac, indent);
    s = format(s, "\n%Uip4: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip4, indent);
    return s;
}

static inline u8 *format_vl_api_one_ndp_entry_t (u8 *s, va_list * args)
{
    vl_api_one_ndp_entry_t *a = va_arg (*args, vl_api_one_ndp_entry_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Umac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac, indent);
    s = format(s, "\n%Uip6: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->ip6, indent);
    return s;
}

static inline u8 *format_vl_api_one_filter_t (u8 *s, va_list * args)
{
    vl_api_one_filter_t *a = va_arg (*args, vl_api_one_filter_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "ONE_FILTER_API_ALL");
    case 1:
        return format(s, "ONE_FILTER_API_LOCAL");
    case 2:
        return format(s, "ONE_FILTER_API_REMOTE");
    }
    return s;
}

static inline u8 *format_vl_api_one_adjacency_t (u8 *s, va_list * args)
{
    vl_api_one_adjacency_t *a = va_arg (*args, vl_api_one_adjacency_t *);
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
#ifndef included_one_printfun
#define included_one_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

/***** manual: vl_api_one_add_del_locator_set_t_print  *****/

static inline void *vl_api_one_add_del_locator_set_reply_t_print (vl_api_one_add_del_locator_set_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_locator_set_reply_t: */
    s = format(s, "vl_api_one_add_del_locator_set_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uls_index: %u", format_white_space, indent, a->ls_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_add_del_locator_t_print (vl_api_one_add_del_locator_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_locator_t: */
    s = format(s, "vl_api_one_add_del_locator_t:");
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

static inline void *vl_api_one_add_del_locator_reply_t_print (vl_api_one_add_del_locator_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_locator_reply_t: */
    s = format(s, "vl_api_one_add_del_locator_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_add_del_local_eid_t_print (vl_api_one_add_del_local_eid_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_local_eid_t: */
    s = format(s, "vl_api_one_add_del_local_eid_t:");
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

static inline void *vl_api_one_add_del_local_eid_reply_t_print (vl_api_one_add_del_local_eid_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_local_eid_reply_t: */
    s = format(s, "vl_api_one_add_del_local_eid_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_map_register_set_ttl_t_print (vl_api_one_map_register_set_ttl_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_map_register_set_ttl_t: */
    s = format(s, "vl_api_one_map_register_set_ttl_t:");
    s = format(s, "\n%Uttl: %u", format_white_space, indent, a->ttl);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_map_register_set_ttl_reply_t_print (vl_api_one_map_register_set_ttl_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_map_register_set_ttl_reply_t: */
    s = format(s, "vl_api_one_map_register_set_ttl_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_map_register_ttl_t_print (vl_api_show_one_map_register_ttl_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_map_register_ttl_t: */
    s = format(s, "vl_api_show_one_map_register_ttl_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_map_register_ttl_reply_t_print (vl_api_show_one_map_register_ttl_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_map_register_ttl_reply_t: */
    s = format(s, "vl_api_show_one_map_register_ttl_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uttl: %u", format_white_space, indent, a->ttl);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_add_del_map_server_t_print (vl_api_one_add_del_map_server_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_map_server_t: */
    s = format(s, "vl_api_one_add_del_map_server_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_add_del_map_server_reply_t_print (vl_api_one_add_del_map_server_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_map_server_reply_t: */
    s = format(s, "vl_api_one_add_del_map_server_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_add_del_map_resolver_t_print (vl_api_one_add_del_map_resolver_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_map_resolver_t: */
    s = format(s, "vl_api_one_add_del_map_resolver_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_add_del_map_resolver_reply_t_print (vl_api_one_add_del_map_resolver_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_map_resolver_reply_t: */
    s = format(s, "vl_api_one_add_del_map_resolver_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_enable_disable_t_print (vl_api_one_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_enable_disable_t: */
    s = format(s, "vl_api_one_enable_disable_t:");
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_enable_disable_reply_t_print (vl_api_one_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_enable_disable_reply_t: */
    s = format(s, "vl_api_one_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_nsh_set_locator_set_t_print (vl_api_one_nsh_set_locator_set_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_nsh_set_locator_set_t: */
    s = format(s, "vl_api_one_nsh_set_locator_set_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uls_name: %s", format_white_space, indent, a->ls_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_nsh_set_locator_set_reply_t_print (vl_api_one_nsh_set_locator_set_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_nsh_set_locator_set_reply_t: */
    s = format(s, "vl_api_one_nsh_set_locator_set_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_pitr_set_locator_set_t_print (vl_api_one_pitr_set_locator_set_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_pitr_set_locator_set_t: */
    s = format(s, "vl_api_one_pitr_set_locator_set_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uls_name: %s", format_white_space, indent, a->ls_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_pitr_set_locator_set_reply_t_print (vl_api_one_pitr_set_locator_set_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_pitr_set_locator_set_reply_t: */
    s = format(s, "vl_api_one_pitr_set_locator_set_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_use_petr_t_print (vl_api_one_use_petr_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_use_petr_t: */
    s = format(s, "vl_api_one_use_petr_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_use_petr_reply_t_print (vl_api_one_use_petr_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_use_petr_reply_t: */
    s = format(s, "vl_api_one_use_petr_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_use_petr_t_print (vl_api_show_one_use_petr_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_use_petr_t: */
    s = format(s, "vl_api_show_one_use_petr_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_use_petr_reply_t_print (vl_api_show_one_use_petr_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_use_petr_reply_t: */
    s = format(s, "vl_api_show_one_use_petr_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ustatus: %u", format_white_space, indent, a->status);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_rloc_probe_state_t_print (vl_api_show_one_rloc_probe_state_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_rloc_probe_state_t: */
    s = format(s, "vl_api_show_one_rloc_probe_state_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_rloc_probe_state_reply_t_print (vl_api_show_one_rloc_probe_state_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_rloc_probe_state_reply_t: */
    s = format(s, "vl_api_show_one_rloc_probe_state_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_rloc_probe_enable_disable_t_print (vl_api_one_rloc_probe_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_rloc_probe_enable_disable_t: */
    s = format(s, "vl_api_one_rloc_probe_enable_disable_t:");
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_rloc_probe_enable_disable_reply_t_print (vl_api_one_rloc_probe_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_rloc_probe_enable_disable_reply_t: */
    s = format(s, "vl_api_one_rloc_probe_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_map_register_enable_disable_t_print (vl_api_one_map_register_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_map_register_enable_disable_t: */
    s = format(s, "vl_api_one_map_register_enable_disable_t:");
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_map_register_enable_disable_reply_t_print (vl_api_one_map_register_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_map_register_enable_disable_reply_t: */
    s = format(s, "vl_api_one_map_register_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_map_register_state_t_print (vl_api_show_one_map_register_state_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_map_register_state_t: */
    s = format(s, "vl_api_show_one_map_register_state_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_map_register_state_reply_t_print (vl_api_show_one_map_register_state_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_map_register_state_reply_t: */
    s = format(s, "vl_api_show_one_map_register_state_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_map_request_mode_t_print (vl_api_one_map_request_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_map_request_mode_t: */
    s = format(s, "vl_api_one_map_request_mode_t:");
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_one_map_mode_t, &a->mode, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_map_request_mode_reply_t_print (vl_api_one_map_request_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_map_request_mode_reply_t: */
    s = format(s, "vl_api_one_map_request_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_map_request_mode_t_print (vl_api_show_one_map_request_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_map_request_mode_t: */
    s = format(s, "vl_api_show_one_map_request_mode_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_map_request_mode_reply_t_print (vl_api_show_one_map_request_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_map_request_mode_reply_t: */
    s = format(s, "vl_api_show_one_map_request_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_one_map_mode_t, &a->mode, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_one_add_del_remote_mapping_t_print  *****/

static inline void *vl_api_one_add_del_remote_mapping_reply_t_print (vl_api_one_add_del_remote_mapping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_remote_mapping_reply_t: */
    s = format(s, "vl_api_one_add_del_remote_mapping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_add_del_l2_arp_entry_t_print (vl_api_one_add_del_l2_arp_entry_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_l2_arp_entry_t: */
    s = format(s, "vl_api_one_add_del_l2_arp_entry_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Ubd: %u", format_white_space, indent, a->bd);
    s = format(s, "\n%Uentry: %U", format_white_space, indent, format_vl_api_one_l2_arp_entry_t, &a->entry, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_add_del_l2_arp_entry_reply_t_print (vl_api_one_add_del_l2_arp_entry_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_l2_arp_entry_reply_t: */
    s = format(s, "vl_api_one_add_del_l2_arp_entry_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_l2_arp_entries_get_t_print (vl_api_one_l2_arp_entries_get_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_l2_arp_entries_get_t: */
    s = format(s, "vl_api_one_l2_arp_entries_get_t:");
    s = format(s, "\n%Ubd: %u", format_white_space, indent, a->bd);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_one_l2_arp_entries_get_reply_t_print  *****/

static inline void *vl_api_one_add_del_ndp_entry_t_print (vl_api_one_add_del_ndp_entry_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_ndp_entry_t: */
    s = format(s, "vl_api_one_add_del_ndp_entry_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Ubd: %u", format_white_space, indent, a->bd);
    s = format(s, "\n%Uentry: %U", format_white_space, indent, format_vl_api_one_ndp_entry_t, &a->entry, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_add_del_ndp_entry_reply_t_print (vl_api_one_add_del_ndp_entry_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_ndp_entry_reply_t: */
    s = format(s, "vl_api_one_add_del_ndp_entry_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_ndp_entries_get_t_print (vl_api_one_ndp_entries_get_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_ndp_entries_get_t: */
    s = format(s, "vl_api_one_ndp_entries_get_t:");
    s = format(s, "\n%Ubd: %u", format_white_space, indent, a->bd);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_one_ndp_entries_get_reply_t_print  *****/

static inline void *vl_api_one_set_transport_protocol_t_print (vl_api_one_set_transport_protocol_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_set_transport_protocol_t: */
    s = format(s, "vl_api_one_set_transport_protocol_t:");
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_set_transport_protocol_reply_t_print (vl_api_one_set_transport_protocol_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_set_transport_protocol_reply_t: */
    s = format(s, "vl_api_one_set_transport_protocol_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_get_transport_protocol_t_print (vl_api_one_get_transport_protocol_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_get_transport_protocol_t: */
    s = format(s, "vl_api_one_get_transport_protocol_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_get_transport_protocol_reply_t_print (vl_api_one_get_transport_protocol_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_get_transport_protocol_reply_t: */
    s = format(s, "vl_api_one_get_transport_protocol_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_ndp_bd_get_t_print (vl_api_one_ndp_bd_get_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_ndp_bd_get_t: */
    s = format(s, "vl_api_one_ndp_bd_get_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_one_ndp_bd_get_reply_t_print  *****/

static inline void *vl_api_one_l2_arp_bd_get_t_print (vl_api_one_l2_arp_bd_get_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_l2_arp_bd_get_t: */
    s = format(s, "vl_api_one_l2_arp_bd_get_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_one_l2_arp_bd_get_reply_t_print  *****/

static inline void *vl_api_one_add_del_adjacency_t_print (vl_api_one_add_del_adjacency_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_adjacency_t: */
    s = format(s, "vl_api_one_add_del_adjacency_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Ureid: %U", format_white_space, indent, format_vl_api_eid_t, &a->reid, indent);
    s = format(s, "\n%Uleid: %U", format_white_space, indent, format_vl_api_eid_t, &a->leid, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_add_del_adjacency_reply_t_print (vl_api_one_add_del_adjacency_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_adjacency_reply_t: */
    s = format(s, "vl_api_one_add_del_adjacency_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_add_del_map_request_itr_rlocs_t_print (vl_api_one_add_del_map_request_itr_rlocs_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_map_request_itr_rlocs_t: */
    s = format(s, "vl_api_one_add_del_map_request_itr_rlocs_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Ulocator_set_name: %s", format_white_space, indent, a->locator_set_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_add_del_map_request_itr_rlocs_reply_t_print (vl_api_one_add_del_map_request_itr_rlocs_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_add_del_map_request_itr_rlocs_reply_t: */
    s = format(s, "vl_api_one_add_del_map_request_itr_rlocs_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_eid_table_add_del_map_t_print (vl_api_one_eid_table_add_del_map_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_eid_table_add_del_map_t: */
    s = format(s, "vl_api_one_eid_table_add_del_map_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Udp_table: %u", format_white_space, indent, a->dp_table);
    s = format(s, "\n%Uis_l2: %u", format_white_space, indent, a->is_l2);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_eid_table_add_del_map_reply_t_print (vl_api_one_eid_table_add_del_map_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_eid_table_add_del_map_reply_t: */
    s = format(s, "vl_api_one_eid_table_add_del_map_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_locator_dump_t_print (vl_api_one_locator_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_locator_dump_t: */
    s = format(s, "vl_api_one_locator_dump_t:");
    s = format(s, "\n%Uls_index: %u", format_white_space, indent, a->ls_index);
    s = format(s, "\n%Uls_name: %s", format_white_space, indent, a->ls_name);
    s = format(s, "\n%Uis_index_set: %u", format_white_space, indent, a->is_index_set);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_locator_details_t_print (vl_api_one_locator_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_locator_details_t: */
    s = format(s, "vl_api_one_locator_details_t:");
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

static inline void *vl_api_one_locator_set_details_t_print (vl_api_one_locator_set_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_locator_set_details_t: */
    s = format(s, "vl_api_one_locator_set_details_t:");
    s = format(s, "\n%Uls_index: %u", format_white_space, indent, a->ls_index);
    s = format(s, "\n%Uls_name: %s", format_white_space, indent, a->ls_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_locator_set_dump_t_print (vl_api_one_locator_set_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_locator_set_dump_t: */
    s = format(s, "vl_api_one_locator_set_dump_t:");
    s = format(s, "\n%Ufilter: %U", format_white_space, indent, format_vl_api_one_filter_t, &a->filter, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_eid_table_details_t_print (vl_api_one_eid_table_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_eid_table_details_t: */
    s = format(s, "vl_api_one_eid_table_details_t:");
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

static inline void *vl_api_one_eid_table_dump_t_print (vl_api_one_eid_table_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_eid_table_dump_t: */
    s = format(s, "vl_api_one_eid_table_dump_t:");
    s = format(s, "\n%Ueid_set: %u", format_white_space, indent, a->eid_set);
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Ueid: %U", format_white_space, indent, format_vl_api_eid_t, &a->eid, indent);
    s = format(s, "\n%Ufilter: %U", format_white_space, indent, format_vl_api_one_filter_t, &a->filter, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_one_adjacencies_get_reply_t_print  *****/

static inline void *vl_api_one_adjacencies_get_t_print (vl_api_one_adjacencies_get_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_adjacencies_get_t: */
    s = format(s, "vl_api_one_adjacencies_get_t:");
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_eid_table_map_details_t_print (vl_api_one_eid_table_map_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_eid_table_map_details_t: */
    s = format(s, "vl_api_one_eid_table_map_details_t:");
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Udp_table: %u", format_white_space, indent, a->dp_table);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_eid_table_map_dump_t_print (vl_api_one_eid_table_map_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_eid_table_map_dump_t: */
    s = format(s, "vl_api_one_eid_table_map_dump_t:");
    s = format(s, "\n%Uis_l2: %u", format_white_space, indent, a->is_l2);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_eid_table_vni_dump_t_print (vl_api_one_eid_table_vni_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_eid_table_vni_dump_t: */
    s = format(s, "vl_api_one_eid_table_vni_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_eid_table_vni_details_t_print (vl_api_one_eid_table_vni_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_eid_table_vni_details_t: */
    s = format(s, "vl_api_one_eid_table_vni_details_t:");
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_map_resolver_details_t_print (vl_api_one_map_resolver_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_map_resolver_details_t: */
    s = format(s, "vl_api_one_map_resolver_details_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_map_resolver_dump_t_print (vl_api_one_map_resolver_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_map_resolver_dump_t: */
    s = format(s, "vl_api_one_map_resolver_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_map_server_details_t_print (vl_api_one_map_server_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_map_server_details_t: */
    s = format(s, "vl_api_one_map_server_details_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_map_server_dump_t_print (vl_api_one_map_server_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_map_server_dump_t: */
    s = format(s, "vl_api_one_map_server_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_status_t_print (vl_api_show_one_status_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_status_t: */
    s = format(s, "vl_api_show_one_status_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_status_reply_t_print (vl_api_show_one_status_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_status_reply_t: */
    s = format(s, "vl_api_show_one_status_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ufeature_status: %u", format_white_space, indent, a->feature_status);
    s = format(s, "\n%Ugpe_status: %u", format_white_space, indent, a->gpe_status);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_get_map_request_itr_rlocs_t_print (vl_api_one_get_map_request_itr_rlocs_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_get_map_request_itr_rlocs_t: */
    s = format(s, "vl_api_one_get_map_request_itr_rlocs_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_get_map_request_itr_rlocs_reply_t_print (vl_api_one_get_map_request_itr_rlocs_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_get_map_request_itr_rlocs_reply_t: */
    s = format(s, "vl_api_one_get_map_request_itr_rlocs_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ulocator_set_name: %s", format_white_space, indent, a->locator_set_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_nsh_mapping_t_print (vl_api_show_one_nsh_mapping_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_nsh_mapping_t: */
    s = format(s, "vl_api_show_one_nsh_mapping_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_nsh_mapping_reply_t_print (vl_api_show_one_nsh_mapping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_nsh_mapping_reply_t: */
    s = format(s, "vl_api_show_one_nsh_mapping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_set: %u", format_white_space, indent, a->is_set);
    s = format(s, "\n%Ulocator_set_name: %s", format_white_space, indent, a->locator_set_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_pitr_t_print (vl_api_show_one_pitr_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_pitr_t: */
    s = format(s, "vl_api_show_one_pitr_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_pitr_reply_t_print (vl_api_show_one_pitr_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_pitr_reply_t: */
    s = format(s, "vl_api_show_one_pitr_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ustatus: %u", format_white_space, indent, a->status);
    s = format(s, "\n%Ulocator_set_name: %s", format_white_space, indent, a->locator_set_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_stats_dump_t_print (vl_api_one_stats_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_stats_dump_t: */
    s = format(s, "vl_api_one_stats_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_stats_details_t_print (vl_api_one_stats_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_stats_details_t: */
    s = format(s, "vl_api_one_stats_details_t:");
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Udeid: %U", format_white_space, indent, format_vl_api_eid_t, &a->deid, indent);
    s = format(s, "\n%Useid: %U", format_white_space, indent, format_vl_api_eid_t, &a->seid, indent);
    s = format(s, "\n%Urloc: %U", format_white_space, indent, format_vl_api_address_t, &a->rloc, indent);
    s = format(s, "\n%Ulloc: %U", format_white_space, indent, format_vl_api_address_t, &a->lloc, indent);
    s = format(s, "\n%Upkt_count: %u", format_white_space, indent, a->pkt_count);
    s = format(s, "\n%Ubytes: %u", format_white_space, indent, a->bytes);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_stats_flush_t_print (vl_api_one_stats_flush_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_stats_flush_t: */
    s = format(s, "vl_api_one_stats_flush_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_stats_flush_reply_t_print (vl_api_one_stats_flush_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_stats_flush_reply_t: */
    s = format(s, "vl_api_one_stats_flush_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_stats_enable_disable_t_print (vl_api_one_stats_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_stats_enable_disable_t: */
    s = format(s, "vl_api_one_stats_enable_disable_t:");
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_stats_enable_disable_reply_t_print (vl_api_one_stats_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_stats_enable_disable_reply_t: */
    s = format(s, "vl_api_one_stats_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_stats_enable_disable_t_print (vl_api_show_one_stats_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_stats_enable_disable_t: */
    s = format(s, "vl_api_show_one_stats_enable_disable_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_stats_enable_disable_reply_t_print (vl_api_show_one_stats_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_stats_enable_disable_reply_t: */
    s = format(s, "vl_api_show_one_stats_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_map_register_fallback_threshold_t_print (vl_api_one_map_register_fallback_threshold_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_map_register_fallback_threshold_t: */
    s = format(s, "vl_api_one_map_register_fallback_threshold_t:");
    s = format(s, "\n%Uvalue: %u", format_white_space, indent, a->value);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_map_register_fallback_threshold_reply_t_print (vl_api_one_map_register_fallback_threshold_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_map_register_fallback_threshold_reply_t: */
    s = format(s, "vl_api_one_map_register_fallback_threshold_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_map_register_fallback_threshold_t_print (vl_api_show_one_map_register_fallback_threshold_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_map_register_fallback_threshold_t: */
    s = format(s, "vl_api_show_one_map_register_fallback_threshold_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_one_map_register_fallback_threshold_reply_t_print (vl_api_show_one_map_register_fallback_threshold_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_one_map_register_fallback_threshold_reply_t: */
    s = format(s, "vl_api_show_one_map_register_fallback_threshold_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uvalue: %u", format_white_space, indent, a->value);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_enable_disable_xtr_mode_t_print (vl_api_one_enable_disable_xtr_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_enable_disable_xtr_mode_t: */
    s = format(s, "vl_api_one_enable_disable_xtr_mode_t:");
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_enable_disable_xtr_mode_reply_t_print (vl_api_one_enable_disable_xtr_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_enable_disable_xtr_mode_reply_t: */
    s = format(s, "vl_api_one_enable_disable_xtr_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_show_xtr_mode_t_print (vl_api_one_show_xtr_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_show_xtr_mode_t: */
    s = format(s, "vl_api_one_show_xtr_mode_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_show_xtr_mode_reply_t_print (vl_api_one_show_xtr_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_show_xtr_mode_reply_t: */
    s = format(s, "vl_api_one_show_xtr_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_enable_disable_petr_mode_t_print (vl_api_one_enable_disable_petr_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_enable_disable_petr_mode_t: */
    s = format(s, "vl_api_one_enable_disable_petr_mode_t:");
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_enable_disable_petr_mode_reply_t_print (vl_api_one_enable_disable_petr_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_enable_disable_petr_mode_reply_t: */
    s = format(s, "vl_api_one_enable_disable_petr_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_show_petr_mode_t_print (vl_api_one_show_petr_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_show_petr_mode_t: */
    s = format(s, "vl_api_one_show_petr_mode_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_show_petr_mode_reply_t_print (vl_api_one_show_petr_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_show_petr_mode_reply_t: */
    s = format(s, "vl_api_one_show_petr_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_enable_disable_pitr_mode_t_print (vl_api_one_enable_disable_pitr_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_enable_disable_pitr_mode_t: */
    s = format(s, "vl_api_one_enable_disable_pitr_mode_t:");
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_enable_disable_pitr_mode_reply_t_print (vl_api_one_enable_disable_pitr_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_enable_disable_pitr_mode_reply_t: */
    s = format(s, "vl_api_one_enable_disable_pitr_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_show_pitr_mode_t_print (vl_api_one_show_pitr_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_show_pitr_mode_t: */
    s = format(s, "vl_api_one_show_pitr_mode_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_one_show_pitr_mode_reply_t_print (vl_api_one_show_pitr_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_one_show_pitr_mode_reply_t: */
    s = format(s, "vl_api_one_show_pitr_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_one_endianfun
#define included_one_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_one_map_mode_t_endian (vl_api_one_map_mode_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_one_l2_arp_entry_t_endian (vl_api_one_l2_arp_entry_t *a)
{
    int i __attribute__((unused));
    vl_api_mac_address_t_endian(&a->mac);
    vl_api_ip4_address_t_endian(&a->ip4);
}

static inline void vl_api_one_ndp_entry_t_endian (vl_api_one_ndp_entry_t *a)
{
    int i __attribute__((unused));
    vl_api_mac_address_t_endian(&a->mac);
    vl_api_ip6_address_t_endian(&a->ip6);
}

static inline void vl_api_one_filter_t_endian (vl_api_one_filter_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_one_adjacency_t_endian (vl_api_one_adjacency_t *a)
{
    int i __attribute__((unused));
    vl_api_eid_t_endian(&a->reid);
    vl_api_eid_t_endian(&a->leid);
}

/***** manual: vl_api_one_add_del_locator_set_t_endian  *****/

static inline void vl_api_one_add_del_locator_set_reply_t_endian (vl_api_one_add_del_locator_set_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->ls_index = clib_net_to_host_u32(a->ls_index);
}

static inline void vl_api_one_add_del_locator_t_endian (vl_api_one_add_del_locator_t *a)
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

static inline void vl_api_one_add_del_locator_reply_t_endian (vl_api_one_add_del_locator_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_add_del_local_eid_t_endian (vl_api_one_add_del_local_eid_t *a)
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

static inline void vl_api_one_add_del_local_eid_reply_t_endian (vl_api_one_add_del_local_eid_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_map_register_set_ttl_t_endian (vl_api_one_map_register_set_ttl_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->ttl = clib_net_to_host_u32(a->ttl);
}

static inline void vl_api_one_map_register_set_ttl_reply_t_endian (vl_api_one_map_register_set_ttl_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_show_one_map_register_ttl_t_endian (vl_api_show_one_map_register_ttl_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_one_map_register_ttl_reply_t_endian (vl_api_show_one_map_register_ttl_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->ttl = clib_net_to_host_u32(a->ttl);
}

static inline void vl_api_one_add_del_map_server_t_endian (vl_api_one_add_del_map_server_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_address_t_endian(&a->ip_address);
}

static inline void vl_api_one_add_del_map_server_reply_t_endian (vl_api_one_add_del_map_server_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_add_del_map_resolver_t_endian (vl_api_one_add_del_map_resolver_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_address_t_endian(&a->ip_address);
}

static inline void vl_api_one_add_del_map_resolver_reply_t_endian (vl_api_one_add_del_map_resolver_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_enable_disable_t_endian (vl_api_one_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_one_enable_disable_reply_t_endian (vl_api_one_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_nsh_set_locator_set_t_endian (vl_api_one_nsh_set_locator_set_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->ls_name = a->ls_name (no-op) */
}

static inline void vl_api_one_nsh_set_locator_set_reply_t_endian (vl_api_one_nsh_set_locator_set_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_pitr_set_locator_set_t_endian (vl_api_one_pitr_set_locator_set_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->ls_name = a->ls_name (no-op) */
}

static inline void vl_api_one_pitr_set_locator_set_reply_t_endian (vl_api_one_pitr_set_locator_set_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_use_petr_t_endian (vl_api_one_use_petr_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_t_endian(&a->ip_address);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_one_use_petr_reply_t_endian (vl_api_one_use_petr_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_show_one_use_petr_t_endian (vl_api_show_one_use_petr_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_one_use_petr_reply_t_endian (vl_api_show_one_use_petr_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->status = a->status (no-op) */
    vl_api_address_t_endian(&a->ip_address);
}

static inline void vl_api_show_one_rloc_probe_state_t_endian (vl_api_show_one_rloc_probe_state_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_one_rloc_probe_state_reply_t_endian (vl_api_show_one_rloc_probe_state_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_one_rloc_probe_enable_disable_t_endian (vl_api_one_rloc_probe_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_one_rloc_probe_enable_disable_reply_t_endian (vl_api_one_rloc_probe_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_map_register_enable_disable_t_endian (vl_api_one_map_register_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_one_map_register_enable_disable_reply_t_endian (vl_api_one_map_register_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_show_one_map_register_state_t_endian (vl_api_show_one_map_register_state_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_one_map_register_state_reply_t_endian (vl_api_show_one_map_register_state_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_one_map_request_mode_t_endian (vl_api_one_map_request_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_one_map_mode_t_endian(&a->mode);
}

static inline void vl_api_one_map_request_mode_reply_t_endian (vl_api_one_map_request_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_show_one_map_request_mode_t_endian (vl_api_show_one_map_request_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_one_map_request_mode_reply_t_endian (vl_api_show_one_map_request_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_one_map_mode_t_endian(&a->mode);
}

/***** manual: vl_api_one_add_del_remote_mapping_t_endian  *****/

static inline void vl_api_one_add_del_remote_mapping_reply_t_endian (vl_api_one_add_del_remote_mapping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_add_del_l2_arp_entry_t_endian (vl_api_one_add_del_l2_arp_entry_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->bd = clib_net_to_host_u32(a->bd);
    vl_api_one_l2_arp_entry_t_endian(&a->entry);
}

static inline void vl_api_one_add_del_l2_arp_entry_reply_t_endian (vl_api_one_add_del_l2_arp_entry_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_l2_arp_entries_get_t_endian (vl_api_one_l2_arp_entries_get_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->bd = clib_net_to_host_u32(a->bd);
}

/***** manual: vl_api_one_l2_arp_entries_get_reply_t_endian  *****/

static inline void vl_api_one_add_del_ndp_entry_t_endian (vl_api_one_add_del_ndp_entry_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->bd = clib_net_to_host_u32(a->bd);
    vl_api_one_ndp_entry_t_endian(&a->entry);
}

static inline void vl_api_one_add_del_ndp_entry_reply_t_endian (vl_api_one_add_del_ndp_entry_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_ndp_entries_get_t_endian (vl_api_one_ndp_entries_get_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->bd = clib_net_to_host_u32(a->bd);
}

/***** manual: vl_api_one_ndp_entries_get_reply_t_endian  *****/

static inline void vl_api_one_set_transport_protocol_t_endian (vl_api_one_set_transport_protocol_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->protocol = a->protocol (no-op) */
}

static inline void vl_api_one_set_transport_protocol_reply_t_endian (vl_api_one_set_transport_protocol_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_get_transport_protocol_t_endian (vl_api_one_get_transport_protocol_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_one_get_transport_protocol_reply_t_endian (vl_api_one_get_transport_protocol_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->protocol = a->protocol (no-op) */
}

static inline void vl_api_one_ndp_bd_get_t_endian (vl_api_one_ndp_bd_get_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

/***** manual: vl_api_one_ndp_bd_get_reply_t_endian  *****/

static inline void vl_api_one_l2_arp_bd_get_t_endian (vl_api_one_l2_arp_bd_get_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

/***** manual: vl_api_one_l2_arp_bd_get_reply_t_endian  *****/

static inline void vl_api_one_add_del_adjacency_t_endian (vl_api_one_add_del_adjacency_t *a)
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

static inline void vl_api_one_add_del_adjacency_reply_t_endian (vl_api_one_add_del_adjacency_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_add_del_map_request_itr_rlocs_t_endian (vl_api_one_add_del_map_request_itr_rlocs_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->locator_set_name = a->locator_set_name (no-op) */
}

static inline void vl_api_one_add_del_map_request_itr_rlocs_reply_t_endian (vl_api_one_add_del_map_request_itr_rlocs_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_eid_table_add_del_map_t_endian (vl_api_one_eid_table_add_del_map_t *a)
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

static inline void vl_api_one_eid_table_add_del_map_reply_t_endian (vl_api_one_eid_table_add_del_map_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_locator_dump_t_endian (vl_api_one_locator_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->ls_index = clib_net_to_host_u32(a->ls_index);
    /* a->ls_name = a->ls_name (no-op) */
    /* a->is_index_set = a->is_index_set (no-op) */
}

static inline void vl_api_one_locator_details_t_endian (vl_api_one_locator_details_t *a)
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

static inline void vl_api_one_locator_set_details_t_endian (vl_api_one_locator_set_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->ls_index = clib_net_to_host_u32(a->ls_index);
    /* a->ls_name = a->ls_name (no-op) */
}

static inline void vl_api_one_locator_set_dump_t_endian (vl_api_one_locator_set_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_one_filter_t_endian(&a->filter);
}

static inline void vl_api_one_eid_table_details_t_endian (vl_api_one_eid_table_details_t *a)
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

static inline void vl_api_one_eid_table_dump_t_endian (vl_api_one_eid_table_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->eid_set = a->eid_set (no-op) */
    a->vni = clib_net_to_host_u32(a->vni);
    vl_api_eid_t_endian(&a->eid);
    vl_api_one_filter_t_endian(&a->filter);
}

/***** manual: vl_api_one_adjacencies_get_reply_t_endian  *****/

static inline void vl_api_one_adjacencies_get_t_endian (vl_api_one_adjacencies_get_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
}

static inline void vl_api_one_eid_table_map_details_t_endian (vl_api_one_eid_table_map_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
    a->dp_table = clib_net_to_host_u32(a->dp_table);
}

static inline void vl_api_one_eid_table_map_dump_t_endian (vl_api_one_eid_table_map_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_l2 = a->is_l2 (no-op) */
}

static inline void vl_api_one_eid_table_vni_dump_t_endian (vl_api_one_eid_table_vni_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_one_eid_table_vni_details_t_endian (vl_api_one_eid_table_vni_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
}

static inline void vl_api_one_map_resolver_details_t_endian (vl_api_one_map_resolver_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_t_endian(&a->ip_address);
}

static inline void vl_api_one_map_resolver_dump_t_endian (vl_api_one_map_resolver_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_one_map_server_details_t_endian (vl_api_one_map_server_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_t_endian(&a->ip_address);
}

static inline void vl_api_one_map_server_dump_t_endian (vl_api_one_map_server_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_one_status_t_endian (vl_api_show_one_status_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_one_status_reply_t_endian (vl_api_show_one_status_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->feature_status = a->feature_status (no-op) */
    /* a->gpe_status = a->gpe_status (no-op) */
}

static inline void vl_api_one_get_map_request_itr_rlocs_t_endian (vl_api_one_get_map_request_itr_rlocs_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_one_get_map_request_itr_rlocs_reply_t_endian (vl_api_one_get_map_request_itr_rlocs_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->locator_set_name = a->locator_set_name (no-op) */
}

static inline void vl_api_show_one_nsh_mapping_t_endian (vl_api_show_one_nsh_mapping_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_one_nsh_mapping_reply_t_endian (vl_api_show_one_nsh_mapping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_set = a->is_set (no-op) */
    /* a->locator_set_name = a->locator_set_name (no-op) */
}

static inline void vl_api_show_one_pitr_t_endian (vl_api_show_one_pitr_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_one_pitr_reply_t_endian (vl_api_show_one_pitr_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->status = a->status (no-op) */
    /* a->locator_set_name = a->locator_set_name (no-op) */
}

static inline void vl_api_one_stats_dump_t_endian (vl_api_one_stats_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_one_stats_details_t_endian (vl_api_one_stats_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
    vl_api_eid_t_endian(&a->deid);
    vl_api_eid_t_endian(&a->seid);
    vl_api_address_t_endian(&a->rloc);
    vl_api_address_t_endian(&a->lloc);
    a->pkt_count = clib_net_to_host_u32(a->pkt_count);
    a->bytes = clib_net_to_host_u32(a->bytes);
}

static inline void vl_api_one_stats_flush_t_endian (vl_api_one_stats_flush_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_one_stats_flush_reply_t_endian (vl_api_one_stats_flush_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_stats_enable_disable_t_endian (vl_api_one_stats_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_one_stats_enable_disable_reply_t_endian (vl_api_one_stats_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_show_one_stats_enable_disable_t_endian (vl_api_show_one_stats_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_one_stats_enable_disable_reply_t_endian (vl_api_show_one_stats_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_one_map_register_fallback_threshold_t_endian (vl_api_one_map_register_fallback_threshold_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->value = clib_net_to_host_u32(a->value);
}

static inline void vl_api_one_map_register_fallback_threshold_reply_t_endian (vl_api_one_map_register_fallback_threshold_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_show_one_map_register_fallback_threshold_t_endian (vl_api_show_one_map_register_fallback_threshold_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_one_map_register_fallback_threshold_reply_t_endian (vl_api_show_one_map_register_fallback_threshold_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->value = clib_net_to_host_u32(a->value);
}

static inline void vl_api_one_enable_disable_xtr_mode_t_endian (vl_api_one_enable_disable_xtr_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_one_enable_disable_xtr_mode_reply_t_endian (vl_api_one_enable_disable_xtr_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_show_xtr_mode_t_endian (vl_api_one_show_xtr_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_one_show_xtr_mode_reply_t_endian (vl_api_one_show_xtr_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_one_enable_disable_petr_mode_t_endian (vl_api_one_enable_disable_petr_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_one_enable_disable_petr_mode_reply_t_endian (vl_api_one_enable_disable_petr_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_show_petr_mode_t_endian (vl_api_one_show_petr_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_one_show_petr_mode_reply_t_endian (vl_api_one_show_petr_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_one_enable_disable_pitr_mode_t_endian (vl_api_one_enable_disable_pitr_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_one_enable_disable_pitr_mode_reply_t_endian (vl_api_one_enable_disable_pitr_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_one_show_pitr_mode_t_endian (vl_api_one_show_pitr_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_one_show_pitr_mode_reply_t_endian (vl_api_one_show_pitr_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->is_enable = a->is_enable (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(one.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(one.api, 0xa4bbba2c)

#endif

