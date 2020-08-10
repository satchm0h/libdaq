/*
 * VLIB API definitions 2020-07-24 16:29:08
 * Input file: nat.api
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
#warning no content included from nat.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/interface_types.api.h>
#include <nat/nat_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_NAT_CONTROL_PING, vl_api_nat_control_ping_t_handler)
vl_msg_id(VL_API_NAT_CONTROL_PING_REPLY, vl_api_nat_control_ping_reply_t_handler)
vl_msg_id(VL_API_NAT_SHOW_CONFIG, vl_api_nat_show_config_t_handler)
vl_msg_id(VL_API_NAT_SHOW_CONFIG_REPLY, vl_api_nat_show_config_reply_t_handler)
vl_msg_id(VL_API_NAT44_SESSION_CLEANUP, vl_api_nat44_session_cleanup_t_handler)
vl_msg_id(VL_API_NAT44_SESSION_CLEANUP_REPLY, vl_api_nat44_session_cleanup_reply_t_handler)
vl_msg_id(VL_API_NAT44_SET_SESSION_LIMIT, vl_api_nat44_set_session_limit_t_handler)
vl_msg_id(VL_API_NAT44_SET_SESSION_LIMIT_REPLY, vl_api_nat44_set_session_limit_reply_t_handler)
vl_msg_id(VL_API_NAT_SET_LOG_LEVEL, vl_api_nat_set_log_level_t_handler)
vl_msg_id(VL_API_NAT_SET_LOG_LEVEL_REPLY, vl_api_nat_set_log_level_reply_t_handler)
vl_msg_id(VL_API_NAT_SET_WORKERS, vl_api_nat_set_workers_t_handler)
vl_msg_id(VL_API_NAT_SET_WORKERS_REPLY, vl_api_nat_set_workers_reply_t_handler)
vl_msg_id(VL_API_NAT_WORKER_DUMP, vl_api_nat_worker_dump_t_handler)
vl_msg_id(VL_API_NAT_WORKER_DETAILS, vl_api_nat_worker_details_t_handler)
vl_msg_id(VL_API_NAT_IPFIX_ENABLE_DISABLE, vl_api_nat_ipfix_enable_disable_t_handler)
vl_msg_id(VL_API_NAT_IPFIX_ENABLE_DISABLE_REPLY, vl_api_nat_ipfix_enable_disable_reply_t_handler)
vl_msg_id(VL_API_NAT_SET_TIMEOUTS, vl_api_nat_set_timeouts_t_handler)
vl_msg_id(VL_API_NAT_SET_TIMEOUTS_REPLY, vl_api_nat_set_timeouts_reply_t_handler)
vl_msg_id(VL_API_NAT_GET_TIMEOUTS, vl_api_nat_get_timeouts_t_handler)
vl_msg_id(VL_API_NAT_GET_TIMEOUTS_REPLY, vl_api_nat_get_timeouts_reply_t_handler)
vl_msg_id(VL_API_NAT_SET_ADDR_AND_PORT_ALLOC_ALG, vl_api_nat_set_addr_and_port_alloc_alg_t_handler)
vl_msg_id(VL_API_NAT_SET_ADDR_AND_PORT_ALLOC_ALG_REPLY, vl_api_nat_set_addr_and_port_alloc_alg_reply_t_handler)
vl_msg_id(VL_API_NAT_GET_ADDR_AND_PORT_ALLOC_ALG, vl_api_nat_get_addr_and_port_alloc_alg_t_handler)
vl_msg_id(VL_API_NAT_GET_ADDR_AND_PORT_ALLOC_ALG_REPLY, vl_api_nat_get_addr_and_port_alloc_alg_reply_t_handler)
vl_msg_id(VL_API_NAT_SET_MSS_CLAMPING, vl_api_nat_set_mss_clamping_t_handler)
vl_msg_id(VL_API_NAT_SET_MSS_CLAMPING_REPLY, vl_api_nat_set_mss_clamping_reply_t_handler)
vl_msg_id(VL_API_NAT_GET_MSS_CLAMPING, vl_api_nat_get_mss_clamping_t_handler)
vl_msg_id(VL_API_NAT_GET_MSS_CLAMPING_REPLY, vl_api_nat_get_mss_clamping_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_SET_LISTENER, vl_api_nat_ha_set_listener_t_handler)
vl_msg_id(VL_API_NAT_HA_SET_LISTENER_REPLY, vl_api_nat_ha_set_listener_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_SET_FAILOVER, vl_api_nat_ha_set_failover_t_handler)
vl_msg_id(VL_API_NAT_HA_SET_FAILOVER_REPLY, vl_api_nat_ha_set_failover_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_GET_LISTENER, vl_api_nat_ha_get_listener_t_handler)
vl_msg_id(VL_API_NAT_HA_GET_LISTENER_REPLY, vl_api_nat_ha_get_listener_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_GET_FAILOVER, vl_api_nat_ha_get_failover_t_handler)
vl_msg_id(VL_API_NAT_HA_GET_FAILOVER_REPLY, vl_api_nat_ha_get_failover_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_FLUSH, vl_api_nat_ha_flush_t_handler)
vl_msg_id(VL_API_NAT_HA_FLUSH_REPLY, vl_api_nat_ha_flush_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_RESYNC, vl_api_nat_ha_resync_t_handler)
vl_msg_id(VL_API_NAT_HA_RESYNC_REPLY, vl_api_nat_ha_resync_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_RESYNC_COMPLETED_EVENT, vl_api_nat_ha_resync_completed_event_t_handler)
vl_msg_id(VL_API_NAT44_DEL_USER, vl_api_nat44_del_user_t_handler)
vl_msg_id(VL_API_NAT44_DEL_USER_REPLY, vl_api_nat44_del_user_reply_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_ADDRESS_RANGE, vl_api_nat44_add_del_address_range_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_ADDRESS_RANGE_REPLY, vl_api_nat44_add_del_address_range_reply_t_handler)
vl_msg_id(VL_API_NAT44_ADDRESS_DUMP, vl_api_nat44_address_dump_t_handler)
vl_msg_id(VL_API_NAT44_ADDRESS_DETAILS, vl_api_nat44_address_details_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_ADD_DEL_FEATURE, vl_api_nat44_interface_add_del_feature_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_ADD_DEL_FEATURE_REPLY, vl_api_nat44_interface_add_del_feature_reply_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_DUMP, vl_api_nat44_interface_dump_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_DETAILS, vl_api_nat44_interface_details_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_ADD_DEL_OUTPUT_FEATURE, vl_api_nat44_interface_add_del_output_feature_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_ADD_DEL_OUTPUT_FEATURE_REPLY, vl_api_nat44_interface_add_del_output_feature_reply_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_OUTPUT_FEATURE_DUMP, vl_api_nat44_interface_output_feature_dump_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_OUTPUT_FEATURE_DETAILS, vl_api_nat44_interface_output_feature_details_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_STATIC_MAPPING, vl_api_nat44_add_del_static_mapping_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_STATIC_MAPPING_REPLY, vl_api_nat44_add_del_static_mapping_reply_t_handler)
vl_msg_id(VL_API_NAT44_STATIC_MAPPING_DUMP, vl_api_nat44_static_mapping_dump_t_handler)
vl_msg_id(VL_API_NAT44_STATIC_MAPPING_DETAILS, vl_api_nat44_static_mapping_details_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_IDENTITY_MAPPING, vl_api_nat44_add_del_identity_mapping_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_IDENTITY_MAPPING_REPLY, vl_api_nat44_add_del_identity_mapping_reply_t_handler)
vl_msg_id(VL_API_NAT44_IDENTITY_MAPPING_DUMP, vl_api_nat44_identity_mapping_dump_t_handler)
vl_msg_id(VL_API_NAT44_IDENTITY_MAPPING_DETAILS, vl_api_nat44_identity_mapping_details_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_INTERFACE_ADDR, vl_api_nat44_add_del_interface_addr_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_INTERFACE_ADDR_REPLY, vl_api_nat44_add_del_interface_addr_reply_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_ADDR_DUMP, vl_api_nat44_interface_addr_dump_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_ADDR_DETAILS, vl_api_nat44_interface_addr_details_t_handler)
vl_msg_id(VL_API_NAT44_USER_DUMP, vl_api_nat44_user_dump_t_handler)
vl_msg_id(VL_API_NAT44_USER_DETAILS, vl_api_nat44_user_details_t_handler)
vl_msg_id(VL_API_NAT44_USER_SESSION_DUMP, vl_api_nat44_user_session_dump_t_handler)
vl_msg_id(VL_API_NAT44_USER_SESSION_DETAILS, vl_api_nat44_user_session_details_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_LB_STATIC_MAPPING, vl_api_nat44_add_del_lb_static_mapping_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_LB_STATIC_MAPPING_REPLY, vl_api_nat44_add_del_lb_static_mapping_reply_t_handler)
vl_msg_id(VL_API_NAT44_LB_STATIC_MAPPING_ADD_DEL_LOCAL, vl_api_nat44_lb_static_mapping_add_del_local_t_handler)
vl_msg_id(VL_API_NAT44_LB_STATIC_MAPPING_ADD_DEL_LOCAL_REPLY, vl_api_nat44_lb_static_mapping_add_del_local_reply_t_handler)
vl_msg_id(VL_API_NAT44_LB_STATIC_MAPPING_DUMP, vl_api_nat44_lb_static_mapping_dump_t_handler)
vl_msg_id(VL_API_NAT44_LB_STATIC_MAPPING_DETAILS, vl_api_nat44_lb_static_mapping_details_t_handler)
vl_msg_id(VL_API_NAT44_DEL_SESSION, vl_api_nat44_del_session_t_handler)
vl_msg_id(VL_API_NAT44_DEL_SESSION_REPLY, vl_api_nat44_del_session_reply_t_handler)
vl_msg_id(VL_API_NAT44_FORWARDING_ENABLE_DISABLE, vl_api_nat44_forwarding_enable_disable_t_handler)
vl_msg_id(VL_API_NAT44_FORWARDING_ENABLE_DISABLE_REPLY, vl_api_nat44_forwarding_enable_disable_reply_t_handler)
vl_msg_id(VL_API_NAT44_FORWARDING_IS_ENABLED, vl_api_nat44_forwarding_is_enabled_t_handler)
vl_msg_id(VL_API_NAT44_FORWARDING_IS_ENABLED_REPLY, vl_api_nat44_forwarding_is_enabled_reply_t_handler)
vl_msg_id(VL_API_NAT_DET_ADD_DEL_MAP, vl_api_nat_det_add_del_map_t_handler)
vl_msg_id(VL_API_NAT_DET_ADD_DEL_MAP_REPLY, vl_api_nat_det_add_del_map_reply_t_handler)
vl_msg_id(VL_API_NAT_DET_FORWARD, vl_api_nat_det_forward_t_handler)
vl_msg_id(VL_API_NAT_DET_FORWARD_REPLY, vl_api_nat_det_forward_reply_t_handler)
vl_msg_id(VL_API_NAT_DET_REVERSE, vl_api_nat_det_reverse_t_handler)
vl_msg_id(VL_API_NAT_DET_REVERSE_REPLY, vl_api_nat_det_reverse_reply_t_handler)
vl_msg_id(VL_API_NAT_DET_MAP_DUMP, vl_api_nat_det_map_dump_t_handler)
vl_msg_id(VL_API_NAT_DET_MAP_DETAILS, vl_api_nat_det_map_details_t_handler)
vl_msg_id(VL_API_NAT_DET_CLOSE_SESSION_OUT, vl_api_nat_det_close_session_out_t_handler)
vl_msg_id(VL_API_NAT_DET_CLOSE_SESSION_OUT_REPLY, vl_api_nat_det_close_session_out_reply_t_handler)
vl_msg_id(VL_API_NAT_DET_CLOSE_SESSION_IN, vl_api_nat_det_close_session_in_t_handler)
vl_msg_id(VL_API_NAT_DET_CLOSE_SESSION_IN_REPLY, vl_api_nat_det_close_session_in_reply_t_handler)
vl_msg_id(VL_API_NAT_DET_SESSION_DUMP, vl_api_nat_det_session_dump_t_handler)
vl_msg_id(VL_API_NAT_DET_SESSION_DETAILS, vl_api_nat_det_session_details_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_POOL_ADDR_RANGE, vl_api_nat64_add_del_pool_addr_range_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_POOL_ADDR_RANGE_REPLY, vl_api_nat64_add_del_pool_addr_range_reply_t_handler)
vl_msg_id(VL_API_NAT64_POOL_ADDR_DUMP, vl_api_nat64_pool_addr_dump_t_handler)
vl_msg_id(VL_API_NAT64_POOL_ADDR_DETAILS, vl_api_nat64_pool_addr_details_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_INTERFACE, vl_api_nat64_add_del_interface_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_INTERFACE_REPLY, vl_api_nat64_add_del_interface_reply_t_handler)
vl_msg_id(VL_API_NAT64_INTERFACE_DUMP, vl_api_nat64_interface_dump_t_handler)
vl_msg_id(VL_API_NAT64_INTERFACE_DETAILS, vl_api_nat64_interface_details_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_STATIC_BIB, vl_api_nat64_add_del_static_bib_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_STATIC_BIB_REPLY, vl_api_nat64_add_del_static_bib_reply_t_handler)
vl_msg_id(VL_API_NAT64_BIB_DUMP, vl_api_nat64_bib_dump_t_handler)
vl_msg_id(VL_API_NAT64_BIB_DETAILS, vl_api_nat64_bib_details_t_handler)
vl_msg_id(VL_API_NAT64_ST_DUMP, vl_api_nat64_st_dump_t_handler)
vl_msg_id(VL_API_NAT64_ST_DETAILS, vl_api_nat64_st_details_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_PREFIX, vl_api_nat64_add_del_prefix_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_PREFIX_REPLY, vl_api_nat64_add_del_prefix_reply_t_handler)
vl_msg_id(VL_API_NAT64_PREFIX_DUMP, vl_api_nat64_prefix_dump_t_handler)
vl_msg_id(VL_API_NAT64_PREFIX_DETAILS, vl_api_nat64_prefix_details_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_INTERFACE_ADDR, vl_api_nat64_add_del_interface_addr_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_INTERFACE_ADDR_REPLY, vl_api_nat64_add_del_interface_addr_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_nat_control_ping_t, 1)
vl_msg_name(vl_api_nat_control_ping_reply_t, 1)
vl_msg_name(vl_api_nat_show_config_t, 1)
vl_msg_name(vl_api_nat_show_config_reply_t, 1)
vl_msg_name(vl_api_nat44_session_cleanup_t, 1)
vl_msg_name(vl_api_nat44_session_cleanup_reply_t, 1)
vl_msg_name(vl_api_nat44_set_session_limit_t, 1)
vl_msg_name(vl_api_nat44_set_session_limit_reply_t, 1)
vl_msg_name(vl_api_nat_set_log_level_t, 1)
vl_msg_name(vl_api_nat_set_log_level_reply_t, 1)
vl_msg_name(vl_api_nat_set_workers_t, 1)
vl_msg_name(vl_api_nat_set_workers_reply_t, 1)
vl_msg_name(vl_api_nat_worker_dump_t, 1)
vl_msg_name(vl_api_nat_worker_details_t, 1)
vl_msg_name(vl_api_nat_ipfix_enable_disable_t, 1)
vl_msg_name(vl_api_nat_ipfix_enable_disable_reply_t, 1)
vl_msg_name(vl_api_nat_set_timeouts_t, 1)
vl_msg_name(vl_api_nat_set_timeouts_reply_t, 1)
vl_msg_name(vl_api_nat_get_timeouts_t, 1)
vl_msg_name(vl_api_nat_get_timeouts_reply_t, 1)
vl_msg_name(vl_api_nat_set_addr_and_port_alloc_alg_t, 1)
vl_msg_name(vl_api_nat_set_addr_and_port_alloc_alg_reply_t, 1)
vl_msg_name(vl_api_nat_get_addr_and_port_alloc_alg_t, 1)
vl_msg_name(vl_api_nat_get_addr_and_port_alloc_alg_reply_t, 1)
vl_msg_name(vl_api_nat_set_mss_clamping_t, 1)
vl_msg_name(vl_api_nat_set_mss_clamping_reply_t, 1)
vl_msg_name(vl_api_nat_get_mss_clamping_t, 1)
vl_msg_name(vl_api_nat_get_mss_clamping_reply_t, 1)
vl_msg_name(vl_api_nat_ha_set_listener_t, 1)
vl_msg_name(vl_api_nat_ha_set_listener_reply_t, 1)
vl_msg_name(vl_api_nat_ha_set_failover_t, 1)
vl_msg_name(vl_api_nat_ha_set_failover_reply_t, 1)
vl_msg_name(vl_api_nat_ha_get_listener_t, 1)
vl_msg_name(vl_api_nat_ha_get_listener_reply_t, 1)
vl_msg_name(vl_api_nat_ha_get_failover_t, 1)
vl_msg_name(vl_api_nat_ha_get_failover_reply_t, 1)
vl_msg_name(vl_api_nat_ha_flush_t, 1)
vl_msg_name(vl_api_nat_ha_flush_reply_t, 1)
vl_msg_name(vl_api_nat_ha_resync_t, 1)
vl_msg_name(vl_api_nat_ha_resync_reply_t, 1)
vl_msg_name(vl_api_nat_ha_resync_completed_event_t, 1)
vl_msg_name(vl_api_nat44_del_user_t, 1)
vl_msg_name(vl_api_nat44_del_user_reply_t, 1)
vl_msg_name(vl_api_nat44_add_del_address_range_t, 1)
vl_msg_name(vl_api_nat44_add_del_address_range_reply_t, 1)
vl_msg_name(vl_api_nat44_address_dump_t, 1)
vl_msg_name(vl_api_nat44_address_details_t, 1)
vl_msg_name(vl_api_nat44_interface_add_del_feature_t, 1)
vl_msg_name(vl_api_nat44_interface_add_del_feature_reply_t, 1)
vl_msg_name(vl_api_nat44_interface_dump_t, 1)
vl_msg_name(vl_api_nat44_interface_details_t, 1)
vl_msg_name(vl_api_nat44_interface_add_del_output_feature_t, 1)
vl_msg_name(vl_api_nat44_interface_add_del_output_feature_reply_t, 1)
vl_msg_name(vl_api_nat44_interface_output_feature_dump_t, 1)
vl_msg_name(vl_api_nat44_interface_output_feature_details_t, 1)
vl_msg_name(vl_api_nat44_add_del_static_mapping_t, 1)
vl_msg_name(vl_api_nat44_add_del_static_mapping_reply_t, 1)
vl_msg_name(vl_api_nat44_static_mapping_dump_t, 1)
vl_msg_name(vl_api_nat44_static_mapping_details_t, 1)
vl_msg_name(vl_api_nat44_add_del_identity_mapping_t, 1)
vl_msg_name(vl_api_nat44_add_del_identity_mapping_reply_t, 1)
vl_msg_name(vl_api_nat44_identity_mapping_dump_t, 1)
vl_msg_name(vl_api_nat44_identity_mapping_details_t, 1)
vl_msg_name(vl_api_nat44_add_del_interface_addr_t, 1)
vl_msg_name(vl_api_nat44_add_del_interface_addr_reply_t, 1)
vl_msg_name(vl_api_nat44_interface_addr_dump_t, 1)
vl_msg_name(vl_api_nat44_interface_addr_details_t, 1)
vl_msg_name(vl_api_nat44_user_dump_t, 1)
vl_msg_name(vl_api_nat44_user_details_t, 1)
vl_msg_name(vl_api_nat44_user_session_dump_t, 1)
vl_msg_name(vl_api_nat44_user_session_details_t, 1)
vl_msg_name(vl_api_nat44_add_del_lb_static_mapping_t, 1)
vl_msg_name(vl_api_nat44_add_del_lb_static_mapping_reply_t, 1)
vl_msg_name(vl_api_nat44_lb_static_mapping_add_del_local_t, 1)
vl_msg_name(vl_api_nat44_lb_static_mapping_add_del_local_reply_t, 1)
vl_msg_name(vl_api_nat44_lb_static_mapping_dump_t, 1)
vl_msg_name(vl_api_nat44_lb_static_mapping_details_t, 1)
vl_msg_name(vl_api_nat44_del_session_t, 1)
vl_msg_name(vl_api_nat44_del_session_reply_t, 1)
vl_msg_name(vl_api_nat44_forwarding_enable_disable_t, 1)
vl_msg_name(vl_api_nat44_forwarding_enable_disable_reply_t, 1)
vl_msg_name(vl_api_nat44_forwarding_is_enabled_t, 1)
vl_msg_name(vl_api_nat44_forwarding_is_enabled_reply_t, 1)
vl_msg_name(vl_api_nat_det_add_del_map_t, 1)
vl_msg_name(vl_api_nat_det_add_del_map_reply_t, 1)
vl_msg_name(vl_api_nat_det_forward_t, 1)
vl_msg_name(vl_api_nat_det_forward_reply_t, 1)
vl_msg_name(vl_api_nat_det_reverse_t, 1)
vl_msg_name(vl_api_nat_det_reverse_reply_t, 1)
vl_msg_name(vl_api_nat_det_map_dump_t, 1)
vl_msg_name(vl_api_nat_det_map_details_t, 1)
vl_msg_name(vl_api_nat_det_close_session_out_t, 1)
vl_msg_name(vl_api_nat_det_close_session_out_reply_t, 1)
vl_msg_name(vl_api_nat_det_close_session_in_t, 1)
vl_msg_name(vl_api_nat_det_close_session_in_reply_t, 1)
vl_msg_name(vl_api_nat_det_session_dump_t, 1)
vl_msg_name(vl_api_nat_det_session_details_t, 1)
vl_msg_name(vl_api_nat64_add_del_pool_addr_range_t, 1)
vl_msg_name(vl_api_nat64_add_del_pool_addr_range_reply_t, 1)
vl_msg_name(vl_api_nat64_pool_addr_dump_t, 1)
vl_msg_name(vl_api_nat64_pool_addr_details_t, 1)
vl_msg_name(vl_api_nat64_add_del_interface_t, 1)
vl_msg_name(vl_api_nat64_add_del_interface_reply_t, 1)
vl_msg_name(vl_api_nat64_interface_dump_t, 1)
vl_msg_name(vl_api_nat64_interface_details_t, 1)
vl_msg_name(vl_api_nat64_add_del_static_bib_t, 1)
vl_msg_name(vl_api_nat64_add_del_static_bib_reply_t, 1)
vl_msg_name(vl_api_nat64_bib_dump_t, 1)
vl_msg_name(vl_api_nat64_bib_details_t, 1)
vl_msg_name(vl_api_nat64_st_dump_t, 1)
vl_msg_name(vl_api_nat64_st_details_t, 1)
vl_msg_name(vl_api_nat64_add_del_prefix_t, 1)
vl_msg_name(vl_api_nat64_add_del_prefix_reply_t, 1)
vl_msg_name(vl_api_nat64_prefix_dump_t, 1)
vl_msg_name(vl_api_nat64_prefix_details_t, 1)
vl_msg_name(vl_api_nat64_add_del_interface_addr_t, 1)
vl_msg_name(vl_api_nat64_add_del_interface_addr_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_nat \
_(VL_API_NAT_CONTROL_PING, nat_control_ping, 51077d14) \
_(VL_API_NAT_CONTROL_PING_REPLY, nat_control_ping_reply, f6b0b8ca) \
_(VL_API_NAT_SHOW_CONFIG, nat_show_config, 51077d14) \
_(VL_API_NAT_SHOW_CONFIG_REPLY, nat_show_config_reply, 7903ef06) \
_(VL_API_NAT44_SESSION_CLEANUP, nat44_session_cleanup, 51077d14) \
_(VL_API_NAT44_SESSION_CLEANUP_REPLY, nat44_session_cleanup_reply, e8d4e804) \
_(VL_API_NAT44_SET_SESSION_LIMIT, nat44_set_session_limit, 8899bbb1) \
_(VL_API_NAT44_SET_SESSION_LIMIT_REPLY, nat44_set_session_limit_reply, e8d4e804) \
_(VL_API_NAT_SET_LOG_LEVEL, nat_set_log_level, 70076bfe) \
_(VL_API_NAT_SET_LOG_LEVEL_REPLY, nat_set_log_level_reply, e8d4e804) \
_(VL_API_NAT_SET_WORKERS, nat_set_workers, da926638) \
_(VL_API_NAT_SET_WORKERS_REPLY, nat_set_workers_reply, e8d4e804) \
_(VL_API_NAT_WORKER_DUMP, nat_worker_dump, 51077d14) \
_(VL_API_NAT_WORKER_DETAILS, nat_worker_details, 84bf06fc) \
_(VL_API_NAT_IPFIX_ENABLE_DISABLE, nat_ipfix_enable_disable, 9af4a2d2) \
_(VL_API_NAT_IPFIX_ENABLE_DISABLE_REPLY, nat_ipfix_enable_disable_reply, e8d4e804) \
_(VL_API_NAT_SET_TIMEOUTS, nat_set_timeouts, d4746b16) \
_(VL_API_NAT_SET_TIMEOUTS_REPLY, nat_set_timeouts_reply, e8d4e804) \
_(VL_API_NAT_GET_TIMEOUTS, nat_get_timeouts, 51077d14) \
_(VL_API_NAT_GET_TIMEOUTS_REPLY, nat_get_timeouts_reply, 3c4df4e1) \
_(VL_API_NAT_SET_ADDR_AND_PORT_ALLOC_ALG, nat_set_addr_and_port_alloc_alg, deeb746f) \
_(VL_API_NAT_SET_ADDR_AND_PORT_ALLOC_ALG_REPLY, nat_set_addr_and_port_alloc_alg_reply, e8d4e804) \
_(VL_API_NAT_GET_ADDR_AND_PORT_ALLOC_ALG, nat_get_addr_and_port_alloc_alg, 51077d14) \
_(VL_API_NAT_GET_ADDR_AND_PORT_ALLOC_ALG_REPLY, nat_get_addr_and_port_alloc_alg_reply, 3607a7d0) \
_(VL_API_NAT_SET_MSS_CLAMPING, nat_set_mss_clamping, 25e90abb) \
_(VL_API_NAT_SET_MSS_CLAMPING_REPLY, nat_set_mss_clamping_reply, e8d4e804) \
_(VL_API_NAT_GET_MSS_CLAMPING, nat_get_mss_clamping, 51077d14) \
_(VL_API_NAT_GET_MSS_CLAMPING_REPLY, nat_get_mss_clamping_reply, 1c0b2a78) \
_(VL_API_NAT_HA_SET_LISTENER, nat_ha_set_listener, e4a8cb4e) \
_(VL_API_NAT_HA_SET_LISTENER_REPLY, nat_ha_set_listener_reply, e8d4e804) \
_(VL_API_NAT_HA_SET_FAILOVER, nat_ha_set_failover, 718246af) \
_(VL_API_NAT_HA_SET_FAILOVER_REPLY, nat_ha_set_failover_reply, e8d4e804) \
_(VL_API_NAT_HA_GET_LISTENER, nat_ha_get_listener, 51077d14) \
_(VL_API_NAT_HA_GET_LISTENER_REPLY, nat_ha_get_listener_reply, 123ea41f) \
_(VL_API_NAT_HA_GET_FAILOVER, nat_ha_get_failover, 51077d14) \
_(VL_API_NAT_HA_GET_FAILOVER_REPLY, nat_ha_get_failover_reply, a67d8752) \
_(VL_API_NAT_HA_FLUSH, nat_ha_flush, 51077d14) \
_(VL_API_NAT_HA_FLUSH_REPLY, nat_ha_flush_reply, e8d4e804) \
_(VL_API_NAT_HA_RESYNC, nat_ha_resync, c8ab9e03) \
_(VL_API_NAT_HA_RESYNC_REPLY, nat_ha_resync_reply, e8d4e804) \
_(VL_API_NAT_HA_RESYNC_COMPLETED_EVENT, nat_ha_resync_completed_event, fdc598fb) \
_(VL_API_NAT44_DEL_USER, nat44_del_user, 99a9f998) \
_(VL_API_NAT44_DEL_USER_REPLY, nat44_del_user_reply, e8d4e804) \
_(VL_API_NAT44_ADD_DEL_ADDRESS_RANGE, nat44_add_del_address_range, d4c7568c) \
_(VL_API_NAT44_ADD_DEL_ADDRESS_RANGE_REPLY, nat44_add_del_address_range_reply, e8d4e804) \
_(VL_API_NAT44_ADDRESS_DUMP, nat44_address_dump, 51077d14) \
_(VL_API_NAT44_ADDRESS_DETAILS, nat44_address_details, 45410ac4) \
_(VL_API_NAT44_INTERFACE_ADD_DEL_FEATURE, nat44_interface_add_del_feature, f3699b83) \
_(VL_API_NAT44_INTERFACE_ADD_DEL_FEATURE_REPLY, nat44_interface_add_del_feature_reply, e8d4e804) \
_(VL_API_NAT44_INTERFACE_DUMP, nat44_interface_dump, 51077d14) \
_(VL_API_NAT44_INTERFACE_DETAILS, nat44_interface_details, 5d286289) \
_(VL_API_NAT44_INTERFACE_ADD_DEL_OUTPUT_FEATURE, nat44_interface_add_del_output_feature, f3699b83) \
_(VL_API_NAT44_INTERFACE_ADD_DEL_OUTPUT_FEATURE_REPLY, nat44_interface_add_del_output_feature_reply, e8d4e804) \
_(VL_API_NAT44_INTERFACE_OUTPUT_FEATURE_DUMP, nat44_interface_output_feature_dump, 51077d14) \
_(VL_API_NAT44_INTERFACE_OUTPUT_FEATURE_DETAILS, nat44_interface_output_feature_details, 5d286289) \
_(VL_API_NAT44_ADD_DEL_STATIC_MAPPING, nat44_add_del_static_mapping, e165e83b) \
_(VL_API_NAT44_ADD_DEL_STATIC_MAPPING_REPLY, nat44_add_del_static_mapping_reply, e8d4e804) \
_(VL_API_NAT44_STATIC_MAPPING_DUMP, nat44_static_mapping_dump, 51077d14) \
_(VL_API_NAT44_STATIC_MAPPING_DETAILS, nat44_static_mapping_details, 1a433ef7) \
_(VL_API_NAT44_ADD_DEL_IDENTITY_MAPPING, nat44_add_del_identity_mapping, 8e12743f) \
_(VL_API_NAT44_ADD_DEL_IDENTITY_MAPPING_REPLY, nat44_add_del_identity_mapping_reply, e8d4e804) \
_(VL_API_NAT44_IDENTITY_MAPPING_DUMP, nat44_identity_mapping_dump, 51077d14) \
_(VL_API_NAT44_IDENTITY_MAPPING_DETAILS, nat44_identity_mapping_details, 36d21351) \
_(VL_API_NAT44_ADD_DEL_INTERFACE_ADDR, nat44_add_del_interface_addr, fc835325) \
_(VL_API_NAT44_ADD_DEL_INTERFACE_ADDR_REPLY, nat44_add_del_interface_addr_reply, e8d4e804) \
_(VL_API_NAT44_INTERFACE_ADDR_DUMP, nat44_interface_addr_dump, 51077d14) \
_(VL_API_NAT44_INTERFACE_ADDR_DETAILS, nat44_interface_addr_details, 3e687514) \
_(VL_API_NAT44_USER_DUMP, nat44_user_dump, 51077d14) \
_(VL_API_NAT44_USER_DETAILS, nat44_user_details, 355896c2) \
_(VL_API_NAT44_USER_SESSION_DUMP, nat44_user_session_dump, e1899c98) \
_(VL_API_NAT44_USER_SESSION_DETAILS, nat44_user_session_details, 1965fd69) \
_(VL_API_NAT44_ADD_DEL_LB_STATIC_MAPPING, nat44_add_del_lb_static_mapping, 53b24611) \
_(VL_API_NAT44_ADD_DEL_LB_STATIC_MAPPING_REPLY, nat44_add_del_lb_static_mapping_reply, e8d4e804) \
_(VL_API_NAT44_LB_STATIC_MAPPING_ADD_DEL_LOCAL, nat44_lb_static_mapping_add_del_local, 2910a151) \
_(VL_API_NAT44_LB_STATIC_MAPPING_ADD_DEL_LOCAL_REPLY, nat44_lb_static_mapping_add_del_local_reply, e8d4e804) \
_(VL_API_NAT44_LB_STATIC_MAPPING_DUMP, nat44_lb_static_mapping_dump, 51077d14) \
_(VL_API_NAT44_LB_STATIC_MAPPING_DETAILS, nat44_lb_static_mapping_details, 2267b9e8) \
_(VL_API_NAT44_DEL_SESSION, nat44_del_session, 4c49c387) \
_(VL_API_NAT44_DEL_SESSION_REPLY, nat44_del_session_reply, e8d4e804) \
_(VL_API_NAT44_FORWARDING_ENABLE_DISABLE, nat44_forwarding_enable_disable, b3e225d2) \
_(VL_API_NAT44_FORWARDING_ENABLE_DISABLE_REPLY, nat44_forwarding_enable_disable_reply, e8d4e804) \
_(VL_API_NAT44_FORWARDING_IS_ENABLED, nat44_forwarding_is_enabled, 51077d14) \
_(VL_API_NAT44_FORWARDING_IS_ENABLED_REPLY, nat44_forwarding_is_enabled_reply, 46924a06) \
_(VL_API_NAT_DET_ADD_DEL_MAP, nat_det_add_del_map, 112fde05) \
_(VL_API_NAT_DET_ADD_DEL_MAP_REPLY, nat_det_add_del_map_reply, e8d4e804) \
_(VL_API_NAT_DET_FORWARD, nat_det_forward, 7f8a89cd) \
_(VL_API_NAT_DET_FORWARD_REPLY, nat_det_forward_reply, a8ccbdc0) \
_(VL_API_NAT_DET_REVERSE, nat_det_reverse, a7573fe1) \
_(VL_API_NAT_DET_REVERSE_REPLY, nat_det_reverse_reply, 34066d48) \
_(VL_API_NAT_DET_MAP_DUMP, nat_det_map_dump, 51077d14) \
_(VL_API_NAT_DET_MAP_DETAILS, nat_det_map_details, 88000ee1) \
_(VL_API_NAT_DET_CLOSE_SESSION_OUT, nat_det_close_session_out, c1b6cbfb) \
_(VL_API_NAT_DET_CLOSE_SESSION_OUT_REPLY, nat_det_close_session_out_reply, e8d4e804) \
_(VL_API_NAT_DET_CLOSE_SESSION_IN, nat_det_close_session_in, 0a10ef64) \
_(VL_API_NAT_DET_CLOSE_SESSION_IN_REPLY, nat_det_close_session_in_reply, e8d4e804) \
_(VL_API_NAT_DET_SESSION_DUMP, nat_det_session_dump, e45a3af7) \
_(VL_API_NAT_DET_SESSION_DETAILS, nat_det_session_details, 27f3c171) \
_(VL_API_NAT64_ADD_DEL_POOL_ADDR_RANGE, nat64_add_del_pool_addr_range, 21234ef3) \
_(VL_API_NAT64_ADD_DEL_POOL_ADDR_RANGE_REPLY, nat64_add_del_pool_addr_range_reply, e8d4e804) \
_(VL_API_NAT64_POOL_ADDR_DUMP, nat64_pool_addr_dump, 51077d14) \
_(VL_API_NAT64_POOL_ADDR_DETAILS, nat64_pool_addr_details, 9bb99cdb) \
_(VL_API_NAT64_ADD_DEL_INTERFACE, nat64_add_del_interface, f3699b83) \
_(VL_API_NAT64_ADD_DEL_INTERFACE_REPLY, nat64_add_del_interface_reply, e8d4e804) \
_(VL_API_NAT64_INTERFACE_DUMP, nat64_interface_dump, 51077d14) \
_(VL_API_NAT64_INTERFACE_DETAILS, nat64_interface_details, 5d286289) \
_(VL_API_NAT64_ADD_DEL_STATIC_BIB, nat64_add_del_static_bib, 90fae58a) \
_(VL_API_NAT64_ADD_DEL_STATIC_BIB_REPLY, nat64_add_del_static_bib_reply, e8d4e804) \
_(VL_API_NAT64_BIB_DUMP, nat64_bib_dump, cfcb6b75) \
_(VL_API_NAT64_BIB_DETAILS, nat64_bib_details, 62c8541d) \
_(VL_API_NAT64_ST_DUMP, nat64_st_dump, cfcb6b75) \
_(VL_API_NAT64_ST_DETAILS, nat64_st_details, c770d620) \
_(VL_API_NAT64_ADD_DEL_PREFIX, nat64_add_del_prefix, 727b2f4c) \
_(VL_API_NAT64_ADD_DEL_PREFIX_REPLY, nat64_add_del_prefix_reply, e8d4e804) \
_(VL_API_NAT64_PREFIX_DUMP, nat64_prefix_dump, 51077d14) \
_(VL_API_NAT64_PREFIX_DETAILS, nat64_prefix_details, 20568de3) \
_(VL_API_NAT64_ADD_DEL_INTERFACE_ADDR, nat64_add_del_interface_addr, 47d6e753) \
_(VL_API_NAT64_ADD_DEL_INTERFACE_ADDR_REPLY, nat64_add_del_interface_addr_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "nat.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_nat_printfun_types
#define included_nat_printfun_types

static inline u8 *format_vl_api_nat_log_level_t (u8 *s, va_list * args)
{
    vl_api_nat_log_level_t *a = va_arg (*args, vl_api_nat_log_level_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "NAT_LOG_NONE");
    case 1:
        return format(s, "NAT_LOG_ERROR");
    case 2:
        return format(s, "NAT_LOG_WARNING");
    case 3:
        return format(s, "NAT_LOG_NOTICE");
    case 4:
        return format(s, "NAT_LOG_INFO");
    case 5:
        return format(s, "NAT_LOG_DEBUG");
    }
    return s;
}

static inline u8 *format_vl_api_nat44_lb_addr_port_t (u8 *s, va_list * args)
{
    vl_api_nat44_lb_addr_port_t *a = va_arg (*args, vl_api_nat44_lb_addr_port_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uaddr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->addr, indent);
    s = format(s, "\n%Uport: %u", format_white_space, indent, a->port);
    s = format(s, "\n%Uprobability: %u", format_white_space, indent, a->probability);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_nat_printfun
#define included_nat_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_nat_control_ping_t_print (vl_api_nat_control_ping_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_control_ping_t: */
    s = format(s, "vl_api_nat_control_ping_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_control_ping_reply_t_print (vl_api_nat_control_ping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_control_ping_reply_t: */
    s = format(s, "vl_api_nat_control_ping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uvpe_pid: %u", format_white_space, indent, a->vpe_pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_show_config_t_print (vl_api_nat_show_config_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_show_config_t: */
    s = format(s, "vl_api_nat_show_config_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_show_config_reply_t_print (vl_api_nat_show_config_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_show_config_reply_t: */
    s = format(s, "vl_api_nat_show_config_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ustatic_mapping_only: %u", format_white_space, indent, a->static_mapping_only);
    s = format(s, "\n%Ustatic_mapping_connection_tracking: %u", format_white_space, indent, a->static_mapping_connection_tracking);
    s = format(s, "\n%Udeterministic: %u", format_white_space, indent, a->deterministic);
    s = format(s, "\n%Uendpoint_dependent: %u", format_white_space, indent, a->endpoint_dependent);
    s = format(s, "\n%Uout2in_dpo: %u", format_white_space, indent, a->out2in_dpo);
    s = format(s, "\n%Udslite_ce: %u", format_white_space, indent, a->dslite_ce);
    s = format(s, "\n%Utranslation_buckets: %u", format_white_space, indent, a->translation_buckets);
    s = format(s, "\n%Utranslation_memory_size: %u", format_white_space, indent, a->translation_memory_size);
    s = format(s, "\n%Uuser_buckets: %u", format_white_space, indent, a->user_buckets);
    s = format(s, "\n%Uuser_memory_size: %llu", format_white_space, indent, a->user_memory_size);
    s = format(s, "\n%Umax_translations_per_user: %u", format_white_space, indent, a->max_translations_per_user);
    s = format(s, "\n%Uoutside_vrf_id: %u", format_white_space, indent, a->outside_vrf_id);
    s = format(s, "\n%Uinside_vrf_id: %u", format_white_space, indent, a->inside_vrf_id);
    s = format(s, "\n%Unat64_bib_buckets: %u", format_white_space, indent, a->nat64_bib_buckets);
    s = format(s, "\n%Unat64_bib_memory_size: %llu", format_white_space, indent, a->nat64_bib_memory_size);
    s = format(s, "\n%Unat64_st_buckets: %u", format_white_space, indent, a->nat64_st_buckets);
    s = format(s, "\n%Unat64_st_memory_size: %llu", format_white_space, indent, a->nat64_st_memory_size);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_session_cleanup_t_print (vl_api_nat44_session_cleanup_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_session_cleanup_t: */
    s = format(s, "vl_api_nat44_session_cleanup_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_session_cleanup_reply_t_print (vl_api_nat44_session_cleanup_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_session_cleanup_reply_t: */
    s = format(s, "vl_api_nat44_session_cleanup_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_set_session_limit_t_print (vl_api_nat44_set_session_limit_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_set_session_limit_t: */
    s = format(s, "vl_api_nat44_set_session_limit_t:");
    s = format(s, "\n%Usession_limit: %u", format_white_space, indent, a->session_limit);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_set_session_limit_reply_t_print (vl_api_nat44_set_session_limit_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_set_session_limit_reply_t: */
    s = format(s, "vl_api_nat44_set_session_limit_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_set_log_level_t_print (vl_api_nat_set_log_level_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_set_log_level_t: */
    s = format(s, "vl_api_nat_set_log_level_t:");
    s = format(s, "\n%Ulog_level: %U", format_white_space, indent, format_vl_api_nat_log_level_t, &a->log_level, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_set_log_level_reply_t_print (vl_api_nat_set_log_level_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_set_log_level_reply_t: */
    s = format(s, "vl_api_nat_set_log_level_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_set_workers_t_print (vl_api_nat_set_workers_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_set_workers_t: */
    s = format(s, "vl_api_nat_set_workers_t:");
    s = format(s, "\n%Uworker_mask: %llu", format_white_space, indent, a->worker_mask);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_set_workers_reply_t_print (vl_api_nat_set_workers_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_set_workers_reply_t: */
    s = format(s, "vl_api_nat_set_workers_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_worker_dump_t_print (vl_api_nat_worker_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_worker_dump_t: */
    s = format(s, "vl_api_nat_worker_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_worker_details_t_print (vl_api_nat_worker_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_worker_details_t: */
    s = format(s, "vl_api_nat_worker_details_t:");
    s = format(s, "\n%Uworker_index: %u", format_white_space, indent, a->worker_index);
    s = format(s, "\n%Ulcore_id: %u", format_white_space, indent, a->lcore_id);
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ipfix_enable_disable_t_print (vl_api_nat_ipfix_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ipfix_enable_disable_t: */
    s = format(s, "vl_api_nat_ipfix_enable_disable_t:");
    s = format(s, "\n%Udomain_id: %u", format_white_space, indent, a->domain_id);
    s = format(s, "\n%Usrc_port: %u", format_white_space, indent, a->src_port);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ipfix_enable_disable_reply_t_print (vl_api_nat_ipfix_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ipfix_enable_disable_reply_t: */
    s = format(s, "vl_api_nat_ipfix_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_set_timeouts_t_print (vl_api_nat_set_timeouts_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_set_timeouts_t: */
    s = format(s, "vl_api_nat_set_timeouts_t:");
    s = format(s, "\n%Uudp: %u", format_white_space, indent, a->udp);
    s = format(s, "\n%Utcp_established: %u", format_white_space, indent, a->tcp_established);
    s = format(s, "\n%Utcp_transitory: %u", format_white_space, indent, a->tcp_transitory);
    s = format(s, "\n%Uicmp: %u", format_white_space, indent, a->icmp);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_set_timeouts_reply_t_print (vl_api_nat_set_timeouts_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_set_timeouts_reply_t: */
    s = format(s, "vl_api_nat_set_timeouts_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_get_timeouts_t_print (vl_api_nat_get_timeouts_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_get_timeouts_t: */
    s = format(s, "vl_api_nat_get_timeouts_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_get_timeouts_reply_t_print (vl_api_nat_get_timeouts_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_get_timeouts_reply_t: */
    s = format(s, "vl_api_nat_get_timeouts_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uudp: %u", format_white_space, indent, a->udp);
    s = format(s, "\n%Utcp_established: %u", format_white_space, indent, a->tcp_established);
    s = format(s, "\n%Utcp_transitory: %u", format_white_space, indent, a->tcp_transitory);
    s = format(s, "\n%Uicmp: %u", format_white_space, indent, a->icmp);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_set_addr_and_port_alloc_alg_t_print (vl_api_nat_set_addr_and_port_alloc_alg_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_set_addr_and_port_alloc_alg_t: */
    s = format(s, "vl_api_nat_set_addr_and_port_alloc_alg_t:");
    s = format(s, "\n%Ualg: %u", format_white_space, indent, a->alg);
    s = format(s, "\n%Upsid_offset: %u", format_white_space, indent, a->psid_offset);
    s = format(s, "\n%Upsid_length: %u", format_white_space, indent, a->psid_length);
    s = format(s, "\n%Upsid: %u", format_white_space, indent, a->psid);
    s = format(s, "\n%Ustart_port: %u", format_white_space, indent, a->start_port);
    s = format(s, "\n%Uend_port: %u", format_white_space, indent, a->end_port);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_set_addr_and_port_alloc_alg_reply_t_print (vl_api_nat_set_addr_and_port_alloc_alg_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_set_addr_and_port_alloc_alg_reply_t: */
    s = format(s, "vl_api_nat_set_addr_and_port_alloc_alg_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_get_addr_and_port_alloc_alg_t_print (vl_api_nat_get_addr_and_port_alloc_alg_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_get_addr_and_port_alloc_alg_t: */
    s = format(s, "vl_api_nat_get_addr_and_port_alloc_alg_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_get_addr_and_port_alloc_alg_reply_t_print (vl_api_nat_get_addr_and_port_alloc_alg_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_get_addr_and_port_alloc_alg_reply_t: */
    s = format(s, "vl_api_nat_get_addr_and_port_alloc_alg_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ualg: %u", format_white_space, indent, a->alg);
    s = format(s, "\n%Upsid_offset: %u", format_white_space, indent, a->psid_offset);
    s = format(s, "\n%Upsid_length: %u", format_white_space, indent, a->psid_length);
    s = format(s, "\n%Upsid: %u", format_white_space, indent, a->psid);
    s = format(s, "\n%Ustart_port: %u", format_white_space, indent, a->start_port);
    s = format(s, "\n%Uend_port: %u", format_white_space, indent, a->end_port);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_set_mss_clamping_t_print (vl_api_nat_set_mss_clamping_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_set_mss_clamping_t: */
    s = format(s, "vl_api_nat_set_mss_clamping_t:");
    s = format(s, "\n%Umss_value: %u", format_white_space, indent, a->mss_value);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_set_mss_clamping_reply_t_print (vl_api_nat_set_mss_clamping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_set_mss_clamping_reply_t: */
    s = format(s, "vl_api_nat_set_mss_clamping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_get_mss_clamping_t_print (vl_api_nat_get_mss_clamping_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_get_mss_clamping_t: */
    s = format(s, "vl_api_nat_get_mss_clamping_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_get_mss_clamping_reply_t_print (vl_api_nat_get_mss_clamping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_get_mss_clamping_reply_t: */
    s = format(s, "vl_api_nat_get_mss_clamping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Umss_value: %u", format_white_space, indent, a->mss_value);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_set_listener_t_print (vl_api_nat_ha_set_listener_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_set_listener_t: */
    s = format(s, "vl_api_nat_ha_set_listener_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip_address, indent);
    s = format(s, "\n%Uport: %u", format_white_space, indent, a->port);
    s = format(s, "\n%Upath_mtu: %u", format_white_space, indent, a->path_mtu);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_set_listener_reply_t_print (vl_api_nat_ha_set_listener_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_set_listener_reply_t: */
    s = format(s, "vl_api_nat_ha_set_listener_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_set_failover_t_print (vl_api_nat_ha_set_failover_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_set_failover_t: */
    s = format(s, "vl_api_nat_ha_set_failover_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip_address, indent);
    s = format(s, "\n%Uport: %u", format_white_space, indent, a->port);
    s = format(s, "\n%Usession_refresh_interval: %u", format_white_space, indent, a->session_refresh_interval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_set_failover_reply_t_print (vl_api_nat_ha_set_failover_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_set_failover_reply_t: */
    s = format(s, "vl_api_nat_ha_set_failover_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_get_listener_t_print (vl_api_nat_ha_get_listener_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_get_listener_t: */
    s = format(s, "vl_api_nat_ha_get_listener_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_get_listener_reply_t_print (vl_api_nat_ha_get_listener_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_get_listener_reply_t: */
    s = format(s, "vl_api_nat_ha_get_listener_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip_address, indent);
    s = format(s, "\n%Uport: %u", format_white_space, indent, a->port);
    s = format(s, "\n%Upath_mtu: %u", format_white_space, indent, a->path_mtu);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_get_failover_t_print (vl_api_nat_ha_get_failover_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_get_failover_t: */
    s = format(s, "vl_api_nat_ha_get_failover_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_get_failover_reply_t_print (vl_api_nat_ha_get_failover_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_get_failover_reply_t: */
    s = format(s, "vl_api_nat_ha_get_failover_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip_address, indent);
    s = format(s, "\n%Uport: %u", format_white_space, indent, a->port);
    s = format(s, "\n%Usession_refresh_interval: %u", format_white_space, indent, a->session_refresh_interval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_flush_t_print (vl_api_nat_ha_flush_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_flush_t: */
    s = format(s, "vl_api_nat_ha_flush_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_flush_reply_t_print (vl_api_nat_ha_flush_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_flush_reply_t: */
    s = format(s, "vl_api_nat_ha_flush_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_resync_t_print (vl_api_nat_ha_resync_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_resync_t: */
    s = format(s, "vl_api_nat_ha_resync_t:");
    s = format(s, "\n%Uwant_resync_event: %u", format_white_space, indent, a->want_resync_event);
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_resync_reply_t_print (vl_api_nat_ha_resync_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_resync_reply_t: */
    s = format(s, "vl_api_nat_ha_resync_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_ha_resync_completed_event_t_print (vl_api_nat_ha_resync_completed_event_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_ha_resync_completed_event_t: */
    s = format(s, "vl_api_nat_ha_resync_completed_event_t:");
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    s = format(s, "\n%Umissed_count: %u", format_white_space, indent, a->missed_count);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_del_user_t_print (vl_api_nat44_del_user_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_del_user_t: */
    s = format(s, "vl_api_nat44_del_user_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip_address, indent);
    s = format(s, "\n%Ufib_index: %u", format_white_space, indent, a->fib_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_del_user_reply_t_print (vl_api_nat44_del_user_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_del_user_reply_t: */
    s = format(s, "vl_api_nat44_del_user_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_add_del_address_range_t_print (vl_api_nat44_add_del_address_range_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_add_del_address_range_t: */
    s = format(s, "vl_api_nat44_add_del_address_range_t:");
    s = format(s, "\n%Ufirst_ip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->first_ip_address, indent);
    s = format(s, "\n%Ulast_ip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->last_ip_address, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_add_del_address_range_reply_t_print (vl_api_nat44_add_del_address_range_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_add_del_address_range_reply_t: */
    s = format(s, "vl_api_nat44_add_del_address_range_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_address_dump_t_print (vl_api_nat44_address_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_address_dump_t: */
    s = format(s, "vl_api_nat44_address_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_address_details_t_print (vl_api_nat44_address_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_address_details_t: */
    s = format(s, "vl_api_nat44_address_details_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip_address, indent);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_interface_add_del_feature_t_print (vl_api_nat44_interface_add_del_feature_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_interface_add_del_feature_t: */
    s = format(s, "vl_api_nat44_interface_add_del_feature_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_interface_add_del_feature_reply_t_print (vl_api_nat44_interface_add_del_feature_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_interface_add_del_feature_reply_t: */
    s = format(s, "vl_api_nat44_interface_add_del_feature_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_interface_dump_t_print (vl_api_nat44_interface_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_interface_dump_t: */
    s = format(s, "vl_api_nat44_interface_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_interface_details_t_print (vl_api_nat44_interface_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_interface_details_t: */
    s = format(s, "vl_api_nat44_interface_details_t:");
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_interface_add_del_output_feature_t_print (vl_api_nat44_interface_add_del_output_feature_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_interface_add_del_output_feature_t: */
    s = format(s, "vl_api_nat44_interface_add_del_output_feature_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_interface_add_del_output_feature_reply_t_print (vl_api_nat44_interface_add_del_output_feature_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_interface_add_del_output_feature_reply_t: */
    s = format(s, "vl_api_nat44_interface_add_del_output_feature_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_interface_output_feature_dump_t_print (vl_api_nat44_interface_output_feature_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_interface_output_feature_dump_t: */
    s = format(s, "vl_api_nat44_interface_output_feature_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_interface_output_feature_details_t_print (vl_api_nat44_interface_output_feature_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_interface_output_feature_details_t: */
    s = format(s, "vl_api_nat44_interface_output_feature_details_t:");
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_add_del_static_mapping_t_print (vl_api_nat44_add_del_static_mapping_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_add_del_static_mapping_t: */
    s = format(s, "vl_api_nat44_add_del_static_mapping_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Ulocal_ip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->local_ip_address, indent);
    s = format(s, "\n%Uexternal_ip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->external_ip_address, indent);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    s = format(s, "\n%Ulocal_port: %u", format_white_space, indent, a->local_port);
    s = format(s, "\n%Uexternal_port: %u", format_white_space, indent, a->external_port);
    s = format(s, "\n%Uexternal_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->external_sw_if_index, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Utag: %s", format_white_space, indent, a->tag);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_add_del_static_mapping_reply_t_print (vl_api_nat44_add_del_static_mapping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_add_del_static_mapping_reply_t: */
    s = format(s, "vl_api_nat44_add_del_static_mapping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_static_mapping_dump_t_print (vl_api_nat44_static_mapping_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_static_mapping_dump_t: */
    s = format(s, "vl_api_nat44_static_mapping_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_static_mapping_details_t_print (vl_api_nat44_static_mapping_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_static_mapping_details_t: */
    s = format(s, "vl_api_nat44_static_mapping_details_t:");
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Ulocal_ip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->local_ip_address, indent);
    s = format(s, "\n%Uexternal_ip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->external_ip_address, indent);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    s = format(s, "\n%Ulocal_port: %u", format_white_space, indent, a->local_port);
    s = format(s, "\n%Uexternal_port: %u", format_white_space, indent, a->external_port);
    s = format(s, "\n%Uexternal_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->external_sw_if_index, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Utag: %s", format_white_space, indent, a->tag);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_add_del_identity_mapping_t_print (vl_api_nat44_add_del_identity_mapping_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_add_del_identity_mapping_t: */
    s = format(s, "vl_api_nat44_add_del_identity_mapping_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip_address, indent);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    s = format(s, "\n%Uport: %u", format_white_space, indent, a->port);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Utag: %s", format_white_space, indent, a->tag);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_add_del_identity_mapping_reply_t_print (vl_api_nat44_add_del_identity_mapping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_add_del_identity_mapping_reply_t: */
    s = format(s, "vl_api_nat44_add_del_identity_mapping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_identity_mapping_dump_t_print (vl_api_nat44_identity_mapping_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_identity_mapping_dump_t: */
    s = format(s, "vl_api_nat44_identity_mapping_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_identity_mapping_details_t_print (vl_api_nat44_identity_mapping_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_identity_mapping_details_t: */
    s = format(s, "vl_api_nat44_identity_mapping_details_t:");
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip_address, indent);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    s = format(s, "\n%Uport: %u", format_white_space, indent, a->port);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Utag: %s", format_white_space, indent, a->tag);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_add_del_interface_addr_t_print (vl_api_nat44_add_del_interface_addr_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_add_del_interface_addr_t: */
    s = format(s, "vl_api_nat44_add_del_interface_addr_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_add_del_interface_addr_reply_t_print (vl_api_nat44_add_del_interface_addr_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_add_del_interface_addr_reply_t: */
    s = format(s, "vl_api_nat44_add_del_interface_addr_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_interface_addr_dump_t_print (vl_api_nat44_interface_addr_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_interface_addr_dump_t: */
    s = format(s, "vl_api_nat44_interface_addr_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_interface_addr_details_t_print (vl_api_nat44_interface_addr_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_interface_addr_details_t: */
    s = format(s, "vl_api_nat44_interface_addr_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_user_dump_t_print (vl_api_nat44_user_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_user_dump_t: */
    s = format(s, "vl_api_nat44_user_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_user_details_t_print (vl_api_nat44_user_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_user_details_t: */
    s = format(s, "vl_api_nat44_user_details_t:");
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip_address, indent);
    s = format(s, "\n%Unsessions: %u", format_white_space, indent, a->nsessions);
    s = format(s, "\n%Unstaticsessions: %u", format_white_space, indent, a->nstaticsessions);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_user_session_dump_t_print (vl_api_nat44_user_session_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_user_session_dump_t: */
    s = format(s, "vl_api_nat44_user_session_dump_t:");
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip_address, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_user_session_details_t_print (vl_api_nat44_user_session_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_user_session_details_t: */
    s = format(s, "vl_api_nat44_user_session_details_t:");
    s = format(s, "\n%Uoutside_ip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->outside_ip_address, indent);
    s = format(s, "\n%Uoutside_port: %u", format_white_space, indent, a->outside_port);
    s = format(s, "\n%Uinside_ip_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->inside_ip_address, indent);
    s = format(s, "\n%Uinside_port: %u", format_white_space, indent, a->inside_port);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Ulast_heard: %llu", format_white_space, indent, a->last_heard);
    s = format(s, "\n%Utotal_bytes: %llu", format_white_space, indent, a->total_bytes);
    s = format(s, "\n%Utotal_pkts: %u", format_white_space, indent, a->total_pkts);
    s = format(s, "\n%Uext_host_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ext_host_address, indent);
    s = format(s, "\n%Uext_host_port: %u", format_white_space, indent, a->ext_host_port);
    s = format(s, "\n%Uext_host_nat_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ext_host_nat_address, indent);
    s = format(s, "\n%Uext_host_nat_port: %u", format_white_space, indent, a->ext_host_nat_port);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_add_del_lb_static_mapping_t_print (vl_api_nat44_add_del_lb_static_mapping_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_add_del_lb_static_mapping_t: */
    s = format(s, "vl_api_nat44_add_del_lb_static_mapping_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Uexternal_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->external_addr, indent);
    s = format(s, "\n%Uexternal_port: %u", format_white_space, indent, a->external_port);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    s = format(s, "\n%Uaffinity: %u", format_white_space, indent, a->affinity);
    s = format(s, "\n%Utag: %s", format_white_space, indent, a->tag);
    s = format(s, "\n%Ulocal_num: %u", format_white_space, indent, a->local_num);
    for (i = 0; i < a->local_num; i++) {
        s = format(s, "\n%Ulocals: %U",
                   format_white_space, indent, format_vl_api_nat44_lb_addr_port_t, &a->locals[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_add_del_lb_static_mapping_reply_t_print (vl_api_nat44_add_del_lb_static_mapping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_add_del_lb_static_mapping_reply_t: */
    s = format(s, "vl_api_nat44_add_del_lb_static_mapping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_lb_static_mapping_add_del_local_t_print (vl_api_nat44_lb_static_mapping_add_del_local_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_lb_static_mapping_add_del_local_t: */
    s = format(s, "vl_api_nat44_lb_static_mapping_add_del_local_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uexternal_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->external_addr, indent);
    s = format(s, "\n%Uexternal_port: %u", format_white_space, indent, a->external_port);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    s = format(s, "\n%Ulocal: %U", format_white_space, indent, format_vl_api_nat44_lb_addr_port_t, &a->local, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_lb_static_mapping_add_del_local_reply_t_print (vl_api_nat44_lb_static_mapping_add_del_local_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_lb_static_mapping_add_del_local_reply_t: */
    s = format(s, "vl_api_nat44_lb_static_mapping_add_del_local_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_lb_static_mapping_dump_t_print (vl_api_nat44_lb_static_mapping_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_lb_static_mapping_dump_t: */
    s = format(s, "vl_api_nat44_lb_static_mapping_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_lb_static_mapping_details_t_print (vl_api_nat44_lb_static_mapping_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_lb_static_mapping_details_t: */
    s = format(s, "vl_api_nat44_lb_static_mapping_details_t:");
    s = format(s, "\n%Uexternal_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->external_addr, indent);
    s = format(s, "\n%Uexternal_port: %u", format_white_space, indent, a->external_port);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Uaffinity: %u", format_white_space, indent, a->affinity);
    s = format(s, "\n%Utag: %s", format_white_space, indent, a->tag);
    s = format(s, "\n%Ulocal_num: %u", format_white_space, indent, a->local_num);
    for (i = 0; i < a->local_num; i++) {
        s = format(s, "\n%Ulocals: %U",
                   format_white_space, indent, format_vl_api_nat44_lb_addr_port_t, &a->locals[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_del_session_t_print (vl_api_nat44_del_session_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_del_session_t: */
    s = format(s, "vl_api_nat44_del_session_t:");
    s = format(s, "\n%Uaddress: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->address, indent);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    s = format(s, "\n%Uport: %u", format_white_space, indent, a->port);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Uext_host_address: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ext_host_address, indent);
    s = format(s, "\n%Uext_host_port: %u", format_white_space, indent, a->ext_host_port);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_del_session_reply_t_print (vl_api_nat44_del_session_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_del_session_reply_t: */
    s = format(s, "vl_api_nat44_del_session_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_forwarding_enable_disable_t_print (vl_api_nat44_forwarding_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_forwarding_enable_disable_t: */
    s = format(s, "vl_api_nat44_forwarding_enable_disable_t:");
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_forwarding_enable_disable_reply_t_print (vl_api_nat44_forwarding_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_forwarding_enable_disable_reply_t: */
    s = format(s, "vl_api_nat44_forwarding_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_forwarding_is_enabled_t_print (vl_api_nat44_forwarding_is_enabled_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_forwarding_is_enabled_t: */
    s = format(s, "vl_api_nat44_forwarding_is_enabled_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat44_forwarding_is_enabled_reply_t_print (vl_api_nat44_forwarding_is_enabled_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat44_forwarding_is_enabled_reply_t: */
    s = format(s, "vl_api_nat44_forwarding_is_enabled_reply_t:");
    s = format(s, "\n%Uenabled: %u", format_white_space, indent, a->enabled);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_add_del_map_t_print (vl_api_nat_det_add_del_map_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_add_del_map_t: */
    s = format(s, "vl_api_nat_det_add_del_map_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uin_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->in_addr, indent);
    s = format(s, "\n%Uin_plen: %u", format_white_space, indent, a->in_plen);
    s = format(s, "\n%Uout_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->out_addr, indent);
    s = format(s, "\n%Uout_plen: %u", format_white_space, indent, a->out_plen);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_add_del_map_reply_t_print (vl_api_nat_det_add_del_map_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_add_del_map_reply_t: */
    s = format(s, "vl_api_nat_det_add_del_map_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_forward_t_print (vl_api_nat_det_forward_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_forward_t: */
    s = format(s, "vl_api_nat_det_forward_t:");
    s = format(s, "\n%Uin_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->in_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_forward_reply_t_print (vl_api_nat_det_forward_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_forward_reply_t: */
    s = format(s, "vl_api_nat_det_forward_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uout_port_lo: %u", format_white_space, indent, a->out_port_lo);
    s = format(s, "\n%Uout_port_hi: %u", format_white_space, indent, a->out_port_hi);
    s = format(s, "\n%Uout_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->out_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_reverse_t_print (vl_api_nat_det_reverse_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_reverse_t: */
    s = format(s, "vl_api_nat_det_reverse_t:");
    s = format(s, "\n%Uout_port: %u", format_white_space, indent, a->out_port);
    s = format(s, "\n%Uout_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->out_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_reverse_reply_t_print (vl_api_nat_det_reverse_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_reverse_reply_t: */
    s = format(s, "vl_api_nat_det_reverse_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uin_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->in_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_map_dump_t_print (vl_api_nat_det_map_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_map_dump_t: */
    s = format(s, "vl_api_nat_det_map_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_map_details_t_print (vl_api_nat_det_map_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_map_details_t: */
    s = format(s, "vl_api_nat_det_map_details_t:");
    s = format(s, "\n%Uin_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->in_addr, indent);
    s = format(s, "\n%Uin_plen: %u", format_white_space, indent, a->in_plen);
    s = format(s, "\n%Uout_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->out_addr, indent);
    s = format(s, "\n%Uout_plen: %u", format_white_space, indent, a->out_plen);
    s = format(s, "\n%Usharing_ratio: %u", format_white_space, indent, a->sharing_ratio);
    s = format(s, "\n%Uports_per_host: %u", format_white_space, indent, a->ports_per_host);
    s = format(s, "\n%Uses_num: %u", format_white_space, indent, a->ses_num);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_close_session_out_t_print (vl_api_nat_det_close_session_out_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_close_session_out_t: */
    s = format(s, "vl_api_nat_det_close_session_out_t:");
    s = format(s, "\n%Uout_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->out_addr, indent);
    s = format(s, "\n%Uout_port: %u", format_white_space, indent, a->out_port);
    s = format(s, "\n%Uext_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ext_addr, indent);
    s = format(s, "\n%Uext_port: %u", format_white_space, indent, a->ext_port);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_close_session_out_reply_t_print (vl_api_nat_det_close_session_out_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_close_session_out_reply_t: */
    s = format(s, "vl_api_nat_det_close_session_out_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_close_session_in_t_print (vl_api_nat_det_close_session_in_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_close_session_in_t: */
    s = format(s, "vl_api_nat_det_close_session_in_t:");
    s = format(s, "\n%Uin_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->in_addr, indent);
    s = format(s, "\n%Uin_port: %u", format_white_space, indent, a->in_port);
    s = format(s, "\n%Uext_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ext_addr, indent);
    s = format(s, "\n%Uext_port: %u", format_white_space, indent, a->ext_port);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_close_session_in_reply_t_print (vl_api_nat_det_close_session_in_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_close_session_in_reply_t: */
    s = format(s, "vl_api_nat_det_close_session_in_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_session_dump_t_print (vl_api_nat_det_session_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_session_dump_t: */
    s = format(s, "vl_api_nat_det_session_dump_t:");
    s = format(s, "\n%Uuser_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->user_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat_det_session_details_t_print (vl_api_nat_det_session_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat_det_session_details_t: */
    s = format(s, "vl_api_nat_det_session_details_t:");
    s = format(s, "\n%Uin_port: %u", format_white_space, indent, a->in_port);
    s = format(s, "\n%Uext_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ext_addr, indent);
    s = format(s, "\n%Uext_port: %u", format_white_space, indent, a->ext_port);
    s = format(s, "\n%Uout_port: %u", format_white_space, indent, a->out_port);
    s = format(s, "\n%Ustate: %u", format_white_space, indent, a->state);
    s = format(s, "\n%Uexpire: %u", format_white_space, indent, a->expire);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_add_del_pool_addr_range_t_print (vl_api_nat64_add_del_pool_addr_range_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_add_del_pool_addr_range_t: */
    s = format(s, "vl_api_nat64_add_del_pool_addr_range_t:");
    s = format(s, "\n%Ustart_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->start_addr, indent);
    s = format(s, "\n%Uend_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->end_addr, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_add_del_pool_addr_range_reply_t_print (vl_api_nat64_add_del_pool_addr_range_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_add_del_pool_addr_range_reply_t: */
    s = format(s, "vl_api_nat64_add_del_pool_addr_range_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_pool_addr_dump_t_print (vl_api_nat64_pool_addr_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_pool_addr_dump_t: */
    s = format(s, "vl_api_nat64_pool_addr_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_pool_addr_details_t_print (vl_api_nat64_pool_addr_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_pool_addr_details_t: */
    s = format(s, "vl_api_nat64_pool_addr_details_t:");
    s = format(s, "\n%Uaddress: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->address, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_add_del_interface_t_print (vl_api_nat64_add_del_interface_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_add_del_interface_t: */
    s = format(s, "vl_api_nat64_add_del_interface_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_add_del_interface_reply_t_print (vl_api_nat64_add_del_interface_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_add_del_interface_reply_t: */
    s = format(s, "vl_api_nat64_add_del_interface_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_interface_dump_t_print (vl_api_nat64_interface_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_interface_dump_t: */
    s = format(s, "vl_api_nat64_interface_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_interface_details_t_print (vl_api_nat64_interface_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_interface_details_t: */
    s = format(s, "vl_api_nat64_interface_details_t:");
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_add_del_static_bib_t_print (vl_api_nat64_add_del_static_bib_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_add_del_static_bib_t: */
    s = format(s, "vl_api_nat64_add_del_static_bib_t:");
    s = format(s, "\n%Ui_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->i_addr, indent);
    s = format(s, "\n%Uo_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->o_addr, indent);
    s = format(s, "\n%Ui_port: %u", format_white_space, indent, a->i_port);
    s = format(s, "\n%Uo_port: %u", format_white_space, indent, a->o_port);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Uproto: %u", format_white_space, indent, a->proto);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_add_del_static_bib_reply_t_print (vl_api_nat64_add_del_static_bib_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_add_del_static_bib_reply_t: */
    s = format(s, "vl_api_nat64_add_del_static_bib_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_bib_dump_t_print (vl_api_nat64_bib_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_bib_dump_t: */
    s = format(s, "vl_api_nat64_bib_dump_t:");
    s = format(s, "\n%Uproto: %u", format_white_space, indent, a->proto);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_bib_details_t_print (vl_api_nat64_bib_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_bib_details_t: */
    s = format(s, "vl_api_nat64_bib_details_t:");
    s = format(s, "\n%Ui_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->i_addr, indent);
    s = format(s, "\n%Uo_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->o_addr, indent);
    s = format(s, "\n%Ui_port: %u", format_white_space, indent, a->i_port);
    s = format(s, "\n%Uo_port: %u", format_white_space, indent, a->o_port);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Uproto: %u", format_white_space, indent, a->proto);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_nat_config_flags_t, &a->flags, indent);
    s = format(s, "\n%Uses_num: %u", format_white_space, indent, a->ses_num);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_st_dump_t_print (vl_api_nat64_st_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_st_dump_t: */
    s = format(s, "vl_api_nat64_st_dump_t:");
    s = format(s, "\n%Uproto: %u", format_white_space, indent, a->proto);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_st_details_t_print (vl_api_nat64_st_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_st_details_t: */
    s = format(s, "vl_api_nat64_st_details_t:");
    s = format(s, "\n%Uil_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->il_addr, indent);
    s = format(s, "\n%Uol_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ol_addr, indent);
    s = format(s, "\n%Uil_port: %u", format_white_space, indent, a->il_port);
    s = format(s, "\n%Uol_port: %u", format_white_space, indent, a->ol_port);
    s = format(s, "\n%Uir_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->ir_addr, indent);
    s = format(s, "\n%Uor_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->or_addr, indent);
    s = format(s, "\n%Ur_port: %u", format_white_space, indent, a->r_port);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Uproto: %u", format_white_space, indent, a->proto);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_add_del_prefix_t_print (vl_api_nat64_add_del_prefix_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_add_del_prefix_t: */
    s = format(s, "vl_api_nat64_add_del_prefix_t:");
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_ip6_prefix_t, &a->prefix, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_add_del_prefix_reply_t_print (vl_api_nat64_add_del_prefix_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_add_del_prefix_reply_t: */
    s = format(s, "vl_api_nat64_add_del_prefix_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_prefix_dump_t_print (vl_api_nat64_prefix_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_prefix_dump_t: */
    s = format(s, "vl_api_nat64_prefix_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_prefix_details_t_print (vl_api_nat64_prefix_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_prefix_details_t: */
    s = format(s, "vl_api_nat64_prefix_details_t:");
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_ip6_prefix_t, &a->prefix, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_add_del_interface_addr_t_print (vl_api_nat64_add_del_interface_addr_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_add_del_interface_addr_t: */
    s = format(s, "vl_api_nat64_add_del_interface_addr_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_nat64_add_del_interface_addr_reply_t_print (vl_api_nat64_add_del_interface_addr_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_nat64_add_del_interface_addr_reply_t: */
    s = format(s, "vl_api_nat64_add_del_interface_addr_reply_t:");
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
#ifndef included_nat_endianfun
#define included_nat_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_nat_log_level_t_endian (vl_api_nat_log_level_t *a)
{
    int i __attribute__((unused));
    /* a->nat_log_level = a->nat_log_level (no-op) */
}

static inline void vl_api_nat44_lb_addr_port_t_endian (vl_api_nat44_lb_addr_port_t *a)
{
    int i __attribute__((unused));
    vl_api_ip4_address_t_endian(&a->addr);
    a->port = clib_net_to_host_u16(a->port);
    /* a->probability = a->probability (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

static inline void vl_api_nat_control_ping_t_endian (vl_api_nat_control_ping_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat_control_ping_reply_t_endian (vl_api_nat_control_ping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->client_index = a->client_index (no-op) */
    a->vpe_pid = clib_net_to_host_u32(a->vpe_pid);
}

static inline void vl_api_nat_show_config_t_endian (vl_api_nat_show_config_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat_show_config_reply_t_endian (vl_api_nat_show_config_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->static_mapping_only = a->static_mapping_only (no-op) */
    /* a->static_mapping_connection_tracking = a->static_mapping_connection_tracking (no-op) */
    /* a->deterministic = a->deterministic (no-op) */
    /* a->endpoint_dependent = a->endpoint_dependent (no-op) */
    /* a->out2in_dpo = a->out2in_dpo (no-op) */
    /* a->dslite_ce = a->dslite_ce (no-op) */
    a->translation_buckets = clib_net_to_host_u32(a->translation_buckets);
    a->translation_memory_size = clib_net_to_host_u32(a->translation_memory_size);
    a->user_buckets = clib_net_to_host_u32(a->user_buckets);
    a->user_memory_size = clib_net_to_host_u64(a->user_memory_size);
    a->max_translations_per_user = clib_net_to_host_u32(a->max_translations_per_user);
    a->outside_vrf_id = clib_net_to_host_u32(a->outside_vrf_id);
    a->inside_vrf_id = clib_net_to_host_u32(a->inside_vrf_id);
    a->nat64_bib_buckets = clib_net_to_host_u32(a->nat64_bib_buckets);
    a->nat64_bib_memory_size = clib_net_to_host_u64(a->nat64_bib_memory_size);
    a->nat64_st_buckets = clib_net_to_host_u32(a->nat64_st_buckets);
    a->nat64_st_memory_size = clib_net_to_host_u64(a->nat64_st_memory_size);
}

static inline void vl_api_nat44_session_cleanup_t_endian (vl_api_nat44_session_cleanup_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat44_session_cleanup_reply_t_endian (vl_api_nat44_session_cleanup_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat44_set_session_limit_t_endian (vl_api_nat44_set_session_limit_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->session_limit = clib_net_to_host_u32(a->session_limit);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

static inline void vl_api_nat44_set_session_limit_reply_t_endian (vl_api_nat44_set_session_limit_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_set_log_level_t_endian (vl_api_nat_set_log_level_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_nat_log_level_t_endian(&a->log_level);
}

static inline void vl_api_nat_set_log_level_reply_t_endian (vl_api_nat_set_log_level_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_set_workers_t_endian (vl_api_nat_set_workers_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->worker_mask = clib_net_to_host_u64(a->worker_mask);
}

static inline void vl_api_nat_set_workers_reply_t_endian (vl_api_nat_set_workers_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_worker_dump_t_endian (vl_api_nat_worker_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat_worker_details_t_endian (vl_api_nat_worker_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->worker_index = clib_net_to_host_u32(a->worker_index);
    a->lcore_id = clib_net_to_host_u32(a->lcore_id);
    /* a->name = a->name (no-op) */
}

static inline void vl_api_nat_ipfix_enable_disable_t_endian (vl_api_nat_ipfix_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->domain_id = clib_net_to_host_u32(a->domain_id);
    a->src_port = clib_net_to_host_u16(a->src_port);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_nat_ipfix_enable_disable_reply_t_endian (vl_api_nat_ipfix_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_set_timeouts_t_endian (vl_api_nat_set_timeouts_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->udp = clib_net_to_host_u32(a->udp);
    a->tcp_established = clib_net_to_host_u32(a->tcp_established);
    a->tcp_transitory = clib_net_to_host_u32(a->tcp_transitory);
    a->icmp = clib_net_to_host_u32(a->icmp);
}

static inline void vl_api_nat_set_timeouts_reply_t_endian (vl_api_nat_set_timeouts_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_get_timeouts_t_endian (vl_api_nat_get_timeouts_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat_get_timeouts_reply_t_endian (vl_api_nat_get_timeouts_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->udp = clib_net_to_host_u32(a->udp);
    a->tcp_established = clib_net_to_host_u32(a->tcp_established);
    a->tcp_transitory = clib_net_to_host_u32(a->tcp_transitory);
    a->icmp = clib_net_to_host_u32(a->icmp);
}

static inline void vl_api_nat_set_addr_and_port_alloc_alg_t_endian (vl_api_nat_set_addr_and_port_alloc_alg_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->alg = a->alg (no-op) */
    /* a->psid_offset = a->psid_offset (no-op) */
    /* a->psid_length = a->psid_length (no-op) */
    a->psid = clib_net_to_host_u16(a->psid);
    a->start_port = clib_net_to_host_u16(a->start_port);
    a->end_port = clib_net_to_host_u16(a->end_port);
}

static inline void vl_api_nat_set_addr_and_port_alloc_alg_reply_t_endian (vl_api_nat_set_addr_and_port_alloc_alg_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_get_addr_and_port_alloc_alg_t_endian (vl_api_nat_get_addr_and_port_alloc_alg_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat_get_addr_and_port_alloc_alg_reply_t_endian (vl_api_nat_get_addr_and_port_alloc_alg_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->alg = a->alg (no-op) */
    /* a->psid_offset = a->psid_offset (no-op) */
    /* a->psid_length = a->psid_length (no-op) */
    a->psid = clib_net_to_host_u16(a->psid);
    a->start_port = clib_net_to_host_u16(a->start_port);
    a->end_port = clib_net_to_host_u16(a->end_port);
}

static inline void vl_api_nat_set_mss_clamping_t_endian (vl_api_nat_set_mss_clamping_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->mss_value = clib_net_to_host_u16(a->mss_value);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_nat_set_mss_clamping_reply_t_endian (vl_api_nat_set_mss_clamping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_get_mss_clamping_t_endian (vl_api_nat_get_mss_clamping_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat_get_mss_clamping_reply_t_endian (vl_api_nat_get_mss_clamping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->mss_value = clib_net_to_host_u16(a->mss_value);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_nat_ha_set_listener_t_endian (vl_api_nat_ha_set_listener_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->ip_address);
    a->port = clib_net_to_host_u16(a->port);
    a->path_mtu = clib_net_to_host_u32(a->path_mtu);
}

static inline void vl_api_nat_ha_set_listener_reply_t_endian (vl_api_nat_ha_set_listener_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_ha_set_failover_t_endian (vl_api_nat_ha_set_failover_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->ip_address);
    a->port = clib_net_to_host_u16(a->port);
    a->session_refresh_interval = clib_net_to_host_u32(a->session_refresh_interval);
}

static inline void vl_api_nat_ha_set_failover_reply_t_endian (vl_api_nat_ha_set_failover_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_ha_get_listener_t_endian (vl_api_nat_ha_get_listener_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat_ha_get_listener_reply_t_endian (vl_api_nat_ha_get_listener_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_ip4_address_t_endian(&a->ip_address);
    a->port = clib_net_to_host_u16(a->port);
    a->path_mtu = clib_net_to_host_u32(a->path_mtu);
}

static inline void vl_api_nat_ha_get_failover_t_endian (vl_api_nat_ha_get_failover_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat_ha_get_failover_reply_t_endian (vl_api_nat_ha_get_failover_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_ip4_address_t_endian(&a->ip_address);
    a->port = clib_net_to_host_u16(a->port);
    a->session_refresh_interval = clib_net_to_host_u32(a->session_refresh_interval);
}

static inline void vl_api_nat_ha_flush_t_endian (vl_api_nat_ha_flush_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat_ha_flush_reply_t_endian (vl_api_nat_ha_flush_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_ha_resync_t_endian (vl_api_nat_ha_resync_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->want_resync_event = a->want_resync_event (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

static inline void vl_api_nat_ha_resync_reply_t_endian (vl_api_nat_ha_resync_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_ha_resync_completed_event_t_endian (vl_api_nat_ha_resync_completed_event_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
    a->missed_count = clib_net_to_host_u32(a->missed_count);
}

static inline void vl_api_nat44_del_user_t_endian (vl_api_nat44_del_user_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->ip_address);
    a->fib_index = clib_net_to_host_u32(a->fib_index);
}

static inline void vl_api_nat44_del_user_reply_t_endian (vl_api_nat44_del_user_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat44_add_del_address_range_t_endian (vl_api_nat44_add_del_address_range_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->first_ip_address);
    vl_api_ip4_address_t_endian(&a->last_ip_address);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->is_add = a->is_add (no-op) */
    vl_api_nat_config_flags_t_endian(&a->flags);
}

static inline void vl_api_nat44_add_del_address_range_reply_t_endian (vl_api_nat44_add_del_address_range_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat44_address_dump_t_endian (vl_api_nat44_address_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat44_address_details_t_endian (vl_api_nat44_address_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->ip_address);
    vl_api_nat_config_flags_t_endian(&a->flags);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

static inline void vl_api_nat44_interface_add_del_feature_t_endian (vl_api_nat44_interface_add_del_feature_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_nat44_interface_add_del_feature_reply_t_endian (vl_api_nat44_interface_add_del_feature_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat44_interface_dump_t_endian (vl_api_nat44_interface_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat44_interface_details_t_endian (vl_api_nat44_interface_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_nat44_interface_add_del_output_feature_t_endian (vl_api_nat44_interface_add_del_output_feature_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_nat44_interface_add_del_output_feature_reply_t_endian (vl_api_nat44_interface_add_del_output_feature_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat44_interface_output_feature_dump_t_endian (vl_api_nat44_interface_output_feature_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat44_interface_output_feature_details_t_endian (vl_api_nat44_interface_output_feature_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_nat44_add_del_static_mapping_t_endian (vl_api_nat44_add_del_static_mapping_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_ip4_address_t_endian(&a->local_ip_address);
    vl_api_ip4_address_t_endian(&a->external_ip_address);
    /* a->protocol = a->protocol (no-op) */
    a->local_port = clib_net_to_host_u16(a->local_port);
    a->external_port = clib_net_to_host_u16(a->external_port);
    vl_api_interface_index_t_endian(&a->external_sw_if_index);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->tag = a->tag (no-op) */
}

static inline void vl_api_nat44_add_del_static_mapping_reply_t_endian (vl_api_nat44_add_del_static_mapping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat44_static_mapping_dump_t_endian (vl_api_nat44_static_mapping_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat44_static_mapping_details_t_endian (vl_api_nat44_static_mapping_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_ip4_address_t_endian(&a->local_ip_address);
    vl_api_ip4_address_t_endian(&a->external_ip_address);
    /* a->protocol = a->protocol (no-op) */
    a->local_port = clib_net_to_host_u16(a->local_port);
    a->external_port = clib_net_to_host_u16(a->external_port);
    vl_api_interface_index_t_endian(&a->external_sw_if_index);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->tag = a->tag (no-op) */
}

static inline void vl_api_nat44_add_del_identity_mapping_t_endian (vl_api_nat44_add_del_identity_mapping_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_ip4_address_t_endian(&a->ip_address);
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->tag = a->tag (no-op) */
}

static inline void vl_api_nat44_add_del_identity_mapping_reply_t_endian (vl_api_nat44_add_del_identity_mapping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat44_identity_mapping_dump_t_endian (vl_api_nat44_identity_mapping_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat44_identity_mapping_details_t_endian (vl_api_nat44_identity_mapping_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_ip4_address_t_endian(&a->ip_address);
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->tag = a->tag (no-op) */
}

static inline void vl_api_nat44_add_del_interface_addr_t_endian (vl_api_nat44_add_del_interface_addr_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_nat_config_flags_t_endian(&a->flags);
}

static inline void vl_api_nat44_add_del_interface_addr_reply_t_endian (vl_api_nat44_add_del_interface_addr_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat44_interface_addr_dump_t_endian (vl_api_nat44_interface_addr_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat44_interface_addr_details_t_endian (vl_api_nat44_interface_addr_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_nat_config_flags_t_endian(&a->flags);
}

static inline void vl_api_nat44_user_dump_t_endian (vl_api_nat44_user_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat44_user_details_t_endian (vl_api_nat44_user_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    vl_api_ip4_address_t_endian(&a->ip_address);
    a->nsessions = clib_net_to_host_u32(a->nsessions);
    a->nstaticsessions = clib_net_to_host_u32(a->nstaticsessions);
}

static inline void vl_api_nat44_user_session_dump_t_endian (vl_api_nat44_user_session_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->ip_address);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

static inline void vl_api_nat44_user_session_details_t_endian (vl_api_nat44_user_session_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->outside_ip_address);
    a->outside_port = clib_net_to_host_u16(a->outside_port);
    vl_api_ip4_address_t_endian(&a->inside_ip_address);
    a->inside_port = clib_net_to_host_u16(a->inside_port);
    a->protocol = clib_net_to_host_u16(a->protocol);
    vl_api_nat_config_flags_t_endian(&a->flags);
    a->last_heard = clib_net_to_host_u64(a->last_heard);
    a->total_bytes = clib_net_to_host_u64(a->total_bytes);
    a->total_pkts = clib_net_to_host_u32(a->total_pkts);
    vl_api_ip4_address_t_endian(&a->ext_host_address);
    a->ext_host_port = clib_net_to_host_u16(a->ext_host_port);
    vl_api_ip4_address_t_endian(&a->ext_host_nat_address);
    a->ext_host_nat_port = clib_net_to_host_u16(a->ext_host_nat_port);
}

/***** manual: vl_api_nat44_add_del_lb_static_mapping_t_endian  *****/

static inline void vl_api_nat44_add_del_lb_static_mapping_reply_t_endian (vl_api_nat44_add_del_lb_static_mapping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat44_lb_static_mapping_add_del_local_t_endian (vl_api_nat44_lb_static_mapping_add_del_local_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_ip4_address_t_endian(&a->external_addr);
    a->external_port = clib_net_to_host_u16(a->external_port);
    /* a->protocol = a->protocol (no-op) */
    vl_api_nat44_lb_addr_port_t_endian(&a->local);
}

static inline void vl_api_nat44_lb_static_mapping_add_del_local_reply_t_endian (vl_api_nat44_lb_static_mapping_add_del_local_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat44_lb_static_mapping_dump_t_endian (vl_api_nat44_lb_static_mapping_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

/***** manual: vl_api_nat44_lb_static_mapping_details_t_endian  *****/

static inline void vl_api_nat44_del_session_t_endian (vl_api_nat44_del_session_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->address);
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_ip4_address_t_endian(&a->ext_host_address);
    a->ext_host_port = clib_net_to_host_u16(a->ext_host_port);
}

static inline void vl_api_nat44_del_session_reply_t_endian (vl_api_nat44_del_session_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat44_forwarding_enable_disable_t_endian (vl_api_nat44_forwarding_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_nat44_forwarding_enable_disable_reply_t_endian (vl_api_nat44_forwarding_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat44_forwarding_is_enabled_t_endian (vl_api_nat44_forwarding_is_enabled_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat44_forwarding_is_enabled_reply_t_endian (vl_api_nat44_forwarding_is_enabled_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enabled = a->enabled (no-op) */
}

static inline void vl_api_nat_det_add_del_map_t_endian (vl_api_nat_det_add_del_map_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_ip4_address_t_endian(&a->in_addr);
    /* a->in_plen = a->in_plen (no-op) */
    vl_api_ip4_address_t_endian(&a->out_addr);
    /* a->out_plen = a->out_plen (no-op) */
}

static inline void vl_api_nat_det_add_del_map_reply_t_endian (vl_api_nat_det_add_del_map_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_det_forward_t_endian (vl_api_nat_det_forward_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->in_addr);
}

static inline void vl_api_nat_det_forward_reply_t_endian (vl_api_nat_det_forward_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->out_port_lo = clib_net_to_host_u16(a->out_port_lo);
    a->out_port_hi = clib_net_to_host_u16(a->out_port_hi);
    vl_api_ip4_address_t_endian(&a->out_addr);
}

static inline void vl_api_nat_det_reverse_t_endian (vl_api_nat_det_reverse_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->out_port = clib_net_to_host_u16(a->out_port);
    vl_api_ip4_address_t_endian(&a->out_addr);
}

static inline void vl_api_nat_det_reverse_reply_t_endian (vl_api_nat_det_reverse_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_ip4_address_t_endian(&a->in_addr);
}

static inline void vl_api_nat_det_map_dump_t_endian (vl_api_nat_det_map_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat_det_map_details_t_endian (vl_api_nat_det_map_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->in_addr);
    /* a->in_plen = a->in_plen (no-op) */
    vl_api_ip4_address_t_endian(&a->out_addr);
    /* a->out_plen = a->out_plen (no-op) */
    a->sharing_ratio = clib_net_to_host_u32(a->sharing_ratio);
    a->ports_per_host = clib_net_to_host_u16(a->ports_per_host);
    a->ses_num = clib_net_to_host_u32(a->ses_num);
}

static inline void vl_api_nat_det_close_session_out_t_endian (vl_api_nat_det_close_session_out_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->out_addr);
    a->out_port = clib_net_to_host_u16(a->out_port);
    vl_api_ip4_address_t_endian(&a->ext_addr);
    a->ext_port = clib_net_to_host_u16(a->ext_port);
}

static inline void vl_api_nat_det_close_session_out_reply_t_endian (vl_api_nat_det_close_session_out_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_det_close_session_in_t_endian (vl_api_nat_det_close_session_in_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->in_addr);
    a->in_port = clib_net_to_host_u16(a->in_port);
    vl_api_ip4_address_t_endian(&a->ext_addr);
    a->ext_port = clib_net_to_host_u16(a->ext_port);
}

static inline void vl_api_nat_det_close_session_in_reply_t_endian (vl_api_nat_det_close_session_in_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat_det_session_dump_t_endian (vl_api_nat_det_session_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->user_addr);
}

static inline void vl_api_nat_det_session_details_t_endian (vl_api_nat_det_session_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->in_port = clib_net_to_host_u16(a->in_port);
    vl_api_ip4_address_t_endian(&a->ext_addr);
    a->ext_port = clib_net_to_host_u16(a->ext_port);
    a->out_port = clib_net_to_host_u16(a->out_port);
    /* a->state = a->state (no-op) */
    a->expire = clib_net_to_host_u32(a->expire);
}

static inline void vl_api_nat64_add_del_pool_addr_range_t_endian (vl_api_nat64_add_del_pool_addr_range_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->start_addr);
    vl_api_ip4_address_t_endian(&a->end_addr);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_nat64_add_del_pool_addr_range_reply_t_endian (vl_api_nat64_add_del_pool_addr_range_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat64_pool_addr_dump_t_endian (vl_api_nat64_pool_addr_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat64_pool_addr_details_t_endian (vl_api_nat64_pool_addr_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->address);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

static inline void vl_api_nat64_add_del_interface_t_endian (vl_api_nat64_add_del_interface_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_nat64_add_del_interface_reply_t_endian (vl_api_nat64_add_del_interface_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat64_interface_dump_t_endian (vl_api_nat64_interface_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat64_interface_details_t_endian (vl_api_nat64_interface_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_nat_config_flags_t_endian(&a->flags);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_nat64_add_del_static_bib_t_endian (vl_api_nat64_add_del_static_bib_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_address_t_endian(&a->i_addr);
    vl_api_ip4_address_t_endian(&a->o_addr);
    a->i_port = clib_net_to_host_u16(a->i_port);
    a->o_port = clib_net_to_host_u16(a->o_port);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->proto = a->proto (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_nat64_add_del_static_bib_reply_t_endian (vl_api_nat64_add_del_static_bib_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat64_bib_dump_t_endian (vl_api_nat64_bib_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->proto = a->proto (no-op) */
}

static inline void vl_api_nat64_bib_details_t_endian (vl_api_nat64_bib_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_address_t_endian(&a->i_addr);
    vl_api_ip4_address_t_endian(&a->o_addr);
    a->i_port = clib_net_to_host_u16(a->i_port);
    a->o_port = clib_net_to_host_u16(a->o_port);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->proto = a->proto (no-op) */
    vl_api_nat_config_flags_t_endian(&a->flags);
    a->ses_num = clib_net_to_host_u32(a->ses_num);
}

static inline void vl_api_nat64_st_dump_t_endian (vl_api_nat64_st_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->proto = a->proto (no-op) */
}

static inline void vl_api_nat64_st_details_t_endian (vl_api_nat64_st_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_address_t_endian(&a->il_addr);
    vl_api_ip4_address_t_endian(&a->ol_addr);
    a->il_port = clib_net_to_host_u16(a->il_port);
    a->ol_port = clib_net_to_host_u16(a->ol_port);
    vl_api_ip6_address_t_endian(&a->ir_addr);
    vl_api_ip4_address_t_endian(&a->or_addr);
    a->r_port = clib_net_to_host_u16(a->r_port);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->proto = a->proto (no-op) */
}

static inline void vl_api_nat64_add_del_prefix_t_endian (vl_api_nat64_add_del_prefix_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_prefix_t_endian(&a->prefix);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_nat64_add_del_prefix_reply_t_endian (vl_api_nat64_add_del_prefix_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_nat64_prefix_dump_t_endian (vl_api_nat64_prefix_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_nat64_prefix_details_t_endian (vl_api_nat64_prefix_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_prefix_t_endian(&a->prefix);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

static inline void vl_api_nat64_add_del_interface_addr_t_endian (vl_api_nat64_add_del_interface_addr_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_nat64_add_del_interface_addr_reply_t_endian (vl_api_nat64_add_del_interface_addr_reply_t *a)
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

vl_api_version_tuple(nat.api, 5, 2, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(nat.api, 0xb3014cbc)

#endif

