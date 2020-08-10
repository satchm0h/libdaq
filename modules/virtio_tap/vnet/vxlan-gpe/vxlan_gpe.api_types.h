#ifndef included_vxlan_gpe_api_types_h
#define included_vxlan_gpe_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_vxlan_gpe_add_del_tunnel {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_t local;
    vl_api_address_t remote;
    vl_api_interface_index_t mcast_sw_if_index;
    u32 encap_vrf_id;
    u32 decap_vrf_id;
    vl_api_ip_proto_t protocol;
    u32 vni;
    bool is_add;
} vl_api_vxlan_gpe_add_del_tunnel_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_gpe_add_del_tunnel_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_vxlan_gpe_add_del_tunnel_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_gpe_tunnel_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_vxlan_gpe_tunnel_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_gpe_tunnel_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_address_t local;
    vl_api_address_t remote;
    u32 vni;
    vl_api_ip_proto_t protocol;
    vl_api_interface_index_t mcast_sw_if_index;
    u32 encap_vrf_id;
    u32 decap_vrf_id;
    bool is_ipv6;
} vl_api_vxlan_gpe_tunnel_details_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_vxlan_gpe_bypass {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool is_ipv6;
    bool enable;
} vl_api_sw_interface_set_vxlan_gpe_bypass_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_vxlan_gpe_bypass_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_vxlan_gpe_bypass_reply_t;
#define VL_API_VXLAN_GPE_ADD_DEL_TUNNEL_CRC "vxlan_gpe_add_del_tunnel_7c6da6ae"
#define VL_API_VXLAN_GPE_ADD_DEL_TUNNEL_REPLY_CRC "vxlan_gpe_add_del_tunnel_reply_5383d31f"
#define VL_API_VXLAN_GPE_TUNNEL_DUMP_CRC "vxlan_gpe_tunnel_dump_f9e6675e"
#define VL_API_VXLAN_GPE_TUNNEL_DETAILS_CRC "vxlan_gpe_tunnel_details_57712346"
#define VL_API_SW_INTERFACE_SET_VXLAN_GPE_BYPASS_CRC "sw_interface_set_vxlan_gpe_bypass_65247409"
#define VL_API_SW_INTERFACE_SET_VXLAN_GPE_BYPASS_REPLY_CRC "sw_interface_set_vxlan_gpe_bypass_reply_e8d4e804"

#endif
