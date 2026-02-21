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

KSYMTAB_FUNC(dsa_devlink_param_get, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_param_set, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_params_register, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_params_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_resource_register, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_resources_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_resource_occ_get_register, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_resource_occ_get_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_region_create, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_port_region_create, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_region_destroy, "_gpl", "");
KSYMTAB_FUNC(dsa_flush_workqueue, "_gpl", "");
KSYMTAB_FUNC(dsa_switch_find, "_gpl", "");
KSYMTAB_FUNC(dsa_register_switch, "_gpl", "");
KSYMTAB_FUNC(dsa_unregister_switch, "_gpl", "");
KSYMTAB_FUNC(dsa_switch_shutdown, "_gpl", "");
KSYMTAB_FUNC(dsa_switch_suspend, "_gpl", "");
KSYMTAB_FUNC(dsa_switch_resume, "_gpl", "");
KSYMTAB_FUNC(dsa_port_from_netdev, "_gpl", "");
KSYMTAB_FUNC(dsa_fdb_present_in_other_db, "_gpl", "");
KSYMTAB_FUNC(dsa_mdb_present_in_other_db, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_drivers_register, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_drivers_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_bridge_vid, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_standalone_vid, "_gpl", "");
KSYMTAB_FUNC(dsa_8021q_rx_switch_id, "_gpl", "");
KSYMTAB_FUNC(dsa_8021q_rx_source_port, "_gpl", "");
KSYMTAB_FUNC(vid_is_dsa_8021q, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_bridge_join, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_bridge_leave, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_register, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_8021q_xmit, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_find_port_by_vbid, "_gpl", "");
KSYMTAB_FUNC(dsa_8021q_rcv, "_gpl", "");
KSYMTAB_FUNC(dsa_enqueue_skb, "_gpl", "");
KSYMTAB_FUNC(dsa_port_phylink_mac_change, "_gpl", "");
KSYMTAB_FUNC(dsa_user_dev_check, "_gpl", "");

MODULE_INFO(depends, "bridge");

