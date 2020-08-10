#ifndef included_udp_api_types_h
#define included_udp_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_udp_encap {
    u32 table_id;
    u16 src_port;
    u16 dst_port;
    vl_api_address_t src_ip;
    vl_api_address_t dst_ip;
    u32 id;
} vl_api_udp_encap_t;
typedef struct __attribute__ ((packed)) _vl_api_udp_encap_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_udp_encap_t udp_encap;
} vl_api_udp_encap_add_t;
typedef struct __attribute__ ((packed)) _vl_api_udp_encap_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 id;
} vl_api_udp_encap_add_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_udp_encap_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 id;
} vl_api_udp_encap_del_t;
typedef struct __attribute__ ((packed)) _vl_api_udp_encap_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_udp_encap_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_udp_encap_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_udp_encap_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_udp_encap_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_udp_encap_t udp_encap;
} vl_api_udp_encap_details_t;
#define VL_API_UDP_ENCAP_ADD_CRC "udp_encap_add_61d5fc48"
#define VL_API_UDP_ENCAP_ADD_REPLY_CRC "udp_encap_add_reply_e2fc8294"
#define VL_API_UDP_ENCAP_DEL_CRC "udp_encap_del_3a91bde5"
#define VL_API_UDP_ENCAP_DEL_REPLY_CRC "udp_encap_del_reply_e8d4e804"
#define VL_API_UDP_ENCAP_DUMP_CRC "udp_encap_dump_51077d14"
#define VL_API_UDP_ENCAP_DETAILS_CRC "udp_encap_details_87c82821"

#endif
