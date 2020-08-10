AUTOMAKE_OPTIONS = subdir-objects

lib_LTLIBRARIES =
pkglib_LTLIBRARIES =
pkgconfig_DATA =

if BUILD_AFPACKET_MODULE
if BUILD_SHARED_MODULES
    pkglib_LTLIBRARIES += afpacket/daq_afpacket.la
    pkgconfig_DATA += afpacket/libdaq_static_afpacket.pc
    afpacket_daq_afpacket_la_SOURCES = afpacket/daq_afpacket.c
    afpacket_daq_afpacket_la_CPPFLAGS = $(AM_CPPFLAGS) -DBUILDING_SO
    afpacket_daq_afpacket_la_LDFLAGS = -module -export-dynamic -avoid-version -shared
if LIBPCAP_AVAILABLE
    afpacket_daq_afpacket_la_CPPFLAGS += $(PCAP_CPPFLAGS)
    afpacket_daq_afpacket_la_LDFLAGS += $(PCAP_LDFLAGS)
    afpacket_daq_afpacket_la_LIBADD = $(DAQ_AFPACKET_LIBS)
endif
endif
    lib_LTLIBRARIES += afpacket/libdaq_static_afpacket.la
    afpacket_libdaq_static_afpacket_la_SOURCES = afpacket/daq_afpacket.c
    afpacket_libdaq_static_afpacket_la_CPPFLAGS = $(AM_CPPFLAGS)
    afpacket_libdaq_static_afpacket_la_LDFLAGS = -static -avoid-version
if LIBPCAP_AVAILABLE
    afpacket_libdaq_static_afpacket_la_CPPFLAGS += $(PCAP_CPPFLAGS)
endif
endif

if BUILD_BPF_MODULE
if BUILD_SHARED_MODULES
    pkglib_LTLIBRARIES += bpf/daq_bpf.la
    pkgconfig_DATA += bpf/libdaq_static_bpf.pc
    bpf_daq_bpf_la_SOURCES = bpf/daq_bpf.c
    bpf_daq_bpf_la_CPPFLAGS = $(AM_CPPFLAGS) -DBUILDING_SO $(PCAP_CPPFLAGS)
    bpf_daq_bpf_la_LDFLAGS = -module -export-dynamic -avoid-version -shared $(PCAP_LDFLAGS)
    bpf_daq_bpf_la_LIBADD = $(DAQ_BPF_LIBS)
endif
    lib_LTLIBRARIES += bpf/libdaq_static_bpf.la
    bpf_libdaq_static_bpf_la_SOURCES = bpf/daq_bpf.c
    bpf_libdaq_static_bpf_la_CPPFLAGS = $(AM_CPPFLAGS) $(PCAP_CPPFLAGS)
    bpf_libdaq_static_bpf_la_LDFLAGS = -static -avoid-version
endif

if BUILD_DIVERT_MODULE
if BUILD_SHARED_MODULES
    pkglib_LTLIBRARIES += divert/daq_divert.la
    pkgconfig_DATA += divert/libdaq_static_divert.pc
    divert_daq_divert_la_SOURCES = divert/daq_divert.c
    divert_daq_divert_la_CPPFLAGS = $(AM_CPPFLAGS) -DBUILDING_SO
    divert_daq_divert_la_LDFLAGS = -module -export-dynamic -avoid-version -shared
endif
    lib_LTLIBRARIES += divert/libdaq_static_divert.la
    divert_libdaq_static_divert_la_SOURCES = divert/daq_divert.c
    divert_libdaq_static_divert_la_CPPFLAGS = $(AM_CPPFLAGS)
    divert_libdaq_static_divert_la_LDFLAGS = -static -avoid-version
endif

if BUILD_DUMP_MODULE
if BUILD_SHARED_MODULES
    pkglib_LTLIBRARIES += dump/daq_dump.la
    pkgconfig_DATA += dump/libdaq_static_dump.pc
    dump_daq_dump_la_SOURCES = dump/daq_dump.c
    dump_daq_dump_la_CPPFLAGS = $(AM_CPPFLAGS) -DBUILDING_SO $(PCAP_CPPFLAGS)
    dump_daq_dump_la_LDFLAGS = -module -export-dynamic -avoid-version -shared $(PCAP_LDFLAGS)
    dump_daq_dump_la_LIBADD = $(DAQ_DUMP_LIBS)
endif
    lib_LTLIBRARIES += dump/libdaq_static_dump.la
    dump_libdaq_static_dump_la_SOURCES = dump/daq_dump.c
    dump_libdaq_static_dump_la_CPPFLAGS = $(AM_CPPFLAGS) $(PCAP_CPPFLAGS)
    dump_libdaq_static_dump_la_LDFLAGS = -static -avoid-version
