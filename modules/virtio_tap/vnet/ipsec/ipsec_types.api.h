/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: ipsec_types.api
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
#warning no content included from ipsec_types.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
#endif
/****** Message names ******/

#ifdef vl_msg_name
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ipsec_types 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "ipsec_types.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ipsec_types_printfun_types
#define included_ipsec_types_printfun_types

static inline u8 *format_vl_api_ipsec_crypto_alg_t (u8 *s, va_list * args)
{
    vl_api_ipsec_crypto_alg_t *a = va_arg (*args, vl_api_ipsec_crypto_alg_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "IPSEC_API_CRYPTO_ALG_NONE");
    case 1:
        return format(s, "IPSEC_API_CRYPTO_ALG_AES_CBC_128");
    case 2:
        return format(s, "IPSEC_API_CRYPTO_ALG_AES_CBC_192");
    case 3:
        return format(s, "IPSEC_API_CRYPTO_ALG_AES_CBC_256");
    case 4:
        return format(s, "IPSEC_API_CRYPTO_ALG_AES_CTR_128");
    case 5:
        return format(s, "IPSEC_API_CRYPTO_ALG_AES_CTR_192");
    case 6:
        return format(s, "IPSEC_API_CRYPTO_ALG_AES_CTR_256");
    case 7:
        return format(s, "IPSEC_API_CRYPTO_ALG_AES_GCM_128");
    case 8:
        return format(s, "IPSEC_API_CRYPTO_ALG_AES_GCM_192");
    case 9:
        return format(s, "IPSEC_API_CRYPTO_ALG_AES_GCM_256");
    case 10:
        return format(s, "IPSEC_API_CRYPTO_ALG_DES_CBC");
    case 11:
        return format(s, "IPSEC_API_CRYPTO_ALG_3DES_CBC");
    }
    return s;
}

static inline u8 *format_vl_api_ipsec_integ_alg_t (u8 *s, va_list * args)
{
    vl_api_ipsec_integ_alg_t *a = va_arg (*args, vl_api_ipsec_integ_alg_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "IPSEC_API_INTEG_ALG_NONE");
    case 1:
        return format(s, "IPSEC_API_INTEG_ALG_MD5_96");
    case 2:
        return format(s, "IPSEC_API_INTEG_ALG_SHA1_96");
    case 3:
        return format(s, "IPSEC_API_INTEG_ALG_SHA_256_96");
    case 4:
        return format(s, "IPSEC_API_INTEG_ALG_SHA_256_128");
    case 5:
        return format(s, "IPSEC_API_INTEG_ALG_SHA_384_192");
    case 6:
        return format(s, "IPSEC_API_INTEG_ALG_SHA_512_256");
    }
    return s;
}

static inline u8 *format_vl_api_ipsec_sad_flags_t (u8 *s, va_list * args)
{
    vl_api_ipsec_sad_flags_t *a = va_arg (*args, vl_api_ipsec_sad_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "IPSEC_API_SAD_FLAG_NONE");
    case 1:
        return format(s, "IPSEC_API_SAD_FLAG_USE_ESN");
    case 2:
        return format(s, "IPSEC_API_SAD_FLAG_USE_ANTI_REPLAY");
    case 4:
        return format(s, "IPSEC_API_SAD_FLAG_IS_TUNNEL");
    case 8:
        return format(s, "IPSEC_API_SAD_FLAG_IS_TUNNEL_V6");
    case 16:
        return format(s, "IPSEC_API_SAD_FLAG_UDP_ENCAP");
    case 64:
        return format(s, "IPSEC_API_SAD_FLAG_IS_INBOUND");
    }
    return s;
}

static inline u8 *format_vl_api_ipsec_proto_t (u8 *s, va_list * args)
{
    vl_api_ipsec_proto_t *a = va_arg (*args, vl_api_ipsec_proto_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 50:
        return format(s, "IPSEC_API_PROTO_ESP");
    case 51:
        return format(s, "IPSEC_API_PROTO_AH");
    }
    return s;
}

