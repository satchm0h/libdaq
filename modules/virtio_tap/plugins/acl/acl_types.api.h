/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: acl_types.api
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
#warning no content included from acl_types.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
#endif
/****** Message names ******/

#ifdef vl_msg_name
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_acl_types 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "acl_types.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_acl_types_printfun_types
#define included_acl_types_printfun_types

static inline u8 *format_vl_api_acl_action_t (u8 *s, va_list * args)
{
    vl_api_acl_action_t *a = va_arg (*args, vl_api_acl_action_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "ACL_ACTION_API_DENY");
    case 1:
        return format(s, "ACL_ACTION_API_PERMIT");
    case 2:
        return format(s, "ACL_ACTION_API_PERMIT_REFLECT");
    }
    return s;
}

static inline u8 *format_vl_api_acl_rule_t (u8 *s, va_list * args)
{
    vl_api_acl_rule_t *a = va_arg (*args, vl_api_acl_rule_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uis_permit: %U", format_white_space, indent, format_vl_api_acl_action_t, &a->is_permit, indent);
    s = format(s, "\n%Usrc_prefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->src_prefix, indent);
    s = format(s, "\n%Udst_prefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->dst_prefix, indent);
    s = format(s, "\n%Uproto: %U", format_white_space, indent, format_vl_api_ip_proto_t, &a->proto, indent);
    s = format(s, "\n%Usrcport_or_icmptype_first: %u", format_white_space, indent, a->srcport_or_icmptype_first);
    s = format(s, "\n%Usrcport_or_icmptype_last: %u", format_white_space, indent, a->srcport_or_icmptype_last);
    s = format(s, "\n%Udstport_or_icmpcode_first: %u", format_white_space, indent, a->dstport_or_icmpcode_first);
    s = format(s, "\n%Udstport_or_icmpcode_last: %u", format_white_space, indent, a->dstport_or_icmpcode_last);
    s = format(s, "\n%Utcp_flags_mask: %u", format_white_space, indent, a->tcp_flags_mask);
    s = format(s, "\n%Utcp_flags_value: %u", format_white_space, indent, a->tcp_flags_value);
    return s;
}

static inline u8 *format_vl_api_macip_acl_rule_t (u8 *s, va_list * args)
{
    vl_api_macip_acl_rule_t *a = va_arg (*args, vl_api_macip_acl_rule_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uis_permit: %U", format_white_space, indent, format_vl_api_acl_action_t, &a->is_permit, indent);
    s = format(s, "\n%Usrc_mac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->src_mac, indent);
    s = format(s, "\n%Usrc_mac_mask: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->src_mac_mask, indent);
    s = format(s, "\n%Usrc_prefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->src_prefix, indent);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_acl_types_printfun
#define included_acl_types_printfun

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
#ifndef included_acl_types_endianfun
#define included_acl_types_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_acl_action_t_endian (vl_api_acl_action_t *a)
{
    int i __attribute__((unused));
    /* a->acl_action = a->acl_action (no-op) */
}

static inline void vl_api_acl_rule_t_endian (vl_api_acl_rule_t *a)
{
    int i __attribute__((unused));
    vl_api_acl_action_t_endian(&a->is_permit);
    vl_api_prefix_t_endian(&a->src_prefix);
    vl_api_prefix_t_endian(&a->dst_prefix);
    vl_api_ip_proto_t_endian(&a->proto);
    a->srcport_or_icmptype_first = clib_net_to_host_u16(a->srcport_or_icmptype_first);
    a->srcport_or_icmptype_last = clib_net_to_host_u16(a->srcport_or_icmptype_last);
    a->dstport_or_icmpcode_first = clib_net_to_host_u16(a->dstport_or_icmpcode_first);
    a->dstport_or_icmpcode_last = clib_net_to_host_u16(a->dstport_or_icmpcode_last);
    /* a->tcp_flags_mask = a->tcp_flags_mask (no-op) */
    /* a->tcp_flags_value = a->tcp_flags_value (no-op) */
}

static inline void vl_api_macip_acl_rule_t_endian (vl_api_macip_acl_rule_t *a)
{
    int i __attribute__((unused));
    vl_api_acl_action_t_endian(&a->is_permit);
    vl_api_mac_address_t_endian(&a->src_mac);
    vl_api_mac_address_t_endian(&a->src_mac_mask);
    vl_api_prefix_t_endian(&a->src_prefix);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple


#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(acl_types.api, 0xbd498317)

#endif

