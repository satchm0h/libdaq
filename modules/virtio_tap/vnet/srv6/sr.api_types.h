#ifndef included_sr_api_types_h
#define included_sr_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/srv6/sr_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_srv6_sid_list {
    u8 num_sids;
    u32 weight;
    vl_api_ip6_address_t sids[16];
} vl_api_srv6_sid_list_t;
typedef struct __attribute__ ((packed)) _vl_api_srv6_sid_list_with_sl_index {
    u8 num_sids;
    u32 weight;
    u32 sl_index;
    vl_api_ip6_address_t sids[16];
} vl_api_srv6_sid_list_with_sl_index_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_localsid_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_del;
    vl_api_ip6_address_t localsid;
    bool end_psp;
    vl_api_sr_behavior_t behavior;
    vl_api_interface_index_t sw_if_index;
    u32 vlan_index;
    u32 fib_table;
    vl_api_address_t nh_addr;
} vl_api_sr_localsid_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_localsid_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sr_localsid_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_policy_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip6_address_t bsid_addr;
    u32 weight;
    bool is_encap;
    bool is_spray;
    u32 fib_table;
    vl_api_srv6_sid_list_t sids;
} vl_api_sr_policy_add_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_policy_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sr_policy_add_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_policy_mod {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip6_address_t bsid_addr;
    u32 sr_policy_index;
    u32 fib_table;
    vl_api_sr_policy_op_t operation;
    u32 sl_index;
    u32 weight;
    vl_api_srv6_sid_list_t sids;
} vl_api_sr_policy_mod_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_policy_mod_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sr_policy_mod_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_policy_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip6_address_t bsid_addr;
    u32 sr_policy_index;
} vl_api_sr_policy_del_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_policy_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sr_policy_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_set_encap_source {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip6_address_t encaps_source;
} vl_api_sr_set_encap_source_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_set_encap_source_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sr_set_encap_source_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_set_encap_hop_limit {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 hop_limit;
} vl_api_sr_set_encap_hop_limit_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_set_encap_hop_limit_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sr_set_encap_hop_limit_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_steering_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_del;
    vl_api_ip6_address_t bsid_addr;
    u32 sr_policy_index;
    u32 table_id;
    vl_api_prefix_t prefix;
    vl_api_interface_index_t sw_if_index;
    vl_api_sr_steer_t traffic_type;
} vl_api_sr_steering_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_steering_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sr_steering_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_localsids_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_sr_localsids_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_localsids_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip6_address_t addr;
    bool end_psp;
    vl_api_sr_behavior_t behavior;
    u32 fib_table;
    u32 vlan_index;
    vl_api_address_t xconnect_nh_addr;
    u32 xconnect_iface_or_vrf_table;
} vl_api_sr_localsids_details_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_policies_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_sr_policies_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_policies_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip6_address_t bsid;
    bool is_spray;
    bool is_encap;
    u32 fib_table;
    u8 num_sid_lists;
    vl_api_srv6_sid_list_t sid_lists[0];
} vl_api_sr_policies_details_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_policies_with_sl_index_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_sr_policies_with_sl_index_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_policies_with_sl_index_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip6_address_t bsid;
    bool is_spray;
    bool is_encap;
    u32 fib_table;
    u8 num_sid_lists;
    vl_api_srv6_sid_list_with_sl_index_t sid_lists[0];
} vl_api_sr_policies_with_sl_index_details_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_steering_pol_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_sr_steering_pol_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_sr_steering_pol_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_sr_steer_t traffic_type;
    u32 fib_table;
    vl_api_prefix_t prefix;
    vl_api_interface_index_t sw_if_index;
    vl_api_ip6_address_t bsid;
} vl_api_sr_steering_pol_details_t;
#define VL_API_SR_LOCALSID_ADD_DEL_CRC "sr_localsid_add_del_26fa3309"
#define VL_API_SR_LOCALSID_ADD_DEL_REPLY_CRC "sr_localsid_add_del_reply_e8d4e804"
#define VL_API_SR_POLICY_ADD_CRC "sr_policy_add_ec79ee6a"
#define VL_API_SR_POLICY_ADD_REPLY_CRC "sr_policy_add_reply_e8d4e804"
#define VL_API_SR_POLICY_MOD_CRC "sr_policy_mod_e531a102"
#define VL_API_SR_POLICY_MOD_REPLY_CRC "sr_policy_mod_reply_e8d4e804"
#define VL_API_SR_POLICY_DEL_CRC "sr_policy_del_cb4d48d5"
#define VL_API_SR_POLICY_DEL_REPLY_CRC "sr_policy_del_reply_e8d4e804"
#define VL_API_SR_SET_ENCAP_SOURCE_CRC "sr_set_encap_source_d3bad5e1"
#define VL_API_SR_SET_ENCAP_SOURCE_REPLY_CRC "sr_set_encap_source_reply_e8d4e804"
#define VL_API_SR_SET_ENCAP_HOP_LIMIT_CRC "sr_set_encap_hop_limit_aa75d7d0"
#define VL_API_SR_SET_ENCAP_HOP_LIMIT_REPLY_CRC "sr_set_encap_hop_limit_reply_e8d4e804"
#define VL_API_SR_STEERING_ADD_DEL_CRC "sr_steering_add_del_3711dace"
#define VL_API_SR_STEERING_ADD_DEL_REPLY_CRC "sr_steering_add_del_reply_e8d4e804"
#define VL_API_SR_LOCALSIDS_DUMP_CRC "sr_localsids_dump_51077d14"
#define VL_API_SR_LOCALSIDS_DETAILS_CRC "sr_localsids_details_6a6c0265"
#define VL_API_SR_POLICIES_DUMP_CRC "sr_policies_dump_51077d14"
#define VL_API_SR_POLICIES_DETAILS_CRC "sr_policies_details_07ec2d93"
#define VL_API_SR_POLICIES_WITH_SL_INDEX_DUMP_CRC "sr_policies_with_sl_index_dump_51077d14"
#define VL_API_SR_POLICIES_WITH_SL_INDEX_DETAILS_CRC "sr_policies_with_sl_index_details_ca2e9bc8"
#define VL_API_SR_STEERING_POL_DUMP_CRC "sr_steering_pol_dump_51077d14"
#define VL_API_SR_STEERING_POL_DETAILS_CRC "sr_steering_pol_details_1c1ee786"

#endif
