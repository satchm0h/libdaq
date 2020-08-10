#ifndef included_lldp_api_types_h
#define included_lldp_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_lldp_config {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 tx_hold;
    u32 tx_interval;
    vl_api_string_t system_name;
} vl_api_lldp_config_t;
typedef struct __attribute__ ((packed)) _vl_api_lldp_config_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_lldp_config_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_lldp {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_ip4_address_t mgmt_ip4;
    vl_api_ip6_address_t mgmt_ip6;
    u8 mgmt_oid[128];
    bool enable;
    vl_api_string_t port_desc;
} vl_api_sw_interface_set_lldp_t;
typedef struct __attribute__ ((packed)) _vl_api_sw_interface_set_lldp_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_sw_interface_set_lldp_reply_t;
#define VL_API_LLDP_CONFIG_CRC "lldp_config_c14445df"
#define VL_API_LLDP_CONFIG_REPLY_CRC "lldp_config_reply_e8d4e804"
#define VL_API_SW_INTERFACE_SET_LLDP_CRC "sw_interface_set_lldp_d646ae0f"
#define VL_API_SW_INTERFACE_SET_LLDP_REPLY_CRC "sw_interface_set_lldp_reply_e8d4e804"

#endif