endif

if BUILD_FST_MODULE
if BUILD_SHARED_MODULES
    pkglib_LTLIBRARIES += fst/daq_fst.la
    pkgconfig_DATA += fst/libdaq_static_fst.pc
    fst_daq_fst_la_SOURCES = \
						 fst/daq_fst.cc \
						 fst/PMurHash.c \
						 fst/PMurHash.h
    fst_daq_fst_la_CPPFLAGS = $(AM_CPPFLAGS) -I$(top_srcdir)/example -DBUILDING_SO
    fst_daq_fst_la_LDFLAGS = -module -export-dynamic -avoid-version -shared
endif
    lib_LTLIBRARIES += fst/libdaq_static_fst.la
    fst_libdaq_static_fst_la_SOURCES = \
						 fst/daq_fst.cc \
						 fst/PMurHash.c \
						 fst/PMurHash.h
    fst_libdaq_static_fst_la_CPPFLAGS = $(AM_CPPFLAGS) -I$(top_srcdir)/example
    fst_libdaq_static_fst_la_LDFLAGS = -static -avoid-version
endif

if BUILD_NETMAP_MODULE
if BUILD_SHARED_MODULES
    pkglib_LTLIBRARIES += netmap/daq_netmap.la
    pkgconfig_DATA += netmap/libdaq_static_netmap.pc
    netmap_daq_netmap_la_SOURCES = netmap/daq_netmap.c
    netmap_daq_netmap_la_CPPFLAGS = $(AM_CPPFLAGS) -DBUILDING_SO
    netmap_daq_netmap_la_LDFLAGS = -module -export-dynamic -avoid-version -shared
endif
    lib_LTLIBRARIES += netmap/libdaq_static_netmap.la
    netmap_libdaq_static_netmap_la_SOURCES = netmap/daq_netmap.c
    netmap_libdaq_static_netmap_la_CPPFLAGS = $(AM_CPPFLAGS)
    netmap_libdaq_static_netmap_la_LDFLAGS = -static -avoid-version
endif

if BUILD_NFQ_MODULE
if BUILD_SHARED_MODULES
    pkglib_LTLIBRARIES += nfq/daq_nfq.la
    pkgconfig_DATA += nfq/libdaq_static_nfq.pc
    nfq_daq_nfq_la_SOURCES = nfq/daq_nfq.c
    nfq_daq_nfq_la_CPPFLAGS = $(AM_CPPFLAGS) -DBUILDING_SO
    nfq_daq_nfq_la_LDFLAGS = -module -export-dynamic -avoid-version -shared
    nfq_daq_nfq_la_LIBADD = $(DAQ_NFQ_LIBS)
endif
    lib_LTLIBRARIES += nfq/libdaq_static_nfq.la
    nfq_libdaq_static_nfq_la_SOURCES = nfq/daq_nfq.c
    nfq_libdaq_static_nfq_la_CPPFLAGS = $(AM_CPPFLAGS)
    nfq_libdaq_static_nfq_la_LDFLAGS = -static -avoid-version
endif

