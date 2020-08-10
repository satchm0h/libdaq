#ifndef included_tcp_api_types_h
#define included_tcp_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_tcp_configure_src_addresses {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 vrf_id;
    vl_api_address_t first_address;
    vl_api_address_t last_address;
} vl_api_tcp_configure_src_addresses_t;
typedef struct __attribute__ ((packed)) _vl_api_tcp_configure_src_addresses_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_tcp_configure_src_addresses_reply_t;
#define VL_API_TCP_CONFIGURE_SRC_ADDRESSES_CRC "tcp_configure_src_addresses_4b02b946"
#define VL_API_TCP_CONFIGURE_SRC_ADDRESSES_REPLY_CRC "tcp_configure_src_addresses_reply_e8d4e804"

#endif
