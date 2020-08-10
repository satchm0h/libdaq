#ifndef included_nat_api_types_h
#define included_nat_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/interface_types.api_types.h>
#include <nat/nat_types.api_types.h>
typedef enum __attribute__((packed)) {
    NAT_LOG_NONE = 0,
    NAT_LOG_ERROR = 1,
    NAT_LOG_WARNING = 2,
    NAT_LOG_NOTICE = 3,
    NAT_LOG_INFO = 4,
    NAT_LOG_DEBUG = 5,
} vl_api_nat_log_level_t;
STATIC_ASSERT(sizeof(vl_api_nat_log_level_t) == sizeof(u8), "size of API enum nat_log_level is wrong");
typedef struct __attribute__ ((packed)) _vl_api_nat44_lb_addr_port {
    vl_api_ip4_address_t addr;
    u16 port;
    u8 probability;
    u32 vrf_id;
} vl_api_nat44_lb_addr_port_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_control_ping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat_control_ping_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_control_ping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 client_index;
    u32 vpe_pid;
} vl_api_nat_control_ping_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_show_config {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat_show_config_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_show_config_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    bool static_mapping_only;
    bool static_mapping_connection_tracking;
    bool deterministic;
    bool endpoint_dependent;
    bool out2in_dpo;
    bool dslite_ce;
    u32 translation_buckets;
    u32 translation_memory_size;
    u32 user_buckets;
    u64 user_memory_size;
    u32 max_translations_per_user;
    u32 outside_vrf_id;
    u32 inside_vrf_id;
    u32 nat64_bib_buckets;
    u64 nat64_bib_memory_size;
    u32 nat64_st_buckets;
    u64 nat64_st_memory_size;
} vl_api_nat_show_config_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_session_cleanup {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat44_session_cleanup_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_session_cleanup_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_session_cleanup_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_set_session_limit {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 session_limit;
    u32 vrf_id;
} vl_api_nat44_set_session_limit_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_set_session_limit_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_set_session_limit_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_set_log_level {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_nat_log_level_t log_level;
} vl_api_nat_set_log_level_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_set_log_level_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_set_log_level_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_set_workers {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 worker_mask;
} vl_api_nat_set_workers_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_set_workers_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_set_workers_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_worker_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat_worker_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_worker_details {
    u16 _vl_msg_id;
    u32 context;
    u32 worker_index;
    u32 lcore_id;
    u8 name[64];
} vl_api_nat_worker_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ipfix_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 domain_id;
    u16 src_port;
    bool enable;
} vl_api_nat_ipfix_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ipfix_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_ipfix_enable_disable_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_set_timeouts {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 udp;
    u32 tcp_established;
    u32 tcp_transitory;
    u32 icmp;
} vl_api_nat_set_timeouts_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_set_timeouts_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_set_timeouts_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_get_timeouts {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat_get_timeouts_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_get_timeouts_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 udp;
    u32 tcp_established;
    u32 tcp_transitory;
    u32 icmp;
} vl_api_nat_get_timeouts_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_set_addr_and_port_alloc_alg {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 alg;
    u8 psid_offset;
    u8 psid_length;
    u16 psid;
    u16 start_port;
    u16 end_port;
} vl_api_nat_set_addr_and_port_alloc_alg_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_set_addr_and_port_alloc_alg_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_set_addr_and_port_alloc_alg_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_get_addr_and_port_alloc_alg {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat_get_addr_and_port_alloc_alg_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_get_addr_and_port_alloc_alg_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 alg;
    u8 psid_offset;
    u8 psid_length;
    u16 psid;
    u16 start_port;
    u16 end_port;
} vl_api_nat_get_addr_and_port_alloc_alg_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_set_mss_clamping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 mss_value;
    bool enable;
} vl_api_nat_set_mss_clamping_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_set_mss_clamping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_set_mss_clamping_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_get_mss_clamping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat_get_mss_clamping_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_get_mss_clamping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u16 mss_value;
    bool enable;
} vl_api_nat_get_mss_clamping_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_set_listener {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip_address;
    u16 port;
    u32 path_mtu;
} vl_api_nat_ha_set_listener_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_set_listener_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_ha_set_listener_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_set_failover {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip_address;
    u16 port;
    u32 session_refresh_interval;
} vl_api_nat_ha_set_failover_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_set_failover_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_ha_set_failover_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_get_listener {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat_ha_get_listener_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_get_listener_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ip4_address_t ip_address;
    u16 port;
    u32 path_mtu;
} vl_api_nat_ha_get_listener_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_get_failover {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat_ha_get_failover_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_get_failover_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ip4_address_t ip_address;
    u16 port;
    u32 session_refresh_interval;
} vl_api_nat_ha_get_failover_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_flush {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat_ha_flush_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_flush_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_ha_flush_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_resync {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 want_resync_event;
    u32 pid;
} vl_api_nat_ha_resync_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_resync_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_ha_resync_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_ha_resync_completed_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    u32 missed_count;
} vl_api_nat_ha_resync_completed_event_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_del_user {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip_address;
    u32 fib_index;
} vl_api_nat44_del_user_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_del_user_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_del_user_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_add_del_address_range {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t first_ip_address;
    vl_api_ip4_address_t last_ip_address;
    u32 vrf_id;
    bool is_add;
    vl_api_nat_config_flags_t flags;
} vl_api_nat44_add_del_address_range_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_add_del_address_range_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_add_del_address_range_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_address_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat44_address_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_address_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip4_address_t ip_address;
    vl_api_nat_config_flags_t flags;
    u32 vrf_id;
} vl_api_nat44_address_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_interface_add_del_feature {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
} vl_api_nat44_interface_add_del_feature_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_interface_add_del_feature_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_interface_add_del_feature_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_interface_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat44_interface_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_interface_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
} vl_api_nat44_interface_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_interface_add_del_output_feature {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
} vl_api_nat44_interface_add_del_output_feature_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_interface_add_del_output_feature_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_interface_add_del_output_feature_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_interface_output_feature_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat44_interface_output_feature_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_interface_output_feature_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
} vl_api_nat44_interface_output_feature_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_add_del_static_mapping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_ip4_address_t local_ip_address;
    vl_api_ip4_address_t external_ip_address;
    u8 protocol;
    u16 local_port;
    u16 external_port;
    vl_api_interface_index_t external_sw_if_index;
    u32 vrf_id;
    u8 tag[64];
} vl_api_nat44_add_del_static_mapping_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_add_del_static_mapping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_add_del_static_mapping_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_static_mapping_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat44_static_mapping_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_static_mapping_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_nat_config_flags_t flags;
    vl_api_ip4_address_t local_ip_address;
    vl_api_ip4_address_t external_ip_address;
    u8 protocol;
    u16 local_port;
    u16 external_port;
    vl_api_interface_index_t external_sw_if_index;
    u32 vrf_id;
    u8 tag[64];
} vl_api_nat44_static_mapping_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_add_del_identity_mapping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_ip4_address_t ip_address;
    u8 protocol;
    u16 port;
    vl_api_interface_index_t sw_if_index;
    u32 vrf_id;
    u8 tag[64];
} vl_api_nat44_add_del_identity_mapping_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_add_del_identity_mapping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_add_del_identity_mapping_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_identity_mapping_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat44_identity_mapping_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_identity_mapping_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_nat_config_flags_t flags;
    vl_api_ip4_address_t ip_address;
    u8 protocol;
    u16 port;
    vl_api_interface_index_t sw_if_index;
    u32 vrf_id;
    u8 tag[64];
} vl_api_nat44_identity_mapping_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_add_del_interface_addr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_interface_index_t sw_if_index;
    vl_api_nat_config_flags_t flags;
} vl_api_nat44_add_del_interface_addr_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_add_del_interface_addr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_add_del_interface_addr_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_interface_addr_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat44_interface_addr_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_interface_addr_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_nat_config_flags_t flags;
} vl_api_nat44_interface_addr_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_user_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat44_user_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_user_details {
    u16 _vl_msg_id;
    u32 context;
    u32 vrf_id;
    vl_api_ip4_address_t ip_address;
    u32 nsessions;
    u32 nstaticsessions;
} vl_api_nat44_user_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_user_session_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip_address;
    u32 vrf_id;
} vl_api_nat44_user_session_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_user_session_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip4_address_t outside_ip_address;
    u16 outside_port;
    vl_api_ip4_address_t inside_ip_address;
    u16 inside_port;
    u16 protocol;
    vl_api_nat_config_flags_t flags;
    u64 last_heard;
    u64 total_bytes;
    u32 total_pkts;
    vl_api_ip4_address_t ext_host_address;
    u16 ext_host_port;
    vl_api_ip4_address_t ext_host_nat_address;
    u16 ext_host_nat_port;
} vl_api_nat44_user_session_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_add_del_lb_static_mapping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_ip4_address_t external_addr;
    u16 external_port;
    u8 protocol;
    u32 affinity;
    u8 tag[64];
    u32 local_num;
    vl_api_nat44_lb_addr_port_t locals[0];
} vl_api_nat44_add_del_lb_static_mapping_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_add_del_lb_static_mapping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_add_del_lb_static_mapping_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_lb_static_mapping_add_del_local {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_ip4_address_t external_addr;
    u16 external_port;
    u8 protocol;
    vl_api_nat44_lb_addr_port_t local;
} vl_api_nat44_lb_static_mapping_add_del_local_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_lb_static_mapping_add_del_local_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_lb_static_mapping_add_del_local_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_lb_static_mapping_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat44_lb_static_mapping_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_lb_static_mapping_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip4_address_t external_addr;
    u16 external_port;
    u8 protocol;
    vl_api_nat_config_flags_t flags;
    u32 affinity;
    u8 tag[64];
    u32 local_num;
    vl_api_nat44_lb_addr_port_t locals[0];
} vl_api_nat44_lb_static_mapping_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_del_session {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t address;
    u8 protocol;
    u16 port;
    u32 vrf_id;
    vl_api_nat_config_flags_t flags;
    vl_api_ip4_address_t ext_host_address;
    u16 ext_host_port;
} vl_api_nat44_del_session_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_del_session_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_del_session_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_forwarding_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool enable;
} vl_api_nat44_forwarding_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_forwarding_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat44_forwarding_enable_disable_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_forwarding_is_enabled {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat44_forwarding_is_enabled_t;
typedef struct __attribute__ ((packed)) _vl_api_nat44_forwarding_is_enabled_reply {
    u16 _vl_msg_id;
    u32 context;
    bool enabled;
} vl_api_nat44_forwarding_is_enabled_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_add_del_map {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_ip4_address_t in_addr;
    u8 in_plen;
    vl_api_ip4_address_t out_addr;
    u8 out_plen;
} vl_api_nat_det_add_del_map_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_add_del_map_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_det_add_del_map_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_forward {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t in_addr;
} vl_api_nat_det_forward_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_forward_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u16 out_port_lo;
    u16 out_port_hi;
    vl_api_ip4_address_t out_addr;
} vl_api_nat_det_forward_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_reverse {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 out_port;
    vl_api_ip4_address_t out_addr;
} vl_api_nat_det_reverse_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_reverse_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ip4_address_t in_addr;
} vl_api_nat_det_reverse_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_map_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat_det_map_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_map_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip4_address_t in_addr;
    u8 in_plen;
    vl_api_ip4_address_t out_addr;
    u8 out_plen;
    u32 sharing_ratio;
    u16 ports_per_host;
    u32 ses_num;
} vl_api_nat_det_map_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_close_session_out {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t out_addr;
    u16 out_port;
    vl_api_ip4_address_t ext_addr;
    u16 ext_port;
} vl_api_nat_det_close_session_out_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_close_session_out_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_det_close_session_out_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_close_session_in {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t in_addr;
    u16 in_port;
    vl_api_ip4_address_t ext_addr;
    u16 ext_port;
} vl_api_nat_det_close_session_in_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_close_session_in_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat_det_close_session_in_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_session_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t user_addr;
} vl_api_nat_det_session_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat_det_session_details {
    u16 _vl_msg_id;
    u32 context;
    u16 in_port;
    vl_api_ip4_address_t ext_addr;
    u16 ext_port;
    u16 out_port;
    u8 state;
    u32 expire;
} vl_api_nat_det_session_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_add_del_pool_addr_range {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t start_addr;
    vl_api_ip4_address_t end_addr;
    u32 vrf_id;
    bool is_add;
} vl_api_nat64_add_del_pool_addr_range_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_add_del_pool_addr_range_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat64_add_del_pool_addr_range_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_pool_addr_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat64_pool_addr_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_pool_addr_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip4_address_t address;
    u32 vrf_id;
} vl_api_nat64_pool_addr_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_add_del_interface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
} vl_api_nat64_add_del_interface_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_add_del_interface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat64_add_del_interface_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_interface_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat64_interface_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_interface_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
} vl_api_nat64_interface_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_add_del_static_bib {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip6_address_t i_addr;
    vl_api_ip4_address_t o_addr;
    u16 i_port;
    u16 o_port;
    u32 vrf_id;
    u8 proto;
    bool is_add;
} vl_api_nat64_add_del_static_bib_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_add_del_static_bib_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat64_add_del_static_bib_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_bib_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 proto;
} vl_api_nat64_bib_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_bib_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip6_address_t i_addr;
    vl_api_ip4_address_t o_addr;
    u16 i_port;
    u16 o_port;
    u32 vrf_id;
    u8 proto;
    vl_api_nat_config_flags_t flags;
    u32 ses_num;
} vl_api_nat64_bib_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_st_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 proto;
} vl_api_nat64_st_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_st_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip6_address_t il_addr;
    vl_api_ip4_address_t ol_addr;
    u16 il_port;
    u16 ol_port;
    vl_api_ip6_address_t ir_addr;
    vl_api_ip4_address_t or_addr;
    u16 r_port;
    u32 vrf_id;
    u8 proto;
} vl_api_nat64_st_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_add_del_prefix {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip6_prefix_t prefix;
    u32 vrf_id;
    bool is_add;
} vl_api_nat64_add_del_prefix_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_add_del_prefix_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat64_add_del_prefix_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_prefix_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat64_prefix_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_prefix_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip6_prefix_t prefix;
    u32 vrf_id;
} vl_api_nat64_prefix_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_add_del_interface_addr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_interface_index_t sw_if_index;
} vl_api_nat64_add_del_interface_addr_t;
typedef struct __attribute__ ((packed)) _vl_api_nat64_add_del_interface_addr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat64_add_del_interface_addr_reply_t;
#define VL_API_NAT_CONTROL_PING_CRC "nat_control_ping_51077d14"
#define VL_API_NAT_CONTROL_PING_REPLY_CRC "nat_control_ping_reply_f6b0b8ca"
#define VL_API_NAT_SHOW_CONFIG_CRC "nat_show_config_51077d14"
#define VL_API_NAT_SHOW_CONFIG_REPLY_CRC "nat_show_config_reply_7903ef06"
#define VL_API_NAT44_SESSION_CLEANUP_CRC "nat44_session_cleanup_51077d14"
#define VL_API_NAT44_SESSION_CLEANUP_REPLY_CRC "nat44_session_cleanup_reply_e8d4e804"
#define VL_API_NAT44_SET_SESSION_LIMIT_CRC "nat44_set_session_limit_8899bbb1"
#define VL_API_NAT44_SET_SESSION_LIMIT_REPLY_CRC "nat44_set_session_limit_reply_e8d4e804"
#define VL_API_NAT_SET_LOG_LEVEL_CRC "nat_set_log_level_70076bfe"
#define VL_API_NAT_SET_LOG_LEVEL_REPLY_CRC "nat_set_log_level_reply_e8d4e804"
#define VL_API_NAT_SET_WORKERS_CRC "nat_set_workers_da926638"
#define VL_API_NAT_SET_WORKERS_REPLY_CRC "nat_set_workers_reply_e8d4e804"
#define VL_API_NAT_WORKER_DUMP_CRC "nat_worker_dump_51077d14"
#define VL_API_NAT_WORKER_DETAILS_CRC "nat_worker_details_84bf06fc"
#define VL_API_NAT_IPFIX_ENABLE_DISABLE_CRC "nat_ipfix_enable_disable_9af4a2d2"
#define VL_API_NAT_IPFIX_ENABLE_DISABLE_REPLY_CRC "nat_ipfix_enable_disable_reply_e8d4e804"
#define VL_API_NAT_SET_TIMEOUTS_CRC "nat_set_timeouts_d4746b16"
#define VL_API_NAT_SET_TIMEOUTS_REPLY_CRC "nat_set_timeouts_reply_e8d4e804"
#define VL_API_NAT_GET_TIMEOUTS_CRC "nat_get_timeouts_51077d14"
#define VL_API_NAT_GET_TIMEOUTS_REPLY_CRC "nat_get_timeouts_reply_3c4df4e1"
#define VL_API_NAT_SET_ADDR_AND_PORT_ALLOC_ALG_CRC "nat_set_addr_and_port_alloc_alg_deeb746f"
#define VL_API_NAT_SET_ADDR_AND_PORT_ALLOC_ALG_REPLY_CRC "nat_set_addr_and_port_alloc_alg_reply_e8d4e804"
#define VL_API_NAT_GET_ADDR_AND_PORT_ALLOC_ALG_CRC "nat_get_addr_and_port_alloc_alg_51077d14"
#define VL_API_NAT_GET_ADDR_AND_PORT_ALLOC_ALG_REPLY_CRC "nat_get_addr_and_port_alloc_alg_reply_3607a7d0"
#define VL_API_NAT_SET_MSS_CLAMPING_CRC "nat_set_mss_clamping_25e90abb"
#define VL_API_NAT_SET_MSS_CLAMPING_REPLY_CRC "nat_set_mss_clamping_reply_e8d4e804"
#define VL_API_NAT_GET_MSS_CLAMPING_CRC "nat_get_mss_clamping_51077d14"
#define VL_API_NAT_GET_MSS_CLAMPING_REPLY_CRC "nat_get_mss_clamping_reply_1c0b2a78"
#define VL_API_NAT_HA_SET_LISTENER_CRC "nat_ha_set_listener_e4a8cb4e"
#define VL_API_NAT_HA_SET_LISTENER_REPLY_CRC "nat_ha_set_listener_reply_e8d4e804"
#define VL_API_NAT_HA_SET_FAILOVER_CRC "nat_ha_set_failover_718246af"
#define VL_API_NAT_HA_SET_FAILOVER_REPLY_CRC "nat_ha_set_failover_reply_e8d4e804"
#define VL_API_NAT_HA_GET_LISTENER_CRC "nat_ha_get_listener_51077d14"
#define VL_API_NAT_HA_GET_LISTENER_REPLY_CRC "nat_ha_get_listener_reply_123ea41f"
#define VL_API_NAT_HA_GET_FAILOVER_CRC "nat_ha_get_failover_51077d14"
#define VL_API_NAT_HA_GET_FAILOVER_REPLY_CRC "nat_ha_get_failover_reply_a67d8752"
#define VL_API_NAT_HA_FLUSH_CRC "nat_ha_flush_51077d14"
#define VL_API_NAT_HA_FLUSH_REPLY_CRC "nat_ha_flush_reply_e8d4e804"
#define VL_API_NAT_HA_RESYNC_CRC "nat_ha_resync_c8ab9e03"
#define VL_API_NAT_HA_RESYNC_REPLY_CRC "nat_ha_resync_reply_e8d4e804"
#define VL_API_NAT_HA_RESYNC_COMPLETED_EVENT_CRC "nat_ha_resync_completed_event_fdc598fb"
#define VL_API_NAT44_DEL_USER_CRC "nat44_del_user_99a9f998"
#define VL_API_NAT44_DEL_USER_REPLY_CRC "nat44_del_user_reply_e8d4e804"
#define VL_API_NAT44_ADD_DEL_ADDRESS_RANGE_CRC "nat44_add_del_address_range_d4c7568c"
#define VL_API_NAT44_ADD_DEL_ADDRESS_RANGE_REPLY_CRC "nat44_add_del_address_range_reply_e8d4e804"
#define VL_API_NAT44_ADDRESS_DUMP_CRC "nat44_address_dump_51077d14"
#define VL_API_NAT44_ADDRESS_DETAILS_CRC "nat44_address_details_45410ac4"
#define VL_API_NAT44_INTERFACE_ADD_DEL_FEATURE_CRC "nat44_interface_add_del_feature_f3699b83"
#define VL_API_NAT44_INTERFACE_ADD_DEL_FEATURE_REPLY_CRC "nat44_interface_add_del_feature_reply_e8d4e804"
#define VL_API_NAT44_INTERFACE_DUMP_CRC "nat44_interface_dump_51077d14"
#define VL_API_NAT44_INTERFACE_DETAILS_CRC "nat44_interface_details_5d286289"
#define VL_API_NAT44_INTERFACE_ADD_DEL_OUTPUT_FEATURE_CRC "nat44_interface_add_del_output_feature_f3699b83"
#define VL_API_NAT44_INTERFACE_ADD_DEL_OUTPUT_FEATURE_REPLY_CRC "nat44_interface_add_del_output_feature_reply_e8d4e804"
#define VL_API_NAT44_INTERFACE_OUTPUT_FEATURE_DUMP_CRC "nat44_interface_output_feature_dump_51077d14"
#define VL_API_NAT44_INTERFACE_OUTPUT_FEATURE_DETAILS_CRC "nat44_interface_output_feature_details_5d286289"
#define VL_API_NAT44_ADD_DEL_STATIC_MAPPING_CRC "nat44_add_del_static_mapping_e165e83b"
#define VL_API_NAT44_ADD_DEL_STATIC_MAPPING_REPLY_CRC "nat44_add_del_static_mapping_reply_e8d4e804"
#define VL_API_NAT44_STATIC_MAPPING_DUMP_CRC "nat44_static_mapping_dump_51077d14"
#define VL_API_NAT44_STATIC_MAPPING_DETAILS_CRC "nat44_static_mapping_details_1a433ef7"
#define VL_API_NAT44_ADD_DEL_IDENTITY_MAPPING_CRC "nat44_add_del_identity_mapping_8e12743f"
#define VL_API_NAT44_ADD_DEL_IDENTITY_MAPPING_REPLY_CRC "nat44_add_del_identity_mapping_reply_e8d4e804"
#define VL_API_NAT44_IDENTITY_MAPPING_DUMP_CRC "nat44_identity_mapping_dump_51077d14"
#define VL_API_NAT44_IDENTITY_MAPPING_DETAILS_CRC "nat44_identity_mapping_details_36d21351"
#define VL_API_NAT44_ADD_DEL_INTERFACE_ADDR_CRC "nat44_add_del_interface_addr_fc835325"
#define VL_API_NAT44_ADD_DEL_INTERFACE_ADDR_REPLY_CRC "nat44_add_del_interface_addr_reply_e8d4e804"
#define VL_API_NAT44_INTERFACE_ADDR_DUMP_CRC "nat44_interface_addr_dump_51077d14"
#define VL_API_NAT44_INTERFACE_ADDR_DETAILS_CRC "nat44_interface_addr_details_3e687514"
#define VL_API_NAT44_USER_DUMP_CRC "nat44_user_dump_51077d14"
#define VL_API_NAT44_USER_DETAILS_CRC "nat44_user_details_355896c2"
#define VL_API_NAT44_USER_SESSION_DUMP_CRC "nat44_user_session_dump_e1899c98"
#define VL_API_NAT44_USER_SESSION_DETAILS_CRC "nat44_user_session_details_1965fd69"
#define VL_API_NAT44_ADD_DEL_LB_STATIC_MAPPING_CRC "nat44_add_del_lb_static_mapping_53b24611"
#define VL_API_NAT44_ADD_DEL_LB_STATIC_MAPPING_REPLY_CRC "nat44_add_del_lb_static_mapping_reply_e8d4e804"
#define VL_API_NAT44_LB_STATIC_MAPPING_ADD_DEL_LOCAL_CRC "nat44_lb_static_mapping_add_del_local_2910a151"
#define VL_API_NAT44_LB_STATIC_MAPPING_ADD_DEL_LOCAL_REPLY_CRC "nat44_lb_static_mapping_add_del_local_reply_e8d4e804"
#define VL_API_NAT44_LB_STATIC_MAPPING_DUMP_CRC "nat44_lb_static_mapping_dump_51077d14"
#define VL_API_NAT44_LB_STATIC_MAPPING_DETAILS_CRC "nat44_lb_static_mapping_details_2267b9e8"
#define VL_API_NAT44_DEL_SESSION_CRC "nat44_del_session_4c49c387"
#define VL_API_NAT44_DEL_SESSION_REPLY_CRC "nat44_del_session_reply_e8d4e804"
#define VL_API_NAT44_FORWARDING_ENABLE_DISABLE_CRC "nat44_forwarding_enable_disable_b3e225d2"
#define VL_API_NAT44_FORWARDING_ENABLE_DISABLE_REPLY_CRC "nat44_forwarding_enable_disable_reply_e8d4e804"
#define VL_API_NAT44_FORWARDING_IS_ENABLED_CRC "nat44_forwarding_is_enabled_51077d14"
#define VL_API_NAT44_FORWARDING_IS_ENABLED_REPLY_CRC "nat44_forwarding_is_enabled_reply_46924a06"
#define VL_API_NAT_DET_ADD_DEL_MAP_CRC "nat_det_add_del_map_112fde05"
#define VL_API_NAT_DET_ADD_DEL_MAP_REPLY_CRC "nat_det_add_del_map_reply_e8d4e804"
#define VL_API_NAT_DET_FORWARD_CRC "nat_det_forward_7f8a89cd"
#define VL_API_NAT_DET_FORWARD_REPLY_CRC "nat_det_forward_reply_a8ccbdc0"
#define VL_API_NAT_DET_REVERSE_CRC "nat_det_reverse_a7573fe1"
#define VL_API_NAT_DET_REVERSE_REPLY_CRC "nat_det_reverse_reply_34066d48"
#define VL_API_NAT_DET_MAP_DUMP_CRC "nat_det_map_dump_51077d14"
#define VL_API_NAT_DET_MAP_DETAILS_CRC "nat_det_map_details_88000ee1"
#define VL_API_NAT_DET_CLOSE_SESSION_OUT_CRC "nat_det_close_session_out_c1b6cbfb"
#define VL_API_NAT_DET_CLOSE_SESSION_OUT_REPLY_CRC "nat_det_close_session_out_reply_e8d4e804"
#define VL_API_NAT_DET_CLOSE_SESSION_IN_CRC "nat_det_close_session_in_0a10ef64"
#define VL_API_NAT_DET_CLOSE_SESSION_IN_REPLY_CRC "nat_det_close_session_in_reply_e8d4e804"
#define VL_API_NAT_DET_SESSION_DUMP_CRC "nat_det_session_dump_e45a3af7"
#define VL_API_NAT_DET_SESSION_DETAILS_CRC "nat_det_session_details_27f3c171"
#define VL_API_NAT64_ADD_DEL_POOL_ADDR_RANGE_CRC "nat64_add_del_pool_addr_range_21234ef3"
#define VL_API_NAT64_ADD_DEL_POOL_ADDR_RANGE_REPLY_CRC "nat64_add_del_pool_addr_range_reply_e8d4e804"
#define VL_API_NAT64_POOL_ADDR_DUMP_CRC "nat64_pool_addr_dump_51077d14"
#define VL_API_NAT64_POOL_ADDR_DETAILS_CRC "nat64_pool_addr_details_9bb99cdb"
#define VL_API_NAT64_ADD_DEL_INTERFACE_CRC "nat64_add_del_interface_f3699b83"
#define VL_API_NAT64_ADD_DEL_INTERFACE_REPLY_CRC "nat64_add_del_interface_reply_e8d4e804"
#define VL_API_NAT64_INTERFACE_DUMP_CRC "nat64_interface_dump_51077d14"
#define VL_API_NAT64_INTERFACE_DETAILS_CRC "nat64_interface_details_5d286289"
#define VL_API_NAT64_ADD_DEL_STATIC_BIB_CRC "nat64_add_del_static_bib_90fae58a"
#define VL_API_NAT64_ADD_DEL_STATIC_BIB_REPLY_CRC "nat64_add_del_static_bib_reply_e8d4e804"
#define VL_API_NAT64_BIB_DUMP_CRC "nat64_bib_dump_cfcb6b75"
#define VL_API_NAT64_BIB_DETAILS_CRC "nat64_bib_details_62c8541d"
#define VL_API_NAT64_ST_DUMP_CRC "nat64_st_dump_cfcb6b75"
#define VL_API_NAT64_ST_DETAILS_CRC "nat64_st_details_c770d620"
#define VL_API_NAT64_ADD_DEL_PREFIX_CRC "nat64_add_del_prefix_727b2f4c"
#define VL_API_NAT64_ADD_DEL_PREFIX_REPLY_CRC "nat64_add_del_prefix_reply_e8d4e804"
#define VL_API_NAT64_PREFIX_DUMP_CRC "nat64_prefix_dump_51077d14"
#define VL_API_NAT64_PREFIX_DETAILS_CRC "nat64_prefix_details_20568de3"
#define VL_API_NAT64_ADD_DEL_INTERFACE_ADDR_CRC "nat64_add_del_interface_addr_47d6e753"
#define VL_API_NAT64_ADD_DEL_INTERFACE_ADDR_REPLY_CRC "nat64_add_del_interface_addr_reply_e8d4e804"

#endif
