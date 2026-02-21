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

KSYMTAB_FUNC(crypto_transfer_aead_request_to_engine, "_gpl", "");
KSYMTAB_FUNC(crypto_transfer_akcipher_request_to_engine, "_gpl", "");
KSYMTAB_FUNC(crypto_transfer_hash_request_to_engine, "_gpl", "");
KSYMTAB_FUNC(crypto_transfer_kpp_request_to_engine, "_gpl", "");
KSYMTAB_FUNC(crypto_transfer_skcipher_request_to_engine, "_gpl", "");
KSYMTAB_FUNC(crypto_finalize_aead_request, "_gpl", "");
KSYMTAB_FUNC(crypto_finalize_akcipher_request, "_gpl", "");
KSYMTAB_FUNC(crypto_finalize_hash_request, "_gpl", "");
KSYMTAB_FUNC(crypto_finalize_kpp_request, "_gpl", "");
KSYMTAB_FUNC(crypto_finalize_skcipher_request, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_start, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_stop, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_alloc_init_and_set, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_alloc_init, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_exit, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_register_aead, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_unregister_aead, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_register_aeads, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_unregister_aeads, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_register_ahash, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_unregister_ahash, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_register_ahashes, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_unregister_ahashes, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_register_akcipher, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_unregister_akcipher, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_register_kpp, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_unregister_kpp, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_register_skcipher, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_unregister_skcipher, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_register_skciphers, "_gpl", "");
KSYMTAB_FUNC(crypto_engine_unregister_skciphers, "_gpl", "");

MODULE_INFO(depends, "");

