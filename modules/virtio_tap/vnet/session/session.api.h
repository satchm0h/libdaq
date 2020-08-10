/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: session.api
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
#warning no content included from session.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_APP_ATTACH, vl_api_app_attach_t_handler)
vl_msg_id(VL_API_APP_ATTACH_REPLY, vl_api_app_attach_reply_t_handler)
vl_msg_id(VL_API_APPLICATION_DETACH, vl_api_application_detach_t_handler)
vl_msg_id(VL_API_APPLICATION_DETACH_REPLY, vl_api_application_detach_reply_t_handler)
vl_msg_id(VL_API_APP_ADD_CERT_KEY_PAIR, vl_api_app_add_cert_key_pair_t_handler)
vl_msg_id(VL_API_APP_ADD_CERT_KEY_PAIR_REPLY, vl_api_app_add_cert_key_pair_reply_t_handler)
vl_msg_id(VL_API_APP_DEL_CERT_KEY_PAIR, vl_api_app_del_cert_key_pair_t_handler)
vl_msg_id(VL_API_APP_DEL_CERT_KEY_PAIR_REPLY, vl_api_app_del_cert_key_pair_reply_t_handler)
vl_msg_id(VL_API_APPLICATION_TLS_CERT_ADD, vl_api_application_tls_cert_add_t_handler)
vl_msg_id(VL_API_APPLICATION_TLS_CERT_ADD_REPLY, vl_api_application_tls_cert_add_reply_t_handler)
vl_msg_id(VL_API_APPLICATION_TLS_KEY_ADD, vl_api_application_tls_key_add_t_handler)
vl_msg_id(VL_API_APPLICATION_TLS_KEY_ADD_REPLY, vl_api_application_tls_key_add_reply_t_handler)
vl_msg_id(VL_API_APP_WORKER_ADD_DEL, vl_api_app_worker_add_del_t_handler)
vl_msg_id(VL_API_APP_WORKER_ADD_DEL_REPLY, vl_api_app_worker_add_del_reply_t_handler)
vl_msg_id(VL_API_SESSION_ENABLE_DISABLE, vl_api_session_enable_disable_t_handler)
vl_msg_id(VL_API_SESSION_ENABLE_DISABLE_REPLY, vl_api_session_enable_disable_reply_t_handler)
vl_msg_id(VL_API_APP_NAMESPACE_ADD_DEL, vl_api_app_namespace_add_del_t_handler)
vl_msg_id(VL_API_APP_NAMESPACE_ADD_DEL_REPLY, vl_api_app_namespace_add_del_reply_t_handler)
vl_msg_id(VL_API_SESSION_RULE_ADD_DEL, vl_api_session_rule_add_del_t_handler)
vl_msg_id(VL_API_SESSION_RULE_ADD_DEL_REPLY, vl_api_session_rule_add_del_reply_t_handler)
vl_msg_id(VL_API_SESSION_RULES_DUMP, vl_api_session_rules_dump_t_handler)
vl_msg_id(VL_API_SESSION_RULES_DETAILS, vl_api_session_rules_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_app_attach_t, 1)
vl_msg_name(vl_api_app_attach_reply_t, 1)
vl_msg_name(vl_api_application_detach_t, 1)
vl_msg_name(vl_api_application_detach_reply_t, 1)
vl_msg_name(vl_api_app_add_cert_key_pair_t, 1)
vl_msg_name(vl_api_app_add_cert_key_pair_reply_t, 1)
vl_msg_name(vl_api_app_del_cert_key_pair_t, 1)
vl_msg_name(vl_api_app_del_cert_key_pair_reply_t, 1)
vl_msg_name(vl_api_application_tls_cert_add_t, 1)
vl_msg_name(vl_api_application_tls_cert_add_reply_t, 1)
vl_msg_name(vl_api_application_tls_key_add_t, 1)
vl_msg_name(vl_api_application_tls_key_add_reply_t, 1)
vl_msg_name(vl_api_app_worker_add_del_t, 1)
vl_msg_name(vl_api_app_worker_add_del_reply_t, 1)
vl_msg_name(vl_api_session_enable_disable_t, 1)
vl_msg_name(vl_api_session_enable_disable_reply_t, 1)
vl_msg_name(vl_api_app_namespace_add_del_t, 1)
vl_msg_name(vl_api_app_namespace_add_del_reply_t, 1)
vl_msg_name(vl_api_session_rule_add_del_t, 1)
vl_msg_name(vl_api_session_rule_add_del_reply_t, 1)
vl_msg_name(vl_api_session_rules_dump_t, 1)
vl_msg_name(vl_api_session_rules_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_session \
_(VL_API_APP_ATTACH, app_attach, 5f4a260d) \
_(VL_API_APP_ATTACH_REPLY, app_attach_reply, 5c89c3b0) \
_(VL_API_APPLICATION_DETACH, application_detach, 51077d14) \
_(VL_API_APPLICATION_DETACH_REPLY, application_detach_reply, e8d4e804) \
_(VL_API_APP_ADD_CERT_KEY_PAIR, app_add_cert_key_pair, 02eb8016) \
_(VL_API_APP_ADD_CERT_KEY_PAIR_REPLY, app_add_cert_key_pair_reply, b42958d0) \
_(VL_API_APP_DEL_CERT_KEY_PAIR, app_del_cert_key_pair, 8ac76db6) \
_(VL_API_APP_DEL_CERT_KEY_PAIR_REPLY, app_del_cert_key_pair_reply, e8d4e804) \
_(VL_API_APPLICATION_TLS_CERT_ADD, application_tls_cert_add, 3f5cfe45) \
_(VL_API_APPLICATION_TLS_CERT_ADD_REPLY, application_tls_cert_add_reply, e8d4e804) \
_(VL_API_APPLICATION_TLS_KEY_ADD, application_tls_key_add, 5eaf70cd) \
_(VL_API_APPLICATION_TLS_KEY_ADD_REPLY, application_tls_key_add_reply, e8d4e804) \
_(VL_API_APP_WORKER_ADD_DEL, app_worker_add_del, 753253dc) \
_(VL_API_APP_WORKER_ADD_DEL_REPLY, app_worker_add_del_reply, 5735ffe7) \
_(VL_API_SESSION_ENABLE_DISABLE, session_enable_disable, c264d7bf) \
_(VL_API_SESSION_ENABLE_DISABLE_REPLY, session_enable_disable_reply, e8d4e804) \
_(VL_API_APP_NAMESPACE_ADD_DEL, app_namespace_add_del, 6306aecb) \
_(VL_API_APP_NAMESPACE_ADD_DEL_REPLY, app_namespace_add_del_reply, 85137120) \
_(VL_API_SESSION_RULE_ADD_DEL, session_rule_add_del, e31f9443) \
_(VL_API_SESSION_RULE_ADD_DEL_REPLY, session_rule_add_del_reply, e8d4e804) \
_(VL_API_SESSION_RULES_DUMP, session_rules_dump, 51077d14) \
_(VL_API_SESSION_RULES_DETAILS, session_rules_details, 304b91f0) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "session.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_session_printfun_types
#define included_session_printfun_types

static inline u8 *format_vl_api_transport_proto_t (u8 *s, va_list * args)
{
    vl_api_transport_proto_t *a = va_arg (*args, vl_api_transport_proto_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "TRANSPORT_PROTO_API_TCP");
    case 2:
        return format(s, "TRANSPORT_PROTO_API_UDP");
    case 3:
        return format(s, "TRANSPORT_PROTO_API_NONE");
    case 4:
        return format(s, "TRANSPORT_PROTO_API_TLS");
    case 5:
        return format(s, "TRANSPORT_PROTO_API_QUIC");
    }
    return s;
}

