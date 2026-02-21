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

KSYMTAB_FUNC(tap_del_queues, "_gpl", "");
KSYMTAB_FUNC(tap_handle_frame, "_gpl", "");
KSYMTAB_FUNC(tap_get_minor, "_gpl", "");
KSYMTAB_FUNC(tap_free_minor, "_gpl", "");
KSYMTAB_FUNC(tap_get_socket, "_gpl", "");
KSYMTAB_FUNC(tap_get_ptr_ring, "_gpl", "");
KSYMTAB_FUNC(tap_queue_resize, "_gpl", "");
KSYMTAB_FUNC(tap_create_cdev, "_gpl", "");
KSYMTAB_FUNC(tap_destroy_cdev, "_gpl", "");

MODULE_INFO(depends, "");

