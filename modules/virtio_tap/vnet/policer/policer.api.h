/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: policer.api
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
#warning no content included from policer.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/policer/policer_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_POLICER_ADD_DEL, vl_api_policer_add_del_t_handler)
vl_msg_id(VL_API_POLICER_ADD_DEL_REPLY, vl_api_policer_add_del_reply_t_handler)
vl_msg_id(VL_API_POLICER_DUMP, vl_api_policer_dump_t_handler)
vl_msg_id(VL_API_POLICER_DETAILS, vl_api_policer_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_policer_add_del_t, 1)
vl_msg_name(vl_api_policer_add_del_reply_t, 1)
vl_msg_name(vl_api_policer_dump_t, 1)
vl_msg_name(vl_api_policer_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_policer \
_(VL_API_POLICER_ADD_DEL, policer_add_del, cb948f6e) \
_(VL_API_POLICER_ADD_DEL_REPLY, policer_add_del_reply, a177cef2) \
_(VL_API_POLICER_DUMP, policer_dump, 35f1ae0f) \
_(VL_API_POLICER_DETAILS, policer_details, a43f781a) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "policer.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_policer_printfun_types
#define included_policer_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_policer_printfun
#define included_policer_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_policer_add_del_t_print (vl_api_policer_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_policer_add_del_t: */
    s = format(s, "vl_api_policer_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Ucir: %u", format_white_space, indent, a->cir);
    s = format(s, "\n%Ueir: %u", format_white_space, indent, a->eir);
    s = format(s, "\n%Ucb: %llu", format_white_space, indent, a->cb);
    s = format(s, "\n%Ueb: %llu", format_white_space, indent, a->eb);
    s = format(s, "\n%Urate_type: %U", format_white_space, indent, format_vl_api_sse2_qos_rate_type_t, &a->rate_type, indent);
    s = format(s, "\n%Uround_type: %U", format_white_space, indent, format_vl_api_sse2_qos_round_type_t, &a->round_type, indent);
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_sse2_qos_policer_type_t, &a->type, indent);
    s = format(s, "\n%Ucolor_aware: %u", format_white_space, indent, a->color_aware);
    s = format(s, "\n%Uconform_action: %U", format_white_space, indent, format_vl_api_sse2_qos_action_t, &a->conform_action, indent);
    s = format(s, "\n%Uexceed_action: %U", format_white_space, indent, format_vl_api_sse2_qos_action_t, &a->exceed_action, indent);
    s = format(s, "\n%Uviolate_action: %U", format_white_space, indent, format_vl_api_sse2_qos_action_t, &a->violate_action, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_policer_add_del_reply_t_print (vl_api_policer_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_policer_add_del_reply_t: */
    s = format(s, "vl_api_policer_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Upolicer_index: %u", format_white_space, indent, a->policer_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_policer_dump_t_print (vl_api_policer_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_policer_dump_t: */
    s = format(s, "vl_api_policer_dump_t:");
    s = format(s, "\n%Umatch_name_valid: %u", format_white_space, indent, a->match_name_valid);
    s = format(s, "\n%Umatch_name: %s", format_white_space, indent, a->match_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_policer_details_t_print (vl_api_policer_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_policer_details_t: */
    s = format(s, "vl_api_policer_details_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Ucir: %u", format_white_space, indent, a->cir);
    s = format(s, "\n%Ueir: %u", format_white_space, indent, a->eir);
    s = format(s, "\n%Ucb: %llu", format_white_space, indent, a->cb);
    s = format(s, "\n%Ueb: %llu", format_white_space, indent, a->eb);
    s = format(s, "\n%Urate_type: %U", format_white_space, indent, format_vl_api_sse2_qos_rate_type_t, &a->rate_type, indent);
    s = format(s, "\n%Uround_type: %U", format_white_space, indent, format_vl_api_sse2_qos_round_type_t, &a->round_type, indent);
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_sse2_qos_policer_type_t, &a->type, indent);
    s = format(s, "\n%Uconform_action: %U", format_white_space, indent, format_vl_api_sse2_qos_action_t, &a->conform_action, indent);
    s = format(s, "\n%Uexceed_action: %U", format_white_space, indent, format_vl_api_sse2_qos_action_t, &a->exceed_action, indent);
    s = format(s, "\n%Uviolate_action: %U", format_white_space, indent, format_vl_api_sse2_qos_action_t, &a->violate_action, indent);
    s = format(s, "\n%Usingle_rate: %u", format_white_space, indent, a->single_rate);
    s = format(s, "\n%Ucolor_aware: %u", format_white_space, indent, a->color_aware);
    s = format(s, "\n%Uscale: %u", format_white_space, indent, a->scale);
    s = format(s, "\n%Ucir_tokens_per_period: %u", format_white_space, indent, a->cir_tokens_per_period);
    s = format(s, "\n%Upir_tokens_per_period: %u", format_white_space, indent, a->pir_tokens_per_period);
    s = format(s, "\n%Ucurrent_limit: %u", format_white_space, indent, a->current_limit);
    s = format(s, "\n%Ucurrent_bucket: %u", format_white_space, indent, a->current_bucket);
    s = format(s, "\n%Uextended_limit: %u", format_white_space, indent, a->extended_limit);
    s = format(s, "\n%Uextended_bucket: %u", format_white_space, indent, a->extended_bucket);
    s = format(s, "\n%Ulast_update_time: %llu", format_white_space, indent, a->last_update_time);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_policer_endianfun
#define included_policer_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_policer_add_del_t_endian (vl_api_policer_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->name = a->name (no-op) */
    a->cir = clib_net_to_host_u32(a->cir);
    a->eir = clib_net_to_host_u32(a->eir);
    a->cb = clib_net_to_host_u64(a->cb);
    a->eb = clib_net_to_host_u64(a->eb);
    vl_api_sse2_qos_rate_type_t_endian(&a->rate_type);
    vl_api_sse2_qos_round_type_t_endian(&a->round_type);
    vl_api_sse2_qos_policer_type_t_endian(&a->type);
    /* a->color_aware = a->color_aware (no-op) */
    vl_api_sse2_qos_action_t_endian(&a->conform_action);
    vl_api_sse2_qos_action_t_endian(&a->exceed_action);
    vl_api_sse2_qos_action_t_endian(&a->violate_action);
}

static inline void vl_api_policer_add_del_reply_t_endian (vl_api_policer_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->policer_index = clib_net_to_host_u32(a->policer_index);
}

static inline void vl_api_policer_dump_t_endian (vl_api_policer_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->match_name_valid = a->match_name_valid (no-op) */
    /* a->match_name = a->match_name (no-op) */
}

static inline void vl_api_policer_details_t_endian (vl_api_policer_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
    a->cir = clib_net_to_host_u32(a->cir);
    a->eir = clib_net_to_host_u32(a->eir);
    a->cb = clib_net_to_host_u64(a->cb);
    a->eb = clib_net_to_host_u64(a->eb);
    vl_api_sse2_qos_rate_type_t_endian(&a->rate_type);
    vl_api_sse2_qos_round_type_t_endian(&a->round_type);
    vl_api_sse2_qos_policer_type_t_endian(&a->type);
    vl_api_sse2_qos_action_t_endian(&a->conform_action);
    vl_api_sse2_qos_action_t_endian(&a->exceed_action);
    vl_api_sse2_qos_action_t_endian(&a->violate_action);
    /* a->single_rate = a->single_rate (no-op) */
    /* a->color_aware = a->color_aware (no-op) */
    a->scale = clib_net_to_host_u32(a->scale);
    a->cir_tokens_per_period = clib_net_to_host_u32(a->cir_tokens_per_period);
    a->pir_tokens_per_period = clib_net_to_host_u32(a->pir_tokens_per_period);
    a->current_limit = clib_net_to_host_u32(a->current_limit);
    a->current_bucket = clib_net_to_host_u32(a->current_bucket);
    a->extended_limit = clib_net_to_host_u32(a->extended_limit);
    a->extended_bucket = clib_net_to_host_u32(a->extended_bucket);
    a->last_update_time = clib_net_to_host_u64(a->last_update_time);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(policer.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(policer.api, 0x42c4dc7)

#endif