static inline u8 *format_vl_api_key_t (u8 *s, va_list * args)
{
    vl_api_key_t *a = va_arg (*args, vl_api_key_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ulength: %u", format_white_space, indent, a->length);
    s = format(s, "\n%Udata: %U", format_white_space, indent, format_hex_bytes, a, 128);
    return s;
}

static inline u8 *format_vl_api_ipsec_sad_entry_t (u8 *s, va_list * args)
{
    vl_api_ipsec_sad_entry_t *a = va_arg (*args, vl_api_ipsec_sad_entry_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usad_id: %u", format_white_space, indent, a->sad_id);
    s = format(s, "\n%Uspi: %u", format_white_space, indent, a->spi);
    s = format(s, "\n%Uprotocol: %U", format_white_space, indent, format_vl_api_ipsec_proto_t, &a->protocol, indent);
    s = format(s, "\n%Ucrypto_algorithm: %U", format_white_space, indent, format_vl_api_ipsec_crypto_alg_t, &a->crypto_algorithm, indent);
    s = format(s, "\n%Ucrypto_key: %U", format_white_space, indent, format_vl_api_key_t, &a->crypto_key, indent);
    s = format(s, "\n%Uintegrity_algorithm: %U", format_white_space, indent, format_vl_api_ipsec_integ_alg_t, &a->integrity_algorithm, indent);
    s = format(s, "\n%Uintegrity_key: %U", format_white_space, indent, format_vl_api_key_t, &a->integrity_key, indent);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_ipsec_sad_flags_t, &a->flags, indent);
    s = format(s, "\n%Utunnel_src: %U", format_white_space, indent, format_vl_api_address_t, &a->tunnel_src, indent);
    s = format(s, "\n%Utunnel_dst: %U", format_white_space, indent, format_vl_api_address_t, &a->tunnel_dst, indent);
    s = format(s, "\n%Utx_table_id: %u", format_white_space, indent, a->tx_table_id);
    s = format(s, "\n%Usalt: %u", format_white_space, indent, a->salt);
    s = format(s, "\n%Uudp_src_port: %u", format_white_space, indent, a->udp_src_port);
    s = format(s, "\n%Uudp_dst_port: %u", format_white_space, indent, a->udp_dst_port);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ipsec_types_printfun
#define included_ipsec_types_printfun

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
#ifndef included_ipsec_types_endianfun
#define included_ipsec_types_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_ipsec_crypto_alg_t_endian (vl_api_ipsec_crypto_alg_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_ipsec_integ_alg_t_endian (vl_api_ipsec_integ_alg_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_ipsec_sad_flags_t_endian (vl_api_ipsec_sad_flags_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_ipsec_proto_t_endian (vl_api_ipsec_proto_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_key_t_endian (vl_api_key_t *a)
{
    int i __attribute__((unused));
    /* a->length = a->length (no-op) */
    /* a->data = a->data (no-op) */
}

static inline void vl_api_ipsec_sad_entry_t_endian (vl_api_ipsec_sad_entry_t *a)
{
    int i __attribute__((unused));
    a->sad_id = clib_net_to_host_u32(a->sad_id);
    a->spi = clib_net_to_host_u32(a->spi);
    vl_api_ipsec_proto_t_endian(&a->protocol);
    vl_api_ipsec_crypto_alg_t_endian(&a->crypto_algorithm);
    vl_api_key_t_endian(&a->crypto_key);
    vl_api_ipsec_integ_alg_t_endian(&a->integrity_algorithm);
    vl_api_key_t_endian(&a->integrity_key);
    vl_api_ipsec_sad_flags_t_endian(&a->flags);
    vl_api_address_t_endian(&a->tunnel_src);
    vl_api_address_t_endian(&a->tunnel_dst);
    a->tx_table_id = clib_net_to_host_u32(a->tx_table_id);
    a->salt = clib_net_to_host_u32(a->salt);
    a->udp_src_port = clib_net_to_host_u16(a->udp_src_port);
    a->udp_dst_port = clib_net_to_host_u16(a->udp_dst_port);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(ipsec_types.api, 3, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ipsec_types.api, 0x5410d3a3)

#endif

