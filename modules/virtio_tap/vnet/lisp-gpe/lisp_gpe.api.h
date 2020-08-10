/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: lisp_gpe.api
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
#warning no content included from lisp_gpe.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/lisp-cp/lisp_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_GPE_ADD_DEL_FWD_ENTRY, vl_api_gpe_add_del_fwd_entry_t_handler)
vl_msg_id(VL_API_GPE_ADD_DEL_FWD_ENTRY_REPLY, vl_api_gpe_add_del_fwd_entry_reply_t_handler)
vl_msg_id(VL_API_GPE_ENABLE_DISABLE, vl_api_gpe_enable_disable_t_handler)
vl_msg_id(VL_API_GPE_ENABLE_DISABLE_REPLY, vl_api_gpe_enable_disable_reply_t_handler)
vl_msg_id(VL_API_GPE_ADD_DEL_IFACE, vl_api_gpe_add_del_iface_t_handler)
vl_msg_id(VL_API_GPE_ADD_DEL_IFACE_REPLY, vl_api_gpe_add_del_iface_reply_t_handler)
vl_msg_id(VL_API_GPE_FWD_ENTRY_VNIS_GET, vl_api_gpe_fwd_entry_vnis_get_t_handler)
vl_msg_id(VL_API_GPE_FWD_ENTRY_VNIS_GET_REPLY, vl_api_gpe_fwd_entry_vnis_get_reply_t_handler)
vl_msg_id(VL_API_GPE_FWD_ENTRIES_GET, vl_api_gpe_fwd_entries_get_t_handler)
vl_msg_id(VL_API_GPE_FWD_ENTRIES_GET_REPLY, vl_api_gpe_fwd_entries_get_reply_t_handler)
vl_msg_id(VL_API_GPE_FWD_ENTRY_PATH_DUMP, vl_api_gpe_fwd_entry_path_dump_t_handler)
vl_msg_id(VL_API_GPE_FWD_ENTRY_PATH_DETAILS, vl_api_gpe_fwd_entry_path_details_t_handler)
vl_msg_id(VL_API_GPE_SET_ENCAP_MODE, vl_api_gpe_set_encap_mode_t_handler)
vl_msg_id(VL_API_GPE_SET_ENCAP_MODE_REPLY, vl_api_gpe_set_encap_mode_reply_t_handler)
vl_msg_id(VL_API_GPE_GET_ENCAP_MODE, vl_api_gpe_get_encap_mode_t_handler)
vl_msg_id(VL_API_GPE_GET_ENCAP_MODE_REPLY, vl_api_gpe_get_encap_mode_reply_t_handler)
vl_msg_id(VL_API_GPE_ADD_DEL_NATIVE_FWD_RPATH, vl_api_gpe_add_del_native_fwd_rpath_t_handler)
vl_msg_id(VL_API_GPE_ADD_DEL_NATIVE_FWD_RPATH_REPLY, vl_api_gpe_add_del_native_fwd_rpath_reply_t_handler)
vl_msg_id(VL_API_GPE_NATIVE_FWD_RPATHS_GET, vl_api_gpe_native_fwd_rpaths_get_t_handler)
vl_msg_id(VL_API_GPE_NATIVE_FWD_RPATHS_GET_REPLY, vl_api_gpe_native_fwd_rpaths_get_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_gpe_add_del_fwd_entry_t, 1)
vl_msg_name(vl_api_gpe_add_del_fwd_entry_reply_t, 1)
vl_msg_name(vl_api_gpe_enable_disable_t, 1)
vl_msg_name(vl_api_gpe_enable_disable_reply_t, 1)
vl_msg_name(vl_api_gpe_add_del_iface_t, 1)
vl_msg_name(vl_api_gpe_add_del_iface_reply_t, 1)
vl_msg_name(vl_api_gpe_fwd_entry_vnis_get_t, 1)
vl_msg_name(vl_api_gpe_fwd_entry_vnis_get_reply_t, 1)
vl_msg_name(vl_api_gpe_fwd_entries_get_t, 1)
vl_msg_name(vl_api_gpe_fwd_entries_get_reply_t, 1)
vl_msg_name(vl_api_gpe_fwd_entry_path_dump_t, 1)
vl_msg_name(vl_api_gpe_fwd_entry_path_details_t, 1)
vl_msg_name(vl_api_gpe_set_encap_mode_t, 1)
vl_msg_name(vl_api_gpe_set_encap_mode_reply_t, 1)
vl_msg_name(vl_api_gpe_get_encap_mode_t, 1)
vl_msg_name(vl_api_gpe_get_encap_mode_reply_t, 1)
vl_msg_name(vl_api_gpe_add_del_native_fwd_rpath_t, 1)
vl_msg_name(vl_api_gpe_add_del_native_fwd_rpath_reply_t, 1)
vl_msg_name(vl_api_gpe_native_fwd_rpaths_get_t, 1)
vl_msg_name(vl_api_gpe_native_fwd_rpaths_get_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_lisp_gpe \
_(VL_API_GPE_ADD_DEL_FWD_ENTRY, gpe_add_del_fwd_entry, de6df50f) \
_(VL_API_GPE_ADD_DEL_FWD_ENTRY_REPLY, gpe_add_del_fwd_entry_reply, efe5f176) \
_(VL_API_GPE_ENABLE_DISABLE, gpe_enable_disable, c264d7bf) \
_(VL_API_GPE_ENABLE_DISABLE_REPLY, gpe_enable_disable_reply, e8d4e804) \
_(VL_API_GPE_ADD_DEL_IFACE, gpe_add_del_iface, 3ccff273) \
_(VL_API_GPE_ADD_DEL_IFACE_REPLY, gpe_add_del_iface_reply, e8d4e804) \
_(VL_API_GPE_FWD_ENTRY_VNIS_GET, gpe_fwd_entry_vnis_get, 51077d14) \
_(VL_API_GPE_FWD_ENTRY_VNIS_GET_REPLY, gpe_fwd_entry_vnis_get_reply, aa70da20) \
_(VL_API_GPE_FWD_ENTRIES_GET, gpe_fwd_entries_get, 8d1f2fe9) \
_(VL_API_GPE_FWD_ENTRIES_GET_REPLY, gpe_fwd_entries_get_reply, f9f53f1b) \
_(VL_API_GPE_FWD_ENTRY_PATH_DUMP, gpe_fwd_entry_path_dump, 39bce980) \
_(VL_API_GPE_FWD_ENTRY_PATH_DETAILS, gpe_fwd_entry_path_details, ee80b19a) \
_(VL_API_GPE_SET_ENCAP_MODE, gpe_set_encap_mode, bd819eac) \
_(VL_API_GPE_SET_ENCAP_MODE_REPLY, gpe_set_encap_mode_reply, e8d4e804) \
_(VL_API_GPE_GET_ENCAP_MODE, gpe_get_encap_mode, 51077d14) \
_(VL_API_GPE_GET_ENCAP_MODE_REPLY, gpe_get_encap_mode_reply, 36e3f7ca) \
_(VL_API_GPE_ADD_DEL_NATIVE_FWD_RPATH, gpe_add_del_native_fwd_rpath, 812da2f2) \
_(VL_API_GPE_ADD_DEL_NATIVE_FWD_RPATH_REPLY, gpe_add_del_native_fwd_rpath_reply, e8d4e804) \
_(VL_API_GPE_NATIVE_FWD_RPATHS_GET, gpe_native_fwd_rpaths_get, f652ceb4) \
_(VL_API_GPE_NATIVE_FWD_RPATHS_GET_REPLY, gpe_native_fwd_rpaths_get_reply, 79d54eb9) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "lisp_gpe.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_lisp_gpe_printfun_types
#define included_lisp_gpe_printfun_types

static inline u8 *format_vl_api_gpe_locator_t (u8 *s, va_list * args)
{
    vl_api_gpe_locator_t *a = va_arg (*args, vl_api_gpe_locator_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uweight: %u", format_white_space, indent, a->weight);
    s = format(s, "\n%Uaddr: %U", format_white_space, indent, format_vl_api_address_t, &a->addr, indent);
    return s;
}

static inline u8 *format_vl_api_gpe_fwd_entry_t (u8 *s, va_list * args)
{
    vl_api_gpe_fwd_entry_t *a = va_arg (*args, vl_api_gpe_fwd_entry_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ufwd_entry_index: %u", format_white_space, indent, a->fwd_entry_index);
    s = format(s, "\n%Udp_table: %u", format_white_space, indent, a->dp_table);
    s = format(s, "\n%Uleid: %U", format_white_space, indent, format_vl_api_eid_t, &a->leid, indent);
    s = format(s, "\n%Ureid: %U", format_white_space, indent, format_vl_api_eid_t, &a->reid, indent);
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Uaction: %u", format_white_space, indent, a->action);
    return s;
}

static inline u8 *format_vl_api_gpe_native_fwd_rpath_t (u8 *s, va_list * args)
{
    vl_api_gpe_native_fwd_rpath_t *a = va_arg (*args, vl_api_gpe_native_fwd_rpath_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ufib_index: %u", format_white_space, indent, a->fib_index);
    s = format(s, "\n%Unh_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->nh_sw_if_index, indent);
    s = format(s, "\n%Unh_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->nh_addr, indent);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_lisp_gpe_printfun
#define included_lisp_gpe_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

/***** manual: vl_api_gpe_add_del_fwd_entry_t_print  *****/

static inline void *vl_api_gpe_add_del_fwd_entry_reply_t_print (vl_api_gpe_add_del_fwd_entry_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_add_del_fwd_entry_reply_t: */
    s = format(s, "vl_api_gpe_add_del_fwd_entry_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ufwd_entry_index: %u", format_white_space, indent, a->fwd_entry_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gpe_enable_disable_t_print (vl_api_gpe_enable_disable_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_enable_disable_t: */
    s = format(s, "vl_api_gpe_enable_disable_t:");
    s = format(s, "\n%Uis_enable: %u", format_white_space, indent, a->is_enable);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gpe_enable_disable_reply_t_print (vl_api_gpe_enable_disable_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_enable_disable_reply_t: */
    s = format(s, "vl_api_gpe_enable_disable_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gpe_add_del_iface_t_print (vl_api_gpe_add_del_iface_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_add_del_iface_t: */
    s = format(s, "vl_api_gpe_add_del_iface_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Uis_l2: %u", format_white_space, indent, a->is_l2);
    s = format(s, "\n%Udp_table: %u", format_white_space, indent, a->dp_table);
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gpe_add_del_iface_reply_t_print (vl_api_gpe_add_del_iface_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_add_del_iface_reply_t: */
    s = format(s, "vl_api_gpe_add_del_iface_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gpe_fwd_entry_vnis_get_t_print (vl_api_gpe_fwd_entry_vnis_get_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_fwd_entry_vnis_get_t: */
    s = format(s, "vl_api_gpe_fwd_entry_vnis_get_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gpe_fwd_entry_vnis_get_reply_t_print  *****/

static inline void *vl_api_gpe_fwd_entries_get_t_print (vl_api_gpe_fwd_entries_get_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_fwd_entries_get_t: */
    s = format(s, "vl_api_gpe_fwd_entries_get_t:");
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gpe_fwd_entries_get_reply_t_print  *****/

static inline void *vl_api_gpe_fwd_entry_path_dump_t_print (vl_api_gpe_fwd_entry_path_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_fwd_entry_path_dump_t: */
    s = format(s, "vl_api_gpe_fwd_entry_path_dump_t:");
    s = format(s, "\n%Ufwd_entry_index: %u", format_white_space, indent, a->fwd_entry_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gpe_fwd_entry_path_details_t_print  *****/

static inline void *vl_api_gpe_set_encap_mode_t_print (vl_api_gpe_set_encap_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_set_encap_mode_t: */
    s = format(s, "vl_api_gpe_set_encap_mode_t:");
    s = format(s, "\n%Uis_vxlan: %u", format_white_space, indent, a->is_vxlan);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gpe_set_encap_mode_reply_t_print (vl_api_gpe_set_encap_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_set_encap_mode_reply_t: */
    s = format(s, "vl_api_gpe_set_encap_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gpe_get_encap_mode_t_print (vl_api_gpe_get_encap_mode_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_get_encap_mode_t: */
    s = format(s, "vl_api_gpe_get_encap_mode_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gpe_get_encap_mode_reply_t_print (vl_api_gpe_get_encap_mode_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_get_encap_mode_reply_t: */
    s = format(s, "vl_api_gpe_get_encap_mode_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uencap_mode: %u", format_white_space, indent, a->encap_mode);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gpe_add_del_native_fwd_rpath_t_print (vl_api_gpe_add_del_native_fwd_rpath_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_add_del_native_fwd_rpath_t: */
    s = format(s, "vl_api_gpe_add_del_native_fwd_rpath_t:");
    s = format(s, "\n%Uis_add: %u", format_white_space, indent, a->is_add);
    s = format(s, "\n%Utable_id: %u", format_white_space, indent, a->table_id);
    s = format(s, "\n%Unh_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->nh_sw_if_index, indent);
    s = format(s, "\n%Unh_addr: %U", format_white_space, indent, format_vl_api_address_t, &a->nh_addr, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gpe_add_del_native_fwd_rpath_reply_t_print (vl_api_gpe_add_del_native_fwd_rpath_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_add_del_native_fwd_rpath_reply_t: */
    s = format(s, "vl_api_gpe_add_del_native_fwd_rpath_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gpe_native_fwd_rpaths_get_t_print (vl_api_gpe_native_fwd_rpaths_get_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gpe_native_fwd_rpaths_get_t: */
    s = format(s, "vl_api_gpe_native_fwd_rpaths_get_t:");
    s = format(s, "\n%Uis_ip4: %u", format_white_space, indent, a->is_ip4);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gpe_native_fwd_rpaths_get_reply_t_print  *****/


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_lisp_gpe_endianfun
#define included_lisp_gpe_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_gpe_locator_t_endian (vl_api_gpe_locator_t *a)
{
    int i __attribute__((unused));
    /* a->weight = a->weight (no-op) */
    vl_api_address_t_endian(&a->addr);
}

static inline void vl_api_gpe_fwd_entry_t_endian (vl_api_gpe_fwd_entry_t *a)
{
    int i __attribute__((unused));
    a->fwd_entry_index = clib_net_to_host_u32(a->fwd_entry_index);
    a->dp_table = clib_net_to_host_u32(a->dp_table);
    vl_api_eid_t_endian(&a->leid);
    vl_api_eid_t_endian(&a->reid);
    a->vni = clib_net_to_host_u32(a->vni);
    /* a->action = a->action (no-op) */
}

static inline void vl_api_gpe_native_fwd_rpath_t_endian (vl_api_gpe_native_fwd_rpath_t *a)
{
    int i __attribute__((unused));
    a->fib_index = clib_net_to_host_u32(a->fib_index);
    vl_api_interface_index_t_endian(&a->nh_sw_if_index);
    vl_api_address_t_endian(&a->nh_addr);
}

/***** manual: vl_api_gpe_add_del_fwd_entry_t_endian  *****/

static inline void vl_api_gpe_add_del_fwd_entry_reply_t_endian (vl_api_gpe_add_del_fwd_entry_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->fwd_entry_index = clib_net_to_host_u32(a->fwd_entry_index);
}

static inline void vl_api_gpe_enable_disable_t_endian (vl_api_gpe_enable_disable_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

static inline void vl_api_gpe_enable_disable_reply_t_endian (vl_api_gpe_enable_disable_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gpe_add_del_iface_t_endian (vl_api_gpe_add_del_iface_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_l2 = a->is_l2 (no-op) */
    a->dp_table = clib_net_to_host_u32(a->dp_table);
    a->vni = clib_net_to_host_u32(a->vni);
}

static inline void vl_api_gpe_add_del_iface_reply_t_endian (vl_api_gpe_add_del_iface_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gpe_fwd_entry_vnis_get_t_endian (vl_api_gpe_fwd_entry_vnis_get_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

/***** manual: vl_api_gpe_fwd_entry_vnis_get_reply_t_endian  *****/

static inline void vl_api_gpe_fwd_entries_get_t_endian (vl_api_gpe_fwd_entries_get_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
}

/***** manual: vl_api_gpe_fwd_entries_get_reply_t_endian  *****/

static inline void vl_api_gpe_fwd_entry_path_dump_t_endian (vl_api_gpe_fwd_entry_path_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->fwd_entry_index = clib_net_to_host_u32(a->fwd_entry_index);
}

/***** manual: vl_api_gpe_fwd_entry_path_details_t_endian  *****/

static inline void vl_api_gpe_set_encap_mode_t_endian (vl_api_gpe_set_encap_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_vxlan = a->is_vxlan (no-op) */
}

static inline void vl_api_gpe_set_encap_mode_reply_t_endian (vl_api_gpe_set_encap_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gpe_get_encap_mode_t_endian (vl_api_gpe_get_encap_mode_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_gpe_get_encap_mode_reply_t_endian (vl_api_gpe_get_encap_mode_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    /* a->encap_mode = a->encap_mode (no-op) */
}

static inline void vl_api_gpe_add_del_native_fwd_rpath_t_endian (vl_api_gpe_add_del_native_fwd_rpath_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->table_id = clib_net_to_host_u32(a->table_id);
    vl_api_interface_index_t_endian(&a->nh_sw_if_index);
    vl_api_address_t_endian(&a->nh_addr);
}

static inline void vl_api_gpe_add_del_native_fwd_rpath_reply_t_endian (vl_api_gpe_add_del_native_fwd_rpath_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gpe_native_fwd_rpaths_get_t_endian (vl_api_gpe_native_fwd_rpaths_get_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip4 = a->is_ip4 (no-op) */
}

/***** manual: vl_api_gpe_native_fwd_rpaths_get_reply_t_endian  *****/


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(lisp_gpe.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(lisp_gpe.api, 0x29addfc9)

#endif

