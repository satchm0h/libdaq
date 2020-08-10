#ifndef included_l2_api_types_h
#define included_l2_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/ethernet/ethernet_types.api_types.h>
#include <vnet/interface_types.api_types.h>
typedef enum {
    MAC_EVENT_ACTION_API_ADD = 0,
    MAC_EVENT_ACTION_API_DELETE = 1,
    MAC_EVENT_ACTION_API_MOVE = 2,
} vl_api_mac_event_action_t;
typedef struct __attribute__ ((packed)) _vl_api_mac_entry {
    vl_api_interface_index_t sw_if_index;
    vl_api_mac_address_t mac_addr;
    vl_api_mac_event_action_t action;
    u8 flags;
} vl_api_mac_entry_t;
typedef struct __attribute__ ((packed)) _vl_api_bridge_domain_sw_if {
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u8 shg;
} vl_api_bridge_domain_sw_if_t;
typedef enum {
    BRIDGE_API_FLAG_NONE = 0,
    BRIDGE_API_FLAG_LEARN = 1,
    BRIDGE_API_FLAG_FWD = 2,
    BRIDGE_API_FLAG_FLOOD = 4,
    BRIDGE_API_FLAG_UU_FLOOD = 8,
    BRIDGE_API_FLAG_ARP_TERM = 16,
    BRIDGE_API_FLAG_ARP_UFWD = 32,
} vl_api_bd_flags_t;
typedef enum {
    L2_API_PORT_TYPE_NORMAL = 0,
    L2_API_PORT_TYPE_BVI = 1,
    L2_API_PORT_TYPE_UU_FWD = 2,
} vl_api_l2_port_type_t;
typedef struct __attribute__ ((packed)) _vl_api_bd_ip_mac {
    u32 bd_id;
    vl_api_address_t ip;
    vl_api_mac_address_t mac;
} vl_api_bd_ip_mac_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_xconnect_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t rx_sw_if_index;
    vl_api_interface_index_t tx_sw_if_index;
} vl_api_l2_xconnect_details_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_xconnect_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_l2_xconnect_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_fib_table_details {
    u16 _vl_msg_id;
    u32 context;
    u32 bd_id;
    vl_api_mac_address_t mac;
    vl_api_interface_index_t sw_if_index;
    bool static_mac;
    bool filter_mac;
    bool bvi_mac;
} vl_api_l2_fib_table_details_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_fib_table_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
} vl_api_l2_fib_table_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_fib_clear_table {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_l2_fib_clear_table_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_fib_clear_table_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_l2_fib_clear_table_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_l2fib_flush_all {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_l2fib_flush_all_t;
typedef struct __attribute__ ((packed)) _vl_api_l2fib_flush_all_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_l2fib_flush_all_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_l2fib_flush_bd {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
} vl_api_l2fib_flush_bd_t;
typedef struct __attribute__ ((packed)) _vl_api_l2fib_flush_bd_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_l2fib_flush_bd_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_l2fib_flush_int {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_l2fib_flush_int_t;
typedef struct __attribute__ ((packed)) _vl_api_l2fib_flush_int_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_l2fib_flush_int_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_l2fib_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_mac_address_t mac;
    u32 bd_id;
    vl_api_interface_index_t sw_if_index;
    bool is_add;
    bool static_mac;
    bool filter_mac;
    bool bvi_mac;
} vl_api_l2fib_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_l2fib_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_l2fib_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_want_l2_macs_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 learn_limit;
    u8 scan_delay;
    u8 max_macs_in_event;
    bool enable_disable;
    u32 pid;
} vl_api_want_l2_macs_events_t;
typedef struct __attribute__ ((packed)) _vl_api_want_l2_macs_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_want_l2_macs_events_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_macs_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    u32 n_macs;
    vl_api_mac_entry_t mac[0];
} vl_api_l2_macs_event_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_flags {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool is_set;
    u32 feature_bitmap;
} vl_api_l2_flags_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_flags_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 resulting_feature_bitmap;
} vl_api_l2_flags_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bridge_domain_set_mac_age {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
    u8 mac_age;
} vl_api_bridge_domain_set_mac_age_t;
typedef struct __attribute__ ((packed)) _vl_api_bridge_domain_set_mac_age_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bridge_domain_set_mac_age_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bridge_domain_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
    bool flood;
    bool uu_flood;
    bool forward;
    bool learn;
    bool arp_term;
    bool arp_ufwd;
    u8 mac_age;
    u8 bd_tag[64];
    bool is_add;
} vl_api_bridge_domain_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_bridge_domain_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bridge_domain_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bridge_domain_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
    vl_api_interface_index_t sw_if_index;
} vl_api_bridge_domain_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_bridge_domain_details {
    u16 _vl_msg_id;
    u32 context;
    u32 bd_id;
    bool flood;
    bool uu_flood;
    bool forward;
    bool learn;
    bool arp_term;
    bool arp_ufwd;
    u8 mac_age;
    u8 bd_tag[64];
    vl_api_interface_index_t bvi_sw_if_index;
    vl_api_interface_index_t uu_fwd_sw_if_index;
    u32 n_sw_ifs;
    vl_api_bridge_domain_sw_if_t sw_if_details[0];
} vl_api_bridge_domain_details_t;
typedef struct __attribute__ ((packed)) _vl_api_bridge_flags {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
    bool is_set;
    vl_api_bd_flags_t flags;
} vl_api_bridge_flags_t;
typedef struct __attribute__ ((packed)) _vl_api_bridge_flags_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 resulting_feature_bitmap;
} vl_api_bridge_flags_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_interface_vlan_tag_rewrite {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 vtr_op;
    u32 push_dot1q;
    u32 tag1;
    u32 tag2;
} vl_api_l2_interface_vlan_tag_rewrite_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_interface_vlan_tag_rewrite_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_l2_interface_vlan_tag_rewrite_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_interface_pbb_tag_rewrite {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 vtr_op;
    u16 outer_tag;
    vl_api_mac_address_t b_dmac;
    vl_api_mac_address_t b_smac;
    u16 b_vlanid;
    u32 i_sid;
} vl_api_l2_interface_pbb_tag_rewrite_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_interface_pbb_tag_rewrite_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_l2_interface_pbb_tag_rewrite_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_patch_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t rx_sw_if_index;
    vl_api_interface_index_t tx_sw_if_index;
    bool is_add;
} vl_api_l2_patch_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_patch_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_l2_patch_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_l2_xconnect {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t rx_sw_if_index;
    vl_api_interface_index_t tx_sw_if_index;
    bool enable;
} vl_api_sw_interface_set_l2_xconnect_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_l2_xconnect_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_l2_xconnect_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_l2_bridge {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t rx_sw_if_index;
    u32 bd_id;
    vl_api_l2_port_type_t port_type;
    u8 shg;
    bool enable;
} vl_api_sw_interface_set_l2_bridge_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_l2_bridge_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_l2_bridge_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bd_ip_mac_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_bd_ip_mac_t entry;
} vl_api_bd_ip_mac_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_bd_ip_mac_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bd_ip_mac_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bd_ip_mac_flush {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
} vl_api_bd_ip_mac_flush_t;
typedef struct __attribute__ ((packed)) _vl_api_bd_ip_mac_flush_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bd_ip_mac_flush_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bd_ip_mac_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_bd_ip_mac_t entry;
} vl_api_bd_ip_mac_details_t;
typedef struct __attribute__ ((packed)) _vl_api_bd_ip_mac_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
} vl_api_bd_ip_mac_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_interface_efp_filter {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool enable_disable;
} vl_api_l2_interface_efp_filter_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_interface_efp_filter_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_l2_interface_efp_filter_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_vpath {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool enable;
} vl_api_sw_interface_set_vpath_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_vpath_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_vpath_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bvi_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_mac_address_t mac;
    u32 user_instance;
} vl_api_bvi_create_t;
typedef struct __attribute__ ((packed)) _vl_api_bvi_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_bvi_create_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bvi_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_bvi_delete_t;
typedef struct __attribute__ ((packed)) _vl_api_bvi_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bvi_delete_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_want_l2_arp_term_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool enable;
    u32 pid;
} vl_api_want_l2_arp_term_events_t;
typedef struct __attribute__ ((packed)) _vl_api_want_l2_arp_term_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_want_l2_arp_term_events_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_arp_term_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    vl_api_address_t ip;
    vl_api_interface_index_t sw_if_index;
    vl_api_mac_address_t mac;
} vl_api_l2_arp_term_event_t;
#define VL_API_L2_XCONNECT_DETAILS_CRC "l2_xconnect_details_c8aa6b37"
#define VL_API_L2_XCONNECT_DUMP_CRC "l2_xconnect_dump_51077d14"
#define VL_API_L2_FIB_TABLE_DETAILS_CRC "l2_fib_table_details_e8d2fc72"
#define VL_API_L2_FIB_TABLE_DUMP_CRC "l2_fib_table_dump_c25fdce6"
#define VL_API_L2_FIB_CLEAR_TABLE_CRC "l2_fib_clear_table_51077d14"
#define VL_API_L2_FIB_CLEAR_TABLE_REPLY_CRC "l2_fib_clear_table_reply_e8d4e804"
#define VL_API_L2FIB_FLUSH_ALL_CRC "l2fib_flush_all_51077d14"
#define VL_API_L2FIB_FLUSH_ALL_REPLY_CRC "l2fib_flush_all_reply_e8d4e804"
#define VL_API_L2FIB_FLUSH_BD_CRC "l2fib_flush_bd_c25fdce6"
#define VL_API_L2FIB_FLUSH_BD_REPLY_CRC "l2fib_flush_bd_reply_e8d4e804"
#define VL_API_L2FIB_FLUSH_INT_CRC "l2fib_flush_int_f9e6675e"
#define VL_API_L2FIB_FLUSH_INT_REPLY_CRC "l2fib_flush_int_reply_e8d4e804"
#define VL_API_L2FIB_ADD_DEL_CRC "l2fib_add_del_f29d796c"
#define VL_API_L2FIB_ADD_DEL_REPLY_CRC "l2fib_add_del_reply_e8d4e804"
#define VL_API_WANT_L2_MACS_EVENTS_CRC "want_l2_macs_events_9aabdfde"
#define VL_API_WANT_L2_MACS_EVENTS_REPLY_CRC "want_l2_macs_events_reply_e8d4e804"
#define VL_API_L2_MACS_EVENT_CRC "l2_macs_event_2eadfc8b"
#define VL_API_L2_FLAGS_CRC "l2_flags_fc41cfe8"
#define VL_API_L2_FLAGS_REPLY_CRC "l2_flags_reply_29b2a2b3"
#define VL_API_BRIDGE_DOMAIN_SET_MAC_AGE_CRC "bridge_domain_set_mac_age_b537ad7b"
#define VL_API_BRIDGE_DOMAIN_SET_MAC_AGE_REPLY_CRC "bridge_domain_set_mac_age_reply_e8d4e804"
#define VL_API_BRIDGE_DOMAIN_ADD_DEL_CRC "bridge_domain_add_del_600b7170"
#define VL_API_BRIDGE_DOMAIN_ADD_DEL_REPLY_CRC "bridge_domain_add_del_reply_e8d4e804"
#define VL_API_BRIDGE_DOMAIN_DUMP_CRC "bridge_domain_dump_74396a43"
#define VL_API_BRIDGE_DOMAIN_DETAILS_CRC "bridge_domain_details_979f549d"
#define VL_API_BRIDGE_FLAGS_CRC "bridge_flags_1b0c5fbd"
#define VL_API_BRIDGE_FLAGS_REPLY_CRC "bridge_flags_reply_29b2a2b3"
#define VL_API_L2_INTERFACE_VLAN_TAG_REWRITE_CRC "l2_interface_vlan_tag_rewrite_62cc0bbc"
#define VL_API_L2_INTERFACE_VLAN_TAG_REWRITE_REPLY_CRC "l2_interface_vlan_tag_rewrite_reply_e8d4e804"
#define VL_API_L2_INTERFACE_PBB_TAG_REWRITE_CRC "l2_interface_pbb_tag_rewrite_612efa5a"
#define VL_API_L2_INTERFACE_PBB_TAG_REWRITE_REPLY_CRC "l2_interface_pbb_tag_rewrite_reply_e8d4e804"
#define VL_API_L2_PATCH_ADD_DEL_CRC "l2_patch_add_del_522f3445"
#define VL_API_L2_PATCH_ADD_DEL_REPLY_CRC "l2_patch_add_del_reply_e8d4e804"
#define VL_API_SW_INTERFACE_SET_L2_XCONNECT_CRC "sw_interface_set_l2_xconnect_1aaa2dbb"
#define VL_API_SW_INTERFACE_SET_L2_XCONNECT_REPLY_CRC "sw_interface_set_l2_xconnect_reply_e8d4e804"
#define VL_API_SW_INTERFACE_SET_L2_BRIDGE_CRC "sw_interface_set_l2_bridge_2e483cd0"
#define VL_API_SW_INTERFACE_SET_L2_BRIDGE_REPLY_CRC "sw_interface_set_l2_bridge_reply_e8d4e804"
#define VL_API_BD_IP_MAC_ADD_DEL_CRC "bd_ip_mac_add_del_5f2b84e2"
#define VL_API_BD_IP_MAC_ADD_DEL_REPLY_CRC "bd_ip_mac_add_del_reply_e8d4e804"
#define VL_API_BD_IP_MAC_FLUSH_CRC "bd_ip_mac_flush_c25fdce6"
#define VL_API_BD_IP_MAC_FLUSH_REPLY_CRC "bd_ip_mac_flush_reply_e8d4e804"
#define VL_API_BD_IP_MAC_DETAILS_CRC "bd_ip_mac_details_a52f8044"
#define VL_API_BD_IP_MAC_DUMP_CRC "bd_ip_mac_dump_c25fdce6"
#define VL_API_L2_INTERFACE_EFP_FILTER_CRC "l2_interface_efp_filter_5501adee"
#define VL_API_L2_INTERFACE_EFP_FILTER_REPLY_CRC "l2_interface_efp_filter_reply_e8d4e804"
#define VL_API_SW_INTERFACE_SET_VPATH_CRC "sw_interface_set_vpath_ae6cfcfb"
#define VL_API_SW_INTERFACE_SET_VPATH_REPLY_CRC "sw_interface_set_vpath_reply_e8d4e804"
#define VL_API_BVI_CREATE_CRC "bvi_create_f5398559"
#define VL_API_BVI_CREATE_REPLY_CRC "bvi_create_reply_5383d31f"
#define VL_API_BVI_DELETE_CRC "bvi_delete_f9e6675e"
#define VL_API_BVI_DELETE_REPLY_CRC "bvi_delete_reply_e8d4e804"
#define VL_API_WANT_L2_ARP_TERM_EVENTS_CRC "want_l2_arp_term_events_3ec6d6c2"
#define VL_API_WANT_L2_ARP_TERM_EVENTS_REPLY_CRC "want_l2_arp_term_events_reply_e8d4e804"
#define VL_API_L2_ARP_TERM_EVENT_CRC "l2_arp_term_event_85ff71ea"

#endif
