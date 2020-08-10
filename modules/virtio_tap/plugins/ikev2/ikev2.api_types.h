#ifndef included_ikev2_api_types_h
#define included_ikev2_api_types_h
/* Imported API files */
#include <ikev2/ikev2_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_ikev2_plugin_get_version {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ikev2_plugin_get_version_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_plugin_get_version_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 major;
    u32 minor;
} vl_api_ikev2_plugin_get_version_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ikev2_profile_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ikev2_profile_t profile;
} vl_api_ikev2_profile_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_sa_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ikev2_sa_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_sa_details {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ikev2_sa_t sa;
} vl_api_ikev2_sa_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_child_sa_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sa_index;
} vl_api_ikev2_child_sa_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_child_sa_details {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ikev2_child_sa_t child_sa;
} vl_api_ikev2_child_sa_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_nonce_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_initiator;
    u32 sa_index;
} vl_api_ikev2_nonce_get_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_nonce_get_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 data_len;
    u8 nonce[0];
} vl_api_ikev2_nonce_get_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_traffic_selector_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_initiator;
    u32 sa_index;
    u32 child_sa_index;
} vl_api_ikev2_traffic_selector_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_traffic_selector_details {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ikev2_ts_t ts;
} vl_api_ikev2_traffic_selector_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    bool is_add;
} vl_api_ikev2_profile_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_profile_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_set_auth {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    u8 auth_method;
    bool is_hex;
    u32 data_len;
    u8 data[0];
} vl_api_ikev2_profile_set_auth_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_set_auth_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_profile_set_auth_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_set_id {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    bool is_local;
    u8 id_type;
    u32 data_len;
    u8 data[0];
} vl_api_ikev2_profile_set_id_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_set_id_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_profile_set_id_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_set_ts {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    vl_api_ikev2_ts_t ts;
} vl_api_ikev2_profile_set_ts_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_set_ts_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_profile_set_ts_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_set_local_key {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 key_file[256];
} vl_api_ikev2_set_local_key_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_set_local_key_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_set_local_key_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_set_tunnel_interface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    vl_api_interface_index_t sw_if_index;
} vl_api_ikev2_set_tunnel_interface_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_set_tunnel_interface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_set_tunnel_interface_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_set_responder {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    vl_api_ikev2_responder_t responder;
} vl_api_ikev2_set_responder_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_set_responder_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_set_responder_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_set_ike_transforms {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    vl_api_ikev2_ike_transforms_t tr;
} vl_api_ikev2_set_ike_transforms_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_set_ike_transforms_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_set_ike_transforms_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_set_esp_transforms {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    vl_api_ikev2_esp_transforms_t tr;
} vl_api_ikev2_set_esp_transforms_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_set_esp_transforms_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_set_esp_transforms_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_set_sa_lifetime {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    u64 lifetime;
    u32 lifetime_jitter;
    u32 handover;
    u64 lifetime_maxdata;
} vl_api_ikev2_set_sa_lifetime_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_set_sa_lifetime_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_set_sa_lifetime_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_initiate_sa_init {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
} vl_api_ikev2_initiate_sa_init_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_initiate_sa_init_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_initiate_sa_init_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_initiate_del_ike_sa {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 ispi;
} vl_api_ikev2_initiate_del_ike_sa_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_initiate_del_ike_sa_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_initiate_del_ike_sa_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_initiate_del_child_sa {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 ispi;
} vl_api_ikev2_initiate_del_child_sa_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_initiate_del_child_sa_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_initiate_del_child_sa_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_initiate_rekey_child_sa {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 ispi;
} vl_api_ikev2_initiate_rekey_child_sa_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_initiate_rekey_child_sa_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_initiate_rekey_child_sa_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_set_udp_encap {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
} vl_api_ikev2_profile_set_udp_encap_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_set_udp_encap_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_profile_set_udp_encap_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_set_ipsec_udp_port {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_set;
    u16 port;
    u8 name[64];
} vl_api_ikev2_profile_set_ipsec_udp_port_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_set_ipsec_udp_port_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_profile_set_ipsec_udp_port_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_set_liveness {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 period;
    u32 max_retries;
} vl_api_ikev2_profile_set_liveness_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile_set_liveness_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ikev2_profile_set_liveness_reply_t;
#define VL_API_IKEV2_PLUGIN_GET_VERSION_CRC "ikev2_plugin_get_version_51077d14"
#define VL_API_IKEV2_PLUGIN_GET_VERSION_REPLY_CRC "ikev2_plugin_get_version_reply_9b32cf86"
#define VL_API_IKEV2_PROFILE_DUMP_CRC "ikev2_profile_dump_51077d14"
#define VL_API_IKEV2_PROFILE_DETAILS_CRC "ikev2_profile_details_daec69ef"
#define VL_API_IKEV2_SA_DUMP_CRC "ikev2_sa_dump_51077d14"
#define VL_API_IKEV2_SA_DETAILS_CRC "ikev2_sa_details_1fbac05c"
#define VL_API_IKEV2_CHILD_SA_DUMP_CRC "ikev2_child_sa_dump_01eab609"
#define VL_API_IKEV2_CHILD_SA_DETAILS_CRC "ikev2_child_sa_details_ff67741f"
#define VL_API_IKEV2_NONCE_GET_CRC "ikev2_nonce_get_7fe9ad51"
#define VL_API_IKEV2_NONCE_GET_REPLY_CRC "ikev2_nonce_get_reply_1b37a342"
#define VL_API_IKEV2_TRAFFIC_SELECTOR_DUMP_CRC "ikev2_traffic_selector_dump_a7385e33"
#define VL_API_IKEV2_TRAFFIC_SELECTOR_DETAILS_CRC "ikev2_traffic_selector_details_43a05faa"
#define VL_API_IKEV2_PROFILE_ADD_DEL_CRC "ikev2_profile_add_del_2c925b55"
#define VL_API_IKEV2_PROFILE_ADD_DEL_REPLY_CRC "ikev2_profile_add_del_reply_e8d4e804"
#define VL_API_IKEV2_PROFILE_SET_AUTH_CRC "ikev2_profile_set_auth_642c97cd"
#define VL_API_IKEV2_PROFILE_SET_AUTH_REPLY_CRC "ikev2_profile_set_auth_reply_e8d4e804"
#define VL_API_IKEV2_PROFILE_SET_ID_CRC "ikev2_profile_set_id_4d7e2418"
#define VL_API_IKEV2_PROFILE_SET_ID_REPLY_CRC "ikev2_profile_set_id_reply_e8d4e804"
#define VL_API_IKEV2_PROFILE_SET_TS_CRC "ikev2_profile_set_ts_4f178094"
#define VL_API_IKEV2_PROFILE_SET_TS_REPLY_CRC "ikev2_profile_set_ts_reply_e8d4e804"
#define VL_API_IKEV2_SET_LOCAL_KEY_CRC "ikev2_set_local_key_799b69ec"
#define VL_API_IKEV2_SET_LOCAL_KEY_REPLY_CRC "ikev2_set_local_key_reply_e8d4e804"
#define VL_API_IKEV2_SET_TUNNEL_INTERFACE_CRC "ikev2_set_tunnel_interface_ca67182c"
#define VL_API_IKEV2_SET_TUNNEL_INTERFACE_REPLY_CRC "ikev2_set_tunnel_interface_reply_e8d4e804"
#define VL_API_IKEV2_SET_RESPONDER_CRC "ikev2_set_responder_f14c91a3"
#define VL_API_IKEV2_SET_RESPONDER_REPLY_CRC "ikev2_set_responder_reply_e8d4e804"
#define VL_API_IKEV2_SET_IKE_TRANSFORMS_CRC "ikev2_set_ike_transforms_076d7378"
#define VL_API_IKEV2_SET_IKE_TRANSFORMS_REPLY_CRC "ikev2_set_ike_transforms_reply_e8d4e804"
#define VL_API_IKEV2_SET_ESP_TRANSFORMS_CRC "ikev2_set_esp_transforms_a63dc205"
#define VL_API_IKEV2_SET_ESP_TRANSFORMS_REPLY_CRC "ikev2_set_esp_transforms_reply_e8d4e804"
#define VL_API_IKEV2_SET_SA_LIFETIME_CRC "ikev2_set_sa_lifetime_7039feaa"
#define VL_API_IKEV2_SET_SA_LIFETIME_REPLY_CRC "ikev2_set_sa_lifetime_reply_e8d4e804"
#define VL_API_IKEV2_INITIATE_SA_INIT_CRC "ikev2_initiate_sa_init_ebf79a66"
#define VL_API_IKEV2_INITIATE_SA_INIT_REPLY_CRC "ikev2_initiate_sa_init_reply_e8d4e804"
#define VL_API_IKEV2_INITIATE_DEL_IKE_SA_CRC "ikev2_initiate_del_ike_sa_8d125bdd"
#define VL_API_IKEV2_INITIATE_DEL_IKE_SA_REPLY_CRC "ikev2_initiate_del_ike_sa_reply_e8d4e804"
#define VL_API_IKEV2_INITIATE_DEL_CHILD_SA_CRC "ikev2_initiate_del_child_sa_7f004d2e"
#define VL_API_IKEV2_INITIATE_DEL_CHILD_SA_REPLY_CRC "ikev2_initiate_del_child_sa_reply_e8d4e804"
#define VL_API_IKEV2_INITIATE_REKEY_CHILD_SA_CRC "ikev2_initiate_rekey_child_sa_7f004d2e"
#define VL_API_IKEV2_INITIATE_REKEY_CHILD_SA_REPLY_CRC "ikev2_initiate_rekey_child_sa_reply_e8d4e804"
#define VL_API_IKEV2_PROFILE_SET_UDP_ENCAP_CRC "ikev2_profile_set_udp_encap_ebf79a66"
#define VL_API_IKEV2_PROFILE_SET_UDP_ENCAP_REPLY_CRC "ikev2_profile_set_udp_encap_reply_e8d4e804"
#define VL_API_IKEV2_PROFILE_SET_IPSEC_UDP_PORT_CRC "ikev2_profile_set_ipsec_udp_port_615ce758"
#define VL_API_IKEV2_PROFILE_SET_IPSEC_UDP_PORT_REPLY_CRC "ikev2_profile_set_ipsec_udp_port_reply_e8d4e804"
#define VL_API_IKEV2_PROFILE_SET_LIVENESS_CRC "ikev2_profile_set_liveness_6bdf4d65"
#define VL_API_IKEV2_PROFILE_SET_LIVENESS_REPLY_CRC "ikev2_profile_set_liveness_reply_e8d4e804"

#endif
