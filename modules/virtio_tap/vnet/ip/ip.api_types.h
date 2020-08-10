#ifndef included_ip_api_types_h
#define included_ip_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/fib/fib_types.api_types.h>
#include <vnet/ethernet/ethernet_types.api_types.h>
#include <vnet/mfib/mfib_types.api_types.h>
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_ip_table {
    u32 table_id;
    bool is_ip6;
    u8 name[64];
} vl_api_ip_table_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_route {
    u32 table_id;
    u32 stats_index;
    vl_api_prefix_t prefix;
    u8 n_paths;
    vl_api_fib_path_t paths[0];
} vl_api_ip_route_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_mroute {
    u32 table_id;
    u32 entry_flags;
    u32 rpf_id;
    vl_api_mprefix_t prefix;
    u8 n_paths;
    vl_api_mfib_path_t paths[0];
} vl_api_ip_mroute_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_redirect {
    vl_api_interface_index_t rx_sw_if_index;
    vl_api_interface_index_t tx_sw_if_index;
    vl_api_address_t nh;
} vl_api_punt_redirect_t;
typedef enum {
    IP_REASS_TYPE_FULL = 0,
    IP_REASS_TYPE_SHALLOW_VIRTUAL = 1,
} vl_api_ip_reass_type_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_table_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_ip_table_t table;
} vl_api_ip_table_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_table_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_table_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_table_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ip_table_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_table_replace_begin {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip_table_t table;
} vl_api_ip_table_replace_begin_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_table_replace_begin_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_table_replace_begin_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_table_replace_end {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip_table_t table;
} vl_api_ip_table_replace_end_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_table_replace_end_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_table_replace_end_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_table_flush {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip_table_t table;
} vl_api_ip_table_flush_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_table_flush_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_table_flush_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_table_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip_table_t table;
} vl_api_ip_table_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_route_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    bool is_multipath;
    vl_api_ip_route_t route;
} vl_api_ip_route_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_route_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 stats_index;
} vl_api_ip_route_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_route_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip_table_t table;
} vl_api_ip_route_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_route_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip_route_t route;
} vl_api_ip_route_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_route_lookup {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 table_id;
    u8 exact;
    vl_api_prefix_t prefix;
} vl_api_ip_route_lookup_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_route_lookup_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ip_route_t route;
} vl_api_ip_route_lookup_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_set_ip_flow_hash {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 vrf_id;
    bool is_ipv6;
    bool src;
    bool dst;
    bool sport;
    bool dport;
    bool proto;
    bool reverse;
    bool symmetric;
} vl_api_set_ip_flow_hash_t;
typedef struct __attribute__ ((packed)) _vl_api_set_ip_flow_hash_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_set_ip_flow_hash_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_ip6_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool enable;
} vl_api_sw_interface_ip6_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_ip6_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_ip6_enable_disable_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_mtable_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ip_mtable_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_mtable_details {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip_table_t table;
} vl_api_ip_mtable_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_mroute_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    bool is_multipath;
    vl_api_ip_mroute_t route;
} vl_api_ip_mroute_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_mroute_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 stats_index;
} vl_api_ip_mroute_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_mroute_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip_table_t table;
} vl_api_ip_mroute_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_mroute_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip_mroute_t route;
} vl_api_ip_mroute_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_address_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_address_with_prefix_t prefix;
} vl_api_ip_address_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_address_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool is_ipv6;
} vl_api_ip_address_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_unnumbered_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_interface_index_t ip_sw_if_index;
} vl_api_ip_unnumbered_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_unnumbered_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_ip_unnumbered_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool is_ipv6;
} vl_api_ip_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_ipv6;
} vl_api_ip_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_mfib_signal_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_mfib_signal_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_mfib_signal_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 table_id;
    vl_api_mprefix_t prefix;
    u16 ip_packet_len;
    u8 ip_packet_data[256];
} vl_api_mfib_signal_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_punt_police {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 policer_index;
    bool is_add;
    bool is_ip6;
} vl_api_ip_punt_police_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_punt_police_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_punt_police_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_punt_redirect {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_punt_redirect_t punt;
    bool is_add;
} vl_api_ip_punt_redirect_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_punt_redirect_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_punt_redirect_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_punt_redirect_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool is_ipv6;
} vl_api_ip_punt_redirect_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_punt_redirect_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_punt_redirect_t punt;
} vl_api_ip_punt_redirect_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_container_proxy_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_prefix_t pfx;
    vl_api_interface_index_t sw_if_index;
    bool is_add;
} vl_api_ip_container_proxy_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_container_proxy_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_container_proxy_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_container_proxy_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ip_container_proxy_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_container_proxy_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_prefix_t prefix;
} vl_api_ip_container_proxy_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_source_and_port_range_check_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_prefix_t prefix;
    u8 number_of_ranges;
    u16 low_ports[32];
    u16 high_ports[32];
    u32 vrf_id;
} vl_api_ip_source_and_port_range_check_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_source_and_port_range_check_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_source_and_port_range_check_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_source_and_port_range_check_interface_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_interface_index_t sw_if_index;
    u32 tcp_in_vrf_id;
    u32 tcp_out_vrf_id;
    u32 udp_in_vrf_id;
    u32 udp_out_vrf_id;
} vl_api_ip_source_and_port_range_check_interface_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_source_and_port_range_check_interface_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_source_and_port_range_check_interface_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_ip6_set_link_local_address {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_ip6_address_t ip;
} vl_api_sw_interface_ip6_set_link_local_address_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_ip6_set_link_local_address_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_ip6_set_link_local_address_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ioam_enable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 id;
    bool seqno;
    bool analyse;
    bool pot_enable;
    bool trace_enable;
    u32 node_id;
} vl_api_ioam_enable_t;
typedef struct __attribute__ ((packed)) _vl_api_ioam_enable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ioam_enable_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ioam_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 id;
} vl_api_ioam_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_ioam_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ioam_disable_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_reassembly_set {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 timeout_ms;
    u32 max_reassemblies;
    u32 max_reassembly_length;
    u32 expire_walk_interval_ms;
    bool is_ip6;
    vl_api_ip_reass_type_t type;
} vl_api_ip_reassembly_set_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_reassembly_set_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_reassembly_set_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_reassembly_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_ip6;
    vl_api_ip_reass_type_t type;
} vl_api_ip_reassembly_get_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_reassembly_get_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 timeout_ms;
    u32 max_reassemblies;
    u32 max_reassembly_length;
    u32 expire_walk_interval_ms;
    bool is_ip6;
} vl_api_ip_reassembly_get_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_reassembly_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool enable_ip4;
    bool enable_ip6;
    vl_api_ip_reass_type_t type;
} vl_api_ip_reassembly_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_reassembly_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_reassembly_enable_disable_reply_t;
#define VL_API_IP_TABLE_ADD_DEL_CRC "ip_table_add_del_0ffdaec0"
#define VL_API_IP_TABLE_ADD_DEL_REPLY_CRC "ip_table_add_del_reply_e8d4e804"
#define VL_API_IP_TABLE_DUMP_CRC "ip_table_dump_51077d14"
#define VL_API_IP_TABLE_REPLACE_BEGIN_CRC "ip_table_replace_begin_b9d2e09e"
#define VL_API_IP_TABLE_REPLACE_BEGIN_REPLY_CRC "ip_table_replace_begin_reply_e8d4e804"
#define VL_API_IP_TABLE_REPLACE_END_CRC "ip_table_replace_end_b9d2e09e"
#define VL_API_IP_TABLE_REPLACE_END_REPLY_CRC "ip_table_replace_end_reply_e8d4e804"
#define VL_API_IP_TABLE_FLUSH_CRC "ip_table_flush_b9d2e09e"
#define VL_API_IP_TABLE_FLUSH_REPLY_CRC "ip_table_flush_reply_e8d4e804"
#define VL_API_IP_TABLE_DETAILS_CRC "ip_table_details_c79fca0f"
#define VL_API_IP_ROUTE_ADD_DEL_CRC "ip_route_add_del_c1ff832d"
#define VL_API_IP_ROUTE_ADD_DEL_REPLY_CRC "ip_route_add_del_reply_1992deab"
#define VL_API_IP_ROUTE_DUMP_CRC "ip_route_dump_b9d2e09e"
#define VL_API_IP_ROUTE_DETAILS_CRC "ip_route_details_d1ffaae1"
#define VL_API_IP_ROUTE_LOOKUP_CRC "ip_route_lookup_e2986185"
#define VL_API_IP_ROUTE_LOOKUP_REPLY_CRC "ip_route_lookup_reply_ae99de8e"
#define VL_API_SET_IP_FLOW_HASH_CRC "set_ip_flow_hash_084ee09e"
#define VL_API_SET_IP_FLOW_HASH_REPLY_CRC "set_ip_flow_hash_reply_e8d4e804"
#define VL_API_SW_INTERFACE_IP6_ENABLE_DISABLE_CRC "sw_interface_ip6_enable_disable_ae6cfcfb"
#define VL_API_SW_INTERFACE_IP6_ENABLE_DISABLE_REPLY_CRC "sw_interface_ip6_enable_disable_reply_e8d4e804"
#define VL_API_IP_MTABLE_DUMP_CRC "ip_mtable_dump_51077d14"
#define VL_API_IP_MTABLE_DETAILS_CRC "ip_mtable_details_b9d2e09e"
#define VL_API_IP_MROUTE_ADD_DEL_CRC "ip_mroute_add_del_f6627d17"
#define VL_API_IP_MROUTE_ADD_DEL_REPLY_CRC "ip_mroute_add_del_reply_1992deab"
#define VL_API_IP_MROUTE_DUMP_CRC "ip_mroute_dump_b9d2e09e"
#define VL_API_IP_MROUTE_DETAILS_CRC "ip_mroute_details_c1cb4b44"
#define VL_API_IP_ADDRESS_DETAILS_CRC "ip_address_details_b1199745"
#define VL_API_IP_ADDRESS_DUMP_CRC "ip_address_dump_2d033de4"
#define VL_API_IP_UNNUMBERED_DETAILS_CRC "ip_unnumbered_details_aa12a483"
#define VL_API_IP_UNNUMBERED_DUMP_CRC "ip_unnumbered_dump_f9e6675e"
#define VL_API_IP_DETAILS_CRC "ip_details_eb152d07"
#define VL_API_IP_DUMP_CRC "ip_dump_98d231ca"
#define VL_API_MFIB_SIGNAL_DUMP_CRC "mfib_signal_dump_51077d14"
#define VL_API_MFIB_SIGNAL_DETAILS_CRC "mfib_signal_details_64398a9a"
#define VL_API_IP_PUNT_POLICE_CRC "ip_punt_police_db867cea"
#define VL_API_IP_PUNT_POLICE_REPLY_CRC "ip_punt_police_reply_e8d4e804"
#define VL_API_IP_PUNT_REDIRECT_CRC "ip_punt_redirect_a9a5592c"
#define VL_API_IP_PUNT_REDIRECT_REPLY_CRC "ip_punt_redirect_reply_e8d4e804"
#define VL_API_IP_PUNT_REDIRECT_DUMP_CRC "ip_punt_redirect_dump_2d033de4"
#define VL_API_IP_PUNT_REDIRECT_DETAILS_CRC "ip_punt_redirect_details_3924f5d3"
#define VL_API_IP_CONTAINER_PROXY_ADD_DEL_CRC "ip_container_proxy_add_del_91189f40"
#define VL_API_IP_CONTAINER_PROXY_ADD_DEL_REPLY_CRC "ip_container_proxy_add_del_reply_e8d4e804"
#define VL_API_IP_CONTAINER_PROXY_DUMP_CRC "ip_container_proxy_dump_51077d14"
#define VL_API_IP_CONTAINER_PROXY_DETAILS_CRC "ip_container_proxy_details_0ee460e8"
#define VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_ADD_DEL_CRC "ip_source_and_port_range_check_add_del_8bfc76f2"
#define VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_ADD_DEL_REPLY_CRC "ip_source_and_port_range_check_add_del_reply_e8d4e804"
#define VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_INTERFACE_ADD_DEL_CRC "ip_source_and_port_range_check_interface_add_del_e1ba8987"
#define VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_INTERFACE_ADD_DEL_REPLY_CRC "ip_source_and_port_range_check_interface_add_del_reply_e8d4e804"
#define VL_API_SW_INTERFACE_IP6_SET_LINK_LOCAL_ADDRESS_CRC "sw_interface_ip6_set_link_local_address_2931d9fa"
#define VL_API_SW_INTERFACE_IP6_SET_LINK_LOCAL_ADDRESS_REPLY_CRC "sw_interface_ip6_set_link_local_address_reply_e8d4e804"
#define VL_API_IOAM_ENABLE_CRC "ioam_enable_51ccd868"
#define VL_API_IOAM_ENABLE_REPLY_CRC "ioam_enable_reply_e8d4e804"
#define VL_API_IOAM_DISABLE_CRC "ioam_disable_6b16a45e"
#define VL_API_IOAM_DISABLE_REPLY_CRC "ioam_disable_reply_e8d4e804"
#define VL_API_IP_REASSEMBLY_SET_CRC "ip_reassembly_set_16467d25"
#define VL_API_IP_REASSEMBLY_SET_REPLY_CRC "ip_reassembly_set_reply_e8d4e804"
#define VL_API_IP_REASSEMBLY_GET_CRC "ip_reassembly_get_ea13ff63"
#define VL_API_IP_REASSEMBLY_GET_REPLY_CRC "ip_reassembly_get_reply_d5eb8d34"
#define VL_API_IP_REASSEMBLY_ENABLE_DISABLE_CRC "ip_reassembly_enable_disable_885c85a6"
#define VL_API_IP_REASSEMBLY_ENABLE_DISABLE_REPLY_CRC "ip_reassembly_enable_disable_reply_e8d4e804"

#endif
