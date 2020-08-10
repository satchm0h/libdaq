#ifndef included_ipsec_api_types_h
#define included_ipsec_api_types_h
/* Imported API files */
#include <vnet/ipsec/ipsec_types.api_types.h>
#include <vnet/interface_types.api_types.h>
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/interface_types.api_types.h>
#include <vnet/tunnel/tunnel_types.api_types.h>
typedef enum {
    IPSEC_API_SPD_ACTION_BYPASS = 0,
    IPSEC_API_SPD_ACTION_DISCARD = 1,
    IPSEC_API_SPD_ACTION_RESOLVE = 2,
    IPSEC_API_SPD_ACTION_PROTECT = 3,
} vl_api_ipsec_spd_action_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_spd_entry {
    u32 spd_id;
    i32 priority;
    bool is_outbound;
    u32 sa_id;
    vl_api_ipsec_spd_action_t policy;
    u8 protocol;
    vl_api_address_t remote_address_start;
    vl_api_address_t remote_address_stop;
    vl_api_address_t local_address_start;
    vl_api_address_t local_address_stop;
    u16 remote_port_start;
    u16 remote_port_stop;
    u16 local_port_start;
    u16 local_port_stop;
} vl_api_ipsec_spd_entry_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_tunnel_protect {
    vl_api_interface_index_t sw_if_index;
    vl_api_address_t nh;
    u32 sa_out;
    u8 n_sa_in;
    u32 sa_in[0];
} vl_api_ipsec_tunnel_protect_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_itf {
    u32 user_instance;
    vl_api_tunnel_mode_t mode;
    vl_api_interface_index_t sw_if_index;
} vl_api_ipsec_itf_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_spd_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    u32 spd_id;
} vl_api_ipsec_spd_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_spd_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ipsec_spd_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_interface_add_del_spd {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_interface_index_t sw_if_index;
    u32 spd_id;
} vl_api_ipsec_interface_add_del_spd_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_interface_add_del_spd_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ipsec_interface_add_del_spd_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_spd_entry_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_ipsec_spd_entry_t entry;
} vl_api_ipsec_spd_entry_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_spd_entry_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 stat_index;
} vl_api_ipsec_spd_entry_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_spds_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ipsec_spds_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_spds_details {
    u16 _vl_msg_id;
    u32 context;
    u32 spd_id;
    u32 npolicies;
} vl_api_ipsec_spds_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_spd_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 spd_id;
    u32 sa_id;
} vl_api_ipsec_spd_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_spd_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ipsec_spd_entry_t entry;
} vl_api_ipsec_spd_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_sad_entry_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_ipsec_sad_entry_t entry;
} vl_api_ipsec_sad_entry_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_sad_entry_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 stat_index;
} vl_api_ipsec_sad_entry_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_tunnel_protect_update {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ipsec_tunnel_protect_t tunnel;
} vl_api_ipsec_tunnel_protect_update_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_tunnel_protect_update_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ipsec_tunnel_protect_update_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_tunnel_protect_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_address_t nh;
} vl_api_ipsec_tunnel_protect_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_tunnel_protect_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ipsec_tunnel_protect_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_tunnel_protect_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_ipsec_tunnel_protect_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_tunnel_protect_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ipsec_tunnel_protect_t tun;
} vl_api_ipsec_tunnel_protect_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_spd_interface_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 spd_index;
    u8 spd_index_valid;
} vl_api_ipsec_spd_interface_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_spd_interface_details {
    u16 _vl_msg_id;
    u32 context;
    u32 spd_index;
    vl_api_interface_index_t sw_if_index;
} vl_api_ipsec_spd_interface_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_tunnel_if_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    bool esn;
    bool anti_replay;
    vl_api_address_t local_ip;
    vl_api_address_t remote_ip;
    u32 local_spi;
    u32 remote_spi;
    u8 crypto_alg;
    u8 local_crypto_key_len;
    u8 local_crypto_key[128];
    u8 remote_crypto_key_len;
    u8 remote_crypto_key[128];
    u8 integ_alg;
    u8 local_integ_key_len;
    u8 local_integ_key[128];
    u8 remote_integ_key_len;
    u8 remote_integ_key[128];
    bool renumber;
    u32 show_instance;
    bool udp_encap;
    u32 tx_table_id;
    u32 salt;
} vl_api_ipsec_tunnel_if_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_tunnel_if_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_ipsec_tunnel_if_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_itf_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ipsec_itf_t itf;
} vl_api_ipsec_itf_create_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_itf_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
} vl_api_ipsec_itf_create_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_itf_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_ipsec_itf_delete_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_itf_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ipsec_itf_delete_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_itf_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
} vl_api_ipsec_itf_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_itf_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ipsec_itf_t itf;
} vl_api_ipsec_itf_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_sa_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sa_id;
} vl_api_ipsec_sa_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_sa_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ipsec_sad_entry_t entry;
    vl_api_interface_index_t sw_if_index;
    u32 salt;
    u64 seq_outbound;
    u64 last_seq_inbound;
    u64 replay_window;
    u32 stat_index;
} vl_api_ipsec_sa_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_tunnel_if_set_sa {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u32 sa_id;
    u8 is_outbound;
} vl_api_ipsec_tunnel_if_set_sa_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_tunnel_if_set_sa_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ipsec_tunnel_if_set_sa_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_backend_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
} vl_api_ipsec_backend_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_backend_details {
    u16 _vl_msg_id;
    u32 context;
    u8 name[128];
    vl_api_ipsec_proto_t protocol;
    u8 index;
    bool active;
} vl_api_ipsec_backend_details_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_select_backend {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ipsec_proto_t protocol;
    u8 index;
} vl_api_ipsec_select_backend_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_select_backend_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_ipsec_select_backend_reply_t;
#define VL_API_IPSEC_SPD_ADD_DEL_CRC "ipsec_spd_add_del_20e89a95"
#define VL_API_IPSEC_SPD_ADD_DEL_REPLY_CRC "ipsec_spd_add_del_reply_e8d4e804"
#define VL_API_IPSEC_INTERFACE_ADD_DEL_SPD_CRC "ipsec_interface_add_del_spd_80f80cbb"
#define VL_API_IPSEC_INTERFACE_ADD_DEL_SPD_REPLY_CRC "ipsec_interface_add_del_spd_reply_e8d4e804"
#define VL_API_IPSEC_SPD_ENTRY_ADD_DEL_CRC "ipsec_spd_entry_add_del_9f384b8d"
#define VL_API_IPSEC_SPD_ENTRY_ADD_DEL_REPLY_CRC "ipsec_spd_entry_add_del_reply_9ffac24b"
#define VL_API_IPSEC_SPDS_DUMP_CRC "ipsec_spds_dump_51077d14"
#define VL_API_IPSEC_SPDS_DETAILS_CRC "ipsec_spds_details_a04bb254"
#define VL_API_IPSEC_SPD_DUMP_CRC "ipsec_spd_dump_afefbf7d"
#define VL_API_IPSEC_SPD_DETAILS_CRC "ipsec_spd_details_f2222790"
#define VL_API_IPSEC_SAD_ENTRY_ADD_DEL_CRC "ipsec_sad_entry_add_del_b8def364"
#define VL_API_IPSEC_SAD_ENTRY_ADD_DEL_REPLY_CRC "ipsec_sad_entry_add_del_reply_9ffac24b"
#define VL_API_IPSEC_TUNNEL_PROTECT_UPDATE_CRC "ipsec_tunnel_protect_update_143f155d"
#define VL_API_IPSEC_TUNNEL_PROTECT_UPDATE_REPLY_CRC "ipsec_tunnel_protect_update_reply_e8d4e804"
#define VL_API_IPSEC_TUNNEL_PROTECT_DEL_CRC "ipsec_tunnel_protect_del_ddd2ba36"
#define VL_API_IPSEC_TUNNEL_PROTECT_DEL_REPLY_CRC "ipsec_tunnel_protect_del_reply_e8d4e804"
#define VL_API_IPSEC_TUNNEL_PROTECT_DUMP_CRC "ipsec_tunnel_protect_dump_f9e6675e"
#define VL_API_IPSEC_TUNNEL_PROTECT_DETAILS_CRC "ipsec_tunnel_protect_details_ac6c823b"
#define VL_API_IPSEC_SPD_INTERFACE_DUMP_CRC "ipsec_spd_interface_dump_8971de19"
#define VL_API_IPSEC_SPD_INTERFACE_DETAILS_CRC "ipsec_spd_interface_details_7a0bcf3e"
#define VL_API_IPSEC_TUNNEL_IF_ADD_DEL_CRC "ipsec_tunnel_if_add_del_2b135e68"
#define VL_API_IPSEC_TUNNEL_IF_ADD_DEL_REPLY_CRC "ipsec_tunnel_if_add_del_reply_5383d31f"
#define VL_API_IPSEC_ITF_CREATE_CRC "ipsec_itf_create_6f50b3bc"
#define VL_API_IPSEC_ITF_CREATE_REPLY_CRC "ipsec_itf_create_reply_5383d31f"
#define VL_API_IPSEC_ITF_DELETE_CRC "ipsec_itf_delete_f9e6675e"
#define VL_API_IPSEC_ITF_DELETE_REPLY_CRC "ipsec_itf_delete_reply_e8d4e804"
#define VL_API_IPSEC_ITF_DUMP_CRC "ipsec_itf_dump_f9e6675e"
#define VL_API_IPSEC_ITF_DETAILS_CRC "ipsec_itf_details_548a73b8"
#define VL_API_IPSEC_SA_DUMP_CRC "ipsec_sa_dump_2076c2f4"
#define VL_API_IPSEC_SA_DETAILS_CRC "ipsec_sa_details_b30c7f41"
#define VL_API_IPSEC_TUNNEL_IF_SET_SA_CRC "ipsec_tunnel_if_set_sa_f2f87112"
#define VL_API_IPSEC_TUNNEL_IF_SET_SA_REPLY_CRC "ipsec_tunnel_if_set_sa_reply_e8d4e804"
#define VL_API_IPSEC_BACKEND_DUMP_CRC "ipsec_backend_dump_51077d14"
#define VL_API_IPSEC_BACKEND_DETAILS_CRC "ipsec_backend_details_ee601c29"
#define VL_API_IPSEC_SELECT_BACKEND_CRC "ipsec_select_backend_5bcfd3b7"
#define VL_API_IPSEC_SELECT_BACKEND_REPLY_CRC "ipsec_select_backend_reply_e8d4e804"

#endif
