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

KSYMTAB_FUNC(ecc_get_curve25519, "", "");
KSYMTAB_FUNC(ecc_get_curve, "", "");
KSYMTAB_FUNC(ecc_alloc_point, "", "");
KSYMTAB_FUNC(ecc_free_point, "", "");
KSYMTAB_FUNC(vli_is_zero, "", "");
KSYMTAB_FUNC(vli_num_bits, "", "");
KSYMTAB_FUNC(vli_from_be64, "", "");
KSYMTAB_FUNC(vli_from_le64, "", "");
KSYMTAB_FUNC(vli_cmp, "", "");
KSYMTAB_FUNC(vli_sub, "", "");
KSYMTAB_FUNC(vli_mod_mult_slow, "", "");
KSYMTAB_FUNC(vli_mod_inv, "", "");
KSYMTAB_FUNC(ecc_point_is_zero, "", "");
KSYMTAB_FUNC(ecc_point_mult_shamir, "", "");
KSYMTAB_FUNC(ecc_is_key_valid, "", "");
KSYMTAB_FUNC(ecc_gen_privkey, "", "");
KSYMTAB_FUNC(ecc_make_pub_key, "", "");
KSYMTAB_FUNC(ecc_is_pubkey_valid_partial, "", "");
KSYMTAB_FUNC(ecc_is_pubkey_valid_full, "", "");
KSYMTAB_FUNC(crypto_ecdh_shared_secret, "", "");

MODULE_INFO(depends, "");

