#ifndef included_interface_api_types_h
#define included_interface_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ethernet/ethernet_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_flags {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_if_status_flags_t flags;
} vl_api_sw_interface_set_flags_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_flags_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_flags_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_hw_interface_set_mtu {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u16 mtu;
} vl_api_hw_interface_set_mtu_t;
typedef struct __attribute__ ((packed)) _vl_api_hw_interface_set_mtu_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_hw_interface_set_mtu_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_mtu {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 mtu[4];
} vl_api_sw_interface_set_mtu_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_mtu_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_mtu_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_ip_directed_broadcast {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool enable;
} vl_api_sw_interface_set_ip_directed_broadcast_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_ip_directed_broadcast_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_ip_directed_broadcast_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    vl_api_interface_index_t sw_if_index;
    vl_api_if_status_flags_t flags;
    bool deleted;
} vl_api_sw_interface_event_t;
typedef struct __attribute__ ((packed)) _vl_api_want_interface_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 enable_disable;
    u32 pid;
} vl_api_want_interface_events_t;
typedef struct __attribute__ ((packed)) _vl_api_want_interface_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_want_interface_events_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 sup_sw_if_index;
    vl_api_mac_address_t l2_address;
    vl_api_if_status_flags_t flags;
    vl_api_if_type_t type;
    vl_api_link_duplex_t link_duplex;
    u32 link_speed;
    u16 link_mtu;
    u32 mtu[4];
    u32 sub_id;
    u8 sub_number_of_tags;
    u16 sub_outer_vlan_id;
    u16 sub_inner_vlan_id;
    vl_api_sub_if_flags_t sub_if_flags;
    u32 vtr_op;
    u32 vtr_push_dot1q;
    u32 vtr_tag1;
    u32 vtr_tag2;
    u16 outer_tag;
    vl_api_mac_address_t b_dmac;
    vl_api_mac_address_t b_smac;
    u16 b_vlanid;
    u32 i_sid;
    u8 interface_name[64];
    u8 interface_dev_type[64];
    u8 tag[64];
} vl_api_sw_interface_details_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool name_filter_valid;
    vl_api_string_t name_filter;
} vl_api_sw_interface_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_add_del_address {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool is_add;
    bool del_all;
    vl_api_address_with_prefix_t prefix;
} vl_api_sw_interface_add_del_address_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_add_del_address_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_add_del_address_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_address_replace_begin {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_sw_interface_address_replace_begin_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_address_replace_begin_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_address_replace_begin_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_address_replace_end {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_sw_interface_address_replace_end_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_address_replace_end_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_address_replace_end_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_table {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool is_ipv6;
    u32 vrf_id;
} vl_api_sw_interface_set_table_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_table_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_table_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_get_table {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool is_ipv6;
} vl_api_sw_interface_get_table_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_get_table_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 vrf_id;
} vl_api_sw_interface_get_table_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_unnumbered {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_interface_index_t unnumbered_sw_if_index;
    bool is_add;
} vl_api_sw_interface_set_unnumbered_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_unnumbered_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_unnumbered_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_clear_stats {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_sw_interface_clear_stats_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_clear_stats_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_clear_stats_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_tag_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_interface_index_t sw_if_index;
    u8 tag[64];
} vl_api_sw_interface_tag_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_tag_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_tag_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_add_del_mac_address {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    vl_api_mac_address_t addr;
    u8 is_add;
} vl_api_sw_interface_add_del_mac_address_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_add_del_mac_address_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_add_del_mac_address_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_mac_address {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_mac_address_t mac_address;
} vl_api_sw_interface_set_mac_address_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_mac_address_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_mac_address_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_get_mac_address {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_sw_interface_get_mac_address_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_get_mac_address_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_mac_address_t mac_address;
} vl_api_sw_interface_get_mac_address_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_rx_mode {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool queue_id_valid;
    u32 queue_id;
    vl_api_rx_mode_t mode;
} vl_api_sw_interface_set_rx_mode_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_rx_mode_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_rx_mode_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_rx_placement {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 queue_id;
    u32 worker_id;
    bool is_main;
} vl_api_sw_interface_set_rx_placement_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_rx_placement_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_rx_placement_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_rx_placement_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_sw_interface_rx_placement_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_rx_placement_details {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 queue_id;
    u32 worker_id;
    vl_api_rx_mode_t mode;
} vl_api_sw_interface_rx_placement_details_t;
typedef struct __attribute__ ((packed)) _vl_api_interface_name_renumber {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 new_show_dev_instance;
} vl_api_interface_name_renumber_t;
typedef struct __attribute__ ((packed)) _vl_api_interface_name_renumber_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_interface_name_renumber_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_create_subif {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 sub_id;
    vl_api_sub_if_flags_t sub_if_flags;
    u16 outer_vlan_id;
    u16 inner_vlan_id;
} vl_api_create_subif_t;
typedef struct __attribute__ ((packed)) _vl_api_create_subif_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_create_subif_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_create_vlan_subif {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 vlan_id;
} vl_api_create_vlan_subif_t;
typedef struct __attribute__ ((packed)) _vl_api_create_vlan_subif_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_create_vlan_subif_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_delete_subif {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_delete_subif_t;
typedef struct __attribute__ ((packed)) _vl_api_delete_subif_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_delete_subif_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_create_loopback {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_mac_address_t mac_address;
} vl_api_create_loopback_t;
typedef struct __attribute__ ((packed)) _vl_api_create_loopback_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_create_loopback_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_create_loopback_instance {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_mac_address_t mac_address;
    bool is_specified;
    u32 user_instance;
} vl_api_create_loopback_instance_t;
typedef struct __attribute__ ((packed)) _vl_api_create_loopback_instance_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_create_loopback_instance_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_delete_loopback {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_delete_loopback_t;
typedef struct __attribute__ ((packed)) _vl_api_delete_loopback_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_delete_loopback_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_collect_detailed_interface_stats {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool enable_disable;
} vl_api_collect_detailed_interface_stats_t;
typedef struct __attribute__ ((packed)) _vl_api_collect_detailed_interface_stats_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_collect_detailed_interface_stats_reply_t;
#define VL_API_SW_INTERFACE_SET_FLAGS_CRC "sw_interface_set_flags_6a2b491a"
#define VL_API_SW_INTERFACE_SET_FLAGS_REPLY_CRC "sw_interface_set_flags_reply_e8d4e804"
#define VL_API_HW_INTERFACE_SET_MTU_CRC "hw_interface_set_mtu_e6746899"
#define VL_API_HW_INTERFACE_SET_MTU_REPLY_CRC "hw_interface_set_mtu_reply_e8d4e804"
#define VL_API_SW_INTERFACE_SET_MTU_CRC "sw_interface_set_mtu_5cbe85e5"
#define VL_API_SW_INTERFACE_SET_MTU_REPLY_CRC "sw_interface_set_mtu_reply_e8d4e804"
#define VL_API_SW_INTERFACE_SET_IP_DIRECTED_BROADCAST_CRC "sw_interface_set_ip_directed_broadcast_ae6cfcfb"
#define VL_API_SW_INTERFACE_SET_IP_DIRECTED_BROADCAST_REPLY_CRC "sw_interface_set_ip_directed_broadcast_reply_e8d4e804"
#define VL_API_SW_INTERFACE_EVENT_CRC "sw_interface_event_f709f78d"
#define VL_API_WANT_INTERFACE_EVENTS_CRC "want_interface_events_476f5a08"
#define VL_API_WANT_INTERFACE_EVENTS_REPLY_CRC "want_interface_events_reply_e8d4e804"
#define VL_API_SW_INTERFACE_DETAILS_CRC "sw_interface_details_17b69fa2"
#define VL_API_SW_INTERFACE_DUMP_CRC "sw_interface_dump_aa610c27"
#define VL_API_SW_INTERFACE_ADD_DEL_ADDRESS_CRC "sw_interface_add_del_address_5803d5c4"
#define VL_API_SW_INTERFACE_ADD_DEL_ADDRESS_REPLY_CRC "sw_interface_add_del_address_reply_e8d4e804"
#define VL_API_SW_INTERFACE_ADDRESS_REPLACE_BEGIN_CRC "sw_interface_address_replace_begin_51077d14"
#define VL_API_SW_INTERFACE_ADDRESS_REPLACE_BEGIN_REPLY_CRC "sw_interface_address_replace_begin_reply_e8d4e804"
#define VL_API_SW_INTERFACE_ADDRESS_REPLACE_END_CRC "sw_interface_address_replace_end_51077d14"
#define VL_API_SW_INTERFACE_ADDRESS_REPLACE_END_REPLY_CRC "sw_interface_address_replace_end_reply_e8d4e804"
#define VL_API_SW_INTERFACE_SET_TABLE_CRC "sw_interface_set_table_df42a577"
#define VL_API_SW_INTERFACE_SET_TABLE_REPLY_CRC "sw_interface_set_table_reply_e8d4e804"
#define VL_API_SW_INTERFACE_GET_TABLE_CRC "sw_interface_get_table_2d033de4"
#define VL_API_SW_INTERFACE_GET_TABLE_REPLY_CRC "sw_interface_get_table_reply_a6eb0109"
#define VL_API_SW_INTERFACE_SET_UNNUMBERED_CRC "sw_interface_set_unnumbered_938ef33b"
#define VL_API_SW_INTERFACE_SET_UNNUMBERED_REPLY_CRC "sw_interface_set_unnumbered_reply_e8d4e804"
#define VL_API_SW_INTERFACE_CLEAR_STATS_CRC "sw_interface_clear_stats_f9e6675e"
#define VL_API_SW_INTERFACE_CLEAR_STATS_REPLY_CRC "sw_interface_clear_stats_reply_e8d4e804"
#define VL_API_SW_INTERFACE_TAG_ADD_DEL_CRC "sw_interface_tag_add_del_426f8bc1"
#define VL_API_SW_INTERFACE_TAG_ADD_DEL_REPLY_CRC "sw_interface_tag_add_del_reply_e8d4e804"
#define VL_API_SW_INTERFACE_ADD_DEL_MAC_ADDRESS_CRC "sw_interface_add_del_mac_address_638bb9f4"
#define VL_API_SW_INTERFACE_ADD_DEL_MAC_ADDRESS_REPLY_CRC "sw_interface_add_del_mac_address_reply_e8d4e804"
#define VL_API_SW_INTERFACE_SET_MAC_ADDRESS_CRC "sw_interface_set_mac_address_6aca746a"
#define VL_API_SW_INTERFACE_SET_MAC_ADDRESS_REPLY_CRC "sw_interface_set_mac_address_reply_e8d4e804"
#define VL_API_SW_INTERFACE_GET_MAC_ADDRESS_CRC "sw_interface_get_mac_address_f9e6675e"
#define VL_API_SW_INTERFACE_GET_MAC_ADDRESS_REPLY_CRC "sw_interface_get_mac_address_reply_40ef2c08"
#define VL_API_SW_INTERFACE_SET_RX_MODE_CRC "sw_interface_set_rx_mode_780f5cee"
#define VL_API_SW_INTERFACE_SET_RX_MODE_REPLY_CRC "sw_interface_set_rx_mode_reply_e8d4e804"
#define VL_API_SW_INTERFACE_SET_RX_PLACEMENT_CRC "sw_interface_set_rx_placement_db65f3c9"
#define VL_API_SW_INTERFACE_SET_RX_PLACEMENT_REPLY_CRC "sw_interface_set_rx_placement_reply_e8d4e804"
#define VL_API_SW_INTERFACE_RX_PLACEMENT_DUMP_CRC "sw_interface_rx_placement_dump_f9e6675e"
#define VL_API_SW_INTERFACE_RX_PLACEMENT_DETAILS_CRC "sw_interface_rx_placement_details_f6d7d024"
#define VL_API_INTERFACE_NAME_RENUMBER_CRC "interface_name_renumber_2b8858b8"
#define VL_API_INTERFACE_NAME_RENUMBER_REPLY_CRC "interface_name_renumber_reply_e8d4e804"
#define VL_API_CREATE_SUBIF_CRC "create_subif_cb371063"
#define VL_API_CREATE_SUBIF_REPLY_CRC "create_subif_reply_5383d31f"
#define VL_API_CREATE_VLAN_SUBIF_CRC "create_vlan_subif_af34ac8b"
#define VL_API_CREATE_VLAN_SUBIF_REPLY_CRC "create_vlan_subif_reply_5383d31f"
#define VL_API_DELETE_SUBIF_CRC "delete_subif_f9e6675e"
#define VL_API_DELETE_SUBIF_REPLY_CRC "delete_subif_reply_e8d4e804"
#define VL_API_CREATE_LOOPBACK_CRC "create_loopback_42bb5d22"
#define VL_API_CREATE_LOOPBACK_REPLY_CRC "create_loopback_reply_5383d31f"
#define VL_API_CREATE_LOOPBACK_INSTANCE_CRC "create_loopback_instance_d36a3ee2"
#define VL_API_CREATE_LOOPBACK_INSTANCE_REPLY_CRC "create_loopback_instance_reply_5383d31f"
#define VL_API_DELETE_LOOPBACK_CRC "delete_loopback_f9e6675e"
#define VL_API_DELETE_LOOPBACK_REPLY_CRC "delete_loopback_reply_e8d4e804"
#define VL_API_COLLECT_DETAILED_INTERFACE_STATS_CRC "collect_detailed_interface_stats_5501adee"
#define VL_API_COLLECT_DETAILED_INTERFACE_STATS_REPLY_CRC "collect_detailed_interface_stats_reply_e8d4e804"

#endif