if BUILD_VIRTIO_TAP_MODULE
if BUILD_SHARED_MODULES
    pkglib_LTLIBRARIES += virtio_tap/daq_virtio_tap.la
    pkgconfig_DATA += virtio_tap/libdaq_static_virtio_tap.pc
    virtio_tap_daq_virtio_tap_la_SOURCES = virtio_tap/daq_virtio_tap.c virtio_tap/vppinfra/pmalloc.c virtio_tap/vlib/physmem.c \
        virtio_tap/vppinfra/error.c virtio_tap/vppinfra/unix-misc.c virtio_tap/vppinfra/std-formats.c \
        virtio_tap/vlib/buffer.c  virtio_tap/vppinfra/mem_dlmalloc.c virtio_tap/vppinfra/elf_clib.c \
        virtio_tap/vppinfra/unformat.c virtio_tap/vppinfra/elf.c virtio_tap/vppinfra/linux/mem.c \
        virtio_tap/vlib/threads.c virtio_tap/vlib/unix/main.c virtio_tap/vppinfra/unix-formats.c \
        virtio_tap/vppinfra/time_range.c virtio_tap/vppinfra/time.c virtio_tap/vppinfra/longjmp.S \
        virtio_tap/vlib/unix/util.c virtio_tap/vlib/init.c virtio_tap/vppinfra/elog.c \
        virtio_tap/vppinfra/serialize.c virtio_tap/vppinfra/hash.c virtio_tap/vlib/node_cli.c \
        virtio_tap/vlib/node_format.c virtio_tap/vlib/format.c virtio_tap/vlib/node_init.c \
        virtio_tap/vlib/cli.c virtio_tap/vppinfra/cpu.c virtio_tap/vppinfra/format.c \
        virtio_tap/vppinfra/dlmalloc.c virtio_tap/vlib/main.c virtio_tap/vlib/trace.c \
        virtio_tap/vppinfra/tw_timer_1t_3w_1024sl_ov.c virtio_tap/vppinfra/pcap.c \
        virtio_tap/vlib/unix/cli.c virtio_tap/vppinfra/macros.c virtio_tap/vppinfra/socket.c \
        virtio_tap/vppinfra/linux/sysfs.c virtio_tap/vppinfra/vec.c virtio_tap/vppinfra/ptclosure.c \
        virtio_tap/vlib/unix/plugin.c virtio_tap/vppinfra/string.c virtio_tap/vlib/log.c \
        virtio_tap/vlib/node.c virtio_tap/vlib/error.c virtio_tap/vppinfra/heap.c \
        virtio_tap/vppinfra/backtrace.c virtio_tap/vlib/linux/vfio.c virtio_tap/vlib/pci/pci.c \
        virtio_tap/vpp/stats/stat_segment.c virtio_tap/vnet/misc.c virtio_tap/vlib/handoff_trace.c \
        virtio_tap/vppinfra/random_buffer.c virtio_tap/vppinfra/random_isaac.c \
        virtio_tap/vnet/devices/netlink.c virtio_tap/vnet/devices/virtio/device.c \
        virtio_tap/vnet/buffer.c virtio_tap/vnet/devices/virtio/virtio.c \
        virtio_tap/vnet/devices/virtio/format.c virtio_tap/vnet/ethernet/format.c \
        virtio_tap/vnet/interface_format.c virtio_tap/vnet/l2/l2_output.c \
        virtio_tap/vnet/devices/virtio/node.c virtio_tap/vnet/devices/devices.c \
        virtio_tap/vnet/l2/l2_input.c virtio_tap/vnet/l2/l2_in_out_acl.c \
        virtio_tap/vnet/l2/l2_xcrw.c virtio_tap/vnet/l2/feat_bitmap.c \
        virtio_tap/vnet/l2/l2_learn.c virtio_tap/vnet/l2/l2_api.c \
        virtio_tap/vlibapi/api_shared.c virtio_tap/vnet/l2/l2_bd.c \
        virtio_tap/vnet/ip/ip6_format.c  \
        virtio_tap/vnet/ethernet/mac_address.c virtio_tap/vnet/ip/ip4_format.c \
        virtio_tap/vnet/ip/ip.c virtio_tap/vnet/ip/format.c \
        virtio_tap/vnet/l2/l2_fib.c virtio_tap/vnet/ip/ip4_forward.c \
        virtio_tap/vnet/ip/ip4_pg.c virtio_tap/vnet/pg/edit.c \
        virtio_tap/vnet/adj/adj.c virtio_tap/vnet/ip/ip4_mtrie.c \
        virtio_tap/vnet/ip/ip4_input.c virtio_tap/vnet/mfib/mfib_table.c \
        virtio_tap/vnet/fib/fib_types.c virtio_tap/vnet/mpls/mpls.c \
        virtio_tap/vnet/classify/vnet_classify.c virtio_tap/vnet/classify/ip_classify.c \
        virtio_tap/vnet/dpo/classify_dpo.c virtio_tap/vnet/adj/adj_midchain.c \
        virtio_tap/vnet/adj/rewrite.c virtio_tap/vnet/adj/adj_l2.c \
        virtio_tap/vnet/adj/adj_nsh.c virtio_tap/vnet/adj/adj_nbr.c \
        virtio_tap/vnet/ip-neighbor/ip4_neighbor.c virtio_tap/vnet/ip/ip6_forward.c \
        virtio_tap/vnet/ip/ip6_input.c virtio_tap/vnet/dpo/dpo.c \
        virtio_tap/vnet/mpls/mpls_input.c virtio_tap/vnet/mpls/pg.c \
        virtio_tap/vnet/ip/ip_checksum.c virtio_tap/vnet/ip/ip6_pg.c \
        virtio_tap/vnet/ip/lookup.c virtio_tap/vnet/dpo/l3_proxy_dpo.c \
        virtio_tap/vnet/mfib/mfib_types.c virtio_tap/vnet/ip/ip_in_out_acl.c \
        virtio_tap/vnet/dpo/load_balance.c virtio_tap/vnet/dpo/load_balance_map.c \
        virtio_tap/vnet/ip/ip_init.c virtio_tap/vnet/l2/l2_efp_filter.c \
        virtio_tap/vnet/adj/adj_glean.c virtio_tap/vnet/ethernet/arp_packet.c \
        virtio_tap/vnet/interface_api.c virtio_tap/vnet/ip-neighbor/ip6_neighbor.c \
        virtio_tap/vnet/l2/l2_input_vtr.c virtio_tap/vnet/adj/adj_mcast.c \
        virtio_tap/vnet/l2/l2_input_classify.c virtio_tap/vnet/pg/init.c \
        virtio_tap/vnet/mpls/mpls_output.c virtio_tap/vnet/l2/l2_vtr.c \
        virtio_tap/vnet/ip/icmp6.c virtio_tap/vnet/ip/ip4_source_and_port_range_check.c \
        virtio_tap/vnet/l2/l2_output_classify.c virtio_tap/vnet/ethernet/interface.c \
        virtio_tap/vnet/ethernet/pg.c virtio_tap/vnet/l2/l2_flood.c \
        virtio_tap/vnet/l2/l2_patch.c virtio_tap/vnet/classify/in_out_acl.c \
        virtio_tap/vnet/fib/fib_urpf_list.c virtio_tap/vnet/feature/feature.c \
        virtio_tap/vnet/ethernet/init.c virtio_tap/vnet/mfib/ip6_mfib.c \
        virtio_tap/vnet/mfib/mfib_entry.c virtio_tap/vnet/fib/fib_path.c \
        virtio_tap/vnet/bier/bier_imp.c virtio_tap/vnet/bier/bier_bit_string.c \
        virtio_tap/vnet/bier/bier_types.c virtio_tap/vnet/fib/fib_walk.c \
        virtio_tap/vnet/mfib/mfib_itf.c virtio_tap/vppinfra/bihash_all_vector.c \
        virtio_tap/vnet/mfib/ip4_mfib.c virtio_tap/vnet/fib/fib.c \
        virtio_tap/vnet/dpo/replicate_dpo.c virtio_tap/vnet/adj/adj_bfd.c \
        virtio_tap/vnet/adj/adj_delegate.c virtio_tap/vnet/bier/bier_fmask.c \
        virtio_tap/vnet/ip/ip_api.c virtio_tap/vnet/ip/ip_punt_drop.c \
        virtio_tap/vnet/fib/fib_path_list.c virtio_tap/vnet/ip/reass/ip4_sv_reass.c \
        virtio_tap/vnet/bier/bier_table.c virtio_tap/vnet/bier/bier_bift_table.c \
        virtio_tap/vnet/bier/bier_entry.c virtio_tap/vnet/bier/bier_fmask_db.c \
        virtio_tap/vnet/ip/ip6_hop_by_hop.c virtio_tap/vnet/interface.c \
        virtio_tap/vnet/dpo/drop_dpo.c virtio_tap/vnet/dpo/receive_dpo.c \
        virtio_tap/vnet/dpo/dvr_dpo.c virtio_tap/vnet/ethernet/node.c \
        virtio_tap/vnet/fib/fib_api.c virtio_tap/vnet/fib/fib_entry.c \
        virtio_tap/vnet/fib/fib_attached_export.c virtio_tap/vnet/fib/fib_entry_delegate.c \
        virtio_tap/vnet/fib/fib_entry_src.c virtio_tap/vnet/fib/fib_entry_cover.c \
        virtio_tap/vnet/fib/fib_entry_src_adj.c virtio_tap/vnet/fib/fib_node.c \
        virtio_tap/vnet/fib/fib_node_list.c virtio_tap/vnet/fib/fib_entry_src_api.c \
        virtio_tap/vnet/fib/fib_entry_src_drop.c virtio_tap/vnet/fib/fib_path_ext.c \
        virtio_tap/vnet/fib/fib_source.c virtio_tap/vnet/bier/bier_disp_table.c \
        virtio_tap/vnet/fib/fib_entry_track.c virtio_tap/vnet/fib/fib_table.c \
        virtio_tap/vnet/bier/bier_disp_entry.c virtio_tap/vnet/fib/ip4_fib.c \
        virtio_tap/vnet/fib/ip6_fib.c virtio_tap/vnet/fib/mpls_fib.c \
        virtio_tap/vnet/interface_output.c virtio_tap/vnet/dpo/interface_rx_dpo.c \
        virtio_tap/vnet/ip/ip_frag.c virtio_tap/vnet/dpo/interface_tx_dpo.c \
        virtio_tap/vnet/ip/ip4_punt_drop.c virtio_tap/vnet/ip/ip_types_api.c \
        virtio_tap/vnet/ip/ip6_link.c virtio_tap/vnet/dpo/ip6_ll_dpo.c \
        virtio_tap/vnet/ip/ip6_ll_table.c virtio_tap/vnet/ip/ip6_punt_drop.c \
        virtio_tap/vnet/ip-neighbor/ip_neighbor.c virtio_tap/vnet/ip/ip_interface.c \
        virtio_tap/vnet/ip/ip46_address.c virtio_tap/vnet/ip-neighbor/ip_neighbor_types.c \
        virtio_tap/vnet/ip/ip46_cli.c virtio_tap/vnet/ip-neighbor/ip_neighbor_watch.c \
        virtio_tap/vnet/dpo/ip_null_dpo.c virtio_tap/vnet/ip/ip_types.c \
        virtio_tap/vnet/dpo/lookup_dpo.c virtio_tap/vnet/ethernet/ethernet_types_api.c \
        virtio_tap/vnet/mfib/mfib_entry_cover.c virtio_tap/vnet/mfib/mfib_entry_delegate.c \
        virtio_tap/vnet/mfib/mfib_entry_src.c virtio_tap/vppinfra/mhash.c \
        virtio_tap/vnet/interface_cli.c virtio_tap/svm/queue.c \
        virtio_tap/vnet/udp/udp_encap.c virtio_tap/vnet/devices/virtio/pci.c \
        virtio_tap/vlib/linux/pci.c virtio_tap/vlib/counter.c \
        virtio_tap/vlibmemory/memory_shared.c virtio_tap/svm/svm.c \
        virtio_tap/vlibmemory/memory_api.c virtio_tap/vlibmemory/socket_api.c \
        virtio_tap/vnet/config.c virtio_tap/vnet/feature/registration.c \
        virtio_tap/vnet/devices/pipe/pipe.c virtio_tap/svm/ssvm.c \
        virtio_tap/vnet/util/throttle.c virtio_tap/vlibmemory/vlib_api.c \
        virtio_tap/vnet/devices/tap/tap.c virtio_tap/vlib/unix/input.c \
        #virtio_tap/ #virtio_tap/ \
        #virtio_tap/vnet/ipip/node.c
    virtio_tap_daq_virtio_tap_la_CPPFLAGS = $(AM_CPPFLAGS) -DBUILDING_SO -DHAVE_MEMFD_CREATE -I$(top_srcdir)/modules/virtio_tap
    virtio_tap_daq_virtio_tap_la_LDFLAGS = -module -export-dynamic -avoid-version -shared
    virtio_tap_daq_virtio_tap_la_LIBADD = $(DAQ_VIRTIO_TAP_LIBS)
