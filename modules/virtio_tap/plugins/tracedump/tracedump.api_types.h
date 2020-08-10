#ifndef included_tracedump_api_types_h
#define included_tracedump_api_types_h
typedef struct __attribute__ ((packed)) _vl_api_trace_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 clear_cache;
    u32 thread_id;
    u32 position;
    u32 max_records;
} vl_api_trace_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_trace_dump_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 last_thread_id;
    u32 last_position;
    u8 more_this_thread;
    u8 more_threads;
    u8 flush_only;
    u8 done;
} vl_api_trace_dump_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_trace_details {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 thread_id;
    u32 position;
    u8 more_this_thread;
    u8 more_threads;
    u8 done;
    vl_api_string_t trace_data;
} vl_api_trace_details_t;
#define VL_API_TRACE_DUMP_CRC "trace_dump_c7d6681f"
#define VL_API_TRACE_DUMP_REPLY_CRC "trace_dump_reply_e0e87f9d"
#define VL_API_TRACE_DETAILS_CRC "trace_details_3f211194"

#endif
