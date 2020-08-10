/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: ipsec.api
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
#warning no content included from ipsec.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ipsec/ipsec_types.api.h>
#include <vnet/interface_types.api.h>
#include <vnet/ip/ip_types.api.h>
#include <vnet/interface_types.api.h>
#include <vnet/tunnel/tunnel_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_IPSEC_SPD_ADD_DEL, vl_api_ipsec_spd_add_del_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_ADD_DEL_REPLY, vl_api_ipsec_spd_add_del_reply_t_handler)
vl_msg_id(VL_API_IPSEC_INTERFACE_ADD_DEL_SPD, vl_api_ipsec_interface_add_del_spd_t_handler)
vl_msg_id(VL_API_IPSEC_INTERFACE_ADD_DEL_SPD_REPLY, vl_api_ipsec_interface_add_del_spd_reply_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_ENTRY_ADD_DEL, vl_api_ipsec_spd_entry_add_del_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_ENTRY_ADD_DEL_REPLY, vl_api_ipsec_spd_entry_add_del_reply_t_handler)
vl_msg_id(VL_API_IPSEC_SPDS_DUMP, vl_api_ipsec_spds_dump_t_handler)
vl_msg_id(VL_API_IPSEC_SPDS_DETAILS, vl_api_ipsec_spds_details_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_DUMP, vl_api_ipsec_spd_dump_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_DETAILS, vl_api_ipsec_spd_details_t_handler)
vl_msg_id(VL_API_IPSEC_SAD_ENTRY_ADD_DEL, vl_api_ipsec_sad_entry_add_del_t_handler)
vl_msg_id(VL_API_IPSEC_SAD_ENTRY_ADD_DEL_REPLY, vl_api_ipsec_sad_entry_add_del_reply_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_PROTECT_UPDATE, vl_api_ipsec_tunnel_protect_update_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_PROTECT_UPDATE_REPLY, vl_api_ipsec_tunnel_protect_update_reply_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_PROTECT_DEL, vl_api_ipsec_tunnel_protect_del_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_PROTECT_DEL_REPLY, vl_api_ipsec_tunnel_protect_del_reply_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_PROTECT_DUMP, vl_api_ipsec_tunnel_protect_dump_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_PROTECT_DETAILS, vl_api_ipsec_tunnel_protect_details_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_INTERFACE_DUMP, vl_api_ipsec_spd_interface_dump_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_INTERFACE_DETAILS, vl_api_ipsec_spd_interface_details_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_IF_ADD_DEL, vl_api_ipsec_tunnel_if_add_del_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_IF_ADD_DEL_REPLY, vl_api_ipsec_tunnel_if_add_del_reply_t_handler)
vl_msg_id(VL_API_IPSEC_ITF_CREATE, vl_api_ipsec_itf_create_t_handler)
vl_msg_id(VL_API_IPSEC_ITF_CREATE_REPLY, vl_api_ipsec_itf_create_reply_t_handler)
vl_msg_id(VL_API_IPSEC_ITF_DELETE, vl_api_ipsec_itf_delete_t_handler)
vl_msg_id(VL_API_IPSEC_ITF_DELETE_REPLY, vl_api_ipsec_itf_delete_reply_t_handler)
vl_msg_id(VL_API_IPSEC_ITF_DUMP, vl_api_ipsec_itf_dump_t_handler)
vl_msg_id(VL_API_IPSEC_ITF_DETAILS, vl_api_ipsec_itf_details_t_handler)
vl_msg_id(VL_API_IPSEC_SA_DUMP, vl_api_ipsec_sa_dump_t_handler)
vl_msg_id(VL_API_IPSEC_SA_DETAILS, vl_api_ipsec_sa_details_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_IF_SET_SA, vl_api_ipsec_tunnel_if_set_sa_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_IF_SET_SA_REPLY, vl_api_ipsec_tunnel_if_set_sa_reply_t_handler)
vl_msg_id(VL_API_IPSEC_BACKEND_DUMP, vl_api_ipsec_backend_dump_t_handler)
vl_msg_id(VL_API_IPSEC_BACKEND_DETAILS, vl_api_ipsec_backend_details_t_handler)
vl_msg_id(VL_API_IPSEC_SELECT_BACKEND, vl_api_ipsec_select_backend_t_handler)
vl_msg_id(VL_API_IPSEC_SELECT_BACKEND_REPLY, vl_api_ipsec_select_backend_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_ipsec_spd_add_del_t, 1)
vl_msg_name(vl_api_ipsec_spd_add_del_reply_t, 1)
vl_msg_name(vl_api_ipsec_interface_add_del_spd_t, 1)
vl_msg_name(vl_api_ipsec_interface_add_del_spd_reply_t, 1)
vl_msg_name(vl_api_ipsec_spd_entry_add_del_t, 1)
vl_msg_name(vl_api_ipsec_spd_entry_add_del_reply_t, 1)
vl_msg_name(vl_api_ipsec_spds_dump_t, 1)
vl_msg_name(vl_api_ipsec_spds_details_t, 1)
vl_msg_name(vl_api_ipsec_spd_dump_t, 1)
vl_msg_name(vl_api_ipsec_spd_details_t, 1)
vl_msg_name(vl_api_ipsec_sad_entry_add_del_t, 1)
vl_msg_name(vl_api_ipsec_sad_entry_add_del_reply_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_protect_update_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_protect_update_reply_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_protect_del_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_protect_del_reply_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_protect_dump_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_protect_details_t, 1)
vl_msg_name(vl_api_ipsec_spd_interface_dump_t, 1)
vl_msg_name(vl_api_ipsec_spd_interface_details_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_if_add_del_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_if_add_del_reply_t, 1)
vl_msg_name(vl_api_ipsec_itf_create_t, 1)
vl_msg_name(vl_api_ipsec_itf_create_reply_t, 1)
vl_msg_name(vl_api_ipsec_itf_delete_t, 1)
vl_msg_name(vl_api_ipsec_itf_delete_reply_t, 1)
vl_msg_name(vl_api_ipsec_itf_dump_t, 1)
vl_msg_name(vl_api_ipsec_itf_details_t, 1)
vl_msg_name(vl_api_ipsec_sa_dump_t, 1)
vl_msg_name(vl_api_ipsec_sa_details_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_if_set_sa_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_if_set_sa_reply_t, 1)
vl_msg_name(vl_api_ipsec_backend_dump_t, 1)
vl_msg_name(vl_api_ipsec_backend_details_t, 1)
vl_msg_name(vl_api_ipsec_select_backend_t, 1)
vl_msg_name(vl_api_ipsec_select_backend_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ipsec \
_(VL_API_IPSEC_SPD_ADD_DEL, ipsec_spd_add_del, 20e89a95) \
_(VL_API_IPSEC_SPD_ADD_DEL_REPLY, ipsec_spd_add_del_reply, e8d4e804) \
_(VL_API_IPSEC_INTERFACE_ADD_DEL_SPD, ipsec_interface_add_del_spd, 80f80cbb) \
_(VL_API_IPSEC_INTERFACE_ADD_DEL_SPD_REPLY, ipsec_interface_add_del_spd_reply, e8d4e804) \
_(VL_API_IPSEC_SPD_ENTRY_ADD_DEL, ipsec_spd_entry_add_del, 9f384b8d) \
_(VL_API_IPSEC_SPD_ENTRY_ADD_DEL_REPLY, ipsec_spd_entry_add_del_reply, 9ffac24b) \
_(VL_API_IPSEC_SPDS_DUMP, ipsec_spds_dump, 51077d14) \
_(VL_API_IPSEC_SPDS_DETAILS, ipsec_spds_details, a04bb254) \
_(VL_API_IPSEC_SPD_DUMP, ipsec_spd_dump, afefbf7d) \
_(VL_API_IPSEC_SPD_DETAILS, ipsec_spd_details, f2222790) \
_(VL_API_IPSEC_SAD_ENTRY_ADD_DEL, ipsec_sad_entry_add_del, b8def364) \
_(VL_API_IPSEC_SAD_ENTRY_ADD_DEL_REPLY, ipsec_sad_entry_add_del_reply, 9ffac24b) \
_(VL_API_IPSEC_TUNNEL_PROTECT_UPDATE, ipsec_tunnel_protect_update, 143f155d) \
_(VL_API_IPSEC_TUNNEL_PROTECT_UPDATE_REPLY, ipsec_tunnel_protect_update_reply, e8d4e804) \
_(VL_API_IPSEC_TUNNEL_PROTECT_DEL, ipsec_tunnel_protect_del, ddd2ba36) \
_(VL_API_IPSEC_TUNNEL_PROTECT_DEL_REPLY, ipsec_tunnel_protect_del_reply, e8d4e804) \
_(VL_API_IPSEC_TUNNEL_PROTECT_DUMP, ipsec_tunnel_protect_dump, f9e6675e) \
_(VL_API_IPSEC_TUNNEL_PROTECT_DETAILS, ipsec_tunnel_protect_details, ac6c823b) \
_(VL_API_IPSEC_SPD_INTERFACE_DUMP, ipsec_spd_interface_dump, 8971de19) \
_(VL_API_IPSEC_SPD_INTERFACE_DETAILS, ipsec_spd_interface_details, 7a0bcf3e) \
_(VL_API_IPSEC_TUNNEL_IF_ADD_DEL, ipsec_tunnel_if_add_del, 2b135e68) \
_(VL_API_IPSEC_TUNNEL_IF_ADD_DEL_REPLY, ipsec_tunnel_if_add_del_reply, 5383d31f) \
_(VL_API_IPSEC_ITF_CREATE, ipsec_itf_create, 6f50b3bc) \
_(VL_API_IPSEC_ITF_CREATE_REPLY, ipsec_itf_create_reply, 5383d31f) \
_(VL_API_IPSEC_ITF_DELETE, ipsec_itf_delete, f9e6675e) \
_(VL_API_IPSEC_ITF_DELETE_REPLY, ipsec_itf_delete_reply, e8d4e804) \
_(VL_API_IPSEC_ITF_DUMP, ipsec_itf_dump, f9e6675e) \
_(VL_API_IPSEC_ITF_DETAILS, ipsec_itf_details, 548a73b8) \
_(VL_API_IPSEC_SA_DUMP, ipsec_sa_dump, 2076c2f4) \
_(VL_API_IPSEC_SA_DETAILS, ipsec_sa_details, b30c7f41) \
_(VL_API_IPSEC_TUNNEL_IF_SET_SA, ipsec_tunnel_if_set_sa, f2f87112) \
_(VL_API_IPSEC_TUNNEL_IF_SET_SA_REPLY, ipsec_tunnel_if_set_sa_reply, e8d4e804) \
_(VL_API_IPSEC_BACKEND_DUMP, ipsec_backend_dump, 51077d14) \
_(VL_API_IPSEC_BACKEND_DETAILS, ipsec_backend_details, ee601c29) \
_(VL_API_IPSEC_SELECT_BACKEND, ipsec_select_backend, 5bcfd3b7) \
_(VL_API_IPSEC_SELECT_BACKEND_REPLY, ipsec_select_backend_reply, e8d4e804) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "ipsec.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ipsec_printfun_types
#define included_ipsec_printfun_types

static inline u8 *format_vl_api_ipsec_spd_action_t (u8 *s, va_list * args)
{
    vl_api_ipsec_spd_action_t *a = va_arg (*args, vl_api_ipsec_spd_action_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "IPSEC_API_SPD_ACTION_BYPASS");
    case 1:
        return format(s, "IPSEC_API_SPD_ACTION_DISCARD");
    case 2:
        return format(s, "IPSEC_API_SPD_ACTION_RESOLVE");
    case 3:
        return format(s, "IPSEC_API_SPD_ACTION_PROTECT");
    }
    return s;
}

