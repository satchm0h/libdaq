#ifndef included_tls_openssl_api_types_h
#define included_tls_openssl_api_types_h
typedef struct __attribute__ ((packed)) _vl_api_tls_openssl_set_engine {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 async_enable;
    u8 engine[64];
    u8 algorithm[64];
    u8 ciphers[64];
} vl_api_tls_openssl_set_engine_t;
typedef struct __attribute__ ((packed)) _vl_api_tls_openssl_set_engine_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_tls_openssl_set_engine_reply_t;
#define VL_API_TLS_OPENSSL_SET_ENGINE_CRC "tls_openssl_set_engine_e34d95c1"
#define VL_API_TLS_OPENSSL_SET_ENGINE_REPLY_CRC "tls_openssl_set_engine_reply_e8d4e804"

#endif
