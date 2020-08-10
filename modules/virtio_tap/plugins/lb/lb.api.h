/*
 * VLIB API definitions 2020-07-24 16:28:59
 * Input file: lb.api
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
#warning no content included from lb.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <lb/lb_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_LB_CONF, vl_api_lb_conf_t_handler)
vl_msg_id(VL_API_LB_CONF_REPLY, vl_api_lb_conf_reply_t_handler)
vl_msg_id(VL_API_LB_ADD_DEL_VIP, vl_api_lb_add_del_vip_t_handler)
vl_msg_id(VL_API_LB_ADD_DEL_VIP_REPLY, vl_api_lb_add_del_vip_reply_t_handler)
vl_msg_id(VL_API_LB_ADD_DEL_AS, vl_api_lb_add_del_as_t_handler)
vl_msg_id(VL_API_LB_ADD_DEL_AS_REPLY, vl_api_lb_add_del_as_reply_t_handler)
vl_msg_id(VL_API_LB_FLUSH_VIP, vl_api_lb_flush_vip_t_handler)
vl_msg_id(VL_API_LB_FLUSH_VIP_REPLY, vl_api_lb_flush_vip_reply_t_handler)
vl_msg_id(VL_API_LB_VIP_DUMP, vl_api_lb_vip_dump_t_handler)
vl_msg_id(VL_API_LB_VIP_DETAILS, vl_api_lb_vip_details_t_handler)
vl_msg_id(VL_API_LB_AS_DUMP, vl_api_lb_as_dump_t_handler)
vl_msg_id(VL_API_LB_AS_DETAILS, vl_api_lb_as_details_t_handler)
vl_msg_id(VL_API_LB_ADD_DEL_INTF_NAT4, vl_api_lb_add_del_intf_nat4_t_handler)
vl_msg_id(VL_API_LB_ADD_DEL_INTF_NAT4_REPLY, vl_api_lb_add_del_intf_nat4_reply_t_handler)
vl_msg_id(VL_API_LB_ADD_DEL_INTF_NAT6, vl_api_lb_add_del_intf_nat6_t_handler)
vl_msg_id(VL_API_LB_ADD_DEL_INTF_NAT6_REPLY, vl_api_lb_add_del_intf_nat6_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_lb_conf_t, 1)
vl_msg_name(vl_api_lb_conf_reply_t, 1)
vl_msg_name(vl_api_lb_add_del_vip_t, 1)
vl_msg_name(vl_api_lb_add_del_vip_reply_t, 1)
vl_msg_name(vl_api_lb_add_del_as_t, 1)
vl_msg_name(vl_api_lb_add_del_as_reply_t, 1)
vl_msg_name(vl_api_lb_flush_vip_t, 1)
vl_msg_name(vl_api_lb_flush_vip_reply_t, 1)
vl_msg_name(vl_api_lb_vip_dump_t, 1)
vl_msg_name(vl_api_lb_vip_details_t, 1)
vl_msg_name(vl_api_lb_as_dump_t, 1)
vl_msg_name(vl_api_lb_as_details_t, 1)
vl_msg_name(vl_api_lb_add_del_intf_nat4_t, 1)
vl_msg_name(vl_api_lb_add_del_intf_nat4_reply_t, 1)
vl_msg_name(vl_api_lb_add_del_intf_nat6_t, 1)
vl_msg_name(vl_api_lb_add_del_intf_nat6_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_lb \
_(VL_API_LB_CONF, lb_conf, 22ddb739) \
_(VL_API_LB_CONF_REPLY, lb_conf_reply, e8d4e804) \
_(VL_API_LB_ADD_DEL_VIP, lb_add_del_vip, d15b7ddc) \
_(VL_API_LB_ADD_DEL_VIP_REPLY, lb_add_del_vip_reply, e8d4e804) \
_(VL_API_LB_ADD_DEL_AS, lb_add_del_as, 78628987) \
_(VL_API_LB_ADD_DEL_AS_REPLY, lb_add_del_as_reply, e8d4e804) \
_(VL_API_LB_FLUSH_VIP, lb_flush_vip, 1063f819) \
_(VL_API_LB_FLUSH_VIP_REPLY, lb_flush_vip_reply, e8d4e804) \
_(VL_API_LB_VIP_DUMP, lb_vip_dump, c7bcb124) \
_(VL_API_LB_VIP_DETAILS, lb_vip_details, 08f39bed) \
_(VL_API_LB_AS_DUMP, lb_as_dump, 1063f819) \
_(VL_API_LB_AS_DETAILS, lb_as_details, 9c39f60e) \
_(VL_API_LB_ADD_DEL_INTF_NAT4, lb_add_del_intf_nat4, 47d6e753) \
_(VL_API_LB_ADD_DEL_INTF_NAT4_REPLY, lb_add_del_intf_nat4_reply, e8d4e804) \
_(VL_API_LB_ADD_DEL_INTF_NAT6, lb_add_del_intf_nat6, 47d6e753) \
_(VL_API_LB_ADD_DEL_INTF_NAT6_REPLY, lb_add_del_intf_nat6_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "lb.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_lb_printfun_types
#define included_lb_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_lb_printfun
#define included_lb_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

/***** manual: vl_api_lb_conf_t_print  *****/

