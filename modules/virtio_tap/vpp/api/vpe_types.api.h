/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: vpe_types.api
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
#warning no content included from vpe_types.api
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
#define foreach_vl_msg_name_crc_vpe_types 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "vpe_types.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_vpe_types_printfun_types
#define included_vpe_types_printfun_types

static inline u8 *format_vl_api_version_t (u8 *s, va_list * args)
{
    vl_api_version_t *a = va_arg (*args, vl_api_version_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Umajor: %u", format_white_space, indent, a->major);
    s = format(s, "\n%Uminor: %u", format_white_space, indent, a->minor);
    s = format(s, "\n%Upatch: %u", format_white_space, indent, a->patch);
    s = format(s, "\n%Upre_release: %U", format_white_space, indent, format_hex_bytes, a, 17);
    s = format(s, "\n%Ubuild_metadata: %U", format_white_space, indent, format_hex_bytes, a, 17);
    return s;
}

static inline u8 *format_vl_api_timestamp_t (u8 *s, va_list * args)
{
    vl_api_timestamp_t *a = va_arg (*args, vl_api_timestamp_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    return format(s, "%.2f", *a);
}

static inline u8 *format_vl_api_timedelta_t (u8 *s, va_list * args)
{
    vl_api_timedelta_t *a = va_arg (*args, vl_api_timedelta_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    return format(s, "%.2f", *a);
}

static inline u8 *format_vl_api_log_level_t (u8 *s, va_list * args)
{
    vl_api_log_level_t *a = va_arg (*args, vl_api_log_level_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "VPE_API_LOG_LEVEL_EMERG");
    case 1:
        return format(s, "VPE_API_LOG_LEVEL_ALERT");
    case 2:
        return format(s, "VPE_API_LOG_LEVEL_CRIT");
    case 3:
        return format(s, "VPE_API_LOG_LEVEL_ERR");
    case 4:
        return format(s, "VPE_API_LOG_LEVEL_WARNING");
    case 5:
        return format(s, "VPE_API_LOG_LEVEL_NOTICE");
    case 6:
        return format(s, "VPE_API_LOG_LEVEL_INFO");
    case 7:
        return format(s, "VPE_API_LOG_LEVEL_DEBUG");
    case 8:
        return format(s, "VPE_API_LOG_LEVEL_DISABLED");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_vpe_types_printfun
#define included_vpe_types_printfun

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
#ifndef included_vpe_types_endianfun
#define included_vpe_types_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_version_t_endian (vl_api_version_t *a)
{
    int i __attribute__((unused));
    a->major = clib_net_to_host_u32(a->major);
    a->minor = clib_net_to_host_u32(a->minor);
    a->patch = clib_net_to_host_u32(a->patch);
    /* a->pre_release = a->pre_release (no-op) */
    /* a->build_metadata = a->build_metadata (no-op) */
}

static inline void vl_api_timestamp_t_endian (vl_api_timestamp_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_f64(*a);
}

static inline void vl_api_timedelta_t_endian (vl_api_timedelta_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_f64(*a);
}

static inline void vl_api_log_level_t_endian (vl_api_log_level_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple


#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(vpe_types.api, 0x3369988d)

#endif

