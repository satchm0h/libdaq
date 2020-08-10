/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: interface.api
 * Automatically generated: please edit the input file NOT this file!
 */

#include <stdbool.h>
#if defined(vl_msg_id)||defined(vl_union_id) \
    || defined(vl_printfun) ||defined(vl_endianfun) \
    || defined(vl_api_version)||defined(vl_typedefs) \
    || defined(vl_msg_name)||defined(vl_msg_name_crc_list) \
    || defined(vl_api_version_tuple)
/* ok, something was selected */
#else
#warning no content included from interface.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SW_INTERFACE_SET_FLAGS, vl_api_sw_interface_set_flags_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_FLAGS_REPLY, vl_api_sw_interface_set_flags_reply_t_handler)
vl_msg_id(VL_API_HW_INTERFACE_SET_MTU, vl_api_hw_interface_set_mtu_t_handler)
vl_msg_id(VL_API_HW_INTERFACE_SET_MTU_REPLY, vl_api_hw_interface_set_mtu_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_MTU, vl_api_sw_interface_set_mtu_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_MTU_REPLY, vl_api_sw_interface_set_mtu_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_IP_DIRECTED_BROADCAST, vl_api_sw_interface_set_ip_directed_broadcast_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_IP_DIRECTED_BROADCAST_REPLY, vl_api_sw_interface_set_ip_directed_broadcast_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_EVENT, vl_api_sw_interface_event_t_handler)
vl_msg_id(VL_API_WANT_INTERFACE_EVENTS, vl_api_want_interface_events_t_handler)
vl_msg_id(VL_API_WANT_INTERFACE_EVENTS_REPLY, vl_api_want_interface_events_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_DETAILS, vl_api_sw_interface_details_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_DUMP, vl_api_sw_interface_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_ADD_DEL_ADDRESS, vl_api_sw_interface_add_del_address_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_ADD_DEL_ADDRESS_REPLY, vl_api_sw_interface_add_del_address_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_ADDRESS_REPLACE_BEGIN, vl_api_sw_interface_address_replace_begin_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_ADDRESS_REPLACE_BEGIN_REPLY, vl_api_sw_interface_address_replace_begin_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_ADDRESS_REPLACE_END, vl_api_sw_interface_address_replace_end_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_ADDRESS_REPLACE_END_REPLY, vl_api_sw_interface_address_replace_end_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_TABLE, vl_api_sw_interface_set_table_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_TABLE_REPLY, vl_api_sw_interface_set_table_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_GET_TABLE, vl_api_sw_interface_get_table_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_GET_TABLE_REPLY, vl_api_sw_interface_get_table_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_UNNUMBERED, vl_api_sw_interface_set_unnumbered_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_UNNUMBERED_REPLY, vl_api_sw_interface_set_unnumbered_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_CLEAR_STATS, vl_api_sw_interface_clear_stats_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_CLEAR_STATS_REPLY, vl_api_sw_interface_clear_stats_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_TAG_ADD_DEL, vl_api_sw_interface_tag_add_del_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_TAG_ADD_DEL_REPLY, vl_api_sw_interface_tag_add_del_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_ADD_DEL_MAC_ADDRESS, vl_api_sw_interface_add_del_mac_address_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_ADD_DEL_MAC_ADDRESS_REPLY, vl_api_sw_interface_add_del_mac_address_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_MAC_ADDRESS, vl_api_sw_interface_set_mac_address_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_MAC_ADDRESS_REPLY, vl_api_sw_interface_set_mac_address_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_GET_MAC_ADDRESS, vl_api_sw_interface_get_mac_address_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_GET_MAC_ADDRESS_REPLY, vl_api_sw_interface_get_mac_address_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_RX_MODE, vl_api_sw_interface_set_rx_mode_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_RX_MODE_REPLY, vl_api_sw_interface_set_rx_mode_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_RX_PLACEMENT, vl_api_sw_interface_set_rx_placement_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_RX_PLACEMENT_REPLY, vl_api_sw_interface_set_rx_placement_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_RX_PLACEMENT_DUMP, vl_api_sw_interface_rx_placement_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_RX_PLACEMENT_DETAILS, vl_api_sw_interface_rx_placement_details_t_handler)
vl_msg_id(VL_API_INTERFACE_NAME_RENUMBER, vl_api_interface_name_renumber_t_handler)
vl_msg_id(VL_API_INTERFACE_NAME_RENUMBER_REPLY, vl_api_interface_name_renumber_reply_t_handler)
vl_msg_id(VL_API_CREATE_SUBIF, vl_api_create_subif_t_handler)
vl_msg_id(VL_API_CREATE_SUBIF_REPLY, vl_api_create_subif_reply_t_handler)
vl_msg_id(VL_API_CREATE_VLAN_SUBIF, vl_api_create_vlan_subif_t_handler)
vl_msg_id(VL_API_CREATE_VLAN_SUBIF_REPLY, vl_api_create_vlan_subif_reply_t_handler)
vl_msg_id(VL_API_DELETE_SUBIF, vl_api_delete_subif_t_handler)
vl_msg_id(VL_API_DELETE_SUBIF_REPLY, vl_api_delete_subif_reply_t_handler)
vl_msg_id(VL_API_CREATE_LOOPBACK, vl_api_create_loopback_t_handler)
vl_msg_id(VL_API_CREATE_LOOPBACK_REPLY, vl_api_create_loopback_reply_t_handler)
vl_msg_id(VL_API_CREATE_LOOPBACK_INSTANCE, vl_api_create_loopback_instance_t_handler)
vl_msg_id(VL_API_CREATE_LOOPBACK_INSTANCE_REPLY, vl_api_create_loopback_instance_reply_t_handler)
vl_msg_id(VL_API_DELETE_LOOPBACK, vl_api_delete_loopback_t_handler)
vl_msg_id(VL_API_DELETE_LOOPBACK_REPLY, vl_api_delete_loopback_reply_t_handler)
vl_msg_id(VL_API_COLLECT_DETAILED_INTERFACE_STATS, vl_api_collect_detailed_interface_stats_t_handler)
vl_msg_id(VL_API_COLLECT_DETAILED_INTERFACE_STATS_REPLY, vl_api_collect_detailed_interface_stats_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_sw_interface_set_flags_t, 1)
vl_msg_name(vl_api_sw_interface_set_flags_reply_t, 1)
vl_msg_name(vl_api_hw_interface_set_mtu_t, 1)
vl_msg_name(vl_api_hw_interface_set_mtu_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_mtu_t, 1)
vl_msg_name(vl_api_sw_interface_set_mtu_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_ip_directed_broadcast_t, 1)
vl_msg_name(vl_api_sw_interface_set_ip_directed_broadcast_reply_t, 1)
vl_msg_name(vl_api_sw_interface_event_t, 1)
vl_msg_name(vl_api_want_interface_events_t, 1)
vl_msg_name(vl_api_want_interface_events_reply_t, 1)
vl_msg_name(vl_api_sw_interface_details_t, 1)
vl_msg_name(vl_api_sw_interface_dump_t, 1)
vl_msg_name(vl_api_sw_interface_add_del_address_t, 1)
vl_msg_name(vl_api_sw_interface_add_del_address_reply_t, 1)
vl_msg_name(vl_api_sw_interface_address_replace_begin_t, 1)
vl_msg_name(vl_api_sw_interface_address_replace_begin_reply_t, 1)
vl_msg_name(vl_api_sw_interface_address_replace_end_t, 1)
vl_msg_name(vl_api_sw_interface_address_replace_end_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_table_t, 1)
vl_msg_name(vl_api_sw_interface_set_table_reply_t, 1)
vl_msg_name(vl_api_sw_interface_get_table_t, 1)
vl_msg_name(vl_api_sw_interface_get_table_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_unnumbered_t, 1)
vl_msg_name(vl_api_sw_interface_set_unnumbered_reply_t, 1)
vl_msg_name(vl_api_sw_interface_clear_stats_t, 1)
vl_msg_name(vl_api_sw_interface_clear_stats_reply_t, 1)
vl_msg_name(vl_api_sw_interface_tag_add_del_t, 1)
vl_msg_name(vl_api_sw_interface_tag_add_del_reply_t, 1)
vl_msg_name(vl_api_sw_interface_add_del_mac_address_t, 1)
vl_msg_name(vl_api_sw_interface_add_del_mac_address_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_mac_address_t, 1)
vl_msg_name(vl_api_sw_interface_set_mac_address_reply_t, 1)
vl_msg_name(vl_api_sw_interface_get_mac_address_t, 1)
vl_msg_name(vl_api_sw_interface_get_mac_address_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_rx_mode_t, 1)
vl_msg_name(vl_api_sw_interface_set_rx_mode_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_rx_placement_t, 1)
vl_msg_name(vl_api_sw_interface_set_rx_placement_reply_t, 1)
vl_msg_name(vl_api_sw_interface_rx_placement_dump_t, 1)
vl_msg_name(vl_api_sw_interface_rx_placement_details_t, 1)
vl_msg_name(vl_api_interface_name_renumber_t, 1)
vl_msg_name(vl_api_interface_name_renumber_reply_t, 1)
vl_msg_name(vl_api_create_subif_t, 1)
vl_msg_name(vl_api_create_subif_reply_t, 1)
vl_msg_name(vl_api_create_vlan_subif_t, 1)
vl_msg_name(vl_api_create_vlan_subif_reply_t, 1)
vl_msg_name(vl_api_delete_subif_t, 1)
vl_msg_name(vl_api_delete_subif_reply_t, 1)
vl_msg_name(vl_api_create_loopback_t, 1)
vl_msg_name(vl_api_create_loopback_reply_t, 1)
vl_msg_name(vl_api_create_loopback_instance_t, 1)
vl_msg_name(vl_api_create_loopback_instance_reply_t, 1)
vl_msg_name(vl_api_delete_loopback_t, 1)
vl_msg_name(vl_api_delete_loopback_reply_t, 1)
vl_msg_name(vl_api_collect_detailed_interface_stats_t, 1)
vl_msg_name(vl_api_collect_detailed_interface_stats_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_interface \
_(VL_API_SW_INTERFACE_SET_FLAGS, sw_interface_set_flags, 6a2b491a) \
_(VL_API_SW_INTERFACE_SET_FLAGS_REPLY, sw_interface_set_flags_reply, e8d4e804) \
_(VL_API_HW_INTERFACE_SET_MTU, hw_interface_set_mtu, e6746899) \
_(VL_API_HW_INTERFACE_SET_MTU_REPLY, hw_interface_set_mtu_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_MTU, sw_interface_set_mtu, 5cbe85e5) \
_(VL_API_SW_INTERFACE_SET_MTU_REPLY, sw_interface_set_mtu_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_IP_DIRECTED_BROADCAST, sw_interface_set_ip_directed_broadcast, ae6cfcfb) \
_(VL_API_SW_INTERFACE_SET_IP_DIRECTED_BROADCAST_REPLY, sw_interface_set_ip_directed_broadcast_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_EVENT, sw_interface_event, f709f78d) \
_(VL_API_WANT_INTERFACE_EVENTS, want_interface_events, 476f5a08) \
_(VL_API_WANT_INTERFACE_EVENTS_REPLY, want_interface_events_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_DETAILS, sw_interface_details, 17b69fa2) \
_(VL_API_SW_INTERFACE_DUMP, sw_interface_dump, aa610c27) \
_(VL_API_SW_INTERFACE_ADD_DEL_ADDRESS, sw_interface_add_del_address, 5803d5c4) \
_(VL_API_SW_INTERFACE_ADD_DEL_ADDRESS_REPLY, sw_interface_add_del_address_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_ADDRESS_REPLACE_BEGIN, sw_interface_address_replace_begin, 51077d14) \
_(VL_API_SW_INTERFACE_ADDRESS_REPLACE_BEGIN_REPLY, sw_interface_address_replace_begin_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_ADDRESS_REPLACE_END, sw_interface_address_replace_end, 51077d14) \
_(VL_API_SW_INTERFACE_ADDRESS_REPLACE_END_REPLY, sw_interface_address_replace_end_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_TABLE, sw_interface_set_table, df42a577) \
_(VL_API_SW_INTERFACE_SET_TABLE_REPLY, sw_interface_set_table_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_GET_TABLE, sw_interface_get_table, 2d033de4) \
_(VL_API_SW_INTERFACE_GET_TABLE_REPLY, sw_interface_get_table_reply, a6eb0109) \
_(VL_API_SW_INTERFACE_SET_UNNUMBERED, sw_interface_set_unnumbered, 938ef33b) \
_(VL_API_SW_INTERFACE_SET_UNNUMBERED_REPLY, sw_interface_set_unnumbered_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_CLEAR_STATS, sw_interface_clear_stats, f9e6675e) \
_(VL_API_SW_INTERFACE_CLEAR_STATS_REPLY, sw_interface_clear_stats_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_TAG_ADD_DEL, sw_interface_tag_add_del, 426f8bc1) \
_(VL_API_SW_INTERFACE_TAG_ADD_DEL_REPLY, sw_interface_tag_add_del_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_ADD_DEL_MAC_ADDRESS, sw_interface_add_del_mac_address, 638bb9f4) \
_(VL_API_SW_INTERFACE_ADD_DEL_MAC_ADDRESS_REPLY, sw_interface_add_del_mac_address_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_MAC_ADDRESS, sw_interface_set_mac_address, 6aca746a) \
_(VL_API_SW_INTERFACE_SET_MAC_ADDRESS_REPLY, sw_interface_set_mac_address_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_GET_MAC_ADDRESS, sw_interface_get_mac_address, f9e6675e) \
_(VL_API_SW_INTERFACE_GET_MAC_ADDRESS_REPLY, sw_interface_get_mac_address_reply, 40ef2c08) \
_(VL_API_SW_INTERFACE_SET_RX_MODE, sw_interface_set_rx_mode, 780f5cee) \
_(VL_API_SW_INTERFACE_SET_RX_MODE_REPLY, sw_interface_set_rx_mode_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_RX_PLACEMENT, sw_interface_set_rx_placement, db65f3c9) \
_(VL_API_SW_INTERFACE_SET_RX_PLACEMENT_REPLY, sw_interface_set_rx_placement_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_RX_PLACEMENT_DUMP, sw_interface_rx_placement_dump, f9e6675e) \
_(VL_API_SW_INTERFACE_RX_PLACEMENT_DETAILS, sw_interface_rx_placement_details, f6d7d024) \
_(VL_API_INTERFACE_NAME_RENUMBER, interface_name_renumber, 2b8858b8) \
_(VL_API_INTERFACE_NAME_RENUMBER_REPLY, interface_name_renumber_reply, e8d4e804) \
_(VL_API_CREATE_SUBIF, create_subif, cb371063) \
_(VL_API_CREATE_SUBIF_REPLY, create_subif_reply, 5383d31f) \
_(VL_API_CREATE_VLAN_SUBIF, create_vlan_subif, af34ac8b) \
_(VL_API_CREATE_VLAN_SUBIF_REPLY, create_vlan_subif_reply, 5383d31f) \
_(VL_API_DELETE_SUBIF, delete_subif, f9e6675e) \
_(VL_API_DELETE_SUBIF_REPLY, delete_subif_reply, e8d4e804) \
_(VL_API_CREATE_LOOPBACK, create_loopback, 42bb5d22) \
_(VL_API_CREATE_LOOPBACK_REPLY, create_loopback_reply, 5383d31f) \
_(VL_API_CREATE_LOOPBACK_INSTANCE, create_loopback_instance, d36a3ee2) \
_(VL_API_CREATE_LOOPBACK_INSTANCE_REPLY, create_loopback_instance_reply, 5383d31f) \
_(VL_API_DELETE_LOOPBACK, delete_loopback, f9e6675e) \
_(VL_API_DELETE_LOOPBACK_REPLY, delete_loopback_reply, e8d4e804) \
_(VL_API_COLLECT_DETAILED_INTERFACE_STATS, collect_detailed_interface_stats, 5501adee) \
_(VL_API_COLLECT_DETAILED_INTERFACE_STATS_REPLY, collect_detailed_interface_stats_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "interface.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_interface_printfun_types
#define included_interface_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_interface_printfun
#define included_interface_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_sw_interface_set_flags_t_print (vl_api_sw_interface_set_flags_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_flags_t: */
    s = format(s, "vl_api_sw_interface_set_flags_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_if_status_flags_t, &a->flags, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_flags_reply_t_print (vl_api_sw_interface_set_flags_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_flags_reply_t: */
    s = format(s, "vl_api_sw_interface_set_flags_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_hw_interface_set_mtu_t_print (vl_api_hw_interface_set_mtu_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_hw_interface_set_mtu_t: */
    s = format(s, "vl_api_hw_interface_set_mtu_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Umtu: %u", format_white_space, indent, a->mtu);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_hw_interface_set_mtu_reply_t_print (vl_api_hw_interface_set_mtu_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_hw_interface_set_mtu_reply_t: */
    s = format(s, "vl_api_hw_interface_set_mtu_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_mtu_t_print (vl_api_sw_interface_set_mtu_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_mtu_t: */
    s = format(s, "vl_api_sw_interface_set_mtu_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    for (i = 0; i < 4; i++) {
        s = format(s, "\n%Umtu: %u",
                   format_white_space, indent, a->mtu[i]);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_mtu_reply_t_print (vl_api_sw_interface_set_mtu_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_mtu_reply_t: */
    s = format(s, "vl_api_sw_interface_set_mtu_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_ip_directed_broadcast_t_print (vl_api_sw_interface_set_ip_directed_broadcast_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_ip_directed_broadcast_t: */
    s = format(s, "vl_api_sw_interface_set_ip_directed_broadcast_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_ip_directed_broadcast_reply_t_print (vl_api_sw_interface_set_ip_directed_broadcast_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_ip_directed_broadcast_reply_t: */
    s = format(s, "vl_api_sw_interface_set_ip_directed_broadcast_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_event_t_print (vl_api_sw_interface_event_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_event_t: */
    s = format(s, "vl_api_sw_interface_event_t:");
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_if_status_flags_t, &a->flags, indent);
    s = format(s, "\n%Udeleted: %u", format_white_space, indent, a->deleted);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_interface_events_t_print (vl_api_want_interface_events_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_interface_events_t: */
    s = format(s, "vl_api_want_interface_events_t:");
    s = format(s, "\n%Uenable_disable: %u", format_white_space, indent, a->enable_disable);
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_interface_events_reply_t_print (vl_api_want_interface_events_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_interface_events_reply_t: */
    s = format(s, "vl_api_want_interface_events_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_details_t_print (vl_api_sw_interface_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_details_t: */
    s = format(s, "vl_api_sw_interface_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Usup_sw_if_index: %u", format_white_space, indent, a->sup_sw_if_index);
    s = format(s, "\n%Ul2_address: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->l2_address, indent);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_if_status_flags_t, &a->flags, indent);
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_if_type_t, &a->type, indent);
    s = format(s, "\n%Ulink_duplex: %U", format_white_space, indent, format_vl_api_link_duplex_t, &a->link_duplex, indent);
    s = format(s, "\n%Ulink_speed: %u", format_white_space, indent, a->link_speed);
    s = format(s, "\n%Ulink_mtu: %u", format_white_space, indent, a->link_mtu);
    for (i = 0; i < 4; i++) {
        s = format(s, "\n%Umtu: %u",
                   format_white_space, indent, a->mtu[i]);
    }
    s = format(s, "\n%Usub_id: %u", format_white_space, indent, a->sub_id);
    s = format(s, "\n%Usub_number_of_tags: %u", format_white_space, indent, a->sub_number_of_tags);
    s = format(s, "\n%Usub_outer_vlan_id: %u", format_white_space, indent, a->sub_outer_vlan_id);
    s = format(s, "\n%Usub_inner_vlan_id: %u", format_white_space, indent, a->sub_inner_vlan_id);
    s = format(s, "\n%Usub_if_flags: %U", format_white_space, indent, format_vl_api_sub_if_flags_t, &a->sub_if_flags, indent);
    s = format(s, "\n%Uvtr_op: %u", format_white_space, indent, a->vtr_op);
    s = format(s, "\n%Uvtr_push_dot1q: %u", format_white_space, indent, a->vtr_push_dot1q);
    s = format(s, "\n%Uvtr_tag1: %u", format_white_space, indent, a->vtr_tag1);
    s = format(s, "\n%Uvtr_tag2: %u", format_white_space, indent, a->vtr_tag2);
    s = format(s, "\n%Uouter_tag: %u", format_white_space, indent, a->outer_tag);
    s = format(s, "\n%Ub_dmac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->b_dmac, indent);
    s = format(s, "\n%Ub_smac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->b_smac, indent);
    s = format(s, "\n%Ub_vlanid: %u", format_white_space, indent, a->b_vlanid);
    s = format(s, "\n%Ui_sid: %u", format_white_space, indent, a->i_sid);
    s = format(s, "\n%Uinterface_name: %s", format_white_space, indent, a->interface_name);
    s = format(s, "\n%Uinterface_dev_type: %s", format_white_space, indent, a->interface_dev_type);
    s = format(s, "\n%Utag: %s", format_white_space, indent, a->tag);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_dump_t_print (vl_api_sw_interface_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_dump_t: */
    s = format(s, "vl_api_sw_interface_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uname_filter_valid: %u", format_white_space, indent, a->name_filter_valid);
    if (vl_api_string_len(&a->name_filter) > 0) {
        s = format(s, "\n%Uname_filter: %U", format_white_space, indent, vl_api_format_string, (&a->name_filter));
    } else {
        s = format(s, "\n%Uname_filter:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_add_del_address_t_print (vl_api_sw_interface_add_del_address_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_add_del_address_t: */
    s = format(s, "vl_api_sw_interface_add_del_address_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Udel_all: %u", format_white_space, indent, a->del_all);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_address_with_prefix_t, &a->prefix, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_add_del_address_reply_t_print (vl_api_sw_interface_add_del_address_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_add_del_address_reply_t: */
    s = format(s, "vl_api_sw_interface_add_del_address_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_address_replace_begin_t_print (vl_api_sw_interface_address_replace_begin_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_address_replace_begin_t: */
    s = format(s, "vl_api_sw_interface_address_replace_begin_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_address_replace_begin_reply_t_print (vl_api_sw_interface_address_replace_begin_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_address_replace_begin_reply_t: */
    s = format(s, "vl_api_sw_interface_address_replace_begin_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_address_replace_end_t_print (vl_api_sw_interface_address_replace_end_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_address_replace_end_t: */
    s = format(s, "vl_api_sw_interface_address_replace_end_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_address_replace_end_reply_t_print (vl_api_sw_interface_address_replace_end_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_address_replace_end_reply_t: */
    s = format(s, "vl_api_sw_interface_address_replace_end_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_table_t_print (vl_api_sw_interface_set_table_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_table_t: */
    s = format(s, "vl_api_sw_interface_set_table_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_table_reply_t_print (vl_api_sw_interface_set_table_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_table_reply_t: */
    s = format(s, "vl_api_sw_interface_set_table_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_get_table_t_print (vl_api_sw_interface_get_table_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_get_table_t: */
    s = format(s, "vl_api_sw_interface_get_table_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_get_table_reply_t_print (vl_api_sw_interface_get_table_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_get_table_reply_t: */
    s = format(s, "vl_api_sw_interface_get_table_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_unnumbered_t_print (vl_api_sw_interface_set_unnumbered_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_unnumbered_t: */
    s = format(s, "vl_api_sw_interface_set_unnumbered_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uunnumbered_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->unnumbered_sw_if_index, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_unnumbered_reply_t_print (vl_api_sw_interface_set_unnumbered_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_unnumbered_reply_t: */
    s = format(s, "vl_api_sw_interface_set_unnumbered_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_clear_stats_t_print (vl_api_sw_interface_clear_stats_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_clear_stats_t: */
    s = format(s, "vl_api_sw_interface_clear_stats_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_clear_stats_reply_t_print (vl_api_sw_interface_clear_stats_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_clear_stats_reply_t: */
    s = format(s, "vl_api_sw_interface_clear_stats_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_tag_add_del_t_print (vl_api_sw_interface_tag_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_tag_add_del_t: */
    s = format(s, "vl_api_sw_interface_tag_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Utag: %s", format_white_space, indent, a->tag);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_tag_add_del_reply_t_print (vl_api_sw_interface_tag_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_tag_add_del_reply_t: */
    s = format(s, "vl_api_sw_interface_tag_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_add_del_mac_address_t_print (vl_api_sw_interface_add_del_mac_address_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_add_del_mac_address_t: */
    s = format(s, "vl_api_sw_interface_add_del_mac_address_t:");
    s = format(s, "\n%Usw_if_index: %u", format_white_space, indent, a->sw_if_index);
    s = format(s, "\n%Uaddr: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->addr, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_add_del_mac_address_reply_t_print (vl_api_sw_interface_add_del_mac_address_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_add_del_mac_address_reply_t: */
    s = format(s, "vl_api_sw_interface_add_del_mac_address_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_mac_address_t_print (vl_api_sw_interface_set_mac_address_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_mac_address_t: */
    s = format(s, "vl_api_sw_interface_set_mac_address_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Umac_address: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_mac_address_reply_t_print (vl_api_sw_interface_set_mac_address_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_mac_address_reply_t: */
    s = format(s, "vl_api_sw_interface_set_mac_address_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_get_mac_address_t_print (vl_api_sw_interface_get_mac_address_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_get_mac_address_t: */
    s = format(s, "vl_api_sw_interface_get_mac_address_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_get_mac_address_reply_t_print (vl_api_sw_interface_get_mac_address_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_get_mac_address_reply_t: */
    s = format(s, "vl_api_sw_interface_get_mac_address_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Umac_address: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_rx_mode_t_print (vl_api_sw_interface_set_rx_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_rx_mode_t: */
    s = format(s, "vl_api_sw_interface_set_rx_mode_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uqueue_id_valid: %u", format_white_space, indent, a->queue_id_valid);
    s = format(s, "\n%Uqueue_id: %u", format_white_space, indent, a->queue_id);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_rx_mode_t, &a->mode, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_rx_mode_reply_t_print (vl_api_sw_interface_set_rx_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_rx_mode_reply_t: */
    s = format(s, "vl_api_sw_interface_set_rx_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_rx_placement_t_print (vl_api_sw_interface_set_rx_placement_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_rx_placement_t: */
    s = format(s, "vl_api_sw_interface_set_rx_placement_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uqueue_id: %u", format_white_space, indent, a->queue_id);
    s = format(s, "\n%Uworker_id: %u", format_white_space, indent, a->worker_id);
    s = format(s, "\n%Uis_main: %u", format_white_space, indent, a->is_main);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_rx_placement_reply_t_print (vl_api_sw_interface_set_rx_placement_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_rx_placement_reply_t: */
    s = format(s, "vl_api_sw_interface_set_rx_placement_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_rx_placement_dump_t_print (vl_api_sw_interface_rx_placement_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_rx_placement_dump_t: */
    s = format(s, "vl_api_sw_interface_rx_placement_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_rx_placement_details_t_print (vl_api_sw_interface_rx_placement_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_rx_placement_details_t: */
    s = format(s, "vl_api_sw_interface_rx_placement_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uqueue_id: %u", format_white_space, indent, a->queue_id);
    s = format(s, "\n%Uworker_id: %u", format_white_space, indent, a->worker_id);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_rx_mode_t, &a->mode, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_interface_name_renumber_t_print (vl_api_interface_name_renumber_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_interface_name_renumber_t: */
    s = format(s, "vl_api_interface_name_renumber_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Unew_show_dev_instance: %u", format_white_space, indent, a->new_show_dev_instance);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_interface_name_renumber_reply_t_print (vl_api_interface_name_renumber_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_interface_name_renumber_reply_t: */
    s = format(s, "vl_api_interface_name_renumber_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_create_subif_t_print (vl_api_create_subif_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_create_subif_t: */
    s = format(s, "vl_api_create_subif_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Usub_id: %u", format_white_space, indent, a->sub_id);
    s = format(s, "\n%Usub_if_flags: %U", format_white_space, indent, format_vl_api_sub_if_flags_t, &a->sub_if_flags, indent);
    s = format(s, "\n%Uouter_vlan_id: %u", format_white_space, indent, a->outer_vlan_id);
    s = format(s, "\n%Uinner_vlan_id: %u", format_white_space, indent, a->inner_vlan_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_create_subif_reply_t_print (vl_api_create_subif_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_create_subif_reply_t: */
    s = format(s, "vl_api_create_subif_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_create_vlan_subif_t_print (vl_api_create_vlan_subif_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_create_vlan_subif_t: */
    s = format(s, "vl_api_create_vlan_subif_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvlan_id: %u", format_white_space, indent, a->vlan_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_create_vlan_subif_reply_t_print (vl_api_create_vlan_subif_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_create_vlan_subif_reply_t: */
    s = format(s, "vl_api_create_vlan_subif_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_delete_subif_t_print (vl_api_delete_subif_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_delete_subif_t: */
    s = format(s, "vl_api_delete_subif_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_delete_subif_reply_t_print (vl_api_delete_subif_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_delete_subif_reply_t: */
    s = format(s, "vl_api_delete_subif_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_create_loopback_t_print (vl_api_create_loopback_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_create_loopback_t: */
    s = format(s, "vl_api_create_loopback_t:");
    s = format(s, "\n%Umac_address: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_create_loopback_reply_t_print (vl_api_create_loopback_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_create_loopback_reply_t: */
    s = format(s, "vl_api_create_loopback_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_create_loopback_instance_t_print (vl_api_create_loopback_instance_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_create_loopback_instance_t: */
    s = format(s, "vl_api_create_loopback_instance_t:");
    s = format(s, "\n%Umac_address: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac_address, indent);
    s = format(s, "\n%Uis_specified: %u", format_white_space, indent, a->is_specified);
    s = format(s, "\n%Uuser_instance: %u", format_white_space, indent, a->user_instance);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_create_loopback_instance_reply_t_print (vl_api_create_loopback_instance_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_create_loopback_instance_reply_t: */
    s = format(s, "vl_api_create_loopback_instance_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_delete_loopback_t_print (vl_api_delete_loopback_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_delete_loopback_t: */
    s = format(s, "vl_api_delete_loopback_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_delete_loopback_reply_t_print (vl_api_delete_loopback_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_delete_loopback_reply_t: */
    s = format(s, "vl_api_delete_loopback_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_collect_detailed_interface_stats_t_print (vl_api_collect_detailed_interface_stats_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_collect_detailed_interface_stats_t: */
    s = format(s, "vl_api_collect_detailed_interface_stats_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uenable_disable: %u", format_white_space, indent, a->enable_disable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_collect_detailed_interface_stats_reply_t_print (vl_api_collect_detailed_interface_stats_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_collect_detailed_interface_stats_reply_t: */
    s = format(s, "vl_api_collect_detailed_interface_stats_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_interface_endianfun
#define included_interface_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_sw_interface_set_flags_t_endian (vl_api_sw_interface_set_flags_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_if_status_flags_t_endian(&a->flags);
}

static inline void vl_api_sw_interface_set_flags_reply_t_endian (vl_api_sw_interface_set_flags_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_hw_interface_set_mtu_t_endian (vl_api_hw_interface_set_mtu_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->mtu = clib_net_to_host_u16(a->mtu);
}

static inline void vl_api_hw_interface_set_mtu_reply_t_endian (vl_api_hw_interface_set_mtu_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_set_mtu_t_endian (vl_api_sw_interface_set_mtu_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    for (i = 0; i < 4; i++) {
        a->mtu[i] = clib_net_to_host_u32(a->mtu[i]);
    }
}

static inline void vl_api_sw_interface_set_mtu_reply_t_endian (vl_api_sw_interface_set_mtu_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_set_ip_directed_broadcast_t_endian (vl_api_sw_interface_set_ip_directed_broadcast_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_sw_interface_set_ip_directed_broadcast_reply_t_endian (vl_api_sw_interface_set_ip_directed_broadcast_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_event_t_endian (vl_api_sw_interface_event_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_if_status_flags_t_endian(&a->flags);
    /* a->deleted = a->deleted (no-op) */
}

static inline void vl_api_want_interface_events_t_endian (vl_api_want_interface_events_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->enable_disable = clib_net_to_host_u32(a->enable_disable);
    a->pid = clib_net_to_host_u32(a->pid);
}

static inline void vl_api_want_interface_events_reply_t_endian (vl_api_want_interface_events_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_details_t_endian (vl_api_sw_interface_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->sup_sw_if_index = clib_net_to_host_u32(a->sup_sw_if_index);
    vl_api_mac_address_t_endian(&a->l2_address);
    vl_api_if_status_flags_t_endian(&a->flags);
    vl_api_if_type_t_endian(&a->type);
    vl_api_link_duplex_t_endian(&a->link_duplex);
    a->link_speed = clib_net_to_host_u32(a->link_speed);
    a->link_mtu = clib_net_to_host_u16(a->link_mtu);
    for (i = 0; i < 4; i++) {
        a->mtu[i] = clib_net_to_host_u32(a->mtu[i]);
    }
    a->sub_id = clib_net_to_host_u32(a->sub_id);
    /* a->sub_number_of_tags = a->sub_number_of_tags (no-op) */
    a->sub_outer_vlan_id = clib_net_to_host_u16(a->sub_outer_vlan_id);
    a->sub_inner_vlan_id = clib_net_to_host_u16(a->sub_inner_vlan_id);
    vl_api_sub_if_flags_t_endian(&a->sub_if_flags);
    a->vtr_op = clib_net_to_host_u32(a->vtr_op);
    a->vtr_push_dot1q = clib_net_to_host_u32(a->vtr_push_dot1q);
    a->vtr_tag1 = clib_net_to_host_u32(a->vtr_tag1);
    a->vtr_tag2 = clib_net_to_host_u32(a->vtr_tag2);
    a->outer_tag = clib_net_to_host_u16(a->outer_tag);
    vl_api_mac_address_t_endian(&a->b_dmac);
    vl_api_mac_address_t_endian(&a->b_smac);
    a->b_vlanid = clib_net_to_host_u16(a->b_vlanid);
    a->i_sid = clib_net_to_host_u32(a->i_sid);
    /* a->interface_name = a->interface_name (no-op) */
    /* a->interface_dev_type = a->interface_dev_type (no-op) */
    /* a->tag = a->tag (no-op) */
}

static inline void vl_api_sw_interface_dump_t_endian (vl_api_sw_interface_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->name_filter_valid = a->name_filter_valid (no-op) */
    /* a->name_filter = a->name_filter (no-op) */
}

static inline void vl_api_sw_interface_add_del_address_t_endian (vl_api_sw_interface_add_del_address_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_add = a->is_add (no-op) */
    /* a->del_all = a->del_all (no-op) */
    vl_api_address_with_prefix_t_endian(&a->prefix);
}

static inline void vl_api_sw_interface_add_del_address_reply_t_endian (vl_api_sw_interface_add_del_address_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_address_replace_begin_t_endian (vl_api_sw_interface_address_replace_begin_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_sw_interface_address_replace_begin_reply_t_endian (vl_api_sw_interface_address_replace_begin_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_address_replace_end_t_endian (vl_api_sw_interface_address_replace_end_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_sw_interface_address_replace_end_reply_t_endian (vl_api_sw_interface_address_replace_end_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_set_table_t_endian (vl_api_sw_interface_set_table_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

static inline void vl_api_sw_interface_set_table_reply_t_endian (vl_api_sw_interface_set_table_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_get_table_t_endian (vl_api_sw_interface_get_table_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

static inline void vl_api_sw_interface_get_table_reply_t_endian (vl_api_sw_interface_get_table_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

static inline void vl_api_sw_interface_set_unnumbered_t_endian (vl_api_sw_interface_set_unnumbered_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_interface_index_t_endian(&a->unnumbered_sw_if_index);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_sw_interface_set_unnumbered_reply_t_endian (vl_api_sw_interface_set_unnumbered_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_clear_stats_t_endian (vl_api_sw_interface_clear_stats_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_sw_interface_clear_stats_reply_t_endian (vl_api_sw_interface_clear_stats_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_tag_add_del_t_endian (vl_api_sw_interface_tag_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->tag = a->tag (no-op) */
}

static inline void vl_api_sw_interface_tag_add_del_reply_t_endian (vl_api_sw_interface_tag_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_add_del_mac_address_t_endian (vl_api_sw_interface_add_del_mac_address_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    vl_api_mac_address_t_endian(&a->addr);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_sw_interface_add_del_mac_address_reply_t_endian (vl_api_sw_interface_add_del_mac_address_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_set_mac_address_t_endian (vl_api_sw_interface_set_mac_address_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_mac_address_t_endian(&a->mac_address);
}

static inline void vl_api_sw_interface_set_mac_address_reply_t_endian (vl_api_sw_interface_set_mac_address_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_get_mac_address_t_endian (vl_api_sw_interface_get_mac_address_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_sw_interface_get_mac_address_reply_t_endian (vl_api_sw_interface_get_mac_address_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_mac_address_t_endian(&a->mac_address);
}

static inline void vl_api_sw_interface_set_rx_mode_t_endian (vl_api_sw_interface_set_rx_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->queue_id_valid = a->queue_id_valid (no-op) */
    a->queue_id = clib_net_to_host_u32(a->queue_id);
    vl_api_rx_mode_t_endian(&a->mode);
}

static inline void vl_api_sw_interface_set_rx_mode_reply_t_endian (vl_api_sw_interface_set_rx_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_set_rx_placement_t_endian (vl_api_sw_interface_set_rx_placement_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->queue_id = clib_net_to_host_u32(a->queue_id);
    a->worker_id = clib_net_to_host_u32(a->worker_id);
    /* a->is_main = a->is_main (no-op) */
}

static inline void vl_api_sw_interface_set_rx_placement_reply_t_endian (vl_api_sw_interface_set_rx_placement_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_rx_placement_dump_t_endian (vl_api_sw_interface_rx_placement_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_sw_interface_rx_placement_details_t_endian (vl_api_sw_interface_rx_placement_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->queue_id = clib_net_to_host_u32(a->queue_id);
    a->worker_id = clib_net_to_host_u32(a->worker_id);
    vl_api_rx_mode_t_endian(&a->mode);
}

static inline void vl_api_interface_name_renumber_t_endian (vl_api_interface_name_renumber_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->new_show_dev_instance = clib_net_to_host_u32(a->new_show_dev_instance);
}

static inline void vl_api_interface_name_renumber_reply_t_endian (vl_api_interface_name_renumber_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_create_subif_t_endian (vl_api_create_subif_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->sub_id = clib_net_to_host_u32(a->sub_id);
    vl_api_sub_if_flags_t_endian(&a->sub_if_flags);
    a->outer_vlan_id = clib_net_to_host_u16(a->outer_vlan_id);
    a->inner_vlan_id = clib_net_to_host_u16(a->inner_vlan_id);
}

static inline void vl_api_create_subif_reply_t_endian (vl_api_create_subif_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_create_vlan_subif_t_endian (vl_api_create_vlan_subif_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->vlan_id = clib_net_to_host_u32(a->vlan_id);
}

static inline void vl_api_create_vlan_subif_reply_t_endian (vl_api_create_vlan_subif_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_delete_subif_t_endian (vl_api_delete_subif_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_delete_subif_reply_t_endian (vl_api_delete_subif_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_create_loopback_t_endian (vl_api_create_loopback_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_mac_address_t_endian(&a->mac_address);
}

static inline void vl_api_create_loopback_reply_t_endian (vl_api_create_loopback_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_create_loopback_instance_t_endian (vl_api_create_loopback_instance_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_mac_address_t_endian(&a->mac_address);
    /* a->is_specified = a->is_specified (no-op) */
    a->user_instance = clib_net_to_host_u32(a->user_instance);
}

static inline void vl_api_create_loopback_instance_reply_t_endian (vl_api_create_loopback_instance_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_delete_loopback_t_endian (vl_api_delete_loopback_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_delete_loopback_reply_t_endian (vl_api_delete_loopback_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_collect_detailed_interface_stats_t_endian (vl_api_collect_detailed_interface_stats_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->enable_disable = a->enable_disable (no-op) */
}

static inline void vl_api_collect_detailed_interface_stats_reply_t_endian (vl_api_collect_detailed_interface_stats_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(interface.api, 3, 2, 2)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(interface.api, 0x67b06d51)

#endif

