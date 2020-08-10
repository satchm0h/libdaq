#ifndef included_tapv2_api_types_h
#define included_tapv2_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ethernet/ethernet_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
typedef enum {
    TAP_API_FLAG_GSO = 1,
    TAP_API_FLAG_CSUM_OFFLOAD = 2,
    TAP_API_FLAG_PERSIST = 4,
    TAP_API_FLAG_ATTACH = 8,
    TAP_API_FLAG_TUN = 16,
    TAP_API_FLAG_GRO_COALESCE = 32,
} vl_api_tap_flags_t;
typedef struct __attribute__ ((packed)) _vl_api_tap_create_v2 {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 id;
    bool use_random_mac;
    vl_api_mac_address_t mac_address;
    u8 num_rx_queues;
    u16 tx_ring_sz;
    u16 rx_ring_sz;
    bool host_mtu_set;
    u32 host_mtu_size;
    bool host_mac_addr_set;
    vl_api_mac_address_t host_mac_addr;
    bool host_ip4_prefix_set;
    vl_api_ip4_address_with_prefix_t host_ip4_prefix;
    bool host_ip6_prefix_set;
    vl_api_ip6_address_with_prefix_t host_ip6_prefix;
    bool host_ip4_gw_set;
    vl_api_ip4_address_t host_ip4_gw;
    bool host_ip6_gw_set;
    vl_api_ip6_address_t host_ip6_gw;
    vl_api_tap_flags_t tap_flags;
    bool host_namespace_set;
    u8 host_namespace[64];
    bool host_if_name_set;
    u8 host_if_name[64];
    bool host_bridge_set;
    u8 host_bridge[64];
    vl_api_string_t tag;
} vl_api_tap_create_v2_t;
typedef struct __attribute__ ((packed)) _vl_api_tap_create_v2_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_tap_create_v2_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_tap_delete_v2 {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_tap_delete_v2_t;
typedef struct __attribute__ ((packed)) _vl_api_tap_delete_v2_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_tap_delete_v2_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_tap_v2_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_sw_interface_tap_v2_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_tap_v2_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u32 id;
    u16 tx_ring_sz;
    u16 rx_ring_sz;
    u32 host_mtu_size;
    vl_api_mac_address_t host_mac_addr;
    vl_api_ip4_address_with_prefix_t host_ip4_prefix;
    vl_api_ip6_address_with_prefix_t host_ip6_prefix;
    vl_api_tap_flags_t tap_flags;
    u8 dev_name[64];
    u8 host_if_name[64];
    u8 host_namespace[64];
    u8 host_bridge[64];
} vl_api_sw_interface_tap_v2_details_t;
#define VL_API_TAP_CREATE_V2_CRC "tap_create_v2_445835fd"
#define VL_API_TAP_CREATE_V2_REPLY_CRC "tap_create_v2_reply_5383d31f"
#define VL_API_TAP_DELETE_V2_CRC "tap_delete_v2_f9e6675e"
#define VL_API_TAP_DELETE_V2_REPLY_CRC "tap_delete_v2_reply_e8d4e804"
#define VL_API_SW_INTERFACE_TAP_V2_DUMP_CRC "sw_interface_tap_v2_dump_f9e6675e"
#define VL_API_SW_INTERFACE_TAP_V2_DETAILS_CRC "sw_interface_tap_v2_details_e53c16de"

#endif
