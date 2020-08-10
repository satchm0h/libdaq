/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: l2.api
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
#warning no content included from l2.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_L2_XCONNECT_DETAILS, vl_api_l2_xconnect_details_t_handler)
vl_msg_id(VL_API_L2_XCONNECT_DUMP, vl_api_l2_xconnect_dump_t_handler)
vl_msg_id(VL_API_L2_FIB_TABLE_DETAILS, vl_api_l2_fib_table_details_t_handler)
vl_msg_id(VL_API_L2_FIB_TABLE_DUMP, vl_api_l2_fib_table_dump_t_handler)
vl_msg_id(VL_API_L2_FIB_CLEAR_TABLE, vl_api_l2_fib_clear_table_t_handler)
vl_msg_id(VL_API_L2_FIB_CLEAR_TABLE_REPLY, vl_api_l2_fib_clear_table_reply_t_handler)
vl_msg_id(VL_API_L2FIB_FLUSH_ALL, vl_api_l2fib_flush_all_t_handler)
vl_msg_id(VL_API_L2FIB_FLUSH_ALL_REPLY, vl_api_l2fib_flush_all_reply_t_handler)
vl_msg_id(VL_API_L2FIB_FLUSH_BD, vl_api_l2fib_flush_bd_t_handler)
vl_msg_id(VL_API_L2FIB_FLUSH_BD_REPLY, vl_api_l2fib_flush_bd_reply_t_handler)
vl_msg_id(VL_API_L2FIB_FLUSH_INT, vl_api_l2fib_flush_int_t_handler)
vl_msg_id(VL_API_L2FIB_FLUSH_INT_REPLY, vl_api_l2fib_flush_int_reply_t_handler)
vl_msg_id(VL_API_L2FIB_ADD_DEL, vl_api_l2fib_add_del_t_handler)
vl_msg_id(VL_API_L2FIB_ADD_DEL_REPLY, vl_api_l2fib_add_del_reply_t_handler)
vl_msg_id(VL_API_WANT_L2_MACS_EVENTS, vl_api_want_l2_macs_events_t_handler)
vl_msg_id(VL_API_WANT_L2_MACS_EVENTS_REPLY, vl_api_want_l2_macs_events_reply_t_handler)
vl_msg_id(VL_API_L2_MACS_EVENT, vl_api_l2_macs_event_t_handler)
vl_msg_id(VL_API_L2_FLAGS, vl_api_l2_flags_t_handler)
vl_msg_id(VL_API_L2_FLAGS_REPLY, vl_api_l2_flags_reply_t_handler)
vl_msg_id(VL_API_BRIDGE_DOMAIN_SET_MAC_AGE, vl_api_bridge_domain_set_mac_age_t_handler)
vl_msg_id(VL_API_BRIDGE_DOMAIN_SET_MAC_AGE_REPLY, vl_api_bridge_domain_set_mac_age_reply_t_handler)
vl_msg_id(VL_API_BRIDGE_DOMAIN_ADD_DEL, vl_api_bridge_domain_add_del_t_handler)
vl_msg_id(VL_API_BRIDGE_DOMAIN_ADD_DEL_REPLY, vl_api_bridge_domain_add_del_reply_t_handler)
vl_msg_id(VL_API_BRIDGE_DOMAIN_DUMP, vl_api_bridge_domain_dump_t_handler)
vl_msg_id(VL_API_BRIDGE_DOMAIN_DETAILS, vl_api_bridge_domain_details_t_handler)
vl_msg_id(VL_API_BRIDGE_FLAGS, vl_api_bridge_flags_t_handler)
vl_msg_id(VL_API_BRIDGE_FLAGS_REPLY, vl_api_bridge_flags_reply_t_handler)
vl_msg_id(VL_API_L2_INTERFACE_VLAN_TAG_REWRITE, vl_api_l2_interface_vlan_tag_rewrite_t_handler)
vl_msg_id(VL_API_L2_INTERFACE_VLAN_TAG_REWRITE_REPLY, vl_api_l2_interface_vlan_tag_rewrite_reply_t_handler)
vl_msg_id(VL_API_L2_INTERFACE_PBB_TAG_REWRITE, vl_api_l2_interface_pbb_tag_rewrite_t_handler)
vl_msg_id(VL_API_L2_INTERFACE_PBB_TAG_REWRITE_REPLY, vl_api_l2_interface_pbb_tag_rewrite_reply_t_handler)
vl_msg_id(VL_API_L2_PATCH_ADD_DEL, vl_api_l2_patch_add_del_t_handler)
vl_msg_id(VL_API_L2_PATCH_ADD_DEL_REPLY, vl_api_l2_patch_add_del_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_L2_XCONNECT, vl_api_sw_interface_set_l2_xconnect_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_L2_XCONNECT_REPLY, vl_api_sw_interface_set_l2_xconnect_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_L2_BRIDGE, vl_api_sw_interface_set_l2_bridge_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_L2_BRIDGE_REPLY, vl_api_sw_interface_set_l2_bridge_reply_t_handler)
vl_msg_id(VL_API_BD_IP_MAC_ADD_DEL, vl_api_bd_ip_mac_add_del_t_handler)
vl_msg_id(VL_API_BD_IP_MAC_ADD_DEL_REPLY, vl_api_bd_ip_mac_add_del_reply_t_handler)
vl_msg_id(VL_API_BD_IP_MAC_FLUSH, vl_api_bd_ip_mac_flush_t_handler)
vl_msg_id(VL_API_BD_IP_MAC_FLUSH_REPLY, vl_api_bd_ip_mac_flush_reply_t_handler)
vl_msg_id(VL_API_BD_IP_MAC_DETAILS, vl_api_bd_ip_mac_details_t_handler)
vl_msg_id(VL_API_BD_IP_MAC_DUMP, vl_api_bd_ip_mac_dump_t_handler)
vl_msg_id(VL_API_L2_INTERFACE_EFP_FILTER, vl_api_l2_interface_efp_filter_t_handler)
vl_msg_id(VL_API_L2_INTERFACE_EFP_FILTER_REPLY, vl_api_l2_interface_efp_filter_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_VPATH, vl_api_sw_interface_set_vpath_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_VPATH_REPLY, vl_api_sw_interface_set_vpath_reply_t_handler)
vl_msg_id(VL_API_BVI_CREATE, vl_api_bvi_create_t_handler)
vl_msg_id(VL_API_BVI_CREATE_REPLY, vl_api_bvi_create_reply_t_handler)
vl_msg_id(VL_API_BVI_DELETE, vl_api_bvi_delete_t_handler)
vl_msg_id(VL_API_BVI_DELETE_REPLY, vl_api_bvi_delete_reply_t_handler)
vl_msg_id(VL_API_WANT_L2_ARP_TERM_EVENTS, vl_api_want_l2_arp_term_events_t_handler)
vl_msg_id(VL_API_WANT_L2_ARP_TERM_EVENTS_REPLY, vl_api_want_l2_arp_term_events_reply_t_handler)
vl_msg_id(VL_API_L2_ARP_TERM_EVENT, vl_api_l2_arp_term_event_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_l2_xconnect_details_t, 1)
vl_msg_name(vl_api_l2_xconnect_dump_t, 1)
vl_msg_name(vl_api_l2_fib_table_details_t, 1)
vl_msg_name(vl_api_l2_fib_table_dump_t, 1)
vl_msg_name(vl_api_l2_fib_clear_table_t, 1)
vl_msg_name(vl_api_l2_fib_clear_table_reply_t, 1)
vl_msg_name(vl_api_l2fib_flush_all_t, 1)
vl_msg_name(vl_api_l2fib_flush_all_reply_t, 1)
vl_msg_name(vl_api_l2fib_flush_bd_t, 1)
vl_msg_name(vl_api_l2fib_flush_bd_reply_t, 1)
vl_msg_name(vl_api_l2fib_flush_int_t, 1)
vl_msg_name(vl_api_l2fib_flush_int_reply_t, 1)
vl_msg_name(vl_api_l2fib_add_del_t, 1)
vl_msg_name(vl_api_l2fib_add_del_reply_t, 1)
vl_msg_name(vl_api_want_l2_macs_events_t, 1)
vl_msg_name(vl_api_want_l2_macs_events_reply_t, 1)
vl_msg_name(vl_api_l2_macs_event_t, 1)
vl_msg_name(vl_api_l2_flags_t, 1)
vl_msg_name(vl_api_l2_flags_reply_t, 1)
vl_msg_name(vl_api_bridge_domain_set_mac_age_t, 1)
vl_msg_name(vl_api_bridge_domain_set_mac_age_reply_t, 1)
vl_msg_name(vl_api_bridge_domain_add_del_t, 1)
vl_msg_name(vl_api_bridge_domain_add_del_reply_t, 1)
vl_msg_name(vl_api_bridge_domain_dump_t, 1)
vl_msg_name(vl_api_bridge_domain_details_t, 1)
vl_msg_name(vl_api_bridge_flags_t, 1)
vl_msg_name(vl_api_bridge_flags_reply_t, 1)
vl_msg_name(vl_api_l2_interface_vlan_tag_rewrite_t, 1)
vl_msg_name(vl_api_l2_interface_vlan_tag_rewrite_reply_t, 1)
vl_msg_name(vl_api_l2_interface_pbb_tag_rewrite_t, 1)
vl_msg_name(vl_api_l2_interface_pbb_tag_rewrite_reply_t, 1)
vl_msg_name(vl_api_l2_patch_add_del_t, 1)
vl_msg_name(vl_api_l2_patch_add_del_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_l2_xconnect_t, 1)
vl_msg_name(vl_api_sw_interface_set_l2_xconnect_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_l2_bridge_t, 1)
vl_msg_name(vl_api_sw_interface_set_l2_bridge_reply_t, 1)
vl_msg_name(vl_api_bd_ip_mac_add_del_t, 1)
vl_msg_name(vl_api_bd_ip_mac_add_del_reply_t, 1)
vl_msg_name(vl_api_bd_ip_mac_flush_t, 1)
vl_msg_name(vl_api_bd_ip_mac_flush_reply_t, 1)
vl_msg_name(vl_api_bd_ip_mac_details_t, 1)
vl_msg_name(vl_api_bd_ip_mac_dump_t, 1)
vl_msg_name(vl_api_l2_interface_efp_filter_t, 1)
vl_msg_name(vl_api_l2_interface_efp_filter_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_vpath_t, 1)
vl_msg_name(vl_api_sw_interface_set_vpath_reply_t, 1)
vl_msg_name(vl_api_bvi_create_t, 1)
vl_msg_name(vl_api_bvi_create_reply_t, 1)
vl_msg_name(vl_api_bvi_delete_t, 1)
vl_msg_name(vl_api_bvi_delete_reply_t, 1)
vl_msg_name(vl_api_want_l2_arp_term_events_t, 1)
vl_msg_name(vl_api_want_l2_arp_term_events_reply_t, 1)
vl_msg_name(vl_api_l2_arp_term_event_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_l2 \
_(VL_API_L2_XCONNECT_DETAILS, l2_xconnect_details, c8aa6b37) \
_(VL_API_L2_XCONNECT_DUMP, l2_xconnect_dump, 51077d14) \
_(VL_API_L2_FIB_TABLE_DETAILS, l2_fib_table_details, e8d2fc72) \
_(VL_API_L2_FIB_TABLE_DUMP, l2_fib_table_dump, c25fdce6) \
_(VL_API_L2_FIB_CLEAR_TABLE, l2_fib_clear_table, 51077d14) \
_(VL_API_L2_FIB_CLEAR_TABLE_REPLY, l2_fib_clear_table_reply, e8d4e804) \
_(VL_API_L2FIB_FLUSH_ALL, l2fib_flush_all, 51077d14) \
_(VL_API_L2FIB_FLUSH_ALL_REPLY, l2fib_flush_all_reply, e8d4e804) \
_(VL_API_L2FIB_FLUSH_BD, l2fib_flush_bd, c25fdce6) \
_(VL_API_L2FIB_FLUSH_BD_REPLY, l2fib_flush_bd_reply, e8d4e804) \
_(VL_API_L2FIB_FLUSH_INT, l2fib_flush_int, f9e6675e) \
_(VL_API_L2FIB_FLUSH_INT_REPLY, l2fib_flush_int_reply, e8d4e804) \
_(VL_API_L2FIB_ADD_DEL, l2fib_add_del, f29d796c) \
_(VL_API_L2FIB_ADD_DEL_REPLY, l2fib_add_del_reply, e8d4e804) \
_(VL_API_WANT_L2_MACS_EVENTS, want_l2_macs_events, 9aabdfde) \
_(VL_API_WANT_L2_MACS_EVENTS_REPLY, want_l2_macs_events_reply, e8d4e804) \
_(VL_API_L2_MACS_EVENT, l2_macs_event, 2eadfc8b) \
_(VL_API_L2_FLAGS, l2_flags, fc41cfe8) \
_(VL_API_L2_FLAGS_REPLY, l2_flags_reply, 29b2a2b3) \
_(VL_API_BRIDGE_DOMAIN_SET_MAC_AGE, bridge_domain_set_mac_age, b537ad7b) \
_(VL_API_BRIDGE_DOMAIN_SET_MAC_AGE_REPLY, bridge_domain_set_mac_age_reply, e8d4e804) \
_(VL_API_BRIDGE_DOMAIN_ADD_DEL, bridge_domain_add_del, 600b7170) \
_(VL_API_BRIDGE_DOMAIN_ADD_DEL_REPLY, bridge_domain_add_del_reply, e8d4e804) \
_(VL_API_BRIDGE_DOMAIN_DUMP, bridge_domain_dump, 74396a43) \
_(VL_API_BRIDGE_DOMAIN_DETAILS, bridge_domain_details, 979f549d) \
_(VL_API_BRIDGE_FLAGS, bridge_flags, 1b0c5fbd) \
_(VL_API_BRIDGE_FLAGS_REPLY, bridge_flags_reply, 29b2a2b3) \
_(VL_API_L2_INTERFACE_VLAN_TAG_REWRITE, l2_interface_vlan_tag_rewrite, 62cc0bbc) \
_(VL_API_L2_INTERFACE_VLAN_TAG_REWRITE_REPLY, l2_interface_vlan_tag_rewrite_reply, e8d4e804) \
_(VL_API_L2_INTERFACE_PBB_TAG_REWRITE, l2_interface_pbb_tag_rewrite, 612efa5a) \
_(VL_API_L2_INTERFACE_PBB_TAG_REWRITE_REPLY, l2_interface_pbb_tag_rewrite_reply, e8d4e804) \
_(VL_API_L2_PATCH_ADD_DEL, l2_patch_add_del, 522f3445) \
_(VL_API_L2_PATCH_ADD_DEL_REPLY, l2_patch_add_del_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_L2_XCONNECT, sw_interface_set_l2_xconnect, 1aaa2dbb) \
_(VL_API_SW_INTERFACE_SET_L2_XCONNECT_REPLY, sw_interface_set_l2_xconnect_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_L2_BRIDGE, sw_interface_set_l2_bridge, 2e483cd0) \
_(VL_API_SW_INTERFACE_SET_L2_BRIDGE_REPLY, sw_interface_set_l2_bridge_reply, e8d4e804) \
_(VL_API_BD_IP_MAC_ADD_DEL, bd_ip_mac_add_del, 5f2b84e2) \
_(VL_API_BD_IP_MAC_ADD_DEL_REPLY, bd_ip_mac_add_del_reply, e8d4e804) \
_(VL_API_BD_IP_MAC_FLUSH, bd_ip_mac_flush, c25fdce6) \
_(VL_API_BD_IP_MAC_FLUSH_REPLY, bd_ip_mac_flush_reply, e8d4e804) \
_(VL_API_BD_IP_MAC_DETAILS, bd_ip_mac_details, a52f8044) \
_(VL_API_BD_IP_MAC_DUMP, bd_ip_mac_dump, c25fdce6) \
_(VL_API_L2_INTERFACE_EFP_FILTER, l2_interface_efp_filter, 5501adee) \
_(VL_API_L2_INTERFACE_EFP_FILTER_REPLY, l2_interface_efp_filter_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_VPATH, sw_interface_set_vpath, ae6cfcfb) \
_(VL_API_SW_INTERFACE_SET_VPATH_REPLY, sw_interface_set_vpath_reply, e8d4e804) \
_(VL_API_BVI_CREATE, bvi_create, f5398559) \
_(VL_API_BVI_CREATE_REPLY, bvi_create_reply, 5383d31f) \
_(VL_API_BVI_DELETE, bvi_delete, f9e6675e) \
_(VL_API_BVI_DELETE_REPLY, bvi_delete_reply, e8d4e804) \
_(VL_API_WANT_L2_ARP_TERM_EVENTS, want_l2_arp_term_events, 3ec6d6c2) \
_(VL_API_WANT_L2_ARP_TERM_EVENTS_REPLY, want_l2_arp_term_events_reply, e8d4e804) \
_(VL_API_L2_ARP_TERM_EVENT, l2_arp_term_event, 85ff71ea) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "l2.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_l2_printfun_types
#define included_l2_printfun_types

static inline u8 *format_vl_api_mac_event_action_t (u8 *s, va_list * args)
{
    vl_api_mac_event_action_t *a = va_arg (*args, vl_api_mac_event_action_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "MAC_EVENT_ACTION_API_ADD");
    case 1:
        return format(s, "MAC_EVENT_ACTION_API_DELETE");
    case 2:
        return format(s, "MAC_EVENT_ACTION_API_MOVE");
    }
    return s;
}

