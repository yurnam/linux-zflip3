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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(ip_tunnel_lookup, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_md_udp_encap, "", "");
KSYMTAB_FUNC(ip_tunnel_rcv, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_encap_add_ops, "", "");
KSYMTAB_FUNC(ip_tunnel_encap_del_ops, "", "");
KSYMTAB_FUNC(ip_tunnel_encap_setup, "_gpl", "");
KSYMTAB_FUNC(ip_md_tunnel_xmit, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_xmit, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_ctl, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_siocdevprivate, "_gpl", "");
KSYMTAB_FUNC(__ip_tunnel_change_mtu, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_change_mtu, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_dellink, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_get_link_net, "", "");
KSYMTAB_FUNC(ip_tunnel_get_iflink, "", "");
KSYMTAB_FUNC(ip_tunnel_init_net, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_delete_nets, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_newlink, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_changelink, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_init, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_uninit, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_setup, "_gpl", "");

MODULE_INFO(depends, "");

