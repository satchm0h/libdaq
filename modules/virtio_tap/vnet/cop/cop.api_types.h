#ifndef included_cop_api_types_h
#define included_cop_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_cop_interface_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool enable_disable;
} vl_api_cop_interface_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_cop_interface_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_cop_interface_enable_disable_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_cop_whitelist_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 fib_id;
    bool ip4;
    bool ip6;
    bool default_cop;
} vl_api_cop_whitelist_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_cop_whitelist_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_cop_whitelist_enable_disable_reply_t;
#define VL_API_COP_INTERFACE_ENABLE_DISABLE_CRC "cop_interface_enable_disable_5501adee"
#define VL_API_COP_INTERFACE_ENABLE_DISABLE_REPLY_CRC "cop_interface_enable_disable_reply_e8d4e804"
#define VL_API_COP_WHITELIST_ENABLE_DISABLE_CRC "cop_whitelist_enable_disable_debe13ea"
#define VL_API_COP_WHITELIST_ENABLE_DISABLE_REPLY_CRC "cop_whitelist_enable_disable_reply_e8d4e804"

#endif
