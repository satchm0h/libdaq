#ifndef included_vxlan_api_types_h
#define included_vxlan_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_vxlan_add_del_tunnel {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    u32 instance;
    vl_api_address_t src_address;
    vl_api_address_t dst_address;
    vl_api_interface_index_t mcast_sw_if_index;
    u32 encap_vrf_id;
    u32 decap_next_index;
    u32 vni;
} vl_api_vxlan_add_del_tunnel_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_add_del_tunnel_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_vxlan_add_del_tunnel_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_tunnel_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_vxlan_tunnel_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_tunnel_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 instance;
    vl_api_address_t src_address;
    vl_api_address_t dst_address;
    vl_api_interface_index_t mcast_sw_if_index;
    u32 encap_vrf_id;
    u32 decap_next_index;
    u32 vni;
} vl_api_vxlan_tunnel_details_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_vxlan_bypass {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool is_ipv6;
    bool enable;
} vl_api_sw_interface_set_vxlan_bypass_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_vxlan_bypass_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_vxlan_bypass_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_offload_rx {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t hw_if_index;
    vl_api_interface_index_t sw_if_index;
    bool enable;
} vl_api_vxlan_offload_rx_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_offload_rx_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_vxlan_offload_rx_reply_t;
#define VL_API_VXLAN_ADD_DEL_TUNNEL_CRC "vxlan_add_del_tunnel_a35dc8f5"
#define VL_API_VXLAN_ADD_DEL_TUNNEL_REPLY_CRC "vxlan_add_del_tunnel_reply_5383d31f"
#define VL_API_VXLAN_TUNNEL_DUMP_CRC "vxlan_tunnel_dump_f9e6675e"
#define VL_API_VXLAN_TUNNEL_DETAILS_CRC "vxlan_tunnel_details_e782f70f"
#define VL_API_SW_INTERFACE_SET_VXLAN_BYPASS_CRC "sw_interface_set_vxlan_bypass_65247409"
#define VL_API_SW_INTERFACE_SET_VXLAN_BYPASS_REPLY_CRC "sw_interface_set_vxlan_bypass_reply_e8d4e804"
#define VL_API_VXLAN_OFFLOAD_RX_CRC "vxlan_offload_rx_89a1564b"
#define VL_API_VXLAN_OFFLOAD_RX_REPLY_CRC "vxlan_offload_rx_reply_e8d4e804"

#endif