static inline u8 *format_vl_api_mac_entry_t (u8 *s, va_list * args)
{
    vl_api_mac_entry_t *a = va_arg (*args, vl_api_mac_entry_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Umac_addr: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac_addr, indent);
    s = format(s, "\n%Uaction: %U", format_white_space, indent, format_vl_api_mac_event_action_t, &a->action, indent);
    s = format(s, "\n%Uflags: %u", format_white_space, indent, a->flags);
    return s;
}

static inline u8 *format_vl_api_bridge_domain_sw_if_t (u8 *s, va_list * args)
{
    vl_api_bridge_domain_sw_if_t *a = va_arg (*args, vl_api_bridge_domain_sw_if_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ushg: %u", format_white_space, indent, a->shg);
    return s;
}

static inline u8 *format_vl_api_bd_flags_t (u8 *s, va_list * args)
{
    vl_api_bd_flags_t *a = va_arg (*args, vl_api_bd_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "BRIDGE_API_FLAG_NONE");
    case 1:
        return format(s, "BRIDGE_API_FLAG_LEARN");
    case 2:
        return format(s, "BRIDGE_API_FLAG_FWD");
    case 4:
        return format(s, "BRIDGE_API_FLAG_FLOOD");
    case 8:
        return format(s, "BRIDGE_API_FLAG_UU_FLOOD");
    case 16:
        return format(s, "BRIDGE_API_FLAG_ARP_TERM");
    case 32:
        return format(s, "BRIDGE_API_FLAG_ARP_UFWD");
    }
    return s;
}

