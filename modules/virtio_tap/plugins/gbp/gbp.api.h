/*
 * VLIB API definitions 2020-07-24 16:28:53
 * Input file: gbp.api
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
#warning no content included from gbp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/ip/ip_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#include <vnet/interface_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_ADD, vl_api_gbp_bridge_domain_add_t_handler)
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_ADD_REPLY, vl_api_gbp_bridge_domain_add_reply_t_handler)
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_DEL, vl_api_gbp_bridge_domain_del_t_handler)
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_DEL_REPLY, vl_api_gbp_bridge_domain_del_reply_t_handler)
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_DUMP, vl_api_gbp_bridge_domain_dump_t_handler)
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_DUMP_REPLY, vl_api_gbp_bridge_domain_dump_reply_t_handler)
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_DETAILS, vl_api_gbp_bridge_domain_details_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_ADD, vl_api_gbp_route_domain_add_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_ADD_REPLY, vl_api_gbp_route_domain_add_reply_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_DEL, vl_api_gbp_route_domain_del_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_DEL_REPLY, vl_api_gbp_route_domain_del_reply_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_DUMP, vl_api_gbp_route_domain_dump_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_DUMP_REPLY, vl_api_gbp_route_domain_dump_reply_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_DETAILS, vl_api_gbp_route_domain_details_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_ADD, vl_api_gbp_endpoint_add_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_ADD_REPLY, vl_api_gbp_endpoint_add_reply_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_DEL, vl_api_gbp_endpoint_del_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_DEL_REPLY, vl_api_gbp_endpoint_del_reply_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_DUMP, vl_api_gbp_endpoint_dump_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_DETAILS, vl_api_gbp_endpoint_details_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_GROUP_ADD, vl_api_gbp_endpoint_group_add_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_GROUP_ADD_REPLY, vl_api_gbp_endpoint_group_add_reply_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_GROUP_DEL, vl_api_gbp_endpoint_group_del_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_GROUP_DEL_REPLY, vl_api_gbp_endpoint_group_del_reply_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_GROUP_DUMP, vl_api_gbp_endpoint_group_dump_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_GROUP_DETAILS, vl_api_gbp_endpoint_group_details_t_handler)
vl_msg_id(VL_API_GBP_RECIRC_ADD_DEL, vl_api_gbp_recirc_add_del_t_handler)
vl_msg_id(VL_API_GBP_RECIRC_ADD_DEL_REPLY, vl_api_gbp_recirc_add_del_reply_t_handler)
vl_msg_id(VL_API_GBP_RECIRC_DUMP, vl_api_gbp_recirc_dump_t_handler)
vl_msg_id(VL_API_GBP_RECIRC_DETAILS, vl_api_gbp_recirc_details_t_handler)
vl_msg_id(VL_API_GBP_SUBNET_ADD_DEL, vl_api_gbp_subnet_add_del_t_handler)
vl_msg_id(VL_API_GBP_SUBNET_ADD_DEL_REPLY, vl_api_gbp_subnet_add_del_reply_t_handler)
vl_msg_id(VL_API_GBP_SUBNET_DUMP, vl_api_gbp_subnet_dump_t_handler)
vl_msg_id(VL_API_GBP_SUBNET_DETAILS, vl_api_gbp_subnet_details_t_handler)
vl_msg_id(VL_API_GBP_CONTRACT_ADD_DEL, vl_api_gbp_contract_add_del_t_handler)
vl_msg_id(VL_API_GBP_CONTRACT_ADD_DEL_REPLY, vl_api_gbp_contract_add_del_reply_t_handler)
vl_msg_id(VL_API_GBP_CONTRACT_DUMP, vl_api_gbp_contract_dump_t_handler)
vl_msg_id(VL_API_GBP_CONTRACT_DETAILS, vl_api_gbp_contract_details_t_handler)
vl_msg_id(VL_API_GBP_VXLAN_TUNNEL_ADD, vl_api_gbp_vxlan_tunnel_add_t_handler)
vl_msg_id(VL_API_GBP_VXLAN_TUNNEL_ADD_REPLY, vl_api_gbp_vxlan_tunnel_add_reply_t_handler)
vl_msg_id(VL_API_GBP_VXLAN_TUNNEL_DEL, vl_api_gbp_vxlan_tunnel_del_t_handler)
vl_msg_id(VL_API_GBP_VXLAN_TUNNEL_DEL_REPLY, vl_api_gbp_vxlan_tunnel_del_reply_t_handler)
vl_msg_id(VL_API_GBP_VXLAN_TUNNEL_DUMP, vl_api_gbp_vxlan_tunnel_dump_t_handler)
vl_msg_id(VL_API_GBP_VXLAN_TUNNEL_DETAILS, vl_api_gbp_vxlan_tunnel_details_t_handler)
vl_msg_id(VL_API_GBP_EXT_ITF_ADD_DEL, vl_api_gbp_ext_itf_add_del_t_handler)
vl_msg_id(VL_API_GBP_EXT_ITF_ADD_DEL_REPLY, vl_api_gbp_ext_itf_add_del_reply_t_handler)
vl_msg_id(VL_API_GBP_EXT_ITF_DUMP, vl_api_gbp_ext_itf_dump_t_handler)
vl_msg_id(VL_API_GBP_EXT_ITF_DETAILS, vl_api_gbp_ext_itf_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_gbp_bridge_domain_add_t, 1)
vl_msg_name(vl_api_gbp_bridge_domain_add_reply_t, 1)
vl_msg_name(vl_api_gbp_bridge_domain_del_t, 1)
vl_msg_name(vl_api_gbp_bridge_domain_del_reply_t, 1)
vl_msg_name(vl_api_gbp_bridge_domain_dump_t, 1)
vl_msg_name(vl_api_gbp_bridge_domain_dump_reply_t, 1)
vl_msg_name(vl_api_gbp_bridge_domain_details_t, 1)
vl_msg_name(vl_api_gbp_route_domain_add_t, 1)
vl_msg_name(vl_api_gbp_route_domain_add_reply_t, 1)
vl_msg_name(vl_api_gbp_route_domain_del_t, 1)
vl_msg_name(vl_api_gbp_route_domain_del_reply_t, 1)
vl_msg_name(vl_api_gbp_route_domain_dump_t, 1)
vl_msg_name(vl_api_gbp_route_domain_dump_reply_t, 1)
vl_msg_name(vl_api_gbp_route_domain_details_t, 1)
vl_msg_name(vl_api_gbp_endpoint_add_t, 1)
vl_msg_name(vl_api_gbp_endpoint_add_reply_t, 1)
vl_msg_name(vl_api_gbp_endpoint_del_t, 1)
vl_msg_name(vl_api_gbp_endpoint_del_reply_t, 1)
vl_msg_name(vl_api_gbp_endpoint_dump_t, 1)
vl_msg_name(vl_api_gbp_endpoint_details_t, 1)
vl_msg_name(vl_api_gbp_endpoint_group_add_t, 1)
vl_msg_name(vl_api_gbp_endpoint_group_add_reply_t, 1)
vl_msg_name(vl_api_gbp_endpoint_group_del_t, 1)
vl_msg_name(vl_api_gbp_endpoint_group_del_reply_t, 1)
vl_msg_name(vl_api_gbp_endpoint_group_dump_t, 1)
vl_msg_name(vl_api_gbp_endpoint_group_details_t, 1)
vl_msg_name(vl_api_gbp_recirc_add_del_t, 1)
vl_msg_name(vl_api_gbp_recirc_add_del_reply_t, 1)
vl_msg_name(vl_api_gbp_recirc_dump_t, 1)
vl_msg_name(vl_api_gbp_recirc_details_t, 1)
vl_msg_name(vl_api_gbp_subnet_add_del_t, 1)
vl_msg_name(vl_api_gbp_subnet_add_del_reply_t, 1)
vl_msg_name(vl_api_gbp_subnet_dump_t, 1)
vl_msg_name(vl_api_gbp_subnet_details_t, 1)
vl_msg_name(vl_api_gbp_contract_add_del_t, 1)
vl_msg_name(vl_api_gbp_contract_add_del_reply_t, 1)
vl_msg_name(vl_api_gbp_contract_dump_t, 1)
vl_msg_name(vl_api_gbp_contract_details_t, 1)
vl_msg_name(vl_api_gbp_vxlan_tunnel_add_t, 1)
vl_msg_name(vl_api_gbp_vxlan_tunnel_add_reply_t, 1)
vl_msg_name(vl_api_gbp_vxlan_tunnel_del_t, 1)
vl_msg_name(vl_api_gbp_vxlan_tunnel_del_reply_t, 1)
vl_msg_name(vl_api_gbp_vxlan_tunnel_dump_t, 1)
vl_msg_name(vl_api_gbp_vxlan_tunnel_details_t, 1)
vl_msg_name(vl_api_gbp_ext_itf_add_del_t, 1)
vl_msg_name(vl_api_gbp_ext_itf_add_del_reply_t, 1)
vl_msg_name(vl_api_gbp_ext_itf_dump_t, 1)
vl_msg_name(vl_api_gbp_ext_itf_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_gbp \
_(VL_API_GBP_BRIDGE_DOMAIN_ADD, gbp_bridge_domain_add, 8454bfdf) \
_(VL_API_GBP_BRIDGE_DOMAIN_ADD_REPLY, gbp_bridge_domain_add_reply, e8d4e804) \
_(VL_API_GBP_BRIDGE_DOMAIN_DEL, gbp_bridge_domain_del, c25fdce6) \
_(VL_API_GBP_BRIDGE_DOMAIN_DEL_REPLY, gbp_bridge_domain_del_reply, e8d4e804) \
_(VL_API_GBP_BRIDGE_DOMAIN_DUMP, gbp_bridge_domain_dump, 51077d14) \
_(VL_API_GBP_BRIDGE_DOMAIN_DUMP_REPLY, gbp_bridge_domain_dump_reply, e8d4e804) \
_(VL_API_GBP_BRIDGE_DOMAIN_DETAILS, gbp_bridge_domain_details, 2acd15f9) \
_(VL_API_GBP_ROUTE_DOMAIN_ADD, gbp_route_domain_add, 2d0afe38) \
_(VL_API_GBP_ROUTE_DOMAIN_ADD_REPLY, gbp_route_domain_add_reply, e8d4e804) \
_(VL_API_GBP_ROUTE_DOMAIN_DEL, gbp_route_domain_del, bee4edcd) \
_(VL_API_GBP_ROUTE_DOMAIN_DEL_REPLY, gbp_route_domain_del_reply, e8d4e804) \
_(VL_API_GBP_ROUTE_DOMAIN_DUMP, gbp_route_domain_dump, 51077d14) \
_(VL_API_GBP_ROUTE_DOMAIN_DUMP_REPLY, gbp_route_domain_dump_reply, e8d4e804) \
_(VL_API_GBP_ROUTE_DOMAIN_DETAILS, gbp_route_domain_details, 8ab11375) \
_(VL_API_GBP_ENDPOINT_ADD, gbp_endpoint_add, 9ce16d5a) \
_(VL_API_GBP_ENDPOINT_ADD_REPLY, gbp_endpoint_add_reply, 1dd3ff3e) \
_(VL_API_GBP_ENDPOINT_DEL, gbp_endpoint_del, b93cd566) \
_(VL_API_GBP_ENDPOINT_DEL_REPLY, gbp_endpoint_del_reply, e8d4e804) \
_(VL_API_GBP_ENDPOINT_DUMP, gbp_endpoint_dump, 51077d14) \
_(VL_API_GBP_ENDPOINT_DETAILS, gbp_endpoint_details, 08aecb60) \
_(VL_API_GBP_ENDPOINT_GROUP_ADD, gbp_endpoint_group_add, 8e0f4054) \
_(VL_API_GBP_ENDPOINT_GROUP_ADD_REPLY, gbp_endpoint_group_add_reply, e8d4e804) \
_(VL_API_GBP_ENDPOINT_GROUP_DEL, gbp_endpoint_group_del, 3436b8b7) \
_(VL_API_GBP_ENDPOINT_GROUP_DEL_REPLY, gbp_endpoint_group_del_reply, e8d4e804) \
_(VL_API_GBP_ENDPOINT_GROUP_DUMP, gbp_endpoint_group_dump, 51077d14) \
_(VL_API_GBP_ENDPOINT_GROUP_DETAILS, gbp_endpoint_group_details, 8f38292c) \
_(VL_API_GBP_RECIRC_ADD_DEL, gbp_recirc_add_del, 718c69c3) \
_(VL_API_GBP_RECIRC_ADD_DEL_REPLY, gbp_recirc_add_del_reply, e8d4e804) \
_(VL_API_GBP_RECIRC_DUMP, gbp_recirc_dump, 51077d14) \
_(VL_API_GBP_RECIRC_DETAILS, gbp_recirc_details, 66ecc42e) \
_(VL_API_GBP_SUBNET_ADD_DEL, gbp_subnet_add_del, 888aca35) \
_(VL_API_GBP_SUBNET_ADD_DEL_REPLY, gbp_subnet_add_del_reply, e8d4e804) \
_(VL_API_GBP_SUBNET_DUMP, gbp_subnet_dump, 51077d14) \
_(VL_API_GBP_SUBNET_DETAILS, gbp_subnet_details, 4ed84156) \
_(VL_API_GBP_CONTRACT_ADD_DEL, gbp_contract_add_del, 553e275b) \
_(VL_API_GBP_CONTRACT_ADD_DEL_REPLY, gbp_contract_add_del_reply, 1992deab) \
_(VL_API_GBP_CONTRACT_DUMP, gbp_contract_dump, 51077d14) \
_(VL_API_GBP_CONTRACT_DETAILS, gbp_contract_details, 2a18db6e) \
_(VL_API_GBP_VXLAN_TUNNEL_ADD, gbp_vxlan_tunnel_add, 3e070b35) \
_(VL_API_GBP_VXLAN_TUNNEL_ADD_REPLY, gbp_vxlan_tunnel_add_reply, 5383d31f) \
_(VL_API_GBP_VXLAN_TUNNEL_DEL, gbp_vxlan_tunnel_del, 8d1f2fe9) \
_(VL_API_GBP_VXLAN_TUNNEL_DEL_REPLY, gbp_vxlan_tunnel_del_reply, e8d4e804) \
_(VL_API_GBP_VXLAN_TUNNEL_DUMP, gbp_vxlan_tunnel_dump, 51077d14) \
_(VL_API_GBP_VXLAN_TUNNEL_DETAILS, gbp_vxlan_tunnel_details, 65c6c818) \
_(VL_API_GBP_EXT_ITF_ADD_DEL, gbp_ext_itf_add_del, 12ed5700) \
_(VL_API_GBP_EXT_ITF_ADD_DEL_REPLY, gbp_ext_itf_add_del_reply, e8d4e804) \
_(VL_API_GBP_EXT_ITF_DUMP, gbp_ext_itf_dump, 51077d14) \
_(VL_API_GBP_EXT_ITF_DETAILS, gbp_ext_itf_details, 408a45c0) 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "gbp.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_gbp_printfun_types
#define included_gbp_printfun_types

static inline u8 *format_vl_api_gbp_bridge_domain_flags_t (u8 *s, va_list * args)
{
    vl_api_gbp_bridge_domain_flags_t *a = va_arg (*args, vl_api_gbp_bridge_domain_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "GBP_BD_API_FLAG_NONE");
    case 1:
        return format(s, "GBP_BD_API_FLAG_DO_NOT_LEARN");
    case 2:
        return format(s, "GBP_BD_API_FLAG_UU_FWD_DROP");
    case 4:
        return format(s, "GBP_BD_API_FLAG_MCAST_DROP");
    case 8:
        return format(s, "GBP_BD_API_FLAG_UCAST_ARP");
    }
    return s;
}

static inline u8 *format_vl_api_gbp_bridge_domain_t (u8 *s, va_list * args)
{
    vl_api_gbp_bridge_domain_t *a = va_arg (*args, vl_api_gbp_bridge_domain_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    s = format(s, "\n%Urd_id: %u", format_white_space, indent, a->rd_id);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_gbp_bridge_domain_flags_t, &a->flags, indent);
    s = format(s, "\n%Ubvi_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->bvi_sw_if_index, indent);
    s = format(s, "\n%Uuu_fwd_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->uu_fwd_sw_if_index, indent);
    s = format(s, "\n%Ubm_flood_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->bm_flood_sw_if_index, indent);
    return s;
}

static inline u8 *format_vl_api_gbp_scope_t (u8 *s, va_list * args)
{
    vl_api_gbp_scope_t *a = va_arg (*args, vl_api_gbp_scope_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    return format(s, "%u", *a);
}

static inline u8 *format_vl_api_gbp_route_domain_t (u8 *s, va_list * args)
{
    vl_api_gbp_route_domain_t *a = va_arg (*args, vl_api_gbp_route_domain_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Urd_id: %u", format_white_space, indent, a->rd_id);
    s = format(s, "\n%Uip4_table_id: %u", format_white_space, indent, a->ip4_table_id);
    s = format(s, "\n%Uip6_table_id: %u", format_white_space, indent, a->ip6_table_id);
    s = format(s, "\n%Uip4_uu_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->ip4_uu_sw_if_index, indent);
    s = format(s, "\n%Uip6_uu_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->ip6_uu_sw_if_index, indent);
    s = format(s, "\n%Uscope: %U", format_white_space, indent, format_vl_api_gbp_scope_t, &a->scope, indent);
    return s;
}

static inline u8 *format_vl_api_gbp_endpoint_flags_t (u8 *s, va_list * args)
{
    vl_api_gbp_endpoint_flags_t *a = va_arg (*args, vl_api_gbp_endpoint_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "GBP_API_ENDPOINT_FLAG_NONE");
    case 1:
        return format(s, "GBP_API_ENDPOINT_FLAG_BOUNCE");
    case 2:
        return format(s, "GBP_API_ENDPOINT_FLAG_REMOTE");
    case 4:
        return format(s, "GBP_API_ENDPOINT_FLAG_LEARNT");
    case 8:
        return format(s, "GBP_API_ENDPOINT_FLAG_EXTERNAL");
    }
    return s;
}

static inline u8 *format_vl_api_gbp_endpoint_tun_t (u8 *s, va_list * args)
{
    vl_api_gbp_endpoint_tun_t *a = va_arg (*args, vl_api_gbp_endpoint_tun_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usrc: %U", format_white_space, indent, format_vl_api_address_t, &a->src, indent);
    s = format(s, "\n%Udst: %U", format_white_space, indent, format_vl_api_address_t, &a->dst, indent);
    return s;
}

static inline u8 *format_vl_api_gbp_endpoint_t (u8 *s, va_list * args)
{
    vl_api_gbp_endpoint_t *a = va_arg (*args, vl_api_gbp_endpoint_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Usclass: %u", format_white_space, indent, a->sclass);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_gbp_endpoint_flags_t, &a->flags, indent);
    s = format(s, "\n%Umac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac, indent);
    s = format(s, "\n%Utun: %U", format_white_space, indent, format_vl_api_gbp_endpoint_tun_t, &a->tun, indent);
    s = format(s, "\n%Un_ips: %u", format_white_space, indent, a->n_ips);
    for (i = 0; i < a->n_ips; i++) {
        s = format(s, "\n%Uips: %U",
                   format_white_space, indent, format_vl_api_address_t, &a->ips[i], indent);
    }
    return s;
}

static inline u8 *format_vl_api_gbp_endpoint_retention_t (u8 *s, va_list * args)
{
    vl_api_gbp_endpoint_retention_t *a = va_arg (*args, vl_api_gbp_endpoint_retention_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uremote_ep_timeout: %u", format_white_space, indent, a->remote_ep_timeout);
    return s;
}

static inline u8 *format_vl_api_gbp_endpoint_group_t (u8 *s, va_list * args)
{
    vl_api_gbp_endpoint_group_t *a = va_arg (*args, vl_api_gbp_endpoint_group_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uvnid: %u", format_white_space, indent, a->vnid);
    s = format(s, "\n%Usclass: %u", format_white_space, indent, a->sclass);
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    s = format(s, "\n%Urd_id: %u", format_white_space, indent, a->rd_id);
    s = format(s, "\n%Uuplink_sw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->uplink_sw_if_index, indent);
    s = format(s, "\n%Uretention: %U", format_white_space, indent, format_vl_api_gbp_endpoint_retention_t, &a->retention, indent);
    return s;
}

static inline u8 *format_vl_api_gbp_recirc_t (u8 *s, va_list * args)
{
    vl_api_gbp_recirc_t *a = va_arg (*args, vl_api_gbp_recirc_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Usclass: %u", format_white_space, indent, a->sclass);
    s = format(s, "\n%Uis_ext: %u", format_white_space, indent, a->is_ext);
    return s;
}

static inline u8 *format_vl_api_gbp_subnet_type_t (u8 *s, va_list * args)
{
    vl_api_gbp_subnet_type_t *a = va_arg (*args, vl_api_gbp_subnet_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "GBP_API_SUBNET_TRANSPORT");
    case 2:
        return format(s, "GBP_API_SUBNET_STITCHED_INTERNAL");
    case 3:
        return format(s, "GBP_API_SUBNET_STITCHED_EXTERNAL");
    case 4:
        return format(s, "GBP_API_SUBNET_L3_OUT");
    case 5:
        return format(s, "GBP_API_SUBNET_ANON_L3_OUT");
    }
    return s;
}

static inline u8 *format_vl_api_gbp_subnet_t (u8 *s, va_list * args)
{
    vl_api_gbp_subnet_t *a = va_arg (*args, vl_api_gbp_subnet_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Urd_id: %u", format_white_space, indent, a->rd_id);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Usclass: %u", format_white_space, indent, a->sclass);
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_gbp_subnet_type_t, &a->type, indent);
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->prefix, indent);
    return s;
}

static inline u8 *format_vl_api_gbp_next_hop_t (u8 *s, va_list * args)
{
    vl_api_gbp_next_hop_t *a = va_arg (*args, vl_api_gbp_next_hop_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uip: %U", format_white_space, indent, format_vl_api_address_t, &a->ip, indent);
    s = format(s, "\n%Umac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac, indent);
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    s = format(s, "\n%Urd_id: %u", format_white_space, indent, a->rd_id);
    return s;
}

static inline u8 *format_vl_api_gbp_hash_mode_t (u8 *s, va_list * args)
{
    vl_api_gbp_hash_mode_t *a = va_arg (*args, vl_api_gbp_hash_mode_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "GBP_API_HASH_MODE_SRC_IP");
    case 2:
        return format(s, "GBP_API_HASH_MODE_DST_IP");
    case 3:
        return format(s, "GBP_API_HASH_MODE_SYMMETRIC");
    }
    return s;
}

static inline u8 *format_vl_api_gbp_next_hop_set_t (u8 *s, va_list * args)
{
    vl_api_gbp_next_hop_set_t *a = va_arg (*args, vl_api_gbp_next_hop_set_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uhash_mode: %U", format_white_space, indent, format_vl_api_gbp_hash_mode_t, &a->hash_mode, indent);
    s = format(s, "\n%Un_nhs: %u", format_white_space, indent, a->n_nhs);
    for (i = 0; i < 8; i++) {
        s = format(s, "\n%Unhs: %U",
                   format_white_space, indent, format_vl_api_gbp_next_hop_t, &a->nhs[i], indent);
    }
    return s;
}

static inline u8 *format_vl_api_gbp_rule_action_t (u8 *s, va_list * args)
{
    vl_api_gbp_rule_action_t *a = va_arg (*args, vl_api_gbp_rule_action_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "GBP_API_RULE_PERMIT");
    case 2:
        return format(s, "GBP_API_RULE_DENY");
    case 3:
        return format(s, "GBP_API_RULE_REDIRECT");
    }
    return s;
}

static inline u8 *format_vl_api_gbp_rule_t (u8 *s, va_list * args)
{
    vl_api_gbp_rule_t *a = va_arg (*args, vl_api_gbp_rule_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uaction: %U", format_white_space, indent, format_vl_api_gbp_rule_action_t, &a->action, indent);
    s = format(s, "\n%Unh_set: %U", format_white_space, indent, format_vl_api_gbp_next_hop_set_t, &a->nh_set, indent);
    return s;
}

static inline u8 *format_vl_api_gbp_contract_t (u8 *s, va_list * args)
{
    vl_api_gbp_contract_t *a = va_arg (*args, vl_api_gbp_contract_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uscope: %U", format_white_space, indent, format_vl_api_gbp_scope_t, &a->scope, indent);
    s = format(s, "\n%Usclass: %u", format_white_space, indent, a->sclass);
    s = format(s, "\n%Udclass: %u", format_white_space, indent, a->dclass);
    s = format(s, "\n%Uacl_index: %u", format_white_space, indent, a->acl_index);
    s = format(s, "\n%Un_ether_types: %u", format_white_space, indent, a->n_ether_types);
    for (i = 0; i < 16; i++) {
        s = format(s, "\n%Uallowed_ethertypes: %u",
                   format_white_space, indent, a->allowed_ethertypes[i]);
    }
    s = format(s, "\n%Un_rules: %u", format_white_space, indent, a->n_rules);
    for (i = 0; i < a->n_rules; i++) {
        s = format(s, "\n%Urules: %U",
                   format_white_space, indent, format_vl_api_gbp_rule_t, &a->rules[i], indent);
    }
    return s;
}

static inline u8 *format_vl_api_gbp_vxlan_tunnel_mode_t (u8 *s, va_list * args)
{
    vl_api_gbp_vxlan_tunnel_mode_t *a = va_arg (*args, vl_api_gbp_vxlan_tunnel_mode_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 1:
        return format(s, "GBP_VXLAN_TUNNEL_MODE_L2");
    case 2:
        return format(s, "GBP_VXLAN_TUNNEL_MODE_L3");
    }
    return s;
}

static inline u8 *format_vl_api_gbp_vxlan_tunnel_t (u8 *s, va_list * args)
{
    vl_api_gbp_vxlan_tunnel_t *a = va_arg (*args, vl_api_gbp_vxlan_tunnel_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uvni: %u", format_white_space, indent, a->vni);
    s = format(s, "\n%Umode: %U", format_white_space, indent, format_vl_api_gbp_vxlan_tunnel_mode_t, &a->mode, indent);
    s = format(s, "\n%Ubd_rd_id: %u", format_white_space, indent, a->bd_rd_id);
    s = format(s, "\n%Usrc: %U", format_white_space, indent, format_vl_api_ip4_address_t, &a->src, indent);
    return s;
}

static inline u8 *format_vl_api_gbp_ext_itf_flags_t (u8 *s, va_list * args)
{
    vl_api_gbp_ext_itf_flags_t *a = va_arg (*args, vl_api_gbp_ext_itf_flags_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "GBP_API_EXT_ITF_F_NONE");
    case 1:
        return format(s, "GBP_API_EXT_ITF_F_ANON");
    }
    return s;
}

static inline u8 *format_vl_api_gbp_ext_itf_t (u8 *s, va_list * args)
{
    vl_api_gbp_ext_itf_t *a = va_arg (*args, vl_api_gbp_ext_itf_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Ubd_id: %u", format_white_space, indent, a->bd_id);
    s = format(s, "\n%Urd_id: %u", format_white_space, indent, a->rd_id);
    s = format(s, "\n%Uflags: %U", format_white_space, indent, format_vl_api_gbp_ext_itf_flags_t, &a->flags, indent);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_gbp_printfun
#define included_gbp_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

/***** manual: vl_api_gbp_bridge_domain_add_t_print  *****/

