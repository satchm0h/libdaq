#ifndef included_pipe_api_types_h
#define included_pipe_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_pipe_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_specified;
    u32 user_instance;
} vl_api_pipe_create_t;
typedef struct __attribute__ ((packed)) _vl_api_pipe_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
    vl_api_interface_index_t pipe_sw_if_index[2];
} vl_api_pipe_create_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_pipe_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_pipe_delete_t;
typedef struct __attribute__ ((packed)) _vl_api_pipe_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_pipe_delete_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_pipe_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_pipe_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_pipe_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_interface_index_t pipe_sw_if_index[2];
    u32 instance;
} vl_api_pipe_details_t;
#define VL_API_PIPE_CREATE_CRC "pipe_create_bb263bd3"
#define VL_API_PIPE_CREATE_REPLY_CRC "pipe_create_reply_d4c2c2b3"
#define VL_API_PIPE_DELETE_CRC "pipe_delete_f9e6675e"
#define VL_API_PIPE_DELETE_REPLY_CRC "pipe_delete_reply_e8d4e804"
#define VL_API_PIPE_DUMP_CRC "pipe_dump_51077d14"
#define VL_API_PIPE_DETAILS_CRC "pipe_details_43ac107a"

#endif
