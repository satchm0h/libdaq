#ifndef included_nsim_api_types_h
#define included_nsim_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_nsim_cross_connect_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool enable_disable;
    vl_api_interface_index_t sw_if_index0;
    vl_api_interface_index_t sw_if_index1;
} vl_api_nsim_cross_connect_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_nsim_cross_connect_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nsim_cross_connect_enable_disable_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nsim_output_feature_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool enable_disable;
    vl_api_interface_index_t sw_if_index;
} vl_api_nsim_output_feature_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_nsim_output_feature_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nsim_output_feature_enable_disable_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nsim_configure {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 delay_in_usec;
    u32 average_packet_size;
    u64 bandwidth_in_bits_per_second;
    u32 packets_per_drop;
} vl_api_nsim_configure_t;
typedef struct __attribute__ ((packed)) _vl_api_nsim_configure_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nsim_configure_reply_t;
#define VL_API_NSIM_CROSS_CONNECT_ENABLE_DISABLE_CRC "nsim_cross_connect_enable_disable_16f70bdf"
#define VL_API_NSIM_CROSS_CONNECT_ENABLE_DISABLE_REPLY_CRC "nsim_cross_connect_enable_disable_reply_e8d4e804"
#define VL_API_NSIM_OUTPUT_FEATURE_ENABLE_DISABLE_CRC "nsim_output_feature_enable_disable_3865946c"
#define VL_API_NSIM_OUTPUT_FEATURE_ENABLE_DISABLE_REPLY_CRC "nsim_output_feature_enable_disable_reply_e8d4e804"
#define VL_API_NSIM_CONFIGURE_CRC "nsim_configure_16ed400f"
#define VL_API_NSIM_CONFIGURE_REPLY_CRC "nsim_configure_reply_e8d4e804"

#endif
