#ifndef included_gre_api_types_h
#define included_gre_api_types_h
/* Imported API files */
#include <vnet/interface_types.api_types.h>
#include <vnet/tunnel/tunnel_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
typedef enum __attribute__((packed)) {
    GRE_API_TUNNEL_TYPE_L3 = 0,
    GRE_API_TUNNEL_TYPE_TEB = 1,
    GRE_API_TUNNEL_TYPE_ERSPAN = 2,
} vl_api_gre_tunnel_type_t;
STATIC_ASSERT(sizeof(vl_api_gre_tunnel_type_t) == sizeof(u8), "size of API enum gre_tunnel_type is wrong");
typedef struct __attribute__ ((packed)) _vl_api_gre_tunnel {
    vl_api_gre_tunnel_type_t type;
    vl_api_tunnel_mode_t mode;
    vl_api_tunnel_encap_decap_flags_t flags;
    u16 session_id;
    u32 instance;
    u32 outer_table_id;
    vl_api_interface_index_t sw_if_index;
    vl_api_address_t src;
    vl_api_address_t dst;
} vl_api_gre_tunnel_t;
typedef struct __attribute__ ((packed)) _vl_api_gre_tunnel_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_gre_tunnel_t tunnel;
} vl_api_gre_tunnel_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_gre_tunnel_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_gre_tunnel_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_gre_tunnel_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_gre_tunnel_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_gre_tunnel_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gre_tunnel_t tunnel;
} vl_api_gre_tunnel_details_t;
#define VL_API_GRE_TUNNEL_ADD_DEL_CRC "gre_tunnel_add_del_6efc9c22"
#define VL_API_GRE_TUNNEL_ADD_DEL_REPLY_CRC "gre_tunnel_add_del_reply_5383d31f"
#define VL_API_GRE_TUNNEL_DUMP_CRC "gre_tunnel_dump_f9e6675e"
#define VL_API_GRE_TUNNEL_DETAILS_CRC "gre_tunnel_details_003bfbf1"

#endif
