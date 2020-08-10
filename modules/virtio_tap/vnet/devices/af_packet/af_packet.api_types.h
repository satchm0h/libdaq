#ifndef included_af_packet_api_types_h
#define included_af_packet_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ethernet/ethernet_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_af_packet_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_mac_address_t hw_addr;
    bool use_random_hw_addr;
    u8 host_if_name[64];
} vl_api_af_packet_create_t;
typedef struct __attribute__ ((packed)) _vl_api_af_packet_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_af_packet_create_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_af_packet_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 host_if_name[64];
} vl_api_af_packet_delete_t;
typedef struct __attribute__ ((packed)) _vl_api_af_packet_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_af_packet_delete_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_af_packet_set_l4_cksum_offload {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    bool set;
} vl_api_af_packet_set_l4_cksum_offload_t;
typedef struct __attribute__ ((packed)) _vl_api_af_packet_set_l4_cksum_offload_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_af_packet_set_l4_cksum_offload_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_af_packet_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_af_packet_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_af_packet_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u8 host_if_name[64];
} vl_api_af_packet_details_t;
#define VL_API_AF_PACKET_CREATE_CRC "af_packet_create_a190415f"
#define VL_API_AF_PACKET_CREATE_REPLY_CRC "af_packet_create_reply_5383d31f"
#define VL_API_AF_PACKET_DELETE_CRC "af_packet_delete_863fa648"
#define VL_API_AF_PACKET_DELETE_REPLY_CRC "af_packet_delete_reply_e8d4e804"
#define VL_API_AF_PACKET_SET_L4_CKSUM_OFFLOAD_CRC "af_packet_set_l4_cksum_offload_319cd5c8"
#define VL_API_AF_PACKET_SET_L4_CKSUM_OFFLOAD_REPLY_CRC "af_packet_set_l4_cksum_offload_reply_e8d4e804"
#define VL_API_AF_PACKET_DUMP_CRC "af_packet_dump_51077d14"
#define VL_API_AF_PACKET_DETAILS_CRC "af_packet_details_58c7c042"

#endif
