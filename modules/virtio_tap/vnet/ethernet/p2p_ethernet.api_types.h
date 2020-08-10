#ifndef included_p2p_ethernet_api_types_h
#define included_p2p_ethernet_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ethernet/ethernet_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_p2p_ethernet_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t parent_if_index;
    u32 subif_id;
    vl_api_mac_address_t remote_mac;
} vl_api_p2p_ethernet_add_t;
typedef struct __attribute__ ((packed)) _vl_api_p2p_ethernet_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_p2p_ethernet_add_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_p2p_ethernet_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t parent_if_index;
    vl_api_mac_address_t remote_mac;
} vl_api_p2p_ethernet_del_t;
typedef struct __attribute__ ((packed)) _vl_api_p2p_ethernet_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_p2p_ethernet_del_reply_t;
#define VL_API_P2P_ETHERNET_ADD_CRC "p2p_ethernet_add_eeb8e717"
#define VL_API_P2P_ETHERNET_ADD_REPLY_CRC "p2p_ethernet_add_reply_5383d31f"
#define VL_API_P2P_ETHERNET_DEL_CRC "p2p_ethernet_del_0b62c386"
#define VL_API_P2P_ETHERNET_DEL_REPLY_CRC "p2p_ethernet_del_reply_e8d4e804"

#endif
