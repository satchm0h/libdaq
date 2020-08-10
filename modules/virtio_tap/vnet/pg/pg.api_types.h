#ifndef included_pg_api_types_h
#define included_pg_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_pg_create_interface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t interface_id;
    bool gso_enabled;
    u32 gso_size;
} vl_api_pg_create_interface_t;
typedef struct __attribute__ ((packed)) _vl_api_pg_create_interface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_pg_create_interface_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_pg_capture {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t interface_id;
    bool is_enabled;
    u32 count;
    vl_api_string_t pcap_file_name;
} vl_api_pg_capture_t;
typedef struct __attribute__ ((packed)) _vl_api_pg_capture_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_pg_capture_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_pg_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_enabled;
    vl_api_string_t stream_name;
} vl_api_pg_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_pg_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_pg_enable_disable_reply_t;
#define VL_API_PG_CREATE_INTERFACE_CRC "pg_create_interface_b7c893d7"
#define VL_API_PG_CREATE_INTERFACE_REPLY_CRC "pg_create_interface_reply_5383d31f"
#define VL_API_PG_CAPTURE_CRC "pg_capture_3712fb6c"
#define VL_API_PG_CAPTURE_REPLY_CRC "pg_capture_reply_e8d4e804"
#define VL_API_PG_ENABLE_DISABLE_CRC "pg_enable_disable_01f94f3a"
#define VL_API_PG_ENABLE_DISABLE_REPLY_CRC "pg_enable_disable_reply_e8d4e804"

#endif
