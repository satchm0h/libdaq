#ifndef included_vpe_api_types_h
#define included_vpe_api_types_h
/* Imported API files */
#include <vpp/api/vpe_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_thread_data {
    u32 id;
    u8 name[64];
    u8 type[64];
    u32 pid;
    u32 cpu_id;
    u32 core;
    u32 cpu_socket;
} vl_api_thread_data_t;
typedef struct __attribute__ ((packed)) _vl_api_control_ping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_control_ping_t;
typedef struct __attribute__ ((packed)) _vl_api_control_ping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 client_index;
    u32 vpe_pid;
} vl_api_control_ping_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_cli {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 cmd_in_shmem;
} vl_api_cli_t;
typedef struct __attribute__ ((packed)) _vl_api_cli_inband {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_string_t cmd;
} vl_api_cli_inband_t;
typedef struct __attribute__ ((packed)) _vl_api_cli_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u64 reply_in_shmem;
} vl_api_cli_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_cli_inband_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_string_t reply;
} vl_api_cli_inband_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_get_node_index {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 node_name[64];
} vl_api_get_node_index_t;
typedef struct __attribute__ ((packed)) _vl_api_get_node_index_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 node_index;
} vl_api_get_node_index_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_add_node_next {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 node_name[64];
    u8 next_name[64];
} vl_api_add_node_next_t;
typedef struct __attribute__ ((packed)) _vl_api_add_node_next_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 next_index;
} vl_api_add_node_next_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_show_version {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_show_version_t;
typedef struct __attribute__ ((packed)) _vl_api_show_version_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 program[32];
    u8 version[32];
    u8 build_date[32];
    u8 build_directory[256];
} vl_api_show_version_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_show_threads {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_show_threads_t;
typedef struct __attribute__ ((packed)) _vl_api_show_threads_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 count;
    vl_api_thread_data_t thread_data[0];
} vl_api_show_threads_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_get_node_graph {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_get_node_graph_t;
typedef struct __attribute__ ((packed)) _vl_api_get_node_graph_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u64 reply_in_shmem;
} vl_api_get_node_graph_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_get_next_index {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 node_name[64];
    u8 next_name[64];
} vl_api_get_next_index_t;
typedef struct __attribute__ ((packed)) _vl_api_get_next_index_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 next_index;
} vl_api_get_next_index_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_log_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_timestamp_t start_timestamp;
} vl_api_log_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_log_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_timestamp_t timestamp;
    vl_api_log_level_t level;
    u8 msg_class[32];
    u8 message[256];
} vl_api_log_details_t;
typedef struct __attribute__ ((packed)) _vl_api_show_vpe_system_time {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_show_vpe_system_time_t;
typedef struct __attribute__ ((packed)) _vl_api_show_vpe_system_time_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_timestamp_t vpe_system_time;
} vl_api_show_vpe_system_time_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_get_f64_endian_value {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    f64 f64_one;
} vl_api_get_f64_endian_value_t;
typedef struct __attribute__ ((packed)) _vl_api_get_f64_endian_value_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 retval;
    f64 f64_one_result;
} vl_api_get_f64_endian_value_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_get_f64_increment_by_one {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    f64 f64_value;
} vl_api_get_f64_increment_by_one_t;
typedef struct __attribute__ ((packed)) _vl_api_get_f64_increment_by_one_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 retval;
    f64 f64_value;
} vl_api_get_f64_increment_by_one_reply_t;
#define VL_API_CONTROL_PING_CRC "control_ping_51077d14"
#define VL_API_CONTROL_PING_REPLY_CRC "control_ping_reply_f6b0b8ca"
#define VL_API_CLI_CRC "cli_23bfbfff"
#define VL_API_CLI_INBAND_CRC "cli_inband_f8377302"
#define VL_API_CLI_REPLY_CRC "cli_reply_06d68297"
#define VL_API_CLI_INBAND_REPLY_CRC "cli_inband_reply_05879051"
#define VL_API_GET_NODE_INDEX_CRC "get_node_index_f1984c64"
#define VL_API_GET_NODE_INDEX_REPLY_CRC "get_node_index_reply_a8600b89"
#define VL_API_ADD_NODE_NEXT_CRC "add_node_next_2457116d"
#define VL_API_ADD_NODE_NEXT_REPLY_CRC "add_node_next_reply_2ed75f32"
#define VL_API_SHOW_VERSION_CRC "show_version_51077d14"
#define VL_API_SHOW_VERSION_REPLY_CRC "show_version_reply_c919bde1"
#define VL_API_SHOW_THREADS_CRC "show_threads_51077d14"
#define VL_API_SHOW_THREADS_REPLY_CRC "show_threads_reply_efd78e83"
#define VL_API_GET_NODE_GRAPH_CRC "get_node_graph_51077d14"
#define VL_API_GET_NODE_GRAPH_REPLY_CRC "get_node_graph_reply_06d68297"
#define VL_API_GET_NEXT_INDEX_CRC "get_next_index_2457116d"
#define VL_API_GET_NEXT_INDEX_REPLY_CRC "get_next_index_reply_2ed75f32"
#define VL_API_LOG_DUMP_CRC "log_dump_6ab31753"
#define VL_API_LOG_DETAILS_CRC "log_details_255827a1"
#define VL_API_SHOW_VPE_SYSTEM_TIME_CRC "show_vpe_system_time_51077d14"
#define VL_API_SHOW_VPE_SYSTEM_TIME_REPLY_CRC "show_vpe_system_time_reply_7ffd8193"
#define VL_API_GET_F64_ENDIAN_VALUE_CRC "get_f64_endian_value_809fcd44"
#define VL_API_GET_F64_ENDIAN_VALUE_REPLY_CRC "get_f64_endian_value_reply_7e02e404"
#define VL_API_GET_F64_INCREMENT_BY_ONE_CRC "get_f64_increment_by_one_b64f027e"
#define VL_API_GET_F64_INCREMENT_BY_ONE_REPLY_CRC "get_f64_increment_by_one_reply_d25dbaa3"

#endif
