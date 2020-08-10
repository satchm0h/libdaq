/*
 * VLIB API definitions 2020-07-24 16:28:57
 * Input file: ikev2.api
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
#warning no content included from ikev2.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <ikev2/ikev2_types.api.h>
#include <vnet/ip/ip_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_IKEV2_PLUGIN_GET_VERSION, vl_api_ikev2_plugin_get_version_t_handler)
vl_msg_id(VL_API_IKEV2_PLUGIN_GET_VERSION_REPLY, vl_api_ikev2_plugin_get_version_reply_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_DUMP, vl_api_ikev2_profile_dump_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_DETAILS, vl_api_ikev2_profile_details_t_handler)
vl_msg_id(VL_API_IKEV2_SA_DUMP, vl_api_ikev2_sa_dump_t_handler)
vl_msg_id(VL_API_IKEV2_SA_DETAILS, vl_api_ikev2_sa_details_t_handler)
vl_msg_id(VL_API_IKEV2_CHILD_SA_DUMP, vl_api_ikev2_child_sa_dump_t_handler)
vl_msg_id(VL_API_IKEV2_CHILD_SA_DETAILS, vl_api_ikev2_child_sa_details_t_handler)
vl_msg_id(VL_API_IKEV2_NONCE_GET, vl_api_ikev2_nonce_get_t_handler)
vl_msg_id(VL_API_IKEV2_NONCE_GET_REPLY, vl_api_ikev2_nonce_get_reply_t_handler)
vl_msg_id(VL_API_IKEV2_TRAFFIC_SELECTOR_DUMP, vl_api_ikev2_traffic_selector_dump_t_handler)
vl_msg_id(VL_API_IKEV2_TRAFFIC_SELECTOR_DETAILS, vl_api_ikev2_traffic_selector_details_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_ADD_DEL, vl_api_ikev2_profile_add_del_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_ADD_DEL_REPLY, vl_api_ikev2_profile_add_del_reply_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_AUTH, vl_api_ikev2_profile_set_auth_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_AUTH_REPLY, vl_api_ikev2_profile_set_auth_reply_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_ID, vl_api_ikev2_profile_set_id_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_ID_REPLY, vl_api_ikev2_profile_set_id_reply_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_TS, vl_api_ikev2_profile_set_ts_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_TS_REPLY, vl_api_ikev2_profile_set_ts_reply_t_handler)
vl_msg_id(VL_API_IKEV2_SET_LOCAL_KEY, vl_api_ikev2_set_local_key_t_handler)
vl_msg_id(VL_API_IKEV2_SET_LOCAL_KEY_REPLY, vl_api_ikev2_set_local_key_reply_t_handler)
vl_msg_id(VL_API_IKEV2_SET_TUNNEL_INTERFACE, vl_api_ikev2_set_tunnel_interface_t_handler)
vl_msg_id(VL_API_IKEV2_SET_TUNNEL_INTERFACE_REPLY, vl_api_ikev2_set_tunnel_interface_reply_t_handler)
vl_msg_id(VL_API_IKEV2_SET_RESPONDER, vl_api_ikev2_set_responder_t_handler)
vl_msg_id(VL_API_IKEV2_SET_RESPONDER_REPLY, vl_api_ikev2_set_responder_reply_t_handler)
vl_msg_id(VL_API_IKEV2_SET_IKE_TRANSFORMS, vl_api_ikev2_set_ike_transforms_t_handler)
vl_msg_id(VL_API_IKEV2_SET_IKE_TRANSFORMS_REPLY, vl_api_ikev2_set_ike_transforms_reply_t_handler)
vl_msg_id(VL_API_IKEV2_SET_ESP_TRANSFORMS, vl_api_ikev2_set_esp_transforms_t_handler)
vl_msg_id(VL_API_IKEV2_SET_ESP_TRANSFORMS_REPLY, vl_api_ikev2_set_esp_transforms_reply_t_handler)
vl_msg_id(VL_API_IKEV2_SET_SA_LIFETIME, vl_api_ikev2_set_sa_lifetime_t_handler)
vl_msg_id(VL_API_IKEV2_SET_SA_LIFETIME_REPLY, vl_api_ikev2_set_sa_lifetime_reply_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_SA_INIT, vl_api_ikev2_initiate_sa_init_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_SA_INIT_REPLY, vl_api_ikev2_initiate_sa_init_reply_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_DEL_IKE_SA, vl_api_ikev2_initiate_del_ike_sa_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_DEL_IKE_SA_REPLY, vl_api_ikev2_initiate_del_ike_sa_reply_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_DEL_CHILD_SA, vl_api_ikev2_initiate_del_child_sa_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_DEL_CHILD_SA_REPLY, vl_api_ikev2_initiate_del_child_sa_reply_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_REKEY_CHILD_SA, vl_api_ikev2_initiate_rekey_child_sa_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_REKEY_CHILD_SA_REPLY, vl_api_ikev2_initiate_rekey_child_sa_reply_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_UDP_ENCAP, vl_api_ikev2_profile_set_udp_encap_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_UDP_ENCAP_REPLY, vl_api_ikev2_profile_set_udp_encap_reply_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_IPSEC_UDP_PORT, vl_api_ikev2_profile_set_ipsec_udp_port_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_IPSEC_UDP_PORT_REPLY, vl_api_ikev2_profile_set_ipsec_udp_port_reply_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_LIVENESS, vl_api_ikev2_profile_set_liveness_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_LIVENESS_REPLY, vl_api_ikev2_profile_set_liveness_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_ikev2_plugin_get_version_t, 1)
vl_msg_name(vl_api_ikev2_plugin_get_version_reply_t, 1)
vl_msg_name(vl_api_ikev2_profile_dump_t, 1)
vl_msg_name(vl_api_ikev2_profile_details_t, 1)
vl_msg_name(vl_api_ikev2_sa_dump_t, 1)
vl_msg_name(vl_api_ikev2_sa_details_t, 1)
vl_msg_name(vl_api_ikev2_child_sa_dump_t, 1)
vl_msg_name(vl_api_ikev2_child_sa_details_t, 1)
vl_msg_name(vl_api_ikev2_nonce_get_t, 1)
vl_msg_name(vl_api_ikev2_nonce_get_reply_t, 1)
vl_msg_name(vl_api_ikev2_traffic_selector_dump_t, 1)
vl_msg_name(vl_api_ikev2_traffic_selector_details_t, 1)
vl_msg_name(vl_api_ikev2_profile_add_del_t, 1)
vl_msg_name(vl_api_ikev2_profile_add_del_reply_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_auth_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_auth_reply_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_id_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_id_reply_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_ts_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_ts_reply_t, 1)
vl_msg_name(vl_api_ikev2_set_local_key_t, 1)
vl_msg_name(vl_api_ikev2_set_local_key_reply_t, 1)
vl_msg_name(vl_api_ikev2_set_tunnel_interface_t, 1)
vl_msg_name(vl_api_ikev2_set_tunnel_interface_reply_t, 1)
vl_msg_name(vl_api_ikev2_set_responder_t, 1)
vl_msg_name(vl_api_ikev2_set_responder_reply_t, 1)
vl_msg_name(vl_api_ikev2_set_ike_transforms_t, 1)
vl_msg_name(vl_api_ikev2_set_ike_transforms_reply_t, 1)
vl_msg_name(vl_api_ikev2_set_esp_transforms_t, 1)
vl_msg_name(vl_api_ikev2_set_esp_transforms_reply_t, 1)
vl_msg_name(vl_api_ikev2_set_sa_lifetime_t, 1)
vl_msg_name(vl_api_ikev2_set_sa_lifetime_reply_t, 1)
vl_msg_name(vl_api_ikev2_initiate_sa_init_t, 1)
vl_msg_name(vl_api_ikev2_initiate_sa_init_reply_t, 1)
vl_msg_name(vl_api_ikev2_initiate_del_ike_sa_t, 1)
vl_msg_name(vl_api_ikev2_initiate_del_ike_sa_reply_t, 1)
vl_msg_name(vl_api_ikev2_initiate_del_child_sa_t, 1)
vl_msg_name(vl_api_ikev2_initiate_del_child_sa_reply_t, 1)
vl_msg_name(vl_api_ikev2_initiate_rekey_child_sa_t, 1)
vl_msg_name(vl_api_ikev2_initiate_rekey_child_sa_reply_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_udp_encap_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_udp_encap_reply_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_ipsec_udp_port_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_ipsec_udp_port_reply_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_liveness_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_liveness_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ikev2 \
_(VL_API_IKEV2_PLUGIN_GET_VERSION, ikev2_plugin_get_version, 51077d14) \
_(VL_API_IKEV2_PLUGIN_GET_VERSION_REPLY, ikev2_plugin_get_version_reply, 9b32cf86) \
_(VL_API_IKEV2_PROFILE_DUMP, ikev2_profile_dump, 51077d14) \
_(VL_API_IKEV2_PROFILE_DETAILS, ikev2_profile_details, daec69ef) \
_(VL_API_IKEV2_SA_DUMP, ikev2_sa_dump, 51077d14) \
_(VL_API_IKEV2_SA_DETAILS, ikev2_sa_details, 1fbac05c) \
_(VL_API_IKEV2_CHILD_SA_DUMP, ikev2_child_sa_dump, 01eab609) \
_(VL_API_IKEV2_CHILD_SA_DETAILS, ikev2_child_sa_details, ff67741f) \
_(VL_API_IKEV2_NONCE_GET, ikev2_nonce_get, 7fe9ad51) \
_(VL_API_IKEV2_NONCE_GET_REPLY, ikev2_nonce_get_reply, 1b37a342) \
_(VL_API_IKEV2_TRAFFIC_SELECTOR_DUMP, ikev2_traffic_selector_dump, a7385e33) \
_(VL_API_IKEV2_TRAFFIC_SELECTOR_DETAILS, ikev2_traffic_selector_details, 43a05faa) \
_(VL_API_IKEV2_PROFILE_ADD_DEL, ikev2_profile_add_del, 2c925b55) \
_(VL_API_IKEV2_PROFILE_ADD_DEL_REPLY, ikev2_profile_add_del_reply, e8d4e804) \
_(VL_API_IKEV2_PROFILE_SET_AUTH, ikev2_profile_set_auth, 642c97cd) \
_(VL_API_IKEV2_PROFILE_SET_AUTH_REPLY, ikev2_profile_set_auth_reply, e8d4e804) \
_(VL_API_IKEV2_PROFILE_SET_ID, ikev2_profile_set_id, 4d7e2418) \
_(VL_API_IKEV2_PROFILE_SET_ID_REPLY, ikev2_profile_set_id_reply, e8d4e804) \
_(VL_API_IKEV2_PROFILE_SET_TS, ikev2_profile_set_ts, 4f178094) \
_(VL_API_IKEV2_PROFILE_SET_TS_REPLY, ikev2_profile_set_ts_reply, e8d4e804) \
_(VL_API_IKEV2_SET_LOCAL_KEY, ikev2_set_local_key, 799b69ec) \
_(VL_API_IKEV2_SET_LOCAL_KEY_REPLY, ikev2_set_local_key_reply, e8d4e804) \
_(VL_API_IKEV2_SET_TUNNEL_INTERFACE, ikev2_set_tunnel_interface, ca67182c) \
_(VL_API_IKEV2_SET_TUNNEL_INTERFACE_REPLY, ikev2_set_tunnel_interface_reply, e8d4e804) \
_(VL_API_IKEV2_SET_RESPONDER, ikev2_set_responder, f14c91a3) \
_(VL_API_IKEV2_SET_RESPONDER_REPLY, ikev2_set_responder_reply, e8d4e804) \
_(VL_API_IKEV2_SET_IKE_TRANSFORMS, ikev2_set_ike_transforms, 076d7378) \
_(VL_API_IKEV2_SET_IKE_TRANSFORMS_REPLY, ikev2_set_ike_transforms_reply, e8d4e804) \
_(VL_API_IKEV2_SET_ESP_TRANSFORMS, ikev2_set_esp_transforms, a63dc205) \
_(VL_API_IKEV2_SET_ESP_TRANSFORMS_REPLY, ikev2_set_esp_transforms_reply, e8d4e804) \
_(VL_API_IKEV2_SET_SA_LIFETIME, ikev2_set_sa_lifetime, 7039feaa) \
_(VL_API_IKEV2_SET_SA_LIFETIME_REPLY, ikev2_set_sa_lifetime_reply, e8d4e804) \
_(VL_API_IKEV2_INITIATE_SA_INIT, ikev2_initiate_sa_init, ebf79a66) \
_(VL_API_IKEV2_INITIATE_SA_INIT_REPLY, ikev2_initiate_sa_init_reply, e8d4e804) \
_(VL_API_IKEV2_INITIATE_DEL_IKE_SA, ikev2_initiate_del_ike_sa, 8d125bdd) \
_(VL_API_IKEV2_INITIATE_DEL_IKE_SA_REPLY, ikev2_initiate_del_ike_sa_reply, e8d4e804) \
_(VL_API_IKEV2_INITIATE_DEL_CHILD_SA, ikev2_initiate_del_child_sa, 7f004d2e) \
_(VL_API_IKEV2_INITIATE_DEL_CHILD_SA_REPLY, ikev2_initiate_del_child_sa_reply, e8d4e804) \
_(VL_API_IKEV2_INITIATE_REKEY_CHILD_SA, ikev2_initiate_rekey_child_sa, 7f004d2e) \
_(VL_API_IKEV2_INITIATE_REKEY_CHILD_SA_REPLY, ikev2_initiate_rekey_child_sa_reply, e8d4e804) \
_(VL_API_IKEV2_PROFILE_SET_UDP_ENCAP, ikev2_profile_set_udp_encap, ebf79a66) \
_(VL_API_IKEV2_PROFILE_SET_UDP_ENCAP_REPLY, ikev2_profile_set_udp_encap_reply, e8d4e804) \
_(VL_API_IKEV2_PROFILE_SET_IPSEC_UDP_PORT, ikev2_profile_set_ipsec_udp_port, 615ce758) \
_(VL_API_IKEV2_PROFILE_SET_IPSEC_UDP_PORT_REPLY, ikev2_profile_set_ipsec_udp_port_reply, e8d4e804) \
_(VL_API_IKEV2_PROFILE_SET_LIVENESS, ikev2_profile_set_liveness, 6bdf4d65) \
_(VL_API_IKEV2_PROFILE_SET_LIVENESS_REPLY, ikev2_profile_set_liveness_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "ikev2.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ikev2_printfun_types
#define included_ikev2_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ikev2_printfun
#define included_ikev2_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_ikev2_plugin_get_version_t_print (vl_api_ikev2_plugin_get_version_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_plugin_get_version_t: */
    s = format(s, "vl_api_ikev2_plugin_get_version_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_plugin_get_version_reply_t_print (vl_api_ikev2_plugin_get_version_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_plugin_get_version_reply_t: */
    s = format(s, "vl_api_ikev2_plugin_get_version_reply_t:");
    s = format(s, "\n%Umajor: %u", format_white_space, indent, a->major);
    s = format(s, "\n%Uminor: %u", format_white_space, indent, a->minor);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_dump_t_print (vl_api_ikev2_profile_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_dump_t: */
    s = format(s, "vl_api_ikev2_profile_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_details_t_print (vl_api_ikev2_profile_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_details_t: */
    s = format(s, "vl_api_ikev2_profile_details_t:");
    s = format(s, "\n%Uprofile: %U", format_white_space, indent, format_vl_api_ikev2_profile_t, &a->profile, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_sa_dump_t_print (vl_api_ikev2_sa_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_sa_dump_t: */
    s = format(s, "vl_api_ikev2_sa_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_sa_details_t_print (vl_api_ikev2_sa_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_sa_details_t: */
    s = format(s, "vl_api_ikev2_sa_details_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usa: %U", format_white_space, indent, format_vl_api_ikev2_sa_t, &a->sa, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_child_sa_dump_t_print (vl_api_ikev2_child_sa_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_child_sa_dump_t: */
    s = format(s, "vl_api_ikev2_child_sa_dump_t:");
    s = format(s, "\n%Usa_index: %u", format_white_space, indent, a->sa_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_child_sa_details_t_print (vl_api_ikev2_child_sa_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_child_sa_details_t: */
    s = format(s, "vl_api_ikev2_child_sa_details_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uchild_sa: %U", format_white_space, indent, format_vl_api_ikev2_child_sa_t, &a->child_sa, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_nonce_get_t_print (vl_api_ikev2_nonce_get_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_nonce_get_t: */
    s = format(s, "vl_api_ikev2_nonce_get_t:");
    s = format(s, "\n%Uis_initiator: %u", format_white_space, indent, a->is_initiator);
    s = format(s, "\n%Usa_index: %u", format_white_space, indent, a->sa_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_nonce_get_reply_t_print (vl_api_ikev2_nonce_get_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_nonce_get_reply_t: */
    s = format(s, "vl_api_ikev2_nonce_get_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Udata_len: %u", format_white_space, indent, a->data_len);
    s = format(s, "\n%Unonce: %U", format_white_space, indent, format_hex_bytes, a->nonce, a->data_len);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_traffic_selector_dump_t_print (vl_api_ikev2_traffic_selector_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_traffic_selector_dump_t: */
    s = format(s, "vl_api_ikev2_traffic_selector_dump_t:");
    s = format(s, "\n%Uis_initiator: %u", format_white_space, indent, a->is_initiator);
    s = format(s, "\n%Usa_index: %u", format_white_space, indent, a->sa_index);
    s = format(s, "\n%Uchild_sa_index: %u", format_white_space, indent, a->child_sa_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_traffic_selector_details_t_print (vl_api_ikev2_traffic_selector_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_traffic_selector_details_t: */
    s = format(s, "vl_api_ikev2_traffic_selector_details_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uts: %U", format_white_space, indent, format_vl_api_ikev2_ts_t, &a->ts, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_add_del_t_print (vl_api_ikev2_profile_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_add_del_t: */
    s = format(s, "vl_api_ikev2_profile_add_del_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_add_del_reply_t_print (vl_api_ikev2_profile_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_add_del_reply_t: */
    s = format(s, "vl_api_ikev2_profile_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_set_auth_t_print (vl_api_ikev2_profile_set_auth_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_set_auth_t: */
    s = format(s, "vl_api_ikev2_profile_set_auth_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Uauth_method: %u", format_white_space, indent, a->auth_method);
    s = format(s, "\n%Uis_hex: %u", format_white_space, indent, a->is_hex);
    s = format(s, "\n%Udata_len: %u", format_white_space, indent, a->data_len);
    s = format(s, "\n%Udata: %U", format_white_space, indent, format_hex_bytes, a->data, a->data_len);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_set_auth_reply_t_print (vl_api_ikev2_profile_set_auth_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_set_auth_reply_t: */
    s = format(s, "vl_api_ikev2_profile_set_auth_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_set_id_t_print (vl_api_ikev2_profile_set_id_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_set_id_t: */
    s = format(s, "vl_api_ikev2_profile_set_id_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Uis_local: %u", format_white_space, indent, a->is_local);
    s = format(s, "\n%Uid_type: %u", format_white_space, indent, a->id_type);
    s = format(s, "\n%Udata_len: %u", format_white_space, indent, a->data_len);
    s = format(s, "\n%Udata: %U", format_white_space, indent, format_hex_bytes, a->data, a->data_len);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_set_id_reply_t_print (vl_api_ikev2_profile_set_id_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_set_id_reply_t: */
    s = format(s, "vl_api_ikev2_profile_set_id_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_set_ts_t_print (vl_api_ikev2_profile_set_ts_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_set_ts_t: */
    s = format(s, "vl_api_ikev2_profile_set_ts_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Uts: %U", format_white_space, indent, format_vl_api_ikev2_ts_t, &a->ts, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_set_ts_reply_t_print (vl_api_ikev2_profile_set_ts_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_set_ts_reply_t: */
    s = format(s, "vl_api_ikev2_profile_set_ts_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_set_local_key_t_print (vl_api_ikev2_set_local_key_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_set_local_key_t: */
    s = format(s, "vl_api_ikev2_set_local_key_t:");
    s = format(s, "\n%Ukey_file: %s", format_white_space, indent, a->key_file);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_set_local_key_reply_t_print (vl_api_ikev2_set_local_key_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_set_local_key_reply_t: */
    s = format(s, "vl_api_ikev2_set_local_key_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_set_tunnel_interface_t_print (vl_api_ikev2_set_tunnel_interface_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_set_tunnel_interface_t: */
    s = format(s, "vl_api_ikev2_set_tunnel_interface_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_set_tunnel_interface_reply_t_print (vl_api_ikev2_set_tunnel_interface_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_set_tunnel_interface_reply_t: */
    s = format(s, "vl_api_ikev2_set_tunnel_interface_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_set_responder_t_print (vl_api_ikev2_set_responder_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_set_responder_t: */
    s = format(s, "vl_api_ikev2_set_responder_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Uresponder: %U", format_white_space, indent, format_vl_api_ikev2_responder_t, &a->responder, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_set_responder_reply_t_print (vl_api_ikev2_set_responder_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_set_responder_reply_t: */
    s = format(s, "vl_api_ikev2_set_responder_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_set_ike_transforms_t_print (vl_api_ikev2_set_ike_transforms_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_set_ike_transforms_t: */
    s = format(s, "vl_api_ikev2_set_ike_transforms_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Utr: %U", format_white_space, indent, format_vl_api_ikev2_ike_transforms_t, &a->tr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_set_ike_transforms_reply_t_print (vl_api_ikev2_set_ike_transforms_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_set_ike_transforms_reply_t: */
    s = format(s, "vl_api_ikev2_set_ike_transforms_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_set_esp_transforms_t_print (vl_api_ikev2_set_esp_transforms_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_set_esp_transforms_t: */
    s = format(s, "vl_api_ikev2_set_esp_transforms_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Utr: %U", format_white_space, indent, format_vl_api_ikev2_esp_transforms_t, &a->tr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_set_esp_transforms_reply_t_print (vl_api_ikev2_set_esp_transforms_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_set_esp_transforms_reply_t: */
    s = format(s, "vl_api_ikev2_set_esp_transforms_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_set_sa_lifetime_t_print (vl_api_ikev2_set_sa_lifetime_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_set_sa_lifetime_t: */
    s = format(s, "vl_api_ikev2_set_sa_lifetime_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Ulifetime: %llu", format_white_space, indent, a->lifetime);
    s = format(s, "\n%Ulifetime_jitter: %u", format_white_space, indent, a->lifetime_jitter);
    s = format(s, "\n%Uhandover: %u", format_white_space, indent, a->handover);
    s = format(s, "\n%Ulifetime_maxdata: %llu", format_white_space, indent, a->lifetime_maxdata);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_set_sa_lifetime_reply_t_print (vl_api_ikev2_set_sa_lifetime_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_set_sa_lifetime_reply_t: */
    s = format(s, "vl_api_ikev2_set_sa_lifetime_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_initiate_sa_init_t_print (vl_api_ikev2_initiate_sa_init_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_initiate_sa_init_t: */
    s = format(s, "vl_api_ikev2_initiate_sa_init_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_initiate_sa_init_reply_t_print (vl_api_ikev2_initiate_sa_init_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_initiate_sa_init_reply_t: */
    s = format(s, "vl_api_ikev2_initiate_sa_init_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_initiate_del_ike_sa_t_print (vl_api_ikev2_initiate_del_ike_sa_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_initiate_del_ike_sa_t: */
    s = format(s, "vl_api_ikev2_initiate_del_ike_sa_t:");
    s = format(s, "\n%Uispi: %llu", format_white_space, indent, a->ispi);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_initiate_del_ike_sa_reply_t_print (vl_api_ikev2_initiate_del_ike_sa_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_initiate_del_ike_sa_reply_t: */
    s = format(s, "vl_api_ikev2_initiate_del_ike_sa_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_initiate_del_child_sa_t_print (vl_api_ikev2_initiate_del_child_sa_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_initiate_del_child_sa_t: */
    s = format(s, "vl_api_ikev2_initiate_del_child_sa_t:");
    s = format(s, "\n%Uispi: %u", format_white_space, indent, a->ispi);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_initiate_del_child_sa_reply_t_print (vl_api_ikev2_initiate_del_child_sa_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_initiate_del_child_sa_reply_t: */
    s = format(s, "vl_api_ikev2_initiate_del_child_sa_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_initiate_rekey_child_sa_t_print (vl_api_ikev2_initiate_rekey_child_sa_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_initiate_rekey_child_sa_t: */
    s = format(s, "vl_api_ikev2_initiate_rekey_child_sa_t:");
    s = format(s, "\n%Uispi: %u", format_white_space, indent, a->ispi);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_initiate_rekey_child_sa_reply_t_print (vl_api_ikev2_initiate_rekey_child_sa_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_initiate_rekey_child_sa_reply_t: */
    s = format(s, "vl_api_ikev2_initiate_rekey_child_sa_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_set_udp_encap_t_print (vl_api_ikev2_profile_set_udp_encap_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_set_udp_encap_t: */
    s = format(s, "vl_api_ikev2_profile_set_udp_encap_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_set_udp_encap_reply_t_print (vl_api_ikev2_profile_set_udp_encap_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_set_udp_encap_reply_t: */
    s = format(s, "vl_api_ikev2_profile_set_udp_encap_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_set_ipsec_udp_port_t_print (vl_api_ikev2_profile_set_ipsec_udp_port_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_set_ipsec_udp_port_t: */
    s = format(s, "vl_api_ikev2_profile_set_ipsec_udp_port_t:");
    s = format(s, "\n%Uis_set: %u", format_white_space, indent, a->is_set);
    s = format(s, "\n%Uport: %u", format_white_space, indent, a->port);
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_set_ipsec_udp_port_reply_t_print (vl_api_ikev2_profile_set_ipsec_udp_port_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_set_ipsec_udp_port_reply_t: */
    s = format(s, "vl_api_ikev2_profile_set_ipsec_udp_port_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_set_liveness_t_print (vl_api_ikev2_profile_set_liveness_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_set_liveness_t: */
    s = format(s, "vl_api_ikev2_profile_set_liveness_t:");
    s = format(s, "\n%Uperiod: %u", format_white_space, indent, a->period);
    s = format(s, "\n%Umax_retries: %u", format_white_space, indent, a->max_retries);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ikev2_profile_set_liveness_reply_t_print (vl_api_ikev2_profile_set_liveness_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ikev2_profile_set_liveness_reply_t: */
    s = format(s, "vl_api_ikev2_profile_set_liveness_reply_t:");
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
#ifndef included_ikev2_endianfun
#define included_ikev2_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_ikev2_plugin_get_version_t_endian (vl_api_ikev2_plugin_get_version_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ikev2_plugin_get_version_reply_t_endian (vl_api_ikev2_plugin_get_version_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->major = clib_net_to_host_u32(a->major);
    a->minor = clib_net_to_host_u32(a->minor);
}

static inline void vl_api_ikev2_profile_dump_t_endian (vl_api_ikev2_profile_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ikev2_profile_details_t_endian (vl_api_ikev2_profile_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ikev2_profile_t_endian(&a->profile);
}

static inline void vl_api_ikev2_sa_dump_t_endian (vl_api_ikev2_sa_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ikev2_sa_details_t_endian (vl_api_ikev2_sa_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_ikev2_sa_t_endian(&a->sa);
}

static inline void vl_api_ikev2_child_sa_dump_t_endian (vl_api_ikev2_child_sa_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->sa_index = clib_net_to_host_u32(a->sa_index);
}

static inline void vl_api_ikev2_child_sa_details_t_endian (vl_api_ikev2_child_sa_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_ikev2_child_sa_t_endian(&a->child_sa);
}

static inline void vl_api_ikev2_nonce_get_t_endian (vl_api_ikev2_nonce_get_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_initiator = a->is_initiator (no-op) */
    a->sa_index = clib_net_to_host_u32(a->sa_index);
}

static inline void vl_api_ikev2_nonce_get_reply_t_endian (vl_api_ikev2_nonce_get_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->data_len = clib_net_to_host_u32(a->data_len);
    /* a->nonce = a->nonce (no-op) */
}

static inline void vl_api_ikev2_traffic_selector_dump_t_endian (vl_api_ikev2_traffic_selector_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_initiator = a->is_initiator (no-op) */
    a->sa_index = clib_net_to_host_u32(a->sa_index);
    a->child_sa_index = clib_net_to_host_u32(a->child_sa_index);
}

static inline void vl_api_ikev2_traffic_selector_details_t_endian (vl_api_ikev2_traffic_selector_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_ikev2_ts_t_endian(&a->ts);
}

static inline void vl_api_ikev2_profile_add_del_t_endian (vl_api_ikev2_profile_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_ikev2_profile_add_del_reply_t_endian (vl_api_ikev2_profile_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_profile_set_auth_t_endian (vl_api_ikev2_profile_set_auth_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
    /* a->auth_method = a->auth_method (no-op) */
    /* a->is_hex = a->is_hex (no-op) */
    a->data_len = clib_net_to_host_u32(a->data_len);
    /* a->data = a->data (no-op) */
}

static inline void vl_api_ikev2_profile_set_auth_reply_t_endian (vl_api_ikev2_profile_set_auth_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_profile_set_id_t_endian (vl_api_ikev2_profile_set_id_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
    /* a->is_local = a->is_local (no-op) */
    /* a->id_type = a->id_type (no-op) */
    a->data_len = clib_net_to_host_u32(a->data_len);
    /* a->data = a->data (no-op) */
}

static inline void vl_api_ikev2_profile_set_id_reply_t_endian (vl_api_ikev2_profile_set_id_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_profile_set_ts_t_endian (vl_api_ikev2_profile_set_ts_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
    vl_api_ikev2_ts_t_endian(&a->ts);
}

static inline void vl_api_ikev2_profile_set_ts_reply_t_endian (vl_api_ikev2_profile_set_ts_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_set_local_key_t_endian (vl_api_ikev2_set_local_key_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->key_file = a->key_file (no-op) */
}

static inline void vl_api_ikev2_set_local_key_reply_t_endian (vl_api_ikev2_set_local_key_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_set_tunnel_interface_t_endian (vl_api_ikev2_set_tunnel_interface_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ikev2_set_tunnel_interface_reply_t_endian (vl_api_ikev2_set_tunnel_interface_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_set_responder_t_endian (vl_api_ikev2_set_responder_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
    vl_api_ikev2_responder_t_endian(&a->responder);
}

static inline void vl_api_ikev2_set_responder_reply_t_endian (vl_api_ikev2_set_responder_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_set_ike_transforms_t_endian (vl_api_ikev2_set_ike_transforms_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
    vl_api_ikev2_ike_transforms_t_endian(&a->tr);
}

static inline void vl_api_ikev2_set_ike_transforms_reply_t_endian (vl_api_ikev2_set_ike_transforms_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_set_esp_transforms_t_endian (vl_api_ikev2_set_esp_transforms_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
    vl_api_ikev2_esp_transforms_t_endian(&a->tr);
}

static inline void vl_api_ikev2_set_esp_transforms_reply_t_endian (vl_api_ikev2_set_esp_transforms_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_set_sa_lifetime_t_endian (vl_api_ikev2_set_sa_lifetime_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
    a->lifetime = clib_net_to_host_u64(a->lifetime);
    a->lifetime_jitter = clib_net_to_host_u32(a->lifetime_jitter);
    a->handover = clib_net_to_host_u32(a->handover);
    a->lifetime_maxdata = clib_net_to_host_u64(a->lifetime_maxdata);
}

static inline void vl_api_ikev2_set_sa_lifetime_reply_t_endian (vl_api_ikev2_set_sa_lifetime_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_initiate_sa_init_t_endian (vl_api_ikev2_initiate_sa_init_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
}

static inline void vl_api_ikev2_initiate_sa_init_reply_t_endian (vl_api_ikev2_initiate_sa_init_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_initiate_del_ike_sa_t_endian (vl_api_ikev2_initiate_del_ike_sa_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->ispi = clib_net_to_host_u64(a->ispi);
}

static inline void vl_api_ikev2_initiate_del_ike_sa_reply_t_endian (vl_api_ikev2_initiate_del_ike_sa_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_initiate_del_child_sa_t_endian (vl_api_ikev2_initiate_del_child_sa_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->ispi = clib_net_to_host_u32(a->ispi);
}

static inline void vl_api_ikev2_initiate_del_child_sa_reply_t_endian (vl_api_ikev2_initiate_del_child_sa_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_initiate_rekey_child_sa_t_endian (vl_api_ikev2_initiate_rekey_child_sa_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->ispi = clib_net_to_host_u32(a->ispi);
}

static inline void vl_api_ikev2_initiate_rekey_child_sa_reply_t_endian (vl_api_ikev2_initiate_rekey_child_sa_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_profile_set_udp_encap_t_endian (vl_api_ikev2_profile_set_udp_encap_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
}

static inline void vl_api_ikev2_profile_set_udp_encap_reply_t_endian (vl_api_ikev2_profile_set_udp_encap_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_profile_set_ipsec_udp_port_t_endian (vl_api_ikev2_profile_set_ipsec_udp_port_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_set = a->is_set (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    /* a->name = a->name (no-op) */
}

static inline void vl_api_ikev2_profile_set_ipsec_udp_port_reply_t_endian (vl_api_ikev2_profile_set_ipsec_udp_port_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ikev2_profile_set_liveness_t_endian (vl_api_ikev2_profile_set_liveness_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->period = clib_net_to_host_u32(a->period);
    a->max_retries = clib_net_to_host_u32(a->max_retries);
}

static inline void vl_api_ikev2_profile_set_liveness_reply_t_endian (vl_api_ikev2_profile_set_liveness_reply_t *a)
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

vl_api_version_tuple(ikev2.api, 1, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ikev2.api, 0xf5148ad8)

#endif

