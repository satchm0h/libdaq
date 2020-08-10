/*
 * VLIB API definitions 2020-07-24 16:28:57
 * Input file: ikev2_types.api
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
#warning no content included from ikev2_types.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
#endif
/****** Message names ******/

#ifdef vl_msg_name
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ikev2_types 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "ikev2_types.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ikev2_types_printfun_types
#define included_ikev2_types_printfun_types

static inline u8 *format_vl_api_ikev2_id_t (u8 *s, va_list * args)
{
    vl_api_ikev2_id_t *a = va_arg (*args, vl_api_ikev2_id_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Utype: %u", format_white_space, indent, a->type);
    s = format(s, "\n%Udata_len: %u", format_white_space, indent, a->data_len);
    s = format(s, "\n%Udata: %s", format_white_space, indent, a->data);
    return s;
}

static inline u8 *format_vl_api_ikev2_ts_t (u8 *s, va_list * args)
{
    vl_api_ikev2_ts_t *a = va_arg (*args, vl_api_ikev2_ts_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usa_index: %u", format_white_space, indent, a->sa_index);
    s = format(s, "\n%Uchild_sa_index: %u", format_white_space, indent, a->child_sa_index);
    s = format(s, "\n%Uis_local: %u", format_white_space, indent, a->is_local);
    s = format(s, "\n%Uprotocol_id: %u", format_white_space, indent, a->protocol_id);
    s = format(s, "\n%Ustart_port: %u", format_white_space, indent, a->start_port);
    s = format(s, "\n%Uend_port: %u", format_white_space, indent, a->end_port);
    s = format(s, "\n%Ustart_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->start_addr, indent);
    s = format(s, "\n%Uend_addr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->end_addr, indent);
    return s;
}

static inline u8 *format_vl_api_ikev2_auth_t (u8 *s, va_list * args)
{
    vl_api_ikev2_auth_t *a = va_arg (*args, vl_api_ikev2_auth_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Umethod: %u", format_white_space, indent, a->method);
    s = format(s, "\n%Uhex: %u", format_white_space, indent, a->hex);
    s = format(s, "\n%Udata_len: %u", format_white_space, indent, a->data_len);
    s = format(s, "\n%Udata: %U", format_white_space, indent, format_hex_bytes, a->data, a->data_len);
    return s;
}

static inline u8 *format_vl_api_ikev2_responder_t (u8 *s, va_list * args)
{
    vl_api_ikev2_responder_t *a = va_arg (*args, vl_api_ikev2_responder_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uip4: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip4, indent);
    return s;
}

static inline u8 *format_vl_api_ikev2_ike_transforms_t (u8 *s, va_list * args)
{
    vl_api_ikev2_ike_transforms_t *a = va_arg (*args, vl_api_ikev2_ike_transforms_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ucrypto_alg: %u", format_white_space, indent, a->crypto_alg);
    s = format(s, "\n%Ucrypto_key_size: %u", format_white_space, indent, a->crypto_key_size);
    s = format(s, "\n%Uinteg_alg: %u", format_white_space, indent, a->integ_alg);
    s = format(s, "\n%Udh_group: %u", format_white_space, indent, a->dh_group);
    return s;
}

static inline u8 *format_vl_api_ikev2_esp_transforms_t (u8 *s, va_list * args)
{
    vl_api_ikev2_esp_transforms_t *a = va_arg (*args, vl_api_ikev2_esp_transforms_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ucrypto_alg: %u", format_white_space, indent, a->crypto_alg);
    s = format(s, "\n%Ucrypto_key_size: %u", format_white_space, indent, a->crypto_key_size);
    s = format(s, "\n%Uinteg_alg: %u", format_white_space, indent, a->integ_alg);
    return s;
}

static inline u8 *format_vl_api_ikev2_profile_t (u8 *s, va_list * args)
{
    vl_api_ikev2_profile_t *a = va_arg (*args, vl_api_ikev2_profile_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Uloc_id: %U", format_white_space, indent, format_vl_api_ikev2_id_t, &a->loc_id, indent);
    s = format(s, "\n%Urem_id: %U", format_white_space, indent, format_vl_api_ikev2_id_t, &a->rem_id, indent);
    s = format(s, "\n%Uloc_ts: %U", format_white_space, indent, format_vl_api_ikev2_ts_t, &a->loc_ts, indent);
    s = format(s, "\n%Urem_ts: %U", format_white_space, indent, format_vl_api_ikev2_ts_t, &a->rem_ts, indent);
    s = format(s, "\n%Uresponder: %U", format_white_space, indent, format_vl_api_ikev2_responder_t, &a->responder, indent);
    s = format(s, "\n%Uike_ts: %U", format_white_space, indent, format_vl_api_ikev2_ike_transforms_t, &a->ike_ts, indent);
    s = format(s, "\n%Uesp_ts: %U", format_white_space, indent, format_vl_api_ikev2_esp_transforms_t, &a->esp_ts, indent);
    s = format(s, "\n%Ulifetime: %llu", format_white_space, indent, a->lifetime);
    s = format(s, "\n%Ulifetime_maxdata: %llu", format_white_space, indent, a->lifetime_maxdata);
    s = format(s, "\n%Ulifetime_jitter: %u", format_white_space, indent, a->lifetime_jitter);
    s = format(s, "\n%Uhandover: %u", format_white_space, indent, a->handover);
    s = format(s, "\n%Uipsec_over_udp_port: %u", format_white_space, indent, a->ipsec_over_udp_port);
    s = format(s, "\n%Utun_itf: %u", format_white_space, indent, a->tun_itf);
    s = format(s, "\n%Uudp_encap: %u", format_white_space, indent, a->udp_encap);
    s = format(s, "\n%Uauth: %U", format_white_space, indent, format_vl_api_ikev2_auth_t, &a->auth, indent);
    return s;
}

static inline u8 *format_vl_api_ikev2_sa_transform_t (u8 *s, va_list * args)
{
    vl_api_ikev2_sa_transform_t *a = va_arg (*args, vl_api_ikev2_sa_transform_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Utransform_type: %u", format_white_space, indent, a->transform_type);
    s = format(s, "\n%Utransform_id: %u", format_white_space, indent, a->transform_id);
    s = format(s, "\n%Ukey_len: %u", format_white_space, indent, a->key_len);
    s = format(s, "\n%Ukey_trunc: %u", format_white_space, indent, a->key_trunc);
    s = format(s, "\n%Ublock_size: %u", format_white_space, indent, a->block_size);
    s = format(s, "\n%Udh_group: %u", format_white_space, indent, a->dh_group);
    return s;
}

static inline u8 *format_vl_api_ikev2_keys_t (u8 *s, va_list * args)
{
    vl_api_ikev2_keys_t *a = va_arg (*args, vl_api_ikev2_keys_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usk_d: %U", format_white_space, indent, format_hex_bytes, a, 64);
    s = format(s, "\n%Usk_d_len: %u", format_white_space, indent, a->sk_d_len);
    s = format(s, "\n%Usk_ai: %U", format_white_space, indent, format_hex_bytes, a, 64);
    s = format(s, "\n%Usk_ai_len: %u", format_white_space, indent, a->sk_ai_len);
    s = format(s, "\n%Usk_ar: %U", format_white_space, indent, format_hex_bytes, a, 64);
    s = format(s, "\n%Usk_ar_len: %u", format_white_space, indent, a->sk_ar_len);
    s = format(s, "\n%Usk_ei: %U", format_white_space, indent, format_hex_bytes, a, 64);
    s = format(s, "\n%Usk_ei_len: %u", format_white_space, indent, a->sk_ei_len);
    s = format(s, "\n%Usk_er: %U", format_white_space, indent, format_hex_bytes, a, 64);
    s = format(s, "\n%Usk_er_len: %u", format_white_space, indent, a->sk_er_len);
    s = format(s, "\n%Usk_pi: %U", format_white_space, indent, format_hex_bytes, a, 64);
    s = format(s, "\n%Usk_pi_len: %u", format_white_space, indent, a->sk_pi_len);
    s = format(s, "\n%Usk_pr: %U", format_white_space, indent, format_hex_bytes, a, 64);
    s = format(s, "\n%Usk_pr_len: %u", format_white_space, indent, a->sk_pr_len);
    return s;
}

static inline u8 *format_vl_api_ikev2_child_sa_t (u8 *s, va_list * args)
{
    vl_api_ikev2_child_sa_t *a = va_arg (*args, vl_api_ikev2_child_sa_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usa_index: %u", format_white_space, indent, a->sa_index);
    s = format(s, "\n%Uchild_sa_index: %u", format_white_space, indent, a->child_sa_index);
    s = format(s, "\n%Ui_spi: %u", format_white_space, indent, a->i_spi);
    s = format(s, "\n%Ur_spi: %u", format_white_space, indent, a->r_spi);
    s = format(s, "\n%Ukeys: %U", format_white_space, indent, format_vl_api_ikev2_keys_t, &a->keys, indent);
    s = format(s, "\n%Uencryption: %U", format_white_space, indent, format_vl_api_ikev2_sa_transform_t, &a->encryption, indent);
    s = format(s, "\n%Uintegrity: %U", format_white_space, indent, format_vl_api_ikev2_sa_transform_t, &a->integrity, indent);
    s = format(s, "\n%Uesn: %U", format_white_space, indent, format_vl_api_ikev2_sa_transform_t, &a->esn, indent);
    return s;
}

static inline u8 *format_vl_api_ikev2_sa_t (u8 *s, va_list * args)
{
    vl_api_ikev2_sa_t *a = va_arg (*args, vl_api_ikev2_sa_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usa_index: %u", format_white_space, indent, a->sa_index);
    s = format(s, "\n%Uprofile_index: %u", format_white_space, indent, a->profile_index);
    s = format(s, "\n%Uispi: %llu", format_white_space, indent, a->ispi);
    s = format(s, "\n%Urspi: %llu", format_white_space, indent, a->rspi);
    s = format(s, "\n%Uiaddr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->iaddr, indent);
    s = format(s, "\n%Uraddr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->raddr, indent);
    s = format(s, "\n%Ukeys: %U", format_white_space, indent, format_vl_api_ikev2_keys_t, &a->keys, indent);
    s = format(s, "\n%Ui_id: %U", format_white_space, indent, format_vl_api_ikev2_id_t, &a->i_id, indent);
    s = format(s, "\n%Ur_id: %U", format_white_space, indent, format_vl_api_ikev2_id_t, &a->r_id, indent);
    s = format(s, "\n%Uencryption: %U", format_white_space, indent, format_vl_api_ikev2_sa_transform_t, &a->encryption, indent);
    s = format(s, "\n%Uintegrity: %U", format_white_space, indent, format_vl_api_ikev2_sa_transform_t, &a->integrity, indent);
    s = format(s, "\n%Uprf: %U", format_white_space, indent, format_vl_api_ikev2_sa_transform_t, &a->prf, indent);
    s = format(s, "\n%Udh: %U", format_white_space, indent, format_vl_api_ikev2_sa_transform_t, &a->dh, indent);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ikev2_types_printfun
#define included_ikev2_types_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_ikev2_types_endianfun
#define included_ikev2_types_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_ikev2_id_t_endian (vl_api_ikev2_id_t *a)
{
    int i __attribute__((unused));
    /* a->type = a->type (no-op) */
    /* a->data_len = a->data_len (no-op) */
    /* a->data = a->data (no-op) */
}

static inline void vl_api_ikev2_ts_t_endian (vl_api_ikev2_ts_t *a)
{
    int i __attribute__((unused));
    a->sa_index = clib_net_to_host_u32(a->sa_index);
    a->child_sa_index = clib_net_to_host_u32(a->child_sa_index);
    /* a->is_local = a->is_local (no-op) */
    /* a->protocol_id = a->protocol_id (no-op) */
    a->start_port = clib_net_to_host_u16(a->start_port);
    a->end_port = clib_net_to_host_u16(a->end_port);
    vl_api_ip4_address_t_endian(&a->start_addr);
    vl_api_ip4_address_t_endian(&a->end_addr);
}

static inline void vl_api_ikev2_auth_t_endian (vl_api_ikev2_auth_t *a)
{
    int i __attribute__((unused));
    /* a->method = a->method (no-op) */
    /* a->hex = a->hex (no-op) */
    a->data_len = clib_net_to_host_u32(a->data_len);
    /* a->data = a->data (no-op) */
}

static inline void vl_api_ikev2_responder_t_endian (vl_api_ikev2_responder_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_ip4_address_t_endian(&a->ip4);
}

static inline void vl_api_ikev2_ike_transforms_t_endian (vl_api_ikev2_ike_transforms_t *a)
{
    int i __attribute__((unused));
    /* a->crypto_alg = a->crypto_alg (no-op) */
    a->crypto_key_size = clib_net_to_host_u32(a->crypto_key_size);
    /* a->integ_alg = a->integ_alg (no-op) */
    /* a->dh_group = a->dh_group (no-op) */
}

static inline void vl_api_ikev2_esp_transforms_t_endian (vl_api_ikev2_esp_transforms_t *a)
{
    int i __attribute__((unused));
    /* a->crypto_alg = a->crypto_alg (no-op) */
    a->crypto_key_size = clib_net_to_host_u32(a->crypto_key_size);
    /* a->integ_alg = a->integ_alg (no-op) */
}

static inline void vl_api_ikev2_profile_t_endian (vl_api_ikev2_profile_t *a)
{
    int i __attribute__((unused));
    /* a->name = a->name (no-op) */
    vl_api_ikev2_id_t_endian(&a->loc_id);
    vl_api_ikev2_id_t_endian(&a->rem_id);
    vl_api_ikev2_ts_t_endian(&a->loc_ts);
    vl_api_ikev2_ts_t_endian(&a->rem_ts);
    vl_api_ikev2_responder_t_endian(&a->responder);
    vl_api_ikev2_ike_transforms_t_endian(&a->ike_ts);
    vl_api_ikev2_esp_transforms_t_endian(&a->esp_ts);
    a->lifetime = clib_net_to_host_u64(a->lifetime);
    a->lifetime_maxdata = clib_net_to_host_u64(a->lifetime_maxdata);
    a->lifetime_jitter = clib_net_to_host_u32(a->lifetime_jitter);
    a->handover = clib_net_to_host_u32(a->handover);
    a->ipsec_over_udp_port = clib_net_to_host_u16(a->ipsec_over_udp_port);
    a->tun_itf = clib_net_to_host_u32(a->tun_itf);
    /* a->udp_encap = a->udp_encap (no-op) */
    vl_api_ikev2_auth_t_endian(&a->auth);
}

static inline void vl_api_ikev2_sa_transform_t_endian (vl_api_ikev2_sa_transform_t *a)
{
    int i __attribute__((unused));
    /* a->transform_type = a->transform_type (no-op) */
    a->transform_id = clib_net_to_host_u16(a->transform_id);
    a->key_len = clib_net_to_host_u16(a->key_len);
    a->key_trunc = clib_net_to_host_u16(a->key_trunc);
    a->block_size = clib_net_to_host_u16(a->block_size);
    /* a->dh_group = a->dh_group (no-op) */
}

static inline void vl_api_ikev2_keys_t_endian (vl_api_ikev2_keys_t *a)
{
    int i __attribute__((unused));
    /* a->sk_d = a->sk_d (no-op) */
    /* a->sk_d_len = a->sk_d_len (no-op) */
    /* a->sk_ai = a->sk_ai (no-op) */
    /* a->sk_ai_len = a->sk_ai_len (no-op) */
    /* a->sk_ar = a->sk_ar (no-op) */
    /* a->sk_ar_len = a->sk_ar_len (no-op) */
    /* a->sk_ei = a->sk_ei (no-op) */
    /* a->sk_ei_len = a->sk_ei_len (no-op) */
    /* a->sk_er = a->sk_er (no-op) */
    /* a->sk_er_len = a->sk_er_len (no-op) */
    /* a->sk_pi = a->sk_pi (no-op) */
    /* a->sk_pi_len = a->sk_pi_len (no-op) */
    /* a->sk_pr = a->sk_pr (no-op) */
    /* a->sk_pr_len = a->sk_pr_len (no-op) */
}

static inline void vl_api_ikev2_child_sa_t_endian (vl_api_ikev2_child_sa_t *a)
{
    int i __attribute__((unused));
    a->sa_index = clib_net_to_host_u32(a->sa_index);
    a->child_sa_index = clib_net_to_host_u32(a->child_sa_index);
    a->i_spi = clib_net_to_host_u32(a->i_spi);
    a->r_spi = clib_net_to_host_u32(a->r_spi);
    vl_api_ikev2_keys_t_endian(&a->keys);
    vl_api_ikev2_sa_transform_t_endian(&a->encryption);
    vl_api_ikev2_sa_transform_t_endian(&a->integrity);
    vl_api_ikev2_sa_transform_t_endian(&a->esn);
}

static inline void vl_api_ikev2_sa_t_endian (vl_api_ikev2_sa_t *a)
{
    int i __attribute__((unused));
    a->sa_index = clib_net_to_host_u32(a->sa_index);
    a->profile_index = clib_net_to_host_u32(a->profile_index);
    a->ispi = clib_net_to_host_u64(a->ispi);
    a->rspi = clib_net_to_host_u64(a->rspi);
    vl_api_ip4_address_t_endian(&a->iaddr);
    vl_api_ip4_address_t_endian(&a->raddr);
    vl_api_ikev2_keys_t_endian(&a->keys);
    vl_api_ikev2_id_t_endian(&a->i_id);
    vl_api_ikev2_id_t_endian(&a->r_id);
    vl_api_ikev2_sa_transform_t_endian(&a->encryption);
    vl_api_ikev2_sa_transform_t_endian(&a->integrity);
    vl_api_ikev2_sa_transform_t_endian(&a->prf);
    vl_api_ikev2_sa_transform_t_endian(&a->dh);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple


#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ikev2_types.api, 0xaa5cb2ce)

#endif

