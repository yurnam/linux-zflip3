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

KSYMTAB_FUNC(usb_serial_claim_interface, "_gpl", "");
KSYMTAB_FUNC(usb_serial_port_softint, "_gpl", "");
KSYMTAB_FUNC(usb_serial_suspend, "", "");
KSYMTAB_FUNC(usb_serial_resume, "", "");
KSYMTAB_FUNC(usb_serial_register_drivers, "_gpl", "");
KSYMTAB_FUNC(usb_serial_deregister_drivers, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_open, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_close, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_write_start, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_write, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_chars_in_buffer, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_wait_until_sent, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_submit_read_urbs, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_process_read_urb, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_read_bulk_callback, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_write_bulk_callback, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_throttle, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_unthrottle, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_tiocmiwait, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_get_icount, "_gpl", "");
KSYMTAB_FUNC(usb_serial_handle_dcd_change, "_gpl", "");
KSYMTAB_FUNC(usb_serial_generic_resume, "_gpl", "");

MODULE_INFO(depends, "");

