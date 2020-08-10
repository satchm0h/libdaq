#ifndef included_l2e_api_types_h
#define included_l2e_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_l2_emulation {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool enable;
} vl_api_l2_emulation_t;
typedef struct __attribute__ ((packed)) _vl_api_l2_emulation_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_l2_emulation_reply_t;
#define VL_API_L2_EMULATION_CRC "l2_emulation_ae6cfcfb"
#define VL_API_L2_EMULATION_REPLY_CRC "l2_emulation_reply_e8d4e804"

#endif
