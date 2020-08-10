#ifndef included_vrrp_api_types_h
#define included_vrrp_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/ethernet/ethernet_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_key {
    vl_api_interface_index_t sw_if_index;
    u8 vr_id;
    u8 is_ipv6;
} vl_api_vrrp_vr_key_t;
typedef enum {
    VRRP_API_VR_PREEMPT = 1,
    VRRP_API_VR_ACCEPT = 2,
    VRRP_API_VR_UNICAST = 4,
    VRRP_API_VR_IPV6 = 8,
} vl_api_vrrp_vr_flags_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_conf {
    vl_api_interface_index_t sw_if_index;
    u8 vr_id;
    u8 priority;
    u16 interval;
    vl_api_vrrp_vr_flags_t flags;
} vl_api_vrrp_vr_conf_t;
typedef enum {
    VRRP_API_VR_STATE_INIT = 0,
    VRRP_API_VR_STATE_BACKUP = 1,
    VRRP_API_VR_STATE_MASTER = 2,
    VRRP_API_VR_STATE_INTF_DOWN = 3,
} vl_api_vrrp_vr_state_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_tracking {
    u32 interfaces_dec;
    u8 priority;
} vl_api_vrrp_vr_tracking_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_runtime {
    vl_api_vrrp_vr_state_t state;
    u16 master_adv_int;
    u16 skew;
    u16 master_down_int;
    vl_api_mac_address_t mac;
    vl_api_vrrp_vr_tracking_t tracking;
} vl_api_vrrp_vr_runtime_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_track_if {
    vl_api_interface_index_t sw_if_index;
    u8 priority;
} vl_api_vrrp_vr_track_if_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_interface_index_t sw_if_index;
    u8 vr_id;
    u8 priority;
    u16 interval;
    vl_api_vrrp_vr_flags_t flags;
    u8 n_addrs;
    vl_api_address_t addrs[0];
} vl_api_vrrp_vr_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_vrrp_vr_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_vrrp_vr_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_vrrp_vr_conf_t config;
    vl_api_vrrp_vr_runtime_t runtime;
    u8 n_addrs;
    vl_api_address_t addrs[0];
} vl_api_vrrp_vr_details_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_start_stop {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u8 vr_id;
    u8 is_ipv6;
    u8 is_start;
} vl_api_vrrp_vr_start_stop_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_start_stop_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_vrrp_vr_start_stop_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_set_peers {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u8 vr_id;
    u8 is_ipv6;
    u8 n_addrs;
    vl_api_address_t addrs[0];
} vl_api_vrrp_vr_set_peers_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_set_peers_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_vrrp_vr_set_peers_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_peer_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u8 is_ipv6;
    u8 vr_id;
} vl_api_vrrp_vr_peer_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_peer_details {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u8 vr_id;
    u8 is_ipv6;
    u8 n_peer_addrs;
    vl_api_address_t peer_addrs[0];
} vl_api_vrrp_vr_peer_details_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_track_if_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u8 is_ipv6;
    u8 vr_id;
    u8 is_add;
    u8 n_ifs;
    vl_api_vrrp_vr_track_if_t ifs[0];
} vl_api_vrrp_vr_track_if_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_track_if_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_vrrp_vr_track_if_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_track_if_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u8 is_ipv6;
    u8 vr_id;
    u8 dump_all;
} vl_api_vrrp_vr_track_if_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_vrrp_vr_track_if_details {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u8 vr_id;
    u8 is_ipv6;
    u8 n_ifs;
    vl_api_vrrp_vr_track_if_t ifs[0];
} vl_api_vrrp_vr_track_if_details_t;
#define VL_API_VRRP_VR_ADD_DEL_CRC "vrrp_vr_add_del_6dc4b881"
#define VL_API_VRRP_VR_ADD_DEL_REPLY_CRC "vrrp_vr_add_del_reply_e8d4e804"
#define VL_API_VRRP_VR_DUMP_CRC "vrrp_vr_dump_f9e6675e"
#define VL_API_VRRP_VR_DETAILS_CRC "vrrp_vr_details_0412fa71"
#define VL_API_VRRP_VR_START_STOP_CRC "vrrp_vr_start_stop_0662a3b7"
#define VL_API_VRRP_VR_START_STOP_REPLY_CRC "vrrp_vr_start_stop_reply_e8d4e804"
#define VL_API_VRRP_VR_SET_PEERS_CRC "vrrp_vr_set_peers_baa2e52b"
#define VL_API_VRRP_VR_SET_PEERS_REPLY_CRC "vrrp_vr_set_peers_reply_e8d4e804"
#define VL_API_VRRP_VR_PEER_DUMP_CRC "vrrp_vr_peer_dump_6fa3f7c4"
#define VL_API_VRRP_VR_PEER_DETAILS_CRC "vrrp_vr_peer_details_abd9145e"
#define VL_API_VRRP_VR_TRACK_IF_ADD_DEL_CRC "vrrp_vr_track_if_add_del_337f4ba4"
#define VL_API_VRRP_VR_TRACK_IF_ADD_DEL_REPLY_CRC "vrrp_vr_track_if_add_del_reply_e8d4e804"
#define VL_API_VRRP_VR_TRACK_IF_DUMP_CRC "vrrp_vr_track_if_dump_a34dfc6d"
#define VL_API_VRRP_VR_TRACK_IF_DETAILS_CRC "vrrp_vr_track_if_details_99bcca9c"

#endif
