#ifndef included_stn_api_types_h
#define included_stn_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_stn_add_del_rule {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_t ip_address;
    vl_api_interface_index_t sw_if_index;
    bool is_add;
} vl_api_stn_add_del_rule_t;
typedef struct __attribute__ ((packed)) _vl_api_stn_add_del_rule_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_stn_add_del_rule_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_stn_rules_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_stn_rules_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_stn_rules_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_address_t ip_address;
    vl_api_interface_index_t sw_if_index;
} vl_api_stn_rules_details_t;
#define VL_API_STN_ADD_DEL_RULE_CRC "stn_add_del_rule_53f751e6"
#define VL_API_STN_ADD_DEL_RULE_REPLY_CRC "stn_add_del_rule_reply_e8d4e804"
#define VL_API_STN_RULES_DUMP_CRC "stn_rules_dump_51077d14"
#define VL_API_STN_RULES_DETAILS_CRC "stn_rules_details_b0f6606c"

#endif
