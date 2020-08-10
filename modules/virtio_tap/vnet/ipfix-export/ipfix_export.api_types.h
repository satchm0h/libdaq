#ifndef included_ipfix_export_api_types_h
#define included_ipfix_export_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_set_ipfix_exporter {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_t collector_address;
    u16 collector_port;
    vl_api_address_t src_address;
    u32 vrf_id;
    u32 path_mtu;
    u32 template_interval;
    bool udp_checksum;
} vl_api_set_ipfix_exporter_t;
typedef struct __attribute__ ((packed)) _vl_api_set_ipfix_exporter_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_set_ipfix_exporter_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipfix_exporter_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ipfix_exporter_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ipfix_exporter_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_address_t collector_address;
    u16 collector_port;
    vl_api_address_t src_address;
    u32 vrf_id;
    u32 path_mtu;
    u32 template_interval;
    bool udp_checksum;
} vl_api_ipfix_exporter_details_t;
typedef struct __attribute__ ((packed)) _vl_api_set_ipfix_classify_stream {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 domain_id;
    u16 src_port;
} vl_api_set_ipfix_classify_stream_t;
typedef struct __attribute__ ((packed)) _vl_api_set_ipfix_classify_stream_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_set_ipfix_classify_stream_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipfix_classify_stream_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ipfix_classify_stream_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ipfix_classify_stream_details {
    u16 _vl_msg_id;
    u32 context;
    u32 domain_id;
    u16 src_port;
} vl_api_ipfix_classify_stream_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ipfix_classify_table_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 table_id;
    vl_api_address_family_t ip_version;
    vl_api_ip_proto_t transport_protocol;
    bool is_add;
} vl_api_ipfix_classify_table_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ipfix_classify_table_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ipfix_classify_table_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipfix_classify_table_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ipfix_classify_table_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ipfix_classify_table_details {
    u16 _vl_msg_id;
    u32 context;
    u32 table_id;
    vl_api_address_family_t ip_version;
    vl_api_ip_proto_t transport_protocol;
} vl_api_ipfix_classify_table_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ipfix_flush {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ipfix_flush_t;
typedef struct __attribute__ ((packed)) _vl_api_ipfix_flush_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ipfix_flush_reply_t;
#define VL_API_SET_IPFIX_EXPORTER_CRC "set_ipfix_exporter_69284e07"
#define VL_API_SET_IPFIX_EXPORTER_REPLY_CRC "set_ipfix_exporter_reply_e8d4e804"
#define VL_API_IPFIX_EXPORTER_DUMP_CRC "ipfix_exporter_dump_51077d14"
#define VL_API_IPFIX_EXPORTER_DETAILS_CRC "ipfix_exporter_details_11e07413"
#define VL_API_SET_IPFIX_CLASSIFY_STREAM_CRC "set_ipfix_classify_stream_c9cbe053"
#define VL_API_SET_IPFIX_CLASSIFY_STREAM_REPLY_CRC "set_ipfix_classify_stream_reply_e8d4e804"
#define VL_API_IPFIX_CLASSIFY_STREAM_DUMP_CRC "ipfix_classify_stream_dump_51077d14"
#define VL_API_IPFIX_CLASSIFY_STREAM_DETAILS_CRC "ipfix_classify_stream_details_2903539d"
#define VL_API_IPFIX_CLASSIFY_TABLE_ADD_DEL_CRC "ipfix_classify_table_add_del_3e449bb9"
#define VL_API_IPFIX_CLASSIFY_TABLE_ADD_DEL_REPLY_CRC "ipfix_classify_table_add_del_reply_e8d4e804"
#define VL_API_IPFIX_CLASSIFY_TABLE_DUMP_CRC "ipfix_classify_table_dump_51077d14"
#define VL_API_IPFIX_CLASSIFY_TABLE_DETAILS_CRC "ipfix_classify_table_details_1af8c28c"
#define VL_API_IPFIX_FLUSH_CRC "ipfix_flush_51077d14"
#define VL_API_IPFIX_FLUSH_REPLY_CRC "ipfix_flush_reply_e8d4e804"

#endif