endif
    lib_LTLIBRARIES += virtio_tap/libdaq_static_virtio_tap.la
    virtio_tap_libdaq_static_virtio_tap_la_SOURCES = virtio_tap/daq_virtio_tap.c virtio_tap/vppinfra/pmalloc.c virtio_tap/vlib/physmem.c \
        virtio_tap/vppinfra/error.c virtio_tap/vppinfra/unix-misc.c virtio_tap/vppinfra/std-formats.c \
        virtio_tap/vlib/buffer.c  virtio_tap/vppinfra/mem_dlmalloc.c virtio_tap/vppinfra/elf_clib.c \
        virtio_tap/vppinfra/unformat.c virtio_tap/vppinfra/elf.c virtio_tap/vppinfra/linux/mem.c \
        virtio_tap/vlib/threads.c virtio_tap/vlib/unix/main.c virtio_tap/vppinfra/unix-formats.c \
        virtio_tap/vppinfra/time_range.c virtio_tap/vppinfra/time.c virtio_tap/vppinfra/longjmp.S \
        virtio_tap/vlib/unix/util.c virtio_tap/vlib/init.c virtio_tap/vppinfra/elog.c \
        virtio_tap/vppinfra/serialize.c virtio_tap/vppinfra/hash.c virtio_tap/vlib/node_cli.c \
        virtio_tap/vlib/node_format.c virtio_tap/vlib/format.c virtio_tap/vlib/node_init.c \
        virtio_tap/vlib/cli.c virtio_tap/vppinfra/cpu.c virtio_tap/vppinfra/format.c \
        virtio_tap/vppinfra/dlmalloc.c virtio_tap/vlib/main.c virtio_tap/vlib/trace.c \
        virtio_tap/vppinfra/tw_timer_1t_3w_1024sl_ov.c virtio_tap/vppinfra/pcap.c \
        virtio_tap/vlib/unix/cli.c virtio_tap/vppinfra/macros.c virtio_tap/vppinfra/socket.c \
        virtio_tap/vppinfra/linux/sysfs.c virtio_tap/vppinfra/vec.c virtio_tap/vppinfra/ptclosure.c \
        virtio_tap/vlib/unix/plugin.c virtio_tap/vppinfra/string.c virtio_tap/vlib/log.c \
        virtio_tap/vlib/node.c virtio_tap/vlib/error.c virtio_tap/vppinfra/heap.c \
        virtio_tap/vppinfra/backtrace.c virtio_tap/vlib/linux/vfio.c virtio_tap/vlib/pci/pci.c \
        virtio_tap/vpp/stats/stat_segment.c virtio_tap/vnet/misc.c virtio_tap/vlib/handoff_trace.c \
        virtio_tap/vppinfra/random_buffer.c virtio_tap/vppinfra/random_isaac.c \
        virtio_tap/vnet/devices/netlink.c virtio_tap/vnet/devices/virtio/device.c \
        virtio_tap/vnet/buffer.c virtio_tap/vnet/devices/virtio/virtio.c \
        virtio_tap/vnet/devices/virtio/format.c virtio_tap/vnet/ethernet/format.c \
        virtio_tap/vnet/interface_format.c virtio_tap/vnet/l2/l2_output.c \
        virtio_tap/vnet/devices/virtio/node.c virtio_tap/vnet/devices/devices.c \
        virtio_tap/vnet/l2/l2_input.c virtio_tap/vnet/l2/l2_in_out_acl.c \
        virtio_tap/vnet/l2/l2_xcrw.c virtio_tap/vnet/l2/feat_bitmap.c \
        virtio_tap/vnet/l2/l2_learn.c virtio_tap/vnet/l2/l2_api.c \
        virtio_tap/vlibapi/api_shared.c virtio_tap/vnet/l2/l2_bd.c \
        virtio_tap/vnet/ip/ip6_format.c  \
        virtio_tap/vnet/ethernet/mac_address.c virtio_tap/vnet/ip/ip4_format.c \
        virtio_tap/vnet/ip/ip.c virtio_tap/vnet/ip/format.c \
        virtio_tap/vnet/l2/l2_fib.c virtio_tap/vnet/ip/ip4_forward.c \
        virtio_tap/vnet/ip/ip4_pg.c virtio_tap/vnet/pg/edit.c \
        virtio_tap/vnet/adj/adj.c virtio_tap/vnet/ip/ip4_mtrie.c \
        virtio_tap/vnet/ip/ip4_input.c virtio_tap/vnet/mfib/mfib_table.c \
        virtio_tap/vnet/fib/fib_types.c virtio_tap/vnet/mpls/mpls.c \
        virtio_tap/vnet/classify/vnet_classify.c virtio_tap/vnet/classify/ip_classify.c \
        virtio_tap/vnet/dpo/classify_dpo.c virtio_tap/vnet/adj/adj_midchain.c \
        virtio_tap/vnet/adj/rewrite.c virtio_tap/vnet/adj/adj_l2.c \
        virtio_tap/vnet/adj/adj_nsh.c virtio_tap/vnet/adj/adj_nbr.c \
        virtio_tap/vnet/ip-neighbor/ip4_neighbor.c virtio_tap/vnet/ip/ip6_forward.c \
        virtio_tap/vnet/ip/ip6_input.c virtio_tap/vnet/dpo/dpo.c \
        virtio_tap/vnet/mpls/mpls_input.c virtio_tap/vnet/mpls/pg.c \
        virtio_tap/vnet/ip/ip_checksum.c virtio_tap/vnet/ip/ip6_pg.c \
        virtio_tap/vnet/ip/lookup.c virtio_tap/vnet/dpo/l3_proxy_dpo.c \
        virtio_tap/vnet/mfib/mfib_types.c virtio_tap/vnet/ip/ip_in_out_acl.c \
        virtio_tap/vnet/dpo/load_balance.c virtio_tap/vnet/dpo/load_balance_map.c \
        virtio_tap/vnet/ip/ip_init.c virtio_tap/vnet/l2/l2_efp_filter.c \
        virtio_tap/vnet/adj/adj_glean.c virtio_tap/vnet/ethernet/arp_packet.c \
        virtio_tap/vnet/interface_api.c virtio_tap/vnet/ip-neighbor/ip6_neighbor.c \
        virtio_tap/vnet/l2/l2_input_vtr.c virtio_tap/vnet/adj/adj_mcast.c \
        virtio_tap/vnet/l2/l2_input_classify.c virtio_tap/vnet/pg/init.c \
        virtio_tap/vnet/mpls/mpls_output.c virtio_tap/vnet/l2/l2_vtr.c \
        virtio_tap/vnet/ip/icmp6.c virtio_tap/vnet/ip/ip4_source_and_port_range_check.c \
        virtio_tap/vnet/l2/l2_output_classify.c virtio_tap/vnet/ethernet/interface.c \
        virtio_tap/vnet/ethernet/pg.c virtio_tap/vnet/l2/l2_flood.c \
        virtio_tap/vnet/l2/l2_patch.c virtio_tap/vnet/classify/in_out_acl.c \
        virtio_tap/vnet/fib/fib_urpf_list.c virtio_tap/vnet/feature/feature.c \
        virtio_tap/vnet/ethernet/init.c virtio_tap/vnet/mfib/ip6_mfib.c \
        virtio_tap/vnet/mfib/mfib_entry.c virtio_tap/vnet/fib/fib_path.c \
        virtio_tap/vnet/bier/bier_imp.c virtio_tap/vnet/bier/bier_bit_string.c \
        virtio_tap/vnet/bier/bier_types.c virtio_tap/vnet/fib/fib_walk.c \
        virtio_tap/vnet/mfib/mfib_itf.c virtio_tap/vppinfra/bihash_all_vector.c \
        virtio_tap/vnet/mfib/ip4_mfib.c virtio_tap/vnet/fib/fib.c \
        virtio_tap/vnet/dpo/replicate_dpo.c virtio_tap/vnet/adj/adj_bfd.c \
        virtio_tap/vnet/adj/adj_delegate.c virtio_tap/vnet/bier/bier_fmask.c \
        virtio_tap/vnet/ip/ip_api.c virtio_tap/vnet/ip/ip_punt_drop.c \
        virtio_tap/vnet/fib/fib_path_list.c virtio_tap/vnet/ip/reass/ip4_sv_reass.c \
        virtio_tap/vnet/bier/bier_table.c virtio_tap/vnet/bier/bier_bift_table.c \
        virtio_tap/vnet/bier/bier_entry.c virtio_tap/vnet/bier/bier_fmask_db.c \
        virtio_tap/vnet/ip/ip6_hop_by_hop.c virtio_tap/vnet/interface.c \
        virtio_tap/vnet/dpo/drop_dpo.c virtio_tap/vnet/dpo/receive_dpo.c \
        virtio_tap/vnet/dpo/dvr_dpo.c virtio_tap/vnet/ethernet/node.c \
        virtio_tap/vnet/fib/fib_api.c virtio_tap/vnet/fib/fib_entry.c \
        virtio_tap/vnet/fib/fib_attached_export.c virtio_tap/vnet/fib/fib_entry_delegate.c \
        virtio_tap/vnet/fib/fib_entry_src.c virtio_tap/vnet/fib/fib_entry_cover.c \
        virtio_tap/vnet/fib/fib_entry_src_adj.c virtio_tap/vnet/fib/fib_node.c \
        virtio_tap/vnet/fib/fib_node_list.c virtio_tap/vnet/fib/fib_entry_src_api.c \
        virtio_tap/vnet/fib/fib_entry_src_drop.c virtio_tap/vnet/fib/fib_path_ext.c \
        virtio_tap/vnet/fib/fib_source.c virtio_tap/vnet/bier/bier_disp_table.c \
        virtio_tap/vnet/fib/fib_entry_track.c virtio_tap/vnet/fib/fib_table.c \
        virtio_tap/vnet/bier/bier_disp_entry.c virtio_tap/vnet/fib/ip4_fib.c \
        virtio_tap/vnet/fib/ip6_fib.c virtio_tap/vnet/fib/mpls_fib.c \
        virtio_tap/vnet/interface_output.c virtio_tap/vnet/dpo/interface_rx_dpo.c \
        virtio_tap/vnet/ip/ip_frag.c virtio_tap/vnet/dpo/interface_tx_dpo.c \
        virtio_tap/vnet/ip/ip4_punt_drop.c virtio_tap/vnet/ip/ip_types_api.c \
        virtio_tap/vnet/ip/ip6_link.c virtio_tap/vnet/dpo/ip6_ll_dpo.c \
        virtio_tap/vnet/ip/ip6_ll_table.c virtio_tap/vnet/ip/ip6_punt_drop.c \
        virtio_tap/vnet/ip-neighbor/ip_neighbor.c virtio_tap/vnet/ip/ip_interface.c \
        virtio_tap/vnet/ip/ip46_address.c virtio_tap/vnet/ip-neighbor/ip_neighbor_types.c \
        virtio_tap/vnet/ip/ip46_cli.c virtio_tap/vnet/ip-neighbor/ip_neighbor_watch.c \
        virtio_tap/vnet/dpo/ip_null_dpo.c virtio_tap/vnet/ip/ip_types.c \
        virtio_tap/vnet/dpo/lookup_dpo.c virtio_tap/vnet/ethernet/ethernet_types_api.c \
        virtio_tap/vnet/mfib/mfib_entry_cover.c virtio_tap/vnet/mfib/mfib_entry_delegate.c \
        virtio_tap/vnet/mfib/mfib_entry_src.c  virtio_tap/vppinfra/mhash.c \
        virtio_tap/vnet/interface_cli.c virtio_tap/svm/queue.c \
        virtio_tap/vnet/udp/udp_encap.c virtio_tap/vnet/devices/virtio/pci.c \
        virtio_tap/vlib/linux/pci.c virtio_tap/vlib/counter.c \
        virtio_tap/vlibmemory/memory_shared.c virtio_tap/svm/svm.c \
        virtio_tap/vlibmemory/memory_api.c virtio_tap/vlibmemory/socket_api.c \
        virtio_tap/vnet/config.c virtio_tap/vnet/feature/registration.c \
        virtio_tap/vnet/devices/pipe/pipe.c virtio_tap/svm/ssvm.c \
        virtio_tap/vnet/util/throttle.c virtio_tap/vlibmemory/vlib_api.c \
        virtio_tap/vnet/devices/tap/tap.c virtio_tap/vlib/unix/input.c \
        #virtio_tap/ #virtio_tap/ \
        #virtio_tap/ #virtio_tap/ \
        #virtio_tap/ #virtio_tap/ \
        #virtio_tap/vnet/ipip/node.c
    virtio_tap_libdaq_static_virtio_tap_la_CPPFLAGS = $(AM_CPPFLAGS) -DHAVE_MEMFD_CREATE -I$(top_srcdir)/modules/virtio_tap
    virtio_tap_libdaq_static_virtio_tap_la_LDFLAGS = -static -avoid-version
