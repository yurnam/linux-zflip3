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

KSYMTAB_FUNC(ipmi_addr_src_to_str, "", "");
KSYMTAB_FUNC(ipmi_smi_watcher_register, "", "");
KSYMTAB_FUNC(ipmi_smi_watcher_unregister, "", "");
KSYMTAB_FUNC(ipmi_validate_addr, "", "");
KSYMTAB_FUNC(ipmi_addr_length, "", "");
KSYMTAB_FUNC(ipmi_create_user, "", "");
KSYMTAB_FUNC(ipmi_get_smi_info, "", "");
KSYMTAB_FUNC(ipmi_destroy_user, "", "");
KSYMTAB_FUNC(ipmi_get_version, "", "");
KSYMTAB_FUNC(ipmi_set_my_address, "", "");
KSYMTAB_FUNC(ipmi_get_my_address, "", "");
KSYMTAB_FUNC(ipmi_set_my_LUN, "", "");
KSYMTAB_FUNC(ipmi_get_my_LUN, "", "");
KSYMTAB_FUNC(ipmi_get_maintenance_mode, "", "");
KSYMTAB_FUNC(ipmi_set_maintenance_mode, "", "");
KSYMTAB_FUNC(ipmi_set_gets_events, "", "");
KSYMTAB_FUNC(ipmi_register_for_cmd, "", "");
KSYMTAB_FUNC(ipmi_unregister_for_cmd, "", "");
KSYMTAB_FUNC(ipmb_checksum, "", "");
KSYMTAB_FUNC(ipmi_request_settime, "", "");
KSYMTAB_FUNC(ipmi_request_supply_msgs, "", "");
KSYMTAB_FUNC(ipmi_poll_interface, "", "");
KSYMTAB_FUNC(ipmi_add_smi, "", "");
KSYMTAB_FUNC(ipmi_unregister_smi, "", "");
KSYMTAB_FUNC(ipmi_smi_msg_received, "", "");
KSYMTAB_FUNC(ipmi_smi_watchdog_pretimeout, "", "");
KSYMTAB_FUNC(ipmi_alloc_smi_msg, "", "");
KSYMTAB_FUNC(ipmi_free_recv_msg, "", "");

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "30EEE3CFD7D2A36509A142D");
