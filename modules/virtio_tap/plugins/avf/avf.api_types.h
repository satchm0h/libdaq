#ifndef included_avf_api_types_h
#define included_avf_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_avf_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 pci_addr;
    i32 enable_elog;
    u16 rxq_num;
    u16 rxq_size;
    u16 txq_size;
} vl_api_avf_create_t;
typedef struct __attribute__ ((packed)) _vl_api_avf_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_avf_create_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_avf_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_avf_delete_t;
typedef struct __attribute__ ((packed)) _vl_api_avf_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_avf_delete_reply_t;
#define VL_API_AVF_CREATE_CRC "avf_create_daab8ae2"
#define VL_API_AVF_CREATE_REPLY_CRC "avf_create_reply_5383d31f"
#define VL_API_AVF_DELETE_CRC "avf_delete_f9e6675e"
#define VL_API_AVF_DELETE_REPLY_CRC "avf_delete_reply_e8d4e804"

#endif
