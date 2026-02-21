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
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(rndis_borrow_net, "_gpl", "");
KSYMTAB_FUNC(rndis_signal_connect, "_gpl", "");
KSYMTAB_FUNC(rndis_signal_disconnect, "_gpl", "");
KSYMTAB_FUNC(rndis_uninit, "_gpl", "");
KSYMTAB_FUNC(rndis_set_host_mac, "_gpl", "");
KSYMTAB_FUNC(rndis_msg_parser, "_gpl", "");
KSYMTAB_FUNC(rndis_register, "_gpl", "");
KSYMTAB_FUNC(rndis_deregister, "_gpl", "");
KSYMTAB_FUNC(rndis_set_param_dev, "_gpl", "");
KSYMTAB_FUNC(rndis_set_param_vendor, "_gpl", "");
KSYMTAB_FUNC(rndis_set_param_medium, "_gpl", "");
KSYMTAB_FUNC(rndis_add_hdr, "_gpl", "");
KSYMTAB_FUNC(rndis_free_response, "_gpl", "");
KSYMTAB_FUNC(rndis_get_next_response, "_gpl", "");
KSYMTAB_FUNC(rndis_rm_hdr, "_gpl", "");

MODULE_INFO(depends, "libcomposite,u_ether");

