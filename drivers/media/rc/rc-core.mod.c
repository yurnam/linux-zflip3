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

KSYMTAB_FUNC(rc_map_get, "_gpl", "");
KSYMTAB_FUNC(rc_map_register, "_gpl", "");
KSYMTAB_FUNC(rc_map_unregister, "_gpl", "");
KSYMTAB_FUNC(rc_g_keycode_from_table, "_gpl", "");
KSYMTAB_FUNC(rc_keyup, "_gpl", "");
KSYMTAB_FUNC(rc_repeat, "_gpl", "");
KSYMTAB_FUNC(rc_keydown, "_gpl", "");
KSYMTAB_FUNC(rc_keydown_notimeout, "_gpl", "");
KSYMTAB_FUNC(rc_allocate_device, "_gpl", "");
KSYMTAB_FUNC(rc_free_device, "_gpl", "");
KSYMTAB_FUNC(devm_rc_allocate_device, "_gpl", "");
KSYMTAB_FUNC(rc_register_device, "_gpl", "");
KSYMTAB_FUNC(devm_rc_register_device, "_gpl", "");
KSYMTAB_FUNC(rc_unregister_device, "_gpl", "");
KSYMTAB_FUNC(ir_raw_event_store, "_gpl", "");
KSYMTAB_FUNC(ir_raw_event_store_edge, "_gpl", "");
KSYMTAB_FUNC(ir_raw_event_store_with_timeout, "_gpl", "");
KSYMTAB_FUNC(ir_raw_event_store_with_filter, "_gpl", "");
KSYMTAB_FUNC(ir_raw_event_set_idle, "_gpl", "");
KSYMTAB_FUNC(ir_raw_event_handle, "_gpl", "");
KSYMTAB_FUNC(ir_raw_gen_manchester, "", "");
KSYMTAB_FUNC(ir_raw_gen_pd, "", "");
KSYMTAB_FUNC(ir_raw_gen_pl, "", "");
KSYMTAB_FUNC(ir_raw_encode_scancode, "", "");
KSYMTAB_FUNC(ir_raw_encode_carrier, "", "");
KSYMTAB_FUNC(ir_raw_handler_register, "", "");
KSYMTAB_FUNC(ir_raw_handler_unregister, "", "");

MODULE_INFO(depends, "");

