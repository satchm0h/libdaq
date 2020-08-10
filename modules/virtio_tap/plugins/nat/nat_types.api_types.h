#ifndef included_nat_types_api_types_h
#define included_nat_types_api_types_h
typedef enum __attribute__((packed)) {
    NAT_IS_NONE = 0,
    NAT_IS_TWICE_NAT = 1,
    NAT_IS_SELF_TWICE_NAT = 2,
    NAT_IS_OUT2IN_ONLY = 4,
    NAT_IS_ADDR_ONLY = 8,
    NAT_IS_OUTSIDE = 16,
    NAT_IS_INSIDE = 32,
    NAT_IS_STATIC = 64,
    NAT_IS_EXT_HOST_VALID = 128,
} vl_api_nat_config_flags_t;
STATIC_ASSERT(sizeof(vl_api_nat_config_flags_t) == sizeof(u8), "size of API enum nat_config_flags is wrong");

#endif