static inline u8 *format_vl_api_l2_port_type_t (u8 *s, va_list * args)
{
    vl_api_l2_port_type_t *a = va_arg (*args, vl_api_l2_port_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "L2_API_PORT_TYPE_NORMAL");
    case 1:
        return format(s, "L2_API_PORT_TYPE_BVI");
    case 2:
        return format(s, "L2_API_PORT_TYPE_UU_FWD");
    }
    return s;
}

static inline u8 *format_vl_api_bd_ip_mac_t (u8 *s, va_list * args)
{
    vl_api_bd_ip_mac_t *a = va_arg (*args, vl_api_bd_ip_mac_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    s = format(s, "\n%Uip: %U", format_white_space, indent, format_vl_api_address_t, &a->ip, indent);
    s = format(s, "\n%Umac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac, indent);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_l2_printfun
#define included_l2_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_l2_xconnect_details_t_print (vl_api_l2_xconnect_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_xconnect_details_t: */
    s = format(s, "vl_api_l2_xconnect_details_t:");
    s = format(s, "\n%Urx_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->rx_sw_if_index, indent);
    s = format(s, "\n%Utx_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->tx_sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_xconnect_dump_t_print (vl_api_l2_xconnect_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_xconnect_dump_t: */
    s = format(s, "vl_api_l2_xconnect_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_fib_table_details_t_print (vl_api_l2_fib_table_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_fib_table_details_t: */
    s = format(s, "vl_api_l2_fib_table_details_t:");
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    s = format(s, "\n%Umac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ustatic_mac: %u", format_white_space, indent, a->static_mac);
    s = format(s, "\n%Ufilter_mac: %u", format_white_space, indent, a->filter_mac);
    s = format(s, "\n%Ubvi_mac: %u", format_white_space, indent, a->bvi_mac);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_fib_table_dump_t_print (vl_api_l2_fib_table_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_fib_table_dump_t: */
    s = format(s, "vl_api_l2_fib_table_dump_t:");
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_fib_clear_table_t_print (vl_api_l2_fib_clear_table_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_fib_clear_table_t: */
    s = format(s, "vl_api_l2_fib_clear_table_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_fib_clear_table_reply_t_print (vl_api_l2_fib_clear_table_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_fib_clear_table_reply_t: */
    s = format(s, "vl_api_l2_fib_clear_table_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2fib_flush_all_t_print (vl_api_l2fib_flush_all_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2fib_flush_all_t: */
    s = format(s, "vl_api_l2fib_flush_all_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2fib_flush_all_reply_t_print (vl_api_l2fib_flush_all_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2fib_flush_all_reply_t: */
    s = format(s, "vl_api_l2fib_flush_all_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2fib_flush_bd_t_print (vl_api_l2fib_flush_bd_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2fib_flush_bd_t: */
    s = format(s, "vl_api_l2fib_flush_bd_t:");
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2fib_flush_bd_reply_t_print (vl_api_l2fib_flush_bd_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2fib_flush_bd_reply_t: */
    s = format(s, "vl_api_l2fib_flush_bd_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2fib_flush_int_t_print (vl_api_l2fib_flush_int_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2fib_flush_int_t: */
    s = format(s, "vl_api_l2fib_flush_int_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2fib_flush_int_reply_t_print (vl_api_l2fib_flush_int_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2fib_flush_int_reply_t: */
    s = format(s, "vl_api_l2fib_flush_int_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2fib_add_del_t_print (vl_api_l2fib_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2fib_add_del_t: */
    s = format(s, "vl_api_l2fib_add_del_t:");
    s = format(s, "\n%Umac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac, indent);
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Ustatic_mac: %u", format_white_space, indent, a->static_mac);
    s = format(s, "\n%Ufilter_mac: %u", format_white_space, indent, a->filter_mac);
    s = format(s, "\n%Ubvi_mac: %u", format_white_space, indent, a->bvi_mac);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2fib_add_del_reply_t_print (vl_api_l2fib_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2fib_add_del_reply_t: */
    s = format(s, "vl_api_l2fib_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_l2_macs_events_t_print (vl_api_want_l2_macs_events_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_l2_macs_events_t: */
    s = format(s, "vl_api_want_l2_macs_events_t:");
    s = format(s, "\n%Ulearn_limit: %u", format_white_space, indent, a->learn_limit);
    s = format(s, "\n%Uscan_delay: %u", format_white_space, indent, a->scan_delay);
    s = format(s, "\n%Umax_macs_in_event: %u", format_white_space, indent, a->max_macs_in_event);
    s = format(s, "\n%Uenable_disable: %u", format_white_space, indent, a->enable_disable);
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_l2_macs_events_reply_t_print (vl_api_want_l2_macs_events_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_l2_macs_events_reply_t: */
    s = format(s, "vl_api_want_l2_macs_events_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_macs_event_t_print (vl_api_l2_macs_event_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_macs_event_t: */
    s = format(s, "vl_api_l2_macs_event_t:");
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    s = format(s, "\n%Un_macs: %u", format_white_space, indent, a->n_macs);
    for (i = 0; i < a->n_macs; i++) {
        s = format(s, "\n%Umac: %U",
                   format_white_space, indent, format_vl_api_mac_entry_t, &a->mac[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_flags_t_print (vl_api_l2_flags_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_flags_t: */
    s = format(s, "vl_api_l2_flags_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_set: %u", format_white_space, indent, a->is_set);
    s = format(s, "\n%Ufeature_bitmap: %u", format_white_space, indent, a->feature_bitmap);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_flags_reply_t_print (vl_api_l2_flags_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_flags_reply_t: */
    s = format(s, "vl_api_l2_flags_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uresulting_feature_bitmap: %u", format_white_space, indent, a->resulting_feature_bitmap);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bridge_domain_set_mac_age_t_print (vl_api_bridge_domain_set_mac_age_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bridge_domain_set_mac_age_t: */
    s = format(s, "vl_api_bridge_domain_set_mac_age_t:");
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    s = format(s, "\n%Umac_age: %u", format_white_space, indent, a->mac_age);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bridge_domain_set_mac_age_reply_t_print (vl_api_bridge_domain_set_mac_age_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bridge_domain_set_mac_age_reply_t: */
    s = format(s, "vl_api_bridge_domain_set_mac_age_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bridge_domain_add_del_t_print (vl_api_bridge_domain_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bridge_domain_add_del_t: */
    s = format(s, "vl_api_bridge_domain_add_del_t:");
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    s = format(s, "\n%Uflood: %u", format_white_space, indent, a->flood);
    s = format(s, "\n%Uuu_flood: %u", format_white_space, indent, a->uu_flood);
    s = format(s, "\n%Uforward: %u", format_white_space, indent, a->forward);
    s = format(s, "\n%Ulearn: %u", format_white_space, indent, a->learn);
    s = format(s, "\n%Uarp_term: %u", format_white_space, indent, a->arp_term);
    s = format(s, "\n%Uarp_ufwd: %u", format_white_space, indent, a->arp_ufwd);
    s = format(s, "\n%Umac_age: %u", format_white_space, indent, a->mac_age);
    s = format(s, "\n%Ubd_tag: %s", format_white_space, indent, a->bd_tag);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bridge_domain_add_del_reply_t_print (vl_api_bridge_domain_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bridge_domain_add_del_reply_t: */
    s = format(s, "vl_api_bridge_domain_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bridge_domain_dump_t_print (vl_api_bridge_domain_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bridge_domain_dump_t: */
    s = format(s, "vl_api_bridge_domain_dump_t:");
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_bridge_domain_details_t_print  *****/

static inline void *vl_api_bridge_flags_t_print (vl_api_bridge_flags_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bridge_flags_t: */
    s = format(s, "vl_api_bridge_flags_t:");
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    s = format(s, "\n%Uis_set: %u", format_white_space, indent, a->is_set);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_bd_flags_t, &a->flags, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bridge_flags_reply_t_print (vl_api_bridge_flags_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bridge_flags_reply_t: */
    s = format(s, "vl_api_bridge_flags_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uresulting_feature_bitmap: %u", format_white_space, indent, a->resulting_feature_bitmap);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_interface_vlan_tag_rewrite_t_print (vl_api_l2_interface_vlan_tag_rewrite_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_interface_vlan_tag_rewrite_t: */
    s = format(s, "vl_api_l2_interface_vlan_tag_rewrite_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvtr_op: %u", format_white_space, indent, a->vtr_op);
    s = format(s, "\n%Upush_dot1q: %u", format_white_space, indent, a->push_dot1q);
    s = format(s, "\n%Utag1: %u", format_white_space, indent, a->tag1);
    s = format(s, "\n%Utag2: %u", format_white_space, indent, a->tag2);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_interface_vlan_tag_rewrite_reply_t_print (vl_api_l2_interface_vlan_tag_rewrite_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_interface_vlan_tag_rewrite_reply_t: */
    s = format(s, "vl_api_l2_interface_vlan_tag_rewrite_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_interface_pbb_tag_rewrite_t_print (vl_api_l2_interface_pbb_tag_rewrite_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_interface_pbb_tag_rewrite_t: */
    s = format(s, "vl_api_l2_interface_pbb_tag_rewrite_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvtr_op: %u", format_white_space, indent, a->vtr_op);
    s = format(s, "\n%Uouter_tag: %u", format_white_space, indent, a->outer_tag);
    s = format(s, "\n%Ub_dmac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->b_dmac, indent);
    s = format(s, "\n%Ub_smac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->b_smac, indent);
    s = format(s, "\n%Ub_vlanid: %u", format_white_space, indent, a->b_vlanid);
    s = format(s, "\n%Ui_sid: %u", format_white_space, indent, a->i_sid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_interface_pbb_tag_rewrite_reply_t_print (vl_api_l2_interface_pbb_tag_rewrite_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_interface_pbb_tag_rewrite_reply_t: */
    s = format(s, "vl_api_l2_interface_pbb_tag_rewrite_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_patch_add_del_t_print (vl_api_l2_patch_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_patch_add_del_t: */
    s = format(s, "vl_api_l2_patch_add_del_t:");
    s = format(s, "\n%Urx_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->rx_sw_if_index, indent);
    s = format(s, "\n%Utx_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->tx_sw_if_index, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_patch_add_del_reply_t_print (vl_api_l2_patch_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_patch_add_del_reply_t: */
    s = format(s, "vl_api_l2_patch_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_l2_xconnect_t_print (vl_api_sw_interface_set_l2_xconnect_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_l2_xconnect_t: */
    s = format(s, "vl_api_sw_interface_set_l2_xconnect_t:");
    s = format(s, "\n%Urx_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->rx_sw_if_index, indent);
    s = format(s, "\n%Utx_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->tx_sw_if_index, indent);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_l2_xconnect_reply_t_print (vl_api_sw_interface_set_l2_xconnect_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_l2_xconnect_reply_t: */
    s = format(s, "vl_api_sw_interface_set_l2_xconnect_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_l2_bridge_t_print (vl_api_sw_interface_set_l2_bridge_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_l2_bridge_t: */
    s = format(s, "vl_api_sw_interface_set_l2_bridge_t:");
    s = format(s, "\n%Urx_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->rx_sw_if_index, indent);
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    s = format(s, "\n%Uport_type: %U", format_white_space, indent, format_vl_api_l2_port_type_t, &a->port_type, indent);
    s = format(s, "\n%Ushg: %u", format_white_space, indent, a->shg);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_l2_bridge_reply_t_print (vl_api_sw_interface_set_l2_bridge_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_l2_bridge_reply_t: */
    s = format(s, "vl_api_sw_interface_set_l2_bridge_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bd_ip_mac_add_del_t_print (vl_api_bd_ip_mac_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bd_ip_mac_add_del_t: */
    s = format(s, "vl_api_bd_ip_mac_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uentry: %U", format_white_space, indent, format_vl_api_bd_ip_mac_t, &a->entry, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bd_ip_mac_add_del_reply_t_print (vl_api_bd_ip_mac_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bd_ip_mac_add_del_reply_t: */
    s = format(s, "vl_api_bd_ip_mac_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bd_ip_mac_flush_t_print (vl_api_bd_ip_mac_flush_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bd_ip_mac_flush_t: */
    s = format(s, "vl_api_bd_ip_mac_flush_t:");
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bd_ip_mac_flush_reply_t_print (vl_api_bd_ip_mac_flush_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bd_ip_mac_flush_reply_t: */
    s = format(s, "vl_api_bd_ip_mac_flush_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bd_ip_mac_details_t_print (vl_api_bd_ip_mac_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bd_ip_mac_details_t: */
    s = format(s, "vl_api_bd_ip_mac_details_t:");
    s = format(s, "\n%Uentry: %U", format_white_space, indent, format_vl_api_bd_ip_mac_t, &a->entry, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bd_ip_mac_dump_t_print (vl_api_bd_ip_mac_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bd_ip_mac_dump_t: */
    s = format(s, "vl_api_bd_ip_mac_dump_t:");
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_interface_efp_filter_t_print (vl_api_l2_interface_efp_filter_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_interface_efp_filter_t: */
    s = format(s, "vl_api_l2_interface_efp_filter_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uenable_disable: %u", format_white_space, indent, a->enable_disable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_interface_efp_filter_reply_t_print (vl_api_l2_interface_efp_filter_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_interface_efp_filter_reply_t: */
    s = format(s, "vl_api_l2_interface_efp_filter_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_vpath_t_print (vl_api_sw_interface_set_vpath_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_vpath_t: */
    s = format(s, "vl_api_sw_interface_set_vpath_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_set_vpath_reply_t_print (vl_api_sw_interface_set_vpath_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_set_vpath_reply_t: */
    s = format(s, "vl_api_sw_interface_set_vpath_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bvi_create_t_print (vl_api_bvi_create_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bvi_create_t: */
    s = format(s, "vl_api_bvi_create_t:");
    s = format(s, "\n%Umac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac, indent);
    s = format(s, "\n%Uuser_instance: %u", format_white_space, indent, a->user_instance);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bvi_create_reply_t_print (vl_api_bvi_create_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bvi_create_reply_t: */
    s = format(s, "vl_api_bvi_create_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bvi_delete_t_print (vl_api_bvi_delete_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bvi_delete_t: */
    s = format(s, "vl_api_bvi_delete_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bvi_delete_reply_t_print (vl_api_bvi_delete_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bvi_delete_reply_t: */
    s = format(s, "vl_api_bvi_delete_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_l2_arp_term_events_t_print (vl_api_want_l2_arp_term_events_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_l2_arp_term_events_t: */
    s = format(s, "vl_api_want_l2_arp_term_events_t:");
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_l2_arp_term_events_reply_t_print (vl_api_want_l2_arp_term_events_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_l2_arp_term_events_reply_t: */
    s = format(s, "vl_api_want_l2_arp_term_events_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_l2_arp_term_event_t_print (vl_api_l2_arp_term_event_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_l2_arp_term_event_t: */
    s = format(s, "vl_api_l2_arp_term_event_t:");
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    s = format(s, "\n%Uip: %U", format_white_space, indent, format_vl_api_address_t, &a->ip, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Umac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_l2_endianfun
#define included_l2_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_mac_event_action_t_endian (vl_api_mac_event_action_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_mac_entry_t_endian (vl_api_mac_entry_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_mac_address_t_endian(&a->mac_addr);
    vl_api_mac_event_action_t_endian(&a->action);
    /* a->flags = a->flags (no-op) */
}

static inline void vl_api_bridge_domain_sw_if_t_endian (vl_api_bridge_domain_sw_if_t *a)
{
    int i __attribute__((unused));
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->shg = a->shg (no-op) */
}

static inline void vl_api_bd_flags_t_endian (vl_api_bd_flags_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_l2_port_type_t_endian (vl_api_l2_port_type_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_bd_ip_mac_t_endian (vl_api_bd_ip_mac_t *a)
{
    int i __attribute__((unused));
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    vl_api_address_t_endian(&a->ip);
    vl_api_mac_address_t_endian(&a->mac);
}

static inline void vl_api_l2_xconnect_details_t_endian (vl_api_l2_xconnect_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->rx_sw_if_index);
    vl_api_interface_index_t_endian(&a->tx_sw_if_index);
}

static inline void vl_api_l2_xconnect_dump_t_endian (vl_api_l2_xconnect_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_l2_fib_table_details_t_endian (vl_api_l2_fib_table_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    vl_api_mac_address_t_endian(&a->mac);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->static_mac = a->static_mac (no-op) */
    /* a->filter_mac = a->filter_mac (no-op) */
    /* a->bvi_mac = a->bvi_mac (no-op) */
}

static inline void vl_api_l2_fib_table_dump_t_endian (vl_api_l2_fib_table_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
}

static inline void vl_api_l2_fib_clear_table_t_endian (vl_api_l2_fib_clear_table_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_l2_fib_clear_table_reply_t_endian (vl_api_l2_fib_clear_table_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_l2fib_flush_all_t_endian (vl_api_l2fib_flush_all_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_l2fib_flush_all_reply_t_endian (vl_api_l2fib_flush_all_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_l2fib_flush_bd_t_endian (vl_api_l2fib_flush_bd_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
}

static inline void vl_api_l2fib_flush_bd_reply_t_endian (vl_api_l2fib_flush_bd_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_l2fib_flush_int_t_endian (vl_api_l2fib_flush_int_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_l2fib_flush_int_reply_t_endian (vl_api_l2fib_flush_int_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_l2fib_add_del_t_endian (vl_api_l2fib_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_mac_address_t_endian(&a->mac);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_add = a->is_add (no-op) */
    /* a->static_mac = a->static_mac (no-op) */
    /* a->filter_mac = a->filter_mac (no-op) */
    /* a->bvi_mac = a->bvi_mac (no-op) */
}

static inline void vl_api_l2fib_add_del_reply_t_endian (vl_api_l2fib_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_want_l2_macs_events_t_endian (vl_api_want_l2_macs_events_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->learn_limit = clib_net_to_host_u32(a->learn_limit);
    /* a->scan_delay = a->scan_delay (no-op) */
    /* a->max_macs_in_event = a->max_macs_in_event (no-op) */
    /* a->enable_disable = a->enable_disable (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

static inline void vl_api_want_l2_macs_events_reply_t_endian (vl_api_want_l2_macs_events_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_l2_macs_event_t_endian (vl_api_l2_macs_event_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
    a->n_macs = clib_net_to_host_u32(a->n_macs);
    for (i = 0; i < a->n_macs; i++) {
        vl_api_mac_entry_t_endian(&a->mac[i]);
    }
}

static inline void vl_api_l2_flags_t_endian (vl_api_l2_flags_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_set = a->is_set (no-op) */
    a->feature_bitmap = clib_net_to_host_u32(a->feature_bitmap);
}

static inline void vl_api_l2_flags_reply_t_endian (vl_api_l2_flags_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->resulting_feature_bitmap = clib_net_to_host_u32(a->resulting_feature_bitmap);
}

static inline void vl_api_bridge_domain_set_mac_age_t_endian (vl_api_bridge_domain_set_mac_age_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    /* a->mac_age = a->mac_age (no-op) */
}

static inline void vl_api_bridge_domain_set_mac_age_reply_t_endian (vl_api_bridge_domain_set_mac_age_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bridge_domain_add_del_t_endian (vl_api_bridge_domain_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    /* a->flood = a->flood (no-op) */
    /* a->uu_flood = a->uu_flood (no-op) */
    /* a->forward = a->forward (no-op) */
    /* a->learn = a->learn (no-op) */
    /* a->arp_term = a->arp_term (no-op) */
    /* a->arp_ufwd = a->arp_ufwd (no-op) */
    /* a->mac_age = a->mac_age (no-op) */
    /* a->bd_tag = a->bd_tag (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_bridge_domain_add_del_reply_t_endian (vl_api_bridge_domain_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bridge_domain_dump_t_endian (vl_api_bridge_domain_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

/***** manual: vl_api_bridge_domain_details_t_endian  *****/

static inline void vl_api_bridge_flags_t_endian (vl_api_bridge_flags_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    /* a->is_set = a->is_set (no-op) */
    vl_api_bd_flags_t_endian(&a->flags);
}

static inline void vl_api_bridge_flags_reply_t_endian (vl_api_bridge_flags_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->resulting_feature_bitmap = clib_net_to_host_u32(a->resulting_feature_bitmap);
}

static inline void vl_api_l2_interface_vlan_tag_rewrite_t_endian (vl_api_l2_interface_vlan_tag_rewrite_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->vtr_op = clib_net_to_host_u32(a->vtr_op);
    a->push_dot1q = clib_net_to_host_u32(a->push_dot1q);
    a->tag1 = clib_net_to_host_u32(a->tag1);
    a->tag2 = clib_net_to_host_u32(a->tag2);
}

static inline void vl_api_l2_interface_vlan_tag_rewrite_reply_t_endian (vl_api_l2_interface_vlan_tag_rewrite_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_l2_interface_pbb_tag_rewrite_t_endian (vl_api_l2_interface_pbb_tag_rewrite_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->vtr_op = clib_net_to_host_u32(a->vtr_op);
    a->outer_tag = clib_net_to_host_u16(a->outer_tag);
    vl_api_mac_address_t_endian(&a->b_dmac);
    vl_api_mac_address_t_endian(&a->b_smac);
    a->b_vlanid = clib_net_to_host_u16(a->b_vlanid);
    a->i_sid = clib_net_to_host_u32(a->i_sid);
}

static inline void vl_api_l2_interface_pbb_tag_rewrite_reply_t_endian (vl_api_l2_interface_pbb_tag_rewrite_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_l2_patch_add_del_t_endian (vl_api_l2_patch_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->rx_sw_if_index);
    vl_api_interface_index_t_endian(&a->tx_sw_if_index);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_l2_patch_add_del_reply_t_endian (vl_api_l2_patch_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_set_l2_xconnect_t_endian (vl_api_sw_interface_set_l2_xconnect_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->rx_sw_if_index);
    vl_api_interface_index_t_endian(&a->tx_sw_if_index);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_sw_interface_set_l2_xconnect_reply_t_endian (vl_api_sw_interface_set_l2_xconnect_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_set_l2_bridge_t_endian (vl_api_sw_interface_set_l2_bridge_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->rx_sw_if_index);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    vl_api_l2_port_type_t_endian(&a->port_type);
    /* a->shg = a->shg (no-op) */
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_sw_interface_set_l2_bridge_reply_t_endian (vl_api_sw_interface_set_l2_bridge_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bd_ip_mac_add_del_t_endian (vl_api_bd_ip_mac_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_bd_ip_mac_t_endian(&a->entry);
}

static inline void vl_api_bd_ip_mac_add_del_reply_t_endian (vl_api_bd_ip_mac_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bd_ip_mac_flush_t_endian (vl_api_bd_ip_mac_flush_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
}

static inline void vl_api_bd_ip_mac_flush_reply_t_endian (vl_api_bd_ip_mac_flush_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bd_ip_mac_details_t_endian (vl_api_bd_ip_mac_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_bd_ip_mac_t_endian(&a->entry);
}

static inline void vl_api_bd_ip_mac_dump_t_endian (vl_api_bd_ip_mac_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
}

static inline void vl_api_l2_interface_efp_filter_t_endian (vl_api_l2_interface_efp_filter_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->enable_disable = a->enable_disable (no-op) */
}

static inline void vl_api_l2_interface_efp_filter_reply_t_endian (vl_api_l2_interface_efp_filter_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_set_vpath_t_endian (vl_api_sw_interface_set_vpath_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_sw_interface_set_vpath_reply_t_endian (vl_api_sw_interface_set_vpath_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bvi_create_t_endian (vl_api_bvi_create_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_mac_address_t_endian(&a->mac);
    a->user_instance = clib_net_to_host_u32(a->user_instance);
}

static inline void vl_api_bvi_create_reply_t_endian (vl_api_bvi_create_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_bvi_delete_t_endian (vl_api_bvi_delete_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_bvi_delete_reply_t_endian (vl_api_bvi_delete_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_want_l2_arp_term_events_t_endian (vl_api_want_l2_arp_term_events_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

static inline void vl_api_want_l2_arp_term_events_reply_t_endian (vl_api_want_l2_arp_term_events_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_l2_arp_term_event_t_endian (vl_api_l2_arp_term_event_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
    vl_api_address_t_endian(&a->ip);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_mac_address_t_endian(&a->mac);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(l2.api, 3, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(l2.api, 0xe0a6bf03)

#endif

