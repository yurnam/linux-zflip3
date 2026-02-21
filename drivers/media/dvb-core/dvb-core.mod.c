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

KSYMTAB_FUNC(dvb_generic_open, "", "");
KSYMTAB_FUNC(dvb_generic_release, "", "");
KSYMTAB_FUNC(dvb_generic_ioctl, "", "");
KSYMTAB_FUNC(dvb_register_device, "", "");
KSYMTAB_FUNC(dvb_remove_device, "", "");
KSYMTAB_FUNC(dvb_device_get, "", "");
KSYMTAB_FUNC(dvb_unregister_device, "", "");
KSYMTAB_FUNC(dvb_register_adapter, "", "");
KSYMTAB_FUNC(dvb_unregister_adapter, "", "");
KSYMTAB_FUNC(dvb_module_probe, "_gpl", "");
KSYMTAB_FUNC(dvb_module_release, "_gpl", "");
KSYMTAB_FUNC(dvb_dmxdev_init, "", "");
KSYMTAB_FUNC(dvb_dmxdev_release, "", "");
KSYMTAB_FUNC(dvb_dmx_swfilter_packets, "", "");
KSYMTAB_FUNC(dvb_dmx_swfilter, "", "");
KSYMTAB_FUNC(dvb_dmx_swfilter_204, "", "");
KSYMTAB_FUNC(dvb_dmx_swfilter_raw, "", "");
KSYMTAB_FUNC(dvb_dmx_init, "", "");
KSYMTAB_FUNC(dvb_dmx_release, "", "");
KSYMTAB_FUNC(dvb_ca_en50221_camchange_irq, "", "");
KSYMTAB_FUNC(dvb_ca_en50221_camready_irq, "", "");
KSYMTAB_FUNC(dvb_ca_en50221_frda_irq, "", "");
KSYMTAB_FUNC(dvb_ca_en50221_init, "", "");
KSYMTAB_FUNC(dvb_ca_en50221_release, "", "");
KSYMTAB_FUNC(dvb_frontend_reinitialise, "", "");
KSYMTAB_FUNC(dvb_frontend_sleep_until, "", "");
KSYMTAB_FUNC(dvb_frontend_suspend, "", "");
KSYMTAB_FUNC(dvb_frontend_resume, "", "");
KSYMTAB_FUNC(dvb_register_frontend, "", "");
KSYMTAB_FUNC(dvb_unregister_frontend, "", "");
KSYMTAB_FUNC(dvb_frontend_detach, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_flush, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_init, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_empty, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_free, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_avail, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_flush_spinlock_wakeup, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_read_user, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_read, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_write, "", "");
KSYMTAB_FUNC(dvb_ringbuffer_write_user, "", "");

MODULE_INFO(depends, "");

