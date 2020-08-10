#ifndef included_gbp_api_types_h
#define included_gbp_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/ethernet/ethernet_types.api_types.h>
#include <vnet/interface_types.api_types.h>
typedef enum {
    GBP_BD_API_FLAG_NONE = 0,
    GBP_BD_API_FLAG_DO_NOT_LEARN = 1,
    GBP_BD_API_FLAG_UU_FWD_DROP = 2,
    GBP_BD_API_FLAG_MCAST_DROP = 4,
    GBP_BD_API_FLAG_UCAST_ARP = 8,
} vl_api_gbp_bridge_domain_flags_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_bridge_domain {
    u32 bd_id;
    u32 rd_id;
    vl_api_gbp_bridge_domain_flags_t flags;
    vl_api_interface_index_t bvi_sw_if_index;
    vl_api_interface_index_t uu_fwd_sw_if_index;
    vl_api_interface_index_t bm_flood_sw_if_index;
} vl_api_gbp_bridge_domain_t;
typedef u16 vl_api_gbp_scope_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_route_domain {
    u32 rd_id;
    u32 ip4_table_id;
    u32 ip6_table_id;
    vl_api_interface_index_t ip4_uu_sw_if_index;
    vl_api_interface_index_t ip6_uu_sw_if_index;
    vl_api_gbp_scope_t scope;
} vl_api_gbp_route_domain_t;
typedef enum {
    GBP_API_ENDPOINT_FLAG_NONE = 0,
    GBP_API_ENDPOINT_FLAG_BOUNCE = 1,
    GBP_API_ENDPOINT_FLAG_REMOTE = 2,
    GBP_API_ENDPOINT_FLAG_LEARNT = 4,
    GBP_API_ENDPOINT_FLAG_EXTERNAL = 8,
} vl_api_gbp_endpoint_flags_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_tun {
    vl_api_address_t src;
    vl_api_address_t dst;
} vl_api_gbp_endpoint_tun_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint {
    vl_api_interface_index_t sw_if_index;
    u16 sclass;
    vl_api_gbp_endpoint_flags_t flags;
    vl_api_mac_address_t mac;
    vl_api_gbp_endpoint_tun_t tun;
    u8 n_ips;
    vl_api_address_t ips[0];
} vl_api_gbp_endpoint_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_retention {
    u32 remote_ep_timeout;
} vl_api_gbp_endpoint_retention_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_group {
    u32 vnid;
    u16 sclass;
    u32 bd_id;
    u32 rd_id;
    vl_api_interface_index_t uplink_sw_if_index;
    vl_api_gbp_endpoint_retention_t retention;
} vl_api_gbp_endpoint_group_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_recirc {
    vl_api_interface_index_t sw_if_index;
    u16 sclass;
    bool is_ext;
} vl_api_gbp_recirc_t;
typedef enum {
    GBP_API_SUBNET_TRANSPORT = 1,
    GBP_API_SUBNET_STITCHED_INTERNAL = 2,
    GBP_API_SUBNET_STITCHED_EXTERNAL = 3,
    GBP_API_SUBNET_L3_OUT = 4,
    GBP_API_SUBNET_ANON_L3_OUT = 5,
} vl_api_gbp_subnet_type_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_subnet {
    u32 rd_id;
    vl_api_interface_index_t sw_if_index;
    u16 sclass;
    vl_api_gbp_subnet_type_t type;
    vl_api_prefix_t prefix;
} vl_api_gbp_subnet_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_next_hop {
    vl_api_address_t ip;
    vl_api_mac_address_t mac;
    u32 bd_id;
    u32 rd_id;
} vl_api_gbp_next_hop_t;
typedef enum {
    GBP_API_HASH_MODE_SRC_IP = 1,
    GBP_API_HASH_MODE_DST_IP = 2,
    GBP_API_HASH_MODE_SYMMETRIC = 3,
} vl_api_gbp_hash_mode_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_next_hop_set {
    vl_api_gbp_hash_mode_t hash_mode;
    u8 n_nhs;
    vl_api_gbp_next_hop_t nhs[8];
} vl_api_gbp_next_hop_set_t;
typedef enum {
    GBP_API_RULE_PERMIT = 1,
    GBP_API_RULE_DENY = 2,
    GBP_API_RULE_REDIRECT = 3,
} vl_api_gbp_rule_action_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_rule {
    vl_api_gbp_rule_action_t action;
    vl_api_gbp_next_hop_set_t nh_set;
} vl_api_gbp_rule_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_contract {
    vl_api_gbp_scope_t scope;
    u16 sclass;
    u16 dclass;
    u32 acl_index;
    u8 n_ether_types;
    u16 allowed_ethertypes[16];
    u8 n_rules;
    vl_api_gbp_rule_t rules[0];
} vl_api_gbp_contract_t;
typedef enum {
    GBP_VXLAN_TUNNEL_MODE_L2 = 1,
    GBP_VXLAN_TUNNEL_MODE_L3 = 2,
} vl_api_gbp_vxlan_tunnel_mode_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_vxlan_tunnel {
    u32 vni;
    vl_api_gbp_vxlan_tunnel_mode_t mode;
    u32 bd_rd_id;
    vl_api_ip4_address_t src;
} vl_api_gbp_vxlan_tunnel_t;
typedef enum {
    GBP_API_EXT_ITF_F_NONE = 0,
    GBP_API_EXT_ITF_F_ANON = 1,
} vl_api_gbp_ext_itf_flags_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_ext_itf {
    vl_api_interface_index_t sw_if_index;
    u32 bd_id;
    u32 rd_id;
    vl_api_gbp_ext_itf_flags_t flags;
} vl_api_gbp_ext_itf_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_bridge_domain_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_gbp_bridge_domain_t bd;
} vl_api_gbp_bridge_domain_add_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_bridge_domain_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_bridge_domain_add_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_bridge_domain_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
} vl_api_gbp_bridge_domain_del_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_bridge_domain_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_bridge_domain_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_bridge_domain_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_gbp_bridge_domain_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_bridge_domain_dump_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_bridge_domain_dump_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_bridge_domain_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_bridge_domain_t bd;
} vl_api_gbp_bridge_domain_details_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_route_domain_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_gbp_route_domain_t rd;
} vl_api_gbp_route_domain_add_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_route_domain_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_route_domain_add_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_route_domain_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 rd_id;
} vl_api_gbp_route_domain_del_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_route_domain_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_route_domain_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_route_domain_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_gbp_route_domain_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_route_domain_dump_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_route_domain_dump_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_route_domain_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_route_domain_t rd;
} vl_api_gbp_route_domain_details_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_gbp_endpoint_t endpoint;
} vl_api_gbp_endpoint_add_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 handle;
} vl_api_gbp_endpoint_add_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 handle;
} vl_api_gbp_endpoint_del_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_endpoint_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_gbp_endpoint_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_details {
    u16 _vl_msg_id;
    u32 context;
    f64 age;
    u32 handle;
    vl_api_gbp_endpoint_t endpoint;
} vl_api_gbp_endpoint_details_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_group_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_gbp_endpoint_group_t epg;
} vl_api_gbp_endpoint_group_add_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_group_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_endpoint_group_add_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_group_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 sclass;
} vl_api_gbp_endpoint_group_del_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_group_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_endpoint_group_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_group_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_gbp_endpoint_group_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_endpoint_group_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_endpoint_group_t epg;
} vl_api_gbp_endpoint_group_details_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_recirc_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_gbp_recirc_t recirc;
} vl_api_gbp_recirc_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_recirc_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_recirc_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_recirc_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_gbp_recirc_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_recirc_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_recirc_t recirc;
} vl_api_gbp_recirc_details_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_subnet_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_gbp_subnet_t subnet;
} vl_api_gbp_subnet_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_subnet_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_subnet_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_subnet_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_gbp_subnet_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_subnet_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_subnet_t subnet;
} vl_api_gbp_subnet_details_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_contract_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_gbp_contract_t contract;
} vl_api_gbp_contract_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_contract_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 stats_index;
} vl_api_gbp_contract_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_contract_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_gbp_contract_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_contract_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_contract_t contract;
} vl_api_gbp_contract_details_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_vxlan_tunnel_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_gbp_vxlan_tunnel_t tunnel;
} vl_api_gbp_vxlan_tunnel_add_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_vxlan_tunnel_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_gbp_vxlan_tunnel_add_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_vxlan_tunnel_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 vni;
} vl_api_gbp_vxlan_tunnel_del_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_vxlan_tunnel_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_vxlan_tunnel_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_vxlan_tunnel_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_gbp_vxlan_tunnel_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_vxlan_tunnel_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_vxlan_tunnel_t tunnel;
} vl_api_gbp_vxlan_tunnel_details_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_ext_itf_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_gbp_ext_itf_t ext_itf;
} vl_api_gbp_ext_itf_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_ext_itf_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_gbp_ext_itf_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_ext_itf_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_gbp_ext_itf_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_gbp_ext_itf_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_ext_itf_t ext_itf;
} vl_api_gbp_ext_itf_details_t;
#define VL_API_GBP_BRIDGE_DOMAIN_ADD_CRC "gbp_bridge_domain_add_8454bfdf"
#define VL_API_GBP_BRIDGE_DOMAIN_ADD_REPLY_CRC "gbp_bridge_domain_add_reply_e8d4e804"
#define VL_API_GBP_BRIDGE_DOMAIN_DEL_CRC "gbp_bridge_domain_del_c25fdce6"
#define VL_API_GBP_BRIDGE_DOMAIN_DEL_REPLY_CRC "gbp_bridge_domain_del_reply_e8d4e804"
#define VL_API_GBP_BRIDGE_DOMAIN_DUMP_CRC "gbp_bridge_domain_dump_51077d14"
#define VL_API_GBP_BRIDGE_DOMAIN_DUMP_REPLY_CRC "gbp_bridge_domain_dump_reply_e8d4e804"
#define VL_API_GBP_BRIDGE_DOMAIN_DETAILS_CRC "gbp_bridge_domain_details_2acd15f9"
#define VL_API_GBP_ROUTE_DOMAIN_ADD_CRC "gbp_route_domain_add_2d0afe38"
#define VL_API_GBP_ROUTE_DOMAIN_ADD_REPLY_CRC "gbp_route_domain_add_reply_e8d4e804"
#define VL_API_GBP_ROUTE_DOMAIN_DEL_CRC "gbp_route_domain_del_bee4edcd"
#define VL_API_GBP_ROUTE_DOMAIN_DEL_REPLY_CRC "gbp_route_domain_del_reply_e8d4e804"
#define VL_API_GBP_ROUTE_DOMAIN_DUMP_CRC "gbp_route_domain_dump_51077d14"
#define VL_API_GBP_ROUTE_DOMAIN_DUMP_REPLY_CRC "gbp_route_domain_dump_reply_e8d4e804"
#define VL_API_GBP_ROUTE_DOMAIN_DETAILS_CRC "gbp_route_domain_details_8ab11375"
#define VL_API_GBP_ENDPOINT_ADD_CRC "gbp_endpoint_add_9ce16d5a"
#define VL_API_GBP_ENDPOINT_ADD_REPLY_CRC "gbp_endpoint_add_reply_1dd3ff3e"
#define VL_API_GBP_ENDPOINT_DEL_CRC "gbp_endpoint_del_b93cd566"
#define VL_API_GBP_ENDPOINT_DEL_REPLY_CRC "gbp_endpoint_del_reply_e8d4e804"
#define VL_API_GBP_ENDPOINT_DUMP_CRC "gbp_endpoint_dump_51077d14"
#define VL_API_GBP_ENDPOINT_DETAILS_CRC "gbp_endpoint_details_08aecb60"
#define VL_API_GBP_ENDPOINT_GROUP_ADD_CRC "gbp_endpoint_group_add_8e0f4054"
#define VL_API_GBP_ENDPOINT_GROUP_ADD_REPLY_CRC "gbp_endpoint_group_add_reply_e8d4e804"
#define VL_API_GBP_ENDPOINT_GROUP_DEL_CRC "gbp_endpoint_group_del_3436b8b7"
#define VL_API_GBP_ENDPOINT_GROUP_DEL_REPLY_CRC "gbp_endpoint_group_del_reply_e8d4e804"
#define VL_API_GBP_ENDPOINT_GROUP_DUMP_CRC "gbp_endpoint_group_dump_51077d14"
#define VL_API_GBP_ENDPOINT_GROUP_DETAILS_CRC "gbp_endpoint_group_details_8f38292c"
#define VL_API_GBP_RECIRC_ADD_DEL_CRC "gbp_recirc_add_del_718c69c3"
#define VL_API_GBP_RECIRC_ADD_DEL_REPLY_CRC "gbp_recirc_add_del_reply_e8d4e804"
#define VL_API_GBP_RECIRC_DUMP_CRC "gbp_recirc_dump_51077d14"
#define VL_API_GBP_RECIRC_DETAILS_CRC "gbp_recirc_details_66ecc42e"
#define VL_API_GBP_SUBNET_ADD_DEL_CRC "gbp_subnet_add_del_888aca35"
#define VL_API_GBP_SUBNET_ADD_DEL_REPLY_CRC "gbp_subnet_add_del_reply_e8d4e804"
#define VL_API_GBP_SUBNET_DUMP_CRC "gbp_subnet_dump_51077d14"
#define VL_API_GBP_SUBNET_DETAILS_CRC "gbp_subnet_details_4ed84156"
#define VL_API_GBP_CONTRACT_ADD_DEL_CRC "gbp_contract_add_del_553e275b"
#define VL_API_GBP_CONTRACT_ADD_DEL_REPLY_CRC "gbp_contract_add_del_reply_1992deab"
#define VL_API_GBP_CONTRACT_DUMP_CRC "gbp_contract_dump_51077d14"
#define VL_API_GBP_CONTRACT_DETAILS_CRC "gbp_contract_details_2a18db6e"
#define VL_API_GBP_VXLAN_TUNNEL_ADD_CRC "gbp_vxlan_tunnel_add_3e070b35"
#define VL_API_GBP_VXLAN_TUNNEL_ADD_REPLY_CRC "gbp_vxlan_tunnel_add_reply_5383d31f"
#define VL_API_GBP_VXLAN_TUNNEL_DEL_CRC "gbp_vxlan_tunnel_del_8d1f2fe9"
#define VL_API_GBP_VXLAN_TUNNEL_DEL_REPLY_CRC "gbp_vxlan_tunnel_del_reply_e8d4e804"
#define VL_API_GBP_VXLAN_TUNNEL_DUMP_CRC "gbp_vxlan_tunnel_dump_51077d14"
#define VL_API_GBP_VXLAN_TUNNEL_DETAILS_CRC "gbp_vxlan_tunnel_details_65c6c818"
#define VL_API_GBP_EXT_ITF_ADD_DEL_CRC "gbp_ext_itf_add_del_12ed5700"
#define VL_API_GBP_EXT_ITF_ADD_DEL_REPLY_CRC "gbp_ext_itf_add_del_reply_e8d4e804"
#define VL_API_GBP_EXT_ITF_DUMP_CRC "gbp_ext_itf_dump_51077d14"
#define VL_API_GBP_EXT_ITF_DETAILS_CRC "gbp_ext_itf_details_408a45c0"

#endif
