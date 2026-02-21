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

KSYMTAB_FUNC(qmi_encode_message, "_gpl", "");
KSYMTAB_FUNC(qmi_decode_message, "_gpl", "");
KSYMTAB_DATA(qmi_response_type_v01_ei, "_gpl", "");
KSYMTAB_FUNC(qmi_add_lookup, "_gpl", "");
KSYMTAB_FUNC(qmi_add_server, "_gpl", "");
KSYMTAB_FUNC(qmi_txn_init, "_gpl", "");
KSYMTAB_FUNC(qmi_txn_wait, "_gpl", "");
KSYMTAB_FUNC(qmi_txn_cancel, "_gpl", "");
KSYMTAB_FUNC(qmi_handle_init, "_gpl", "");
KSYMTAB_FUNC(qmi_handle_release, "_gpl", "");
KSYMTAB_FUNC(qmi_send_request, "_gpl", "");
KSYMTAB_FUNC(qmi_send_response, "_gpl", "");
KSYMTAB_FUNC(qmi_send_indication, "_gpl", "");

MODULE_INFO(depends, "");

