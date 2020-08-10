#ifndef included_lb_api_types_h
#define included_lb_api_types_h
/* Imported API files */
#include <lb/lb_types.api_types.h>
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_lb_conf {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip4_src_address;
    vl_api_ip6_address_t ip6_src_address;
    u32 sticky_buckets_per_core;
    u32 flow_timeout;
} vl_api_lb_conf_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_conf_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_lb_conf_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_add_del_vip {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_with_prefix_t pfx;
    u8 protocol;
    u16 port;
    vl_api_lb_encap_type_t encap;
    u8 dscp;
    vl_api_lb_srv_type_t type;
    u16 target_port;
    u16 node_port;
    u32 new_flows_table_length;
    bool is_del;
} vl_api_lb_add_del_vip_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_add_del_vip_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_lb_add_del_vip_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_add_del_as {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_with_prefix_t pfx;
    u8 protocol;
    u16 port;
    vl_api_address_t as_address;
    bool is_del;
    bool is_flush;
} vl_api_lb_add_del_as_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_add_del_as_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_lb_add_del_as_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_flush_vip {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_with_prefix_t pfx;
    u8 protocol;
    u16 port;
} vl_api_lb_flush_vip_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_flush_vip_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_lb_flush_vip_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_vip_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_with_prefix_t pfx;
    vl_api_prefix_matcher_t pfx_matcher;
    u8 protocol;
    u16 port;
} vl_api_lb_vip_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_vip_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_lb_vip_t vip;
    vl_api_lb_encap_type_t encap;
    vl_api_ip_dscp_t dscp;
    vl_api_lb_srv_type_t srv_type;
    u16 target_port;
    u16 flow_table_length;
} vl_api_lb_vip_details_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_as_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_with_prefix_t pfx;
    u8 protocol;
    u16 port;
} vl_api_lb_as_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_as_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_lb_vip_t vip;
    vl_api_address_t app_srv;
    u8 flags;
    u32 in_use_since;
} vl_api_lb_as_details_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_add_del_intf_nat4 {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_interface_index_t sw_if_index;
} vl_api_lb_add_del_intf_nat4_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_add_del_intf_nat4_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_lb_add_del_intf_nat4_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_add_del_intf_nat6 {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_interface_index_t sw_if_index;
} vl_api_lb_add_del_intf_nat6_t;
typedef struct __attribute__ ((packed)) _vl_api_lb_add_del_intf_nat6_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_lb_add_del_intf_nat6_reply_t;
#define VL_API_LB_CONF_CRC "lb_conf_22ddb739"
#define VL_API_LB_CONF_REPLY_CRC "lb_conf_reply_e8d4e804"
#define VL_API_LB_ADD_DEL_VIP_CRC "lb_add_del_vip_d15b7ddc"
#define VL_API_LB_ADD_DEL_VIP_REPLY_CRC "lb_add_del_vip_reply_e8d4e804"
#define VL_API_LB_ADD_DEL_AS_CRC "lb_add_del_as_78628987"
#define VL_API_LB_ADD_DEL_AS_REPLY_CRC "lb_add_del_as_reply_e8d4e804"
#define VL_API_LB_FLUSH_VIP_CRC "lb_flush_vip_1063f819"
#define VL_API_LB_FLUSH_VIP_REPLY_CRC "lb_flush_vip_reply_e8d4e804"
#define VL_API_LB_VIP_DUMP_CRC "lb_vip_dump_c7bcb124"
#define VL_API_LB_VIP_DETAILS_CRC "lb_vip_details_08f39bed"
#define VL_API_LB_AS_DUMP_CRC "lb_as_dump_1063f819"
#define VL_API_LB_AS_DETAILS_CRC "lb_as_details_9c39f60e"
#define VL_API_LB_ADD_DEL_INTF_NAT4_CRC "lb_add_del_intf_nat4_47d6e753"
#define VL_API_LB_ADD_DEL_INTF_NAT4_REPLY_CRC "lb_add_del_intf_nat4_reply_e8d4e804"
#define VL_API_LB_ADD_DEL_INTF_NAT6_CRC "lb_add_del_intf_nat6_47d6e753"
#define VL_API_LB_ADD_DEL_INTF_NAT6_REPLY_CRC "lb_add_del_intf_nat6_reply_e8d4e804"

#endif