static inline u8 *format_vl_api_session_rule_scope_t (u8 *s, va_list * args)
{
    vl_api_session_rule_scope_t *a = va_arg (*args, vl_api_session_rule_scope_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "SESSION_RULE_SCOPE_API_GLOBAL");
    case 1:
        return format(s, "SESSION_RULE_SCOPE_API_LOCAL");
    case 2:
        return format(s, "SESSION_RULE_SCOPE_API_BOTH");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_session_printfun
#define included_session_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_app_attach_t_print (vl_api_app_attach_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_app_attach_t: */
    s = format(s, "vl_api_app_attach_t:");
    for (i = 0; i < 18; i++) {
        s = format(s, "\n%Uoptions: %llu",
                   format_white_space, indent, a->options[i]);
    }
    if (vl_api_string_len(&a->namespace_id) > 0) {
        s = format(s, "\n%Unamespace_id: %U", format_white_space, indent, vl_api_format_string, (&a->namespace_id));
    } else {
        s = format(s, "\n%Unamespace_id:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_app_attach_reply_t_print (vl_api_app_attach_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_app_attach_reply_t: */
    s = format(s, "vl_api_app_attach_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uapp_mq: %llu", format_white_space, indent, a->app_mq);
    s = format(s, "\n%Uvpp_ctrl_mq: %llu", format_white_space, indent, a->vpp_ctrl_mq);
    s = format(s, "\n%Uvpp_ctrl_mq_thread: %u", format_white_space, indent, a->vpp_ctrl_mq_thread);
    s = format(s, "\n%Uapp_index: %u", format_white_space, indent, a->app_index);
    s = format(s, "\n%Un_fds: %u", format_white_space, indent, a->n_fds);
    s = format(s, "\n%Ufd_flags: %u", format_white_space, indent, a->fd_flags);
    s = format(s, "\n%Usegment_size: %u", format_white_space, indent, a->segment_size);
    s = format(s, "\n%Usegment_handle: %llu", format_white_space, indent, a->segment_handle);
    if (vl_api_string_len(&a->segment_name) > 0) {
        s = format(s, "\n%Usegment_name: %U", format_white_space, indent, vl_api_format_string, (&a->segment_name));
    } else {
        s = format(s, "\n%Usegment_name:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_application_detach_t_print (vl_api_application_detach_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_application_detach_t: */
    s = format(s, "vl_api_application_detach_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_application_detach_reply_t_print (vl_api_application_detach_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_application_detach_reply_t: */
    s = format(s, "vl_api_application_detach_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_app_add_cert_key_pair_t_print (vl_api_app_add_cert_key_pair_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_app_add_cert_key_pair_t: */
    s = format(s, "vl_api_app_add_cert_key_pair_t:");
    s = format(s, "\n%Ucert_len: %u", format_white_space, indent, a->cert_len);
    s = format(s, "\n%Ucertkey_len: %u", format_white_space, indent, a->certkey_len);
    s = format(s, "\n%Ucertkey: %U", format_white_space, indent, format_hex_bytes, a->certkey, a->certkey_len);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_app_add_cert_key_pair_reply_t_print (vl_api_app_add_cert_key_pair_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_app_add_cert_key_pair_reply_t: */
    s = format(s, "vl_api_app_add_cert_key_pair_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uindex: %u", format_white_space, indent, a->index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_app_del_cert_key_pair_t_print (vl_api_app_del_cert_key_pair_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_app_del_cert_key_pair_t: */
    s = format(s, "vl_api_app_del_cert_key_pair_t:");
    s = format(s, "\n%Uindex: %u", format_white_space, indent, a->index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_app_del_cert_key_pair_reply_t_print (vl_api_app_del_cert_key_pair_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_app_del_cert_key_pair_reply_t: */
    s = format(s, "vl_api_app_del_cert_key_pair_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_application_tls_cert_add_t_print (vl_api_application_tls_cert_add_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_application_tls_cert_add_t: */
    s = format(s, "vl_api_application_tls_cert_add_t:");
    s = format(s, "\n%Uapp_index: %u", format_white_space, indent, a->app_index);
    s = format(s, "\n%Ucert_len: %u", format_white_space, indent, a->cert_len);
    s = format(s, "\n%Ucert: %U", format_white_space, indent, format_hex_bytes, a->cert, a->cert_len);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_application_tls_cert_add_reply_t_print (vl_api_application_tls_cert_add_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_application_tls_cert_add_reply_t: */
    s = format(s, "vl_api_application_tls_cert_add_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_application_tls_key_add_t_print (vl_api_application_tls_key_add_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_application_tls_key_add_t: */
    s = format(s, "vl_api_application_tls_key_add_t:");
    s = format(s, "\n%Uapp_index: %u", format_white_space, indent, a->app_index);
    s = format(s, "\n%Ukey_len: %u", format_white_space, indent, a->key_len);
    s = format(s, "\n%Ukey: %U", format_white_space, indent, format_hex_bytes, a->key, a->key_len);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_application_tls_key_add_reply_t_print (vl_api_application_tls_key_add_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_application_tls_key_add_reply_t: */
    s = format(s, "vl_api_application_tls_key_add_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_app_worker_add_del_t_print (vl_api_app_worker_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_app_worker_add_del_t: */
    s = format(s, "vl_api_app_worker_add_del_t:");
    s = format(s, "\n%Uapp_index: %u", format_white_space, indent, a->app_index);
    s = format(s, "\n%Uwrk_index: %u", format_white_space, indent, a->wrk_index);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_app_worker_add_del_reply_t_print (vl_api_app_worker_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_app_worker_add_del_reply_t: */
    s = format(s, "vl_api_app_worker_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uwrk_index: %u", format_white_space, indent, a->wrk_index);
    s = format(s, "\n%Uapp_event_queue_address: %llu", format_white_space, indent, a->app_event_queue_address);
    s = format(s, "\n%Un_fds: %u", format_white_space, indent, a->n_fds);
    s = format(s, "\n%Ufd_flags: %u", format_white_space, indent, a->fd_flags);
    s = format(s, "\n%Usegment_handle: %llu", format_white_space, indent, a->segment_handle);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    if (vl_api_string_len(&a->segment_name) > 0) {
        s = format(s, "\n%Usegment_name: %U", format_white_space, indent, vl_api_format_string, (&a->segment_name));
    } else {
        s = format(s, "\n%Usegment_name:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_session_enable_disable_t_print (vl_api_session_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_session_enable_disable_t: */
    s = format(s, "vl_api_session_enable_disable_t:");
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_session_enable_disable_reply_t_print (vl_api_session_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_session_enable_disable_reply_t: */
    s = format(s, "vl_api_session_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_app_namespace_add_del_t_print (vl_api_app_namespace_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_app_namespace_add_del_t: */
    s = format(s, "vl_api_app_namespace_add_del_t:");
    s = format(s, "\n%Usecret: %llu", format_white_space, indent, a->secret);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uip4_fib_id: %u", format_white_space, indent, a->ip4_fib_id);
    s = format(s, "\n%Uip6_fib_id: %u", format_white_space, indent, a->ip6_fib_id);
    if (vl_api_string_len(&a->namespace_id) > 0) {
        s = format(s, "\n%Unamespace_id: %U", format_white_space, indent, vl_api_format_string, (&a->namespace_id));
    } else {
        s = format(s, "\n%Unamespace_id:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_app_namespace_add_del_reply_t_print (vl_api_app_namespace_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_app_namespace_add_del_reply_t: */
    s = format(s, "vl_api_app_namespace_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uappns_index: %u", format_white_space, indent, a->appns_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_session_rule_add_del_t_print (vl_api_session_rule_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_session_rule_add_del_t: */
    s = format(s, "vl_api_session_rule_add_del_t:");
    s = format(s, "\n%Utransport_proto: %U", format_white_space, indent, format_vl_api_transport_proto_t, &a->transport_proto, indent);
    s = format(s, "\n%Ulcl: %U", format_white_space, indent, format_vl_api_prefix_t, &a->lcl, indent);
    s = format(s, "\n%Urmt: %U", format_white_space, indent, format_vl_api_prefix_t, &a->rmt, indent);
    s = format(s, "\n%Ulcl_port: %u", format_white_space, indent, a->lcl_port);
    s = format(s, "\n%Urmt_port: %u", format_white_space, indent, a->rmt_port);
    s = format(s, "\n%Uaction_index: %u", format_white_space, indent, a->action_index);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uappns_index: %u", format_white_space, indent, a->appns_index);
    s = format(s, "\n%Uscope: %U", format_white_space, indent, format_vl_api_session_rule_scope_t, &a->scope, indent);
    s = format(s, "\n%Utag: %s", format_white_space, indent, a->tag);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_session_rule_add_del_reply_t_print (vl_api_session_rule_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_session_rule_add_del_reply_t: */
    s = format(s, "vl_api_session_rule_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_session_rules_dump_t_print (vl_api_session_rules_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_session_rules_dump_t: */
    s = format(s, "vl_api_session_rules_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_session_rules_details_t_print (vl_api_session_rules_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_session_rules_details_t: */
    s = format(s, "vl_api_session_rules_details_t:");
    s = format(s, "\n%Utransport_proto: %U", format_white_space, indent, format_vl_api_transport_proto_t, &a->transport_proto, indent);
    s = format(s, "\n%Ulcl: %U", format_white_space, indent, format_vl_api_prefix_t, &a->lcl, indent);
    s = format(s, "\n%Urmt: %U", format_white_space, indent, format_vl_api_prefix_t, &a->rmt, indent);
    s = format(s, "\n%Ulcl_port: %u", format_white_space, indent, a->lcl_port);
    s = format(s, "\n%Urmt_port: %u", format_white_space, indent, a->rmt_port);
    s = format(s, "\n%Uaction_index: %u", format_white_space, indent, a->action_index);
    s = format(s, "\n%Uappns_index: %u", format_white_space, indent, a->appns_index);
    s = format(s, "\n%Uscope: %U", format_white_space, indent, format_vl_api_session_rule_scope_t, &a->scope, indent);
    s = format(s, "\n%Utag: %s", format_white_space, indent, a->tag);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_session_endianfun
#define included_session_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_transport_proto_t_endian (vl_api_transport_proto_t *a)
{
    int i __attribute__((unused));
    /* a->transport_proto = a->transport_proto (no-op) */
}

static inline void vl_api_session_rule_scope_t_endian (vl_api_session_rule_scope_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_app_attach_t_endian (vl_api_app_attach_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    for (i = 0; i < 18; i++) {
        a->options[i] = clib_net_to_host_u64(a->options[i]);
    }
    /* a->namespace_id = a->namespace_id (no-op) */
}

static inline void vl_api_app_attach_reply_t_endian (vl_api_app_attach_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->app_mq = clib_net_to_host_u64(a->app_mq);
    a->vpp_ctrl_mq = clib_net_to_host_u64(a->vpp_ctrl_mq);
    /* a->vpp_ctrl_mq_thread = a->vpp_ctrl_mq_thread (no-op) */
    a->app_index = clib_net_to_host_u32(a->app_index);
    /* a->n_fds = a->n_fds (no-op) */
    /* a->fd_flags = a->fd_flags (no-op) */
    a->segment_size = clib_net_to_host_u32(a->segment_size);
    a->segment_handle = clib_net_to_host_u64(a->segment_handle);
    /* a->segment_name = a->segment_name (no-op) */
}

static inline void vl_api_application_detach_t_endian (vl_api_application_detach_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_application_detach_reply_t_endian (vl_api_application_detach_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_app_add_cert_key_pair_t_endian (vl_api_app_add_cert_key_pair_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->cert_len = clib_net_to_host_u16(a->cert_len);
    a->certkey_len = clib_net_to_host_u16(a->certkey_len);
    /* a->certkey = a->certkey (no-op) */
}

static inline void vl_api_app_add_cert_key_pair_reply_t_endian (vl_api_app_add_cert_key_pair_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->index = clib_net_to_host_u32(a->index);
}

static inline void vl_api_app_del_cert_key_pair_t_endian (vl_api_app_del_cert_key_pair_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->index = clib_net_to_host_u32(a->index);
}

static inline void vl_api_app_del_cert_key_pair_reply_t_endian (vl_api_app_del_cert_key_pair_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_application_tls_cert_add_t_endian (vl_api_application_tls_cert_add_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->app_index = clib_net_to_host_u32(a->app_index);
    a->cert_len = clib_net_to_host_u16(a->cert_len);
    /* a->cert = a->cert (no-op) */
}

static inline void vl_api_application_tls_cert_add_reply_t_endian (vl_api_application_tls_cert_add_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_application_tls_key_add_t_endian (vl_api_application_tls_key_add_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->app_index = clib_net_to_host_u32(a->app_index);
    a->key_len = clib_net_to_host_u16(a->key_len);
    /* a->key = a->key (no-op) */
}

static inline void vl_api_application_tls_key_add_reply_t_endian (vl_api_application_tls_key_add_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_app_worker_add_del_t_endian (vl_api_app_worker_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->app_index = clib_net_to_host_u32(a->app_index);
    a->wrk_index = clib_net_to_host_u32(a->wrk_index);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_app_worker_add_del_reply_t_endian (vl_api_app_worker_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->wrk_index = clib_net_to_host_u32(a->wrk_index);
    a->app_event_queue_address = clib_net_to_host_u64(a->app_event_queue_address);
    /* a->n_fds = a->n_fds (no-op) */
    /* a->fd_flags = a->fd_flags (no-op) */
    a->segment_handle = clib_net_to_host_u64(a->segment_handle);
    /* a->is_add = a->is_add (no-op) */
    /* a->segment_name = a->segment_name (no-op) */
}

static inline void vl_api_session_enable_disable_t_endian (vl_api_session_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_session_enable_disable_reply_t_endian (vl_api_session_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_app_namespace_add_del_t_endian (vl_api_app_namespace_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->secret = clib_net_to_host_u64(a->secret);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->ip4_fib_id = clib_net_to_host_u32(a->ip4_fib_id);
    a->ip6_fib_id = clib_net_to_host_u32(a->ip6_fib_id);
    /* a->namespace_id = a->namespace_id (no-op) */
}

static inline void vl_api_app_namespace_add_del_reply_t_endian (vl_api_app_namespace_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->appns_index = clib_net_to_host_u32(a->appns_index);
}

static inline void vl_api_session_rule_add_del_t_endian (vl_api_session_rule_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_transport_proto_t_endian(&a->transport_proto);
    vl_api_prefix_t_endian(&a->lcl);
    vl_api_prefix_t_endian(&a->rmt);
    a->lcl_port = clib_net_to_host_u16(a->lcl_port);
    a->rmt_port = clib_net_to_host_u16(a->rmt_port);
    a->action_index = clib_net_to_host_u32(a->action_index);
    /* a->is_add = a->is_add (no-op) */
    a->appns_index = clib_net_to_host_u32(a->appns_index);
    vl_api_session_rule_scope_t_endian(&a->scope);
    /* a->tag = a->tag (no-op) */
}

static inline void vl_api_session_rule_add_del_reply_t_endian (vl_api_session_rule_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_session_rules_dump_t_endian (vl_api_session_rules_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_session_rules_details_t_endian (vl_api_session_rules_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_transport_proto_t_endian(&a->transport_proto);
    vl_api_prefix_t_endian(&a->lcl);
    vl_api_prefix_t_endian(&a->rmt);
    a->lcl_port = clib_net_to_host_u16(a->lcl_port);
    a->rmt_port = clib_net_to_host_u16(a->rmt_port);
    a->action_index = clib_net_to_host_u32(a->action_index);
    a->appns_index = clib_net_to_host_u32(a->appns_index);
    vl_api_session_rule_scope_t_endian(&a->scope);
    /* a->tag = a->tag (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(session.api, 3, 2, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(session.api, 0x2e348364)

#endif

