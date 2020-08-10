/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: sr.api
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
#warning no content included from sr.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ip/ip_types.api.h>
#include <vnet/srv6/sr_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SR_LOCALSID_ADD_DEL, vl_api_sr_localsid_add_del_t_handler)
vl_msg_id(VL_API_SR_LOCALSID_ADD_DEL_REPLY, vl_api_sr_localsid_add_del_reply_t_handler)
vl_msg_id(VL_API_SR_POLICY_ADD, vl_api_sr_policy_add_t_handler)
vl_msg_id(VL_API_SR_POLICY_ADD_REPLY, vl_api_sr_policy_add_reply_t_handler)
vl_msg_id(VL_API_SR_POLICY_MOD, vl_api_sr_policy_mod_t_handler)
vl_msg_id(VL_API_SR_POLICY_MOD_REPLY, vl_api_sr_policy_mod_reply_t_handler)
vl_msg_id(VL_API_SR_POLICY_DEL, vl_api_sr_policy_del_t_handler)
vl_msg_id(VL_API_SR_POLICY_DEL_REPLY, vl_api_sr_policy_del_reply_t_handler)
vl_msg_id(VL_API_SR_SET_ENCAP_SOURCE, vl_api_sr_set_encap_source_t_handler)
vl_msg_id(VL_API_SR_SET_ENCAP_SOURCE_REPLY, vl_api_sr_set_encap_source_reply_t_handler)
vl_msg_id(VL_API_SR_SET_ENCAP_HOP_LIMIT, vl_api_sr_set_encap_hop_limit_t_handler)
vl_msg_id(VL_API_SR_SET_ENCAP_HOP_LIMIT_REPLY, vl_api_sr_set_encap_hop_limit_reply_t_handler)
vl_msg_id(VL_API_SR_STEERING_ADD_DEL, vl_api_sr_steering_add_del_t_handler)
vl_msg_id(VL_API_SR_STEERING_ADD_DEL_REPLY, vl_api_sr_steering_add_del_reply_t_handler)
vl_msg_id(VL_API_SR_LOCALSIDS_DUMP, vl_api_sr_localsids_dump_t_handler)
vl_msg_id(VL_API_SR_LOCALSIDS_DETAILS, vl_api_sr_localsids_details_t_handler)
vl_msg_id(VL_API_SR_POLICIES_DUMP, vl_api_sr_policies_dump_t_handler)
vl_msg_id(VL_API_SR_POLICIES_DETAILS, vl_api_sr_policies_details_t_handler)
vl_msg_id(VL_API_SR_POLICIES_WITH_SL_INDEX_DUMP, vl_api_sr_policies_with_sl_index_dump_t_handler)
vl_msg_id(VL_API_SR_POLICIES_WITH_SL_INDEX_DETAILS, vl_api_sr_policies_with_sl_index_details_t_handler)
vl_msg_id(VL_API_SR_STEERING_POL_DUMP, vl_api_sr_steering_pol_dump_t_handler)
vl_msg_id(VL_API_SR_STEERING_POL_DETAILS, vl_api_sr_steering_pol_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_sr_localsid_add_del_t, 1)
vl_msg_name(vl_api_sr_localsid_add_del_reply_t, 1)
vl_msg_name(vl_api_sr_policy_add_t, 1)
vl_msg_name(vl_api_sr_policy_add_reply_t, 1)
vl_msg_name(vl_api_sr_policy_mod_t, 1)
vl_msg_name(vl_api_sr_policy_mod_reply_t, 1)
vl_msg_name(vl_api_sr_policy_del_t, 1)
vl_msg_name(vl_api_sr_policy_del_reply_t, 1)
vl_msg_name(vl_api_sr_set_encap_source_t, 1)
vl_msg_name(vl_api_sr_set_encap_source_reply_t, 1)
vl_msg_name(vl_api_sr_set_encap_hop_limit_t, 1)
vl_msg_name(vl_api_sr_set_encap_hop_limit_reply_t, 1)
vl_msg_name(vl_api_sr_steering_add_del_t, 1)
vl_msg_name(vl_api_sr_steering_add_del_reply_t, 1)
vl_msg_name(vl_api_sr_localsids_dump_t, 1)
vl_msg_name(vl_api_sr_localsids_details_t, 1)
vl_msg_name(vl_api_sr_policies_dump_t, 1)
vl_msg_name(vl_api_sr_policies_details_t, 1)
vl_msg_name(vl_api_sr_policies_with_sl_index_dump_t, 1)
vl_msg_name(vl_api_sr_policies_with_sl_index_details_t, 1)
vl_msg_name(vl_api_sr_steering_pol_dump_t, 1)
vl_msg_name(vl_api_sr_steering_pol_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_sr \
_(VL_API_SR_LOCALSID_ADD_DEL, sr_localsid_add_del, 26fa3309) \
_(VL_API_SR_LOCALSID_ADD_DEL_REPLY, sr_localsid_add_del_reply, e8d4e804) \
_(VL_API_SR_POLICY_ADD, sr_policy_add, ec79ee6a) \
_(VL_API_SR_POLICY_ADD_REPLY, sr_policy_add_reply, e8d4e804) \
_(VL_API_SR_POLICY_MOD, sr_policy_mod, e531a102) \
_(VL_API_SR_POLICY_MOD_REPLY, sr_policy_mod_reply, e8d4e804) \
_(VL_API_SR_POLICY_DEL, sr_policy_del, cb4d48d5) \
_(VL_API_SR_POLICY_DEL_REPLY, sr_policy_del_reply, e8d4e804) \
_(VL_API_SR_SET_ENCAP_SOURCE, sr_set_encap_source, d3bad5e1) \
_(VL_API_SR_SET_ENCAP_SOURCE_REPLY, sr_set_encap_source_reply, e8d4e804) \
_(VL_API_SR_SET_ENCAP_HOP_LIMIT, sr_set_encap_hop_limit, aa75d7d0) \
_(VL_API_SR_SET_ENCAP_HOP_LIMIT_REPLY, sr_set_encap_hop_limit_reply, e8d4e804) \
_(VL_API_SR_STEERING_ADD_DEL, sr_steering_add_del, 3711dace) \
_(VL_API_SR_STEERING_ADD_DEL_REPLY, sr_steering_add_del_reply, e8d4e804) \
_(VL_API_SR_LOCALSIDS_DUMP, sr_localsids_dump, 51077d14) \
_(VL_API_SR_LOCALSIDS_DETAILS, sr_localsids_details, 6a6c0265) \
_(VL_API_SR_POLICIES_DUMP, sr_policies_dump, 51077d14) \
_(VL_API_SR_POLICIES_DETAILS, sr_policies_details, 07ec2d93) \
_(VL_API_SR_POLICIES_WITH_SL_INDEX_DUMP, sr_policies_with_sl_index_dump, 51077d14) \
_(VL_API_SR_POLICIES_WITH_SL_INDEX_DETAILS, sr_policies_with_sl_index_details, ca2e9bc8) \
_(VL_API_SR_STEERING_POL_DUMP, sr_steering_pol_dump, 51077d14) \
_(VL_API_SR_STEERING_POL_DETAILS, sr_steering_pol_details, 1c1ee786) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "sr.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_sr_printfun_types
#define included_sr_printfun_types

static inline u8 *format_vl_api_srv6_sid_list_t (u8 *s, va_list * args)
{
    vl_api_srv6_sid_list_t *a = va_arg (*args, vl_api_srv6_sid_list_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Unum_sids: %u", format_white_space, indent, a->num_sids);
    s = format(s, "\n%Uweight: %u", format_white_space, indent, a->weight);
    for (i = 0; i < 16; i++) {
        s = format(s, "\n%Usids: %U",
                   format_white_space, indent, format_vl_api_ip6_address_t, &a->sids[i], indent);
    }
    return s;
}

static inline u8 *format_vl_api_srv6_sid_list_with_sl_index_t (u8 *s, va_list * args)
{
    vl_api_srv6_sid_list_with_sl_index_t *a = va_arg (*args, vl_api_srv6_sid_list_with_sl_index_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Unum_sids: %u", format_white_space, indent, a->num_sids);
    s = format(s, "\n%Uweight: %u", format_white_space, indent, a->weight);
    s = format(s, "\n%Usl_index: %u", format_white_space, indent, a->sl_index);
    for (i = 0; i < 16; i++) {
        s = format(s, "\n%Usids: %U",
                   format_white_space, indent, format_vl_api_ip6_address_t, &a->sids[i], indent);
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_sr_printfun
#define included_sr_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_sr_localsid_add_del_t_print (vl_api_sr_localsid_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_localsid_add_del_t: */
    s = format(s, "vl_api_sr_localsid_add_del_t:");
    s = format(s, "\n%Uis_del: %u", format_white_space, indent, a->is_del);
    s = format(s, "\n%Ulocalsid: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->localsid, indent);
    s = format(s, "\n%Uend_psp: %u", format_white_space, indent, a->end_psp);
    s = format(s, "\n%Ubehavior: %U", format_white_space, indent, format_vl_api_sr_behavior_t, &a->behavior, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uvlan_index: %u", format_white_space, indent, a->vlan_index);
    s = format(s, "\n%Ufib_table: %u", format_white_space, indent, a->fib_table);
    s = format(s, "\n%Unh_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->nh_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_localsid_add_del_reply_t_print (vl_api_sr_localsid_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_localsid_add_del_reply_t: */
    s = format(s, "vl_api_sr_localsid_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_policy_add_t_print (vl_api_sr_policy_add_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_policy_add_t: */
    s = format(s, "vl_api_sr_policy_add_t:");
    s = format(s, "\n%Ubsid_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->bsid_addr, indent);
    s = format(s, "\n%Uweight: %u", format_white_space, indent, a->weight);
    s = format(s, "\n%Uis_encap: %u", format_white_space, indent, a->is_encap);
    s = format(s, "\n%Uis_spray: %u", format_white_space, indent, a->is_spray);
    s = format(s, "\n%Ufib_table: %u", format_white_space, indent, a->fib_table);
    s = format(s, "\n%Usids: %U", format_white_space, indent, format_vl_api_srv6_sid_list_t, &a->sids, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_policy_add_reply_t_print (vl_api_sr_policy_add_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_policy_add_reply_t: */
    s = format(s, "vl_api_sr_policy_add_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_policy_mod_t_print (vl_api_sr_policy_mod_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_policy_mod_t: */
    s = format(s, "vl_api_sr_policy_mod_t:");
    s = format(s, "\n%Ubsid_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->bsid_addr, indent);
    s = format(s, "\n%Usr_policy_index: %u", format_white_space, indent, a->sr_policy_index);
    s = format(s, "\n%Ufib_table: %u", format_white_space, indent, a->fib_table);
    s = format(s, "\n%Uoperation: %U", format_white_space, indent, format_vl_api_sr_policy_op_t, &a->operation, indent);
    s = format(s, "\n%Usl_index: %u", format_white_space, indent, a->sl_index);
    s = format(s, "\n%Uweight: %u", format_white_space, indent, a->weight);
    s = format(s, "\n%Usids: %U", format_white_space, indent, format_vl_api_srv6_sid_list_t, &a->sids, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_policy_mod_reply_t_print (vl_api_sr_policy_mod_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_policy_mod_reply_t: */
    s = format(s, "vl_api_sr_policy_mod_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_policy_del_t_print (vl_api_sr_policy_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_policy_del_t: */
    s = format(s, "vl_api_sr_policy_del_t:");
    s = format(s, "\n%Ubsid_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->bsid_addr, indent);
    s = format(s, "\n%Usr_policy_index: %u", format_white_space, indent, a->sr_policy_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_policy_del_reply_t_print (vl_api_sr_policy_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_policy_del_reply_t: */
    s = format(s, "vl_api_sr_policy_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_set_encap_source_t_print (vl_api_sr_set_encap_source_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_set_encap_source_t: */
    s = format(s, "vl_api_sr_set_encap_source_t:");
    s = format(s, "\n%Uencaps_source: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->encaps_source, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_set_encap_source_reply_t_print (vl_api_sr_set_encap_source_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_set_encap_source_reply_t: */
    s = format(s, "vl_api_sr_set_encap_source_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_set_encap_hop_limit_t_print (vl_api_sr_set_encap_hop_limit_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_set_encap_hop_limit_t: */
    s = format(s, "vl_api_sr_set_encap_hop_limit_t:");
    s = format(s, "\n%Uhop_limit: %u", format_white_space, indent, a->hop_limit);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_set_encap_hop_limit_reply_t_print (vl_api_sr_set_encap_hop_limit_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_set_encap_hop_limit_reply_t: */
    s = format(s, "vl_api_sr_set_encap_hop_limit_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_steering_add_del_t_print (vl_api_sr_steering_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_steering_add_del_t: */
    s = format(s, "vl_api_sr_steering_add_del_t:");
    s = format(s, "\n%Uis_del: %u", format_white_space, indent, a->is_del);
    s = format(s, "\n%Ubsid_addr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->bsid_addr, indent);
    s = format(s, "\n%Usr_policy_index: %u", format_white_space, indent, a->sr_policy_index);
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->prefix, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Utraffic_type: %U", format_white_space, indent, format_vl_api_sr_steer_t, &a->traffic_type, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_steering_add_del_reply_t_print (vl_api_sr_steering_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_steering_add_del_reply_t: */
    s = format(s, "vl_api_sr_steering_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_localsids_dump_t_print (vl_api_sr_localsids_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_localsids_dump_t: */
    s = format(s, "vl_api_sr_localsids_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_localsids_details_t_print (vl_api_sr_localsids_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_localsids_details_t: */
    s = format(s, "vl_api_sr_localsids_details_t:");
    s = format(s, "\n%Uaddr: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->addr, indent);
    s = format(s, "\n%Uend_psp: %u", format_white_space, indent, a->end_psp);
    s = format(s, "\n%Ubehavior: %U", format_white_space, indent, format_vl_api_sr_behavior_t, &a->behavior, indent);
    s = format(s, "\n%Ufib_table: %u", format_white_space, indent, a->fib_table);
    s = format(s, "\n%Uvlan_index: %u", format_white_space, indent, a->vlan_index);
    s = format(s, "\n%Uxconnect_nh_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->xconnect_nh_addr, indent);
    s = format(s, "\n%Uxconnect_iface_or_vrf_table: %u", format_white_space, indent, a->xconnect_iface_or_vrf_table);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_policies_dump_t_print (vl_api_sr_policies_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_policies_dump_t: */
    s = format(s, "vl_api_sr_policies_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_policies_details_t_print (vl_api_sr_policies_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_policies_details_t: */
    s = format(s, "vl_api_sr_policies_details_t:");
    s = format(s, "\n%Ubsid: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->bsid, indent);
    s = format(s, "\n%Uis_spray: %u", format_white_space, indent, a->is_spray);
    s = format(s, "\n%Uis_encap: %u", format_white_space, indent, a->is_encap);
    s = format(s, "\n%Ufib_table: %u", format_white_space, indent, a->fib_table);
    s = format(s, "\n%Unum_sid_lists: %u", format_white_space, indent, a->num_sid_lists);
    for (i = 0; i < a->num_sid_lists; i++) {
        s = format(s, "\n%Usid_lists: %U",
                   format_white_space, indent, format_vl_api_srv6_sid_list_t, &a->sid_lists[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_policies_with_sl_index_dump_t_print (vl_api_sr_policies_with_sl_index_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_policies_with_sl_index_dump_t: */
    s = format(s, "vl_api_sr_policies_with_sl_index_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_policies_with_sl_index_details_t_print (vl_api_sr_policies_with_sl_index_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_policies_with_sl_index_details_t: */
    s = format(s, "vl_api_sr_policies_with_sl_index_details_t:");
    s = format(s, "\n%Ubsid: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->bsid, indent);
    s = format(s, "\n%Uis_spray: %u", format_white_space, indent, a->is_spray);
    s = format(s, "\n%Uis_encap: %u", format_white_space, indent, a->is_encap);
    s = format(s, "\n%Ufib_table: %u", format_white_space, indent, a->fib_table);
    s = format(s, "\n%Unum_sid_lists: %u", format_white_space, indent, a->num_sid_lists);
    for (i = 0; i < a->num_sid_lists; i++) {
        s = format(s, "\n%Usid_lists: %U",
                   format_white_space, indent, format_vl_api_srv6_sid_list_with_sl_index_t, &a->sid_lists[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_steering_pol_dump_t_print (vl_api_sr_steering_pol_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_steering_pol_dump_t: */
    s = format(s, "vl_api_sr_steering_pol_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_sr_steering_pol_details_t_print (vl_api_sr_steering_pol_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_sr_steering_pol_details_t: */
    s = format(s, "vl_api_sr_steering_pol_details_t:");
    s = format(s, "\n%Utraffic_type: %U", format_white_space, indent, format_vl_api_sr_steer_t, &a->traffic_type, indent);
    s = format(s, "\n%Ufib_table: %u", format_white_space, indent, a->fib_table);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->prefix, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ubsid: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->bsid, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_sr_endianfun
#define included_sr_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_srv6_sid_list_t_endian (vl_api_srv6_sid_list_t *a)
{
    int i __attribute__((unused));
    /* a->num_sids = a->num_sids (no-op) */
    a->weight = clib_net_to_host_u32(a->weight);
    for (i = 0; i < 16; i++) {
        vl_api_ip6_address_t_endian(&a->sids[i]);
    }
}

static inline void vl_api_srv6_sid_list_with_sl_index_t_endian (vl_api_srv6_sid_list_with_sl_index_t *a)
{
    int i __attribute__((unused));
    /* a->num_sids = a->num_sids (no-op) */
    a->weight = clib_net_to_host_u32(a->weight);
    a->sl_index = clib_net_to_host_u32(a->sl_index);
    for (i = 0; i < 16; i++) {
        vl_api_ip6_address_t_endian(&a->sids[i]);
    }
}

static inline void vl_api_sr_localsid_add_del_t_endian (vl_api_sr_localsid_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_del = a->is_del (no-op) */
    vl_api_ip6_address_t_endian(&a->localsid);
    /* a->end_psp = a->end_psp (no-op) */
    vl_api_sr_behavior_t_endian(&a->behavior);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->vlan_index = clib_net_to_host_u32(a->vlan_index);
    a->fib_table = clib_net_to_host_u32(a->fib_table);
    vl_api_address_t_endian(&a->nh_addr);
}

static inline void vl_api_sr_localsid_add_del_reply_t_endian (vl_api_sr_localsid_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sr_policy_add_t_endian (vl_api_sr_policy_add_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_address_t_endian(&a->bsid_addr);
    a->weight = clib_net_to_host_u32(a->weight);
    /* a->is_encap = a->is_encap (no-op) */
    /* a->is_spray = a->is_spray (no-op) */
    a->fib_table = clib_net_to_host_u32(a->fib_table);
    vl_api_srv6_sid_list_t_endian(&a->sids);
}

static inline void vl_api_sr_policy_add_reply_t_endian (vl_api_sr_policy_add_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sr_policy_mod_t_endian (vl_api_sr_policy_mod_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_address_t_endian(&a->bsid_addr);
    a->sr_policy_index = clib_net_to_host_u32(a->sr_policy_index);
    a->fib_table = clib_net_to_host_u32(a->fib_table);
    vl_api_sr_policy_op_t_endian(&a->operation);
    a->sl_index = clib_net_to_host_u32(a->sl_index);
    a->weight = clib_net_to_host_u32(a->weight);
    vl_api_srv6_sid_list_t_endian(&a->sids);
}

static inline void vl_api_sr_policy_mod_reply_t_endian (vl_api_sr_policy_mod_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sr_policy_del_t_endian (vl_api_sr_policy_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_address_t_endian(&a->bsid_addr);
    a->sr_policy_index = clib_net_to_host_u32(a->sr_policy_index);
}

static inline void vl_api_sr_policy_del_reply_t_endian (vl_api_sr_policy_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sr_set_encap_source_t_endian (vl_api_sr_set_encap_source_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_address_t_endian(&a->encaps_source);
}

static inline void vl_api_sr_set_encap_source_reply_t_endian (vl_api_sr_set_encap_source_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sr_set_encap_hop_limit_t_endian (vl_api_sr_set_encap_hop_limit_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->hop_limit = a->hop_limit (no-op) */
}

static inline void vl_api_sr_set_encap_hop_limit_reply_t_endian (vl_api_sr_set_encap_hop_limit_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sr_steering_add_del_t_endian (vl_api_sr_steering_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_del = a->is_del (no-op) */
    vl_api_ip6_address_t_endian(&a->bsid_addr);
    a->sr_policy_index = clib_net_to_host_u32(a->sr_policy_index);
    a->table_id = clib_net_to_host_u32(a->table_id);
    vl_api_prefix_t_endian(&a->prefix);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_sr_steer_t_endian(&a->traffic_type);
}

static inline void vl_api_sr_steering_add_del_reply_t_endian (vl_api_sr_steering_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_sr_localsids_dump_t_endian (vl_api_sr_localsids_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_sr_localsids_details_t_endian (vl_api_sr_localsids_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_address_t_endian(&a->addr);
    /* a->end_psp = a->end_psp (no-op) */
    vl_api_sr_behavior_t_endian(&a->behavior);
    a->fib_table = clib_net_to_host_u32(a->fib_table);
    a->vlan_index = clib_net_to_host_u32(a->vlan_index);
    vl_api_address_t_endian(&a->xconnect_nh_addr);
    a->xconnect_iface_or_vrf_table = clib_net_to_host_u32(a->xconnect_iface_or_vrf_table);
}

static inline void vl_api_sr_policies_dump_t_endian (vl_api_sr_policies_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_sr_policies_details_t_endian (vl_api_sr_policies_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_address_t_endian(&a->bsid);
    /* a->is_spray = a->is_spray (no-op) */
    /* a->is_encap = a->is_encap (no-op) */
    a->fib_table = clib_net_to_host_u32(a->fib_table);
    /* a->num_sid_lists = a->num_sid_lists (no-op) */
    for (i = 0; i < a->num_sid_lists; i++) {
        vl_api_srv6_sid_list_t_endian(&a->sid_lists[i]);
    }
}

static inline void vl_api_sr_policies_with_sl_index_dump_t_endian (vl_api_sr_policies_with_sl_index_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_sr_policies_with_sl_index_details_t_endian (vl_api_sr_policies_with_sl_index_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip6_address_t_endian(&a->bsid);
    /* a->is_spray = a->is_spray (no-op) */
    /* a->is_encap = a->is_encap (no-op) */
    a->fib_table = clib_net_to_host_u32(a->fib_table);
    /* a->num_sid_lists = a->num_sid_lists (no-op) */
    for (i = 0; i < a->num_sid_lists; i++) {
        vl_api_srv6_sid_list_with_sl_index_t_endian(&a->sid_lists[i]);
    }
}

static inline void vl_api_sr_steering_pol_dump_t_endian (vl_api_sr_steering_pol_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_sr_steering_pol_details_t_endian (vl_api_sr_steering_pol_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_sr_steer_t_endian(&a->traffic_type);
    a->fib_table = clib_net_to_host_u32(a->fib_table);
    vl_api_prefix_t_endian(&a->prefix);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_ip6_address_t_endian(&a->bsid);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(sr.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(sr.api, 0xae9d4c89)

#endif

