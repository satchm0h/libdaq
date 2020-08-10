#ifndef included_pppoe_api_types_h
#define included_pppoe_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ethernet/ethernet_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_pppoe_add_del_session {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    u16 session_id;
    vl_api_address_t client_ip;
    u32 decap_vrf_id;
    vl_api_mac_address_t client_mac;
} vl_api_pppoe_add_del_session_t;
typedef struct __attribute__ ((packed)) _vl_api_pppoe_add_del_session_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_pppoe_add_del_session_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_pppoe_session_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_pppoe_session_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_pppoe_session_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u16 session_id;
    vl_api_address_t client_ip;
    vl_api_interface_index_t encap_if_index;
    u32 decap_vrf_id;
    vl_api_mac_address_t local_mac;
    vl_api_mac_address_t client_mac;
} vl_api_pppoe_session_details_t;
#define VL_API_PPPOE_ADD_DEL_SESSION_CRC "pppoe_add_del_session_46ace853"
#define VL_API_PPPOE_ADD_DEL_SESSION_REPLY_CRC "pppoe_add_del_session_reply_5383d31f"
#define VL_API_PPPOE_SESSION_DUMP_CRC "pppoe_session_dump_f9e6675e"
#define VL_API_PPPOE_SESSION_DETAILS_CRC "pppoe_session_details_332bc742"

#endif