static inline u8 *format_vl_api_ipsec_spd_entry_t (u8 *s, va_list * args)
{
    vl_api_ipsec_spd_entry_t *a = va_arg (*args, vl_api_ipsec_spd_entry_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uspd_id: %u", format_white_space, indent, a->spd_id);
    s = format(s, "\n%Upriority: %ld", format_white_space, indent, a->priority);
    s = format(s, "\n%Uis_outbound: %u", format_white_space, indent, a->is_outbound);
    s = format(s, "\n%Usa_id: %u", format_white_space, indent, a->sa_id);
    s = format(s, "\n%Upolicy: %U", format_white_space, indent, format_vl_api_ipsec_spd_action_t, &a->policy, indent);
    s = format(s, "\n%Uprotocol: %u", format_white_space, indent, a->protocol);
    s = format(s, "\n%Uremote_address_start: %U", format_white_space, indent, format_vl_api_address_t, &a->remote_address_start, indent);
    s = format(s, "\n%Uremote_address_stop: %U", format_white_space, indent, format_vl_api_address_t, &a->remote_address_stop, indent);
    s = format(s, "\n%Ulocal_address_start: %U", format_white_space, indent, format_vl_api_address_t, &a->local_address_start, indent);
    s = format(s, "\n%Ulocal_address_stop: %U", format_white_space, indent, format_vl_api_address_t, &a->local_address_stop, indent);
    s = format(s, "\n%Uremote_port_start: %u", format_white_space, indent, a->remote_port_start);
    s = format(s, "\n%Uremote_port_stop: %u", format_white_space, indent, a->remote_port_stop);
    s = format(s, "\n%Ulocal_port_start: %u", format_white_space, indent, a->local_port_start);
    s = format(s, "\n%Ulocal_port_stop: %u", format_white_space, indent, a->local_port_stop);
    return s;
}

static inline u8 *format_vl_api_ipsec_tunnel_protect_t (u8 *s, va_list * args)
{
    vl_api_ipsec_tunnel_protect_t *a = va_arg (*args, vl_api_ipsec_tunnel_protect_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Unh: %U", format_white_space, indent, format_vl_api_address_t, &a->nh, indent);
    s = format(s, "\n%Usa_out: %u", format_white_space, indent, a->sa_out);
    s = format(s, "\n%Un_sa_in: %u", format_white_space, indent, a->n_sa_in);
    for (i = 0; i < a->n_sa_in; i++) {
        s = format(s, "\n%Usa_in: %u",
                   format_white_space, indent, a->sa_in[i]);
    }
    return s;
}

static inline u8 *format_vl_api_ipsec_itf_t (u8 *s, va_list * args)
{
    vl_api_ipsec_itf_t *a = va_arg (*args, vl_api_ipsec_itf_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uuser_instance: %u", format_white_space, indent, a->user_instance);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_tunnel_mode_t, &a->mode, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_ipsec_printfun
#define included_ipsec_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

static inline void *vl_api_ipsec_spd_add_del_t_print (vl_api_ipsec_spd_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_spd_add_del_t: */
    s = format(s, "vl_api_ipsec_spd_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uspd_id: %u", format_white_space, indent, a->spd_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_spd_add_del_reply_t_print (vl_api_ipsec_spd_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_spd_add_del_reply_t: */
    s = format(s, "vl_api_ipsec_spd_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_interface_add_del_spd_t_print (vl_api_ipsec_interface_add_del_spd_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_interface_add_del_spd_t: */
    s = format(s, "vl_api_ipsec_interface_add_del_spd_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Uspd_id: %u", format_white_space, indent, a->spd_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_interface_add_del_spd_reply_t_print (vl_api_ipsec_interface_add_del_spd_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_interface_add_del_spd_reply_t: */
    s = format(s, "vl_api_ipsec_interface_add_del_spd_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_spd_entry_add_del_t_print (vl_api_ipsec_spd_entry_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_spd_entry_add_del_t: */
    s = format(s, "vl_api_ipsec_spd_entry_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uentry: %U", format_white_space, indent, format_vl_api_ipsec_spd_entry_t, &a->entry, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_spd_entry_add_del_reply_t_print (vl_api_ipsec_spd_entry_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_spd_entry_add_del_reply_t: */
    s = format(s, "vl_api_ipsec_spd_entry_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ustat_index: %u", format_white_space, indent, a->stat_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_spds_dump_t_print (vl_api_ipsec_spds_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_spds_dump_t: */
    s = format(s, "vl_api_ipsec_spds_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_spds_details_t_print (vl_api_ipsec_spds_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_spds_details_t: */
    s = format(s, "vl_api_ipsec_spds_details_t:");
    s = format(s, "\n%Uspd_id: %u", format_white_space, indent, a->spd_id);
    s = format(s, "\n%Unpolicies: %u", format_white_space, indent, a->npolicies);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_spd_dump_t_print (vl_api_ipsec_spd_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_spd_dump_t: */
    s = format(s, "vl_api_ipsec_spd_dump_t:");
    s = format(s, "\n%Uspd_id: %u", format_white_space, indent, a->spd_id);
    s = format(s, "\n%Usa_id: %u", format_white_space, indent, a->sa_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_spd_details_t_print (vl_api_ipsec_spd_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_spd_details_t: */
    s = format(s, "vl_api_ipsec_spd_details_t:");
    s = format(s, "\n%Uentry: %U", format_white_space, indent, format_vl_api_ipsec_spd_entry_t, &a->entry, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_sad_entry_add_del_t_print (vl_api_ipsec_sad_entry_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_sad_entry_add_del_t: */
    s = format(s, "vl_api_ipsec_sad_entry_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uentry: %U", format_white_space, indent, format_vl_api_ipsec_sad_entry_t, &a->entry, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_sad_entry_add_del_reply_t_print (vl_api_ipsec_sad_entry_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_sad_entry_add_del_reply_t: */
    s = format(s, "vl_api_ipsec_sad_entry_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ustat_index: %u", format_white_space, indent, a->stat_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_tunnel_protect_update_t_print (vl_api_ipsec_tunnel_protect_update_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_tunnel_protect_update_t: */
    s = format(s, "vl_api_ipsec_tunnel_protect_update_t:");
    s = format(s, "\n%Utunnel: %U", format_white_space, indent, format_vl_api_ipsec_tunnel_protect_t, &a->tunnel, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_tunnel_protect_update_reply_t_print (vl_api_ipsec_tunnel_protect_update_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_tunnel_protect_update_reply_t: */
    s = format(s, "vl_api_ipsec_tunnel_protect_update_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_tunnel_protect_del_t_print (vl_api_ipsec_tunnel_protect_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_tunnel_protect_del_t: */
    s = format(s, "vl_api_ipsec_tunnel_protect_del_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Unh: %U", format_white_space, indent, format_vl_api_address_t, &a->nh, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_tunnel_protect_del_reply_t_print (vl_api_ipsec_tunnel_protect_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_tunnel_protect_del_reply_t: */
    s = format(s, "vl_api_ipsec_tunnel_protect_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_tunnel_protect_dump_t_print (vl_api_ipsec_tunnel_protect_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_tunnel_protect_dump_t: */
    s = format(s, "vl_api_ipsec_tunnel_protect_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_tunnel_protect_details_t_print (vl_api_ipsec_tunnel_protect_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_tunnel_protect_details_t: */
    s = format(s, "vl_api_ipsec_tunnel_protect_details_t:");
    s = format(s, "\n%Utun: %U", format_white_space, indent, format_vl_api_ipsec_tunnel_protect_t, &a->tun, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_spd_interface_dump_t_print (vl_api_ipsec_spd_interface_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_spd_interface_dump_t: */
    s = format(s, "vl_api_ipsec_spd_interface_dump_t:");
    s = format(s, "\n%Uspd_index: %u", format_white_space, indent, a->spd_index);
    s = format(s, "\n%Uspd_index_valid: %u", format_white_space, indent, a->spd_index_valid);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_spd_interface_details_t_print (vl_api_ipsec_spd_interface_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_spd_interface_details_t: */
    s = format(s, "vl_api_ipsec_spd_interface_details_t:");
    s = format(s, "\n%Uspd_index: %u", format_white_space, indent, a->spd_index);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_tunnel_if_add_del_t_print (vl_api_ipsec_tunnel_if_add_del_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_tunnel_if_add_del_t: */
    s = format(s, "vl_api_ipsec_tunnel_if_add_del_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uesn: %u", format_white_space, indent, a->esn);
    s = format(s, "\n%Uanti_replay: %u", format_white_space, indent, a->anti_replay);
    s = format(s, "\n%Ulocal_ip: %U", format_white_space, indent, format_vl_api_address_t, &a->local_ip, indent);
    s = format(s, "\n%Uremote_ip: %U", format_white_space, indent, format_vl_api_address_t, &a->remote_ip, indent);
    s = format(s, "\n%Ulocal_spi: %u", format_white_space, indent, a->local_spi);
    s = format(s, "\n%Uremote_spi: %u", format_white_space, indent, a->remote_spi);
    s = format(s, "\n%Ucrypto_alg: %u", format_white_space, indent, a->crypto_alg);
    s = format(s, "\n%Ulocal_crypto_key_len: %u", format_white_space, indent, a->local_crypto_key_len);
    s = format(s, "\n%Ulocal_crypto_key: %U", format_white_space, indent, format_hex_bytes, a, 128);
    s = format(s, "\n%Uremote_crypto_key_len: %u", format_white_space, indent, a->remote_crypto_key_len);
    s = format(s, "\n%Uremote_crypto_key: %U", format_white_space, indent, format_hex_bytes, a, 128);
    s = format(s, "\n%Uinteg_alg: %u", format_white_space, indent, a->integ_alg);
    s = format(s, "\n%Ulocal_integ_key_len: %u", format_white_space, indent, a->local_integ_key_len);
    s = format(s, "\n%Ulocal_integ_key: %U", format_white_space, indent, format_hex_bytes, a, 128);
    s = format(s, "\n%Uremote_integ_key_len: %u", format_white_space, indent, a->remote_integ_key_len);
    s = format(s, "\n%Uremote_integ_key: %U", format_white_space, indent, format_hex_bytes, a, 128);
    s = format(s, "\n%Urenumber: %u", format_white_space, indent, a->renumber);
    s = format(s, "\n%Ushow_instance: %u", format_white_space, indent, a->show_instance);
    s = format(s, "\n%Uudp_encap: %u", format_white_space, indent, a->udp_encap);
    s = format(s, "\n%Utx_table_id: %u", format_white_space, indent, a->tx_table_id);
    s = format(s, "\n%Usalt: %u", format_white_space, indent, a->salt);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_tunnel_if_add_del_reply_t_print (vl_api_ipsec_tunnel_if_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_tunnel_if_add_del_reply_t: */
    s = format(s, "vl_api_ipsec_tunnel_if_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_itf_create_t_print (vl_api_ipsec_itf_create_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_itf_create_t: */
    s = format(s, "vl_api_ipsec_itf_create_t:");
    s = format(s, "\n%Uitf: %U", format_white_space, indent, format_vl_api_ipsec_itf_t, &a->itf, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_itf_create_reply_t_print (vl_api_ipsec_itf_create_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_itf_create_reply_t: */
    s = format(s, "vl_api_ipsec_itf_create_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_itf_delete_t_print (vl_api_ipsec_itf_delete_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_itf_delete_t: */
    s = format(s, "vl_api_ipsec_itf_delete_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_itf_delete_reply_t_print (vl_api_ipsec_itf_delete_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_itf_delete_reply_t: */
    s = format(s, "vl_api_ipsec_itf_delete_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_itf_dump_t_print (vl_api_ipsec_itf_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_itf_dump_t: */
    s = format(s, "vl_api_ipsec_itf_dump_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_itf_details_t_print (vl_api_ipsec_itf_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_itf_details_t: */
    s = format(s, "vl_api_ipsec_itf_details_t:");
    s = format(s, "\n%Uitf: %U", format_white_space, indent, format_vl_api_ipsec_itf_t, &a->itf, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_sa_dump_t_print (vl_api_ipsec_sa_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_sa_dump_t: */
    s = format(s, "vl_api_ipsec_sa_dump_t:");
    s = format(s, "\n%Usa_id: %u", format_white_space, indent, a->sa_id);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_sa_details_t_print (vl_api_ipsec_sa_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_sa_details_t: */
    s = format(s, "vl_api_ipsec_sa_details_t:");
    s = format(s, "\n%Uentry: %U", format_white_space, indent, format_vl_api_ipsec_sad_entry_t, &a->entry, indent);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Usalt: %u", format_white_space, indent, a->salt);
    s = format(s, "\n%Useq_outbound: %llu", format_white_space, indent, a->seq_outbound);
    s = format(s, "\n%Ulast_seq_inbound: %llu", format_white_space, indent, a->last_seq_inbound);
    s = format(s, "\n%Ureplay_window: %llu", format_white_space, indent, a->replay_window);
    s = format(s, "\n%Ustat_index: %u", format_white_space, indent, a->stat_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_tunnel_if_set_sa_t_print (vl_api_ipsec_tunnel_if_set_sa_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_tunnel_if_set_sa_t: */
    s = format(s, "vl_api_ipsec_tunnel_if_set_sa_t:");
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Usa_id: %u", format_white_space, indent, a->sa_id);
    s = format(s, "\n%Uis_outbound: %u", format_white_space, indent, a->is_outbound);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_tunnel_if_set_sa_reply_t_print (vl_api_ipsec_tunnel_if_set_sa_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_tunnel_if_set_sa_reply_t: */
    s = format(s, "vl_api_ipsec_tunnel_if_set_sa_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_backend_dump_t_print (vl_api_ipsec_backend_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_backend_dump_t: */
    s = format(s, "vl_api_ipsec_backend_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_backend_details_t_print (vl_api_ipsec_backend_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_backend_details_t: */
    s = format(s, "vl_api_ipsec_backend_details_t:");
    s = format(s, "\n%Uname: %s", format_white_space, indent, a->name);
    s = format(s, "\n%Uprotocol: %U", format_white_space, indent, format_vl_api_ipsec_proto_t, &a->protocol, indent);
    s = format(s, "\n%Uindex: %u", format_white_space, indent, a->index);
    s = format(s, "\n%Uactive: %u", format_white_space, indent, a->active);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_select_backend_t_print (vl_api_ipsec_select_backend_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_select_backend_t: */
    s = format(s, "vl_api_ipsec_select_backend_t:");
    s = format(s, "\n%Uprotocol: %U", format_white_space, indent, format_vl_api_ipsec_proto_t, &a->protocol, indent);
    s = format(s, "\n%Uindex: %u", format_white_space, indent, a->index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_ipsec_select_backend_reply_t_print (vl_api_ipsec_select_backend_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_ipsec_select_backend_reply_t: */
    s = format(s, "vl_api_ipsec_select_backend_reply_t:");
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
#ifndef included_ipsec_endianfun
#define included_ipsec_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_ipsec_spd_action_t_endian (vl_api_ipsec_spd_action_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_ipsec_spd_entry_t_endian (vl_api_ipsec_spd_entry_t *a)
{
    int i __attribute__((unused));
    a->spd_id = clib_net_to_host_u32(a->spd_id);
    a->priority = clib_net_to_host_i32(a->priority);
    /* a->is_outbound = a->is_outbound (no-op) */
    a->sa_id = clib_net_to_host_u32(a->sa_id);
    vl_api_ipsec_spd_action_t_endian(&a->policy);
    /* a->protocol = a->protocol (no-op) */
    vl_api_address_t_endian(&a->remote_address_start);
    vl_api_address_t_endian(&a->remote_address_stop);
    vl_api_address_t_endian(&a->local_address_start);
    vl_api_address_t_endian(&a->local_address_stop);
    a->remote_port_start = clib_net_to_host_u16(a->remote_port_start);
    a->remote_port_stop = clib_net_to_host_u16(a->remote_port_stop);
    a->local_port_start = clib_net_to_host_u16(a->local_port_start);
    a->local_port_stop = clib_net_to_host_u16(a->local_port_stop);
}

static inline void vl_api_ipsec_tunnel_protect_t_endian (vl_api_ipsec_tunnel_protect_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_address_t_endian(&a->nh);
    a->sa_out = clib_net_to_host_u32(a->sa_out);
    /* a->n_sa_in = a->n_sa_in (no-op) */
    for (i = 0; i < a->n_sa_in; i++) {
        a->sa_in[i] = clib_net_to_host_u32(a->sa_in[i]);
    }
}

static inline void vl_api_ipsec_itf_t_endian (vl_api_ipsec_itf_t *a)
{
    int i __attribute__((unused));
    a->user_instance = clib_net_to_host_u32(a->user_instance);
    vl_api_tunnel_mode_t_endian(&a->mode);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ipsec_spd_add_del_t_endian (vl_api_ipsec_spd_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->spd_id = clib_net_to_host_u32(a->spd_id);
}

static inline void vl_api_ipsec_spd_add_del_reply_t_endian (vl_api_ipsec_spd_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ipsec_interface_add_del_spd_t_endian (vl_api_ipsec_interface_add_del_spd_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->spd_id = clib_net_to_host_u32(a->spd_id);
}

static inline void vl_api_ipsec_interface_add_del_spd_reply_t_endian (vl_api_ipsec_interface_add_del_spd_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ipsec_spd_entry_add_del_t_endian (vl_api_ipsec_spd_entry_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_ipsec_spd_entry_t_endian(&a->entry);
}

static inline void vl_api_ipsec_spd_entry_add_del_reply_t_endian (vl_api_ipsec_spd_entry_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->stat_index = clib_net_to_host_u32(a->stat_index);
}

static inline void vl_api_ipsec_spds_dump_t_endian (vl_api_ipsec_spds_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ipsec_spds_details_t_endian (vl_api_ipsec_spds_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->spd_id = clib_net_to_host_u32(a->spd_id);
    a->npolicies = clib_net_to_host_u32(a->npolicies);
}

static inline void vl_api_ipsec_spd_dump_t_endian (vl_api_ipsec_spd_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->spd_id = clib_net_to_host_u32(a->spd_id);
    a->sa_id = clib_net_to_host_u32(a->sa_id);
}

static inline void vl_api_ipsec_spd_details_t_endian (vl_api_ipsec_spd_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ipsec_spd_entry_t_endian(&a->entry);
}

static inline void vl_api_ipsec_sad_entry_add_del_t_endian (vl_api_ipsec_sad_entry_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_ipsec_sad_entry_t_endian(&a->entry);
}

static inline void vl_api_ipsec_sad_entry_add_del_reply_t_endian (vl_api_ipsec_sad_entry_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->stat_index = clib_net_to_host_u32(a->stat_index);
}

static inline void vl_api_ipsec_tunnel_protect_update_t_endian (vl_api_ipsec_tunnel_protect_update_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ipsec_tunnel_protect_t_endian(&a->tunnel);
}

static inline void vl_api_ipsec_tunnel_protect_update_reply_t_endian (vl_api_ipsec_tunnel_protect_update_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ipsec_tunnel_protect_del_t_endian (vl_api_ipsec_tunnel_protect_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    vl_api_address_t_endian(&a->nh);
}

static inline void vl_api_ipsec_tunnel_protect_del_reply_t_endian (vl_api_ipsec_tunnel_protect_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ipsec_tunnel_protect_dump_t_endian (vl_api_ipsec_tunnel_protect_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ipsec_tunnel_protect_details_t_endian (vl_api_ipsec_tunnel_protect_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ipsec_tunnel_protect_t_endian(&a->tun);
}

static inline void vl_api_ipsec_spd_interface_dump_t_endian (vl_api_ipsec_spd_interface_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->spd_index = clib_net_to_host_u32(a->spd_index);
    /* a->spd_index_valid = a->spd_index_valid (no-op) */
}

static inline void vl_api_ipsec_spd_interface_details_t_endian (vl_api_ipsec_spd_interface_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->spd_index = clib_net_to_host_u32(a->spd_index);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ipsec_tunnel_if_add_del_t_endian (vl_api_ipsec_tunnel_if_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->esn = a->esn (no-op) */
    /* a->anti_replay = a->anti_replay (no-op) */
    vl_api_address_t_endian(&a->local_ip);
    vl_api_address_t_endian(&a->remote_ip);
    a->local_spi = clib_net_to_host_u32(a->local_spi);
    a->remote_spi = clib_net_to_host_u32(a->remote_spi);
    /* a->crypto_alg = a->crypto_alg (no-op) */
    /* a->local_crypto_key_len = a->local_crypto_key_len (no-op) */
    /* a->local_crypto_key = a->local_crypto_key (no-op) */
    /* a->remote_crypto_key_len = a->remote_crypto_key_len (no-op) */
    /* a->remote_crypto_key = a->remote_crypto_key (no-op) */
    /* a->integ_alg = a->integ_alg (no-op) */
    /* a->local_integ_key_len = a->local_integ_key_len (no-op) */
    /* a->local_integ_key = a->local_integ_key (no-op) */
    /* a->remote_integ_key_len = a->remote_integ_key_len (no-op) */
    /* a->remote_integ_key = a->remote_integ_key (no-op) */
    /* a->renumber = a->renumber (no-op) */
    a->show_instance = clib_net_to_host_u32(a->show_instance);
    /* a->udp_encap = a->udp_encap (no-op) */
    a->tx_table_id = clib_net_to_host_u32(a->tx_table_id);
    a->salt = clib_net_to_host_u32(a->salt);
}

static inline void vl_api_ipsec_tunnel_if_add_del_reply_t_endian (vl_api_ipsec_tunnel_if_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ipsec_itf_create_t_endian (vl_api_ipsec_itf_create_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ipsec_itf_t_endian(&a->itf);
}

static inline void vl_api_ipsec_itf_create_reply_t_endian (vl_api_ipsec_itf_create_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ipsec_itf_delete_t_endian (vl_api_ipsec_itf_delete_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ipsec_itf_delete_reply_t_endian (vl_api_ipsec_itf_delete_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ipsec_itf_dump_t_endian (vl_api_ipsec_itf_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_ipsec_itf_details_t_endian (vl_api_ipsec_itf_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ipsec_itf_t_endian(&a->itf);
}

static inline void vl_api_ipsec_sa_dump_t_endian (vl_api_ipsec_sa_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->sa_id = clib_net_to_host_u32(a->sa_id);
}

static inline void vl_api_ipsec_sa_details_t_endian (vl_api_ipsec_sa_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ipsec_sad_entry_t_endian(&a->entry);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->salt = clib_net_to_host_u32(a->salt);
    a->seq_outbound = clib_net_to_host_u64(a->seq_outbound);
    a->last_seq_inbound = clib_net_to_host_u64(a->last_seq_inbound);
    a->replay_window = clib_net_to_host_u64(a->replay_window);
    a->stat_index = clib_net_to_host_u32(a->stat_index);
}

static inline void vl_api_ipsec_tunnel_if_set_sa_t_endian (vl_api_ipsec_tunnel_if_set_sa_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->sa_id = clib_net_to_host_u32(a->sa_id);
    /* a->is_outbound = a->is_outbound (no-op) */
}

static inline void vl_api_ipsec_tunnel_if_set_sa_reply_t_endian (vl_api_ipsec_tunnel_if_set_sa_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_ipsec_backend_dump_t_endian (vl_api_ipsec_backend_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_ipsec_backend_details_t_endian (vl_api_ipsec_backend_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->name = a->name (no-op) */
    vl_api_ipsec_proto_t_endian(&a->protocol);
    /* a->index = a->index (no-op) */
    /* a->active = a->active (no-op) */
}

static inline void vl_api_ipsec_select_backend_t_endian (vl_api_ipsec_select_backend_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_ipsec_proto_t_endian(&a->protocol);
    /* a->index = a->index (no-op) */
}

static inline void vl_api_ipsec_select_backend_reply_t_endian (vl_api_ipsec_select_backend_reply_t *a)
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

vl_api_version_tuple(ipsec.api, 3, 0, 2)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ipsec.api, 0x4423b2ac)

#endif

