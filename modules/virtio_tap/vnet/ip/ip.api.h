/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: ip.api
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
#warning no content included from ip.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/fib/fib_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#include <vnet/mfib/mfib_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_IP_TABLE_ADD_DEL, vl_api_ip_table_add_del_t_handler)
vl_msg_id(VL_API_IP_TABLE_ADD_DEL_REPLY, vl_api_ip_table_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_TABLE_DUMP, vl_api_ip_table_dump_t_handler)
vl_msg_id(VL_API_IP_TABLE_REPLACE_BEGIN, vl_api_ip_table_replace_begin_t_handler)
vl_msg_id(VL_API_IP_TABLE_REPLACE_BEGIN_REPLY, vl_api_ip_table_replace_begin_reply_t_handler)
vl_msg_id(VL_API_IP_TABLE_REPLACE_END, vl_api_ip_table_replace_end_t_handler)
vl_msg_id(VL_API_IP_TABLE_REPLACE_END_REPLY, vl_api_ip_table_replace_end_reply_t_handler)
vl_msg_id(VL_API_IP_TABLE_FLUSH, vl_api_ip_table_flush_t_handler)
vl_msg_id(VL_API_IP_TABLE_FLUSH_REPLY, vl_api_ip_table_flush_reply_t_handler)
vl_msg_id(VL_API_IP_TABLE_DETAILS, vl_api_ip_table_details_t_handler)
vl_msg_id(VL_API_IP_ROUTE_ADD_DEL, vl_api_ip_route_add_del_t_handler)
vl_msg_id(VL_API_IP_ROUTE_ADD_DEL_REPLY, vl_api_ip_route_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_ROUTE_DUMP, vl_api_ip_route_dump_t_handler)
vl_msg_id(VL_API_IP_ROUTE_DETAILS, vl_api_ip_route_details_t_handler)
vl_msg_id(VL_API_IP_ROUTE_LOOKUP, vl_api_ip_route_lookup_t_handler)
vl_msg_id(VL_API_IP_ROUTE_LOOKUP_REPLY, vl_api_ip_route_lookup_reply_t_handler)
vl_msg_id(VL_API_SET_IP_FLOW_HASH, vl_api_set_ip_flow_hash_t_handler)
vl_msg_id(VL_API_SET_IP_FLOW_HASH_REPLY, vl_api_set_ip_flow_hash_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6_ENABLE_DISABLE, vl_api_sw_interface_ip6_enable_disable_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6_ENABLE_DISABLE_REPLY, vl_api_sw_interface_ip6_enable_disable_reply_t_handler)
vl_msg_id(VL_API_IP_MTABLE_DUMP, vl_api_ip_mtable_dump_t_handler)
vl_msg_id(VL_API_IP_MTABLE_DETAILS, vl_api_ip_mtable_details_t_handler)
vl_msg_id(VL_API_IP_MROUTE_ADD_DEL, vl_api_ip_mroute_add_del_t_handler)
vl_msg_id(VL_API_IP_MROUTE_ADD_DEL_REPLY, vl_api_ip_mroute_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_MROUTE_DUMP, vl_api_ip_mroute_dump_t_handler)
vl_msg_id(VL_API_IP_MROUTE_DETAILS, vl_api_ip_mroute_details_t_handler)
vl_msg_id(VL_API_IP_ADDRESS_DETAILS, vl_api_ip_address_details_t_handler)
vl_msg_id(VL_API_IP_ADDRESS_DUMP, vl_api_ip_address_dump_t_handler)
vl_msg_id(VL_API_IP_UNNUMBERED_DETAILS, vl_api_ip_unnumbered_details_t_handler)
vl_msg_id(VL_API_IP_UNNUMBERED_DUMP, vl_api_ip_unnumbered_dump_t_handler)
vl_msg_id(VL_API_IP_DETAILS, vl_api_ip_details_t_handler)
vl_msg_id(VL_API_IP_DUMP, vl_api_ip_dump_t_handler)
vl_msg_id(VL_API_MFIB_SIGNAL_DUMP, vl_api_mfib_signal_dump_t_handler)
vl_msg_id(VL_API_MFIB_SIGNAL_DETAILS, vl_api_mfib_signal_details_t_handler)
vl_msg_id(VL_API_IP_PUNT_POLICE, vl_api_ip_punt_police_t_handler)
vl_msg_id(VL_API_IP_PUNT_POLICE_REPLY, vl_api_ip_punt_police_reply_t_handler)
vl_msg_id(VL_API_IP_PUNT_REDIRECT, vl_api_ip_punt_redirect_t_handler)
vl_msg_id(VL_API_IP_PUNT_REDIRECT_REPLY, vl_api_ip_punt_redirect_reply_t_handler)
vl_msg_id(VL_API_IP_PUNT_REDIRECT_DUMP, vl_api_ip_punt_redirect_dump_t_handler)
vl_msg_id(VL_API_IP_PUNT_REDIRECT_DETAILS, vl_api_ip_punt_redirect_details_t_handler)
vl_msg_id(VL_API_IP_CONTAINER_PROXY_ADD_DEL, vl_api_ip_container_proxy_add_del_t_handler)
vl_msg_id(VL_API_IP_CONTAINER_PROXY_ADD_DEL_REPLY, vl_api_ip_container_proxy_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_CONTAINER_PROXY_DUMP, vl_api_ip_container_proxy_dump_t_handler)
vl_msg_id(VL_API_IP_CONTAINER_PROXY_DETAILS, vl_api_ip_container_proxy_details_t_handler)
vl_msg_id(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_ADD_DEL, vl_api_ip_source_and_port_range_check_add_del_t_handler)
vl_msg_id(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_ADD_DEL_REPLY, vl_api_ip_source_and_port_range_check_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_INTERFACE_ADD_DEL, vl_api_ip_source_and_port_range_check_interface_add_del_t_handler)
vl_msg_id(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_INTERFACE_ADD_DEL_REPLY, vl_api_ip_source_and_port_range_check_interface_add_del_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6_SET_LINK_LOCAL_ADDRESS, vl_api_sw_interface_ip6_set_link_local_address_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6_SET_LINK_LOCAL_ADDRESS_REPLY, vl_api_sw_interface_ip6_set_link_local_address_reply_t_handler)
vl_msg_id(VL_API_IOAM_ENABLE, vl_api_ioam_enable_t_handler)
vl_msg_id(VL_API_IOAM_ENABLE_REPLY, vl_api_ioam_enable_reply_t_handler)
vl_msg_id(VL_API_IOAM_DISABLE, vl_api_ioam_disable_t_handler)
vl_msg_id(VL_API_IOAM_DISABLE_REPLY, vl_api_ioam_disable_reply_t_handler)
vl_msg_id(VL_API_IP_REASSEMBLY_SET, vl_api_ip_reassembly_set_t_handler)
vl_msg_id(VL_API_IP_REASSEMBLY_SET_REPLY, vl_api_ip_reassembly_set_reply_t_handler)
vl_msg_id(VL_API_IP_REASSEMBLY_GET, vl_api_ip_reassembly_get_t_handler)
vl_msg_id(VL_API_IP_REASSEMBLY_GET_REPLY, vl_api_ip_reassembly_get_reply_t_handler)
vl_msg_id(VL_API_IP_REASSEMBLY_ENABLE_DISABLE, vl_api_ip_reassembly_enable_disable_t_handler)
vl_msg_id(VL_API_IP_REASSEMBLY_ENABLE_DISABLE_REPLY, vl_api_ip_reassembly_enable_disable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_ip_table_add_del_t, 1)
vl_msg_name(vl_api_ip_table_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_table_dump_t, 1)
vl_msg_name(vl_api_ip_table_replace_begin_t, 1)
vl_msg_name(vl_api_ip_table_replace_begin_reply_t, 1)
vl_msg_name(vl_api_ip_table_replace_end_t, 1)
vl_msg_name(vl_api_ip_table_replace_end_reply_t, 1)
vl_msg_name(vl_api_ip_table_flush_t, 1)
vl_msg_name(vl_api_ip_table_flush_reply_t, 1)
vl_msg_name(vl_api_ip_table_details_t, 1)
vl_msg_name(vl_api_ip_route_add_del_t, 1)
vl_msg_name(vl_api_ip_route_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_route_dump_t, 1)
vl_msg_name(vl_api_ip_route_details_t, 1)
vl_msg_name(vl_api_ip_route_lookup_t, 1)
vl_msg_name(vl_api_ip_route_lookup_reply_t, 1)
vl_msg_name(vl_api_set_ip_flow_hash_t, 1)
vl_msg_name(vl_api_set_ip_flow_hash_reply_t, 1)
vl_msg_name(vl_api_sw_interface_ip6_enable_disable_t, 1)
vl_msg_name(vl_api_sw_interface_ip6_enable_disable_reply_t, 1)
vl_msg_name(vl_api_ip_mtable_dump_t, 1)
vl_msg_name(vl_api_ip_mtable_details_t, 1)
vl_msg_name(vl_api_ip_mroute_add_del_t, 1)
vl_msg_name(vl_api_ip_mroute_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_mroute_dump_t, 1)
vl_msg_name(vl_api_ip_mroute_details_t, 1)
vl_msg_name(vl_api_ip_address_details_t, 1)
vl_msg_name(vl_api_ip_address_dump_t, 1)
vl_msg_name(vl_api_ip_unnumbered_details_t, 1)
vl_msg_name(vl_api_ip_unnumbered_dump_t, 1)
vl_msg_name(vl_api_ip_details_t, 1)
vl_msg_name(vl_api_ip_dump_t, 1)
vl_msg_name(vl_api_mfib_signal_dump_t, 1)
vl_msg_name(vl_api_mfib_signal_details_t, 1)
vl_msg_name(vl_api_ip_punt_police_t, 1)
vl_msg_name(vl_api_ip_punt_police_reply_t, 1)
vl_msg_name(vl_api_ip_punt_redirect_t, 1)
vl_msg_name(vl_api_ip_punt_redirect_reply_t, 1)
vl_msg_name(vl_api_ip_punt_redirect_dump_t, 1)
vl_msg_name(vl_api_ip_punt_redirect_details_t, 1)
vl_msg_name(vl_api_ip_container_proxy_add_del_t, 1)
vl_msg_name(vl_api_ip_container_proxy_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_container_proxy_dump_t, 1)
vl_msg_name(vl_api_ip_container_proxy_details_t, 1)
vl_msg_name(vl_api_ip_source_and_port_range_check_add_del_t, 1)
vl_msg_name(vl_api_ip_source_and_port_range_check_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_source_and_port_range_check_interface_add_del_t, 1)
vl_msg_name(vl_api_ip_source_and_port_range_check_interface_add_del_reply_t, 1)
vl_msg_name(vl_api_sw_interface_ip6_set_link_local_address_t, 1)
vl_msg_name(vl_api_sw_interface_ip6_set_link_local_address_reply_t, 1)
vl_msg_name(vl_api_ioam_enable_t, 1)
vl_msg_name(vl_api_ioam_enable_reply_t, 1)
vl_msg_name(vl_api_ioam_disable_t, 1)
vl_msg_name(vl_api_ioam_disable_reply_t, 1)
vl_msg_name(vl_api_ip_reassembly_set_t, 1)
vl_msg_name(vl_api_ip_reassembly_set_reply_t, 1)
vl_msg_name(vl_api_ip_reassembly_get_t, 1)
vl_msg_name(vl_api_ip_reassembly_get_reply_t, 1)
vl_msg_name(vl_api_ip_reassembly_enable_disable_t, 1)
vl_msg_name(vl_api_ip_reassembly_enable_disable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ip \
_(VL_API_IP_TABLE_ADD_DEL, ip_table_add_del, 0ffdaec0) \
_(VL_API_IP_TABLE_ADD_DEL_REPLY, ip_table_add_del_reply, e8d4e804) \
_(VL_API_IP_TABLE_DUMP, ip_table_dump, 51077d14) \
_(VL_API_IP_TABLE_REPLACE_BEGIN, ip_table_replace_begin, b9d2e09e) \
_(VL_API_IP_TABLE_REPLACE_BEGIN_REPLY, ip_table_replace_begin_reply, e8d4e804) \
_(VL_API_IP_TABLE_REPLACE_END, ip_table_replace_end, b9d2e09e) \
_(VL_API_IP_TABLE_REPLACE_END_REPLY, ip_table_replace_end_reply, e8d4e804) \
_(VL_API_IP_TABLE_FLUSH, ip_table_flush, b9d2e09e) \
_(VL_API_IP_TABLE_FLUSH_REPLY, ip_table_flush_reply, e8d4e804) \
_(VL_API_IP_TABLE_DETAILS, ip_table_details, c79fca0f) \
_(VL_API_IP_ROUTE_ADD_DEL, ip_route_add_del, c1ff832d) \
_(VL_API_IP_ROUTE_ADD_DEL_REPLY, ip_route_add_del_reply, 1992deab) \
_(VL_API_IP_ROUTE_DUMP, ip_route_dump, b9d2e09e) \
_(VL_API_IP_ROUTE_DETAILS, ip_route_details, d1ffaae1) \
_(VL_API_IP_ROUTE_LOOKUP, ip_route_lookup, e2986185) \
_(VL_API_IP_ROUTE_LOOKUP_REPLY, ip_route_lookup_reply, ae99de8e) \
_(VL_API_SET_IP_FLOW_HASH, set_ip_flow_hash, 084ee09e) \
_(VL_API_SET_IP_FLOW_HASH_REPLY, set_ip_flow_hash_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_IP6_ENABLE_DISABLE, sw_interface_ip6_enable_disable, ae6cfcfb) \
_(VL_API_SW_INTERFACE_IP6_ENABLE_DISABLE_REPLY, sw_interface_ip6_enable_disable_reply, e8d4e804) \
_(VL_API_IP_MTABLE_DUMP, ip_mtable_dump, 51077d14) \
_(VL_API_IP_MTABLE_DETAILS, ip_mtable_details, b9d2e09e) \
_(VL_API_IP_MROUTE_ADD_DEL, ip_mroute_add_del, f6627d17) \
_(VL_API_IP_MROUTE_ADD_DEL_REPLY, ip_mroute_add_del_reply, 1992deab) \
_(VL_API_IP_MROUTE_DUMP, ip_mroute_dump, b9d2e09e) \
_(VL_API_IP_MROUTE_DETAILS, ip_mroute_details, c1cb4b44) \
_(VL_API_IP_ADDRESS_DETAILS, ip_address_details, b1199745) \
_(VL_API_IP_ADDRESS_DUMP, ip_address_dump, 2d033de4) \
_(VL_API_IP_UNNUMBERED_DETAILS, ip_unnumbered_details, aa12a483) \
_(VL_API_IP_UNNUMBERED_DUMP, ip_unnumbered_dump, f9e6675e) \
_(VL_API_IP_DETAILS, ip_details, eb152d07) \
_(VL_API_IP_DUMP, ip_dump, 98d231ca) \
_(VL_API_MFIB_SIGNAL_DUMP, mfib_signal_dump, 51077d14) \
_(VL_API_MFIB_SIGNAL_DETAILS, mfib_signal_details, 64398a9a) \
_(VL_API_IP_PUNT_POLICE, ip_punt_police, db867cea) \
_(VL_API_IP_PUNT_POLICE_REPLY, ip_punt_police_reply, e8d4e804) \
_(VL_API_IP_PUNT_REDIRECT, ip_punt_redirect, a9a5592c) \
_(VL_API_IP_PUNT_REDIRECT_REPLY, ip_punt_redirect_reply, e8d4e804) \
_(VL_API_IP_PUNT_REDIRECT_DUMP, ip_punt_redirect_dump, 2d033de4) \
_(VL_API_IP_PUNT_REDIRECT_DETAILS, ip_punt_redirect_details, 3924f5d3) \
_(VL_API_IP_CONTAINER_PROXY_ADD_DEL, ip_container_proxy_add_del, 91189f40) \
_(VL_API_IP_CONTAINER_PROXY_ADD_DEL_REPLY, ip_container_proxy_add_del_reply, e8d4e804) \
_(VL_API_IP_CONTAINER_PROXY_DUMP, ip_container_proxy_dump, 51077d14) \
_(VL_API_IP_CONTAINER_PROXY_DETAILS, ip_container_proxy_details, 0ee460e8) \
_(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_ADD_DEL, ip_source_and_port_range_check_add_del, 8bfc76f2) \
_(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_ADD_DEL_REPLY, ip_source_and_port_range_check_add_del_reply, e8d4e804) \
_(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_INTERFACE_ADD_DEL, ip_source_and_port_range_check_interface_add_del, e1ba8987) \
_(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_INTERFACE_ADD_DEL_REPLY, ip_source_and_port_range_check_interface_add_del_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_IP6_SET_LINK_LOCAL_ADDRESS, sw_interface_ip6_set_link_local_address, 2931d9fa) \
_(VL_API_SW_INTERFACE_IP6_SET_LINK_LOCAL_ADDRESS_REPLY, sw_interface_ip6_set_link_local_address_reply, e8d4e804) \
_(VL_API_IOAM_ENABLE, ioam_enable, 51ccd868) \
_(VL_API_IOAM_ENABLE_REPLY, ioam_enable_reply, e8d4e804) \
_(VL_API_IOAM_DISABLE, ioam_disable, 6b16a45e) \
_(VL_API_IOAM_DISABLE_REPLY, ioam_disable_reply, e8d4e804) \
_(VL_API_IP_REASSEMBLY_SET, ip_reassembly_set, 16467d25) \
_(VL_API_IP_REASSEMBLY_SET_REPLY, ip_reassembly_set_reply, e8d4e804) \
_(VL_API_IP_REASSEMBLY_GET, ip_reassembly_get, ea13ff63) \
_(VL_API_IP_REASSEMBLY_GET_REPLY, ip_reassembly_get_reply, d5eb8d34) \
_(VL_API_IP_REASSEMBLY_ENABLE_DISABLE, ip_reassembly_enable_disable, 885c85a6) \
_(VL_API_IP_REASSEMBLY_ENABLE_DISABLE_REPLY, ip_reassembly_enable_disable_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "ip.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ip_printfun_types
#define included_ip_printfun_types

static inline u8 *format_vl_api_ip_table_t (u8 *s, va_list * args)
{
    vl_api_ip_table_t *a = va_arg (*args, vl_api_ip_table_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Uis_ip6: %u", format_white_space, indent, a->is_ip6);
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    return s;
}

static inline u8 *format_vl_api_ip_route_t (u8 *s, va_list * args)
{
    vl_api_ip_route_t *a = va_arg (*args, vl_api_ip_route_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Ustats_index: %u", format_white_space, indent, a->stats_index);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->prefix, indent);
    s = format(s, "\n%Un_paths: %u", format_white_space, indent, a->n_paths);
    for (i = 0; i < a->n_paths; i++) {
        s = format(s, "\n%Upaths: %U",
                   format_white_space, indent, format_vl_api_fib_path_t, &a->paths[i], indent);
    }
    return s;
}

static inline u8 *format_vl_api_ip_mroute_t (u8 *s, va_list * args)
{
    vl_api_ip_mroute_t *a = va_arg (*args, vl_api_ip_mroute_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Uentry_flags: %u", format_white_space, indent, a->entry_flags);
    s = format(s, "\n%Urpf_id: %u", format_white_space, indent, a->rpf_id);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_mprefix_t, &a->prefix, indent);
    s = format(s, "\n%Un_paths: %u", format_white_space, indent, a->n_paths);
    for (i = 0; i < a->n_paths; i++) {
        s = format(s, "\n%Upaths: %U",
                   format_white_space, indent, format_vl_api_mfib_path_t, &a->paths[i], indent);
    }
    return s;
}

static inline u8 *format_vl_api_punt_redirect_t (u8 *s, va_list * args)
{
    vl_api_punt_redirect_t *a = va_arg (*args, vl_api_punt_redirect_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Urx_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->rx_sw_if_index, indent);
    s = format(s, "\n%Utx_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->tx_sw_if_index, indent);
    s = format(s, "\n%Unh: %U", format_white_space, indent, format_vl_api_address_t, &a->nh, indent);
    return s;
}

static inline u8 *format_vl_api_ip_reass_type_t (u8 *s, va_list * args)
{
    vl_api_ip_reass_type_t *a = va_arg (*args, vl_api_ip_reass_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "IP_REASS_TYPE_FULL");
    case 1:
        return format(s, "IP_REASS_TYPE_SHALLOW_VIRTUAL");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ip_printfun
#define included_ip_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_ip_table_add_del_t_print (vl_api_ip_table_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_table_add_del_t: */
    s = format(s, "vl_api_ip_table_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Utable: %U", format_white_space, indent, format_vl_api_ip_table_t, &a->table, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_table_add_del_reply_t_print (vl_api_ip_table_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_table_add_del_reply_t: */
    s = format(s, "vl_api_ip_table_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_table_dump_t_print (vl_api_ip_table_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_table_dump_t: */
    s = format(s, "vl_api_ip_table_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_table_replace_begin_t_print (vl_api_ip_table_replace_begin_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_table_replace_begin_t: */
    s = format(s, "vl_api_ip_table_replace_begin_t:");
    s = format(s, "\n%Utable: %U", format_white_space, indent, format_vl_api_ip_table_t, &a->table, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_table_replace_begin_reply_t_print (vl_api_ip_table_replace_begin_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_table_replace_begin_reply_t: */
    s = format(s, "vl_api_ip_table_replace_begin_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_table_replace_end_t_print (vl_api_ip_table_replace_end_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_table_replace_end_t: */
    s = format(s, "vl_api_ip_table_replace_end_t:");
    s = format(s, "\n%Utable: %U", format_white_space, indent, format_vl_api_ip_table_t, &a->table, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_table_replace_end_reply_t_print (vl_api_ip_table_replace_end_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_table_replace_end_reply_t: */
    s = format(s, "vl_api_ip_table_replace_end_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_table_flush_t_print (vl_api_ip_table_flush_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_table_flush_t: */
    s = format(s, "vl_api_ip_table_flush_t:");
    s = format(s, "\n%Utable: %U", format_white_space, indent, format_vl_api_ip_table_t, &a->table, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_table_flush_reply_t_print (vl_api_ip_table_flush_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_table_flush_reply_t: */
    s = format(s, "vl_api_ip_table_flush_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_ip_table_details_t_print  *****/

static inline void *vl_api_ip_route_add_del_t_print (vl_api_ip_route_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_route_add_del_t: */
    s = format(s, "vl_api_ip_route_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uis_multipath: %u", format_white_space, indent, a->is_multipath);
    s = format(s, "\n%Uroute: %U", format_white_space, indent, format_vl_api_ip_route_t, &a->route, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_route_add_del_reply_t_print (vl_api_ip_route_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_route_add_del_reply_t: */
    s = format(s, "vl_api_ip_route_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ustats_index: %u", format_white_space, indent, a->stats_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_route_dump_t_print (vl_api_ip_route_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_route_dump_t: */
    s = format(s, "vl_api_ip_route_dump_t:");
    s = format(s, "\n%Utable: %U", format_white_space, indent, format_vl_api_ip_table_t, &a->table, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_ip_route_details_t_print  *****/

static inline void *vl_api_ip_route_lookup_t_print (vl_api_ip_route_lookup_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_route_lookup_t: */
    s = format(s, "vl_api_ip_route_lookup_t:");
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Uexact: %u", format_white_space, indent, a->exact);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->prefix, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_route_lookup_reply_t_print (vl_api_ip_route_lookup_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_route_lookup_reply_t: */
    s = format(s, "vl_api_ip_route_lookup_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uroute: %U", format_white_space, indent, format_vl_api_ip_route_t, &a->route, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_set_ip_flow_hash_t_print (vl_api_set_ip_flow_hash_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_set_ip_flow_hash_t: */
    s = format(s, "vl_api_set_ip_flow_hash_t:");
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Usrc: %u", format_white_space, indent, a->src);
    s = format(s, "\n%Udst: %u", format_white_space, indent, a->dst);
    s = format(s, "\n%Usport: %u", format_white_space, indent, a->sport);
    s = format(s, "\n%Udport: %u", format_white_space, indent, a->dport);
    s = format(s, "\n%Uproto: %u", format_white_space, indent, a->proto);
    s = format(s, "\n%Ureverse: %u", format_white_space, indent, a->reverse);
    s = format(s, "\n%Usymmetric: %u", format_white_space, indent, a->symmetric);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_set_ip_flow_hash_reply_t_print (vl_api_set_ip_flow_hash_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_set_ip_flow_hash_reply_t: */
    s = format(s, "vl_api_set_ip_flow_hash_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_ip6_enable_disable_t_print (vl_api_sw_interface_ip6_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_ip6_enable_disable_t: */
    s = format(s, "vl_api_sw_interface_ip6_enable_disable_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_ip6_enable_disable_reply_t_print (vl_api_sw_interface_ip6_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_ip6_enable_disable_reply_t: */
    s = format(s, "vl_api_sw_interface_ip6_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_mtable_dump_t_print (vl_api_ip_mtable_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_mtable_dump_t: */
    s = format(s, "vl_api_ip_mtable_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_mtable_details_t_print (vl_api_ip_mtable_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_mtable_details_t: */
    s = format(s, "vl_api_ip_mtable_details_t:");
    s = format(s, "\n%Utable: %U", format_white_space, indent, format_vl_api_ip_table_t, &a->table, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_mroute_add_del_t_print (vl_api_ip_mroute_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_mroute_add_del_t: */
    s = format(s, "vl_api_ip_mroute_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uis_multipath: %u", format_white_space, indent, a->is_multipath);
    s = format(s, "\n%Uroute: %U", format_white_space, indent, format_vl_api_ip_mroute_t, &a->route, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_mroute_add_del_reply_t_print (vl_api_ip_mroute_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_mroute_add_del_reply_t: */
    s = format(s, "vl_api_ip_mroute_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ustats_index: %u", format_white_space, indent, a->stats_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_mroute_dump_t_print (vl_api_ip_mroute_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_mroute_dump_t: */
    s = format(s, "vl_api_ip_mroute_dump_t:");
    s = format(s, "\n%Utable: %U", format_white_space, indent, format_vl_api_ip_table_t, &a->table, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_ip_mroute_details_t_print  *****/

static inline void *vl_api_ip_address_details_t_print (vl_api_ip_address_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_address_details_t: */
    s = format(s, "vl_api_ip_address_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_address_with_prefix_t, &a->prefix, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_address_dump_t_print (vl_api_ip_address_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_address_dump_t: */
    s = format(s, "vl_api_ip_address_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_unnumbered_details_t_print (vl_api_ip_unnumbered_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_unnumbered_details_t: */
    s = format(s, "vl_api_ip_unnumbered_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uip_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->ip_sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_unnumbered_dump_t_print (vl_api_ip_unnumbered_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_unnumbered_dump_t: */
    s = format(s, "vl_api_ip_unnumbered_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_details_t_print (vl_api_ip_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_details_t: */
    s = format(s, "vl_api_ip_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_dump_t_print (vl_api_ip_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_dump_t: */
    s = format(s, "vl_api_ip_dump_t:");
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_mfib_signal_dump_t_print (vl_api_mfib_signal_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_mfib_signal_dump_t: */
    s = format(s, "vl_api_mfib_signal_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_mfib_signal_details_t_print (vl_api_mfib_signal_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_mfib_signal_details_t: */
    s = format(s, "vl_api_mfib_signal_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_mprefix_t, &a->prefix, indent);
    s = format(s, "\n%Uip_packet_len: %u", format_white_space, indent, a->ip_packet_len);
    s = format(s, "\n%Uip_packet_data: %U", format_white_space, indent, format_hex_bytes, a, 256);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_punt_police_t_print (vl_api_ip_punt_police_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_punt_police_t: */
    s = format(s, "vl_api_ip_punt_police_t:");
    s = format(s, "\n%Upolicer_index: %u", format_white_space, indent, a->policer_index);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uis_ip6: %u", format_white_space, indent, a->is_ip6);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_punt_police_reply_t_print (vl_api_ip_punt_police_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_punt_police_reply_t: */
    s = format(s, "vl_api_ip_punt_police_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_punt_redirect_t_print (vl_api_ip_punt_redirect_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_punt_redirect_t: */
    s = format(s, "vl_api_ip_punt_redirect_t:");
    s = format(s, "\n%Upunt: %U", format_white_space, indent, format_vl_api_punt_redirect_t, &a->punt, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_punt_redirect_reply_t_print (vl_api_ip_punt_redirect_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_punt_redirect_reply_t: */
    s = format(s, "vl_api_ip_punt_redirect_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_punt_redirect_dump_t_print (vl_api_ip_punt_redirect_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_punt_redirect_dump_t: */
    s = format(s, "vl_api_ip_punt_redirect_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_punt_redirect_details_t_print (vl_api_ip_punt_redirect_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_punt_redirect_details_t: */
    s = format(s, "vl_api_ip_punt_redirect_details_t:");
    s = format(s, "\n%Upunt: %U", format_white_space, indent, format_vl_api_punt_redirect_t, &a->punt, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_container_proxy_add_del_t_print (vl_api_ip_container_proxy_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_container_proxy_add_del_t: */
    s = format(s, "vl_api_ip_container_proxy_add_del_t:");
    s = format(s, "\n%Upfx: %U", format_white_space, indent, format_vl_api_prefix_t, &a->pfx, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_container_proxy_add_del_reply_t_print (vl_api_ip_container_proxy_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_container_proxy_add_del_reply_t: */
    s = format(s, "vl_api_ip_container_proxy_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_container_proxy_dump_t_print (vl_api_ip_container_proxy_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_container_proxy_dump_t: */
    s = format(s, "vl_api_ip_container_proxy_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_container_proxy_details_t_print (vl_api_ip_container_proxy_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_container_proxy_details_t: */
    s = format(s, "vl_api_ip_container_proxy_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->prefix, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_source_and_port_range_check_add_del_t_print (vl_api_ip_source_and_port_range_check_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_source_and_port_range_check_add_del_t: */
    s = format(s, "vl_api_ip_source_and_port_range_check_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->prefix, indent);
    s = format(s, "\n%Unumber_of_ranges: %u", format_white_space, indent, a->number_of_ranges);
    for (i = 0; i < 32; i++) {
        s = format(s, "\n%Ulow_ports: %u",
                   format_white_space, indent, a->low_ports[i]);
    }
    for (i = 0; i < 32; i++) {
        s = format(s, "\n%Uhigh_ports: %u",
                   format_white_space, indent, a->high_ports[i]);
    }
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_source_and_port_range_check_add_del_reply_t_print (vl_api_ip_source_and_port_range_check_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_source_and_port_range_check_add_del_reply_t: */
    s = format(s, "vl_api_ip_source_and_port_range_check_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_source_and_port_range_check_interface_add_del_t_print (vl_api_ip_source_and_port_range_check_interface_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_source_and_port_range_check_interface_add_del_t: */
    s = format(s, "vl_api_ip_source_and_port_range_check_interface_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Utcp_in_vrf_id: %u", format_white_space, indent, a->tcp_in_vrf_id);
    s = format(s, "\n%Utcp_out_vrf_id: %u", format_white_space, indent, a->tcp_out_vrf_id);
    s = format(s, "\n%Uudp_in_vrf_id: %u", format_white_space, indent, a->udp_in_vrf_id);
    s = format(s, "\n%Uudp_out_vrf_id: %u", format_white_space, indent, a->udp_out_vrf_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_source_and_port_range_check_interface_add_del_reply_t_print (vl_api_ip_source_and_port_range_check_interface_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_source_and_port_range_check_interface_add_del_reply_t: */
    s = format(s, "vl_api_ip_source_and_port_range_check_interface_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_ip6_set_link_local_address_t_print (vl_api_sw_interface_ip6_set_link_local_address_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_ip6_set_link_local_address_t: */
    s = format(s, "vl_api_sw_interface_ip6_set_link_local_address_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uip: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->ip, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_ip6_set_link_local_address_reply_t_print (vl_api_sw_interface_ip6_set_link_local_address_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_ip6_set_link_local_address_reply_t: */
    s = format(s, "vl_api_sw_interface_ip6_set_link_local_address_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ioam_enable_t_print (vl_api_ioam_enable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ioam_enable_t: */
    s = format(s, "vl_api_ioam_enable_t:");
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    s = format(s, "\n%Useqno: %u", format_white_space, indent, a->seqno);
    s = format(s, "\n%Uanalyse: %u", format_white_space, indent, a->analyse);
    s = format(s, "\n%Upot_enable: %u", format_white_space, indent, a->pot_enable);
    s = format(s, "\n%Utrace_enable: %u", format_white_space, indent, a->trace_enable);
    s = format(s, "\n%Unode_id: %u", format_white_space, indent, a->node_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ioam_enable_reply_t_print (vl_api_ioam_enable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ioam_enable_reply_t: */
    s = format(s, "vl_api_ioam_enable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ioam_disable_t_print (vl_api_ioam_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ioam_disable_t: */
    s = format(s, "vl_api_ioam_disable_t:");
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ioam_disable_reply_t_print (vl_api_ioam_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ioam_disable_reply_t: */
    s = format(s, "vl_api_ioam_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_reassembly_set_t_print (vl_api_ip_reassembly_set_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_reassembly_set_t: */
    s = format(s, "vl_api_ip_reassembly_set_t:");
    s = format(s, "\n%Utimeout_ms: %u", format_white_space, indent, a->timeout_ms);
    s = format(s, "\n%Umax_reassemblies: %u", format_white_space, indent, a->max_reassemblies);
    s = format(s, "\n%Umax_reassembly_length: %u", format_white_space, indent, a->max_reassembly_length);
    s = format(s, "\n%Uexpire_walk_interval_ms: %u", format_white_space, indent, a->expire_walk_interval_ms);
    s = format(s, "\n%Uis_ip6: %u", format_white_space, indent, a->is_ip6);
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_ip_reass_type_t, &a->type, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_reassembly_set_reply_t_print (vl_api_ip_reassembly_set_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_reassembly_set_reply_t: */
    s = format(s, "vl_api_ip_reassembly_set_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_reassembly_get_t_print (vl_api_ip_reassembly_get_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_reassembly_get_t: */
    s = format(s, "vl_api_ip_reassembly_get_t:");
    s = format(s, "\n%Uis_ip6: %u", format_white_space, indent, a->is_ip6);
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_ip_reass_type_t, &a->type, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_reassembly_get_reply_t_print (vl_api_ip_reassembly_get_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_reassembly_get_reply_t: */
    s = format(s, "vl_api_ip_reassembly_get_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Utimeout_ms: %u", format_white_space, indent, a->timeout_ms);
    s = format(s, "\n%Umax_reassemblies: %u", format_white_space, indent, a->max_reassemblies);
    s = format(s, "\n%Umax_reassembly_length: %u", format_white_space, indent, a->max_reassembly_length);
    s = format(s, "\n%Uexpire_walk_interval_ms: %u", format_white_space, indent, a->expire_walk_interval_ms);
    s = format(s, "\n%Uis_ip6: %u", format_white_space, indent, a->is_ip6);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_reassembly_enable_disable_t_print (vl_api_ip_reassembly_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_reassembly_enable_disable_t: */
    s = format(s, "vl_api_ip_reassembly_enable_disable_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uenable_ip4: %u", format_white_space, indent, a->enable_ip4);
    s = format(s, "\n%Uenable_ip6: %u", format_white_space, indent, a->enable_ip6);
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_ip_reass_type_t, &a->type, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip_reassembly_enable_disable_reply_t_print (vl_api_ip_reassembly_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip_reassembly_enable_disable_reply_t: */
    s = format(s, "vl_api_ip_reassembly_enable_disable_reply_t:");
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
#ifndef included_ip_endianfun
#define included_ip_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_ip_table_t_endian (vl_api_ip_table_t *a)
{
    int i __attribute__((unused));
    a->table_id = clib_net_to_host_u32(a->table_id);
    /* a->is_ip6 = a->is_ip6 (no-op) */
    /* a->name = a->name (no-op) */
}

static inline void vl_api_ip_route_t_endian (vl_api_ip_route_t *a)
{
    int i __attribute__((unused));
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->stats_index = clib_net_to_host_u32(a->stats_index);
    vl_api_prefix_t_endian(&a->prefix);
    /* a->n_paths = a->n_paths (no-op) */
    for (i = 0; i < a->n_paths; i++) {
        vl_api_fib_path_t_endian(&a->paths[i]);
    }
}

static inline void vl_api_ip_mroute_t_endian (vl_api_ip_mroute_t *a)
{
    int i __attribute__((unused));
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->entry_flags = clib_net_to_host_u32(a->entry_flags);
    a->rpf_id = clib_net_to_host_u32(a->rpf_id);
    vl_api_mprefix_t_endian(&a->prefix);
    /* a->n_paths = a->n_paths (no-op) */
    for (i = 0; i < a->n_paths; i++) {
        vl_api_mfib_path_t_endian(&a->paths[i]);
    }
}

static inline void vl_api_punt_redirect_t_endian (vl_api_punt_redirect_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->rx_sw_if_index);
    vl_api_interface_index_t_endian(&a->tx_sw_if_index);
    vl_api_address_t_endian(&a->nh);
}

static inline void vl_api_ip_reass_type_t_endian (vl_api_ip_reass_type_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_ip_table_add_del_t_endian (vl_api_ip_table_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_ip_table_t_endian(&a->table);
}

static inline void vl_api_ip_table_add_del_reply_t_endian (vl_api_ip_table_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip_table_dump_t_endian (vl_api_ip_table_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ip_table_replace_begin_t_endian (vl_api_ip_table_replace_begin_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip_table_t_endian(&a->table);
}

static inline void vl_api_ip_table_replace_begin_reply_t_endian (vl_api_ip_table_replace_begin_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip_table_replace_end_t_endian (vl_api_ip_table_replace_end_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip_table_t_endian(&a->table);
}

static inline void vl_api_ip_table_replace_end_reply_t_endian (vl_api_ip_table_replace_end_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip_table_flush_t_endian (vl_api_ip_table_flush_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip_table_t_endian(&a->table);
}

static inline void vl_api_ip_table_flush_reply_t_endian (vl_api_ip_table_flush_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

/***** manual: vl_api_ip_table_details_t_endian  *****/

static inline void vl_api_ip_route_add_del_t_endian (vl_api_ip_route_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_multipath = a->is_multipath (no-op) */
    vl_api_ip_route_t_endian(&a->route);
}

static inline void vl_api_ip_route_add_del_reply_t_endian (vl_api_ip_route_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->stats_index = clib_net_to_host_u32(a->stats_index);
}

static inline void vl_api_ip_route_dump_t_endian (vl_api_ip_route_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip_table_t_endian(&a->table);
}

/***** manual: vl_api_ip_route_details_t_endian  *****/

static inline void vl_api_ip_route_lookup_t_endian (vl_api_ip_route_lookup_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->table_id = clib_net_to_host_u32(a->table_id);
    /* a->exact = a->exact (no-op) */
    vl_api_prefix_t_endian(&a->prefix);
}

static inline void vl_api_ip_route_lookup_reply_t_endian (vl_api_ip_route_lookup_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_ip_route_t_endian(&a->route);
}

static inline void vl_api_set_ip_flow_hash_t_endian (vl_api_set_ip_flow_hash_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->src = a->src (no-op) */
    /* a->dst = a->dst (no-op) */
    /* a->sport = a->sport (no-op) */
    /* a->dport = a->dport (no-op) */
    /* a->proto = a->proto (no-op) */
    /* a->reverse = a->reverse (no-op) */
    /* a->symmetric = a->symmetric (no-op) */
}

static inline void vl_api_set_ip_flow_hash_reply_t_endian (vl_api_set_ip_flow_hash_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_ip6_enable_disable_t_endian (vl_api_sw_interface_ip6_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_sw_interface_ip6_enable_disable_reply_t_endian (vl_api_sw_interface_ip6_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip_mtable_dump_t_endian (vl_api_ip_mtable_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ip_mtable_details_t_endian (vl_api_ip_mtable_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip_table_t_endian(&a->table);
}

static inline void vl_api_ip_mroute_add_del_t_endian (vl_api_ip_mroute_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_multipath = a->is_multipath (no-op) */
    vl_api_ip_mroute_t_endian(&a->route);
}

static inline void vl_api_ip_mroute_add_del_reply_t_endian (vl_api_ip_mroute_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->stats_index = clib_net_to_host_u32(a->stats_index);
}

static inline void vl_api_ip_mroute_dump_t_endian (vl_api_ip_mroute_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip_table_t_endian(&a->table);
}

/***** manual: vl_api_ip_mroute_details_t_endian  *****/

static inline void vl_api_ip_address_details_t_endian (vl_api_ip_address_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_address_with_prefix_t_endian(&a->prefix);
}

static inline void vl_api_ip_address_dump_t_endian (vl_api_ip_address_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

static inline void vl_api_ip_unnumbered_details_t_endian (vl_api_ip_unnumbered_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_interface_index_t_endian(&a->ip_sw_if_index);
}

static inline void vl_api_ip_unnumbered_dump_t_endian (vl_api_ip_unnumbered_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ip_details_t_endian (vl_api_ip_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

static inline void vl_api_ip_dump_t_endian (vl_api_ip_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

static inline void vl_api_mfib_signal_dump_t_endian (vl_api_mfib_signal_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_mfib_signal_details_t_endian (vl_api_mfib_signal_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->table_id = clib_net_to_host_u32(a->table_id);
    vl_api_mprefix_t_endian(&a->prefix);
    a->ip_packet_len = clib_net_to_host_u16(a->ip_packet_len);
    /* a->ip_packet_data = a->ip_packet_data (no-op) */
}

static inline void vl_api_ip_punt_police_t_endian (vl_api_ip_punt_police_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->policer_index = clib_net_to_host_u32(a->policer_index);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_ip6 = a->is_ip6 (no-op) */
}

static inline void vl_api_ip_punt_police_reply_t_endian (vl_api_ip_punt_police_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip_punt_redirect_t_endian (vl_api_ip_punt_redirect_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_punt_redirect_t_endian(&a->punt);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_ip_punt_redirect_reply_t_endian (vl_api_ip_punt_redirect_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip_punt_redirect_dump_t_endian (vl_api_ip_punt_redirect_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

static inline void vl_api_ip_punt_redirect_details_t_endian (vl_api_ip_punt_redirect_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_punt_redirect_t_endian(&a->punt);
}

static inline void vl_api_ip_container_proxy_add_del_t_endian (vl_api_ip_container_proxy_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_prefix_t_endian(&a->pfx);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_ip_container_proxy_add_del_reply_t_endian (vl_api_ip_container_proxy_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip_container_proxy_dump_t_endian (vl_api_ip_container_proxy_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ip_container_proxy_details_t_endian (vl_api_ip_container_proxy_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_prefix_t_endian(&a->prefix);
}

static inline void vl_api_ip_source_and_port_range_check_add_del_t_endian (vl_api_ip_source_and_port_range_check_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_prefix_t_endian(&a->prefix);
    /* a->number_of_ranges = a->number_of_ranges (no-op) */
    for (i = 0; i < 32; i++) {
        a->low_ports[i] = clib_net_to_host_u16(a->low_ports[i]);
    }
    for (i = 0; i < 32; i++) {
        a->high_ports[i] = clib_net_to_host_u16(a->high_ports[i]);
    }
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

static inline void vl_api_ip_source_and_port_range_check_add_del_reply_t_endian (vl_api_ip_source_and_port_range_check_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip_source_and_port_range_check_interface_add_del_t_endian (vl_api_ip_source_and_port_range_check_interface_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->tcp_in_vrf_id = clib_net_to_host_u32(a->tcp_in_vrf_id);
    a->tcp_out_vrf_id = clib_net_to_host_u32(a->tcp_out_vrf_id);
    a->udp_in_vrf_id = clib_net_to_host_u32(a->udp_in_vrf_id);
    a->udp_out_vrf_id = clib_net_to_host_u32(a->udp_out_vrf_id);
}

static inline void vl_api_ip_source_and_port_range_check_interface_add_del_reply_t_endian (vl_api_ip_source_and_port_range_check_interface_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_ip6_set_link_local_address_t_endian (vl_api_sw_interface_ip6_set_link_local_address_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_ip6_address_t_endian(&a->ip);
}

static inline void vl_api_sw_interface_ip6_set_link_local_address_reply_t_endian (vl_api_sw_interface_ip6_set_link_local_address_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ioam_enable_t_endian (vl_api_ioam_enable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u16(a->id);
    /* a->seqno = a->seqno (no-op) */
    /* a->analyse = a->analyse (no-op) */
    /* a->pot_enable = a->pot_enable (no-op) */
    /* a->trace_enable = a->trace_enable (no-op) */
    a->node_id = clib_net_to_host_u32(a->node_id);
}

static inline void vl_api_ioam_enable_reply_t_endian (vl_api_ioam_enable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ioam_disable_t_endian (vl_api_ioam_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u16(a->id);
}

static inline void vl_api_ioam_disable_reply_t_endian (vl_api_ioam_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip_reassembly_set_t_endian (vl_api_ip_reassembly_set_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->timeout_ms = clib_net_to_host_u32(a->timeout_ms);
    a->max_reassemblies = clib_net_to_host_u32(a->max_reassemblies);
    a->max_reassembly_length = clib_net_to_host_u32(a->max_reassembly_length);
    a->expire_walk_interval_ms = clib_net_to_host_u32(a->expire_walk_interval_ms);
    /* a->is_ip6 = a->is_ip6 (no-op) */
    vl_api_ip_reass_type_t_endian(&a->type);
}

static inline void vl_api_ip_reassembly_set_reply_t_endian (vl_api_ip_reassembly_set_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip_reassembly_get_t_endian (vl_api_ip_reassembly_get_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip6 = a->is_ip6 (no-op) */
    vl_api_ip_reass_type_t_endian(&a->type);
}

static inline void vl_api_ip_reassembly_get_reply_t_endian (vl_api_ip_reassembly_get_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->timeout_ms = clib_net_to_host_u32(a->timeout_ms);
    a->max_reassemblies = clib_net_to_host_u32(a->max_reassemblies);
    a->max_reassembly_length = clib_net_to_host_u32(a->max_reassembly_length);
    a->expire_walk_interval_ms = clib_net_to_host_u32(a->expire_walk_interval_ms);
    /* a->is_ip6 = a->is_ip6 (no-op) */
}

static inline void vl_api_ip_reassembly_enable_disable_t_endian (vl_api_ip_reassembly_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->enable_ip4 = a->enable_ip4 (no-op) */
    /* a->enable_ip6 = a->enable_ip6 (no-op) */
    vl_api_ip_reass_type_t_endian(&a->type);
}

static inline void vl_api_ip_reassembly_enable_disable_reply_t_endian (vl_api_ip_reassembly_enable_disable_reply_t *a)
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

vl_api_version_tuple(ip.api, 3, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ip.api, 0xab83332d)

#endif

