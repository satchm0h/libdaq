#ifndef included_ikev2_types_api_types_h
#define included_ikev2_types_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
#include <vnet/interface_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_ikev2_id {
    u8 type;
    u8 data_len;
    u8 data[64];
} vl_api_ikev2_id_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_ts {
    u32 sa_index;
    u32 child_sa_index;
    bool is_local;
    u8 protocol_id;
    u16 start_port;
    u16 end_port;
    vl_api_ip4_address_t start_addr;
    vl_api_ip4_address_t end_addr;
} vl_api_ikev2_ts_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_auth {
    u8 method;
    u8 hex;
    u32 data_len;
    u8 data[0];
} vl_api_ikev2_auth_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_responder {
    vl_api_interface_index_t sw_if_index;
    vl_api_ip4_address_t ip4;
} vl_api_ikev2_responder_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_ike_transforms {
    u8 crypto_alg;
    u32 crypto_key_size;
    u8 integ_alg;
    u8 dh_group;
} vl_api_ikev2_ike_transforms_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_esp_transforms {
    u8 crypto_alg;
    u32 crypto_key_size;
    u8 integ_alg;
} vl_api_ikev2_esp_transforms_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_profile {
    u8 name[64];
    vl_api_ikev2_id_t loc_id;
    vl_api_ikev2_id_t rem_id;
    vl_api_ikev2_ts_t loc_ts;
    vl_api_ikev2_ts_t rem_ts;
    vl_api_ikev2_responder_t responder;
    vl_api_ikev2_ike_transforms_t ike_ts;
    vl_api_ikev2_esp_transforms_t esp_ts;
    u64 lifetime;
    u64 lifetime_maxdata;
    u32 lifetime_jitter;
    u32 handover;
    u16 ipsec_over_udp_port;
    u32 tun_itf;
    bool udp_encap;
    vl_api_ikev2_auth_t auth;
} vl_api_ikev2_profile_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_sa_transform {
    u8 transform_type;
    u16 transform_id;
    u16 key_len;
    u16 key_trunc;
    u16 block_size;
    u8 dh_group;
} vl_api_ikev2_sa_transform_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_keys {
    u8 sk_d[64];
    u8 sk_d_len;
    u8 sk_ai[64];
    u8 sk_ai_len;
    u8 sk_ar[64];
    u8 sk_ar_len;
    u8 sk_ei[64];
    u8 sk_ei_len;
    u8 sk_er[64];
    u8 sk_er_len;
    u8 sk_pi[64];
    u8 sk_pi_len;
    u8 sk_pr[64];
    u8 sk_pr_len;
} vl_api_ikev2_keys_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_child_sa {
    u32 sa_index;
    u32 child_sa_index;
    u32 i_spi;
    u32 r_spi;
    vl_api_ikev2_keys_t keys;
    vl_api_ikev2_sa_transform_t encryption;
    vl_api_ikev2_sa_transform_t integrity;
    vl_api_ikev2_sa_transform_t esn;
} vl_api_ikev2_child_sa_t;
typedef struct __attribute__ ((packed)) _vl_api_ikev2_sa {
    u32 sa_index;
    u32 profile_index;
    u64 ispi;
    u64 rspi;
    vl_api_ip4_address_t iaddr;
    vl_api_ip4_address_t raddr;
    vl_api_ikev2_keys_t keys;
    vl_api_ikev2_id_t i_id;
    vl_api_ikev2_id_t r_id;
    vl_api_ikev2_sa_transform_t encryption;
    vl_api_ikev2_sa_transform_t integrity;
    vl_api_ikev2_sa_transform_t prf;
    vl_api_ikev2_sa_transform_t dh;
} vl_api_ikev2_sa_t;

#endif
