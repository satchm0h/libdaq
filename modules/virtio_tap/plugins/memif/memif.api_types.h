#ifndef included_memif_api_types_h
#define included_memif_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/ethernet/ethernet_types.api_types.h>
typedef enum {
    MEMIF_ROLE_API_MASTER = 0,
    MEMIF_ROLE_API_SLAVE = 1,
} vl_api_memif_role_t;
typedef enum {
    MEMIF_MODE_API_ETHERNET = 0,
    MEMIF_MODE_API_IP = 1,
    MEMIF_MODE_API_PUNT_INJECT = 2,
} vl_api_memif_mode_t;
typedef struct __attribute__ ((packed)) _vl_api_memif_socket_filename_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    u32 socket_id;
    u8 socket_filename[108];
} vl_api_memif_socket_filename_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_memif_socket_filename_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_memif_socket_filename_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_memif_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_memif_role_t role;
    vl_api_memif_mode_t mode;
    u8 rx_queues;
    u8 tx_queues;
    u32 id;
    u32 socket_id;
    u32 ring_size;
    u16 buffer_size;
    bool no_zero_copy;
    vl_api_mac_address_t hw_addr;
    u8 secret[24];
} vl_api_memif_create_t;
typedef struct __attribute__ ((packed)) _vl_api_memif_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_memif_create_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_memif_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_memif_delete_t;
typedef struct __attribute__ ((packed)) _vl_api_memif_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_memif_delete_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_memif_socket_filename_details {
    u16 _vl_msg_id;
    u32 context;
    u32 socket_id;
    u8 socket_filename[108];
} vl_api_memif_socket_filename_details_t;
typedef struct __attribute__ ((packed)) _vl_api_memif_socket_filename_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_memif_socket_filename_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_memif_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_mac_address_t hw_addr;
    u32 id;
    vl_api_memif_role_t role;
    vl_api_memif_mode_t mode;
    bool zero_copy;
    u32 socket_id;
    u32 ring_size;
    u16 buffer_size;
    vl_api_if_status_flags_t flags;
    u8 if_name[64];
} vl_api_memif_details_t;
typedef struct __attribute__ ((packed)) _vl_api_memif_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_memif_dump_t;
#define VL_API_MEMIF_SOCKET_FILENAME_ADD_DEL_CRC "memif_socket_filename_add_del_a2ce1a10"
#define VL_API_MEMIF_SOCKET_FILENAME_ADD_DEL_REPLY_CRC "memif_socket_filename_add_del_reply_e8d4e804"
#define VL_API_MEMIF_CREATE_CRC "memif_create_b1b25061"
#define VL_API_MEMIF_CREATE_REPLY_CRC "memif_create_reply_5383d31f"
#define VL_API_MEMIF_DELETE_CRC "memif_delete_f9e6675e"
#define VL_API_MEMIF_DELETE_REPLY_CRC "memif_delete_reply_e8d4e804"
#define VL_API_MEMIF_SOCKET_FILENAME_DETAILS_CRC "memif_socket_filename_details_7ff326f7"
#define VL_API_MEMIF_SOCKET_FILENAME_DUMP_CRC "memif_socket_filename_dump_51077d14"
#define VL_API_MEMIF_DETAILS_CRC "memif_details_d0382c4c"
#define VL_API_MEMIF_DUMP_CRC "memif_dump_51077d14"

#endif
