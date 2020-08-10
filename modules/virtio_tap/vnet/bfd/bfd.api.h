/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: bfd.api
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
#warning no content included from bfd.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_BFD_UDP_SET_ECHO_SOURCE, vl_api_bfd_udp_set_echo_source_t_handler)
vl_msg_id(VL_API_BFD_UDP_SET_ECHO_SOURCE_REPLY, vl_api_bfd_udp_set_echo_source_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_DEL_ECHO_SOURCE, vl_api_bfd_udp_del_echo_source_t_handler)
vl_msg_id(VL_API_BFD_UDP_DEL_ECHO_SOURCE_REPLY, vl_api_bfd_udp_del_echo_source_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_GET_ECHO_SOURCE, vl_api_bfd_udp_get_echo_source_t_handler)
vl_msg_id(VL_API_BFD_UDP_GET_ECHO_SOURCE_REPLY, vl_api_bfd_udp_get_echo_source_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_ADD, vl_api_bfd_udp_add_t_handler)
vl_msg_id(VL_API_BFD_UDP_ADD_REPLY, vl_api_bfd_udp_add_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_MOD, vl_api_bfd_udp_mod_t_handler)
vl_msg_id(VL_API_BFD_UDP_MOD_REPLY, vl_api_bfd_udp_mod_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_DEL, vl_api_bfd_udp_del_t_handler)
vl_msg_id(VL_API_BFD_UDP_DEL_REPLY, vl_api_bfd_udp_del_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_SESSION_DUMP, vl_api_bfd_udp_session_dump_t_handler)
vl_msg_id(VL_API_BFD_UDP_SESSION_DETAILS, vl_api_bfd_udp_session_details_t_handler)
vl_msg_id(VL_API_BFD_UDP_SESSION_SET_FLAGS, vl_api_bfd_udp_session_set_flags_t_handler)
vl_msg_id(VL_API_BFD_UDP_SESSION_SET_FLAGS_REPLY, vl_api_bfd_udp_session_set_flags_reply_t_handler)
vl_msg_id(VL_API_WANT_BFD_EVENTS, vl_api_want_bfd_events_t_handler)
vl_msg_id(VL_API_WANT_BFD_EVENTS_REPLY, vl_api_want_bfd_events_reply_t_handler)
vl_msg_id(VL_API_BFD_AUTH_SET_KEY, vl_api_bfd_auth_set_key_t_handler)
vl_msg_id(VL_API_BFD_AUTH_SET_KEY_REPLY, vl_api_bfd_auth_set_key_reply_t_handler)
vl_msg_id(VL_API_BFD_AUTH_DEL_KEY, vl_api_bfd_auth_del_key_t_handler)
vl_msg_id(VL_API_BFD_AUTH_DEL_KEY_REPLY, vl_api_bfd_auth_del_key_reply_t_handler)
vl_msg_id(VL_API_BFD_AUTH_KEYS_DUMP, vl_api_bfd_auth_keys_dump_t_handler)
vl_msg_id(VL_API_BFD_AUTH_KEYS_DETAILS, vl_api_bfd_auth_keys_details_t_handler)
vl_msg_id(VL_API_BFD_UDP_AUTH_ACTIVATE, vl_api_bfd_udp_auth_activate_t_handler)
vl_msg_id(VL_API_BFD_UDP_AUTH_ACTIVATE_REPLY, vl_api_bfd_udp_auth_activate_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_AUTH_DEACTIVATE, vl_api_bfd_udp_auth_deactivate_t_handler)
vl_msg_id(VL_API_BFD_UDP_AUTH_DEACTIVATE_REPLY, vl_api_bfd_udp_auth_deactivate_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_bfd_udp_set_echo_source_t, 1)
vl_msg_name(vl_api_bfd_udp_set_echo_source_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_del_echo_source_t, 1)
vl_msg_name(vl_api_bfd_udp_del_echo_source_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_get_echo_source_t, 1)
vl_msg_name(vl_api_bfd_udp_get_echo_source_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_add_t, 1)
vl_msg_name(vl_api_bfd_udp_add_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_mod_t, 1)
vl_msg_name(vl_api_bfd_udp_mod_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_del_t, 1)
vl_msg_name(vl_api_bfd_udp_del_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_session_dump_t, 1)
vl_msg_name(vl_api_bfd_udp_session_details_t, 1)
vl_msg_name(vl_api_bfd_udp_session_set_flags_t, 1)
vl_msg_name(vl_api_bfd_udp_session_set_flags_reply_t, 1)
vl_msg_name(vl_api_want_bfd_events_t, 1)
vl_msg_name(vl_api_want_bfd_events_reply_t, 1)
vl_msg_name(vl_api_bfd_auth_set_key_t, 1)
vl_msg_name(vl_api_bfd_auth_set_key_reply_t, 1)
vl_msg_name(vl_api_bfd_auth_del_key_t, 1)
vl_msg_name(vl_api_bfd_auth_del_key_reply_t, 1)
vl_msg_name(vl_api_bfd_auth_keys_dump_t, 1)
vl_msg_name(vl_api_bfd_auth_keys_details_t, 1)
vl_msg_name(vl_api_bfd_udp_auth_activate_t, 1)
vl_msg_name(vl_api_bfd_udp_auth_activate_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_auth_deactivate_t, 1)
vl_msg_name(vl_api_bfd_udp_auth_deactivate_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_bfd \
_(VL_API_BFD_UDP_SET_ECHO_SOURCE, bfd_udp_set_echo_source, f9e6675e) \
_(VL_API_BFD_UDP_SET_ECHO_SOURCE_REPLY, bfd_udp_set_echo_source_reply, e8d4e804) \
_(VL_API_BFD_UDP_DEL_ECHO_SOURCE, bfd_udp_del_echo_source, 51077d14) \
_(VL_API_BFD_UDP_DEL_ECHO_SOURCE_REPLY, bfd_udp_del_echo_source_reply, e8d4e804) \
_(VL_API_BFD_UDP_GET_ECHO_SOURCE, bfd_udp_get_echo_source, 51077d14) \
_(VL_API_BFD_UDP_GET_ECHO_SOURCE_REPLY, bfd_udp_get_echo_source_reply, 1e00cfce) \
_(VL_API_BFD_UDP_ADD, bfd_udp_add, 7a6d1185) \
_(VL_API_BFD_UDP_ADD_REPLY, bfd_udp_add_reply, e8d4e804) \
_(VL_API_BFD_UDP_MOD, bfd_udp_mod, 783a3ff6) \
_(VL_API_BFD_UDP_MOD_REPLY, bfd_udp_mod_reply, e8d4e804) \
_(VL_API_BFD_UDP_DEL, bfd_udp_del, 8096514d) \
_(VL_API_BFD_UDP_DEL_REPLY, bfd_udp_del_reply, e8d4e804) \
_(VL_API_BFD_UDP_SESSION_DUMP, bfd_udp_session_dump, 51077d14) \
_(VL_API_BFD_UDP_SESSION_DETAILS, bfd_udp_session_details, 60653c02) \
_(VL_API_BFD_UDP_SESSION_SET_FLAGS, bfd_udp_session_set_flags, cf313851) \
_(VL_API_BFD_UDP_SESSION_SET_FLAGS_REPLY, bfd_udp_session_set_flags_reply, e8d4e804) \
_(VL_API_WANT_BFD_EVENTS, want_bfd_events, c5e2af94) \
_(VL_API_WANT_BFD_EVENTS_REPLY, want_bfd_events_reply, e8d4e804) \
_(VL_API_BFD_AUTH_SET_KEY, bfd_auth_set_key, 690b8877) \
_(VL_API_BFD_AUTH_SET_KEY_REPLY, bfd_auth_set_key_reply, e8d4e804) \
_(VL_API_BFD_AUTH_DEL_KEY, bfd_auth_del_key, 65310b22) \
_(VL_API_BFD_AUTH_DEL_KEY_REPLY, bfd_auth_del_key_reply, e8d4e804) \
_(VL_API_BFD_AUTH_KEYS_DUMP, bfd_auth_keys_dump, 51077d14) \
_(VL_API_BFD_AUTH_KEYS_DETAILS, bfd_auth_keys_details, 84130e9f) \
_(VL_API_BFD_UDP_AUTH_ACTIVATE, bfd_udp_auth_activate, 493ee0ec) \
_(VL_API_BFD_UDP_AUTH_ACTIVATE_REPLY, bfd_udp_auth_activate_reply, e8d4e804) \
_(VL_API_BFD_UDP_AUTH_DEACTIVATE, bfd_udp_auth_deactivate, 99978c32) \
_(VL_API_BFD_UDP_AUTH_DEACTIVATE_REPLY, bfd_udp_auth_deactivate_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "bfd.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_bfd_printfun_types
#define included_bfd_printfun_types

static inline u8 *format_vl_api_bfd_state_t (u8 *s, va_list * args)
{
    vl_api_bfd_state_t *a = va_arg (*args, vl_api_bfd_state_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "BFD_STATE_API_ADMIN_DOWN");
    case 1:
        return format(s, "BFD_STATE_API_DOWN");
    case 2:
        return format(s, "BFD_STATE_API_INIT");
    case 3:
        return format(s, "BFD_STATE_API_UP");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_bfd_printfun
#define included_bfd_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_bfd_udp_set_echo_source_t_print (vl_api_bfd_udp_set_echo_source_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_set_echo_source_t: */
    s = format(s, "vl_api_bfd_udp_set_echo_source_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_set_echo_source_reply_t_print (vl_api_bfd_udp_set_echo_source_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_set_echo_source_reply_t: */
    s = format(s, "vl_api_bfd_udp_set_echo_source_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_del_echo_source_t_print (vl_api_bfd_udp_del_echo_source_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_del_echo_source_t: */
    s = format(s, "vl_api_bfd_udp_del_echo_source_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_del_echo_source_reply_t_print (vl_api_bfd_udp_del_echo_source_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_del_echo_source_reply_t: */
    s = format(s, "vl_api_bfd_udp_del_echo_source_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_get_echo_source_t_print (vl_api_bfd_udp_get_echo_source_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_get_echo_source_t: */
    s = format(s, "vl_api_bfd_udp_get_echo_source_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_get_echo_source_reply_t_print (vl_api_bfd_udp_get_echo_source_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_get_echo_source_reply_t: */
    s = format(s, "vl_api_bfd_udp_get_echo_source_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uis_set: %u", format_white_space, indent, a->is_set);
    s = format(s, "\n%Uhave_usable_ip4: %u", format_white_space, indent, a->have_usable_ip4);
    s = format(s, "\n%Uip4_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip4_addr, indent);
    s = format(s, "\n%Uhave_usable_ip6: %u", format_white_space, indent, a->have_usable_ip6);
    s = format(s, "\n%Uip6_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->ip6_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_add_t_print (vl_api_bfd_udp_add_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_add_t: */
    s = format(s, "vl_api_bfd_udp_add_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Udesired_min_tx: %u", format_white_space, indent, a->desired_min_tx);
    s = format(s, "\n%Urequired_min_rx: %u", format_white_space, indent, a->required_min_rx);
    s = format(s, "\n%Ulocal_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->local_addr, indent);
    s = format(s, "\n%Upeer_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->peer_addr, indent);
    s = format(s, "\n%Udetect_mult: %u", format_white_space, indent, a->detect_mult);
    s = format(s, "\n%Uis_authenticated: %u", format_white_space, indent, a->is_authenticated);
    s = format(s, "\n%Ubfd_key_id: %u", format_white_space, indent, a->bfd_key_id);
    s = format(s, "\n%Uconf_key_id: %u", format_white_space, indent, a->conf_key_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_add_reply_t_print (vl_api_bfd_udp_add_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_add_reply_t: */
    s = format(s, "vl_api_bfd_udp_add_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_mod_t_print (vl_api_bfd_udp_mod_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_mod_t: */
    s = format(s, "vl_api_bfd_udp_mod_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Udesired_min_tx: %u", format_white_space, indent, a->desired_min_tx);
    s = format(s, "\n%Urequired_min_rx: %u", format_white_space, indent, a->required_min_rx);
    s = format(s, "\n%Ulocal_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->local_addr, indent);
    s = format(s, "\n%Upeer_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->peer_addr, indent);
    s = format(s, "\n%Udetect_mult: %u", format_white_space, indent, a->detect_mult);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_mod_reply_t_print (vl_api_bfd_udp_mod_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_mod_reply_t: */
    s = format(s, "vl_api_bfd_udp_mod_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_del_t_print (vl_api_bfd_udp_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_del_t: */
    s = format(s, "vl_api_bfd_udp_del_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ulocal_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->local_addr, indent);
    s = format(s, "\n%Upeer_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->peer_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_del_reply_t_print (vl_api_bfd_udp_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_del_reply_t: */
    s = format(s, "vl_api_bfd_udp_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_session_dump_t_print (vl_api_bfd_udp_session_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_session_dump_t: */
    s = format(s, "vl_api_bfd_udp_session_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_session_details_t_print (vl_api_bfd_udp_session_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_session_details_t: */
    s = format(s, "vl_api_bfd_udp_session_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ulocal_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->local_addr, indent);
    s = format(s, "\n%Upeer_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->peer_addr, indent);
    s = format(s, "\n%Ustate: %U", format_white_space, indent, format_vl_api_bfd_state_t, &a->state, indent);
    s = format(s, "\n%Uis_authenticated: %u", format_white_space, indent, a->is_authenticated);
    s = format(s, "\n%Ubfd_key_id: %u", format_white_space, indent, a->bfd_key_id);
    s = format(s, "\n%Uconf_key_id: %u", format_white_space, indent, a->conf_key_id);
    s = format(s, "\n%Urequired_min_rx: %u", format_white_space, indent, a->required_min_rx);
    s = format(s, "\n%Udesired_min_tx: %u", format_white_space, indent, a->desired_min_tx);
    s = format(s, "\n%Udetect_mult: %u", format_white_space, indent, a->detect_mult);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_session_set_flags_t_print (vl_api_bfd_udp_session_set_flags_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_session_set_flags_t: */
    s = format(s, "vl_api_bfd_udp_session_set_flags_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ulocal_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->local_addr, indent);
    s = format(s, "\n%Upeer_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->peer_addr, indent);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_if_status_flags_t, &a->flags, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_session_set_flags_reply_t_print (vl_api_bfd_udp_session_set_flags_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_session_set_flags_reply_t: */
    s = format(s, "vl_api_bfd_udp_session_set_flags_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_bfd_events_t_print (vl_api_want_bfd_events_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_bfd_events_t: */
    s = format(s, "vl_api_want_bfd_events_t:");
    s = format(s, "\n%Uenable_disable: %u", format_white_space, indent, a->enable_disable);
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_bfd_events_reply_t_print (vl_api_want_bfd_events_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_bfd_events_reply_t: */
    s = format(s, "vl_api_want_bfd_events_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_auth_set_key_t_print (vl_api_bfd_auth_set_key_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_auth_set_key_t: */
    s = format(s, "vl_api_bfd_auth_set_key_t:");
    s = format(s, "\n%Uconf_key_id: %u", format_white_space, indent, a->conf_key_id);
    s = format(s, "\n%Ukey_len: %u", format_white_space, indent, a->key_len);
    s = format(s, "\n%Uauth_type: %u", format_white_space, indent, a->auth_type);
    s = format(s, "\n%Ukey: %U", format_white_space, indent, format_hex_bytes, a, 20);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_auth_set_key_reply_t_print (vl_api_bfd_auth_set_key_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_auth_set_key_reply_t: */
    s = format(s, "vl_api_bfd_auth_set_key_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_auth_del_key_t_print (vl_api_bfd_auth_del_key_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_auth_del_key_t: */
    s = format(s, "vl_api_bfd_auth_del_key_t:");
    s = format(s, "\n%Uconf_key_id: %u", format_white_space, indent, a->conf_key_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_auth_del_key_reply_t_print (vl_api_bfd_auth_del_key_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_auth_del_key_reply_t: */
    s = format(s, "vl_api_bfd_auth_del_key_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_auth_keys_dump_t_print (vl_api_bfd_auth_keys_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_auth_keys_dump_t: */
    s = format(s, "vl_api_bfd_auth_keys_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_auth_keys_details_t_print (vl_api_bfd_auth_keys_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_auth_keys_details_t: */
    s = format(s, "vl_api_bfd_auth_keys_details_t:");
    s = format(s, "\n%Uconf_key_id: %u", format_white_space, indent, a->conf_key_id);
    s = format(s, "\n%Uuse_count: %u", format_white_space, indent, a->use_count);
    s = format(s, "\n%Uauth_type: %u", format_white_space, indent, a->auth_type);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_auth_activate_t_print (vl_api_bfd_udp_auth_activate_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_auth_activate_t: */
    s = format(s, "vl_api_bfd_udp_auth_activate_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ulocal_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->local_addr, indent);
    s = format(s, "\n%Upeer_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->peer_addr, indent);
    s = format(s, "\n%Uis_delayed: %u", format_white_space, indent, a->is_delayed);
    s = format(s, "\n%Ubfd_key_id: %u", format_white_space, indent, a->bfd_key_id);
    s = format(s, "\n%Uconf_key_id: %u", format_white_space, indent, a->conf_key_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_auth_activate_reply_t_print (vl_api_bfd_udp_auth_activate_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_auth_activate_reply_t: */
    s = format(s, "vl_api_bfd_udp_auth_activate_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_auth_deactivate_t_print (vl_api_bfd_udp_auth_deactivate_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_auth_deactivate_t: */
    s = format(s, "vl_api_bfd_udp_auth_deactivate_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ulocal_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->local_addr, indent);
    s = format(s, "\n%Upeer_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->peer_addr, indent);
    s = format(s, "\n%Uis_delayed: %u", format_white_space, indent, a->is_delayed);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_bfd_udp_auth_deactivate_reply_t_print (vl_api_bfd_udp_auth_deactivate_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_bfd_udp_auth_deactivate_reply_t: */
    s = format(s, "vl_api_bfd_udp_auth_deactivate_reply_t:");
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
#ifndef included_bfd_endianfun
#define included_bfd_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_bfd_state_t_endian (vl_api_bfd_state_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_bfd_udp_set_echo_source_t_endian (vl_api_bfd_udp_set_echo_source_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_bfd_udp_set_echo_source_reply_t_endian (vl_api_bfd_udp_set_echo_source_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bfd_udp_del_echo_source_t_endian (vl_api_bfd_udp_del_echo_source_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_bfd_udp_del_echo_source_reply_t_endian (vl_api_bfd_udp_del_echo_source_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bfd_udp_get_echo_source_t_endian (vl_api_bfd_udp_get_echo_source_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_bfd_udp_get_echo_source_reply_t_endian (vl_api_bfd_udp_get_echo_source_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->is_set = a->is_set (no-op) */
    /* a->have_usable_ip4 = a->have_usable_ip4 (no-op) */
    vl_api_ip4_address_t_endian(&a->ip4_addr);
    /* a->have_usable_ip6 = a->have_usable_ip6 (no-op) */
    vl_api_ip6_address_t_endian(&a->ip6_addr);
}

static inline void vl_api_bfd_udp_add_t_endian (vl_api_bfd_udp_add_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->desired_min_tx = clib_net_to_host_u32(a->desired_min_tx);
    a->required_min_rx = clib_net_to_host_u32(a->required_min_rx);
    vl_api_address_t_endian(&a->local_addr);
    vl_api_address_t_endian(&a->peer_addr);
    /* a->detect_mult = a->detect_mult (no-op) */
    /* a->is_authenticated = a->is_authenticated (no-op) */
    /* a->bfd_key_id = a->bfd_key_id (no-op) */
    a->conf_key_id = clib_net_to_host_u32(a->conf_key_id);
}

static inline void vl_api_bfd_udp_add_reply_t_endian (vl_api_bfd_udp_add_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bfd_udp_mod_t_endian (vl_api_bfd_udp_mod_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->desired_min_tx = clib_net_to_host_u32(a->desired_min_tx);
    a->required_min_rx = clib_net_to_host_u32(a->required_min_rx);
    vl_api_address_t_endian(&a->local_addr);
    vl_api_address_t_endian(&a->peer_addr);
    /* a->detect_mult = a->detect_mult (no-op) */
}

static inline void vl_api_bfd_udp_mod_reply_t_endian (vl_api_bfd_udp_mod_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bfd_udp_del_t_endian (vl_api_bfd_udp_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_address_t_endian(&a->local_addr);
    vl_api_address_t_endian(&a->peer_addr);
}

static inline void vl_api_bfd_udp_del_reply_t_endian (vl_api_bfd_udp_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bfd_udp_session_dump_t_endian (vl_api_bfd_udp_session_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_bfd_udp_session_details_t_endian (vl_api_bfd_udp_session_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_address_t_endian(&a->local_addr);
    vl_api_address_t_endian(&a->peer_addr);
    vl_api_bfd_state_t_endian(&a->state);
    /* a->is_authenticated = a->is_authenticated (no-op) */
    /* a->bfd_key_id = a->bfd_key_id (no-op) */
    a->conf_key_id = clib_net_to_host_u32(a->conf_key_id);
    a->required_min_rx = clib_net_to_host_u32(a->required_min_rx);
    a->desired_min_tx = clib_net_to_host_u32(a->desired_min_tx);
    /* a->detect_mult = a->detect_mult (no-op) */
}

static inline void vl_api_bfd_udp_session_set_flags_t_endian (vl_api_bfd_udp_session_set_flags_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_address_t_endian(&a->local_addr);
    vl_api_address_t_endian(&a->peer_addr);
    vl_api_if_status_flags_t_endian(&a->flags);
}

static inline void vl_api_bfd_udp_session_set_flags_reply_t_endian (vl_api_bfd_udp_session_set_flags_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_want_bfd_events_t_endian (vl_api_want_bfd_events_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

static inline void vl_api_want_bfd_events_reply_t_endian (vl_api_want_bfd_events_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bfd_auth_set_key_t_endian (vl_api_bfd_auth_set_key_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->conf_key_id = clib_net_to_host_u32(a->conf_key_id);
    /* a->key_len = a->key_len (no-op) */
    /* a->auth_type = a->auth_type (no-op) */
    /* a->key = a->key (no-op) */
}

static inline void vl_api_bfd_auth_set_key_reply_t_endian (vl_api_bfd_auth_set_key_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bfd_auth_del_key_t_endian (vl_api_bfd_auth_del_key_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->conf_key_id = clib_net_to_host_u32(a->conf_key_id);
}

static inline void vl_api_bfd_auth_del_key_reply_t_endian (vl_api_bfd_auth_del_key_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bfd_auth_keys_dump_t_endian (vl_api_bfd_auth_keys_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_bfd_auth_keys_details_t_endian (vl_api_bfd_auth_keys_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->conf_key_id = clib_net_to_host_u32(a->conf_key_id);
    a->use_count = clib_net_to_host_u32(a->use_count);
    /* a->auth_type = a->auth_type (no-op) */
}

static inline void vl_api_bfd_udp_auth_activate_t_endian (vl_api_bfd_udp_auth_activate_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_address_t_endian(&a->local_addr);
    vl_api_address_t_endian(&a->peer_addr);
    /* a->is_delayed = a->is_delayed (no-op) */
    /* a->bfd_key_id = a->bfd_key_id (no-op) */
    a->conf_key_id = clib_net_to_host_u32(a->conf_key_id);
}

static inline void vl_api_bfd_udp_auth_activate_reply_t_endian (vl_api_bfd_udp_auth_activate_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_bfd_udp_auth_deactivate_t_endian (vl_api_bfd_udp_auth_deactivate_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_address_t_endian(&a->local_addr);
    vl_api_address_t_endian(&a->peer_addr);
    /* a->is_delayed = a->is_delayed (no-op) */
}

static inline void vl_api_bfd_udp_auth_deactivate_reply_t_endian (vl_api_bfd_udp_auth_deactivate_reply_t *a)
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

vl_api_version_tuple(bfd.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(bfd.api, 0xbfeb2477)

#endif

