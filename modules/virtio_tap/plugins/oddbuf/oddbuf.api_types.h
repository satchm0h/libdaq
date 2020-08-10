#ifndef included_oddbuf_api_types_h
#define included_oddbuf_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_oddbuf_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool enable_disable;
    vl_api_interface_index_t sw_if_index;
} vl_api_oddbuf_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_oddbuf_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_oddbuf_enable_disable_reply_t;
#define VL_API_ODDBUF_ENABLE_DISABLE_CRC "oddbuf_enable_disable_3865946c"
#define VL_API_ODDBUF_ENABLE_DISABLE_REPLY_CRC "oddbuf_enable_disable_reply_e8d4e804"

#endif
