#ifndef included_bfd_api_types_h
#define included_bfd_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
typedef enum {
    BFD_STATE_API_ADMIN_DOWN = 0,
    BFD_STATE_API_DOWN = 1,
    BFD_STATE_API_INIT = 2,
    BFD_STATE_API_UP = 3,
} vl_api_bfd_state_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_set_echo_source {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_bfd_udp_set_echo_source_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_set_echo_source_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bfd_udp_set_echo_source_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_del_echo_source {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_bfd_udp_del_echo_source_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_del_echo_source_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bfd_udp_del_echo_source_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_get_echo_source {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_bfd_udp_get_echo_source_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_get_echo_source_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
    bool is_set;
    bool have_usable_ip4;
    vl_api_ip4_address_t ip4_addr;
    bool have_usable_ip6;
    vl_api_ip6_address_t ip6_addr;
} vl_api_bfd_udp_get_echo_source_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 desired_min_tx;
    u32 required_min_rx;
    vl_api_address_t local_addr;
    vl_api_address_t peer_addr;
    u8 detect_mult;
    bool is_authenticated;
    u8 bfd_key_id;
    u32 conf_key_id;
} vl_api_bfd_udp_add_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bfd_udp_add_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_mod {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 desired_min_tx;
    u32 required_min_rx;
    vl_api_address_t local_addr;
    vl_api_address_t peer_addr;
    u8 detect_mult;
} vl_api_bfd_udp_mod_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_mod_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bfd_udp_mod_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_address_t local_addr;
    vl_api_address_t peer_addr;
} vl_api_bfd_udp_del_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bfd_udp_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_session_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_bfd_udp_session_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_session_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_address_t local_addr;
    vl_api_address_t peer_addr;
    vl_api_bfd_state_t state;
    bool is_authenticated;
    u8 bfd_key_id;
    u32 conf_key_id;
    u32 required_min_rx;
    u32 desired_min_tx;
    u8 detect_mult;
} vl_api_bfd_udp_session_details_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_session_set_flags {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_address_t local_addr;
    vl_api_address_t peer_addr;
    vl_api_if_status_flags_t flags;
} vl_api_bfd_udp_session_set_flags_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_session_set_flags_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bfd_udp_session_set_flags_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_want_bfd_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool enable_disable;
    u32 pid;
} vl_api_want_bfd_events_t;
typedef struct __attribute__ ((packed)) _vl_api_want_bfd_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_want_bfd_events_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_auth_set_key {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 conf_key_id;
    u8 key_len;
    u8 auth_type;
    u8 key[20];
} vl_api_bfd_auth_set_key_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_auth_set_key_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bfd_auth_set_key_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_auth_del_key {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 conf_key_id;
} vl_api_bfd_auth_del_key_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_auth_del_key_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bfd_auth_del_key_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_auth_keys_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_bfd_auth_keys_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_auth_keys_details {
    u16 _vl_msg_id;
    u32 context;
    u32 conf_key_id;
    u32 use_count;
    u8 auth_type;
} vl_api_bfd_auth_keys_details_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_auth_activate {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_address_t local_addr;
    vl_api_address_t peer_addr;
    bool is_delayed;
    u8 bfd_key_id;
    u32 conf_key_id;
} vl_api_bfd_udp_auth_activate_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_auth_activate_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bfd_udp_auth_activate_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_auth_deactivate {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_address_t local_addr;
    vl_api_address_t peer_addr;
    bool is_delayed;
} vl_api_bfd_udp_auth_deactivate_t;
typedef struct __attribute__ ((packed)) _vl_api_bfd_udp_auth_deactivate_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_bfd_udp_auth_deactivate_reply_t;
#define VL_API_BFD_UDP_SET_ECHO_SOURCE_CRC "bfd_udp_set_echo_source_f9e6675e"
#define VL_API_BFD_UDP_SET_ECHO_SOURCE_REPLY_CRC "bfd_udp_set_echo_source_reply_e8d4e804"
#define VL_API_BFD_UDP_DEL_ECHO_SOURCE_CRC "bfd_udp_del_echo_source_51077d14"
#define VL_API_BFD_UDP_DEL_ECHO_SOURCE_REPLY_CRC "bfd_udp_del_echo_source_reply_e8d4e804"
#define VL_API_BFD_UDP_GET_ECHO_SOURCE_CRC "bfd_udp_get_echo_source_51077d14"
#define VL_API_BFD_UDP_GET_ECHO_SOURCE_REPLY_CRC "bfd_udp_get_echo_source_reply_1e00cfce"
#define VL_API_BFD_UDP_ADD_CRC "bfd_udp_add_7a6d1185"
#define VL_API_BFD_UDP_ADD_REPLY_CRC "bfd_udp_add_reply_e8d4e804"
#define VL_API_BFD_UDP_MOD_CRC "bfd_udp_mod_783a3ff6"
#define VL_API_BFD_UDP_MOD_REPLY_CRC "bfd_udp_mod_reply_e8d4e804"
#define VL_API_BFD_UDP_DEL_CRC "bfd_udp_del_8096514d"
#define VL_API_BFD_UDP_DEL_REPLY_CRC "bfd_udp_del_reply_e8d4e804"
#define VL_API_BFD_UDP_SESSION_DUMP_CRC "bfd_udp_session_dump_51077d14"
#define VL_API_BFD_UDP_SESSION_DETAILS_CRC "bfd_udp_session_details_60653c02"
#define VL_API_BFD_UDP_SESSION_SET_FLAGS_CRC "bfd_udp_session_set_flags_cf313851"
#define VL_API_BFD_UDP_SESSION_SET_FLAGS_REPLY_CRC "bfd_udp_session_set_flags_reply_e8d4e804"
#define VL_API_WANT_BFD_EVENTS_CRC "want_bfd_events_c5e2af94"
#define VL_API_WANT_BFD_EVENTS_REPLY_CRC "want_bfd_events_reply_e8d4e804"
#define VL_API_BFD_AUTH_SET_KEY_CRC "bfd_auth_set_key_690b8877"
#define VL_API_BFD_AUTH_SET_KEY_REPLY_CRC "bfd_auth_set_key_reply_e8d4e804"
#define VL_API_BFD_AUTH_DEL_KEY_CRC "bfd_auth_del_key_65310b22"
#define VL_API_BFD_AUTH_DEL_KEY_REPLY_CRC "bfd_auth_del_key_reply_e8d4e804"
#define VL_API_BFD_AUTH_KEYS_DUMP_CRC "bfd_auth_keys_dump_51077d14"
#define VL_API_BFD_AUTH_KEYS_DETAILS_CRC "bfd_auth_keys_details_84130e9f"
#define VL_API_BFD_UDP_AUTH_ACTIVATE_CRC "bfd_udp_auth_activate_493ee0ec"
#define VL_API_BFD_UDP_AUTH_ACTIVATE_REPLY_CRC "bfd_udp_auth_activate_reply_e8d4e804"
#define VL_API_BFD_UDP_AUTH_DEACTIVATE_CRC "bfd_udp_auth_deactivate_99978c32"
#define VL_API_BFD_UDP_AUTH_DEACTIVATE_REPLY_CRC "bfd_udp_auth_deactivate_reply_e8d4e804"

#endif
