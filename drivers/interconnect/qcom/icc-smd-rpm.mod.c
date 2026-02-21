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

KSYMTAB_FUNC(qcom_icc_rpm_smd_available, "_gpl", "");
KSYMTAB_FUNC(qcom_icc_rpm_smd_send, "_gpl", "");
KSYMTAB_FUNC(qcom_icc_rpm_set_bus_rate, "_gpl", "");
KSYMTAB_FUNC(qnoc_probe, "", "");
KSYMTAB_FUNC(qnoc_remove, "", "");
KSYMTAB_DATA(aggre1_clk, "_gpl", "");
KSYMTAB_DATA(aggre2_clk, "_gpl", "");
KSYMTAB_DATA(bimc_clk, "_gpl", "");
KSYMTAB_DATA(mem_1_clk, "_gpl", "");
KSYMTAB_DATA(bus_0_clk, "_gpl", "");
KSYMTAB_DATA(bus_1_clk, "_gpl", "");
KSYMTAB_DATA(bus_2_clk, "_gpl", "");
KSYMTAB_DATA(mmaxi_0_clk, "_gpl", "");
KSYMTAB_DATA(mmaxi_1_clk, "_gpl", "");
KSYMTAB_DATA(qup_clk, "_gpl", "");
KSYMTAB_DATA(aggre1_branch_clk, "_gpl", "");
KSYMTAB_DATA(aggre2_branch_clk, "_gpl", "");

MODULE_INFO(depends, "");