endif

if BUILD_PCAP_MODULE
if BUILD_SHARED_MODULES
    pkglib_LTLIBRARIES += pcap/daq_pcap.la
    pkgconfig_DATA += pcap/libdaq_static_pcap.pc
    pcap_daq_pcap_la_SOURCES = pcap/daq_pcap.c
    pcap_daq_pcap_la_CPPFLAGS = $(AM_CPPFLAGS) -DBUILDING_SO $(PCAP_CPPFLAGS)
    pcap_daq_pcap_la_LDFLAGS = -module -export-dynamic -avoid-version -shared $(PCAP_LDFLAGS)
    pcap_daq_pcap_la_LIBADD = $(DAQ_PCAP_LIBS)
endif
    lib_LTLIBRARIES += pcap/libdaq_static_pcap.la
    pcap_libdaq_static_pcap_la_SOURCES = pcap/daq_pcap.c
    pcap_libdaq_static_pcap_la_CPPFLAGS = $(AM_CPPFLAGS) $(PCAP_CPPFLAGS)
    pcap_libdaq_static_pcap_la_LDFLAGS = -static -avoid-version
endif

if BUILD_TRACE_MODULE
if BUILD_SHARED_MODULES
    pkglib_LTLIBRARIES += trace/daq_trace.la
    pkgconfig_DATA += trace/libdaq_static_trace.pc
    trace_daq_trace_la_SOURCES = trace/daq_trace.c
    trace_daq_trace_la_CPPFLAGS = $(AM_CPPFLAGS) -DBUILDING_SO
    trace_daq_trace_la_LDFLAGS = -module -export-dynamic -avoid-version -shared
endif
    lib_LTLIBRARIES += trace/libdaq_static_trace.la
    trace_libdaq_static_trace_la_SOURCES = trace/daq_trace.c
    trace_libdaq_static_trace_la_CPPFLAGS = $(AM_CPPFLAGS)
    trace_libdaq_static_trace_la_LDFLAGS = -static -avoid-version
endif

AM_CPPFLAGS = @AM_CPPFLAGS@ -I$(top_srcdir)/api

