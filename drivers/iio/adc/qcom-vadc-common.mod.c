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

KSYMTAB_FUNC(qcom_vadc_scale, "", "");
KSYMTAB_FUNC(qcom_adc_tm5_temp_volt_scale, "", "");
KSYMTAB_FUNC(qcom_adc_tm5_gen2_temp_res_scale, "", "");
KSYMTAB_FUNC(qcom_adc5_hw_scale, "", "");
KSYMTAB_FUNC(qcom_adc5_prescaling_from_dt, "", "");
KSYMTAB_FUNC(qcom_adc5_hw_settle_time_from_dt, "", "");
KSYMTAB_FUNC(qcom_adc5_avg_samples_from_dt, "", "");
KSYMTAB_FUNC(qcom_adc5_decimation_from_dt, "", "");
KSYMTAB_FUNC(qcom_vadc_decimation_from_dt, "", "");

MODULE_INFO(depends, "");

