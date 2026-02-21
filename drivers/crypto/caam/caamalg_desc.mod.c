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

KSYMTAB_FUNC(cnstr_shdsc_aead_null_encap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_aead_null_decap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_aead_encap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_aead_decap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_aead_givencap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_gcm_encap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_gcm_decap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_rfc4106_encap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_rfc4106_decap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_rfc4543_encap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_rfc4543_decap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_chachapoly, "", "");
KSYMTAB_FUNC(cnstr_shdsc_skcipher_encap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_skcipher_decap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_xts_skcipher_encap, "", "");
KSYMTAB_FUNC(cnstr_shdsc_xts_skcipher_decap, "", "");

MODULE_INFO(depends, "error");

