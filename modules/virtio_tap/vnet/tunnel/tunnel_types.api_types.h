#ifndef included_tunnel_types_api_types_h
#define included_tunnel_types_api_types_h
typedef enum __attribute__((packed)) {
    TUNNEL_API_ENCAP_DECAP_FLAG_NONE = 0,
    TUNNEL_API_ENCAP_DECAP_FLAG_ENCAP_COPY_DF = 1,
    TUNNEL_API_ENCAP_DECAP_FLAG_ENCAP_SET_DF = 2,
    TUNNEL_API_ENCAP_DECAP_FLAG_ENCAP_COPY_DSCP = 4,
    TUNNEL_API_ENCAP_DECAP_FLAG_ENCAP_COPY_ECN = 8,
    TUNNEL_API_ENCAP_DECAP_FLAG_DECAP_COPY_ECN = 16,
} vl_api_tunnel_encap_decap_flags_t;
STATIC_ASSERT(sizeof(vl_api_tunnel_encap_decap_flags_t) == sizeof(u8), "size of API enum tunnel_encap_decap_flags is wrong");
typedef enum __attribute__((packed)) {
    TUNNEL_API_MODE_P2P = 0,
    TUNNEL_API_MODE_MP = 1,
} vl_api_tunnel_mode_t;
STATIC_ASSERT(sizeof(vl_api_tunnel_mode_t) == sizeof(u8), "size of API enum tunnel_mode is wrong");

#endif
