#ifndef included_vxlan_gpe_ioam_export_api_types_h
#define included_vxlan_gpe_ioam_export_api_types_h
/* Imported API files */
#include <vnet/ip/ip_types.api_types.h>
typedef struct __attribute__ ((packed)) _vl_api_vxlan_gpe_ioam_export_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_disable;
    vl_api_ip4_address_t collector_address;
    vl_api_ip4_address_t src_address;
} vl_api_vxlan_gpe_ioam_export_enable_disable_t;
typedef struct __attribute__ ((packed)) _vl_api_vxlan_gpe_ioam_export_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
} vl_api_vxlan_gpe_ioam_export_enable_disable_reply_t;
#define VL_API_VXLAN_GPE_IOAM_EXPORT_ENABLE_DISABLE_CRC "vxlan_gpe_ioam_export_enable_disable_e4d4ebfa"
#define VL_API_VXLAN_GPE_IOAM_EXPORT_ENABLE_DISABLE_REPLY_CRC "vxlan_gpe_ioam_export_enable_disable_reply_e8d4e804"

#endif
