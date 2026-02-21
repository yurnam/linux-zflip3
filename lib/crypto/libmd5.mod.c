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

KSYMTAB_FUNC(md5_init, "_gpl", "");
KSYMTAB_FUNC(md5_update, "_gpl", "");
KSYMTAB_FUNC(md5_final, "_gpl", "");
KSYMTAB_FUNC(md5, "_gpl", "");
KSYMTAB_FUNC(hmac_md5_preparekey, "_gpl", "");
KSYMTAB_FUNC(hmac_md5_init, "_gpl", "");
KSYMTAB_FUNC(hmac_md5_init_usingrawkey, "_gpl", "");
KSYMTAB_FUNC(hmac_md5_final, "_gpl", "");
KSYMTAB_FUNC(hmac_md5, "_gpl", "");
KSYMTAB_FUNC(hmac_md5_usingrawkey, "_gpl", "");

MODULE_INFO(depends, "");

