#ifndef included_vxlan_gbp_api_types_h
#define included_vxlan_gbp_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/interface_types.api_types.h>
typedef enum {
    VXLAN_GBP_API_TUNNEL_MODE_L2 = 1,
    VXLAN_GBP_API_TUNNEL_MODE_L3 = 2,
} vl_api_vxlan_gbp_api_tunnel_mode_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_gbp_tunnel {
    u32 instance;
    vl_api_address_t src;
    vl_api_address_t dst;
    vl_api_interface_index_t mcast_sw_if_index;
    u32 encap_table_id;
    u32 vni;
    vl_api_interface_index_t sw_if_index;
    vl_api_vxlan_gbp_api_tunnel_mode_t mode;
} vl_api_vxlan_gbp_tunnel_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_gbp_tunnel_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_vxlan_gbp_tunnel_t tunnel;
} vl_api_vxlan_gbp_tunnel_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_gbp_tunnel_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_vxlan_gbp_tunnel_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_gbp_tunnel_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_vxlan_gbp_tunnel_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_gbp_tunnel_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_vxlan_gbp_tunnel_t tunnel;
} vl_api_vxlan_gbp_tunnel_details_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_vxlan_gbp_bypass {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool is_ipv6;
    bool enable;
} vl_api_sw_interface_set_vxlan_gbp_bypass_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_vxlan_gbp_bypass_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_vxlan_gbp_bypass_reply_t;
#define VL_API_VXLAN_GBP_TUNNEL_ADD_DEL_CRC "vxlan_gbp_tunnel_add_del_8c819166"
#define VL_API_VXLAN_GBP_TUNNEL_ADD_DEL_REPLY_CRC "vxlan_gbp_tunnel_add_del_reply_5383d31f"
#define VL_API_VXLAN_GBP_TUNNEL_DUMP_CRC "vxlan_gbp_tunnel_dump_f9e6675e"
#define VL_API_VXLAN_GBP_TUNNEL_DETAILS_CRC "vxlan_gbp_tunnel_details_1da24016"
#define VL_API_SW_INTERFACE_SET_VXLAN_GBP_BYPASS_CRC "sw_interface_set_vxlan_gbp_bypass_65247409"
#define VL_API_SW_INTERFACE_SET_VXLAN_GBP_BYPASS_REPLY_CRC "sw_interface_set_vxlan_gbp_bypass_reply_e8d4e804"

#endif