static inline void *vl_api_lb_conf_reply_t_print (vl_api_lb_conf_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lb_conf_reply_t: */
    s = format(s, "vl_api_lb_conf_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_lb_add_del_vip_t_print  *****/

static inline void *vl_api_lb_add_del_vip_reply_t_print (vl_api_lb_add_del_vip_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lb_add_del_vip_reply_t: */
    s = format(s, "vl_api_lb_add_del_vip_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_lb_add_del_as_t_print  *****/

static inline void *vl_api_lb_add_del_as_reply_t_print (vl_api_lb_add_del_as_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lb_add_del_as_reply_t: */
    s = format(s, "vl_api_lb_add_del_as_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_lb_flush_vip_t_print  *****/

static inline void *vl_api_lb_flush_vip_reply_t_print (vl_api_lb_flush_vip_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lb_flush_vip_reply_t: */
    s = format(s, "vl_api_lb_flush_vip_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lb_vip_dump_t_print (vl_api_lb_vip_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lb_vip_dump_t: */
    s = format(s, "vl_api_lb_vip_dump_t:");
    s = format(s, "\n%Upfx: %U", format_white_space, indent, format_vl_api_address_with_prefix_t, &a->pfx, indent);
    s = format(s, "\n%Upfx_matcher: %U", format_white_space, indent, format_vl_api_prefix_matcher_t, &a->pfx_matcher, indent);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    s = format(s, "\n%Uport: %u", format_white_space, indent, a->port);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lb_vip_details_t_print (vl_api_lb_vip_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lb_vip_details_t: */
    s = format(s, "vl_api_lb_vip_details_t:");
    s = format(s, "\n%Uvip: %U", format_white_space, indent, format_vl_api_lb_vip_t, &a->vip, indent);
    s = format(s, "\n%Uencap: %U", format_white_space, indent, format_vl_api_lb_encap_type_t, &a->encap, indent);
    s = format(s, "\n%Udscp: %U", format_white_space, indent, format_vl_api_ip_dscp_t, &a->dscp, indent);
    s = format(s, "\n%Usrv_type: %U", format_white_space, indent, format_vl_api_lb_srv_type_t, &a->srv_type, indent);
    s = format(s, "\n%Utarget_port: %u", format_white_space, indent, a->target_port);
    s = format(s, "\n%Uflow_table_length: %u", format_white_space, indent, a->flow_table_length);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lb_as_dump_t_print (vl_api_lb_as_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lb_as_dump_t: */
    s = format(s, "vl_api_lb_as_dump_t:");
    s = format(s, "\n%Upfx: %U", format_white_space, indent, format_vl_api_address_with_prefix_t, &a->pfx, indent);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    s = format(s, "\n%Uport: %u", format_white_space, indent, a->port);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lb_as_details_t_print (vl_api_lb_as_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lb_as_details_t: */
    s = format(s, "vl_api_lb_as_details_t:");
    s = format(s, "\n%Uvip: %U", format_white_space, indent, format_vl_api_lb_vip_t, &a->vip, indent);
    s = format(s, "\n%Uapp_srv: %U", format_white_space, indent, format_vl_api_address_t, &a->app_srv, indent);
    s = format(s, "\n%Uflags: %u", format_white_space, indent, a->flags);
    s = format(s, "\n%Uin_use_since: %u", format_white_space, indent, a->in_use_since);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lb_add_del_intf_nat4_t_print (vl_api_lb_add_del_intf_nat4_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lb_add_del_intf_nat4_t: */
    s = format(s, "vl_api_lb_add_del_intf_nat4_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lb_add_del_intf_nat4_reply_t_print (vl_api_lb_add_del_intf_nat4_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lb_add_del_intf_nat4_reply_t: */
    s = format(s, "vl_api_lb_add_del_intf_nat4_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lb_add_del_intf_nat6_t_print (vl_api_lb_add_del_intf_nat6_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lb_add_del_intf_nat6_t: */
    s = format(s, "vl_api_lb_add_del_intf_nat6_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_lb_add_del_intf_nat6_reply_t_print (vl_api_lb_add_del_intf_nat6_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_lb_add_del_intf_nat6_reply_t: */
    s = format(s, "vl_api_lb_add_del_intf_nat6_reply_t:");
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
#ifndef included_lb_endianfun
#define included_lb_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_lb_conf_t_endian (vl_api_lb_conf_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ip4_address_t_endian(&a->ip4_src_address);
    vl_api_ip6_address_t_endian(&a->ip6_src_address);
    a->sticky_buckets_per_core = clib_net_to_host_u32(a->sticky_buckets_per_core);
    a->flow_timeout = clib_net_to_host_u32(a->flow_timeout);
}

static inline void vl_api_lb_conf_reply_t_endian (vl_api_lb_conf_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lb_add_del_vip_t_endian (vl_api_lb_add_del_vip_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_with_prefix_t_endian(&a->pfx);
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    vl_api_lb_encap_type_t_endian(&a->encap);
    /* a->dscp = a->dscp (no-op) */
    vl_api_lb_srv_type_t_endian(&a->type);
    a->target_port = clib_net_to_host_u16(a->target_port);
    a->node_port = clib_net_to_host_u16(a->node_port);
    a->new_flows_table_length = clib_net_to_host_u32(a->new_flows_table_length);
    /* a->is_del = a->is_del (no-op) */
}

static inline void vl_api_lb_add_del_vip_reply_t_endian (vl_api_lb_add_del_vip_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lb_add_del_as_t_endian (vl_api_lb_add_del_as_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_with_prefix_t_endian(&a->pfx);
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    vl_api_address_t_endian(&a->as_address);
    /* a->is_del = a->is_del (no-op) */
    /* a->is_flush = a->is_flush (no-op) */
}

static inline void vl_api_lb_add_del_as_reply_t_endian (vl_api_lb_add_del_as_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lb_flush_vip_t_endian (vl_api_lb_flush_vip_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_with_prefix_t_endian(&a->pfx);
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
}

static inline void vl_api_lb_flush_vip_reply_t_endian (vl_api_lb_flush_vip_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lb_vip_dump_t_endian (vl_api_lb_vip_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_with_prefix_t_endian(&a->pfx);
    vl_api_prefix_matcher_t_endian(&a->pfx_matcher);
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
}

static inline void vl_api_lb_vip_details_t_endian (vl_api_lb_vip_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_lb_vip_t_endian(&a->vip);
    vl_api_lb_encap_type_t_endian(&a->encap);
    vl_api_ip_dscp_t_endian(&a->dscp);
    vl_api_lb_srv_type_t_endian(&a->srv_type);
    a->target_port = clib_net_to_host_u16(a->target_port);
    a->flow_table_length = clib_net_to_host_u16(a->flow_table_length);
}

static inline void vl_api_lb_as_dump_t_endian (vl_api_lb_as_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_with_prefix_t_endian(&a->pfx);
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
}

static inline void vl_api_lb_as_details_t_endian (vl_api_lb_as_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_lb_vip_t_endian(&a->vip);
    vl_api_address_t_endian(&a->app_srv);
    /* a->flags = a->flags (no-op) */
    a->in_use_since = clib_net_to_host_u32(a->in_use_since);
}

static inline void vl_api_lb_add_del_intf_nat4_t_endian (vl_api_lb_add_del_intf_nat4_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_lb_add_del_intf_nat4_reply_t_endian (vl_api_lb_add_del_intf_nat4_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_lb_add_del_intf_nat6_t_endian (vl_api_lb_add_del_intf_nat6_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_lb_add_del_intf_nat6_reply_t_endian (vl_api_lb_add_del_intf_nat6_reply_t *a)
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

vl_api_version_tuple(lb.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(lb.api, 0x8e973b2)

#endif

