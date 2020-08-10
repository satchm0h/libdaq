/*
 * VLIB API definitions 2020-07-24 16:29:08
 * Input file: nat_types.api
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
#warning no content included from nat_types.api
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
#define foreach_vl_msg_name_crc_nat_types 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "nat_types.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_nat_types_printfun_types
#define included_nat_types_printfun_types

static inline u8 *format_vl_api_nat_config_flags_t (u8 *s, va_list * args)
{
    vl_api_nat_config_flags_t *a = va_arg (*args, vl_api_nat_config_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "NAT_IS_NONE");
    case 1:
        return format(s, "NAT_IS_TWICE_NAT");
    case 2:
        return format(s, "NAT_IS_SELF_TWICE_NAT");
    case 4:
        return format(s, "NAT_IS_OUT2IN_ONLY");
    case 8:
        return format(s, "NAT_IS_ADDR_ONLY");
    case 16:
        return format(s, "NAT_IS_OUTSIDE");
    case 32:
        return format(s, "NAT_IS_INSIDE");
    case 64:
        return format(s, "NAT_IS_STATIC");
    case 128:
        return format(s, "NAT_IS_EXT_HOST_VALID");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_nat_types_printfun
#define included_nat_types_printfun

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
#ifndef included_nat_types_endianfun
#define included_nat_types_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_nat_config_flags_t_endian (vl_api_nat_config_flags_t *a)
{
    int i __attribute__((unused));
    /* a->nat_config_flags = a->nat_config_flags (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(nat_types.api, 0, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(nat_types.api, 0xbffac154)

#endif

