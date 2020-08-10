#ifndef included_policer_api_types_h
#define included_policer_api_types_h
/* Imported API files */
#include <vnet/policer/policer_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_policer_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    u8 name[64];
    u32 cir;
    u32 eir;
    u64 cb;
    u64 eb;
    vl_api_sse2_qos_rate_type_t rate_type;
    vl_api_sse2_qos_round_type_t round_type;
    vl_api_sse2_qos_policer_type_t type;
    bool color_aware;
    vl_api_sse2_qos_action_t conform_action;
    vl_api_sse2_qos_action_t exceed_action;
    vl_api_sse2_qos_action_t violate_action;
} vl_api_policer_add_del_t;
typedef struct __attribute__ ((packed)) _vl_api_policer_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 policer_index;
} vl_api_policer_add_del_reply_t;
typedef struct __attribute__ ((packed)) _vl_api_policer_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool match_name_valid;
    u8 match_name[64];
} vl_api_policer_dump_t;
typedef struct __attribute__ ((packed)) _vl_api_policer_details {
    u16 _vl_msg_id;
    u32 context;
    u8 name[64];
    u32 cir;
    u32 eir;
    u64 cb;
    u64 eb;
    vl_api_sse2_qos_rate_type_t rate_type;
    vl_api_sse2_qos_round_type_t round_type;
    vl_api_sse2_qos_policer_type_t type;
    vl_api_sse2_qos_action_t conform_action;
    vl_api_sse2_qos_action_t exceed_action;
    vl_api_sse2_qos_action_t violate_action;
    bool single_rate;
    bool color_aware;
    u32 scale;
    u32 cir_tokens_per_period;
    u32 pir_tokens_per_period;
    u32 current_limit;
    u32 current_bucket;
    u32 extended_limit;
    u32 extended_bucket;
    u64 last_update_time;
} vl_api_policer_details_t;
#define VL_API_POLICER_ADD_DEL_CRC "policer_add_del_cb948f6e"
#define VL_API_POLICER_ADD_DEL_REPLY_CRC "policer_add_del_reply_a177cef2"
#define VL_API_POLICER_DUMP_CRC "policer_dump_35f1ae0f"
#define VL_API_POLICER_DETAILS_CRC "policer_details_a43f781a"

#endif
