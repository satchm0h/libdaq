/*
 * VLIB API definitions 2020-07-24 16:29:22
 * Input file: vrrp.api
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
#warning no content included from vrrp.api
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
vl_msg_id(VL_API_VRRP_VR_ADD_DEL, vl_api_vrrp_vr_add_del_t_handler)
vl_msg_id(VL_API_VRRP_VR_ADD_DEL_REPLY, vl_api_vrrp_vr_add_del_reply_t_handler)
vl_msg_id(VL_API_VRRP_VR_DUMP, vl_api_vrrp_vr_dump_t_handler)
vl_msg_id(VL_API_VRRP_VR_DETAILS, vl_api_vrrp_vr_details_t_handler)
vl_msg_id(VL_API_VRRP_VR_START_STOP, vl_api_vrrp_vr_start_stop_t_handler)
vl_msg_id(VL_API_VRRP_VR_START_STOP_REPLY, vl_api_vrrp_vr_start_stop_reply_t_handler)
vl_msg_id(VL_API_VRRP_VR_SET_PEERS, vl_api_vrrp_vr_set_peers_t_handler)
vl_msg_id(VL_API_VRRP_VR_SET_PEERS_REPLY, vl_api_vrrp_vr_set_peers_reply_t_handler)
vl_msg_id(VL_API_VRRP_VR_PEER_DUMP, vl_api_vrrp_vr_peer_dump_t_handler)
vl_msg_id(VL_API_VRRP_VR_PEER_DETAILS, vl_api_vrrp_vr_peer_details_t_handler)
vl_msg_id(VL_API_VRRP_VR_TRACK_IF_ADD_DEL, vl_api_vrrp_vr_track_if_add_del_t_handler)
vl_msg_id(VL_API_VRRP_VR_TRACK_IF_ADD_DEL_REPLY, vl_api_vrrp_vr_track_if_add_del_reply_t_handler)
vl_msg_id(VL_API_VRRP_VR_TRACK_IF_DUMP, vl_api_vrrp_vr_track_if_dump_t_handler)
vl_msg_id(VL_API_VRRP_VR_TRACK_IF_DETAILS, vl_api_vrrp_vr_track_if_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_vrrp_vr_add_del_t, 1)
vl_msg_name(vl_api_vrrp_vr_add_del_reply_t, 1)
vl_msg_name(vl_api_vrrp_vr_dump_t, 1)
vl_msg_name(vl_api_vrrp_vr_details_t, 1)
vl_msg_name(vl_api_vrrp_vr_start_stop_t, 1)
vl_msg_name(vl_api_vrrp_vr_start_stop_reply_t, 1)
vl_msg_name(vl_api_vrrp_vr_set_peers_t, 1)
vl_msg_name(vl_api_vrrp_vr_set_peers_reply_t, 1)
vl_msg_name(vl_api_vrrp_vr_peer_dump_t, 1)
vl_msg_name(vl_api_vrrp_vr_peer_details_t, 1)
vl_msg_name(vl_api_vrrp_vr_track_if_add_del_t, 1)
vl_msg_name(vl_api_vrrp_vr_track_if_add_del_reply_t, 1)
vl_msg_name(vl_api_vrrp_vr_track_if_dump_t, 1)
vl_msg_name(vl_api_vrrp_vr_track_if_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_vrrp \
_(VL_API_VRRP_VR_ADD_DEL, vrrp_vr_add_del, 6dc4b881) \
_(VL_API_VRRP_VR_ADD_DEL_REPLY, vrrp_vr_add_del_reply, e8d4e804) \
_(VL_API_VRRP_VR_DUMP, vrrp_vr_dump, f9e6675e) \
_(VL_API_VRRP_VR_DETAILS, vrrp_vr_details, 0412fa71) \
_(VL_API_VRRP_VR_START_STOP, vrrp_vr_start_stop, 0662a3b7) \
_(VL_API_VRRP_VR_START_STOP_REPLY, vrrp_vr_start_stop_reply, e8d4e804) \
_(VL_API_VRRP_VR_SET_PEERS, vrrp_vr_set_peers, baa2e52b) \
_(VL_API_VRRP_VR_SET_PEERS_REPLY, vrrp_vr_set_peers_reply, e8d4e804) \
_(VL_API_VRRP_VR_PEER_DUMP, vrrp_vr_peer_dump, 6fa3f7c4) \
_(VL_API_VRRP_VR_PEER_DETAILS, vrrp_vr_peer_details, abd9145e) \
_(VL_API_VRRP_VR_TRACK_IF_ADD_DEL, vrrp_vr_track_if_add_del, 337f4ba4) \
_(VL_API_VRRP_VR_TRACK_IF_ADD_DEL_REPLY, vrrp_vr_track_if_add_del_reply, e8d4e804) \
_(VL_API_VRRP_VR_TRACK_IF_DUMP, vrrp_vr_track_if_dump, a34dfc6d) \
_(VL_API_VRRP_VR_TRACK_IF_DETAILS, vrrp_vr_track_if_details, 99bcca9c) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "vrrp.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_vrrp_printfun_types
#define included_vrrp_printfun_types

static inline u8 *format_vl_api_vrrp_vr_key_t (u8 *s, va_list * args)
{
    vl_api_vrrp_vr_key_t *a = va_arg (*args, vl_api_vrrp_vr_key_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvr_id: %u", format_white_space, indent, a->vr_id);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    return s;
}

static inline u8 *format_vl_api_vrrp_vr_flags_t (u8 *s, va_list * args)
{
    vl_api_vrrp_vr_flags_t *a = va_arg (*args, vl_api_vrrp_vr_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "VRRP_API_VR_PREEMPT");
    case 2:
        return format(s, "VRRP_API_VR_ACCEPT");
    case 4:
        return format(s, "VRRP_API_VR_UNICAST");
    case 8:
        return format(s, "VRRP_API_VR_IPV6");
    }
    return s;
}

static inline u8 *format_vl_api_vrrp_vr_conf_t (u8 *s, va_list * args)
{
    vl_api_vrrp_vr_conf_t *a = va_arg (*args, vl_api_vrrp_vr_conf_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvr_id: %u", format_white_space, indent, a->vr_id);
    s = format(s, "\n%Upriority: %u", format_white_space, indent, a->priority);
    s = format(s, "\n%Uinterval: %u", format_white_space, indent, a->interval);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_vrrp_vr_flags_t, &a->flags, indent);
    return s;
}

static inline u8 *format_vl_api_vrrp_vr_state_t (u8 *s, va_list * args)
{
    vl_api_vrrp_vr_state_t *a = va_arg (*args, vl_api_vrrp_vr_state_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "VRRP_API_VR_STATE_INIT");
    case 1:
        return format(s, "VRRP_API_VR_STATE_BACKUP");
    case 2:
        return format(s, "VRRP_API_VR_STATE_MASTER");
    case 3:
        return format(s, "VRRP_API_VR_STATE_INTF_DOWN");
    }
    return s;
}

static inline u8 *format_vl_api_vrrp_vr_tracking_t (u8 *s, va_list * args)
{
    vl_api_vrrp_vr_tracking_t *a = va_arg (*args, vl_api_vrrp_vr_tracking_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uinterfaces_dec: %u", format_white_space, indent, a->interfaces_dec);
    s = format(s, "\n%Upriority: %u", format_white_space, indent, a->priority);
    return s;
}

static inline u8 *format_vl_api_vrrp_vr_runtime_t (u8 *s, va_list * args)
{
    vl_api_vrrp_vr_runtime_t *a = va_arg (*args, vl_api_vrrp_vr_runtime_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ustate: %U", format_white_space, indent, format_vl_api_vrrp_vr_state_t, &a->state, indent);
    s = format(s, "\n%Umaster_adv_int: %u", format_white_space, indent, a->master_adv_int);
    s = format(s, "\n%Uskew: %u", format_white_space, indent, a->skew);
    s = format(s, "\n%Umaster_down_int: %u", format_white_space, indent, a->master_down_int);
    s = format(s, "\n%Umac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac, indent);
    s = format(s, "\n%Utracking: %U", format_white_space, indent, format_vl_api_vrrp_vr_tracking_t, &a->tracking, indent);
    return s;
}

static inline u8 *format_vl_api_vrrp_vr_track_if_t (u8 *s, va_list * args)
{
    vl_api_vrrp_vr_track_if_t *a = va_arg (*args, vl_api_vrrp_vr_track_if_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Upriority: %u", format_white_space, indent, a->priority);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_vrrp_printfun
#define included_vrrp_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_vrrp_vr_add_del_t_print (vl_api_vrrp_vr_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_add_del_t: */
    s = format(s, "vl_api_vrrp_vr_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvr_id: %u", format_white_space, indent, a->vr_id);
    s = format(s, "\n%Upriority: %u", format_white_space, indent, a->priority);
    s = format(s, "\n%Uinterval: %u", format_white_space, indent, a->interval);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_vrrp_vr_flags_t, &a->flags, indent);
    s = format(s, "\n%Un_addrs: %u", format_white_space, indent, a->n_addrs);
    for (i = 0; i < a->n_addrs; i++) {
        s = format(s, "\n%Uaddrs: %U",
                   format_white_space, indent, format_vl_api_address_t, &a->addrs[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_add_del_reply_t_print (vl_api_vrrp_vr_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_add_del_reply_t: */
    s = format(s, "vl_api_vrrp_vr_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_dump_t_print (vl_api_vrrp_vr_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_dump_t: */
    s = format(s, "vl_api_vrrp_vr_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_details_t_print (vl_api_vrrp_vr_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_details_t: */
    s = format(s, "vl_api_vrrp_vr_details_t:");
    s = format(s, "\n%Uconfig: %U", format_white_space, indent, format_vl_api_vrrp_vr_conf_t, &a->config, indent);
    s = format(s, "\n%Uruntime: %U", format_white_space, indent, format_vl_api_vrrp_vr_runtime_t, &a->runtime, indent);
    s = format(s, "\n%Un_addrs: %u", format_white_space, indent, a->n_addrs);
    for (i = 0; i < a->n_addrs; i++) {
        s = format(s, "\n%Uaddrs: %U",
                   format_white_space, indent, format_vl_api_address_t, &a->addrs[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_start_stop_t_print (vl_api_vrrp_vr_start_stop_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_start_stop_t: */
    s = format(s, "vl_api_vrrp_vr_start_stop_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvr_id: %u", format_white_space, indent, a->vr_id);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Uis_start: %u", format_white_space, indent, a->is_start);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_start_stop_reply_t_print (vl_api_vrrp_vr_start_stop_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_start_stop_reply_t: */
    s = format(s, "vl_api_vrrp_vr_start_stop_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_set_peers_t_print (vl_api_vrrp_vr_set_peers_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_set_peers_t: */
    s = format(s, "vl_api_vrrp_vr_set_peers_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvr_id: %u", format_white_space, indent, a->vr_id);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Un_addrs: %u", format_white_space, indent, a->n_addrs);
    for (i = 0; i < a->n_addrs; i++) {
        s = format(s, "\n%Uaddrs: %U",
                   format_white_space, indent, format_vl_api_address_t, &a->addrs[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_set_peers_reply_t_print (vl_api_vrrp_vr_set_peers_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_set_peers_reply_t: */
    s = format(s, "vl_api_vrrp_vr_set_peers_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_peer_dump_t_print (vl_api_vrrp_vr_peer_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_peer_dump_t: */
    s = format(s, "vl_api_vrrp_vr_peer_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Uvr_id: %u", format_white_space, indent, a->vr_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_peer_details_t_print (vl_api_vrrp_vr_peer_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_peer_details_t: */
    s = format(s, "vl_api_vrrp_vr_peer_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvr_id: %u", format_white_space, indent, a->vr_id);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Un_peer_addrs: %u", format_white_space, indent, a->n_peer_addrs);
    for (i = 0; i < a->n_peer_addrs; i++) {
        s = format(s, "\n%Upeer_addrs: %U",
                   format_white_space, indent, format_vl_api_address_t, &a->peer_addrs[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_track_if_add_del_t_print (vl_api_vrrp_vr_track_if_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_track_if_add_del_t: */
    s = format(s, "vl_api_vrrp_vr_track_if_add_del_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Uvr_id: %u", format_white_space, indent, a->vr_id);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Un_ifs: %u", format_white_space, indent, a->n_ifs);
    for (i = 0; i < a->n_ifs; i++) {
        s = format(s, "\n%Uifs: %U",
                   format_white_space, indent, format_vl_api_vrrp_vr_track_if_t, &a->ifs[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_track_if_add_del_reply_t_print (vl_api_vrrp_vr_track_if_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_track_if_add_del_reply_t: */
    s = format(s, "vl_api_vrrp_vr_track_if_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_track_if_dump_t_print (vl_api_vrrp_vr_track_if_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_track_if_dump_t: */
    s = format(s, "vl_api_vrrp_vr_track_if_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Uvr_id: %u", format_white_space, indent, a->vr_id);
    s = format(s, "\n%Udump_all: %u", format_white_space, indent, a->dump_all);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_vrrp_vr_track_if_details_t_print (vl_api_vrrp_vr_track_if_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_vrrp_vr_track_if_details_t: */
    s = format(s, "vl_api_vrrp_vr_track_if_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvr_id: %u", format_white_space, indent, a->vr_id);
    s = format(s, "\n%Uis_ipv6: %u", format_white_space, indent, a->is_ipv6);
    s = format(s, "\n%Un_ifs: %u", format_white_space, indent, a->n_ifs);
    for (i = 0; i < a->n_ifs; i++) {
        s = format(s, "\n%Uifs: %U",
                   format_white_space, indent, format_vl_api_vrrp_vr_track_if_t, &a->ifs[i], indent);
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
#ifndef included_vrrp_endianfun
#define included_vrrp_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_vrrp_vr_key_t_endian (vl_api_vrrp_vr_key_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->vr_id = a->vr_id (no-op) */
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

static inline void vl_api_vrrp_vr_flags_t_endian (vl_api_vrrp_vr_flags_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_vrrp_vr_conf_t_endian (vl_api_vrrp_vr_conf_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->vr_id = a->vr_id (no-op) */
    /* a->priority = a->priority (no-op) */
    a->interval = clib_net_to_host_u16(a->interval);
    vl_api_vrrp_vr_flags_t_endian(&a->flags);
}

static inline void vl_api_vrrp_vr_state_t_endian (vl_api_vrrp_vr_state_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_vrrp_vr_tracking_t_endian (vl_api_vrrp_vr_tracking_t *a)
{
    int i __attribute__((unused));
    a->interfaces_dec = clib_net_to_host_u32(a->interfaces_dec);
    /* a->priority = a->priority (no-op) */
}

static inline void vl_api_vrrp_vr_runtime_t_endian (vl_api_vrrp_vr_runtime_t *a)
{
    int i __attribute__((unused));
    vl_api_vrrp_vr_state_t_endian(&a->state);
    a->master_adv_int = clib_net_to_host_u16(a->master_adv_int);
    a->skew = clib_net_to_host_u16(a->skew);
    a->master_down_int = clib_net_to_host_u16(a->master_down_int);
    vl_api_mac_address_t_endian(&a->mac);
    vl_api_vrrp_vr_tracking_t_endian(&a->tracking);
}

static inline void vl_api_vrrp_vr_track_if_t_endian (vl_api_vrrp_vr_track_if_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->priority = a->priority (no-op) */
}

static inline void vl_api_vrrp_vr_add_del_t_endian (vl_api_vrrp_vr_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->vr_id = a->vr_id (no-op) */
    /* a->priority = a->priority (no-op) */
    a->interval = clib_net_to_host_u16(a->interval);
    vl_api_vrrp_vr_flags_t_endian(&a->flags);
    /* a->n_addrs = a->n_addrs (no-op) */
    for (i = 0; i < a->n_addrs; i++) {
        vl_api_address_t_endian(&a->addrs[i]);
    }
}

static inline void vl_api_vrrp_vr_add_del_reply_t_endian (vl_api_vrrp_vr_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_vrrp_vr_dump_t_endian (vl_api_vrrp_vr_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_vrrp_vr_details_t_endian (vl_api_vrrp_vr_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_vrrp_vr_conf_t_endian(&a->config);
    vl_api_vrrp_vr_runtime_t_endian(&a->runtime);
    /* a->n_addrs = a->n_addrs (no-op) */
    for (i = 0; i < a->n_addrs; i++) {
        vl_api_address_t_endian(&a->addrs[i]);
    }
}

static inline void vl_api_vrrp_vr_start_stop_t_endian (vl_api_vrrp_vr_start_stop_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->vr_id = a->vr_id (no-op) */
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->is_start = a->is_start (no-op) */
}

static inline void vl_api_vrrp_vr_start_stop_reply_t_endian (vl_api_vrrp_vr_start_stop_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_vrrp_vr_set_peers_t_endian (vl_api_vrrp_vr_set_peers_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->vr_id = a->vr_id (no-op) */
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->n_addrs = a->n_addrs (no-op) */
    for (i = 0; i < a->n_addrs; i++) {
        vl_api_address_t_endian(&a->addrs[i]);
    }
}

static inline void vl_api_vrrp_vr_set_peers_reply_t_endian (vl_api_vrrp_vr_set_peers_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_vrrp_vr_peer_dump_t_endian (vl_api_vrrp_vr_peer_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->vr_id = a->vr_id (no-op) */
}

static inline void vl_api_vrrp_vr_peer_details_t_endian (vl_api_vrrp_vr_peer_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->vr_id = a->vr_id (no-op) */
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->n_peer_addrs = a->n_peer_addrs (no-op) */
    for (i = 0; i < a->n_peer_addrs; i++) {
        vl_api_address_t_endian(&a->peer_addrs[i]);
    }
}

static inline void vl_api_vrrp_vr_track_if_add_del_t_endian (vl_api_vrrp_vr_track_if_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->vr_id = a->vr_id (no-op) */
    /* a->is_add = a->is_add (no-op) */
    /* a->n_ifs = a->n_ifs (no-op) */
    for (i = 0; i < a->n_ifs; i++) {
        vl_api_vrrp_vr_track_if_t_endian(&a->ifs[i]);
    }
}

static inline void vl_api_vrrp_vr_track_if_add_del_reply_t_endian (vl_api_vrrp_vr_track_if_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_vrrp_vr_track_if_dump_t_endian (vl_api_vrrp_vr_track_if_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->vr_id = a->vr_id (no-op) */
    /* a->dump_all = a->dump_all (no-op) */
}

static inline void vl_api_vrrp_vr_track_if_details_t_endian (vl_api_vrrp_vr_track_if_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->vr_id = a->vr_id (no-op) */
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->n_ifs = a->n_ifs (no-op) */
    for (i = 0; i < a->n_ifs; i++) {
        vl_api_vrrp_vr_track_if_t_endian(&a->ifs[i]);
    }
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(vrrp.api, 1, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(vrrp.api, 0x497fa0be)

#endif

