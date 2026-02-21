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

KSYMTAB_FUNC(qcom_minidump, "_gpl", "");
KSYMTAB_FUNC(qcom_add_glink_subdev, "_gpl", "");
KSYMTAB_FUNC(qcom_remove_glink_subdev, "_gpl", "");
KSYMTAB_FUNC(qcom_register_dump_segments, "_gpl", "");
KSYMTAB_FUNC(qcom_add_smd_subdev, "_gpl", "");
KSYMTAB_FUNC(qcom_remove_smd_subdev, "_gpl", "");
KSYMTAB_FUNC(qcom_register_ssr_notifier, "_gpl", "");
KSYMTAB_FUNC(qcom_unregister_ssr_notifier, "_gpl", "");
KSYMTAB_FUNC(qcom_add_ssr_subdev, "_gpl", "");
KSYMTAB_FUNC(qcom_remove_ssr_subdev, "_gpl", "");

MODULE_INFO(depends, "qcom_glink_smem");

