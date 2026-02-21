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

KSYMTAB_FUNC(nfc_fw_download_done, "", "");
KSYMTAB_FUNC(nfc_dep_link_is_up, "", "");
KSYMTAB_FUNC(nfc_find_se, "", "");
KSYMTAB_FUNC(nfc_set_remote_general_bytes, "", "");
KSYMTAB_FUNC(nfc_get_local_general_bytes, "", "");
KSYMTAB_FUNC(nfc_tm_data_received, "", "");
KSYMTAB_FUNC(nfc_tm_activated, "", "");
KSYMTAB_FUNC(nfc_tm_deactivated, "", "");
KSYMTAB_FUNC(nfc_alloc_recv_skb, "", "");
KSYMTAB_FUNC(nfc_targets_found, "", "");
KSYMTAB_FUNC(nfc_target_lost, "", "");
KSYMTAB_FUNC(nfc_driver_failure, "", "");
KSYMTAB_FUNC(nfc_add_se, "", "");
KSYMTAB_FUNC(nfc_remove_se, "", "");
KSYMTAB_FUNC(nfc_se_transaction, "", "");
KSYMTAB_FUNC(nfc_se_connectivity, "", "");
KSYMTAB_DATA(nfc_class, "", "");
KSYMTAB_FUNC(nfc_allocate_device, "", "");
KSYMTAB_FUNC(nfc_register_device, "", "");
KSYMTAB_FUNC(nfc_unregister_device, "", "");
KSYMTAB_FUNC(__nfc_alloc_vendor_cmd_reply_skb, "", "");
KSYMTAB_FUNC(nfc_vendor_cmd_reply, "", "");
KSYMTAB_FUNC(nfc_proto_register, "", "");
KSYMTAB_FUNC(nfc_proto_unregister, "", "");
KSYMTAB_FUNC(nfc_send_to_raw_sock, "", "");

MODULE_INFO(depends, "rfkill");


MODULE_INFO(srcversion, "89E3DE6DF2DDD5D6AFA256B");
