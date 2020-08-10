/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: ip_types.api
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
#warning no content included from ip_types.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
#endif
/****** Message names ******/

#ifdef vl_msg_name
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ip_types 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "ip_types.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ip_types_printfun_types
#define included_ip_types_printfun_types

/***** manual: vl_api_ip4_address_t_print  *****/

/***** manual: vl_api_ip6_address_t_print  *****/

static inline u8 *format_vl_api_address_family_t (u8 *s, va_list * args)
{
    vl_api_address_family_t *a = va_arg (*args, vl_api_address_family_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "ADDRESS_IP4");
    case 1:
        return format(s, "ADDRESS_IP6");
    }
    return s;
}

static inline u8 *format_vl_api_ip_ecn_t (u8 *s, va_list * args)
{
    vl_api_ip_ecn_t *a = va_arg (*args, vl_api_ip_ecn_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "IP_API_ECN_NONE");
    case 1:
        return format(s, "IP_API_ECN_ECT0");
    case 2:
        return format(s, "IP_API_ECN_ECT1");
    case 3:
        return format(s, "IP_API_ECN_CE");
    }
    return s;
}

static inline u8 *format_vl_api_ip_dscp_t (u8 *s, va_list * args)
{
    vl_api_ip_dscp_t *a = va_arg (*args, vl_api_ip_dscp_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "IP_API_DSCP_CS0");
    case 8:
        return format(s, "IP_API_DSCP_CS1");
    case 10:
        return format(s, "IP_API_DSCP_AF11");
    case 12:
        return format(s, "IP_API_DSCP_AF12");
    case 14:
        return format(s, "IP_API_DSCP_AF13");
    case 16:
        return format(s, "IP_API_DSCP_CS2");
    case 18:
        return format(s, "IP_API_DSCP_AF21");
    case 20:
        return format(s, "IP_API_DSCP_AF22");
    case 22:
        return format(s, "IP_API_DSCP_AF23");
    case 24:
        return format(s, "IP_API_DSCP_CS3");
    case 26:
        return format(s, "IP_API_DSCP_AF31");
    case 28:
        return format(s, "IP_API_DSCP_AF32");
    case 30:
        return format(s, "IP_API_DSCP_AF33");
    case 32:
        return format(s, "IP_API_DSCP_CS4");
    case 34:
        return format(s, "IP_API_DSCP_AF41");
    case 36:
        return format(s, "IP_API_DSCP_AF42");
    case 38:
        return format(s, "IP_API_DSCP_AF43");
    case 40:
        return format(s, "IP_API_DSCP_CS5");
    case 46:
        return format(s, "IP_API_DSCP_EF");
    case 48:
        return format(s, "IP_API_DSCP_CS6");
    case 50:
        return format(s, "IP_API_DSCP_CS7");
    }
    return s;
}

static inline u8 *format_vl_api_ip_proto_t (u8 *s, va_list * args)
{
    vl_api_ip_proto_t *a = va_arg (*args, vl_api_ip_proto_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "IP_API_PROTO_HOPOPT");
    case 1:
        return format(s, "IP_API_PROTO_ICMP");
    case 2:
        return format(s, "IP_API_PROTO_IGMP");
    case 6:
        return format(s, "IP_API_PROTO_TCP");
    case 17:
        return format(s, "IP_API_PROTO_UDP");
    case 47:
        return format(s, "IP_API_PROTO_GRE");
    case 50:
        return format(s, "IP_API_PROTO_ESP");
    case 51:
        return format(s, "IP_API_PROTO_AH");
    case 58:
        return format(s, "IP_API_PROTO_ICMP6");
    case 88:
        return format(s, "IP_API_PROTO_EIGRP");
    case 89:
        return format(s, "IP_API_PROTO_OSPF");
    case 132:
        return format(s, "IP_API_PROTO_SCTP");
    case 255:
        return format(s, "IP_API_PROTO_RESERVED");
    }
    return s;
}

static inline u8 *format_vl_api_address_union_t (u8 *s, va_list * args)
{
    vl_api_address_union_t *a = va_arg (*args, vl_api_address_union_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uip4: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->ip4, indent);
    s = format(s, "\n%Uip6: %U", format_white_space, indent, format_vl_api_ip6_address_t, &a->ip6, indent);
    return s;
}

/***** manual: vl_api_address_t_print  *****/

/***** manual: vl_api_prefix_t_print  *****/

