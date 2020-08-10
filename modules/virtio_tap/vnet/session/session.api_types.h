#ifndef included_session_api_types_h
#define included_session_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
typedef enum __attribute__((packed)) {
    TRANSPORT_PROTO_API_TCP = 1,
    TRANSPORT_PROTO_API_UDP = 2,
    TRANSPORT_PROTO_API_NONE = 3,
    TRANSPORT_PROTO_API_TLS = 4,
    TRANSPORT_PROTO_API_QUIC = 5,
} vl_api_transport_proto_t;
STATIC_ASSERT(sizeof(vl_api_transport_proto_t) == sizeof(u8), "size of API enum transport_proto is wrong");
typedef enum {
    SESSION_RULE_SCOPE_API_GLOBAL = 0,
    SESSION_RULE_SCOPE_API_LOCAL = 1,
    SESSION_RULE_SCOPE_API_BOTH = 2,
} vl_api_session_rule_scope_t;
typedef struct __attribute__ ((packed)) _vl_api_app_attach {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 options[18];
    vl_api_string_t namespace_id;
} vl_api_app_attach_t;
typedef struct __attribute__ ((packed)) _vl_api_app_attach_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u64 app_mq;
    u64 vpp_ctrl_mq;
    u8 vpp_ctrl_mq_thread;
    u32 app_index;
    u8 n_fds;
    u8 fd_flags;
    u32 segment_size;
    u64 segment_handle;
    vl_api_string_t segment_name;
} vl_api_app_attach_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_application_detach {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_application_detach_t;
typedef struct __attribute__ ((packed)) _vl_api_application_detach_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_application_detach_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_app_add_cert_key_pair {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 cert_len;
    u16 certkey_len;
    u8 certkey[0];
} vl_api_app_add_cert_key_pair_t;
typedef struct __attribute__ ((packed)) _vl_api_app_add_cert_key_pair_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 index;
} vl_api_app_add_cert_key_pair_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_app_del_cert_key_pair {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 index;
} vl_api_app_del_cert_key_pair_t;
typedef struct __attribute__ ((packed)) _vl_api_app_del_cert_key_pair_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_app_del_cert_key_pair_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_application_tls_cert_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 app_index;
    u16 cert_len;
    u8 cert[0];
} vl_api_application_tls_cert_add_t;
typedef struct __attribute__ ((packed)) _vl_api_application_tls_cert_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_application_tls_cert_add_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_application_tls_key_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 app_index;
    u16 key_len;
    u8 key[0];
} vl_api_application_tls_key_add_t;
typedef struct __attribute__ ((packed)) _vl_api_application_tls_key_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_application_tls_key_add_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_app_worker_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 app_index;
    u32 wrk_index;
    bool is_add;
} vl_api_app_worker_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_app_worker_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 wrk_index;
    u64 app_event_queue_address;
    u8 n_fds;
    u8 fd_flags;
    u64 segment_handle;
    bool is_add;
    vl_api_string_t segment_name;
} vl_api_app_worker_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_session_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_enable;
} vl_api_session_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_session_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_session_enable_disable_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_app_namespace_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 secret;
    vl_api_interface_index_t sw_if_index;
    u32 ip4_fib_id;
    u32 ip6_fib_id;
    vl_api_string_t namespace_id;
} vl_api_app_namespace_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_app_namespace_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 appns_index;
} vl_api_app_namespace_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_session_rule_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_transport_proto_t transport_proto;
    vl_api_prefix_t lcl;
    vl_api_prefix_t rmt;
    u16 lcl_port;
    u16 rmt_port;
    u32 action_index;
    bool is_add;
    u32 appns_index;
    vl_api_session_rule_scope_t scope;
    u8 tag[64];
} vl_api_session_rule_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_session_rule_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_session_rule_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_session_rules_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_session_rules_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_session_rules_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_transport_proto_t transport_proto;
    vl_api_prefix_t lcl;
    vl_api_prefix_t rmt;
    u16 lcl_port;
    u16 rmt_port;
    u32 action_index;
    u32 appns_index;
    vl_api_session_rule_scope_t scope;
    u8 tag[64];
} vl_api_session_rules_details_t;
#define VL_API_APP_ATTACH_CRC "app_attach_5f4a260d"
#define VL_API_APP_ATTACH_REPLY_CRC "app_attach_reply_5c89c3b0"
#define VL_API_APPLICATION_DETACH_CRC "application_detach_51077d14"
#define VL_API_APPLICATION_DETACH_REPLY_CRC "application_detach_reply_e8d4e804"
#define VL_API_APP_ADD_CERT_KEY_PAIR_CRC "app_add_cert_key_pair_02eb8016"
#define VL_API_APP_ADD_CERT_KEY_PAIR_REPLY_CRC "app_add_cert_key_pair_reply_b42958d0"
#define VL_API_APP_DEL_CERT_KEY_PAIR_CRC "app_del_cert_key_pair_8ac76db6"
#define VL_API_APP_DEL_CERT_KEY_PAIR_REPLY_CRC "app_del_cert_key_pair_reply_e8d4e804"
#define VL_API_APPLICATION_TLS_CERT_ADD_CRC "application_tls_cert_add_3f5cfe45"
#define VL_API_APPLICATION_TLS_CERT_ADD_REPLY_CRC "application_tls_cert_add_reply_e8d4e804"
#define VL_API_APPLICATION_TLS_KEY_ADD_CRC "application_tls_key_add_5eaf70cd"
#define VL_API_APPLICATION_TLS_KEY_ADD_REPLY_CRC "application_tls_key_add_reply_e8d4e804"
#define VL_API_APP_WORKER_ADD_DEL_CRC "app_worker_add_del_753253dc"
#define VL_API_APP_WORKER_ADD_DEL_REPLY_CRC "app_worker_add_del_reply_5735ffe7"
#define VL_API_SESSION_ENABLE_DISABLE_CRC "session_enable_disable_c264d7bf"
#define VL_API_SESSION_ENABLE_DISABLE_REPLY_CRC "session_enable_disable_reply_e8d4e804"
#define VL_API_APP_NAMESPACE_ADD_DEL_CRC "app_namespace_add_del_6306aecb"
#define VL_API_APP_NAMESPACE_ADD_DEL_REPLY_CRC "app_namespace_add_del_reply_85137120"
#define VL_API_SESSION_RULE_ADD_DEL_CRC "session_rule_add_del_e31f9443"
#define VL_API_SESSION_RULE_ADD_DEL_REPLY_CRC "session_rule_add_del_reply_e8d4e804"
#define VL_API_SESSION_RULES_DUMP_CRC "session_rules_dump_51077d14"
#define VL_API_SESSION_RULES_DETAILS_CRC "session_rules_details_304b91f0"

#endif
