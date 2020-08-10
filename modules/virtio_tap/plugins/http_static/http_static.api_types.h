#ifndef included_http_static_api_types_h
#define included_http_static_api_types_h
typedef struct __attribute__ ((packed)) _vl_api_http_static_enable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 fifo_size;
    u32 cache_size_limit;
    u32 prealloc_fifos;
    u32 private_segment_size;
    u8 www_root[256];
    u8 uri[256];
} vl_api_http_static_enable_t;
typedef struct __attribute__ ((packed)) _vl_api_http_static_enable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_http_static_enable_reply_t;
#define VL_API_HTTP_STATIC_ENABLE_CRC "http_static_enable_075f8292"
#define VL_API_HTTP_STATIC_ENABLE_REPLY_CRC "http_static_enable_reply_e8d4e804"

#endif
