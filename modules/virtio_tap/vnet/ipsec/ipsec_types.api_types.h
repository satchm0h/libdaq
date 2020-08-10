#ifndef included_ipsec_types_api_types_h
#define included_ipsec_types_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
typedef enum {
    IPSEC_API_CRYPTO_ALG_NONE = 0,
    IPSEC_API_CRYPTO_ALG_AES_CBC_128 = 1,
    IPSEC_API_CRYPTO_ALG_AES_CBC_192 = 2,
    IPSEC_API_CRYPTO_ALG_AES_CBC_256 = 3,
    IPSEC_API_CRYPTO_ALG_AES_CTR_128 = 4,
    IPSEC_API_CRYPTO_ALG_AES_CTR_192 = 5,
    IPSEC_API_CRYPTO_ALG_AES_CTR_256 = 6,
    IPSEC_API_CRYPTO_ALG_AES_GCM_128 = 7,
    IPSEC_API_CRYPTO_ALG_AES_GCM_192 = 8,
    IPSEC_API_CRYPTO_ALG_AES_GCM_256 = 9,
    IPSEC_API_CRYPTO_ALG_DES_CBC = 10,
    IPSEC_API_CRYPTO_ALG_3DES_CBC = 11,
} vl_api_ipsec_crypto_alg_t;
typedef enum {
    IPSEC_API_INTEG_ALG_NONE = 0,
    IPSEC_API_INTEG_ALG_MD5_96 = 1,
    IPSEC_API_INTEG_ALG_SHA1_96 = 2,
    IPSEC_API_INTEG_ALG_SHA_256_96 = 3,
    IPSEC_API_INTEG_ALG_SHA_256_128 = 4,
    IPSEC_API_INTEG_ALG_SHA_384_192 = 5,
    IPSEC_API_INTEG_ALG_SHA_512_256 = 6,
} vl_api_ipsec_integ_alg_t;
typedef enum {
    IPSEC_API_SAD_FLAG_NONE = 0,
    IPSEC_API_SAD_FLAG_USE_ESN = 1,
    IPSEC_API_SAD_FLAG_USE_ANTI_REPLAY = 2,
    IPSEC_API_SAD_FLAG_IS_TUNNEL = 4,
    IPSEC_API_SAD_FLAG_IS_TUNNEL_V6 = 8,
    IPSEC_API_SAD_FLAG_UDP_ENCAP = 16,
    IPSEC_API_SAD_FLAG_IS_INBOUND = 64,
} vl_api_ipsec_sad_flags_t;
typedef enum {
    IPSEC_API_PROTO_ESP = 50,
    IPSEC_API_PROTO_AH = 51,
} vl_api_ipsec_proto_t;
typedef struct __attribute__ ((packed)) _vl_api_key {
    u8 length;
    u8 data[128];
} vl_api_key_t;
typedef struct __attribute__ ((packed)) _vl_api_ipsec_sad_entry {
    u32 sad_id;
    u32 spi;
    vl_api_ipsec_proto_t protocol;
    vl_api_ipsec_crypto_alg_t crypto_algorithm;
    vl_api_key_t crypto_key;
    vl_api_ipsec_integ_alg_t integrity_algorithm;
    vl_api_key_t integrity_key;
    vl_api_ipsec_sad_flags_t flags;
    vl_api_address_t tunnel_src;
    vl_api_address_t tunnel_dst;
    u32 tx_table_id;
    u32 salt;
    u16 udp_src_port;
    u16 udp_dst_port;
} vl_api_ipsec_sad_entry_t;

#endif
