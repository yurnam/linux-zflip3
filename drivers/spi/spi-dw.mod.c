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

KSYMTAB_FUNC(dw_spi_set_cs, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_check_status, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_update_config, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_add_host, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_remove_host, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_suspend_host, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_resume_host, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_dma_setup_mfld, "_gpl", "SPI_DW_CORE");
KSYMTAB_FUNC(dw_spi_dma_setup_generic, "_gpl", "SPI_DW_CORE");

MODULE_INFO(depends, "");

