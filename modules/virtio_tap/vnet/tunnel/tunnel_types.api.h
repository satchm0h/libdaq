/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: tunnel_types.api
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
#warning no content included from tunnel_types.api
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
#define foreach_vl_msg_name_crc_tunnel_types 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "tunnel_types.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_tunnel_types_printfun_types
#define included_tunnel_types_printfun_types

static inline u8 *format_vl_api_tunnel_encap_decap_flags_t (u8 *s, va_list * args)
{
    vl_api_tunnel_encap_decap_flags_t *a = va_arg (*args, vl_api_tunnel_encap_decap_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "TUNNEL_API_ENCAP_DECAP_FLAG_NONE");
    case 1:
        return format(s, "TUNNEL_API_ENCAP_DECAP_FLAG_ENCAP_COPY_DF");
    case 2:
        return format(s, "TUNNEL_API_ENCAP_DECAP_FLAG_ENCAP_SET_DF");
    case 4:
        return format(s, "TUNNEL_API_ENCAP_DECAP_FLAG_ENCAP_COPY_DSCP");
    case 8:
        return format(s, "TUNNEL_API_ENCAP_DECAP_FLAG_ENCAP_COPY_ECN");
    case 16:
        return format(s, "TUNNEL_API_ENCAP_DECAP_FLAG_DECAP_COPY_ECN");
    }
    return s;
}

static inline u8 *format_vl_api_tunnel_mode_t (u8 *s, va_list * args)
{
    vl_api_tunnel_mode_t *a = va_arg (*args, vl_api_tunnel_mode_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "TUNNEL_API_MODE_P2P");
    case 1:
        return format(s, "TUNNEL_API_MODE_MP");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_tunnel_types_printfun
#define included_tunnel_types_printfun

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
#ifndef included_tunnel_types_endianfun
#define included_tunnel_types_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_tunnel_encap_decap_flags_t_endian (vl_api_tunnel_encap_decap_flags_t *a)
{
    int i __attribute__((unused));
    /* a->tunnel_encap_decap_flags = a->tunnel_encap_decap_flags (no-op) */
}

static inline void vl_api_tunnel_mode_t_endian (vl_api_tunnel_mode_t *a)
{
    int i __attribute__((unused));
    /* a->tunnel_mode = a->tunnel_mode (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple


#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(tunnel_types.api, 0xd5fc612b)

#endif

