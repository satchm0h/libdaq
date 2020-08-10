#ifndef included_punt_api_types_h
#define included_punt_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
typedef enum {
    PUNT_API_TYPE_L4 = 1,
    PUNT_API_TYPE_IP_PROTO = 2,
    PUNT_API_TYPE_EXCEPTION = 3,
} vl_api_punt_type_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_l4 {
    vl_api_address_family_t af;
    vl_api_ip_proto_t protocol;
    u16 port;
} vl_api_punt_l4_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_ip_proto {
    vl_api_address_family_t af;
    vl_api_ip_proto_t protocol;
} vl_api_punt_ip_proto_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_exception {
    u32 id;
} vl_api_punt_exception_t;
typedef union __attribute__ ((packed)) _vl_api_punt_union {
    vl_api_punt_exception_t exception;
    vl_api_punt_l4_t l4;
    vl_api_punt_ip_proto_t ip_proto;
} vl_api_punt_union_t;
typedef struct __attribute__ ((packed)) _vl_api_punt {
    vl_api_punt_type_t type;
    vl_api_punt_union_t punt;
} vl_api_punt_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_reason {
    u32 id;
    vl_api_string_t name;
} vl_api_punt_reason_t;
typedef struct __attribute__ ((packed)) _vl_api_set_punt {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_punt_t punt;
} vl_api_set_punt_t;
typedef struct __attribute__ ((packed)) _vl_api_set_punt_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_set_punt_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_socket_register {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 header_version;
    vl_api_punt_t punt;
    u8 pathname[108];
} vl_api_punt_socket_register_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_socket_register_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 pathname[108];
} vl_api_punt_socket_register_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_socket_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_punt_type_t type;
} vl_api_punt_socket_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_socket_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_punt_t punt;
    u8 pathname[108];
} vl_api_punt_socket_details_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_socket_deregister {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_punt_t punt;
} vl_api_punt_socket_deregister_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_socket_deregister_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_punt_socket_deregister_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_reason_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_punt_reason_t reason;
} vl_api_punt_reason_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_punt_reason_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_punt_reason_t reason;
} vl_api_punt_reason_details_t;
#define VL_API_SET_PUNT_CRC "set_punt_83799618"
#define VL_API_SET_PUNT_REPLY_CRC "set_punt_reply_e8d4e804"
#define VL_API_PUNT_SOCKET_REGISTER_CRC "punt_socket_register_c8cd10fa"
#define VL_API_PUNT_SOCKET_REGISTER_REPLY_CRC "punt_socket_register_reply_bd30ae90"
#define VL_API_PUNT_SOCKET_DUMP_CRC "punt_socket_dump_52974935"
#define VL_API_PUNT_SOCKET_DETAILS_CRC "punt_socket_details_1de0ce75"
#define VL_API_PUNT_SOCKET_DEREGISTER_CRC "punt_socket_deregister_98a444f4"
#define VL_API_PUNT_SOCKET_DEREGISTER_REPLY_CRC "punt_socket_deregister_reply_e8d4e804"
#define VL_API_PUNT_REASON_DUMP_CRC "punt_reason_dump_5c0dd4fe"
#define VL_API_PUNT_REASON_DETAILS_CRC "punt_reason_details_2c9d4a40"

#endif
