#ifndef included_flowprobe_api_types_h
#define included_flowprobe_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
typedef enum __attribute__((packed)) {
    FLOWPROBE_WHICH_FLAG_IP4 = 1,
    FLOWPROBE_WHICH_FLAG_L2 = 2,
    FLOWPROBE_WHICH_FLAG_IP6 = 4,
} vl_api_flowprobe_which_flags_t;
STATIC_ASSERT(sizeof(vl_api_flowprobe_which_flags_t) == sizeof(u8), "size of API enum flowprobe_which_flags is wrong");
typedef enum __attribute__((packed)) {
    FLOWPROBE_RECORD_FLAG_L2 = 1,
    FLOWPROBE_RECORD_FLAG_L3 = 2,
    FLOWPROBE_RECORD_FLAG_L4 = 4,
} vl_api_flowprobe_record_flags_t;
STATIC_ASSERT(sizeof(vl_api_flowprobe_record_flags_t) == sizeof(u8), "size of API enum flowprobe_record_flags is wrong");
typedef struct __attribute__ ((packed)) _vl_api_flowprobe_tx_interface_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_flowprobe_which_flags_t which;
    vl_api_interface_index_t sw_if_index;
} vl_api_flowprobe_tx_interface_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_flowprobe_tx_interface_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_flowprobe_tx_interface_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_flowprobe_params {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_flowprobe_record_flags_t record_flags;
    u32 active_timer;
    u32 passive_timer;
} vl_api_flowprobe_params_t;
typedef struct __attribute__ ((packed)) _vl_api_flowprobe_params_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_flowprobe_params_reply_t;
#define VL_API_FLOWPROBE_TX_INTERFACE_ADD_DEL_CRC "flowprobe_tx_interface_add_del_b782c976"
#define VL_API_FLOWPROBE_TX_INTERFACE_ADD_DEL_REPLY_CRC "flowprobe_tx_interface_add_del_reply_e8d4e804"
#define VL_API_FLOWPROBE_PARAMS_CRC "flowprobe_params_baa46c09"
#define VL_API_FLOWPROBE_PARAMS_REPLY_CRC "flowprobe_params_reply_e8d4e804"

#endif
