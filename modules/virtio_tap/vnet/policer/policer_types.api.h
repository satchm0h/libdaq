/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: policer_types.api
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
#warning no content included from policer_types.api
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
#define foreach_vl_msg_name_crc_policer_types 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "policer_types.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_policer_types_printfun_types
#define included_policer_types_printfun_types

static inline u8 *format_vl_api_sse2_qos_rate_type_t (u8 *s, va_list * args)
{
    vl_api_sse2_qos_rate_type_t *a = va_arg (*args, vl_api_sse2_qos_rate_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "SSE2_QOS_RATE_API_KBPS");
    case 1:
        return format(s, "SSE2_QOS_RATE_API_PPS");
    case 2:
        return format(s, "SSE2_QOS_RATE_API_INVALID");
    }
    return s;
}

static inline u8 *format_vl_api_sse2_qos_round_type_t (u8 *s, va_list * args)
{
    vl_api_sse2_qos_round_type_t *a = va_arg (*args, vl_api_sse2_qos_round_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "SSE2_QOS_ROUND_API_TO_CLOSEST");
    case 1:
        return format(s, "SSE2_QOS_ROUND_API_TO_UP");
    case 2:
        return format(s, "SSE2_QOS_ROUND_API_TO_DOWN");
    case 3:
        return format(s, "SSE2_QOS_ROUND_API_INVALID");
    }
    return s;
}

static inline u8 *format_vl_api_sse2_qos_policer_type_t (u8 *s, va_list * args)
{
    vl_api_sse2_qos_policer_type_t *a = va_arg (*args, vl_api_sse2_qos_policer_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "SSE2_QOS_POLICER_TYPE_API_1R2C");
    case 1:
        return format(s, "SSE2_QOS_POLICER_TYPE_API_1R3C_RFC_2697");
    case 2:
        return format(s, "SSE2_QOS_POLICER_TYPE_API_2R3C_RFC_2698");
    case 3:
        return format(s, "SSE2_QOS_POLICER_TYPE_API_2R3C_RFC_4115");
    case 4:
        return format(s, "SSE2_QOS_POLICER_TYPE_API_2R3C_RFC_MEF5CF1");
    case 5:
        return format(s, "SSE2_QOS_POLICER_TYPE_API_MAX");
    }
    return s;
}

static inline u8 *format_vl_api_sse2_qos_action_type_t (u8 *s, va_list * args)
{
    vl_api_sse2_qos_action_type_t *a = va_arg (*args, vl_api_sse2_qos_action_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "SSE2_QOS_ACTION_API_DROP");
    case 1:
        return format(s, "SSE2_QOS_ACTION_API_TRANSMIT");
    case 2:
        return format(s, "SSE2_QOS_ACTION_API_MARK_AND_TRANSMIT");
    }
    return s;
}

static inline u8 *format_vl_api_sse2_qos_action_t (u8 *s, va_list * args)
{
    vl_api_sse2_qos_action_t *a = va_arg (*args, vl_api_sse2_qos_action_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_sse2_qos_action_type_t, &a->type, indent);
    s = format(s, "\n%Udscp: %u", format_white_space, indent, a->dscp);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_policer_types_printfun
#define included_policer_types_printfun

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
#ifndef included_policer_types_endianfun
#define included_policer_types_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_sse2_qos_rate_type_t_endian (vl_api_sse2_qos_rate_type_t *a)
{
    int i __attribute__((unused));
    /* a->sse2_qos_rate_type = a->sse2_qos_rate_type (no-op) */
}

static inline void vl_api_sse2_qos_round_type_t_endian (vl_api_sse2_qos_round_type_t *a)
{
    int i __attribute__((unused));
    /* a->sse2_qos_round_type = a->sse2_qos_round_type (no-op) */
}

static inline void vl_api_sse2_qos_policer_type_t_endian (vl_api_sse2_qos_policer_type_t *a)
{
    int i __attribute__((unused));
    /* a->sse2_qos_policer_type = a->sse2_qos_policer_type (no-op) */
}

static inline void vl_api_sse2_qos_action_type_t_endian (vl_api_sse2_qos_action_type_t *a)
{
    int i __attribute__((unused));
    /* a->sse2_qos_action_type = a->sse2_qos_action_type (no-op) */
}

static inline void vl_api_sse2_qos_action_t_endian (vl_api_sse2_qos_action_t *a)
{
    int i __attribute__((unused));
    vl_api_sse2_qos_action_type_t_endian(&a->type);
    /* a->dscp = a->dscp (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple


#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(policer_types.api, 0x5fe29f75)

#endif

