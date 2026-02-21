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

KSYMTAB_FUNC(usb_gadget_get_string, "_gpl", "");
KSYMTAB_FUNC(usb_validate_langid, "_gpl", "");
KSYMTAB_FUNC(usb_descriptor_fillbuf, "_gpl", "");
KSYMTAB_FUNC(usb_gadget_config_buf, "_gpl", "");
KSYMTAB_FUNC(usb_copy_descriptors, "_gpl", "");
KSYMTAB_FUNC(usb_assign_descriptors, "_gpl", "");
KSYMTAB_FUNC(usb_free_all_descriptors, "_gpl", "");
KSYMTAB_FUNC(usb_otg_descriptor_alloc, "_gpl", "");
KSYMTAB_FUNC(usb_otg_descriptor_init, "_gpl", "");
KSYMTAB_FUNC(usb_ep_autoconfig_ss, "_gpl", "");
KSYMTAB_FUNC(usb_ep_autoconfig, "_gpl", "");
KSYMTAB_FUNC(usb_ep_autoconfig_release, "_gpl", "");
KSYMTAB_FUNC(usb_ep_autoconfig_reset, "_gpl", "");
KSYMTAB_FUNC(config_ep_by_speed_and_alt, "_gpl", "");
KSYMTAB_FUNC(config_ep_by_speed, "_gpl", "");
KSYMTAB_FUNC(usb_add_function, "_gpl", "");
KSYMTAB_FUNC(usb_remove_function, "_gpl", "");
KSYMTAB_FUNC(usb_function_deactivate, "_gpl", "");
KSYMTAB_FUNC(usb_function_activate, "_gpl", "");
KSYMTAB_FUNC(usb_interface_id, "_gpl", "");
KSYMTAB_FUNC(usb_func_wakeup, "_gpl", "");
KSYMTAB_FUNC(usb_add_config_only, "_gpl", "");
KSYMTAB_FUNC(usb_add_config, "_gpl", "");
KSYMTAB_FUNC(usb_string_id, "_gpl", "");
KSYMTAB_FUNC(usb_string_ids_tab, "_gpl", "");
KSYMTAB_FUNC(usb_gstrings_attach, "_gpl", "");
KSYMTAB_FUNC(usb_string_ids_n, "_gpl", "");
KSYMTAB_FUNC(usb_composite_probe, "_gpl", "");
KSYMTAB_FUNC(usb_composite_unregister, "_gpl", "");
KSYMTAB_FUNC(usb_composite_setup_continue, "_gpl", "");
KSYMTAB_FUNC(usb_composite_overwrite_options, "_gpl", "");
KSYMTAB_FUNC(usb_get_function_instance, "_gpl", "");
KSYMTAB_FUNC(usb_get_function, "_gpl", "");
KSYMTAB_FUNC(usb_put_function_instance, "_gpl", "");
KSYMTAB_FUNC(usb_put_function, "_gpl", "");
KSYMTAB_FUNC(usb_function_register, "_gpl", "");
KSYMTAB_FUNC(usb_function_unregister, "_gpl", "");
KSYMTAB_FUNC(usb_os_desc_prepare_interf_dir, "", "");
KSYMTAB_FUNC(unregister_gadget_item, "_gpl", "");
KSYMTAB_FUNC(alloc_ep_req, "_gpl", "");

MODULE_INFO(depends, "");

