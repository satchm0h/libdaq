/*
 * VLIB API definitions 2020-07-24 16:28:51
 * Input file: flowprobe.api
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
#warning no content included from flowprobe.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_FLOWPROBE_TX_INTERFACE_ADD_DEL, vl_api_flowprobe_tx_interface_add_del_t_handler)
vl_msg_id(VL_API_FLOWPROBE_TX_INTERFACE_ADD_DEL_REPLY, vl_api_flowprobe_tx_interface_add_del_reply_t_handler)
vl_msg_id(VL_API_FLOWPROBE_PARAMS, vl_api_flowprobe_params_t_handler)
vl_msg_id(VL_API_FLOWPROBE_PARAMS_REPLY, vl_api_flowprobe_params_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_flowprobe_tx_interface_add_del_t, 1)
vl_msg_name(vl_api_flowprobe_tx_interface_add_del_reply_t, 1)
vl_msg_name(vl_api_flowprobe_params_t, 1)
vl_msg_name(vl_api_flowprobe_params_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_flowprobe \
_(VL_API_FLOWPROBE_TX_INTERFACE_ADD_DEL, flowprobe_tx_interface_add_del, b782c976) \
_(VL_API_FLOWPROBE_TX_INTERFACE_ADD_DEL_REPLY, flowprobe_tx_interface_add_del_reply, e8d4e804) \
_(VL_API_FLOWPROBE_PARAMS, flowprobe_params, baa46c09) \
_(VL_API_FLOWPROBE_PARAMS_REPLY, flowprobe_params_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "flowprobe.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_flowprobe_printfun_types
#define included_flowprobe_printfun_types

static inline u8 *format_vl_api_flowprobe_which_flags_t (u8 *s, va_list * args)
{
    vl_api_flowprobe_which_flags_t *a = va_arg (*args, vl_api_flowprobe_which_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "FLOWPROBE_WHICH_FLAG_IP4");
    case 2:
        return format(s, "FLOWPROBE_WHICH_FLAG_L2");
    case 4:
        return format(s, "FLOWPROBE_WHICH_FLAG_IP6");
    }
    return s;
}

static inline u8 *format_vl_api_flowprobe_record_flags_t (u8 *s, va_list * args)
{
    vl_api_flowprobe_record_flags_t *a = va_arg (*args, vl_api_flowprobe_record_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "FLOWPROBE_RECORD_FLAG_L2");
    case 2:
        return format(s, "FLOWPROBE_RECORD_FLAG_L3");
    case 4:
        return format(s, "FLOWPROBE_RECORD_FLAG_L4");
    }
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_flowprobe_printfun
#define included_flowprobe_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

/***** manual: vl_api_flowprobe_tx_interface_add_del_t_print  *****/

static inline void *vl_api_flowprobe_tx_interface_add_del_reply_t_print (vl_api_flowprobe_tx_interface_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_flowprobe_tx_interface_add_del_reply_t: */
    s = format(s, "vl_api_flowprobe_tx_interface_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_flowprobe_params_t_print (vl_api_flowprobe_params_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_flowprobe_params_t: */
    s = format(s, "vl_api_flowprobe_params_t:");
    s = format(s, "\n%Urecord_flags: %U", format_white_space, indent, format_vl_api_flowprobe_record_flags_t, &a->record_flags, indent);
    s = format(s, "\n%Uactive_timer: %u", format_white_space, indent, a->active_timer);
    s = format(s, "\n%Upassive_timer: %u", format_white_space, indent, a->passive_timer);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_flowprobe_params_reply_t_print (vl_api_flowprobe_params_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_flowprobe_params_reply_t: */
    s = format(s, "vl_api_flowprobe_params_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_flowprobe_endianfun
#define included_flowprobe_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_flowprobe_which_flags_t_endian (vl_api_flowprobe_which_flags_t *a)
{
    int i __attribute__((unused));
    /* a->flowprobe_which_flags = a->flowprobe_which_flags (no-op) */
}

static inline void vl_api_flowprobe_record_flags_t_endian (vl_api_flowprobe_record_flags_t *a)
{
    int i __attribute__((unused));
    /* a->flowprobe_record_flags = a->flowprobe_record_flags (no-op) */
}

static inline void vl_api_flowprobe_tx_interface_add_del_t_endian (vl_api_flowprobe_tx_interface_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_flowprobe_which_flags_t_endian(&a->which);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_flowprobe_tx_interface_add_del_reply_t_endian (vl_api_flowprobe_tx_interface_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_flowprobe_params_t_endian (vl_api_flowprobe_params_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_flowprobe_record_flags_t_endian(&a->record_flags);
    a->active_timer = clib_net_to_host_u32(a->active_timer);
    a->passive_timer = clib_net_to_host_u32(a->passive_timer);
}

static inline void vl_api_flowprobe_params_reply_t_endian (vl_api_flowprobe_params_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(flowprobe.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(flowprobe.api, 0x5f3ac69e)

#endif

