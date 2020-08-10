#ifndef included_rdma_api_types_h
#define included_rdma_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
typedef enum {
    RDMA_API_MODE_AUTO = 0,
    RDMA_API_MODE_IBV = 1,
    RDMA_API_MODE_DV = 2,
} vl_api_rdma_mode_t;
typedef struct __attribute__ ((packed)) _vl_api_rdma_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 host_if[64];
    u8 name[64];
    u16 rxq_num;
    u16 rxq_size;
    u16 txq_size;
    vl_api_rdma_mode_t mode;
} vl_api_rdma_create_t;
typedef struct __attribute__ ((packed)) _vl_api_rdma_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_rdma_create_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_rdma_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_rdma_delete_t;
typedef struct __attribute__ ((packed)) _vl_api_rdma_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_rdma_delete_reply_t;
#define VL_API_RDMA_CREATE_CRC "rdma_create_076fe418"
#define VL_API_RDMA_CREATE_REPLY_CRC "rdma_create_reply_5383d31f"
#define VL_API_RDMA_DELETE_CRC "rdma_delete_f9e6675e"
#define VL_API_RDMA_DELETE_REPLY_CRC "rdma_delete_reply_e8d4e804"

#endif
