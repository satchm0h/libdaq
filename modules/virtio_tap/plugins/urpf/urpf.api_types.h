#ifndef included_urpf_api_types_h
#define included_urpf_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/fib/fib_types.api_types.h>
#include <vnet/interface_types.api_types.h>
typedef enum __attribute__((packed)) {
    URPF_API_MODE_OFF = 1,
    URPF_API_MODE_LOOSE = 2,
    URPF_API_MODE_STRICT = 3,
} vl_api_urpf_mode_t;
STATIC_ASSERT(sizeof(vl_api_urpf_mode_t) == sizeof(u8), "size of API enum urpf_mode is wrong");
typedef struct __attribute__ ((packed)) _vl_api_urpf_update {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_input;
    vl_api_urpf_mode_t mode;
    vl_api_address_family_t af;
    vl_api_interface_index_t sw_if_index;
} vl_api_urpf_update_t;
typedef struct __attribute__ ((packed)) _vl_api_urpf_update_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_urpf_update_reply_t;
#define VL_API_URPF_UPDATE_CRC "urpf_update_2bf8a77c"
#define VL_API_URPF_UPDATE_REPLY_CRC "urpf_update_reply_e8d4e804"

#endif
