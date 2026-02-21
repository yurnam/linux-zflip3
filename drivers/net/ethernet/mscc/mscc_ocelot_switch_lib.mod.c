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

KSYMTAB_FUNC(ocelot_mact_learn, "", "");
KSYMTAB_FUNC(ocelot_mact_forget, "", "");
KSYMTAB_FUNC(ocelot_mact_lookup, "", "");
KSYMTAB_FUNC(ocelot_mact_learn_streamdata, "", "");
KSYMTAB_FUNC(ocelot_pll5_init, "", "");
KSYMTAB_FUNC(ocelot_bridge_num_find, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_vlan_filtering, "", "");
KSYMTAB_FUNC(ocelot_vlan_prepare, "", "");
KSYMTAB_FUNC(ocelot_vlan_add, "", "");
KSYMTAB_FUNC(ocelot_vlan_del, "", "");
KSYMTAB_FUNC(ocelot_port_configure_serdes, "_gpl", "");
KSYMTAB_FUNC(ocelot_phylink_mac_config, "_gpl", "");
KSYMTAB_FUNC(ocelot_phylink_mac_link_down, "_gpl", "");
KSYMTAB_FUNC(ocelot_phylink_mac_link_up, "_gpl", "");
KSYMTAB_FUNC(ocelot_ptp_rx_timestamp, "", "");
KSYMTAB_FUNC(ocelot_xtr_poll_frame, "", "");
KSYMTAB_FUNC(ocelot_can_inject, "", "");
KSYMTAB_FUNC(ocelot_ifh_port_set, "", "");
KSYMTAB_FUNC(ocelot_port_inject_frame, "", "");
KSYMTAB_FUNC(ocelot_drain_cpu_queue, "", "");
KSYMTAB_FUNC(ocelot_fdb_add, "", "");
KSYMTAB_FUNC(ocelot_fdb_del, "", "");
KSYMTAB_FUNC(ocelot_mact_flush, "_gpl", "");
KSYMTAB_FUNC(ocelot_fdb_dump, "", "");
KSYMTAB_FUNC(ocelot_bond_get_id, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_assigned_dsa_8021q_cpu_mask, "_gpl", "");
KSYMTAB_FUNC(ocelot_get_bridge_fwd_mask, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_setup_dsa_8021q_cpu, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_teardown_dsa_8021q_cpu, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_assign_dsa_8021q_cpu, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_unassign_dsa_8021q_cpu, "_gpl", "");
KSYMTAB_FUNC(ocelot_bridge_stp_state_set, "", "");
KSYMTAB_FUNC(ocelot_set_ageing_time, "", "");
KSYMTAB_FUNC(ocelot_port_mdb_add, "", "");
KSYMTAB_FUNC(ocelot_port_mdb_del, "", "");
KSYMTAB_FUNC(ocelot_port_bridge_join, "", "");
KSYMTAB_FUNC(ocelot_port_bridge_leave, "", "");
KSYMTAB_FUNC(ocelot_migrate_mdbs, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_lag_join, "", "");
KSYMTAB_FUNC(ocelot_port_lag_leave, "", "");
KSYMTAB_FUNC(ocelot_port_lag_change, "", "");
KSYMTAB_FUNC(ocelot_lag_fdb_add, "_gpl", "");
KSYMTAB_FUNC(ocelot_lag_fdb_del, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_set_maxlen, "", "");
KSYMTAB_FUNC(ocelot_get_max_mtu, "", "");
KSYMTAB_FUNC(ocelot_port_pre_bridge_flags, "", "");
KSYMTAB_FUNC(ocelot_port_bridge_flags, "", "");
KSYMTAB_FUNC(ocelot_port_get_default_prio, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_set_default_prio, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_get_dscp_prio, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_add_dscp_prio, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_del_dscp_prio, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_mirror_add, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_mirror_del, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_mqprio, "_gpl", "");
KSYMTAB_FUNC(ocelot_init_port, "", "");
KSYMTAB_FUNC(ocelot_reset, "", "");
KSYMTAB_FUNC(ocelot_init, "", "");
KSYMTAB_FUNC(ocelot_deinit, "", "");
KSYMTAB_FUNC(ocelot_deinit_port, "", "");
KSYMTAB_FUNC(ocelot_wm_enc, "", "");
KSYMTAB_FUNC(ocelot_wm_dec, "", "");
KSYMTAB_FUNC(ocelot_wm_stat, "", "");
KSYMTAB_FUNC(ocelot_sb_pool_get, "", "");
KSYMTAB_FUNC(ocelot_sb_pool_set, "", "");
KSYMTAB_FUNC(ocelot_sb_port_pool_get, "", "");
KSYMTAB_FUNC(ocelot_sb_port_pool_set, "", "");
KSYMTAB_FUNC(ocelot_sb_tc_pool_bind_get, "", "");
KSYMTAB_FUNC(ocelot_sb_tc_pool_bind_set, "", "");
KSYMTAB_FUNC(ocelot_sb_occ_snapshot, "", "");
KSYMTAB_FUNC(ocelot_sb_occ_max_clear, "", "");
KSYMTAB_FUNC(ocelot_sb_occ_port_pool_get, "", "");
KSYMTAB_FUNC(ocelot_sb_occ_tc_port_bind_get, "", "");
KSYMTAB_FUNC(ocelot_devlink_sb_register, "", "");
KSYMTAB_FUNC(ocelot_devlink_sb_unregister, "", "");
KSYMTAB_FUNC(ocelot_cls_flower_replace, "_gpl", "");
KSYMTAB_FUNC(ocelot_cls_flower_destroy, "_gpl", "");
KSYMTAB_FUNC(ocelot_cls_flower_stats, "_gpl", "");
KSYMTAB_FUNC(__ocelot_bulk_read_ix, "_gpl", "");
KSYMTAB_FUNC(__ocelot_read_ix, "_gpl", "");
KSYMTAB_FUNC(__ocelot_write_ix, "_gpl", "");
KSYMTAB_FUNC(__ocelot_rmw_ix, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_readl, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_writel, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_rmwl, "_gpl", "");
KSYMTAB_FUNC(ocelot_regfields_init, "_gpl", "");
KSYMTAB_FUNC(ocelot_regmap_init, "_gpl", "");
KSYMTAB_FUNC(ocelot_mm_irq, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_set_mm, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_get_mm, "_gpl", "");
KSYMTAB_FUNC(ocelot_policer_validate, "", "");
KSYMTAB_FUNC(ocelot_port_policer_add, "", "");
KSYMTAB_FUNC(ocelot_port_policer_del, "", "");
KSYMTAB_FUNC(ocelot_ptp_gettime64, "", "");
KSYMTAB_FUNC(ocelot_ptp_settime64, "", "");
KSYMTAB_FUNC(ocelot_ptp_adjtime, "", "");
KSYMTAB_FUNC(ocelot_ptp_adjfine, "", "");
KSYMTAB_FUNC(ocelot_ptp_verify, "", "");
KSYMTAB_FUNC(ocelot_ptp_enable, "", "");
KSYMTAB_FUNC(ocelot_hwstamp_get, "", "");
KSYMTAB_FUNC(ocelot_hwstamp_set, "", "");
KSYMTAB_FUNC(ocelot_get_ts_info, "", "");
KSYMTAB_FUNC(ocelot_port_txtstamp_request, "", "");
KSYMTAB_FUNC(ocelot_get_txtstamp, "", "");
KSYMTAB_FUNC(ocelot_init_timestamp, "", "");
KSYMTAB_FUNC(ocelot_deinit_timestamp, "", "");
KSYMTAB_FUNC(ocelot_get_strings, "", "");
KSYMTAB_FUNC(ocelot_get_sset_count, "", "");
KSYMTAB_FUNC(ocelot_get_ethtool_stats, "", "");
KSYMTAB_FUNC(ocelot_port_get_pause_stats, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_get_mm_stats, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_get_rmon_stats, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_get_eth_ctrl_stats, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_get_eth_mac_stats, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_get_eth_phy_stats, "_gpl", "");
KSYMTAB_FUNC(ocelot_port_get_stats64, "", "");
KSYMTAB_FUNC(ocelot_vcap_policer_add, "", "");
KSYMTAB_FUNC(ocelot_vcap_policer_del, "", "");
KSYMTAB_FUNC(ocelot_vcap_block_find_filter_by_id, "", "");
KSYMTAB_FUNC(ocelot_vcap_filter_add, "", "");
KSYMTAB_FUNC(ocelot_vcap_filter_del, "", "");
KSYMTAB_FUNC(ocelot_vcap_filter_replace, "", "");
KSYMTAB_DATA(vsc7514_regfields, "", "");
KSYMTAB_DATA(vsc7514_regmap, "", "");
KSYMTAB_DATA(vsc7514_vcap_props, "", "");

MODULE_INFO(depends, "bridge");

