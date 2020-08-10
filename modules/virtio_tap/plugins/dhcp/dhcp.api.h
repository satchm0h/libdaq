/*
 * VLIB API definitions 2020-07-24 16:28:47
 * Input file: dhcp.api
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
#warning no content included from dhcp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ip/ip_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_DHCP_PLUGIN_GET_VERSION, vl_api_dhcp_plugin_get_version_t_handler)
vl_msg_id(VL_API_DHCP_PLUGIN_GET_VERSION_REPLY, vl_api_dhcp_plugin_get_version_reply_t_handler)
vl_msg_id(VL_API_DHCP_PLUGIN_CONTROL_PING, vl_api_dhcp_plugin_control_ping_t_handler)
vl_msg_id(VL_API_DHCP_PLUGIN_CONTROL_PING_REPLY, vl_api_dhcp_plugin_control_ping_reply_t_handler)
vl_msg_id(VL_API_DHCP_PROXY_CONFIG, vl_api_dhcp_proxy_config_t_handler)
vl_msg_id(VL_API_DHCP_PROXY_CONFIG_REPLY, vl_api_dhcp_proxy_config_reply_t_handler)
vl_msg_id(VL_API_DHCP_PROXY_SET_VSS, vl_api_dhcp_proxy_set_vss_t_handler)
vl_msg_id(VL_API_DHCP_PROXY_SET_VSS_REPLY, vl_api_dhcp_proxy_set_vss_reply_t_handler)
vl_msg_id(VL_API_DHCP_CLIENT_CONFIG, vl_api_dhcp_client_config_t_handler)
vl_msg_id(VL_API_DHCP_CLIENT_CONFIG_REPLY, vl_api_dhcp_client_config_reply_t_handler)
vl_msg_id(VL_API_DHCP_COMPL_EVENT, vl_api_dhcp_compl_event_t_handler)
vl_msg_id(VL_API_DHCP_CLIENT_DUMP, vl_api_dhcp_client_dump_t_handler)
vl_msg_id(VL_API_DHCP_CLIENT_DETAILS, vl_api_dhcp_client_details_t_handler)
vl_msg_id(VL_API_DHCP_PROXY_DUMP, vl_api_dhcp_proxy_dump_t_handler)
vl_msg_id(VL_API_DHCP_PROXY_DETAILS, vl_api_dhcp_proxy_details_t_handler)
vl_msg_id(VL_API_DHCP6_DUID_LL_SET, vl_api_dhcp6_duid_ll_set_t_handler)
vl_msg_id(VL_API_DHCP6_DUID_LL_SET_REPLY, vl_api_dhcp6_duid_ll_set_reply_t_handler)
vl_msg_id(VL_API_DHCP6_CLIENTS_ENABLE_DISABLE, vl_api_dhcp6_clients_enable_disable_t_handler)
vl_msg_id(VL_API_DHCP6_CLIENTS_ENABLE_DISABLE_REPLY, vl_api_dhcp6_clients_enable_disable_reply_t_handler)
vl_msg_id(VL_API_DHCP6_SEND_CLIENT_MESSAGE, vl_api_dhcp6_send_client_message_t_handler)
vl_msg_id(VL_API_DHCP6_SEND_CLIENT_MESSAGE_REPLY, vl_api_dhcp6_send_client_message_reply_t_handler)
vl_msg_id(VL_API_DHCP6_PD_SEND_CLIENT_MESSAGE, vl_api_dhcp6_pd_send_client_message_t_handler)
vl_msg_id(VL_API_DHCP6_PD_SEND_CLIENT_MESSAGE_REPLY, vl_api_dhcp6_pd_send_client_message_reply_t_handler)
vl_msg_id(VL_API_WANT_DHCP6_REPLY_EVENTS, vl_api_want_dhcp6_reply_events_t_handler)
vl_msg_id(VL_API_WANT_DHCP6_REPLY_EVENTS_REPLY, vl_api_want_dhcp6_reply_events_reply_t_handler)
vl_msg_id(VL_API_WANT_DHCP6_PD_REPLY_EVENTS, vl_api_want_dhcp6_pd_reply_events_t_handler)
vl_msg_id(VL_API_WANT_DHCP6_PD_REPLY_EVENTS_REPLY, vl_api_want_dhcp6_pd_reply_events_reply_t_handler)
vl_msg_id(VL_API_DHCP6_REPLY_EVENT, vl_api_dhcp6_reply_event_t_handler)
vl_msg_id(VL_API_DHCP6_PD_REPLY_EVENT, vl_api_dhcp6_pd_reply_event_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_dhcp_plugin_get_version_t, 1)
vl_msg_name(vl_api_dhcp_plugin_get_version_reply_t, 1)
vl_msg_name(vl_api_dhcp_plugin_control_ping_t, 1)
vl_msg_name(vl_api_dhcp_plugin_control_ping_reply_t, 1)
vl_msg_name(vl_api_dhcp_proxy_config_t, 1)
vl_msg_name(vl_api_dhcp_proxy_config_reply_t, 1)
vl_msg_name(vl_api_dhcp_proxy_set_vss_t, 1)
vl_msg_name(vl_api_dhcp_proxy_set_vss_reply_t, 1)
vl_msg_name(vl_api_dhcp_client_config_t, 1)
vl_msg_name(vl_api_dhcp_client_config_reply_t, 1)
vl_msg_name(vl_api_dhcp_compl_event_t, 1)
vl_msg_name(vl_api_dhcp_client_dump_t, 1)
vl_msg_name(vl_api_dhcp_client_details_t, 1)
vl_msg_name(vl_api_dhcp_proxy_dump_t, 1)
vl_msg_name(vl_api_dhcp_proxy_details_t, 1)
vl_msg_name(vl_api_dhcp6_duid_ll_set_t, 1)
vl_msg_name(vl_api_dhcp6_duid_ll_set_reply_t, 1)
vl_msg_name(vl_api_dhcp6_clients_enable_disable_t, 1)
vl_msg_name(vl_api_dhcp6_clients_enable_disable_reply_t, 1)
vl_msg_name(vl_api_dhcp6_send_client_message_t, 1)
vl_msg_name(vl_api_dhcp6_send_client_message_reply_t, 1)
vl_msg_name(vl_api_dhcp6_pd_send_client_message_t, 1)
vl_msg_name(vl_api_dhcp6_pd_send_client_message_reply_t, 1)
vl_msg_name(vl_api_want_dhcp6_reply_events_t, 1)
vl_msg_name(vl_api_want_dhcp6_reply_events_reply_t, 1)
vl_msg_name(vl_api_want_dhcp6_pd_reply_events_t, 1)
vl_msg_name(vl_api_want_dhcp6_pd_reply_events_reply_t, 1)
vl_msg_name(vl_api_dhcp6_reply_event_t, 1)
vl_msg_name(vl_api_dhcp6_pd_reply_event_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_dhcp \
_(VL_API_DHCP_PLUGIN_GET_VERSION, dhcp_plugin_get_version, 51077d14) \
_(VL_API_DHCP_PLUGIN_GET_VERSION_REPLY, dhcp_plugin_get_version_reply, 9b32cf86) \
_(VL_API_DHCP_PLUGIN_CONTROL_PING, dhcp_plugin_control_ping, 51077d14) \
_(VL_API_DHCP_PLUGIN_CONTROL_PING_REPLY, dhcp_plugin_control_ping_reply, f6b0b8ca) \
_(VL_API_DHCP_PROXY_CONFIG, dhcp_proxy_config, 6767230e) \
_(VL_API_DHCP_PROXY_CONFIG_REPLY, dhcp_proxy_config_reply, e8d4e804) \
_(VL_API_DHCP_PROXY_SET_VSS, dhcp_proxy_set_vss, 50537301) \
_(VL_API_DHCP_PROXY_SET_VSS_REPLY, dhcp_proxy_set_vss_reply, e8d4e804) \
_(VL_API_DHCP_CLIENT_CONFIG, dhcp_client_config, 959b80a3) \
_(VL_API_DHCP_CLIENT_CONFIG_REPLY, dhcp_client_config_reply, e8d4e804) \
_(VL_API_DHCP_COMPL_EVENT, dhcp_compl_event, e908fd1d) \
_(VL_API_DHCP_CLIENT_DUMP, dhcp_client_dump, 51077d14) \
_(VL_API_DHCP_CLIENT_DETAILS, dhcp_client_details, acd82f5a) \
_(VL_API_DHCP_PROXY_DUMP, dhcp_proxy_dump, 5c5b063f) \
_(VL_API_DHCP_PROXY_DETAILS, dhcp_proxy_details, ce16f044) \
_(VL_API_DHCP6_DUID_LL_SET, dhcp6_duid_ll_set, 0f6ca323) \
_(VL_API_DHCP6_DUID_LL_SET_REPLY, dhcp6_duid_ll_set_reply, e8d4e804) \
_(VL_API_DHCP6_CLIENTS_ENABLE_DISABLE, dhcp6_clients_enable_disable, b3e225d2) \
_(VL_API_DHCP6_CLIENTS_ENABLE_DISABLE_REPLY, dhcp6_clients_enable_disable_reply, e8d4e804) \
_(VL_API_DHCP6_SEND_CLIENT_MESSAGE, dhcp6_send_client_message, f6f14ef0) \
_(VL_API_DHCP6_SEND_CLIENT_MESSAGE_REPLY, dhcp6_send_client_message_reply, e8d4e804) \
_(VL_API_DHCP6_PD_SEND_CLIENT_MESSAGE, dhcp6_pd_send_client_message, 064badb8) \
_(VL_API_DHCP6_PD_SEND_CLIENT_MESSAGE_REPLY, dhcp6_pd_send_client_message_reply, e8d4e804) \
_(VL_API_WANT_DHCP6_REPLY_EVENTS, want_dhcp6_reply_events, 05b454b5) \
_(VL_API_WANT_DHCP6_REPLY_EVENTS_REPLY, want_dhcp6_reply_events_reply, e8d4e804) \
_(VL_API_WANT_DHCP6_PD_REPLY_EVENTS, want_dhcp6_pd_reply_events, c5e2af94) \
_(VL_API_WANT_DHCP6_PD_REPLY_EVENTS_REPLY, want_dhcp6_pd_reply_events_reply, e8d4e804) \
_(VL_API_DHCP6_REPLY_EVENT, dhcp6_reply_event, 9f3af9e5) \
_(VL_API_DHCP6_PD_REPLY_EVENT, dhcp6_pd_reply_event, cb3e462b) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "dhcp.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_dhcp_printfun_types
#define included_dhcp_printfun_types

static inline u8 *format_vl_api_vss_type_t (u8 *s, va_list * args)
{
    vl_api_vss_type_t *a = va_arg (*args, vl_api_vss_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "VSS_TYPE_API_ASCII");
    case 1:
        return format(s, "VSS_TYPE_API_VPN_ID");
    case 123:
        return format(s, "VSS_TYPE_API_INVALID");
    case 255:
        return format(s, "VSS_TYPE_API_DEFAULT");
    }
    return s;
}

static inline u8 *format_vl_api_dhcp_client_state_t (u8 *s, va_list * args)
{
    vl_api_dhcp_client_state_t *a = va_arg (*args, vl_api_dhcp_client_state_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "DHCP_CLIENT_STATE_API_DISCOVER");
    case 2:
        return format(s, "DHCP_CLIENT_STATE_API_REQUEST");
    case 3:
        return format(s, "DHCP_CLIENT_STATE_API_BOUND");
    }
    return s;
}

static inline u8 *format_vl_api_dhcpv6_msg_type_t (u8 *s, va_list * args)
{
    vl_api_dhcpv6_msg_type_t *a = va_arg (*args, vl_api_dhcpv6_msg_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "DHCPV6_MSG_API_SOLICIT");
    case 2:
        return format(s, "DHCPV6_MSG_API_ADVERTISE");
    case 3:
        return format(s, "DHCPV6_MSG_API_REQUEST");
    case 4:
        return format(s, "DHCPV6_MSG_API_CONFIRM");
    case 5:
        return format(s, "DHCPV6_MSG_API_RENEW");
    case 6:
        return format(s, "DHCPV6_MSG_API_REBIND");
    case 7:
        return format(s, "DHCPV6_MSG_API_REPLY");
    case 8:
        return format(s, "DHCPV6_MSG_API_RELEASE");
    case 9:
        return format(s, "DHCPV6_MSG_API_DECLINE");
    case 10:
        return format(s, "DHCPV6_MSG_API_RECONFIGURE");
    case 11:
        return format(s, "DHCPV6_MSG_API_INFORMATION_REQUEST");
    case 12:
        return format(s, "DHCPV6_MSG_API_RELAY_FORW");
    case 13:
        return format(s, "DHCPV6_MSG_API_RELAY_REPL");
    }
    return s;
}

static inline u8 *format_vl_api_dhcp_client_t (u8 *s, va_list * args)
{
    vl_api_dhcp_client_t *a = va_arg (*args, vl_api_dhcp_client_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uhostname: %s", format_white_space, indent, a->hostname);
    s = format(s, "\n%Uid: %U", format_white_space, indent, format_hex_bytes, a, 64);
    s = format(s, "\n%Uwant_dhcp_event: %u", format_white_space, indent, a->want_dhcp_event);
    s = format(s, "\n%Uset_broadcast_flag: %u", format_white_space, indent, a->set_broadcast_flag);
    s = format(s, "\n%Udscp: %U", format_white_space, indent, format_vl_api_ip_dscp_t, &a->dscp, indent);
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    return s;
}

static inline u8 *format_vl_api_domain_server_t (u8 *s, va_list * args)
{
    vl_api_domain_server_t *a = va_arg (*args, vl_api_domain_server_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uaddress: %U", format_white_space, indent, format_vl_api_address_t, &a->address, indent);
    return s;
}

static inline u8 *format_vl_api_dhcp_lease_t (u8 *s, va_list * args)
{
    vl_api_dhcp_lease_t *a = va_arg (*args, vl_api_dhcp_lease_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ustate: %U", format_white_space, indent, format_vl_api_dhcp_client_state_t, &a->state, indent);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Uhostname: %s", format_white_space, indent, a->hostname);
    s = format(s, "\n%Umask_width: %u", format_white_space, indent, a->mask_width);
    s = format(s, "\n%Uhost_address: %U", format_white_space, indent, format_vl_api_address_t, &a->host_address, indent);
    s = format(s, "\n%Urouter_address: %U", format_white_space, indent, format_vl_api_address_t, &a->router_address, indent);
    s = format(s, "\n%Uhost_mac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->host_mac, indent);
    s = format(s, "\n%Ucount: %u", format_white_space, indent, a->count);
    for (i = 0; i < a->count; i++) {
        s = format(s, "\n%Udomain_server: %U",
                   format_white_space, indent, format_vl_api_domain_server_t, &a->domain_server[i], indent);
    }
    return s;
}

static inline u8 *format_vl_api_dhcp_server_t (u8 *s, va_list * args)
{
    vl_api_dhcp_server_t *a = va_arg (*args, vl_api_dhcp_server_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Userver_vrf_id: %u", format_white_space, indent, a->server_vrf_id);
    s = format(s, "\n%Udhcp_server: %U", format_white_space, indent, format_vl_api_address_t, &a->dhcp_server, indent);
    return s;
}

static inline u8 *format_vl_api_dhcp6_address_info_t (u8 *s, va_list * args)
{
    vl_api_dhcp6_address_info_t *a = va_arg (*args, vl_api_dhcp6_address_info_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uaddress: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->address, indent);
    s = format(s, "\n%Uvalid_time: %u", format_white_space, indent, a->valid_time);
    s = format(s, "\n%Upreferred_time: %u", format_white_space, indent, a->preferred_time);
    return s;
}

static inline u8 *format_vl_api_dhcp6_pd_prefix_info_t (u8 *s, va_list * args)
{
    vl_api_dhcp6_pd_prefix_info_t *a = va_arg (*args, vl_api_dhcp6_pd_prefix_info_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_ip6_prefix_t, &a->prefix, indent);
    s = format(s, "\n%Uvalid_time: %u", format_white_space, indent, a->valid_time);
    s = format(s, "\n%Upreferred_time: %u", format_white_space, indent, a->preferred_time);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_dhcp_printfun
#define included_dhcp_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_dhcp_plugin_get_version_t_print (vl_api_dhcp_plugin_get_version_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_plugin_get_version_t: */
    s = format(s, "vl_api_dhcp_plugin_get_version_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_plugin_get_version_reply_t_print (vl_api_dhcp_plugin_get_version_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_plugin_get_version_reply_t: */
    s = format(s, "vl_api_dhcp_plugin_get_version_reply_t:");
    s = format(s, "\n%Umajor: %u", format_white_space, indent, a->major);
    s = format(s, "\n%Uminor: %u", format_white_space, indent, a->minor);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_plugin_control_ping_t_print (vl_api_dhcp_plugin_control_ping_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_plugin_control_ping_t: */
    s = format(s, "vl_api_dhcp_plugin_control_ping_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_plugin_control_ping_reply_t_print (vl_api_dhcp_plugin_control_ping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_plugin_control_ping_reply_t: */
    s = format(s, "vl_api_dhcp_plugin_control_ping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uvpe_pid: %u", format_white_space, indent, a->vpe_pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_proxy_config_t_print (vl_api_dhcp_proxy_config_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_proxy_config_t: */
    s = format(s, "vl_api_dhcp_proxy_config_t:");
    s = format(s, "\n%Urx_vrf_id: %u", format_white_space, indent, a->rx_vrf_id);
    s = format(s, "\n%Userver_vrf_id: %u", format_white_space, indent, a->server_vrf_id);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Udhcp_server: %U", format_white_space, indent, format_vl_api_address_t, &a->dhcp_server, indent);
    s = format(s, "\n%Udhcp_src_address: %U", format_white_space, indent, format_vl_api_address_t, &a->dhcp_src_address, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_proxy_config_reply_t_print (vl_api_dhcp_proxy_config_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_proxy_config_reply_t: */
    s = format(s, "vl_api_dhcp_proxy_config_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_proxy_set_vss_t_print (vl_api_dhcp_proxy_set_vss_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_proxy_set_vss_t: */
    s = format(s, "vl_api_dhcp_proxy_set_vss_t:");
    s = format(s, "\n%Utbl_id: %u", format_white_space, indent, a->tbl_id);
    s = format(s, "\n%Uvss_type: %U", format_white_space, indent, format_vl_api_vss_type_t, &a->vss_type, indent);
    s = format(s, "\n%Uvpn_ascii_id: %s", format_white_space, indent, a->vpn_ascii_id);
    s = format(s, "\n%Uoui: %u", format_white_space, indent, a->oui);
    s = format(s, "\n%Uvpn_index: %u", format_white_space, indent, a->vpn_index);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_proxy_set_vss_reply_t_print (vl_api_dhcp_proxy_set_vss_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_proxy_set_vss_reply_t: */
    s = format(s, "vl_api_dhcp_proxy_set_vss_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_client_config_t_print (vl_api_dhcp_client_config_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_client_config_t: */
    s = format(s, "vl_api_dhcp_client_config_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uclient: %U", format_white_space, indent, format_vl_api_dhcp_client_t, &a->client, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_client_config_reply_t_print (vl_api_dhcp_client_config_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_client_config_reply_t: */
    s = format(s, "vl_api_dhcp_client_config_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_compl_event_t_print (vl_api_dhcp_compl_event_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_compl_event_t: */
    s = format(s, "vl_api_dhcp_compl_event_t:");
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    s = format(s, "\n%Ulease: %U", format_white_space, indent, format_vl_api_dhcp_lease_t, &a->lease, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_client_dump_t_print (vl_api_dhcp_client_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_client_dump_t: */
    s = format(s, "vl_api_dhcp_client_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_client_details_t_print (vl_api_dhcp_client_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_client_details_t: */
    s = format(s, "vl_api_dhcp_client_details_t:");
    s = format(s, "\n%Uclient: %U", format_white_space, indent, format_vl_api_dhcp_client_t, &a->client, indent);
    s = format(s, "\n%Ulease: %U", format_white_space, indent, format_vl_api_dhcp_lease_t, &a->lease, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp_proxy_dump_t_print (vl_api_dhcp_proxy_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp_proxy_dump_t: */
    s = format(s, "vl_api_dhcp_proxy_dump_t:");
    s = format(s, "\n%Uis_ip6: %u", format_white_space, indent, a->is_ip6);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_dhcp_proxy_details_t_print  *****/

static inline void *vl_api_dhcp6_duid_ll_set_t_print (vl_api_dhcp6_duid_ll_set_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp6_duid_ll_set_t: */
    s = format(s, "vl_api_dhcp6_duid_ll_set_t:");
    s = format(s, "\n%Uduid_ll: %U", format_white_space, indent, format_hex_bytes, a, 10);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp6_duid_ll_set_reply_t_print (vl_api_dhcp6_duid_ll_set_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp6_duid_ll_set_reply_t: */
    s = format(s, "vl_api_dhcp6_duid_ll_set_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp6_clients_enable_disable_t_print (vl_api_dhcp6_clients_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp6_clients_enable_disable_t: */
    s = format(s, "vl_api_dhcp6_clients_enable_disable_t:");
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp6_clients_enable_disable_reply_t_print (vl_api_dhcp6_clients_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp6_clients_enable_disable_reply_t: */
    s = format(s, "vl_api_dhcp6_clients_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp6_send_client_message_t_print (vl_api_dhcp6_send_client_message_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp6_send_client_message_t: */
    s = format(s, "vl_api_dhcp6_send_client_message_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Userver_index: %u", format_white_space, indent, a->server_index);
    s = format(s, "\n%Uirt: %u", format_white_space, indent, a->irt);
    s = format(s, "\n%Umrt: %u", format_white_space, indent, a->mrt);
    s = format(s, "\n%Umrc: %u", format_white_space, indent, a->mrc);
    s = format(s, "\n%Umrd: %u", format_white_space, indent, a->mrd);
    s = format(s, "\n%Ustop: %u", format_white_space, indent, a->stop);
    s = format(s, "\n%Umsg_type: %U", format_white_space, indent, format_vl_api_dhcpv6_msg_type_t, &a->msg_type, indent);
    s = format(s, "\n%UT1: %u", format_white_space, indent, a->T1);
    s = format(s, "\n%UT2: %u", format_white_space, indent, a->T2);
    s = format(s, "\n%Un_addresses: %u", format_white_space, indent, a->n_addresses);
    for (i = 0; i < a->n_addresses; i++) {
        s = format(s, "\n%Uaddresses: %U",
                   format_white_space, indent, format_vl_api_dhcp6_address_info_t, &a->addresses[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp6_send_client_message_reply_t_print (vl_api_dhcp6_send_client_message_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp6_send_client_message_reply_t: */
    s = format(s, "vl_api_dhcp6_send_client_message_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp6_pd_send_client_message_t_print (vl_api_dhcp6_pd_send_client_message_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp6_pd_send_client_message_t: */
    s = format(s, "vl_api_dhcp6_pd_send_client_message_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Userver_index: %u", format_white_space, indent, a->server_index);
    s = format(s, "\n%Uirt: %u", format_white_space, indent, a->irt);
    s = format(s, "\n%Umrt: %u", format_white_space, indent, a->mrt);
    s = format(s, "\n%Umrc: %u", format_white_space, indent, a->mrc);
    s = format(s, "\n%Umrd: %u", format_white_space, indent, a->mrd);
    s = format(s, "\n%Ustop: %u", format_white_space, indent, a->stop);
    s = format(s, "\n%Umsg_type: %U", format_white_space, indent, format_vl_api_dhcpv6_msg_type_t, &a->msg_type, indent);
    s = format(s, "\n%UT1: %u", format_white_space, indent, a->T1);
    s = format(s, "\n%UT2: %u", format_white_space, indent, a->T2);
    s = format(s, "\n%Un_prefixes: %u", format_white_space, indent, a->n_prefixes);
    for (i = 0; i < a->n_prefixes; i++) {
        s = format(s, "\n%Uprefixes: %U",
                   format_white_space, indent, format_vl_api_dhcp6_pd_prefix_info_t, &a->prefixes[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp6_pd_send_client_message_reply_t_print (vl_api_dhcp6_pd_send_client_message_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp6_pd_send_client_message_reply_t: */
    s = format(s, "vl_api_dhcp6_pd_send_client_message_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_dhcp6_reply_events_t_print (vl_api_want_dhcp6_reply_events_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_dhcp6_reply_events_t: */
    s = format(s, "vl_api_want_dhcp6_reply_events_t:");
    s = format(s, "\n%Uenable_disable: %u", format_white_space, indent, a->enable_disable);
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_dhcp6_reply_events_reply_t_print (vl_api_want_dhcp6_reply_events_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_dhcp6_reply_events_reply_t: */
    s = format(s, "vl_api_want_dhcp6_reply_events_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_dhcp6_pd_reply_events_t_print (vl_api_want_dhcp6_pd_reply_events_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_dhcp6_pd_reply_events_t: */
    s = format(s, "vl_api_want_dhcp6_pd_reply_events_t:");
    s = format(s, "\n%Uenable_disable: %u", format_white_space, indent, a->enable_disable);
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_dhcp6_pd_reply_events_reply_t_print (vl_api_want_dhcp6_pd_reply_events_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_dhcp6_pd_reply_events_reply_t: */
    s = format(s, "vl_api_want_dhcp6_pd_reply_events_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp6_reply_event_t_print (vl_api_dhcp6_reply_event_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp6_reply_event_t: */
    s = format(s, "vl_api_dhcp6_reply_event_t:");
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Userver_index: %u", format_white_space, indent, a->server_index);
    s = format(s, "\n%Umsg_type: %U", format_white_space, indent, format_vl_api_dhcpv6_msg_type_t, &a->msg_type, indent);
    s = format(s, "\n%UT1: %u", format_white_space, indent, a->T1);
    s = format(s, "\n%UT2: %u", format_white_space, indent, a->T2);
    s = format(s, "\n%Uinner_status_code: %u", format_white_space, indent, a->inner_status_code);
    s = format(s, "\n%Ustatus_code: %u", format_white_space, indent, a->status_code);
    s = format(s, "\n%Upreference: %u", format_white_space, indent, a->preference);
    s = format(s, "\n%Un_addresses: %u", format_white_space, indent, a->n_addresses);
    for (i = 0; i < a->n_addresses; i++) {
        s = format(s, "\n%Uaddresses: %U",
                   format_white_space, indent, format_vl_api_dhcp6_address_info_t, &a->addresses[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_dhcp6_pd_reply_event_t_print (vl_api_dhcp6_pd_reply_event_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_dhcp6_pd_reply_event_t: */
    s = format(s, "vl_api_dhcp6_pd_reply_event_t:");
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Userver_index: %u", format_white_space, indent, a->server_index);
    s = format(s, "\n%Umsg_type: %U", format_white_space, indent, format_vl_api_dhcpv6_msg_type_t, &a->msg_type, indent);
    s = format(s, "\n%UT1: %u", format_white_space, indent, a->T1);
    s = format(s, "\n%UT2: %u", format_white_space, indent, a->T2);
    s = format(s, "\n%Uinner_status_code: %u", format_white_space, indent, a->inner_status_code);
    s = format(s, "\n%Ustatus_code: %u", format_white_space, indent, a->status_code);
    s = format(s, "\n%Upreference: %u", format_white_space, indent, a->preference);
    s = format(s, "\n%Un_prefixes: %u", format_white_space, indent, a->n_prefixes);
    for (i = 0; i < a->n_prefixes; i++) {
        s = format(s, "\n%Uprefixes: %U",
                   format_white_space, indent, format_vl_api_dhcp6_pd_prefix_info_t, &a->prefixes[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_dhcp_endianfun
#define included_dhcp_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_vss_type_t_endian (vl_api_vss_type_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_dhcp_client_state_t_endian (vl_api_dhcp_client_state_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_dhcpv6_msg_type_t_endian (vl_api_dhcpv6_msg_type_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_dhcp_client_t_endian (vl_api_dhcp_client_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->hostname = a->hostname (no-op) */
    /* a->id = a->id (no-op) */
    /* a->want_dhcp_event = a->want_dhcp_event (no-op) */
    /* a->set_broadcast_flag = a->set_broadcast_flag (no-op) */
    vl_api_ip_dscp_t_endian(&a->dscp);
    a->pid = clib_net_to_host_u32(a->pid);
}

static inline void vl_api_domain_server_t_endian (vl_api_domain_server_t *a)
{
    int i __attribute__((unused));
    vl_api_address_t_endian(&a->address);
}

static inline void vl_api_dhcp_lease_t_endian (vl_api_dhcp_lease_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_dhcp_client_state_t_endian(&a->state);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->hostname = a->hostname (no-op) */
    /* a->mask_width = a->mask_width (no-op) */
    vl_api_address_t_endian(&a->host_address);
    vl_api_address_t_endian(&a->router_address);
    vl_api_mac_address_t_endian(&a->host_mac);
    /* a->count = a->count (no-op) */
    for (i = 0; i < a->count; i++) {
        vl_api_domain_server_t_endian(&a->domain_server[i]);
    }
}

static inline void vl_api_dhcp_server_t_endian (vl_api_dhcp_server_t *a)
{
    int i __attribute__((unused));
    a->server_vrf_id = clib_net_to_host_u32(a->server_vrf_id);
    vl_api_address_t_endian(&a->dhcp_server);
}

static inline void vl_api_dhcp6_address_info_t_endian (vl_api_dhcp6_address_info_t *a)
{
    int i __attribute__((unused));
    vl_api_ip6_address_t_endian(&a->address);
    a->valid_time = clib_net_to_host_u32(a->valid_time);
    a->preferred_time = clib_net_to_host_u32(a->preferred_time);
}

static inline void vl_api_dhcp6_pd_prefix_info_t_endian (vl_api_dhcp6_pd_prefix_info_t *a)
{
    int i __attribute__((unused));
    vl_api_ip6_prefix_t_endian(&a->prefix);
    a->valid_time = clib_net_to_host_u32(a->valid_time);
    a->preferred_time = clib_net_to_host_u32(a->preferred_time);
}

static inline void vl_api_dhcp_plugin_get_version_t_endian (vl_api_dhcp_plugin_get_version_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_dhcp_plugin_get_version_reply_t_endian (vl_api_dhcp_plugin_get_version_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->major = clib_net_to_host_u32(a->major);
    a->minor = clib_net_to_host_u32(a->minor);
}

static inline void vl_api_dhcp_plugin_control_ping_t_endian (vl_api_dhcp_plugin_control_ping_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_dhcp_plugin_control_ping_reply_t_endian (vl_api_dhcp_plugin_control_ping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->client_index = a->client_index (no-op) */
    a->vpe_pid = clib_net_to_host_u32(a->vpe_pid);
}

static inline void vl_api_dhcp_proxy_config_t_endian (vl_api_dhcp_proxy_config_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->rx_vrf_id = clib_net_to_host_u32(a->rx_vrf_id);
    a->server_vrf_id = clib_net_to_host_u32(a->server_vrf_id);
    /* a->is_add = a->is_add (no-op) */
    vl_api_address_t_endian(&a->dhcp_server);
    vl_api_address_t_endian(&a->dhcp_src_address);
}

static inline void vl_api_dhcp_proxy_config_reply_t_endian (vl_api_dhcp_proxy_config_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_dhcp_proxy_set_vss_t_endian (vl_api_dhcp_proxy_set_vss_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->tbl_id = clib_net_to_host_u32(a->tbl_id);
    vl_api_vss_type_t_endian(&a->vss_type);
    /* a->vpn_ascii_id = a->vpn_ascii_id (no-op) */
    a->oui = clib_net_to_host_u32(a->oui);
    a->vpn_index = clib_net_to_host_u32(a->vpn_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_dhcp_proxy_set_vss_reply_t_endian (vl_api_dhcp_proxy_set_vss_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_dhcp_client_config_t_endian (vl_api_dhcp_client_config_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_dhcp_client_t_endian(&a->client);
}

static inline void vl_api_dhcp_client_config_reply_t_endian (vl_api_dhcp_client_config_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_dhcp_compl_event_t_endian (vl_api_dhcp_compl_event_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
    vl_api_dhcp_lease_t_endian(&a->lease);
}

static inline void vl_api_dhcp_client_dump_t_endian (vl_api_dhcp_client_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_dhcp_client_details_t_endian (vl_api_dhcp_client_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_dhcp_client_t_endian(&a->client);
    vl_api_dhcp_lease_t_endian(&a->lease);
}

static inline void vl_api_dhcp_proxy_dump_t_endian (vl_api_dhcp_proxy_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip6 = a->is_ip6 (no-op) */
}

/***** manual: vl_api_dhcp_proxy_details_t_endian  *****/

static inline void vl_api_dhcp6_duid_ll_set_t_endian (vl_api_dhcp6_duid_ll_set_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->duid_ll = a->duid_ll (no-op) */
}

static inline void vl_api_dhcp6_duid_ll_set_reply_t_endian (vl_api_dhcp6_duid_ll_set_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_dhcp6_clients_enable_disable_t_endian (vl_api_dhcp6_clients_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
}

static inline void vl_api_dhcp6_clients_enable_disable_reply_t_endian (vl_api_dhcp6_clients_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_dhcp6_send_client_message_t_endian (vl_api_dhcp6_send_client_message_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->server_index = clib_net_to_host_u32(a->server_index);
    a->irt = clib_net_to_host_u32(a->irt);
    a->mrt = clib_net_to_host_u32(a->mrt);
    a->mrc = clib_net_to_host_u32(a->mrc);
    a->mrd = clib_net_to_host_u32(a->mrd);
    /* a->stop = a->stop (no-op) */
    vl_api_dhcpv6_msg_type_t_endian(&a->msg_type);
    a->T1 = clib_net_to_host_u32(a->T1);
    a->T2 = clib_net_to_host_u32(a->T2);
    a->n_addresses = clib_net_to_host_u32(a->n_addresses);
    for (i = 0; i < a->n_addresses; i++) {
        vl_api_dhcp6_address_info_t_endian(&a->addresses[i]);
    }
}

static inline void vl_api_dhcp6_send_client_message_reply_t_endian (vl_api_dhcp6_send_client_message_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_dhcp6_pd_send_client_message_t_endian (vl_api_dhcp6_pd_send_client_message_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->server_index = clib_net_to_host_u32(a->server_index);
    a->irt = clib_net_to_host_u32(a->irt);
    a->mrt = clib_net_to_host_u32(a->mrt);
    a->mrc = clib_net_to_host_u32(a->mrc);
    a->mrd = clib_net_to_host_u32(a->mrd);
    /* a->stop = a->stop (no-op) */
    vl_api_dhcpv6_msg_type_t_endian(&a->msg_type);
    a->T1 = clib_net_to_host_u32(a->T1);
    a->T2 = clib_net_to_host_u32(a->T2);
    a->n_prefixes = clib_net_to_host_u32(a->n_prefixes);
    for (i = 0; i < a->n_prefixes; i++) {
        vl_api_dhcp6_pd_prefix_info_t_endian(&a->prefixes[i]);
    }
}

static inline void vl_api_dhcp6_pd_send_client_message_reply_t_endian (vl_api_dhcp6_pd_send_client_message_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_want_dhcp6_reply_events_t_endian (vl_api_want_dhcp6_reply_events_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

static inline void vl_api_want_dhcp6_reply_events_reply_t_endian (vl_api_want_dhcp6_reply_events_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_want_dhcp6_pd_reply_events_t_endian (vl_api_want_dhcp6_pd_reply_events_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

static inline void vl_api_want_dhcp6_pd_reply_events_reply_t_endian (vl_api_want_dhcp6_pd_reply_events_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_dhcp6_reply_event_t_endian (vl_api_dhcp6_reply_event_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->server_index = clib_net_to_host_u32(a->server_index);
    vl_api_dhcpv6_msg_type_t_endian(&a->msg_type);
    a->T1 = clib_net_to_host_u32(a->T1);
    a->T2 = clib_net_to_host_u32(a->T2);
    a->inner_status_code = clib_net_to_host_u16(a->inner_status_code);
    a->status_code = clib_net_to_host_u16(a->status_code);
    /* a->preference = a->preference (no-op) */
    a->n_addresses = clib_net_to_host_u32(a->n_addresses);
    for (i = 0; i < a->n_addresses; i++) {
        vl_api_dhcp6_address_info_t_endian(&a->addresses[i]);
    }
}

static inline void vl_api_dhcp6_pd_reply_event_t_endian (vl_api_dhcp6_pd_reply_event_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->server_index = clib_net_to_host_u32(a->server_index);
    vl_api_dhcpv6_msg_type_t_endian(&a->msg_type);
    a->T1 = clib_net_to_host_u32(a->T1);
    a->T2 = clib_net_to_host_u32(a->T2);
    a->inner_status_code = clib_net_to_host_u16(a->inner_status_code);
    a->status_code = clib_net_to_host_u16(a->status_code);
    /* a->preference = a->preference (no-op) */
    a->n_prefixes = clib_net_to_host_u32(a->n_prefixes);
    for (i = 0; i < a->n_prefixes; i++) {
        vl_api_dhcp6_pd_prefix_info_t_endian(&a->prefixes[i]);
    }
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(dhcp.api, 3, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(dhcp.api, 0x9ad28d0a)

#endif

