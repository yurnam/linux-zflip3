#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(drm_client_setup, "", "");
KSYMTAB_FUNC(drm_client_setup_with_fourcc, "", "");
KSYMTAB_FUNC(drm_client_setup_with_color_mode, "", "");

MODULE_INFO(depends, "drm_kms_helper");

