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

KSYMTAB_FUNC(typec_altmode_update_active, "_gpl", "");
KSYMTAB_FUNC(typec_altmode2port, "_gpl", "");
KSYMTAB_FUNC(typec_unregister_altmode, "_gpl", "");
KSYMTAB_FUNC(typec_partner_set_identity, "_gpl", "");
KSYMTAB_FUNC(typec_partner_set_pd_revision, "_gpl", "");
KSYMTAB_FUNC(typec_partner_set_usb_power_delivery, "_gpl", "");
KSYMTAB_FUNC(typec_partner_set_num_altmodes, "_gpl", "");
KSYMTAB_FUNC(typec_partner_register_altmode, "_gpl", "");
KSYMTAB_FUNC(typec_partner_set_svdm_version, "_gpl", "");
KSYMTAB_FUNC(typec_partner_usb_power_delivery_register, "_gpl", "");
KSYMTAB_FUNC(typec_register_partner, "_gpl", "");
KSYMTAB_FUNC(typec_unregister_partner, "_gpl", "");
KSYMTAB_FUNC(typec_plug_set_num_altmodes, "_gpl", "");
KSYMTAB_FUNC(typec_plug_register_altmode, "_gpl", "");
KSYMTAB_FUNC(typec_register_plug, "_gpl", "");
KSYMTAB_FUNC(typec_unregister_plug, "_gpl", "");
KSYMTAB_FUNC(typec_cable_get, "_gpl", "");
KSYMTAB_FUNC(typec_cable_put, "_gpl", "");
KSYMTAB_FUNC(typec_cable_is_active, "_gpl", "");
KSYMTAB_FUNC(typec_cable_set_identity, "_gpl", "");
KSYMTAB_FUNC(typec_register_cable, "_gpl", "");
KSYMTAB_FUNC(typec_unregister_cable, "_gpl", "");
KSYMTAB_FUNC(typec_port_set_usb_power_delivery, "_gpl", "");
KSYMTAB_FUNC(typec_set_data_role, "_gpl", "");
KSYMTAB_FUNC(typec_set_pwr_role, "_gpl", "");
KSYMTAB_FUNC(typec_set_vconn_role, "_gpl", "");
KSYMTAB_FUNC(typec_set_pwr_opmode, "_gpl", "");
KSYMTAB_FUNC(typec_find_pwr_opmode, "_gpl", "");
KSYMTAB_FUNC(typec_find_orientation, "_gpl", "");
KSYMTAB_FUNC(typec_find_port_power_role, "_gpl", "");
KSYMTAB_FUNC(typec_find_power_role, "_gpl", "");
KSYMTAB_FUNC(typec_find_port_data_role, "_gpl", "");
KSYMTAB_FUNC(typec_set_orientation, "_gpl", "");
KSYMTAB_FUNC(typec_get_orientation, "_gpl", "");
KSYMTAB_FUNC(typec_set_mode, "_gpl", "");
KSYMTAB_FUNC(typec_get_negotiated_svdm_version, "_gpl", "");
KSYMTAB_FUNC(typec_get_drvdata, "_gpl", "");
KSYMTAB_FUNC(typec_get_fw_cap, "_gpl", "");
KSYMTAB_FUNC(typec_port_register_altmode, "_gpl", "");
KSYMTAB_FUNC(typec_port_register_altmodes, "_gpl", "");
KSYMTAB_FUNC(typec_register_port, "_gpl", "");
KSYMTAB_FUNC(typec_unregister_port, "_gpl", "");
KSYMTAB_FUNC(fwnode_typec_switch_get, "_gpl", "");
KSYMTAB_FUNC(typec_switch_put, "_gpl", "");
KSYMTAB_FUNC(typec_switch_register, "_gpl", "");
KSYMTAB_FUNC(typec_switch_set, "_gpl", "");
KSYMTAB_FUNC(typec_switch_unregister, "_gpl", "");
KSYMTAB_FUNC(typec_switch_set_drvdata, "_gpl", "");
KSYMTAB_FUNC(typec_switch_get_drvdata, "_gpl", "");
KSYMTAB_FUNC(fwnode_typec_mux_get, "_gpl", "");
KSYMTAB_FUNC(typec_mux_put, "_gpl", "");
KSYMTAB_FUNC(typec_mux_set, "_gpl", "");
KSYMTAB_FUNC(typec_mux_register, "_gpl", "");
KSYMTAB_FUNC(typec_mux_unregister, "_gpl", "");
KSYMTAB_FUNC(typec_mux_set_drvdata, "_gpl", "");
KSYMTAB_FUNC(typec_mux_get_drvdata, "_gpl", "");
KSYMTAB_FUNC(typec_altmode_notify, "_gpl", "");
KSYMTAB_FUNC(typec_altmode_enter, "_gpl", "");
KSYMTAB_FUNC(typec_altmode_exit, "_gpl", "");
KSYMTAB_FUNC(typec_altmode_attention, "_gpl", "");
KSYMTAB_FUNC(typec_altmode_vdm, "_gpl", "");
KSYMTAB_FUNC(typec_altmode_get_partner, "_gpl", "");
KSYMTAB_FUNC(typec_altmode_get_plug, "_gpl", "");
KSYMTAB_FUNC(typec_altmode_put_plug, "_gpl", "");
KSYMTAB_FUNC(__typec_altmode_register_driver, "_gpl", "");
KSYMTAB_FUNC(typec_altmode_unregister_driver, "_gpl", "");
KSYMTAB_FUNC(typec_match_altmode, "_gpl", "");
KSYMTAB_FUNC(usb_power_delivery_register_capabilities, "_gpl", "");
KSYMTAB_FUNC(usb_power_delivery_unregister_capabilities, "_gpl", "");
KSYMTAB_FUNC(usb_power_delivery_register, "_gpl", "");
KSYMTAB_FUNC(usb_power_delivery_unregister, "_gpl", "");
KSYMTAB_FUNC(usb_power_delivery_link_device, "_gpl", "");
KSYMTAB_FUNC(usb_power_delivery_unlink_device, "_gpl", "");
KSYMTAB_FUNC(fwnode_typec_retimer_get, "_gpl", "");
KSYMTAB_FUNC(typec_retimer_put, "_gpl", "");
KSYMTAB_FUNC(typec_retimer_set, "_gpl", "");
KSYMTAB_FUNC(typec_retimer_register, "_gpl", "");
KSYMTAB_FUNC(typec_retimer_unregister, "_gpl", "");
KSYMTAB_FUNC(typec_retimer_get_drvdata, "_gpl", "");

MODULE_INFO(depends, "");

