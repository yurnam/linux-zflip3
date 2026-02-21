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

KSYMTAB_FUNC(tcpm_pd_transmit_complete, "_gpl", "");
KSYMTAB_FUNC(tcpm_pd_receive, "_gpl", "");
KSYMTAB_FUNC(tcpm_cc_change, "_gpl", "");
KSYMTAB_FUNC(tcpm_vbus_change, "_gpl", "");
KSYMTAB_FUNC(tcpm_pd_hard_reset, "_gpl", "");
KSYMTAB_FUNC(tcpm_sink_frs, "_gpl", "");
KSYMTAB_FUNC(tcpm_sourcing_vbus, "_gpl", "");
KSYMTAB_FUNC(tcpm_port_clean, "_gpl", "");
KSYMTAB_FUNC(tcpm_port_is_toggling, "_gpl", "");
KSYMTAB_FUNC(tcpm_tcpc_reset, "_gpl", "");
KSYMTAB_FUNC(tcpm_register_port, "_gpl", "");
KSYMTAB_FUNC(tcpm_unregister_port, "_gpl", "");

MODULE_INFO(depends, "typec");

