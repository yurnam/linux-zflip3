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

KSYMTAB_FUNC(nci_get_conn_info_by_dest_type_params, "", "");
KSYMTAB_FUNC(nci_req_complete, "", "");
KSYMTAB_FUNC(nci_prop_cmd, "", "");
KSYMTAB_FUNC(nci_core_cmd, "", "");
KSYMTAB_FUNC(nci_core_reset, "", "");
KSYMTAB_FUNC(nci_core_init, "", "");
KSYMTAB_FUNC(nci_nfcc_loopback, "", "");
KSYMTAB_FUNC(nci_set_config, "", "");
KSYMTAB_FUNC(nci_nfcee_discover, "", "");
KSYMTAB_FUNC(nci_nfcee_mode_set, "", "");
KSYMTAB_FUNC(nci_core_conn_create, "", "");
KSYMTAB_FUNC(nci_core_conn_close, "", "");
KSYMTAB_FUNC(nci_allocate_device, "", "");
KSYMTAB_FUNC(nci_free_device, "", "");
KSYMTAB_FUNC(nci_register_device, "", "");
KSYMTAB_FUNC(nci_unregister_device, "", "");
KSYMTAB_FUNC(nci_recv_frame, "", "");
KSYMTAB_FUNC(nci_send_frame, "", "");
KSYMTAB_FUNC(nci_send_cmd, "", "");
KSYMTAB_FUNC(nci_conn_max_data_pkt_payload_size, "", "");
KSYMTAB_FUNC(nci_send_data, "", "");
KSYMTAB_FUNC(nci_to_errno, "", "");
KSYMTAB_FUNC(nci_hci_send_event, "", "");
KSYMTAB_FUNC(nci_hci_send_cmd, "", "");
KSYMTAB_FUNC(nci_hci_clear_all_pipes, "", "");
KSYMTAB_FUNC(nci_hci_open_pipe, "", "");
KSYMTAB_FUNC(nci_hci_set_param, "", "");
KSYMTAB_FUNC(nci_hci_get_param, "", "");
KSYMTAB_FUNC(nci_hci_connect_gate, "", "");
KSYMTAB_FUNC(nci_hci_dev_session_init, "", "");

MODULE_INFO(depends, "nfc");

