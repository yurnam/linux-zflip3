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

KSYMTAB_FUNC(usb_wwan_dtr_rts, "", "");
KSYMTAB_FUNC(usb_wwan_tiocmget, "", "");
KSYMTAB_FUNC(usb_wwan_tiocmset, "", "");
KSYMTAB_FUNC(usb_wwan_write, "", "");
KSYMTAB_FUNC(usb_wwan_write_room, "", "");
KSYMTAB_FUNC(usb_wwan_chars_in_buffer, "", "");
KSYMTAB_FUNC(usb_wwan_open, "", "");
KSYMTAB_FUNC(usb_wwan_close, "", "");
KSYMTAB_FUNC(usb_wwan_port_probe, "_gpl", "");
KSYMTAB_FUNC(usb_wwan_port_remove, "", "");
KSYMTAB_FUNC(usb_wwan_suspend, "", "");
KSYMTAB_FUNC(usb_wwan_resume, "", "");

MODULE_INFO(depends, "usbserial");

