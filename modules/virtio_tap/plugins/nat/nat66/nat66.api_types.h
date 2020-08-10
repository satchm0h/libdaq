#ifndef included_nat66_api_types_h
#define included_nat66_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/interface_types.api_types.h>
#include <nat/nat_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_nat66_add_del_interface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
} vl_api_nat66_add_del_interface_t;
typedef struct __attribute__ ((packed)) _vl_api_nat66_add_del_interface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat66_add_del_interface_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat66_interface_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat66_interface_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat66_interface_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
} vl_api_nat66_interface_details_t;
typedef struct __attribute__ ((packed)) _vl_api_nat66_add_del_static_mapping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_ip6_address_t local_ip_address;
    vl_api_ip6_address_t external_ip_address;
    u32 vrf_id;
} vl_api_nat66_add_del_static_mapping_t;
typedef struct __attribute__ ((packed)) _vl_api_nat66_add_del_static_mapping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_nat66_add_del_static_mapping_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_nat66_static_mapping_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_nat66_static_mapping_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_nat66_static_mapping_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip6_address_t local_ip_address;
    vl_api_ip6_address_t external_ip_address;
    u32 vrf_id;
    u64 total_bytes;
    u64 total_pkts;
} vl_api_nat66_static_mapping_details_t;
#define VL_API_NAT66_ADD_DEL_INTERFACE_CRC "nat66_add_del_interface_f3699b83"
#define VL_API_NAT66_ADD_DEL_INTERFACE_REPLY_CRC "nat66_add_del_interface_reply_e8d4e804"
#define VL_API_NAT66_INTERFACE_DUMP_CRC "nat66_interface_dump_51077d14"
#define VL_API_NAT66_INTERFACE_DETAILS_CRC "nat66_interface_details_5d286289"
#define VL_API_NAT66_ADD_DEL_STATIC_MAPPING_CRC "nat66_add_del_static_mapping_fb64e50b"
#define VL_API_NAT66_ADD_DEL_STATIC_MAPPING_REPLY_CRC "nat66_add_del_static_mapping_reply_e8d4e804"
#define VL_API_NAT66_STATIC_MAPPING_DUMP_CRC "nat66_static_mapping_dump_51077d14"
#define VL_API_NAT66_STATIC_MAPPING_DETAILS_CRC "nat66_static_mapping_details_5c568448"

#endif
