#ifndef included_gso_api_types_h
#define included_gso_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_feature_gso_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool enable_disable;
} vl_api_feature_gso_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_feature_gso_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_feature_gso_enable_disable_reply_t;
#define VL_API_FEATURE_GSO_ENABLE_DISABLE_CRC "feature_gso_enable_disable_5501adee"
#define VL_API_FEATURE_GSO_ENABLE_DISABLE_REPLY_CRC "feature_gso_enable_disable_reply_e8d4e804"

#endif
