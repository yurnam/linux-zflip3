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

KSYMTAB_FUNC(usbnet_get_endpoints, "_gpl", "");
KSYMTAB_FUNC(usbnet_get_ethernet_addr, "_gpl", "");
KSYMTAB_FUNC(usbnet_status_start, "_gpl", "");
KSYMTAB_FUNC(usbnet_status_stop, "_gpl", "");
KSYMTAB_FUNC(usbnet_skb_return, "_gpl", "");
KSYMTAB_FUNC(usbnet_update_max_qlen, "_gpl", "");
KSYMTAB_FUNC(usbnet_change_mtu, "_gpl", "");
KSYMTAB_FUNC(usbnet_defer_kevent, "_gpl", "");
KSYMTAB_FUNC(usbnet_pause_rx, "_gpl", "");
KSYMTAB_FUNC(usbnet_resume_rx, "_gpl", "");
KSYMTAB_FUNC(usbnet_purge_paused_rxq, "_gpl", "");
KSYMTAB_FUNC(usbnet_unlink_rx_urbs, "_gpl", "");
KSYMTAB_FUNC(usbnet_stop, "_gpl", "");
KSYMTAB_FUNC(usbnet_open, "_gpl", "");
KSYMTAB_FUNC(usbnet_get_link_ksettings_mii, "_gpl", "");
KSYMTAB_FUNC(usbnet_get_link_ksettings_internal, "_gpl", "");
KSYMTAB_FUNC(usbnet_set_link_ksettings_mii, "_gpl", "");
KSYMTAB_FUNC(usbnet_get_link, "_gpl", "");
KSYMTAB_FUNC(usbnet_nway_reset, "_gpl", "");
KSYMTAB_FUNC(usbnet_get_drvinfo, "_gpl", "");
KSYMTAB_FUNC(usbnet_get_msglevel, "_gpl", "");
KSYMTAB_FUNC(usbnet_set_msglevel, "_gpl", "");
KSYMTAB_FUNC(usbnet_set_rx_mode, "_gpl", "");
KSYMTAB_FUNC(usbnet_tx_timeout, "_gpl", "");
KSYMTAB_FUNC(usbnet_start_xmit, "_gpl", "");
KSYMTAB_FUNC(usbnet_disconnect, "_gpl", "");
KSYMTAB_FUNC(usbnet_probe, "_gpl", "");
KSYMTAB_FUNC(usbnet_suspend, "_gpl", "");
KSYMTAB_FUNC(usbnet_resume, "_gpl", "");
KSYMTAB_FUNC(usbnet_device_suggests_idle, "", "");
KSYMTAB_FUNC(usbnet_manage_power, "", "");
KSYMTAB_FUNC(usbnet_link_change, "", "");
KSYMTAB_FUNC(usbnet_read_cmd, "_gpl", "");
KSYMTAB_FUNC(usbnet_write_cmd, "_gpl", "");
KSYMTAB_FUNC(usbnet_read_cmd_nopm, "_gpl", "");
KSYMTAB_FUNC(usbnet_write_cmd_nopm, "_gpl", "");
KSYMTAB_FUNC(usbnet_write_cmd_async, "_gpl", "");

MODULE_INFO(depends, "");

