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

KSYMTAB_FUNC(v4l2_async_nf_init, "", "");
KSYMTAB_FUNC(v4l2_async_subdev_nf_init, "_gpl", "");
KSYMTAB_FUNC(v4l2_async_nf_register, "", "");
KSYMTAB_FUNC(v4l2_async_nf_unregister, "", "");
KSYMTAB_FUNC(v4l2_async_nf_cleanup, "_gpl", "");
KSYMTAB_FUNC(__v4l2_async_nf_add_fwnode, "_gpl", "");
KSYMTAB_FUNC(__v4l2_async_nf_add_fwnode_remote, "_gpl", "");
KSYMTAB_FUNC(__v4l2_async_nf_add_i2c, "_gpl", "");
KSYMTAB_FUNC(v4l2_async_subdev_endpoint_add, "_gpl", "");
KSYMTAB_FUNC(v4l2_async_connection_unique, "_gpl", "");
KSYMTAB_FUNC(v4l2_async_register_subdev, "", "");
KSYMTAB_FUNC(v4l2_async_unregister_subdev, "", "");

MODULE_INFO(depends, "videodev,mc");

