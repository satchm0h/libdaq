/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: interface_types.api
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
#warning no content included from interface_types.api
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
#define foreach_vl_msg_name_crc_interface_types 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "interface_types.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_interface_types_printfun_types
#define included_interface_types_printfun_types

static inline u8 *format_vl_api_interface_index_t (u8 *s, va_list * args)
{
    vl_api_interface_index_t *a = va_arg (*args, vl_api_interface_index_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    return format(s, "%u", *a);
}

static inline u8 *format_vl_api_if_status_flags_t (u8 *s, va_list * args)
{
    vl_api_if_status_flags_t *a = va_arg (*args, vl_api_if_status_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "IF_STATUS_API_FLAG_ADMIN_UP");
    case 2:
        return format(s, "IF_STATUS_API_FLAG_LINK_UP");
    }
    return s;
}

static inline u8 *format_vl_api_mtu_proto_t (u8 *s, va_list * args)
{
    vl_api_mtu_proto_t *a = va_arg (*args, vl_api_mtu_proto_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "MTU_PROTO_API_L3");
    case 1:
        return format(s, "MTU_PROTO_API_IP4");
    case 2:
        return format(s, "MTU_PROTO_API_IP6");
    case 3:
        return format(s, "MTU_PROTO_API_MPLS");
    }
    return s;
}

static inline u8 *format_vl_api_link_duplex_t (u8 *s, va_list * args)
{
    vl_api_link_duplex_t *a = va_arg (*args, vl_api_link_duplex_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "LINK_DUPLEX_API_UNKNOWN");
    case 1:
        return format(s, "LINK_DUPLEX_API_HALF");
    case 2:
        return format(s, "LINK_DUPLEX_API_FULL");
    }
    return s;
}

static inline u8 *format_vl_api_sub_if_flags_t (u8 *s, va_list * args)
{
    vl_api_sub_if_flags_t *a = va_arg (*args, vl_api_sub_if_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "SUB_IF_API_FLAG_NO_TAGS");
    case 2:
        return format(s, "SUB_IF_API_FLAG_ONE_TAG");
    case 4:
        return format(s, "SUB_IF_API_FLAG_TWO_TAGS");
    case 8:
        return format(s, "SUB_IF_API_FLAG_DOT1AD");
    case 16:
        return format(s, "SUB_IF_API_FLAG_EXACT_MATCH");
    case 32:
        return format(s, "SUB_IF_API_FLAG_DEFAULT");
    case 64:
        return format(s, "SUB_IF_API_FLAG_OUTER_VLAN_ID_ANY");
    case 128:
        return format(s, "SUB_IF_API_FLAG_INNER_VLAN_ID_ANY");
    case 254:
        return format(s, "SUB_IF_API_FLAG_MASK_VNET");
    case 256:
        return format(s, "SUB_IF_API_FLAG_DOT1AH");
    }
    return s;
}

static inline u8 *format_vl_api_rx_mode_t (u8 *s, va_list * args)
{
    vl_api_rx_mode_t *a = va_arg (*args, vl_api_rx_mode_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "RX_MODE_API_UNKNOWN");
    case 1:
        return format(s, "RX_MODE_API_POLLING");
    case 2:
        return format(s, "RX_MODE_API_INTERRUPT");
    case 3:
        return format(s, "RX_MODE_API_ADAPTIVE");
    case 4:
        return format(s, "RX_MODE_API_DEFAULT");
    }
    return s;
}

static inline u8 *format_vl_api_if_type_t (u8 *s, va_list * args)
{
    vl_api_if_type_t *a = va_arg (*args, vl_api_if_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "IF_API_TYPE_HARDWARE");
    case 1:
        return format(s, "IF_API_TYPE_SUB");
    case 2:
        return format(s, "IF_API_TYPE_P2P");
    case 3:
        return format(s, "IF_API_TYPE_PIPE");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_interface_types_printfun
#define included_interface_types_printfun

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
#ifndef included_interface_types_endianfun
#define included_interface_types_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_interface_index_t_endian (vl_api_interface_index_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_if_status_flags_t_endian (vl_api_if_status_flags_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_mtu_proto_t_endian (vl_api_mtu_proto_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_link_duplex_t_endian (vl_api_link_duplex_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_sub_if_flags_t_endian (vl_api_sub_if_flags_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_rx_mode_t_endian (vl_api_rx_mode_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_if_type_t_endian (vl_api_if_type_t *a)
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
vl_api_version(interface_types.api, 0x23822dac)

#endif

