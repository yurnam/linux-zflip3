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

KSYMTAB_FUNC(snd_hda_hdmi_pin_id_to_pin_index, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_setup_audio_infoframe, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_check_presence_and_report, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_unsol_event, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_setup_stream, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_parse_codec, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_pcm_prepare, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_pcm_cleanup, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_build_pcms, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_build_controls, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_init_per_pins, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_init, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_spec_free, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_remove, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_suspend, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_resume, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_alloc, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_generic_probe, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_acomp_master_bind, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_acomp_master_unbind, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_acomp_pin_eld_notify, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_setup_drm_audio_ops, "_gpl", "SND_HDA_CODEC_HDMI");
KSYMTAB_FUNC(snd_hda_hdmi_acomp_init, "_gpl", "SND_HDA_CODEC_HDMI");

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec");

MODULE_ALIAS("hdaudio:v00147A47r*a01*");
MODULE_ALIAS("hdaudio:v10951390r*a01*");
MODULE_ALIAS("hdaudio:v10951392r*a01*");
MODULE_ALIAS("hdaudio:v11069F84r*a01*");
MODULE_ALIAS("hdaudio:v11069F85r*a01*");
MODULE_ALIAS("hdaudio:v17E80047r*a01*");
MODULE_ALIAS("hdaudio:v1D179F86r*a01*");
MODULE_ALIAS("hdaudio:v1D179F87r*a01*");
MODULE_ALIAS("hdaudio:v1D179F88r*a01*");
MODULE_ALIAS("hdaudio:v1D179F89r*a01*");
MODULE_ALIAS("hdaudio:v1D179F8Ar*a01*");
MODULE_ALIAS("hdaudio:v1D179F8Br*a01*");
MODULE_ALIAS("hdaudio:v1D179F8Cr*a01*");
MODULE_ALIAS("hdaudio:v1D179F8Dr*a01*");
MODULE_ALIAS("hdaudio:v1D179F8Er*a01*");
MODULE_ALIAS("hdaudio:v1D179F8Fr*a01*");
MODULE_ALIAS("hdaudio:v1D179F90r*a01*");
MODULE_ALIAS("hdaudio:v67663D82r*a01*");
MODULE_ALIAS("hdaudio:v67663D83r*a01*");
MODULE_ALIAS("hdaudio:v67663D84r*a01*");
MODULE_ALIAS("hdaudio:v67663D85r*a01*");
MODULE_ALIAS("hdaudio:v67663D86r*a01*");
MODULE_ALIAS("hdaudio:v67663D87r*a01*");
MODULE_ALIAS("hdaudio:v80862801r*a01*");
MODULE_ALIAS("hdaudio:v80862802r*a01*");
MODULE_ALIAS("hdaudio:v80862803r*a01*");
MODULE_ALIAS("hdaudio:v80862880r*a01*");
MODULE_ALIAS("hdaudio:v808629FBr*a01*");
MODULE_ALIAS("hdaudio:v00000101r*a01*");
