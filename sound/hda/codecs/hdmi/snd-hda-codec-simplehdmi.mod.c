#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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

KSYMTAB_FUNC(snd_hda_hdmi_simple_build_pcms, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_simple_unsol_event, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_simple_build_controls, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_simple_init, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_simple_remove, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_simple_pcm_open, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_simple_probe, "_gpl", "SND_HDA_CODEC_HDMI");

MODULE_INFO(depends, "snd-hda-codec,snd-hda-core");

