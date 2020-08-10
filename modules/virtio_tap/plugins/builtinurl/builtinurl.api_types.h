#ifndef included_builtinurl_api_types_h
#define included_builtinurl_api_types_h
typedef struct __attribute__ ((packed)) _vl_api_builtinurl_enable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_builtinurl_enable_t;
typedef struct __attribute__ ((packed)) _vl_api_builtinurl_enable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_builtinurl_enable_reply_t;
#define VL_API_BUILTINURL_ENABLE_CRC "builtinurl_enable_51077d14"
#define VL_API_BUILTINURL_ENABLE_REPLY_CRC "builtinurl_enable_reply_e8d4e804"

#endif
