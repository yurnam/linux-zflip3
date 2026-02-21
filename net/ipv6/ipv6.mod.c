#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(ipv6_mod_enabled, "_gpl", "");
KSYMTAB_FUNC(inet6_sock_destruct, "_gpl", "");
KSYMTAB_FUNC(inet6_bind, "", "");
KSYMTAB_FUNC(inet6_release, "", "");
KSYMTAB_FUNC(inet6_cleanup_sock, "_gpl", "");
KSYMTAB_FUNC(inet6_getname, "", "");
KSYMTAB_FUNC(inet6_ioctl, "", "");
KSYMTAB_FUNC(inet6_compat_ioctl, "_gpl", "");
KSYMTAB_FUNC(inet6_register_protosw, "", "");
KSYMTAB_FUNC(inet6_unregister_protosw, "", "");
KSYMTAB_FUNC(inet6_sk_rebuild_header, "_gpl", "");
KSYMTAB_FUNC(ipv6_opt_accepted, "_gpl", "");
KSYMTAB_FUNC(ip6_output, "", "");
KSYMTAB_FUNC(ip6_xmit, "", "");
KSYMTAB_FUNC(ip6_fraglist_init, "", "");
KSYMTAB_FUNC(ip6_fraglist_prepare, "", "");
KSYMTAB_FUNC(ip6_frag_init, "", "");
KSYMTAB_FUNC(ip6_frag_next, "", "");
KSYMTAB_FUNC(ip6_dst_lookup, "_gpl", "");
KSYMTAB_FUNC(ip6_dst_lookup_flow, "_gpl", "");
KSYMTAB_FUNC(ip6_sk_dst_lookup_flow, "_gpl", "");
KSYMTAB_FUNC(ip6_append_data, "_gpl", "");
KSYMTAB_FUNC(ip6_push_pending_frames, "_gpl", "");
KSYMTAB_FUNC(ip6_flush_pending_frames, "_gpl", "");
KSYMTAB_FUNC(ip6_input, "_gpl", "");
KSYMTAB_FUNC(ipv6_dev_get_saddr, "", "");
KSYMTAB_FUNC(ipv6_chk_addr, "", "");
KSYMTAB_FUNC(ipv6_chk_addr_and_flags, "", "");
KSYMTAB_FUNC(ipv6_chk_custom_prefix, "", "");
KSYMTAB_FUNC(ipv6_chk_prefix, "", "");
KSYMTAB_FUNC(ipv6_dev_find, "", "");
KSYMTAB_FUNC(addrconf_prefix_rcv_add_addr, "_gpl", "");
KSYMTAB_FUNC(addrconf_add_linklocal, "_gpl", "");
KSYMTAB_FUNC(ip6_dst_alloc, "", "");
KSYMTAB_FUNC(ip6_route_lookup, "_gpl", "");
KSYMTAB_FUNC(rt6_lookup, "", "");
KSYMTAB_FUNC(ip6_pol_route, "_gpl", "");
KSYMTAB_FUNC(ip6_route_input_lookup, "_gpl", "");
KSYMTAB_FUNC(ip6_route_output_flags, "_gpl", "");
KSYMTAB_FUNC(ip6_update_pmtu, "_gpl", "");
KSYMTAB_FUNC(ip6_sk_update_pmtu, "_gpl", "");
KSYMTAB_FUNC(ip6_redirect, "_gpl", "");
KSYMTAB_FUNC(ip6_sk_redirect, "_gpl", "");
KSYMTAB_FUNC(fib6_info_hw_flags_set, "", "");
KSYMTAB_FUNC(fib6_info_destroy_rcu, "_gpl", "");
KSYMTAB_FUNC(ipv6_setsockopt, "", "");
KSYMTAB_FUNC(ipv6_getsockopt, "", "");
KSYMTAB_DATA(nd_tbl, "_gpl", "");
KSYMTAB_FUNC(__ndisc_fill_addr_option, "_gpl", "");
KSYMTAB_FUNC(ndisc_mc_map, "", "");
KSYMTAB_FUNC(ndisc_send_skb, "", "");
KSYMTAB_FUNC(ndisc_ns_create, "", "");
KSYMTAB_FUNC(__udp6_lib_lookup, "_gpl", "");
KSYMTAB_FUNC(udpv6_encap_enable, "", "");
KSYMTAB_FUNC(udpv6_sendmsg, "", "");
KSYMTAB_DATA(udp6_seq_ops, "", "");
KSYMTAB_DATA(raw_v6_hashinfo, "_gpl", "");
KSYMTAB_FUNC(raw_v6_match, "_gpl", "");
KSYMTAB_FUNC(icmp6_send, "", "");
KSYMTAB_FUNC(ip6_err_gen_icmpv6_unreach, "", "");
KSYMTAB_FUNC(icmpv6_err_convert, "", "");
KSYMTAB_FUNC(ipv6_sock_mc_join, "", "");
KSYMTAB_FUNC(ipv6_sock_mc_drop, "", "");
KSYMTAB_FUNC(ipv6_dev_mc_inc, "", "");
KSYMTAB_FUNC(ipv6_dev_mc_dec, "", "");
KSYMTAB_DATA(tcpv6_prot, "_gpl", "");
KSYMTAB_DATA(pingv6_prot, "_gpl", "");
KSYMTAB_FUNC(ipv6_push_frag_opts, "", "");
KSYMTAB_FUNC(ipv6_dup_options, "_gpl", "");
KSYMTAB_FUNC(__ipv6_fixup_options, "_gpl", "");
KSYMTAB_FUNC(fl6_update_dst, "_gpl", "");
KSYMTAB_FUNC(ip6_datagram_release_cb, "_gpl", "");
KSYMTAB_FUNC(__ip6_datagram_connect, "_gpl", "");
KSYMTAB_FUNC(ip6_datagram_connect, "_gpl", "");
KSYMTAB_FUNC(ip6_datagram_connect_v6_only, "_gpl", "");
KSYMTAB_FUNC(ipv6_icmp_error, "_gpl", "");
KSYMTAB_FUNC(ipv6_recv_error, "_gpl", "");
KSYMTAB_FUNC(ip6_datagram_recv_ctl, "_gpl", "");
KSYMTAB_FUNC(ip6_datagram_send_ctl, "_gpl", "");
KSYMTAB_DATA(ipv6_flowlabel_exclusive, "", "");
KSYMTAB_FUNC(__fl6_sock_lookup, "_gpl", "");
KSYMTAB_FUNC(fl6_merge_options, "_gpl", "");
KSYMTAB_FUNC(inet6_csk_route_req, "", "");
KSYMTAB_FUNC(inet6_csk_addr2sockaddr, "_gpl", "");
KSYMTAB_FUNC(inet6_csk_xmit, "_gpl", "");
KSYMTAB_FUNC(inet6_csk_update_pmtu, "_gpl", "");
KSYMTAB_FUNC(ip6_route_me_harder, "", "");
KSYMTAB_FUNC(__nf_ip6_route, "_gpl", "");
KSYMTAB_FUNC(br_ip6_fragment, "_gpl", "");

MODULE_INFO(depends, "");

