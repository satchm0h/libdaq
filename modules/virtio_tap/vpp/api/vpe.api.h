/*
 * VLIB API definitions 2020-07-24 16:28:08
 * Input file: vpe.api
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
#warning no content included from vpe.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vpp/api/vpe_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_CONTROL_PING, vl_api_control_ping_t_handler)
vl_msg_id(VL_API_CONTROL_PING_REPLY, vl_api_control_ping_reply_t_handler)
vl_msg_id(VL_API_CLI, vl_api_cli_t_handler)
vl_msg_id(VL_API_CLI_INBAND, vl_api_cli_inband_t_handler)
vl_msg_id(VL_API_CLI_REPLY, vl_api_cli_reply_t_handler)
vl_msg_id(VL_API_CLI_INBAND_REPLY, vl_api_cli_inband_reply_t_handler)
vl_msg_id(VL_API_GET_NODE_INDEX, vl_api_get_node_index_t_handler)
vl_msg_id(VL_API_GET_NODE_INDEX_REPLY, vl_api_get_node_index_reply_t_handler)
vl_msg_id(VL_API_ADD_NODE_NEXT, vl_api_add_node_next_t_handler)
vl_msg_id(VL_API_ADD_NODE_NEXT_REPLY, vl_api_add_node_next_reply_t_handler)
vl_msg_id(VL_API_SHOW_VERSION, vl_api_show_version_t_handler)
vl_msg_id(VL_API_SHOW_VERSION_REPLY, vl_api_show_version_reply_t_handler)
vl_msg_id(VL_API_SHOW_THREADS, vl_api_show_threads_t_handler)
vl_msg_id(VL_API_SHOW_THREADS_REPLY, vl_api_show_threads_reply_t_handler)
vl_msg_id(VL_API_GET_NODE_GRAPH, vl_api_get_node_graph_t_handler)
vl_msg_id(VL_API_GET_NODE_GRAPH_REPLY, vl_api_get_node_graph_reply_t_handler)
vl_msg_id(VL_API_GET_NEXT_INDEX, vl_api_get_next_index_t_handler)
vl_msg_id(VL_API_GET_NEXT_INDEX_REPLY, vl_api_get_next_index_reply_t_handler)
vl_msg_id(VL_API_LOG_DUMP, vl_api_log_dump_t_handler)
vl_msg_id(VL_API_LOG_DETAILS, vl_api_log_details_t_handler)
vl_msg_id(VL_API_SHOW_VPE_SYSTEM_TIME, vl_api_show_vpe_system_time_t_handler)
vl_msg_id(VL_API_SHOW_VPE_SYSTEM_TIME_REPLY, vl_api_show_vpe_system_time_reply_t_handler)
vl_msg_id(VL_API_GET_F64_ENDIAN_VALUE, vl_api_get_f64_endian_value_t_handler)
vl_msg_id(VL_API_GET_F64_ENDIAN_VALUE_REPLY, vl_api_get_f64_endian_value_reply_t_handler)
vl_msg_id(VL_API_GET_F64_INCREMENT_BY_ONE, vl_api_get_f64_increment_by_one_t_handler)
vl_msg_id(VL_API_GET_F64_INCREMENT_BY_ONE_REPLY, vl_api_get_f64_increment_by_one_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_control_ping_t, 1)
vl_msg_name(vl_api_control_ping_reply_t, 1)
vl_msg_name(vl_api_cli_t, 1)
vl_msg_name(vl_api_cli_inband_t, 1)
vl_msg_name(vl_api_cli_reply_t, 1)
vl_msg_name(vl_api_cli_inband_reply_t, 1)
vl_msg_name(vl_api_get_node_index_t, 1)
vl_msg_name(vl_api_get_node_index_reply_t, 1)
vl_msg_name(vl_api_add_node_next_t, 1)
vl_msg_name(vl_api_add_node_next_reply_t, 1)
vl_msg_name(vl_api_show_version_t, 1)
vl_msg_name(vl_api_show_version_reply_t, 1)
vl_msg_name(vl_api_show_threads_t, 1)
vl_msg_name(vl_api_show_threads_reply_t, 1)
vl_msg_name(vl_api_get_node_graph_t, 1)
vl_msg_name(vl_api_get_node_graph_reply_t, 1)
vl_msg_name(vl_api_get_next_index_t, 1)
vl_msg_name(vl_api_get_next_index_reply_t, 1)
vl_msg_name(vl_api_log_dump_t, 1)
vl_msg_name(vl_api_log_details_t, 1)
vl_msg_name(vl_api_show_vpe_system_time_t, 1)
vl_msg_name(vl_api_show_vpe_system_time_reply_t, 1)
vl_msg_name(vl_api_get_f64_endian_value_t, 1)
vl_msg_name(vl_api_get_f64_endian_value_reply_t, 1)
vl_msg_name(vl_api_get_f64_increment_by_one_t, 1)
vl_msg_name(vl_api_get_f64_increment_by_one_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_vpe \
_(VL_API_CONTROL_PING, control_ping, 51077d14) \
_(VL_API_CONTROL_PING_REPLY, control_ping_reply, f6b0b8ca) \
_(VL_API_CLI, cli, 23bfbfff) \
_(VL_API_CLI_INBAND, cli_inband, f8377302) \
_(VL_API_CLI_REPLY, cli_reply, 06d68297) \
_(VL_API_CLI_INBAND_REPLY, cli_inband_reply, 05879051) \
_(VL_API_GET_NODE_INDEX, get_node_index, f1984c64) \
_(VL_API_GET_NODE_INDEX_REPLY, get_node_index_reply, a8600b89) \
_(VL_API_ADD_NODE_NEXT, add_node_next, 2457116d) \
_(VL_API_ADD_NODE_NEXT_REPLY, add_node_next_reply, 2ed75f32) \
_(VL_API_SHOW_VERSION, show_version, 51077d14) \
_(VL_API_SHOW_VERSION_REPLY, show_version_reply, c919bde1) \
_(VL_API_SHOW_THREADS, show_threads, 51077d14) \
_(VL_API_SHOW_THREADS_REPLY, show_threads_reply, efd78e83) \
_(VL_API_GET_NODE_GRAPH, get_node_graph, 51077d14) \
_(VL_API_GET_NODE_GRAPH_REPLY, get_node_graph_reply, 06d68297) \
_(VL_API_GET_NEXT_INDEX, get_next_index, 2457116d) \
_(VL_API_GET_NEXT_INDEX_REPLY, get_next_index_reply, 2ed75f32) \
_(VL_API_LOG_DUMP, log_dump, 6ab31753) \
_(VL_API_LOG_DETAILS, log_details, 255827a1) \
_(VL_API_SHOW_VPE_SYSTEM_TIME, show_vpe_system_time, 51077d14) \
_(VL_API_SHOW_VPE_SYSTEM_TIME_REPLY, show_vpe_system_time_reply, 7ffd8193) \
_(VL_API_GET_F64_ENDIAN_VALUE, get_f64_endian_value, 809fcd44) \
_(VL_API_GET_F64_ENDIAN_VALUE_REPLY, get_f64_endian_value_reply, 7e02e404) \
_(VL_API_GET_F64_INCREMENT_BY_ONE, get_f64_increment_by_one, b64f027e) \
_(VL_API_GET_F64_INCREMENT_BY_ONE_REPLY, get_f64_increment_by_one_reply, d25dbaa3) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "vpe.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_vpe_printfun_types
#define included_vpe_printfun_types

static inline u8 *format_vl_api_thread_data_t (u8 *s, va_list * args)
{
    vl_api_thread_data_t *a = va_arg (*args, vl_api_thread_data_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uid: %u", format_white_space, indent, a->id);
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Utype: %s", format_white_space, indent, a->type);
    s = format(s, "\n%Upid: %u", format_white_space, indent, a->pid);
    s = format(s, "\n%Ucpu_id: %u", format_white_space, indent, a->cpu_id);
    s = format(s, "\n%Ucore: %u", format_white_space, indent, a->core);
    s = format(s, "\n%Ucpu_socket: %u", format_white_space, indent, a->cpu_socket);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_vpe_printfun
#define included_vpe_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_control_ping_t_print (vl_api_control_ping_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_control_ping_t: */
    s = format(s, "vl_api_control_ping_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_control_ping_reply_t_print (vl_api_control_ping_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_control_ping_reply_t: */
    s = format(s, "vl_api_control_ping_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uvpe_pid: %u", format_white_space, indent, a->vpe_pid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_cli_t_print (vl_api_cli_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_cli_t: */
    s = format(s, "vl_api_cli_t:");
    s = format(s, "\n%Ucmd_in_shmem: %llu", format_white_space, indent, a->cmd_in_shmem);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_cli_inband_t_print (vl_api_cli_inband_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_cli_inband_t: */
    s = format(s, "vl_api_cli_inband_t:");
    if (vl_api_string_len(&a->cmd) > 0) {
        s = format(s, "\n%Ucmd: %U", format_white_space, indent, vl_api_format_string, (&a->cmd));
    } else {
        s = format(s, "\n%Ucmd:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_cli_reply_t_print (vl_api_cli_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_cli_reply_t: */
    s = format(s, "vl_api_cli_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ureply_in_shmem: %llu", format_white_space, indent, a->reply_in_shmem);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_cli_inband_reply_t_print (vl_api_cli_inband_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_cli_inband_reply_t: */
    s = format(s, "vl_api_cli_inband_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    if (vl_api_string_len(&a->reply) > 0) {
        s = format(s, "\n%Ureply: %U", format_white_space, indent, vl_api_format_string, (&a->reply));
    } else {
        s = format(s, "\n%Ureply:", format_white_space, indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_get_node_index_t_print (vl_api_get_node_index_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_get_node_index_t: */
    s = format(s, "vl_api_get_node_index_t:");
    s = format(s, "\n%Unode_name: %s", format_white_space, indent, a->node_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_get_node_index_reply_t_print (vl_api_get_node_index_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_get_node_index_reply_t: */
    s = format(s, "vl_api_get_node_index_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Unode_index: %u", format_white_space, indent, a->node_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_add_node_next_t_print (vl_api_add_node_next_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_add_node_next_t: */
    s = format(s, "vl_api_add_node_next_t:");
    s = format(s, "\n%Unode_name: %s", format_white_space, indent, a->node_name);
    s = format(s, "\n%Unext_name: %s", format_white_space, indent, a->next_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_add_node_next_reply_t_print (vl_api_add_node_next_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_add_node_next_reply_t: */
    s = format(s, "vl_api_add_node_next_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Unext_index: %u", format_white_space, indent, a->next_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_version_t_print (vl_api_show_version_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_version_t: */
    s = format(s, "vl_api_show_version_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_version_reply_t_print (vl_api_show_version_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_version_reply_t: */
    s = format(s, "vl_api_show_version_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uprogram: %s", format_white_space, indent, a->program);
    s = format(s, "\n%Uversion: %s", format_white_space, indent, a->version);
    s = format(s, "\n%Ubuild_date: %s", format_white_space, indent, a->build_date);
    s = format(s, "\n%Ubuild_directory: %s", format_white_space, indent, a->build_directory);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_threads_t_print (vl_api_show_threads_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_threads_t: */
    s = format(s, "vl_api_show_threads_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_threads_reply_t_print (vl_api_show_threads_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_threads_reply_t: */
    s = format(s, "vl_api_show_threads_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ucount: %u", format_white_space, indent, a->count);
    for (i = 0; i < a->count; i++) {
        s = format(s, "\n%Uthread_data: %U",
                   format_white_space, indent, format_vl_api_thread_data_t, &a->thread_data[i], indent);
    }
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_get_node_graph_t_print (vl_api_get_node_graph_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_get_node_graph_t: */
    s = format(s, "vl_api_get_node_graph_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_get_node_graph_reply_t_print (vl_api_get_node_graph_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_get_node_graph_reply_t: */
    s = format(s, "vl_api_get_node_graph_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ureply_in_shmem: %llu", format_white_space, indent, a->reply_in_shmem);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_get_next_index_t_print (vl_api_get_next_index_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_get_next_index_t: */
    s = format(s, "vl_api_get_next_index_t:");
    s = format(s, "\n%Unode_name: %s", format_white_space, indent, a->node_name);
    s = format(s, "\n%Unext_name: %s", format_white_space, indent, a->next_name);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_get_next_index_reply_t_print (vl_api_get_next_index_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_get_next_index_reply_t: */
    s = format(s, "vl_api_get_next_index_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Unext_index: %u", format_white_space, indent, a->next_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_log_dump_t_print (vl_api_log_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_log_dump_t: */
    s = format(s, "vl_api_log_dump_t:");
    s = format(s, "\n%Ustart_timestamp: %U", format_white_space, indent, format_vl_api_timestamp_t, &a->start_timestamp, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_log_details_t_print (vl_api_log_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_log_details_t: */
    s = format(s, "vl_api_log_details_t:");
    s = format(s, "\n%Utimestamp: %U", format_white_space, indent, format_vl_api_timestamp_t, &a->timestamp, indent);
    s = format(s, "\n%Ulevel: %U", format_white_space, indent, format_vl_api_log_level_t, &a->level, indent);
    s = format(s, "\n%Umsg_class: %s", format_white_space, indent, a->msg_class);
    s = format(s, "\n%Umessage: %s", format_white_space, indent, a->message);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_vpe_system_time_t_print (vl_api_show_vpe_system_time_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_vpe_system_time_t: */
    s = format(s, "vl_api_show_vpe_system_time_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_show_vpe_system_time_reply_t_print (vl_api_show_vpe_system_time_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_show_vpe_system_time_reply_t: */
    s = format(s, "vl_api_show_vpe_system_time_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uvpe_system_time: %U", format_white_space, indent, format_vl_api_timestamp_t, &a->vpe_system_time, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_get_f64_endian_value_t_print (vl_api_get_f64_endian_value_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_get_f64_endian_value_t: */
    s = format(s, "vl_api_get_f64_endian_value_t:");
    s = format(s, "\n%Uf64_one: %.2f", format_white_space, indent, a->f64_one);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_get_f64_endian_value_reply_t_print (vl_api_get_f64_endian_value_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_get_f64_endian_value_reply_t: */
    s = format(s, "vl_api_get_f64_endian_value_reply_t:");
    s = format(s, "\n%Uretval: %u", format_white_space, indent, a->retval);
    s = format(s, "\n%Uf64_one_result: %.2f", format_white_space, indent, a->f64_one_result);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_get_f64_increment_by_one_t_print (vl_api_get_f64_increment_by_one_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_get_f64_increment_by_one_t: */
    s = format(s, "vl_api_get_f64_increment_by_one_t:");
    s = format(s, "\n%Uf64_value: %.2f", format_white_space, indent, a->f64_value);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_get_f64_increment_by_one_reply_t_print (vl_api_get_f64_increment_by_one_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_get_f64_increment_by_one_reply_t: */
    s = format(s, "vl_api_get_f64_increment_by_one_reply_t:");
    s = format(s, "\n%Uretval: %u", format_white_space, indent, a->retval);
    s = format(s, "\n%Uf64_value: %.2f", format_white_space, indent, a->f64_value);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_vpe_endianfun
#define included_vpe_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_thread_data_t_endian (vl_api_thread_data_t *a)
{
    int i __attribute__((unused));
    a->id = clib_net_to_host_u32(a->id);
    /* a->name = a->name (no-op) */
    /* a->type = a->type (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
    a->cpu_id = clib_net_to_host_u32(a->cpu_id);
    a->core = clib_net_to_host_u32(a->core);
    a->cpu_socket = clib_net_to_host_u32(a->cpu_socket);
}

static inline void vl_api_control_ping_t_endian (vl_api_control_ping_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_control_ping_reply_t_endian (vl_api_control_ping_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->client_index = a->client_index (no-op) */
    a->vpe_pid = clib_net_to_host_u32(a->vpe_pid);
}

static inline void vl_api_cli_t_endian (vl_api_cli_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->cmd_in_shmem = clib_net_to_host_u64(a->cmd_in_shmem);
}

static inline void vl_api_cli_inband_t_endian (vl_api_cli_inband_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->cmd = a->cmd (no-op) */
}

static inline void vl_api_cli_reply_t_endian (vl_api_cli_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->reply_in_shmem = clib_net_to_host_u64(a->reply_in_shmem);
}

static inline void vl_api_cli_inband_reply_t_endian (vl_api_cli_inband_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->reply = a->reply (no-op) */
}

static inline void vl_api_get_node_index_t_endian (vl_api_get_node_index_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->node_name = a->node_name (no-op) */
}

static inline void vl_api_get_node_index_reply_t_endian (vl_api_get_node_index_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->node_index = clib_net_to_host_u32(a->node_index);
}

static inline void vl_api_add_node_next_t_endian (vl_api_add_node_next_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->node_name = a->node_name (no-op) */
    /* a->next_name = a->next_name (no-op) */
}

static inline void vl_api_add_node_next_reply_t_endian (vl_api_add_node_next_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->next_index = clib_net_to_host_u32(a->next_index);
}

static inline void vl_api_show_version_t_endian (vl_api_show_version_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_version_reply_t_endian (vl_api_show_version_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->program = a->program (no-op) */
    /* a->version = a->version (no-op) */
    /* a->build_date = a->build_date (no-op) */
    /* a->build_directory = a->build_directory (no-op) */
}

static inline void vl_api_show_threads_t_endian (vl_api_show_threads_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_threads_reply_t_endian (vl_api_show_threads_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->count = clib_net_to_host_u32(a->count);
    for (i = 0; i < a->count; i++) {
        vl_api_thread_data_t_endian(&a->thread_data[i]);
    }
}

static inline void vl_api_get_node_graph_t_endian (vl_api_get_node_graph_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_get_node_graph_reply_t_endian (vl_api_get_node_graph_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->reply_in_shmem = clib_net_to_host_u64(a->reply_in_shmem);
}

static inline void vl_api_get_next_index_t_endian (vl_api_get_next_index_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->node_name = a->node_name (no-op) */
    /* a->next_name = a->next_name (no-op) */
}

static inline void vl_api_get_next_index_reply_t_endian (vl_api_get_next_index_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->next_index = clib_net_to_host_u32(a->next_index);
}

static inline void vl_api_log_dump_t_endian (vl_api_log_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_timestamp_t_endian(&a->start_timestamp);
}

static inline void vl_api_log_details_t_endian (vl_api_log_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_timestamp_t_endian(&a->timestamp);
    vl_api_log_level_t_endian(&a->level);
    /* a->msg_class = a->msg_class (no-op) */
    /* a->message = a->message (no-op) */
}

static inline void vl_api_show_vpe_system_time_t_endian (vl_api_show_vpe_system_time_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_show_vpe_system_time_reply_t_endian (vl_api_show_vpe_system_time_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_timestamp_t_endian(&a->vpe_system_time);
}

static inline void vl_api_get_f64_endian_value_t_endian (vl_api_get_f64_endian_value_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->f64_one = clib_net_to_host_f64(a->f64_one);
}

static inline void vl_api_get_f64_endian_value_reply_t_endian (vl_api_get_f64_endian_value_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->f64_one_result = clib_net_to_host_f64(a->f64_one_result);
}

static inline void vl_api_get_f64_increment_by_one_t_endian (vl_api_get_f64_increment_by_one_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->f64_value = clib_net_to_host_f64(a->f64_value);
}

static inline void vl_api_get_f64_increment_by_one_reply_t_endian (vl_api_get_f64_increment_by_one_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->f64_value = clib_net_to_host_f64(a->f64_value);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(vpe.api, 1, 6, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(vpe.api, 0xdf5a16a7)

#endif

