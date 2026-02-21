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

KSYMTAB_FUNC(mhi_register_controller, "_gpl", "");
KSYMTAB_FUNC(mhi_unregister_controller, "_gpl", "");
KSYMTAB_FUNC(mhi_alloc_controller, "_gpl", "");
KSYMTAB_FUNC(mhi_free_controller, "_gpl", "");
KSYMTAB_FUNC(mhi_prepare_for_power_up, "_gpl", "");
KSYMTAB_FUNC(mhi_unprepare_after_power_down, "_gpl", "");
KSYMTAB_FUNC(__mhi_driver_register, "_gpl", "");
KSYMTAB_FUNC(mhi_driver_unregister, "_gpl", "");
KSYMTAB_FUNC(mhi_get_exec_env, "_gpl", "");
KSYMTAB_FUNC(mhi_get_mhi_state, "_gpl", "");
KSYMTAB_FUNC(mhi_soc_reset, "_gpl", "");
KSYMTAB_FUNC(mhi_get_free_desc_count, "_gpl", "");
KSYMTAB_FUNC(mhi_notify, "_gpl", "");
KSYMTAB_FUNC(mhi_queue_skb, "_gpl", "");
KSYMTAB_FUNC(mhi_queue_dma, "_gpl", "");
KSYMTAB_FUNC(mhi_queue_buf, "_gpl", "");
KSYMTAB_FUNC(mhi_queue_is_full, "_gpl", "");
KSYMTAB_FUNC(mhi_prepare_for_transfer, "_gpl", "");
KSYMTAB_FUNC(mhi_prepare_for_transfer_autoqueue, "_gpl", "");
KSYMTAB_FUNC(mhi_unprepare_from_transfer, "_gpl", "");
KSYMTAB_FUNC(mhi_pm_suspend, "_gpl", "");
KSYMTAB_FUNC(mhi_pm_resume, "_gpl", "");
KSYMTAB_FUNC(mhi_pm_resume_force, "_gpl", "");
KSYMTAB_FUNC(mhi_async_power_up, "_gpl", "");
KSYMTAB_FUNC(mhi_power_down, "_gpl", "");
KSYMTAB_FUNC(mhi_sync_power_up, "", "");
KSYMTAB_FUNC(mhi_force_rddm_mode, "_gpl", "");
KSYMTAB_FUNC(mhi_device_get, "_gpl", "");
KSYMTAB_FUNC(mhi_device_get_sync, "_gpl", "");
KSYMTAB_FUNC(mhi_device_put, "_gpl", "");
KSYMTAB_FUNC(mhi_download_rddm_image, "_gpl", "");

MODULE_INFO(depends, "");