static inline u8 *format_vl_api_mprefix_t (u8 *s, va_list * args)
{
    vl_api_mprefix_t *a = va_arg (*args, vl_api_mprefix_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uaf: %U", format_white_space, indent, format_vl_api_address_family_t, &a->af, indent);
    s = format(s, "\n%Ugrp_address_length: %u", format_white_space, indent, a->grp_address_length);
    s = format(s, "\n%Ugrp_address: %U", format_white_space, indent, format_vl_api_address_union_t, &a->grp_address, indent);
    s = format(s, "\n%Usrc_address: %U", format_white_space, indent, format_vl_api_address_union_t, &a->src_address, indent);
    return s;
}

/***** manual: vl_api_ip6_prefix_t_print  *****/

/***** manual: vl_api_ip4_prefix_t_print  *****/

/***** manual: vl_api_address_with_prefix_t_print  *****/

/***** manual: vl_api_ip4_address_with_prefix_t_print  *****/

/***** manual: vl_api_ip6_address_with_prefix_t_print  *****/

static inline u8 *format_vl_api_prefix_matcher_t (u8 *s, va_list * args)
{
    vl_api_prefix_matcher_t *a = va_arg (*args, vl_api_prefix_matcher_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ule: %u", format_white_space, indent, a->le);
    s = format(s, "\n%Uge: %u", format_white_space, indent, a->ge);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ip_types_printfun
#define included_ip_types_printfun

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
#ifndef included_ip_types_endianfun
#define included_ip_types_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_ip4_address_t_endian (vl_api_ip4_address_t *a)
{
    int i __attribute__((unused));
    /* a->ip4_address = a->ip4_address (no-op) */
}

static inline void vl_api_ip6_address_t_endian (vl_api_ip6_address_t *a)
{
    int i __attribute__((unused));
    /* a->ip6_address = a->ip6_address (no-op) */
}

static inline void vl_api_address_family_t_endian (vl_api_address_family_t *a)
{
    int i __attribute__((unused));
    /* a->address_family = a->address_family (no-op) */
}

static inline void vl_api_ip_ecn_t_endian (vl_api_ip_ecn_t *a)
{
    int i __attribute__((unused));
    /* a->ip_ecn = a->ip_ecn (no-op) */
}

static inline void vl_api_ip_dscp_t_endian (vl_api_ip_dscp_t *a)
{
    int i __attribute__((unused));
    /* a->ip_dscp = a->ip_dscp (no-op) */
}

static inline void vl_api_ip_proto_t_endian (vl_api_ip_proto_t *a)
{
    int i __attribute__((unused));
    /* a->ip_proto = a->ip_proto (no-op) */
}

static inline void vl_api_address_union_t_endian (vl_api_address_union_t *a)
{
    int i __attribute__((unused));
    vl_api_ip4_address_t_endian(&a->ip4);
    vl_api_ip6_address_t_endian(&a->ip6);
}

static inline void vl_api_address_t_endian (vl_api_address_t *a)
{
    int i __attribute__((unused));
    vl_api_address_family_t_endian(&a->af);
    vl_api_address_union_t_endian(&a->un);
}

static inline void vl_api_prefix_t_endian (vl_api_prefix_t *a)
{
    int i __attribute__((unused));
    vl_api_address_t_endian(&a->address);
    /* a->len = a->len (no-op) */
}

static inline void vl_api_mprefix_t_endian (vl_api_mprefix_t *a)
{
    int i __attribute__((unused));
    vl_api_address_family_t_endian(&a->af);
    a->grp_address_length = clib_net_to_host_u16(a->grp_address_length);
    vl_api_address_union_t_endian(&a->grp_address);
    vl_api_address_union_t_endian(&a->src_address);
}

static inline void vl_api_ip6_prefix_t_endian (vl_api_ip6_prefix_t *a)
{
    int i __attribute__((unused));
    vl_api_ip6_address_t_endian(&a->address);
    /* a->len = a->len (no-op) */
}

static inline void vl_api_ip4_prefix_t_endian (vl_api_ip4_prefix_t *a)
{
    int i __attribute__((unused));
    vl_api_ip4_address_t_endian(&a->address);
    /* a->len = a->len (no-op) */
}

static inline void vl_api_address_with_prefix_t_endian (vl_api_address_with_prefix_t *a)
{
    int i __attribute__((unused));
    /* Not Implemented yet address_with_prefix */}

static inline void vl_api_ip4_address_with_prefix_t_endian (vl_api_ip4_address_with_prefix_t *a)
{
    int i __attribute__((unused));
    /* Not Implemented yet ip4_address_with_prefix */}

static inline void vl_api_ip6_address_with_prefix_t_endian (vl_api_ip6_address_with_prefix_t *a)
{
    int i __attribute__((unused));
    /* Not Implemented yet ip6_address_with_prefix */}

static inline void vl_api_prefix_matcher_t_endian (vl_api_prefix_matcher_t *a)
{
    int i __attribute__((unused));
    /* a->le = a->le (no-op) */
    /* a->ge = a->ge (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(ip_types.api, 3, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ip_types.api, 0x9cb1c2e2)

#endif

