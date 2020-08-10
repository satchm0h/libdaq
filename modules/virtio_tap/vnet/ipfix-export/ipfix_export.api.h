/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: ipfix_export.api
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
#warning no content included from ipfix_export.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SET_IPFIX_EXPORTER, vl_api_set_ipfix_exporter_t_handler)
vl_msg_id(VL_API_SET_IPFIX_EXPORTER_REPLY, vl_api_set_ipfix_exporter_reply_t_handler)
vl_msg_id(VL_API_IPFIX_EXPORTER_DUMP, vl_api_ipfix_exporter_dump_t_handler)
vl_msg_id(VL_API_IPFIX_EXPORTER_DETAILS, vl_api_ipfix_exporter_details_t_handler)
vl_msg_id(VL_API_SET_IPFIX_CLASSIFY_STREAM, vl_api_set_ipfix_classify_stream_t_handler)
vl_msg_id(VL_API_SET_IPFIX_CLASSIFY_STREAM_REPLY, vl_api_set_ipfix_classify_stream_reply_t_handler)
vl_msg_id(VL_API_IPFIX_CLASSIFY_STREAM_DUMP, vl_api_ipfix_classify_stream_dump_t_handler)
vl_msg_id(VL_API_IPFIX_CLASSIFY_STREAM_DETAILS, vl_api_ipfix_classify_stream_details_t_handler)
vl_msg_id(VL_API_IPFIX_CLASSIFY_TABLE_ADD_DEL, vl_api_ipfix_classify_table_add_del_t_handler)
vl_msg_id(VL_API_IPFIX_CLASSIFY_TABLE_ADD_DEL_REPLY, vl_api_ipfix_classify_table_add_del_reply_t_handler)
vl_msg_id(VL_API_IPFIX_CLASSIFY_TABLE_DUMP, vl_api_ipfix_classify_table_dump_t_handler)
vl_msg_id(VL_API_IPFIX_CLASSIFY_TABLE_DETAILS, vl_api_ipfix_classify_table_details_t_handler)
vl_msg_id(VL_API_IPFIX_FLUSH, vl_api_ipfix_flush_t_handler)
vl_msg_id(VL_API_IPFIX_FLUSH_REPLY, vl_api_ipfix_flush_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_set_ipfix_exporter_t, 1)
vl_msg_name(vl_api_set_ipfix_exporter_reply_t, 1)
vl_msg_name(vl_api_ipfix_exporter_dump_t, 1)
vl_msg_name(vl_api_ipfix_exporter_details_t, 1)
vl_msg_name(vl_api_set_ipfix_classify_stream_t, 1)
vl_msg_name(vl_api_set_ipfix_classify_stream_reply_t, 1)
vl_msg_name(vl_api_ipfix_classify_stream_dump_t, 1)
vl_msg_name(vl_api_ipfix_classify_stream_details_t, 1)
vl_msg_name(vl_api_ipfix_classify_table_add_del_t, 1)
vl_msg_name(vl_api_ipfix_classify_table_add_del_reply_t, 1)
vl_msg_name(vl_api_ipfix_classify_table_dump_t, 1)
vl_msg_name(vl_api_ipfix_classify_table_details_t, 1)
vl_msg_name(vl_api_ipfix_flush_t, 1)
vl_msg_name(vl_api_ipfix_flush_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ipfix_export \
_(VL_API_SET_IPFIX_EXPORTER, set_ipfix_exporter, 69284e07) \
_(VL_API_SET_IPFIX_EXPORTER_REPLY, set_ipfix_exporter_reply, e8d4e804) \
_(VL_API_IPFIX_EXPORTER_DUMP, ipfix_exporter_dump, 51077d14) \
_(VL_API_IPFIX_EXPORTER_DETAILS, ipfix_exporter_details, 11e07413) \
_(VL_API_SET_IPFIX_CLASSIFY_STREAM, set_ipfix_classify_stream, c9cbe053) \
_(VL_API_SET_IPFIX_CLASSIFY_STREAM_REPLY, set_ipfix_classify_stream_reply, e8d4e804) \
_(VL_API_IPFIX_CLASSIFY_STREAM_DUMP, ipfix_classify_stream_dump, 51077d14) \
_(VL_API_IPFIX_CLASSIFY_STREAM_DETAILS, ipfix_classify_stream_details, 2903539d) \
_(VL_API_IPFIX_CLASSIFY_TABLE_ADD_DEL, ipfix_classify_table_add_del, 3e449bb9) \
_(VL_API_IPFIX_CLASSIFY_TABLE_ADD_DEL_REPLY, ipfix_classify_table_add_del_reply, e8d4e804) \
_(VL_API_IPFIX_CLASSIFY_TABLE_DUMP, ipfix_classify_table_dump, 51077d14) \
_(VL_API_IPFIX_CLASSIFY_TABLE_DETAILS, ipfix_classify_table_details, 1af8c28c) \
_(VL_API_IPFIX_FLUSH, ipfix_flush, 51077d14) \
_(VL_API_IPFIX_FLUSH_REPLY, ipfix_flush_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "ipfix_export.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ipfix_export_printfun_types
#define included_ipfix_export_printfun_types


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ipfix_export_printfun
#define included_ipfix_export_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_set_ipfix_exporter_t_print (vl_api_set_ipfix_exporter_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_set_ipfix_exporter_t: */
    s = format(s, "vl_api_set_ipfix_exporter_t:");
    s = format(s, "\n%Ucollector_address: %U", format_white_space, indent, format_vl_api_address_t, &a->collector_address, indent);
    s = format(s, "\n%Ucollector_port: %u", format_white_space, indent, a->collector_port);
    s = format(s, "\n%Usrc_address: %U", format_white_space, indent, format_vl_api_address_t, &a->src_address, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Upath_mtu: %u", format_white_space, indent, a->path_mtu);
    s = format(s, "\n%Utemplate_interval: %u", format_white_space, indent, a->template_interval);
    s = format(s, "\n%Uudp_checksum: %u", format_white_space, indent, a->udp_checksum);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_set_ipfix_exporter_reply_t_print (vl_api_set_ipfix_exporter_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_set_ipfix_exporter_reply_t: */
    s = format(s, "vl_api_set_ipfix_exporter_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipfix_exporter_dump_t_print (vl_api_ipfix_exporter_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipfix_exporter_dump_t: */
    s = format(s, "vl_api_ipfix_exporter_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipfix_exporter_details_t_print (vl_api_ipfix_exporter_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipfix_exporter_details_t: */
    s = format(s, "vl_api_ipfix_exporter_details_t:");
    s = format(s, "\n%Ucollector_address: %U", format_white_space, indent, format_vl_api_address_t, &a->collector_address, indent);
    s = format(s, "\n%Ucollector_port: %u", format_white_space, indent, a->collector_port);
    s = format(s, "\n%Usrc_address: %U", format_white_space, indent, format_vl_api_address_t, &a->src_address, indent);
    s = format(s, "\n%Uvrf_id: %u", format_white_space, indent, a->vrf_id);
    s = format(s, "\n%Upath_mtu: %u", format_white_space, indent, a->path_mtu);
    s = format(s, "\n%Utemplate_interval: %u", format_white_space, indent, a->template_interval);
    s = format(s, "\n%Uudp_checksum: %u", format_white_space, indent, a->udp_checksum);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_set_ipfix_classify_stream_t_print (vl_api_set_ipfix_classify_stream_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_set_ipfix_classify_stream_t: */
    s = format(s, "vl_api_set_ipfix_classify_stream_t:");
    s = format(s, "\n%Udomain_id: %u", format_white_space, indent, a->domain_id);
    s = format(s, "\n%Usrc_port: %u", format_white_space, indent, a->src_port);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_set_ipfix_classify_stream_reply_t_print (vl_api_set_ipfix_classify_stream_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_set_ipfix_classify_stream_reply_t: */
    s = format(s, "vl_api_set_ipfix_classify_stream_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipfix_classify_stream_dump_t_print (vl_api_ipfix_classify_stream_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipfix_classify_stream_dump_t: */
    s = format(s, "vl_api_ipfix_classify_stream_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipfix_classify_stream_details_t_print (vl_api_ipfix_classify_stream_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipfix_classify_stream_details_t: */
    s = format(s, "vl_api_ipfix_classify_stream_details_t:");
    s = format(s, "\n%Udomain_id: %u", format_white_space, indent, a->domain_id);
    s = format(s, "\n%Usrc_port: %u", format_white_space, indent, a->src_port);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipfix_classify_table_add_del_t_print (vl_api_ipfix_classify_table_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipfix_classify_table_add_del_t: */
    s = format(s, "vl_api_ipfix_classify_table_add_del_t:");
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Uip_version: %U", format_white_space, indent, format_vl_api_address_family_t, &a->ip_version, indent);
    s = format(s, "\n%Utransport_protocol: %U", format_white_space, indent, format_vl_api_ip_proto_t, &a->transport_protocol, indent);
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipfix_classify_table_add_del_reply_t_print (vl_api_ipfix_classify_table_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipfix_classify_table_add_del_reply_t: */
    s = format(s, "vl_api_ipfix_classify_table_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipfix_classify_table_dump_t_print (vl_api_ipfix_classify_table_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipfix_classify_table_dump_t: */
    s = format(s, "vl_api_ipfix_classify_table_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipfix_classify_table_details_t_print (vl_api_ipfix_classify_table_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipfix_classify_table_details_t: */
    s = format(s, "vl_api_ipfix_classify_table_details_t:");
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Uip_version: %U", format_white_space, indent, format_vl_api_address_family_t, &a->ip_version, indent);
    s = format(s, "\n%Utransport_protocol: %U", format_white_space, indent, format_vl_api_ip_proto_t, &a->transport_protocol, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipfix_flush_t_print (vl_api_ipfix_flush_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipfix_flush_t: */
    s = format(s, "vl_api_ipfix_flush_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipfix_flush_reply_t_print (vl_api_ipfix_flush_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipfix_flush_reply_t: */
    s = format(s, "vl_api_ipfix_flush_reply_t:");
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
#ifndef included_ipfix_export_endianfun
#define included_ipfix_export_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_set_ipfix_exporter_t_endian (vl_api_set_ipfix_exporter_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_t_endian(&a->collector_address);
    a->collector_port = clib_net_to_host_u16(a->collector_port);
    vl_api_address_t_endian(&a->src_address);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    a->path_mtu = clib_net_to_host_u32(a->path_mtu);
    a->template_interval = clib_net_to_host_u32(a->template_interval);
    /* a->udp_checksum = a->udp_checksum (no-op) */
}

static inline void vl_api_set_ipfix_exporter_reply_t_endian (vl_api_set_ipfix_exporter_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ipfix_exporter_dump_t_endian (vl_api_ipfix_exporter_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ipfix_exporter_details_t_endian (vl_api_ipfix_exporter_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_address_t_endian(&a->collector_address);
    a->collector_port = clib_net_to_host_u16(a->collector_port);
    vl_api_address_t_endian(&a->src_address);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    a->path_mtu = clib_net_to_host_u32(a->path_mtu);
    a->template_interval = clib_net_to_host_u32(a->template_interval);
    /* a->udp_checksum = a->udp_checksum (no-op) */
}

static inline void vl_api_set_ipfix_classify_stream_t_endian (vl_api_set_ipfix_classify_stream_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->domain_id = clib_net_to_host_u32(a->domain_id);
    a->src_port = clib_net_to_host_u16(a->src_port);
}

static inline void vl_api_set_ipfix_classify_stream_reply_t_endian (vl_api_set_ipfix_classify_stream_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ipfix_classify_stream_dump_t_endian (vl_api_ipfix_classify_stream_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ipfix_classify_stream_details_t_endian (vl_api_ipfix_classify_stream_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->domain_id = clib_net_to_host_u32(a->domain_id);
    a->src_port = clib_net_to_host_u16(a->src_port);
}

static inline void vl_api_ipfix_classify_table_add_del_t_endian (vl_api_ipfix_classify_table_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->table_id = clib_net_to_host_u32(a->table_id);
    vl_api_address_family_t_endian(&a->ip_version);
    vl_api_ip_proto_t_endian(&a->transport_protocol);
    /* a->is_add = a->is_add (no-op) */
}

static inline void vl_api_ipfix_classify_table_add_del_reply_t_endian (vl_api_ipfix_classify_table_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ipfix_classify_table_dump_t_endian (vl_api_ipfix_classify_table_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ipfix_classify_table_details_t_endian (vl_api_ipfix_classify_table_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->table_id = clib_net_to_host_u32(a->table_id);
    vl_api_address_family_t_endian(&a->ip_version);
    vl_api_ip_proto_t_endian(&a->transport_protocol);
}

static inline void vl_api_ipfix_flush_t_endian (vl_api_ipfix_flush_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ipfix_flush_reply_t_endian (vl_api_ipfix_flush_reply_t *a)
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

vl_api_version_tuple(ipfix_export.api, 2, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ipfix_export.api, 0xbe2017ea)

#endif

