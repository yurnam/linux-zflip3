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

KSYMTAB_DATA(ath11k_debug_mask, "", "");
KSYMTAB_FUNC(ath11k_core_suspend, "", "");
KSYMTAB_FUNC(ath11k_core_resume, "", "");
KSYMTAB_FUNC(ath11k_core_pre_init, "", "");
KSYMTAB_FUNC(ath11k_core_init, "", "");
KSYMTAB_FUNC(ath11k_core_deinit, "", "");
KSYMTAB_FUNC(ath11k_core_free, "", "");
KSYMTAB_FUNC(ath11k_core_alloc, "", "");
KSYMTAB_FUNC(ath11k_hal_srng_init, "", "");
KSYMTAB_FUNC(ath11k_hal_srng_deinit, "", "");
KSYMTAB_DATA(ath11k_cold_boot_cal, "", "");
KSYMTAB_FUNC(ath11k_qmi_fwreset_from_cold_boot, "", "");
KSYMTAB_FUNC(ath11k_qmi_deinit_service, "", "");
KSYMTAB_FUNC(ath11k_dp_service_srng, "", "");
KSYMTAB_FUNC(ath11k_info, "", "");
KSYMTAB_FUNC(ath11k_err, "", "");
KSYMTAB_FUNC(ath11k_warn, "", "");
KSYMTAB_FUNC(ath11k_ce_per_engine_service, "", "");
KSYMTAB_FUNC(ath11k_ce_get_shadow_config, "", "");
KSYMTAB_FUNC(ath11k_ce_cleanup_pipes, "", "");
KSYMTAB_FUNC(ath11k_ce_rx_post_buf, "", "");
KSYMTAB_FUNC(ath11k_ce_free_pipes, "", "");
KSYMTAB_FUNC(ath11k_ce_alloc_pipes, "", "");
KSYMTAB_FUNC(ath11k_ce_get_attr_flags, "", "");
KSYMTAB_FUNC(ath11k_pcic_init_msi_config, "", "");
KSYMTAB_FUNC(ath11k_pcic_write32, "", "");
KSYMTAB_FUNC(ath11k_pcic_read32, "", "");
KSYMTAB_FUNC(ath11k_pcic_read, "", "");
KSYMTAB_FUNC(ath11k_pcic_get_msi_address, "", "");
KSYMTAB_FUNC(ath11k_pcic_get_user_msi_assignment, "", "");
KSYMTAB_FUNC(ath11k_pcic_get_ce_msi_idx, "", "");
KSYMTAB_FUNC(ath11k_pcic_free_irq, "", "");
KSYMTAB_FUNC(ath11k_pcic_ext_irq_enable, "", "");
KSYMTAB_FUNC(ath11k_pcic_ext_irq_disable, "", "");
KSYMTAB_FUNC(ath11k_pcic_config_irq, "", "");
KSYMTAB_FUNC(ath11k_pcic_ce_irqs_enable, "", "");
KSYMTAB_FUNC(ath11k_pcic_ce_irq_disable_sync, "", "");
KSYMTAB_FUNC(ath11k_pcic_stop, "", "");
KSYMTAB_FUNC(ath11k_pcic_start, "", "");
KSYMTAB_FUNC(ath11k_pcic_map_service_to_pipe, "", "");
KSYMTAB_FUNC(ath11k_pcic_register_pci_ops, "", "");
KSYMTAB_FUNC(ath11k_pci_enable_ce_irqs_except_wake_irq, "", "");
KSYMTAB_FUNC(ath11k_pci_disable_ce_irqs_except_wake_irq, "", "");

MODULE_INFO(depends, "mac80211,cfg80211,qmi_helpers");