static inline void *vl_api_gbp_bridge_domain_add_reply_t_print (vl_api_gbp_bridge_domain_add_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_bridge_domain_add_reply_t: */
    s = format(s, "vl_api_gbp_bridge_domain_add_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_bridge_domain_del_t_print  *****/

static inline void *vl_api_gbp_bridge_domain_del_reply_t_print (vl_api_gbp_bridge_domain_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_bridge_domain_del_reply_t: */
    s = format(s, "vl_api_gbp_bridge_domain_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_bridge_domain_dump_t_print (vl_api_gbp_bridge_domain_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_bridge_domain_dump_t: */
    s = format(s, "vl_api_gbp_bridge_domain_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_bridge_domain_dump_reply_t_print (vl_api_gbp_bridge_domain_dump_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_bridge_domain_dump_reply_t: */
    s = format(s, "vl_api_gbp_bridge_domain_dump_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_bridge_domain_details_t_print (vl_api_gbp_bridge_domain_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_bridge_domain_details_t: */
    s = format(s, "vl_api_gbp_bridge_domain_details_t:");
    s = format(s, "\n%Ubd: %U", format_white_space, indent, format_vl_api_gbp_bridge_domain_t, &a->bd, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_route_domain_add_t_print  *****/

static inline void *vl_api_gbp_route_domain_add_reply_t_print (vl_api_gbp_route_domain_add_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_route_domain_add_reply_t: */
    s = format(s, "vl_api_gbp_route_domain_add_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_route_domain_del_t_print  *****/

static inline void *vl_api_gbp_route_domain_del_reply_t_print (vl_api_gbp_route_domain_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_route_domain_del_reply_t: */
    s = format(s, "vl_api_gbp_route_domain_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_route_domain_dump_t_print (vl_api_gbp_route_domain_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_route_domain_dump_t: */
    s = format(s, "vl_api_gbp_route_domain_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_route_domain_dump_reply_t_print (vl_api_gbp_route_domain_dump_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_route_domain_dump_reply_t: */
    s = format(s, "vl_api_gbp_route_domain_dump_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_route_domain_details_t_print (vl_api_gbp_route_domain_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_route_domain_details_t: */
    s = format(s, "vl_api_gbp_route_domain_details_t:");
    s = format(s, "\n%Urd: %U", format_white_space, indent, format_vl_api_gbp_route_domain_t, &a->rd, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_endpoint_add_t_print  *****/

static inline void *vl_api_gbp_endpoint_add_reply_t_print (vl_api_gbp_endpoint_add_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_endpoint_add_reply_t: */
    s = format(s, "vl_api_gbp_endpoint_add_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Uhandle: %u", format_white_space, indent, a->handle);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_endpoint_del_t_print  *****/

static inline void *vl_api_gbp_endpoint_del_reply_t_print (vl_api_gbp_endpoint_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_endpoint_del_reply_t: */
    s = format(s, "vl_api_gbp_endpoint_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_endpoint_dump_t_print (vl_api_gbp_endpoint_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_endpoint_dump_t: */
    s = format(s, "vl_api_gbp_endpoint_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_endpoint_details_t_print (vl_api_gbp_endpoint_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_endpoint_details_t: */
    s = format(s, "vl_api_gbp_endpoint_details_t:");
    s = format(s, "\n%Uage: %.2f", format_white_space, indent, a->age);
    s = format(s, "\n%Uhandle: %u", format_white_space, indent, a->handle);
    s = format(s, "\n%Uendpoint: %U", format_white_space, indent, format_vl_api_gbp_endpoint_t, &a->endpoint, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_endpoint_group_add_t_print  *****/

static inline void *vl_api_gbp_endpoint_group_add_reply_t_print (vl_api_gbp_endpoint_group_add_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_endpoint_group_add_reply_t: */
    s = format(s, "vl_api_gbp_endpoint_group_add_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_endpoint_group_del_t_print  *****/

static inline void *vl_api_gbp_endpoint_group_del_reply_t_print (vl_api_gbp_endpoint_group_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_endpoint_group_del_reply_t: */
    s = format(s, "vl_api_gbp_endpoint_group_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_endpoint_group_dump_t_print (vl_api_gbp_endpoint_group_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_endpoint_group_dump_t: */
    s = format(s, "vl_api_gbp_endpoint_group_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_endpoint_group_details_t_print (vl_api_gbp_endpoint_group_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_endpoint_group_details_t: */
    s = format(s, "vl_api_gbp_endpoint_group_details_t:");
    s = format(s, "\n%Uepg: %U", format_white_space, indent, format_vl_api_gbp_endpoint_group_t, &a->epg, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_recirc_add_del_t_print  *****/

static inline void *vl_api_gbp_recirc_add_del_reply_t_print (vl_api_gbp_recirc_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_recirc_add_del_reply_t: */
    s = format(s, "vl_api_gbp_recirc_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_recirc_dump_t_print (vl_api_gbp_recirc_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_recirc_dump_t: */
    s = format(s, "vl_api_gbp_recirc_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_recirc_details_t_print (vl_api_gbp_recirc_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_recirc_details_t: */
    s = format(s, "vl_api_gbp_recirc_details_t:");
    s = format(s, "\n%Urecirc: %U", format_white_space, indent, format_vl_api_gbp_recirc_t, &a->recirc, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_subnet_add_del_t_print  *****/

static inline void *vl_api_gbp_subnet_add_del_reply_t_print (vl_api_gbp_subnet_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_subnet_add_del_reply_t: */
    s = format(s, "vl_api_gbp_subnet_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_subnet_dump_t_print (vl_api_gbp_subnet_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_subnet_dump_t: */
    s = format(s, "vl_api_gbp_subnet_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_subnet_details_t_print (vl_api_gbp_subnet_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_subnet_details_t: */
    s = format(s, "vl_api_gbp_subnet_details_t:");
    s = format(s, "\n%Usubnet: %U", format_white_space, indent, format_vl_api_gbp_subnet_t, &a->subnet, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_contract_add_del_t_print  *****/

static inline void *vl_api_gbp_contract_add_del_reply_t_print (vl_api_gbp_contract_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_contract_add_del_reply_t: */
    s = format(s, "vl_api_gbp_contract_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Ustats_index: %u", format_white_space, indent, a->stats_index);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_contract_dump_t_print (vl_api_gbp_contract_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_contract_dump_t: */
    s = format(s, "vl_api_gbp_contract_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_contract_details_t_print (vl_api_gbp_contract_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_contract_details_t: */
    s = format(s, "vl_api_gbp_contract_details_t:");
    s = format(s, "\n%Ucontract: %U", format_white_space, indent, format_vl_api_gbp_contract_t, &a->contract, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_vxlan_tunnel_add_t_print  *****/

static inline void *vl_api_gbp_vxlan_tunnel_add_reply_t_print (vl_api_gbp_vxlan_tunnel_add_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_vxlan_tunnel_add_reply_t: */
    s = format(s, "vl_api_gbp_vxlan_tunnel_add_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_vxlan_tunnel_del_t_print  *****/

static inline void *vl_api_gbp_vxlan_tunnel_del_reply_t_print (vl_api_gbp_vxlan_tunnel_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_vxlan_tunnel_del_reply_t: */
    s = format(s, "vl_api_gbp_vxlan_tunnel_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_vxlan_tunnel_dump_t_print (vl_api_gbp_vxlan_tunnel_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_vxlan_tunnel_dump_t: */
    s = format(s, "vl_api_gbp_vxlan_tunnel_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_vxlan_tunnel_details_t_print (vl_api_gbp_vxlan_tunnel_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_vxlan_tunnel_details_t: */
    s = format(s, "vl_api_gbp_vxlan_tunnel_details_t:");
    s = format(s, "\n%Utunnel: %U", format_white_space, indent, format_vl_api_gbp_vxlan_tunnel_t, &a->tunnel, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

/***** manual: vl_api_gbp_ext_itf_add_del_t_print  *****/

static inline void *vl_api_gbp_ext_itf_add_del_reply_t_print (vl_api_gbp_ext_itf_add_del_reply_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_ext_itf_add_del_reply_t: */
    s = format(s, "vl_api_gbp_ext_itf_add_del_reply_t:");
    s = format(s, "\n%Uretval: %ld", format_white_space, indent, a->retval);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_ext_itf_dump_t_print (vl_api_gbp_ext_itf_dump_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_ext_itf_dump_t: */
    s = format(s, "vl_api_gbp_ext_itf_dump_t:");
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}

static inline void *vl_api_gbp_ext_itf_details_t_print (vl_api_gbp_ext_itf_details_t *a, void *handle)
{
    u8 *s = 0;
    u32 indent __attribute__((unused)) = 2;
    int i __attribute__((unused));
    /* Message definition: vl_api_gbp_ext_itf_details_t: */
    s = format(s, "vl_api_gbp_ext_itf_details_t:");
    s = format(s, "\n%Uext_itf: %U", format_white_space, indent, format_vl_api_gbp_ext_itf_t, &a->ext_itf, indent);
    vec_add1(s, 0);
    vl_print (handle, (char *)s);
    vec_free (s);
    return handle;
}


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_gbp_endianfun
#define included_gbp_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_gbp_bridge_domain_flags_t_endian (vl_api_gbp_bridge_domain_flags_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_gbp_bridge_domain_t_endian (vl_api_gbp_bridge_domain_t *a)
{
    int i __attribute__((unused));
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    a->rd_id = clib_net_to_host_u32(a->rd_id);
    vl_api_gbp_bridge_domain_flags_t_endian(&a->flags);
    vl_api_interface_index_t_endian(&a->bvi_sw_if_index);
    vl_api_interface_index_t_endian(&a->uu_fwd_sw_if_index);
    vl_api_interface_index_t_endian(&a->bm_flood_sw_if_index);
}

static inline void vl_api_gbp_scope_t_endian (vl_api_gbp_scope_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u16(*a);
}

static inline void vl_api_gbp_route_domain_t_endian (vl_api_gbp_route_domain_t *a)
{
    int i __attribute__((unused));
    a->rd_id = clib_net_to_host_u32(a->rd_id);
    a->ip4_table_id = clib_net_to_host_u32(a->ip4_table_id);
    a->ip6_table_id = clib_net_to_host_u32(a->ip6_table_id);
    vl_api_interface_index_t_endian(&a->ip4_uu_sw_if_index);
    vl_api_interface_index_t_endian(&a->ip6_uu_sw_if_index);
    vl_api_gbp_scope_t_endian(&a->scope);
}

static inline void vl_api_gbp_endpoint_flags_t_endian (vl_api_gbp_endpoint_flags_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_gbp_endpoint_tun_t_endian (vl_api_gbp_endpoint_tun_t *a)
{
    int i __attribute__((unused));
    vl_api_address_t_endian(&a->src);
    vl_api_address_t_endian(&a->dst);
}

static inline void vl_api_gbp_endpoint_t_endian (vl_api_gbp_endpoint_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->sclass = clib_net_to_host_u16(a->sclass);
    vl_api_gbp_endpoint_flags_t_endian(&a->flags);
    vl_api_mac_address_t_endian(&a->mac);
    vl_api_gbp_endpoint_tun_t_endian(&a->tun);
    /* a->n_ips = a->n_ips (no-op) */
    for (i = 0; i < a->n_ips; i++) {
        vl_api_address_t_endian(&a->ips[i]);
    }
}

static inline void vl_api_gbp_endpoint_retention_t_endian (vl_api_gbp_endpoint_retention_t *a)
{
    int i __attribute__((unused));
    a->remote_ep_timeout = clib_net_to_host_u32(a->remote_ep_timeout);
}

static inline void vl_api_gbp_endpoint_group_t_endian (vl_api_gbp_endpoint_group_t *a)
{
    int i __attribute__((unused));
    a->vnid = clib_net_to_host_u32(a->vnid);
    a->sclass = clib_net_to_host_u16(a->sclass);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    a->rd_id = clib_net_to_host_u32(a->rd_id);
    vl_api_interface_index_t_endian(&a->uplink_sw_if_index);
    vl_api_gbp_endpoint_retention_t_endian(&a->retention);
}

static inline void vl_api_gbp_recirc_t_endian (vl_api_gbp_recirc_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->sclass = clib_net_to_host_u16(a->sclass);
    /* a->is_ext = a->is_ext (no-op) */
}

static inline void vl_api_gbp_subnet_type_t_endian (vl_api_gbp_subnet_type_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_gbp_subnet_t_endian (vl_api_gbp_subnet_t *a)
{
    int i __attribute__((unused));
    a->rd_id = clib_net_to_host_u32(a->rd_id);
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->sclass = clib_net_to_host_u16(a->sclass);
    vl_api_gbp_subnet_type_t_endian(&a->type);
    vl_api_prefix_t_endian(&a->prefix);
}

static inline void vl_api_gbp_next_hop_t_endian (vl_api_gbp_next_hop_t *a)
{
    int i __attribute__((unused));
    vl_api_address_t_endian(&a->ip);
    vl_api_mac_address_t_endian(&a->mac);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    a->rd_id = clib_net_to_host_u32(a->rd_id);
}

static inline void vl_api_gbp_hash_mode_t_endian (vl_api_gbp_hash_mode_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_gbp_next_hop_set_t_endian (vl_api_gbp_next_hop_set_t *a)
{
    int i __attribute__((unused));
    vl_api_gbp_hash_mode_t_endian(&a->hash_mode);
    /* a->n_nhs = a->n_nhs (no-op) */
    for (i = 0; i < 8; i++) {
        vl_api_gbp_next_hop_t_endian(&a->nhs[i]);
    }
}

static inline void vl_api_gbp_rule_action_t_endian (vl_api_gbp_rule_action_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_gbp_rule_t_endian (vl_api_gbp_rule_t *a)
{
    int i __attribute__((unused));
    vl_api_gbp_rule_action_t_endian(&a->action);
    vl_api_gbp_next_hop_set_t_endian(&a->nh_set);
}

static inline void vl_api_gbp_contract_t_endian (vl_api_gbp_contract_t *a)
{
    int i __attribute__((unused));
    vl_api_gbp_scope_t_endian(&a->scope);
    a->sclass = clib_net_to_host_u16(a->sclass);
    a->dclass = clib_net_to_host_u16(a->dclass);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
    /* a->n_ether_types = a->n_ether_types (no-op) */
    for (i = 0; i < 16; i++) {
        a->allowed_ethertypes[i] = clib_net_to_host_u16(a->allowed_ethertypes[i]);
    }
    /* a->n_rules = a->n_rules (no-op) */
    for (i = 0; i < a->n_rules; i++) {
        vl_api_gbp_rule_t_endian(&a->rules[i]);
    }
}

static inline void vl_api_gbp_vxlan_tunnel_mode_t_endian (vl_api_gbp_vxlan_tunnel_mode_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_gbp_vxlan_tunnel_t_endian (vl_api_gbp_vxlan_tunnel_t *a)
{
    int i __attribute__((unused));
    a->vni = clib_net_to_host_u32(a->vni);
    vl_api_gbp_vxlan_tunnel_mode_t_endian(&a->mode);
    a->bd_rd_id = clib_net_to_host_u32(a->bd_rd_id);
    vl_api_ip4_address_t_endian(&a->src);
}

static inline void vl_api_gbp_ext_itf_flags_t_endian (vl_api_gbp_ext_itf_flags_t *a)
{
    int i __attribute__((unused));
    *a = clib_net_to_host_u32(*a);
}

static inline void vl_api_gbp_ext_itf_t_endian (vl_api_gbp_ext_itf_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    a->rd_id = clib_net_to_host_u32(a->rd_id);
    vl_api_gbp_ext_itf_flags_t_endian(&a->flags);
}

static inline void vl_api_gbp_bridge_domain_add_t_endian (vl_api_gbp_bridge_domain_add_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_bridge_domain_t_endian(&a->bd);
}

static inline void vl_api_gbp_bridge_domain_add_reply_t_endian (vl_api_gbp_bridge_domain_add_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_bridge_domain_del_t_endian (vl_api_gbp_bridge_domain_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
}

static inline void vl_api_gbp_bridge_domain_del_reply_t_endian (vl_api_gbp_bridge_domain_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_bridge_domain_dump_t_endian (vl_api_gbp_bridge_domain_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_gbp_bridge_domain_dump_reply_t_endian (vl_api_gbp_bridge_domain_dump_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_bridge_domain_details_t_endian (vl_api_gbp_bridge_domain_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_bridge_domain_t_endian(&a->bd);
}

static inline void vl_api_gbp_route_domain_add_t_endian (vl_api_gbp_route_domain_add_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_route_domain_t_endian(&a->rd);
}

static inline void vl_api_gbp_route_domain_add_reply_t_endian (vl_api_gbp_route_domain_add_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_route_domain_del_t_endian (vl_api_gbp_route_domain_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->rd_id = clib_net_to_host_u32(a->rd_id);
}

static inline void vl_api_gbp_route_domain_del_reply_t_endian (vl_api_gbp_route_domain_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_route_domain_dump_t_endian (vl_api_gbp_route_domain_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_gbp_route_domain_dump_reply_t_endian (vl_api_gbp_route_domain_dump_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_route_domain_details_t_endian (vl_api_gbp_route_domain_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_route_domain_t_endian(&a->rd);
}

static inline void vl_api_gbp_endpoint_add_t_endian (vl_api_gbp_endpoint_add_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_endpoint_t_endian(&a->endpoint);
}

static inline void vl_api_gbp_endpoint_add_reply_t_endian (vl_api_gbp_endpoint_add_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->handle = clib_net_to_host_u32(a->handle);
}

static inline void vl_api_gbp_endpoint_del_t_endian (vl_api_gbp_endpoint_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->handle = clib_net_to_host_u32(a->handle);
}

static inline void vl_api_gbp_endpoint_del_reply_t_endian (vl_api_gbp_endpoint_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_endpoint_dump_t_endian (vl_api_gbp_endpoint_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_gbp_endpoint_details_t_endian (vl_api_gbp_endpoint_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->age = clib_net_to_host_f64(a->age);
    a->handle = clib_net_to_host_u32(a->handle);
    vl_api_gbp_endpoint_t_endian(&a->endpoint);
}

static inline void vl_api_gbp_endpoint_group_add_t_endian (vl_api_gbp_endpoint_group_add_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_endpoint_group_t_endian(&a->epg);
}

static inline void vl_api_gbp_endpoint_group_add_reply_t_endian (vl_api_gbp_endpoint_group_add_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_endpoint_group_del_t_endian (vl_api_gbp_endpoint_group_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->sclass = clib_net_to_host_u16(a->sclass);
}

static inline void vl_api_gbp_endpoint_group_del_reply_t_endian (vl_api_gbp_endpoint_group_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_endpoint_group_dump_t_endian (vl_api_gbp_endpoint_group_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_gbp_endpoint_group_details_t_endian (vl_api_gbp_endpoint_group_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_endpoint_group_t_endian(&a->epg);
}

static inline void vl_api_gbp_recirc_add_del_t_endian (vl_api_gbp_recirc_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_gbp_recirc_t_endian(&a->recirc);
}

static inline void vl_api_gbp_recirc_add_del_reply_t_endian (vl_api_gbp_recirc_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_recirc_dump_t_endian (vl_api_gbp_recirc_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_gbp_recirc_details_t_endian (vl_api_gbp_recirc_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_recirc_t_endian(&a->recirc);
}

static inline void vl_api_gbp_subnet_add_del_t_endian (vl_api_gbp_subnet_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_gbp_subnet_t_endian(&a->subnet);
}

static inline void vl_api_gbp_subnet_add_del_reply_t_endian (vl_api_gbp_subnet_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_subnet_dump_t_endian (vl_api_gbp_subnet_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_gbp_subnet_details_t_endian (vl_api_gbp_subnet_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_subnet_t_endian(&a->subnet);
}

static inline void vl_api_gbp_contract_add_del_t_endian (vl_api_gbp_contract_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_gbp_contract_t_endian(&a->contract);
}

static inline void vl_api_gbp_contract_add_del_reply_t_endian (vl_api_gbp_contract_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    a->stats_index = clib_net_to_host_u32(a->stats_index);
}

static inline void vl_api_gbp_contract_dump_t_endian (vl_api_gbp_contract_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_gbp_contract_details_t_endian (vl_api_gbp_contract_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_contract_t_endian(&a->contract);
}

static inline void vl_api_gbp_vxlan_tunnel_add_t_endian (vl_api_gbp_vxlan_tunnel_add_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_vxlan_tunnel_t_endian(&a->tunnel);
}

static inline void vl_api_gbp_vxlan_tunnel_add_reply_t_endian (vl_api_gbp_vxlan_tunnel_add_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
    vl_api_interface_index_t_endian(&a->sw_if_index);
}

static inline void vl_api_gbp_vxlan_tunnel_del_t_endian (vl_api_gbp_vxlan_tunnel_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
}

static inline void vl_api_gbp_vxlan_tunnel_del_reply_t_endian (vl_api_gbp_vxlan_tunnel_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_vxlan_tunnel_dump_t_endian (vl_api_gbp_vxlan_tunnel_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_gbp_vxlan_tunnel_details_t_endian (vl_api_gbp_vxlan_tunnel_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_vxlan_tunnel_t_endian(&a->tunnel);
}

static inline void vl_api_gbp_ext_itf_add_del_t_endian (vl_api_gbp_ext_itf_add_del_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    vl_api_gbp_ext_itf_t_endian(&a->ext_itf);
}

static inline void vl_api_gbp_ext_itf_add_del_reply_t_endian (vl_api_gbp_ext_itf_add_del_reply_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_i32(a->retval);
}

static inline void vl_api_gbp_ext_itf_dump_t_endian (vl_api_gbp_ext_itf_dump_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->client_index = a->client_index (no-op) */
    a->context = clib_net_to_host_u32(a->context);
}

static inline void vl_api_gbp_ext_itf_details_t_endian (vl_api_gbp_ext_itf_details_t *a)
{
    int i __attribute__((unused));
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    vl_api_gbp_ext_itf_t_endian(&a->ext_itf);
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(gbp.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(gbp.api, 0x9aca7f65)

#endif

