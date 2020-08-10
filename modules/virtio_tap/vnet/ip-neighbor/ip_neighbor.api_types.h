#ifndef included_ip_neighbor_api_types_h
#define included_ip_neighbor_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/ethernet/ethernet_types.api_types.h>
#include <vnet/interface_types.api_types.h>
typedef enum __attribute__((packed)) {
    IP_API_NEIGHBOR_FLAG_NONE = 0,
    IP_API_NEIGHBOR_FLAG_STATIC = 1,
    IP_API_NEIGHBOR_FLAG_NO_FIB_ENTRY = 2,
} vl_api_ip_neighbor_flags_t;
STATIC_ASSERT(sizeof(vl_api_ip_neighbor_flags_t) == sizeof(u8), "size of API enum ip_neighbor_flags is wrong");
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor {
    vl_api_interface_index_t sw_if_index;
    vl_api_ip_neighbor_flags_t flags;
    vl_api_mac_address_t mac_address;
    vl_api_address_t ip_address;
} vl_api_ip_neighbor_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_ip_neighbor_t neighbor;
} vl_api_ip_neighbor_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 stats_index;
} vl_api_ip_neighbor_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_address_family_t af;
} vl_api_ip_neighbor_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_details {
    u16 _vl_msg_id;
    u32 context;
    f64 age;
    vl_api_ip_neighbor_t neighbor;
} vl_api_ip_neighbor_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_config {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_family_t af;
    u32 max_number;
    u32 max_age;
    bool recycle;
} vl_api_ip_neighbor_config_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_config_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_neighbor_config_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_replace_begin {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ip_neighbor_replace_begin_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_replace_begin_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_neighbor_replace_begin_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_replace_end {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ip_neighbor_replace_end_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_replace_end_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_neighbor_replace_end_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_flush {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_family_t af;
    vl_api_interface_index_t sw_if_index;
} vl_api_ip_neighbor_flush_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_flush_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ip_neighbor_flush_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_want_ip_neighbor_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool enable;
    u32 pid;
    vl_api_address_t ip;
    vl_api_interface_index_t sw_if_index;
} vl_api_want_ip_neighbor_events_t;
typedef struct __attribute__ ((packed)) _vl_api_want_ip_neighbor_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_want_ip_neighbor_events_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ip_neighbor_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    vl_api_ip_neighbor_t neighbor;
} vl_api_ip_neighbor_event_t;
#define VL_API_IP_NEIGHBOR_ADD_DEL_CRC "ip_neighbor_add_del_105518b6"
#define VL_API_IP_NEIGHBOR_ADD_DEL_REPLY_CRC "ip_neighbor_add_del_reply_1992deab"
#define VL_API_IP_NEIGHBOR_DUMP_CRC "ip_neighbor_dump_cd831298"
#define VL_API_IP_NEIGHBOR_DETAILS_CRC "ip_neighbor_details_870e80b9"
#define VL_API_IP_NEIGHBOR_CONFIG_CRC "ip_neighbor_config_f4a5cf44"
#define VL_API_IP_NEIGHBOR_CONFIG_REPLY_CRC "ip_neighbor_config_reply_e8d4e804"
#define VL_API_IP_NEIGHBOR_REPLACE_BEGIN_CRC "ip_neighbor_replace_begin_51077d14"
#define VL_API_IP_NEIGHBOR_REPLACE_BEGIN_REPLY_CRC "ip_neighbor_replace_begin_reply_e8d4e804"
#define VL_API_IP_NEIGHBOR_REPLACE_END_CRC "ip_neighbor_replace_end_51077d14"
#define VL_API_IP_NEIGHBOR_REPLACE_END_REPLY_CRC "ip_neighbor_replace_end_reply_e8d4e804"
#define VL_API_IP_NEIGHBOR_FLUSH_CRC "ip_neighbor_flush_16aa35d2"
#define VL_API_IP_NEIGHBOR_FLUSH_REPLY_CRC "ip_neighbor_flush_reply_e8d4e804"
#define VL_API_WANT_IP_NEIGHBOR_EVENTS_CRC "want_ip_neighbor_events_1a312870"
#define VL_API_WANT_IP_NEIGHBOR_EVENTS_REPLY_CRC "want_ip_neighbor_events_reply_e8d4e804"
#define VL_API_IP_NEIGHBOR_EVENT_CRC "ip_neighbor_event_83933131"

#endif
