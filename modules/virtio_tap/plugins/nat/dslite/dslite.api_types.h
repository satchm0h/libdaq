#ifndef included_dslite_api_types_h
#define included_dslite_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_dslite_add_del_pool_addr_range {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t start_addr;
    vl_api_ip4_address_t end_addr;
    bool is_add;
} vl_api_dslite_add_del_pool_addr_range_t;
typedef struct __attribute__ ((packed)) _vl_api_dslite_add_del_pool_addr_range_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_dslite_add_del_pool_addr_range_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_dslite_address_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_dslite_address_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_dslite_address_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip4_address_t ip_address;
} vl_api_dslite_address_details_t;
typedef struct __attribute__ ((packed)) _vl_api_dslite_set_aftr_addr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip4_addr;
    vl_api_ip6_address_t ip6_addr;
} vl_api_dslite_set_aftr_addr_t;
typedef struct __attribute__ ((packed)) _vl_api_dslite_set_aftr_addr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_dslite_set_aftr_addr_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_dslite_get_aftr_addr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_dslite_get_aftr_addr_t;
typedef struct __attribute__ ((packed)) _vl_api_dslite_get_aftr_addr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ip4_address_t ip4_addr;
    vl_api_ip6_address_t ip6_addr;
} vl_api_dslite_get_aftr_addr_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_dslite_set_b4_addr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip4_addr;
    vl_api_ip6_address_t ip6_addr;
} vl_api_dslite_set_b4_addr_t;
typedef struct __attribute__ ((packed)) _vl_api_dslite_set_b4_addr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_dslite_set_b4_addr_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_dslite_get_b4_addr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_dslite_get_b4_addr_t;
typedef struct __attribute__ ((packed)) _vl_api_dslite_get_b4_addr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ip4_address_t ip4_addr;
    vl_api_ip6_address_t ip6_addr;
} vl_api_dslite_get_b4_addr_reply_t;
#define VL_API_DSLITE_ADD_DEL_POOL_ADDR_RANGE_CRC "dslite_add_del_pool_addr_range_c448457a"
#define VL_API_DSLITE_ADD_DEL_POOL_ADDR_RANGE_REPLY_CRC "dslite_add_del_pool_addr_range_reply_e8d4e804"
#define VL_API_DSLITE_ADDRESS_DUMP_CRC "dslite_address_dump_51077d14"
#define VL_API_DSLITE_ADDRESS_DETAILS_CRC "dslite_address_details_ec26d648"
#define VL_API_DSLITE_SET_AFTR_ADDR_CRC "dslite_set_aftr_addr_1e955f8d"
#define VL_API_DSLITE_SET_AFTR_ADDR_REPLY_CRC "dslite_set_aftr_addr_reply_e8d4e804"
#define VL_API_DSLITE_GET_AFTR_ADDR_CRC "dslite_get_aftr_addr_51077d14"
#define VL_API_DSLITE_GET_AFTR_ADDR_REPLY_CRC "dslite_get_aftr_addr_reply_38e30db1"
#define VL_API_DSLITE_SET_B4_ADDR_CRC "dslite_set_b4_addr_1e955f8d"
#define VL_API_DSLITE_SET_B4_ADDR_REPLY_CRC "dslite_set_b4_addr_reply_e8d4e804"
#define VL_API_DSLITE_GET_B4_ADDR_CRC "dslite_get_b4_addr_51077d14"
#define VL_API_DSLITE_GET_B4_ADDR_REPLY_CRC "dslite_get_b4_addr_reply_38e30db1"

#endif
