/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: ip6_nd.api
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
#warning no content included from ip6_nd.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SW_INTERFACE_IP6ND_RA_CONFIG, vl_api_sw_interface_ip6nd_ra_config_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6ND_RA_CONFIG_REPLY, vl_api_sw_interface_ip6nd_ra_config_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6ND_RA_PREFIX, vl_api_sw_interface_ip6nd_ra_prefix_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6ND_RA_PREFIX_REPLY, vl_api_sw_interface_ip6nd_ra_prefix_reply_t_handler)
vl_msg_id(VL_API_IP6ND_PROXY_ADD_DEL, vl_api_ip6nd_proxy_add_del_t_handler)
vl_msg_id(VL_API_IP6ND_PROXY_ADD_DEL_REPLY, vl_api_ip6nd_proxy_add_del_reply_t_handler)
vl_msg_id(VL_API_IP6ND_PROXY_DETAILS, vl_api_ip6nd_proxy_details_t_handler)
vl_msg_id(VL_API_IP6ND_PROXY_DUMP, vl_api_ip6nd_proxy_dump_t_handler)
vl_msg_id(VL_API_IP6ND_SEND_ROUTER_SOLICITATION, vl_api_ip6nd_send_router_solicitation_t_handler)
vl_msg_id(VL_API_IP6ND_SEND_ROUTER_SOLICITATION_REPLY, vl_api_ip6nd_send_router_solicitation_reply_t_handler)
vl_msg_id(VL_API_WANT_IP6_RA_EVENTS, vl_api_want_ip6_ra_events_t_handler)
vl_msg_id(VL_API_WANT_IP6_RA_EVENTS_REPLY, vl_api_want_ip6_ra_events_reply_t_handler)
vl_msg_id(VL_API_IP6_RA_EVENT, vl_api_ip6_ra_event_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_sw_interface_ip6nd_ra_config_t, 1)
vl_msg_name(vl_api_sw_interface_ip6nd_ra_config_reply_t, 1)
vl_msg_name(vl_api_sw_interface_ip6nd_ra_prefix_t, 1)
vl_msg_name(vl_api_sw_interface_ip6nd_ra_prefix_reply_t, 1)
vl_msg_name(vl_api_ip6nd_proxy_add_del_t, 1)
vl_msg_name(vl_api_ip6nd_proxy_add_del_reply_t, 1)
vl_msg_name(vl_api_ip6nd_proxy_details_t, 1)
vl_msg_name(vl_api_ip6nd_proxy_dump_t, 1)
vl_msg_name(vl_api_ip6nd_send_router_solicitation_t, 1)
vl_msg_name(vl_api_ip6nd_send_router_solicitation_reply_t, 1)
vl_msg_name(vl_api_want_ip6_ra_events_t, 1)
vl_msg_name(vl_api_want_ip6_ra_events_reply_t, 1)
vl_msg_name(vl_api_ip6_ra_event_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ip6_nd \
_(VL_API_SW_INTERFACE_IP6ND_RA_CONFIG, sw_interface_ip6nd_ra_config, 3eb00b1c) \
_(VL_API_SW_INTERFACE_IP6ND_RA_CONFIG_REPLY, sw_interface_ip6nd_ra_config_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_IP6ND_RA_PREFIX, sw_interface_ip6nd_ra_prefix, e098785f) \
_(VL_API_SW_INTERFACE_IP6ND_RA_PREFIX_REPLY, sw_interface_ip6nd_ra_prefix_reply, e8d4e804) \
_(VL_API_IP6ND_PROXY_ADD_DEL, ip6nd_proxy_add_del, 3fdf6659) \
_(VL_API_IP6ND_PROXY_ADD_DEL_REPLY, ip6nd_proxy_add_del_reply, e8d4e804) \
_(VL_API_IP6ND_PROXY_DETAILS, ip6nd_proxy_details, d35be8ff) \
_(VL_API_IP6ND_PROXY_DUMP, ip6nd_proxy_dump, 51077d14) \
_(VL_API_IP6ND_SEND_ROUTER_SOLICITATION, ip6nd_send_router_solicitation, e5de609c) \
_(VL_API_IP6ND_SEND_ROUTER_SOLICITATION_REPLY, ip6nd_send_router_solicitation_reply, e8d4e804) \
_(VL_API_WANT_IP6_RA_EVENTS, want_ip6_ra_events, 3ec6d6c2) \
_(VL_API_WANT_IP6_RA_EVENTS_REPLY, want_ip6_ra_events_reply, e8d4e804) \
_(VL_API_IP6_RA_EVENT, ip6_ra_event, 47e8cfbe) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "ip6_nd.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ip6_nd_printfun_types
#define included_ip6_nd_printfun_types

static inline u8 *format_vl_api_ip6_ra_prefix_info_t (u8 *s, va_list * args)
{
    vl_api_ip6_ra_prefix_info_t *a = va_arg (*args, vl_api_ip6_ra_prefix_info_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->prefix, indent);
    s = format(s, "\n%Uflags: %u", format_white_space, indent, a->flags);
    s = format(s, "\n%Uvalid_time: %u", format_white_space, indent, a->valid_time);
    s = format(s, "\n%Upreferred_time: %u", format_white_space, indent, a->preferred_time);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ip6_nd_printfun
#define included_ip6_nd_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_sw_interface_ip6nd_ra_config_t_print (vl_api_sw_interface_ip6nd_ra_config_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_ip6nd_ra_config_t: */
    s = format(s, "vl_api_sw_interface_ip6nd_ra_config_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Usuppress: %u", format_white_space, indent, a->suppress);
    s = format(s, "\n%Umanaged: %u", format_white_space, indent, a->managed);
    s = format(s, "\n%Uother: %u", format_white_space, indent, a->other);
    s = format(s, "\n%Ull_option: %u", format_white_space, indent, a->ll_option);
    s = format(s, "\n%Usend_unicast: %u", format_white_space, indent, a->send_unicast);
    s = format(s, "\n%Ucease: %u", format_white_space, indent, a->cease);
    s = format(s, "\n%Uis_no: %u", format_white_space, indent, a->is_no);
    s = format(s, "\n%Udefault_router: %u", format_white_space, indent, a->default_router);
    s = format(s, "\n%Umax_interval: %u", format_white_space, indent, a->max_interval);
    s = format(s, "\n%Umin_interval: %u", format_white_space, indent, a->min_interval);
    s = format(s, "\n%Ulifetime: %u", format_white_space, indent, a->lifetime);
    s = format(s, "\n%Uinitial_count: %u", format_white_space, indent, a->initial_count);
    s = format(s, "\n%Uinitial_interval: %u", format_white_space, indent, a->initial_interval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_ip6nd_ra_config_reply_t_print (vl_api_sw_interface_ip6nd_ra_config_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_ip6nd_ra_config_reply_t: */
    s = format(s, "vl_api_sw_interface_ip6nd_ra_config_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_ip6nd_ra_prefix_t_print (vl_api_sw_interface_ip6nd_ra_prefix_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_ip6nd_ra_prefix_t: */
    s = format(s, "vl_api_sw_interface_ip6nd_ra_prefix_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->prefix, indent);
    s = format(s, "\n%Uuse_default: %u", format_white_space, indent, a->use_default);
    s = format(s, "\n%Uno_advertise: %u", format_white_space, indent, a->no_advertise);
    s = format(s, "\n%Uoff_link: %u", format_white_space, indent, a->off_link);
    s = format(s, "\n%Uno_autoconfig: %u", format_white_space, indent, a->no_autoconfig);
    s = format(s, "\n%Uno_onlink: %u", format_white_space, indent, a->no_onlink);
    s = format(s, "\n%Uis_no: %u", format_white_space, indent, a->is_no);
    s = format(s, "\n%Uval_lifetime: %u", format_white_space, indent, a->val_lifetime);
    s = format(s, "\n%Upref_lifetime: %u", format_white_space, indent, a->pref_lifetime);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sw_interface_ip6nd_ra_prefix_reply_t_print (vl_api_sw_interface_ip6nd_ra_prefix_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sw_interface_ip6nd_ra_prefix_reply_t: */
    s = format(s, "vl_api_sw_interface_ip6nd_ra_prefix_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip6nd_proxy_add_del_t_print (vl_api_ip6nd_proxy_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip6nd_proxy_add_del_t: */
    s = format(s, "vl_api_ip6nd_proxy_add_del_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uip: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->ip, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip6nd_proxy_add_del_reply_t_print (vl_api_ip6nd_proxy_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip6nd_proxy_add_del_reply_t: */
    s = format(s, "vl_api_ip6nd_proxy_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip6nd_proxy_details_t_print (vl_api_ip6nd_proxy_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip6nd_proxy_details_t: */
    s = format(s, "vl_api_ip6nd_proxy_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uip: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->ip, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip6nd_proxy_dump_t_print (vl_api_ip6nd_proxy_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip6nd_proxy_dump_t: */
    s = format(s, "vl_api_ip6nd_proxy_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip6nd_send_router_solicitation_t_print (vl_api_ip6nd_send_router_solicitation_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip6nd_send_router_solicitation_t: */
    s = format(s, "vl_api_ip6nd_send_router_solicitation_t:");
    s = format(s, "\n%Uirt: %u", format_white_space, indent, a->irt);
    s = format(s, "\n%Umrt: %u", format_white_space, indent, a->mrt);
    s = format(s, "\n%Umrc: %u", format_white_space, indent, a->mrc);
    s = format(s, "\n%Umrd: %u", format_white_space, indent, a->mrd);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ustop: %u", format_white_space, indent, a->stop);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip6nd_send_router_solicitation_reply_t_print (vl_api_ip6nd_send_router_solicitation_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip6nd_send_router_solicitation_reply_t: */
    s = format(s, "vl_api_ip6nd_send_router_solicitation_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_ip6_ra_events_t_print (vl_api_want_ip6_ra_events_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_ip6_ra_events_t: */
    s = format(s, "vl_api_want_ip6_ra_events_t:");
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_ip6_ra_events_reply_t_print (vl_api_want_ip6_ra_events_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_ip6_ra_events_reply_t: */
    s = format(s, "vl_api_want_ip6_ra_events_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ip6_ra_event_t_print (vl_api_ip6_ra_event_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ip6_ra_event_t: */
    s = format(s, "vl_api_ip6_ra_event_t:");
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Urouter_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->router_addr, indent);
    s = format(s, "\n%Ucurrent_hop_limit: %u", format_white_space, indent, a->current_hop_limit);
    s = format(s, "\n%Uflags: %u", format_white_space, indent, a->flags);
    s = format(s, "\n%Urouter_lifetime_in_sec: %u", format_white_space, indent, a->router_lifetime_in_sec);
    s = format(s, "\n%Uneighbor_reachable_time_in_msec: %u", format_white_space, indent, a->neighbor_reachable_time_in_msec);
    s = format(s, "\n%Utime_in_msec_between_retransmitted_neighbor_solicitations: %u", format_white_space, indent, a->time_in_msec_between_retransmitted_neighbor_solicitations);
    s = format(s, "\n%Un_prefixes: %u", format_white_space, indent, a->n_prefixes);
    for (i = 0; i < a->n_prefixes; i++) {
        s = format(s, "\n%Uprefixes: %U",
                   format_white_space, indent, format_vl_api_ip6_ra_prefix_info_t, &a->prefixes[i], indent);
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
#ifndef included_ip6_nd_endianfun
#define included_ip6_nd_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_ip6_ra_prefix_info_t_endian (vl_api_ip6_ra_prefix_info_t *a)
{
    int i __attribute__((unused));
    vl_api_prefix_t_endian(&a->prefix);
    /* a->flags = a->flags (no-op) */
    a->valid_time = clib_net_to_host_u32(a->valid_time);
    a->preferred_time = clib_net_to_host_u32(a->preferred_time);
}

static inline void vl_api_sw_interface_ip6nd_ra_config_t_endian (vl_api_sw_interface_ip6nd_ra_config_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->suppress = a->suppress (no-op) */
    /* a->managed = a->managed (no-op) */
    /* a->other = a->other (no-op) */
    /* a->ll_option = a->ll_option (no-op) */
    /* a->send_unicast = a->send_unicast (no-op) */
    /* a->cease = a->cease (no-op) */
    /* a->is_no = a->is_no (no-op) */
    /* a->default_router = a->default_router (no-op) */
    a->max_interval = clib_net_to_host_u32(a->max_interval);
    a->min_interval = clib_net_to_host_u32(a->min_interval);
    a->lifetime = clib_net_to_host_u32(a->lifetime);
    a->initial_count = clib_net_to_host_u32(a->initial_count);
    a->initial_interval = clib_net_to_host_u32(a->initial_interval);
}

static inline void vl_api_sw_interface_ip6nd_ra_config_reply_t_endian (vl_api_sw_interface_ip6nd_ra_config_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sw_interface_ip6nd_ra_prefix_t_endian (vl_api_sw_interface_ip6nd_ra_prefix_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_prefix_t_endian(&a->prefix);
    /* a->use_default = a->use_default (no-op) */
    /* a->no_advertise = a->no_advertise (no-op) */
    /* a->off_link = a->off_link (no-op) */
    /* a->no_autoconfig = a->no_autoconfig (no-op) */
    /* a->no_onlink = a->no_onlink (no-op) */
    /* a->is_no = a->is_no (no-op) */
    a->val_lifetime = clib_net_to_host_u32(a->val_lifetime);
    a->pref_lifetime = clib_net_to_host_u32(a->pref_lifetime);
}

static inline void vl_api_sw_interface_ip6nd_ra_prefix_reply_t_endian (vl_api_sw_interface_ip6nd_ra_prefix_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip6nd_proxy_add_del_t_endian (vl_api_ip6nd_proxy_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_add = a->is_add (no-op) */
    vl_api_ip6_address_t_endian(&a->ip);
}

static inline void vl_api_ip6nd_proxy_add_del_reply_t_endian (vl_api_ip6nd_proxy_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip6nd_proxy_details_t_endian (vl_api_ip6nd_proxy_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_ip6_address_t_endian(&a->ip);
}

static inline void vl_api_ip6nd_proxy_dump_t_endian (vl_api_ip6nd_proxy_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ip6nd_send_router_solicitation_t_endian (vl_api_ip6nd_send_router_solicitation_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->irt = clib_net_to_host_u32(a->irt);
    a->mrt = clib_net_to_host_u32(a->mrt);
    a->mrc = clib_net_to_host_u32(a->mrc);
    a->mrd = clib_net_to_host_u32(a->mrd);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->stop = a->stop (no-op) */
}

static inline void vl_api_ip6nd_send_router_solicitation_reply_t_endian (vl_api_ip6nd_send_router_solicitation_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_want_ip6_ra_events_t_endian (vl_api_want_ip6_ra_events_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

static inline void vl_api_want_ip6_ra_events_reply_t_endian (vl_api_want_ip6_ra_events_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ip6_ra_event_t_endian (vl_api_ip6_ra_event_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_ip6_address_t_endian(&a->router_addr);
    /* a->current_hop_limit = a->current_hop_limit (no-op) */
    /* a->flags = a->flags (no-op) */
    a->router_lifetime_in_sec = clib_net_to_host_u16(a->router_lifetime_in_sec);
    a->neighbor_reachable_time_in_msec = clib_net_to_host_u32(a->neighbor_reachable_time_in_msec);
    a->time_in_msec_between_retransmitted_neighbor_solicitations = clib_net_to_host_u32(a->time_in_msec_between_retransmitted_neighbor_solicitations);
    a->n_prefixes = clib_net_to_host_u32(a->n_prefixes);
    for (i = 0; i < a->n_prefixes; i++) {
        vl_api_ip6_ra_prefix_info_t_endian(&a->prefixes[i]);
    }
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(ip6_nd.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ip6_nd.api, 0xac628462)

#endif

