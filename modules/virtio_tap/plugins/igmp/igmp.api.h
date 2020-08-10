/*
 * VLIB API definitions 2020-07-24 16:28:56
 * Input file: igmp.api
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
#warning no content included from igmp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_IGMP_LISTEN, vl_api_igmp_listen_t_handler)
vl_msg_id(VL_API_IGMP_LISTEN_REPLY, vl_api_igmp_listen_reply_t_handler)
vl_msg_id(VL_API_IGMP_ENABLE_DISABLE, vl_api_igmp_enable_disable_t_handler)
vl_msg_id(VL_API_IGMP_ENABLE_DISABLE_REPLY, vl_api_igmp_enable_disable_reply_t_handler)
vl_msg_id(VL_API_IGMP_PROXY_DEVICE_ADD_DEL, vl_api_igmp_proxy_device_add_del_t_handler)
vl_msg_id(VL_API_IGMP_PROXY_DEVICE_ADD_DEL_REPLY, vl_api_igmp_proxy_device_add_del_reply_t_handler)
vl_msg_id(VL_API_IGMP_PROXY_DEVICE_ADD_DEL_INTERFACE, vl_api_igmp_proxy_device_add_del_interface_t_handler)
vl_msg_id(VL_API_IGMP_PROXY_DEVICE_ADD_DEL_INTERFACE_REPLY, vl_api_igmp_proxy_device_add_del_interface_reply_t_handler)
vl_msg_id(VL_API_IGMP_DUMP, vl_api_igmp_dump_t_handler)
vl_msg_id(VL_API_IGMP_DETAILS, vl_api_igmp_details_t_handler)
vl_msg_id(VL_API_IGMP_CLEAR_INTERFACE, vl_api_igmp_clear_interface_t_handler)
vl_msg_id(VL_API_IGMP_CLEAR_INTERFACE_REPLY, vl_api_igmp_clear_interface_reply_t_handler)
vl_msg_id(VL_API_WANT_IGMP_EVENTS, vl_api_want_igmp_events_t_handler)
vl_msg_id(VL_API_WANT_IGMP_EVENTS_REPLY, vl_api_want_igmp_events_reply_t_handler)
vl_msg_id(VL_API_IGMP_EVENT, vl_api_igmp_event_t_handler)
vl_msg_id(VL_API_IGMP_GROUP_PREFIX_SET, vl_api_igmp_group_prefix_set_t_handler)
vl_msg_id(VL_API_IGMP_GROUP_PREFIX_SET_REPLY, vl_api_igmp_group_prefix_set_reply_t_handler)
vl_msg_id(VL_API_IGMP_GROUP_PREFIX_DUMP, vl_api_igmp_group_prefix_dump_t_handler)
vl_msg_id(VL_API_IGMP_GROUP_PREFIX_DETAILS, vl_api_igmp_group_prefix_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_igmp_listen_t, 1)
vl_msg_name(vl_api_igmp_listen_reply_t, 1)
vl_msg_name(vl_api_igmp_enable_disable_t, 1)
vl_msg_name(vl_api_igmp_enable_disable_reply_t, 1)
vl_msg_name(vl_api_igmp_proxy_device_add_del_t, 1)
vl_msg_name(vl_api_igmp_proxy_device_add_del_reply_t, 1)
vl_msg_name(vl_api_igmp_proxy_device_add_del_interface_t, 1)
vl_msg_name(vl_api_igmp_proxy_device_add_del_interface_reply_t, 1)
vl_msg_name(vl_api_igmp_dump_t, 1)
vl_msg_name(vl_api_igmp_details_t, 1)
vl_msg_name(vl_api_igmp_clear_interface_t, 1)
vl_msg_name(vl_api_igmp_clear_interface_reply_t, 1)
vl_msg_name(vl_api_want_igmp_events_t, 1)
vl_msg_name(vl_api_want_igmp_events_reply_t, 1)
vl_msg_name(vl_api_igmp_event_t, 1)
vl_msg_name(vl_api_igmp_group_prefix_set_t, 1)
vl_msg_name(vl_api_igmp_group_prefix_set_reply_t, 1)
vl_msg_name(vl_api_igmp_group_prefix_dump_t, 1)
vl_msg_name(vl_api_igmp_group_prefix_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_igmp \
_(VL_API_IGMP_LISTEN, igmp_listen, 3f93a51a) \
_(VL_API_IGMP_LISTEN_REPLY, igmp_listen_reply, e8d4e804) \
_(VL_API_IGMP_ENABLE_DISABLE, igmp_enable_disable, b1edfb96) \
_(VL_API_IGMP_ENABLE_DISABLE_REPLY, igmp_enable_disable_reply, e8d4e804) \
_(VL_API_IGMP_PROXY_DEVICE_ADD_DEL, igmp_proxy_device_add_del, 0b9be9ce) \
_(VL_API_IGMP_PROXY_DEVICE_ADD_DEL_REPLY, igmp_proxy_device_add_del_reply, e8d4e804) \
_(VL_API_IGMP_PROXY_DEVICE_ADD_DEL_INTERFACE, igmp_proxy_device_add_del_interface, 1a9ec24a) \
_(VL_API_IGMP_PROXY_DEVICE_ADD_DEL_INTERFACE_REPLY, igmp_proxy_device_add_del_interface_reply, e8d4e804) \
_(VL_API_IGMP_DUMP, igmp_dump, f9e6675e) \
_(VL_API_IGMP_DETAILS, igmp_details, 52f12a89) \
_(VL_API_IGMP_CLEAR_INTERFACE, igmp_clear_interface, f9e6675e) \
_(VL_API_IGMP_CLEAR_INTERFACE_REPLY, igmp_clear_interface_reply, e8d4e804) \
_(VL_API_WANT_IGMP_EVENTS, want_igmp_events, cfaccc1f) \
_(VL_API_WANT_IGMP_EVENTS_REPLY, want_igmp_events_reply, e8d4e804) \
_(VL_API_IGMP_EVENT, igmp_event, d7696eaf) \
_(VL_API_IGMP_GROUP_PREFIX_SET, igmp_group_prefix_set, d4f20ac5) \
_(VL_API_IGMP_GROUP_PREFIX_SET_REPLY, igmp_group_prefix_set_reply, e8d4e804) \
_(VL_API_IGMP_GROUP_PREFIX_DUMP, igmp_group_prefix_dump, 51077d14) \
_(VL_API_IGMP_GROUP_PREFIX_DETAILS, igmp_group_prefix_details, c3b3c526) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "igmp.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_igmp_printfun_types
#define included_igmp_printfun_types

static inline u8 *format_vl_api_filter_mode_t (u8 *s, va_list * args)
{
    vl_api_filter_mode_t *a = va_arg (*args, vl_api_filter_mode_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "EXCLUDE");
    case 1:
        return format(s, "INCLUDE");
    }
    return s;
}

static inline u8 *format_vl_api_igmp_group_t (u8 *s, va_list * args)
{
    vl_api_igmp_group_t *a = va_arg (*args, vl_api_igmp_group_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ufilter: %U", format_white_space, indent, format_vl_api_filter_mode_t, &a->filter, indent);
    s = format(s, "\n%Un_srcs: %u", format_white_space, indent, a->n_srcs);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ugaddr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->gaddr, indent);
    for (i = 0; i < a->n_srcs; i++) {
        s = format(s, "\n%Usaddrs: %U",
                   format_white_space, indent, format_vl_api_ip4_address_t, &a->saddrs[i], indent);
    }
    return s;
}

static inline u8 *format_vl_api_group_prefix_type_t (u8 *s, va_list * args)
{
    vl_api_group_prefix_type_t *a = va_arg (*args, vl_api_group_prefix_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "ASM");
    case 1:
        return format(s, "SSM");
    }
    return s;
}

static inline u8 *format_vl_api_group_prefix_t (u8 *s, va_list * args)
{
    vl_api_group_prefix_t *a = va_arg (*args, vl_api_group_prefix_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_group_prefix_type_t, &a->type, indent);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->prefix, indent);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_igmp_printfun
#define included_igmp_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_igmp_listen_t_print (vl_api_igmp_listen_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_listen_t: */
    s = format(s, "vl_api_igmp_listen_t:");
    s = format(s, "\n%Ugroup: %U", format_white_space, indent, format_vl_api_igmp_group_t, &a->group, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_listen_reply_t_print (vl_api_igmp_listen_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_listen_reply_t: */
    s = format(s, "vl_api_igmp_listen_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_enable_disable_t_print (vl_api_igmp_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_enable_disable_t: */
    s = format(s, "vl_api_igmp_enable_disable_t:");
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    s = format(s, "\n%Umode: %u", format_white_space, indent, a->mode);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_enable_disable_reply_t_print (vl_api_igmp_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_enable_disable_reply_t: */
    s = format(s, "vl_api_igmp_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_proxy_device_add_del_t_print (vl_api_igmp_proxy_device_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_proxy_device_add_del_t: */
    s = format(s, "vl_api_igmp_proxy_device_add_del_t:");
    s = format(s, "\n%Uadd: %u", format_white_space, indent, a->add);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_proxy_device_add_del_reply_t_print (vl_api_igmp_proxy_device_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_proxy_device_add_del_reply_t: */
    s = format(s, "vl_api_igmp_proxy_device_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_proxy_device_add_del_interface_t_print (vl_api_igmp_proxy_device_add_del_interface_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_proxy_device_add_del_interface_t: */
    s = format(s, "vl_api_igmp_proxy_device_add_del_interface_t:");
    s = format(s, "\n%Uadd: %u", format_white_space, indent, a->add);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_proxy_device_add_del_interface_reply_t_print (vl_api_igmp_proxy_device_add_del_interface_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_proxy_device_add_del_interface_reply_t: */
    s = format(s, "vl_api_igmp_proxy_device_add_del_interface_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_dump_t_print (vl_api_igmp_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_dump_t: */
    s = format(s, "vl_api_igmp_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_details_t_print (vl_api_igmp_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_details_t: */
    s = format(s, "vl_api_igmp_details_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Usaddr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->saddr, indent);
    s = format(s, "\n%Ugaddr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->gaddr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_clear_interface_t_print (vl_api_igmp_clear_interface_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_clear_interface_t: */
    s = format(s, "vl_api_igmp_clear_interface_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_clear_interface_reply_t_print (vl_api_igmp_clear_interface_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_clear_interface_reply_t: */
    s = format(s, "vl_api_igmp_clear_interface_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_igmp_events_t_print (vl_api_want_igmp_events_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_igmp_events_t: */
    s = format(s, "vl_api_want_igmp_events_t:");
    s = format(s, "\n%Uenable: %u", format_white_space, indent, a->enable);
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_want_igmp_events_reply_t_print (vl_api_want_igmp_events_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_want_igmp_events_reply_t: */
    s = format(s, "vl_api_want_igmp_events_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_event_t_print (vl_api_igmp_event_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_event_t: */
    s = format(s, "vl_api_igmp_event_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ufilter: %U", format_white_space, indent, format_vl_api_filter_mode_t, &a->filter, indent);
    s = format(s, "\n%Usaddr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->saddr, indent);
    s = format(s, "\n%Ugaddr: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->gaddr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_group_prefix_set_t_print (vl_api_igmp_group_prefix_set_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_group_prefix_set_t: */
    s = format(s, "vl_api_igmp_group_prefix_set_t:");
    s = format(s, "\n%Ugp: %U", format_white_space, indent, format_vl_api_group_prefix_t, &a->gp, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_group_prefix_set_reply_t_print (vl_api_igmp_group_prefix_set_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_group_prefix_set_reply_t: */
    s = format(s, "vl_api_igmp_group_prefix_set_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_group_prefix_dump_t_print (vl_api_igmp_group_prefix_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_group_prefix_dump_t: */
    s = format(s, "vl_api_igmp_group_prefix_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_igmp_group_prefix_details_t_print (vl_api_igmp_group_prefix_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_igmp_group_prefix_details_t: */
    s = format(s, "vl_api_igmp_group_prefix_details_t:");
    s = format(s, "\n%Ugp: %U", format_white_space, indent, format_vl_api_group_prefix_t, &a->gp, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_igmp_endianfun
#define included_igmp_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_filter_mode_t_endian (vl_api_filter_mode_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_igmp_group_t_endian (vl_api_igmp_group_t *a)
{
    int i __attribute__((unused));
    vl_api_filter_mode_t_endian(&a->filter);
    /* a->n_srcs = a->n_srcs (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_ip4_address_t_endian(&a->gaddr);
    for (i = 0; i < a->n_srcs; i++) {
        vl_api_ip4_address_t_endian(&a->saddrs[i]);
    }
}

static inline void vl_api_group_prefix_type_t_endian (vl_api_group_prefix_type_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_group_prefix_t_endian (vl_api_group_prefix_t *a)
{
    int i __attribute__((unused));
    vl_api_group_prefix_type_t_endian(&a->type);
    vl_api_prefix_t_endian(&a->prefix);
}

static inline void vl_api_igmp_listen_t_endian (vl_api_igmp_listen_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_igmp_group_t_endian(&a->group);
}

static inline void vl_api_igmp_listen_reply_t_endian (vl_api_igmp_listen_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_igmp_enable_disable_t_endian (vl_api_igmp_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
    /* a->mode = a->mode (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_igmp_enable_disable_reply_t_endian (vl_api_igmp_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_igmp_proxy_device_add_del_t_endian (vl_api_igmp_proxy_device_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->add = a->add (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_igmp_proxy_device_add_del_reply_t_endian (vl_api_igmp_proxy_device_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_igmp_proxy_device_add_del_interface_t_endian (vl_api_igmp_proxy_device_add_del_interface_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->add = a->add (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_igmp_proxy_device_add_del_interface_reply_t_endian (vl_api_igmp_proxy_device_add_del_interface_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_igmp_dump_t_endian (vl_api_igmp_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_igmp_details_t_endian (vl_api_igmp_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_ip4_address_t_endian(&a->saddr);
    vl_api_ip4_address_t_endian(&a->gaddr);
}

static inline void vl_api_igmp_clear_interface_t_endian (vl_api_igmp_clear_interface_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_igmp_clear_interface_reply_t_endian (vl_api_igmp_clear_interface_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_want_igmp_events_t_endian (vl_api_want_igmp_events_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->enable = clib_net_to_host_u32(a->enable);
    a->pid = clib_net_to_host_u32(a->pid);
}

static inline void vl_api_want_igmp_events_reply_t_endian (vl_api_want_igmp_events_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_igmp_event_t_endian (vl_api_igmp_event_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_filter_mode_t_endian(&a->filter);
    vl_api_ip4_address_t_endian(&a->saddr);
    vl_api_ip4_address_t_endian(&a->gaddr);
}

static inline void vl_api_igmp_group_prefix_set_t_endian (vl_api_igmp_group_prefix_set_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_group_prefix_t_endian(&a->gp);
}

static inline void vl_api_igmp_group_prefix_set_reply_t_endian (vl_api_igmp_group_prefix_set_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_igmp_group_prefix_dump_t_endian (vl_api_igmp_group_prefix_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_igmp_group_prefix_details_t_endian (vl_api_igmp_group_prefix_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_group_prefix_t_endian(&a->gp);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(igmp.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(igmp.api, 0x2fd2bd5e)

#endif

