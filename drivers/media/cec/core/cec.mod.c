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

KSYMTAB_FUNC(cec_allocate_adapter, "_gpl", "");
KSYMTAB_FUNC(cec_register_adapter, "_gpl", "");
KSYMTAB_FUNC(cec_unregister_adapter, "_gpl", "");
KSYMTAB_FUNC(cec_delete_adapter, "_gpl", "");
KSYMTAB_FUNC(cec_get_edid_phys_addr, "_gpl", "");
KSYMTAB_FUNC(cec_fill_conn_info_from_drm, "_gpl", "");
KSYMTAB_FUNC(cec_queue_pin_cec_event, "_gpl", "");
KSYMTAB_FUNC(cec_queue_pin_hpd_event, "_gpl", "");
KSYMTAB_FUNC(cec_queue_pin_5v_event, "_gpl", "");
KSYMTAB_FUNC(cec_transmit_done_ts, "_gpl", "");
KSYMTAB_FUNC(cec_transmit_attempt_done_ts, "_gpl", "");
KSYMTAB_FUNC(cec_transmit_msg, "_gpl", "");
KSYMTAB_FUNC(cec_received_msg_ts, "_gpl", "");
KSYMTAB_FUNC(cec_s_phys_addr, "_gpl", "");
KSYMTAB_FUNC(cec_s_phys_addr_from_edid, "_gpl", "");
KSYMTAB_FUNC(cec_s_conn_info, "_gpl", "");
KSYMTAB_FUNC(cec_s_log_addrs, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_conn_register, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_conn_unregister, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_cec_adap_register, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_cec_adap_unregister, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_set_phys_addr, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_set_phys_addr_from_edid, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_parse_hdmi_phandle, "_gpl", "");

MODULE_INFO(depends, "");

