#ifndef included_teib_api_types_h
#define included_teib_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_teib_entry {
    vl_api_interface_index_t sw_if_index;
    vl_api_address_t peer;
    vl_api_address_t nh;
    u32 nh_table_id;
} vl_api_teib_entry_t;
typedef struct __attribute__ ((packed)) _vl_api_teib_entry_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_teib_entry_t entry;
} vl_api_teib_entry_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_teib_entry_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_teib_entry_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_teib_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_teib_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_teib_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_teib_entry_t entry;
} vl_api_teib_details_t;
#define VL_API_TEIB_ENTRY_ADD_DEL_CRC "teib_entry_add_del_5aa0a538"
#define VL_API_TEIB_ENTRY_ADD_DEL_REPLY_CRC "teib_entry_add_del_reply_e8d4e804"
#define VL_API_TEIB_DUMP_CRC "teib_dump_51077d14"
#define VL_API_TEIB_DETAILS_CRC "teib_details_e3b6a503"

#endif
