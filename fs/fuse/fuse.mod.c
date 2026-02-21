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

KSYMTAB_FUNC(fuse_len_args, "_gpl", "");
KSYMTAB_FUNC(fuse_get_unique, "_gpl", "");
KSYMTAB_DATA(fuse_dev_fiq_ops, "_gpl", "");
KSYMTAB_FUNC(fuse_request_end, "_gpl", "");
KSYMTAB_FUNC(fuse_simple_background, "_gpl", "");
KSYMTAB_FUNC(fuse_dequeue_forget, "", "");
KSYMTAB_FUNC(fuse_abort_conn, "_gpl", "");
KSYMTAB_FUNC(fuse_dev_release, "_gpl", "");
KSYMTAB_DATA(fuse_dev_operations, "_gpl", "");
KSYMTAB_FUNC(fuse_do_open, "_gpl", "");
KSYMTAB_FUNC(fuse_sync_release, "_gpl", "");
KSYMTAB_FUNC(fuse_direct_io, "_gpl", "");
KSYMTAB_FUNC(fuse_file_poll, "_gpl", "");
KSYMTAB_FUNC(fuse_conn_init, "_gpl", "");
KSYMTAB_FUNC(fuse_conn_put, "_gpl", "");
KSYMTAB_FUNC(fuse_conn_get, "_gpl", "");
KSYMTAB_FUNC(fuse_send_init, "_gpl", "");
KSYMTAB_FUNC(fuse_free_conn, "_gpl", "");
KSYMTAB_FUNC(fuse_dev_alloc, "_gpl", "");
KSYMTAB_FUNC(fuse_dev_install, "_gpl", "");
KSYMTAB_FUNC(fuse_dev_alloc_install, "_gpl", "");
KSYMTAB_FUNC(fuse_dev_free, "_gpl", "");
KSYMTAB_FUNC(fuse_init_fs_context_submount, "_gpl", "");
KSYMTAB_FUNC(fuse_fill_super_common, "_gpl", "");
KSYMTAB_FUNC(fuse_mount_remove, "_gpl", "");
KSYMTAB_FUNC(fuse_conn_destroy, "_gpl", "");
KSYMTAB_FUNC(fuse_mount_destroy, "", "");
KSYMTAB_FUNC(fuse_do_ioctl, "_gpl", "");

MODULE_INFO(depends, "");

