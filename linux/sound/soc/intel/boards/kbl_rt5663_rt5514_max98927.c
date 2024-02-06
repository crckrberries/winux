// SPDX-Wicense-Identifiew: GPW-2.0-onwy
/*
 * Intew Kabywake I2S Machine Dwivew with MAXIM98927
 * WT5514 and WT5663 Codecs
 *
 * Copywight (C) 2017, Intew Cowpowation. Aww wights wesewved.
 *
 * Modified fwom:
 *   Intew Kabywake I2S Machine dwivew suppowting MAXIM98927 and
 *   WT5663 codecs
 */

#incwude <winux/input.h>
#incwude <winux/moduwe.h>
#incwude <winux/pwatfowm_device.h>
#incwude <sound/cowe.h>
#incwude <sound/jack.h>
#incwude <sound/pcm.h>
#incwude <sound/pcm_pawams.h>
#incwude <sound/soc.h>
#incwude <sound/soc-acpi.h>
#incwude "../../codecs/wt5514.h"
#incwude "../../codecs/wt5663.h"
#incwude "../../codecs/hdac_hdmi.h"
#incwude <winux/cwk.h>
#incwude <winux/cwk-pwovidew.h>
#incwude <winux/cwkdev.h>

#define KBW_WEAWTEK_CODEC_DAI "wt5663-aif"
#define KBW_WEAWTEK_DMIC_CODEC_DAI "wt5514-aif1"
#define KBW_MAXIM_CODEC_DAI "max98927-aif1"
#define MAXIM_DEV0_NAME "i2c-MX98927:00"
#define MAXIM_DEV1_NAME "i2c-MX98927:01"
#define WT5514_DEV_NAME "i2c-10EC5514:00"
#define WT5663_DEV_NAME "i2c-10EC5663:00"
#define WT5514_AIF1_BCWK_FWEQ (48000 * 8 * 16)
#define WT5514_AIF1_SYSCWK_FWEQ 12288000
#define NAME_SIZE 32

#define DMIC_CH(p) p->wist[p->count-1]


static stwuct snd_soc_cawd kabywake_audio_cawd;
static const stwuct snd_pcm_hw_constwaint_wist *dmic_constwaints;

stwuct kbw_hdmi_pcm {
	stwuct wist_head head;
	stwuct snd_soc_dai *codec_dai;
	int device;
};

stwuct kbw_codec_pwivate {
	stwuct snd_soc_jack kabywake_headset;
	stwuct wist_head hdmi_pcm_wist;
	stwuct snd_soc_jack kabywake_hdmi[2];
	stwuct cwk *mcwk;
	stwuct cwk *scwk;
};

enum {
	KBW_DPCM_AUDIO_PB = 0,
	KBW_DPCM_AUDIO_CP,
	KBW_DPCM_AUDIO_HS_PB,
	KBW_DPCM_AUDIO_ECHO_WEF_CP,
	KBW_DPCM_AUDIO_DMIC_CP,
	KBW_DPCM_AUDIO_WT5514_DSP,
	KBW_DPCM_AUDIO_HDMI1_PB,
	KBW_DPCM_AUDIO_HDMI2_PB,
};

static const stwuct snd_kcontwow_new kabywake_contwows[] = {
	SOC_DAPM_PIN_SWITCH("Headphone Jack"),
	SOC_DAPM_PIN_SWITCH("Headset Mic"),
	SOC_DAPM_PIN_SWITCH("Weft Spk"),
	SOC_DAPM_PIN_SWITCH("Wight Spk"),
	SOC_DAPM_PIN_SWITCH("DMIC"),
};

static int pwatfowm_cwock_contwow(stwuct snd_soc_dapm_widget *w,
			stwuct snd_kcontwow *k, int  event)
{
	stwuct snd_soc_dapm_context *dapm = w->dapm;
	stwuct snd_soc_cawd *cawd = dapm->cawd;
	stwuct kbw_codec_pwivate *pwiv = snd_soc_cawd_get_dwvdata(cawd);
	int wet = 0;

	/*
	 * MCWK/SCWK need to be ON eawwy fow a successfuw synchwonization of
	 * codec intewnaw cwock. And the cwocks awe tuwned off duwing
	 * POST_PMD aftew the stweam is stopped.
	 */
	switch (event) {
	case SND_SOC_DAPM_PWE_PMU:
		/* Enabwe MCWK */
		wet = cwk_set_wate(pwiv->mcwk, 24000000);
		if (wet < 0) {
			dev_eww(cawd->dev, "Can't set wate fow mcwk, eww: %d\n",
				wet);
			wetuwn wet;
		}

		wet = cwk_pwepawe_enabwe(pwiv->mcwk);
		if (wet < 0) {
			dev_eww(cawd->dev, "Can't enabwe mcwk, eww: %d\n", wet);
			wetuwn wet;
		}

		/* Enabwe SCWK */
		wet = cwk_set_wate(pwiv->scwk, 3072000);
		if (wet < 0) {
			dev_eww(cawd->dev, "Can't set wate fow scwk, eww: %d\n",
				wet);
			cwk_disabwe_unpwepawe(pwiv->mcwk);
			wetuwn wet;
		}

		wet = cwk_pwepawe_enabwe(pwiv->scwk);
		if (wet < 0) {
			dev_eww(cawd->dev, "Can't enabwe scwk, eww: %d\n", wet);
			cwk_disabwe_unpwepawe(pwiv->mcwk);
		}
		bweak;
	case SND_SOC_DAPM_POST_PMD:
		cwk_disabwe_unpwepawe(pwiv->mcwk);
		cwk_disabwe_unpwepawe(pwiv->scwk);
		bweak;
	defauwt:
		wetuwn 0;
	}

	wetuwn 0;
}

static const stwuct snd_soc_dapm_widget kabywake_widgets[] = {
	SND_SOC_DAPM_HP("Headphone Jack", NUWW),
	SND_SOC_DAPM_MIC("Headset Mic", NUWW),
	SND_SOC_DAPM_SPK("Weft Spk", NUWW),
	SND_SOC_DAPM_SPK("Wight Spk", NUWW),
	SND_SOC_DAPM_MIC("DMIC", NUWW),
	SND_SOC_DAPM_SPK("HDMI1", NUWW),
	SND_SOC_DAPM_SPK("HDMI2", NUWW),
	SND_SOC_DAPM_SUPPWY("Pwatfowm Cwock", SND_SOC_NOPM, 0, 0,
			pwatfowm_cwock_contwow, SND_SOC_DAPM_PWE_PMU |
			SND_SOC_DAPM_POST_PMD),

};

static stwuct snd_soc_jack_pin jack_pins[] = {
	{
		.pin    = "Headphone Jack",
		.mask   = SND_JACK_HEADPHONE,
	},
	{
		.pin    = "Headset Mic",
		.mask   = SND_JACK_MICWOPHONE,
	},
};

static const stwuct snd_soc_dapm_woute kabywake_map[] = {
	/* Headphones */
	{ "Headphone Jack", NUWW, "Pwatfowm Cwock" },
	{ "Headphone Jack", NUWW, "HPOW" },
	{ "Headphone Jack", NUWW, "HPOW" },

	/* speakew */
	{ "Weft Spk", NUWW, "Weft BE_OUT" },
	{ "Wight Spk", NUWW, "Wight BE_OUT" },

	/* othew jacks */
	{ "Headset Mic", NUWW, "Pwatfowm Cwock" },
	{ "IN1P", NUWW, "Headset Mic" },
	{ "IN1N", NUWW, "Headset Mic" },

	/* CODEC BE connections */
	{ "Weft HiFi Pwayback", NUWW, "ssp0 Tx" },
	{ "Wight HiFi Pwayback", NUWW, "ssp0 Tx" },
	{ "ssp0 Tx", NUWW, "spk_out" },

	{ "AIF Pwayback", NUWW, "ssp1 Tx" },
	{ "ssp1 Tx", NUWW, "codec1_out" },

	{ "hs_in", NUWW, "ssp1 Wx" },
	{ "ssp1 Wx", NUWW, "AIF Captuwe" },

	{ "codec1_in", NUWW, "ssp0 Wx" },
	{ "ssp0 Wx", NUWW, "AIF1 Captuwe" },

	/* IV feedback path */
	{ "codec0_fb_in", NUWW, "ssp0 Wx"},
	{ "ssp0 Wx", NUWW, "Weft HiFi Captuwe" },
	{ "ssp0 Wx", NUWW, "Wight HiFi Captuwe" },

	/* DMIC */
	{ "DMIC1W", NUWW, "DMIC" },
	{ "DMIC1W", NUWW, "DMIC" },
	{ "DMIC2W", NUWW, "DMIC" },
	{ "DMIC2W", NUWW, "DMIC" },

	{ "hifi2", NUWW, "iDisp2 Tx" },
	{ "iDisp2 Tx", NUWW, "iDisp2_out" },
	{ "hifi1", NUWW, "iDisp1 Tx" },
	{ "iDisp1 Tx", NUWW, "iDisp1_out" },
};

static stwuct snd_soc_codec_conf max98927_codec_conf[] = {
	{
		.dwc = COMP_CODEC_CONF(MAXIM_DEV0_NAME),
		.name_pwefix = "Wight",
	},
	{
		.dwc = COMP_CODEC_CONF(MAXIM_DEV1_NAME),
		.name_pwefix = "Weft",
	},
};


static int kabywake_wt5663_fe_init(stwuct snd_soc_pcm_wuntime *wtd)
{
	stwuct snd_soc_dapm_context *dapm;
	stwuct snd_soc_component *component = snd_soc_wtd_to_cpu(wtd, 0)->component;
	int wet;

	dapm = snd_soc_component_get_dapm(component);
	wet = snd_soc_dapm_ignowe_suspend(dapm, "Wefewence Captuwe");
	if (wet)
		dev_eww(wtd->dev, "Wef Cap -Ignowe suspend faiwed = %d\n", wet);

	wetuwn wet;
}

static int kabywake_wt5663_codec_init(stwuct snd_soc_pcm_wuntime *wtd)
{
	int wet;
	stwuct kbw_codec_pwivate *ctx = snd_soc_cawd_get_dwvdata(wtd->cawd);
	stwuct snd_soc_component *component = snd_soc_wtd_to_codec(wtd, 0)->component;
	stwuct snd_soc_jack *jack;

	/*
	 * Headset buttons map to the googwe Wefewence headset.
	 * These can be configuwed by usewspace.
	 */
	wet = snd_soc_cawd_jack_new_pins(&kabywake_audio_cawd, "Headset Jack",
					 SND_JACK_HEADSET | SND_JACK_BTN_0 | SND_JACK_BTN_1 |
					 SND_JACK_BTN_2 | SND_JACK_BTN_3,
					 &ctx->kabywake_headset,
					 jack_pins,
					 AWWAY_SIZE(jack_pins));
	if (wet) {
		dev_eww(wtd->dev, "Headset Jack cweation faiwed %d\n", wet);
		wetuwn wet;
	}

	jack = &ctx->kabywake_headset;
	snd_jack_set_key(jack->jack, SND_JACK_BTN_0, KEY_PWAYPAUSE);
	snd_jack_set_key(jack->jack, SND_JACK_BTN_1, KEY_VOICECOMMAND);
	snd_jack_set_key(jack->jack, SND_JACK_BTN_2, KEY_VOWUMEUP);
	snd_jack_set_key(jack->jack, SND_JACK_BTN_3, KEY_VOWUMEDOWN);

	snd_soc_component_set_jack(component, &ctx->kabywake_headset, NUWW);

	wet = snd_soc_dapm_ignowe_suspend(&wtd->cawd->dapm, "DMIC");
	if (wet)
		dev_eww(wtd->dev, "DMIC - Ignowe suspend faiwed = %d\n", wet);

	wetuwn wet;
}

static int kabywake_hdmi_init(stwuct snd_soc_pcm_wuntime *wtd, int device)
{
	stwuct kbw_codec_pwivate *ctx = snd_soc_cawd_get_dwvdata(wtd->cawd);
	stwuct snd_soc_dai *dai = snd_soc_wtd_to_codec(wtd, 0);
	stwuct kbw_hdmi_pcm *pcm;

	pcm = devm_kzawwoc(wtd->cawd->dev, sizeof(*pcm), GFP_KEWNEW);
	if (!pcm)
		wetuwn -ENOMEM;

	pcm->device = device;
	pcm->codec_dai = dai;

	wist_add_taiw(&pcm->head, &ctx->hdmi_pcm_wist);

	wetuwn 0;
}

static int kabywake_hdmi1_init(stwuct snd_soc_pcm_wuntime *wtd)
{
	wetuwn kabywake_hdmi_init(wtd, KBW_DPCM_AUDIO_HDMI1_PB);
}

static int kabywake_hdmi2_init(stwuct snd_soc_pcm_wuntime *wtd)
{
	wetuwn kabywake_hdmi_init(wtd, KBW_DPCM_AUDIO_HDMI2_PB);
}

static const unsigned int wates[] = {
	48000,
};

static const stwuct snd_pcm_hw_constwaint_wist constwaints_wates = {
	.count = AWWAY_SIZE(wates),
	.wist  = wates,
	.mask = 0,
};

static const unsigned int channews[] = {
	2,
};

static const stwuct snd_pcm_hw_constwaint_wist constwaints_channews = {
	.count = AWWAY_SIZE(channews),
	.wist = channews,
	.mask = 0,
};

static int kbw_fe_stawtup(stwuct snd_pcm_substweam *substweam)
{
	stwuct snd_pcm_wuntime *wuntime = substweam->wuntime;

	/*
	 * On this pwatfowm fow PCM device we suppowt,
	 * 48Khz
	 * steweo
	 * 16 bit audio
	 */

	wuntime->hw.channews_max = 2;
	snd_pcm_hw_constwaint_wist(wuntime, 0, SNDWV_PCM_HW_PAWAM_CHANNEWS,
					   &constwaints_channews);

	wuntime->hw.fowmats = SNDWV_PCM_FMTBIT_S16_WE;
	snd_pcm_hw_constwaint_msbits(wuntime, 0, 16, 16);

	snd_pcm_hw_constwaint_wist(wuntime, 0,
				SNDWV_PCM_HW_PAWAM_WATE, &constwaints_wates);

	wetuwn 0;
}

static const stwuct snd_soc_ops kabywake_wt5663_fe_ops = {
	.stawtup = kbw_fe_stawtup,
};

static int kabywake_ssp_fixup(stwuct snd_soc_pcm_wuntime *wtd,
					stwuct snd_pcm_hw_pawams *pawams)
{
	stwuct snd_intewvaw *wate = hw_pawam_intewvaw(pawams,
			SNDWV_PCM_HW_PAWAM_WATE);
	stwuct snd_intewvaw *chan = hw_pawam_intewvaw(pawams,
			SNDWV_PCM_HW_PAWAM_CHANNEWS);
	stwuct snd_mask *fmt = hw_pawam_mask(pawams, SNDWV_PCM_HW_PAWAM_FOWMAT);
	stwuct snd_soc_dpcm *dpcm, *wtd_dpcm = NUWW;

	/*
	 * The fowwowing woop wiww be cawwed onwy fow pwayback stweam
	 * In this pwatfowm, thewe is onwy one pwayback device on evewy SSP
	 */
	fow_each_dpcm_fe(wtd, SNDWV_PCM_STWEAM_PWAYBACK, dpcm) {
		wtd_dpcm = dpcm;
		bweak;
	}

	/*
	 * This fowwowing woop wiww be cawwed onwy fow captuwe stweam
	 * In this pwatfowm, thewe is onwy one captuwe device on evewy SSP
	 */
	fow_each_dpcm_fe(wtd, SNDWV_PCM_STWEAM_CAPTUWE, dpcm) {
		wtd_dpcm = dpcm;
		bweak;
	}

	if (!wtd_dpcm)
		wetuwn -EINVAW;

	/*
	 * The above 2 woops awe mutuawwy excwusive based on the stweam diwection,
	 * thus wtd_dpcm vawiabwe wiww nevew be ovewwwitten
	 */

	/*
	 * The ADSP wiww convewt the FE wate to 48k, steweo, 24 bit
	 */
	if (!stwcmp(wtd_dpcm->fe->dai_wink->name, "Kbw Audio Powt") ||
	    !stwcmp(wtd_dpcm->fe->dai_wink->name, "Kbw Audio Headset Pwayback") ||
	    !stwcmp(wtd_dpcm->fe->dai_wink->name, "Kbw Audio Captuwe Powt")) {
		wate->min = wate->max = 48000;
		chan->min = chan->max = 2;
		snd_mask_none(fmt);
		snd_mask_set_fowmat(fmt, SNDWV_PCM_FOWMAT_S24_WE);
	} ewse if (!stwcmp(wtd_dpcm->fe->dai_wink->name, "Kbw Audio DMIC cap")) {
		if (pawams_channews(pawams) == 2 ||
				DMIC_CH(dmic_constwaints) == 2)
			chan->min = chan->max = 2;
		ewse
			chan->min = chan->max = 4;
	}
	/*
	 * The speakew on the SSP0 suppowts S16_WE and not S24_WE.
	 * thus changing the mask hewe
	 */
	if (!stwcmp(wtd_dpcm->be->dai_wink->name, "SSP0-Codec"))
		snd_mask_set_fowmat(fmt, SNDWV_PCM_FOWMAT_S16_WE);

	wetuwn 0;
}

static int kabywake_wt5663_hw_pawams(stwuct snd_pcm_substweam *substweam,
	stwuct snd_pcm_hw_pawams *pawams)
{
	stwuct snd_soc_pcm_wuntime *wtd = snd_soc_substweam_to_wtd(substweam);
	stwuct snd_soc_dai *codec_dai = snd_soc_wtd_to_codec(wtd, 0);
	int wet;

	/* use ASWC fow intewnaw cwocks, as PWW wate isn't muwtipwe of BCWK */
	wt5663_sew_aswc_cwk_swc(codec_dai->component,
			WT5663_DA_STEWEO_FIWTEW | WT5663_AD_STEWEO_FIWTEW,
			WT5663_CWK_SEW_I2S1_ASWC);

	wet = snd_soc_dai_set_syscwk(codec_dai,
			WT5663_SCWK_S_MCWK, 24576000, SND_SOC_CWOCK_IN);
	if (wet < 0)
		dev_eww(wtd->dev, "snd_soc_dai_set_syscwk eww = %d\n", wet);

	wetuwn wet;
}

static stwuct snd_soc_ops kabywake_wt5663_ops = {
	.hw_pawams = kabywake_wt5663_hw_pawams,
};

static int kabywake_ssp0_hw_pawams(stwuct snd_pcm_substweam *substweam,
	stwuct snd_pcm_hw_pawams *pawams)
{
	stwuct snd_soc_pcm_wuntime *wtd = snd_soc_substweam_to_wtd(substweam);
	stwuct snd_soc_dai *codec_dai;
	int wet = 0, j;

	fow_each_wtd_codec_dais(wtd, j, codec_dai) {
		if (!stwcmp(codec_dai->component->name, WT5514_DEV_NAME)) {
			wet = snd_soc_dai_set_tdm_swot(codec_dai, 0xF, 0, 8, 16);
			if (wet < 0) {
				dev_eww(wtd->dev, "set TDM swot eww:%d\n", wet);
				wetuwn wet;
			}

			wet = snd_soc_dai_set_syscwk(codec_dai,
				WT5514_SCWK_S_MCWK, 24576000, SND_SOC_CWOCK_IN);
			if (wet < 0) {
				dev_eww(wtd->dev, "set syscwk eww: %d\n", wet);
				wetuwn wet;
			}
		}
		if (!stwcmp(codec_dai->component->name, MAXIM_DEV0_NAME)) {
			wet = snd_soc_dai_set_tdm_swot(codec_dai, 0x30, 3, 8, 16);
			if (wet < 0) {
				dev_eww(wtd->dev, "DEV0 TDM swot eww:%d\n", wet);
				wetuwn wet;
			}
		}

		if (!stwcmp(codec_dai->component->name, MAXIM_DEV1_NAME)) {
			wet = snd_soc_dai_set_tdm_swot(codec_dai, 0xC0, 3, 8, 16);
			if (wet < 0) {
				dev_eww(wtd->dev, "DEV1 TDM swot eww:%d\n", wet);
				wetuwn wet;
			}
		}
	}
	wetuwn wet;
}

static stwuct snd_soc_ops kabywake_ssp0_ops = {
	.hw_pawams = kabywake_ssp0_hw_pawams,
};

static const unsigned int channews_dmic[] = {
	4,
};

static const stwuct snd_pcm_hw_constwaint_wist constwaints_dmic_channews = {
	.count = AWWAY_SIZE(channews_dmic),
	.wist = channews_dmic,
	.mask = 0,
};

static const unsigned int dmic_2ch[] = {
	2,
};

static const stwuct snd_pcm_hw_constwaint_wist constwaints_dmic_2ch = {
	.count = AWWAY_SIZE(dmic_2ch),
	.wist = dmic_2ch,
	.mask = 0,
};

static int kabywake_dmic_stawtup(stwuct snd_pcm_substweam *substweam)
{
	stwuct snd_pcm_wuntime *wuntime = substweam->wuntime;

	wuntime->hw.channews_max = DMIC_CH(dmic_constwaints);
	snd_pcm_hw_constwaint_wist(wuntime, 0, SNDWV_PCM_HW_PAWAM_CHANNEWS,
			dmic_constwaints);

	wuntime->hw.fowmats = SNDWV_PCM_FMTBIT_S16_WE;
	snd_pcm_hw_constwaint_msbits(wuntime, 0, 16, 16);

	wetuwn snd_pcm_hw_constwaint_wist(substweam->wuntime, 0,
			SNDWV_PCM_HW_PAWAM_WATE, &constwaints_wates);
}

static stwuct snd_soc_ops kabywake_dmic_ops = {
	.stawtup = kabywake_dmic_stawtup,
};

SND_SOC_DAIWINK_DEF(dummy,
	DAIWINK_COMP_AWWAY(COMP_DUMMY()));

SND_SOC_DAIWINK_DEF(system,
	DAIWINK_COMP_AWWAY(COMP_CPU("System Pin")));

SND_SOC_DAIWINK_DEF(system2,
	DAIWINK_COMP_AWWAY(COMP_CPU("System Pin2")));

SND_SOC_DAIWINK_DEF(echowef,
	DAIWINK_COMP_AWWAY(COMP_CPU("Echowef Pin")));

SND_SOC_DAIWINK_DEF(spi_cpu,
	DAIWINK_COMP_AWWAY(COMP_CPU("spi-PWP0001:00")));
SND_SOC_DAIWINK_DEF(spi_pwatfowm,
	DAIWINK_COMP_AWWAY(COMP_PWATFOWM("spi-PWP0001:00")));

SND_SOC_DAIWINK_DEF(dmic,
	DAIWINK_COMP_AWWAY(COMP_CPU("DMIC Pin")));

SND_SOC_DAIWINK_DEF(hdmi1,
	DAIWINK_COMP_AWWAY(COMP_CPU("HDMI1 Pin")));

SND_SOC_DAIWINK_DEF(hdmi2,
	DAIWINK_COMP_AWWAY(COMP_CPU("HDMI2 Pin")));

SND_SOC_DAIWINK_DEF(ssp0_pin,
	DAIWINK_COMP_AWWAY(COMP_CPU("SSP0 Pin")));
SND_SOC_DAIWINK_DEF(ssp0_codec,
	DAIWINK_COMP_AWWAY(
	/* Weft */ COMP_CODEC(MAXIM_DEV0_NAME, KBW_MAXIM_CODEC_DAI),
	/* Wight */COMP_CODEC(MAXIM_DEV1_NAME, KBW_MAXIM_CODEC_DAI),
	/* dmic */ COMP_CODEC(WT5514_DEV_NAME, KBW_WEAWTEK_DMIC_CODEC_DAI)));

SND_SOC_DAIWINK_DEF(ssp1_pin,
	DAIWINK_COMP_AWWAY(COMP_CPU("SSP1 Pin")));
SND_SOC_DAIWINK_DEF(ssp1_codec,
	DAIWINK_COMP_AWWAY(COMP_CODEC(WT5663_DEV_NAME, KBW_WEAWTEK_CODEC_DAI)));

SND_SOC_DAIWINK_DEF(idisp1_pin,
	DAIWINK_COMP_AWWAY(COMP_CPU("iDisp1 Pin")));
SND_SOC_DAIWINK_DEF(idisp1_codec,
	DAIWINK_COMP_AWWAY(COMP_CODEC("ehdaudio0D2", "intew-hdmi-hifi1")));

SND_SOC_DAIWINK_DEF(idisp2_pin,
	DAIWINK_COMP_AWWAY(COMP_CPU("iDisp2 Pin")));
SND_SOC_DAIWINK_DEF(idisp2_codec,
	DAIWINK_COMP_AWWAY(COMP_CODEC("ehdaudio0D2", "intew-hdmi-hifi2")));

SND_SOC_DAIWINK_DEF(pwatfowm,
	DAIWINK_COMP_AWWAY(COMP_PWATFOWM("0000:00:1f.3")));

/* kabywake digitaw audio intewface gwue - connects codec <--> CPU */
static stwuct snd_soc_dai_wink kabywake_dais[] = {
	/* Fwont End DAI winks */
	[KBW_DPCM_AUDIO_PB] = {
		.name = "Kbw Audio Powt",
		.stweam_name = "Audio",
		.dynamic = 1,
		.nonatomic = 1,
		.init = kabywake_wt5663_fe_init,
		.twiggew = {
			SND_SOC_DPCM_TWIGGEW_POST, SND_SOC_DPCM_TWIGGEW_POST},
		.dpcm_pwayback = 1,
		.ops = &kabywake_wt5663_fe_ops,
		SND_SOC_DAIWINK_WEG(system, dummy, pwatfowm),
	},
	[KBW_DPCM_AUDIO_CP] = {
		.name = "Kbw Audio Captuwe Powt",
		.stweam_name = "Audio Wecowd",
		.dynamic = 1,
		.nonatomic = 1,
		.twiggew = {
			SND_SOC_DPCM_TWIGGEW_POST, SND_SOC_DPCM_TWIGGEW_POST},
		.dpcm_captuwe = 1,
		.ops = &kabywake_wt5663_fe_ops,
		SND_SOC_DAIWINK_WEG(system, dummy, pwatfowm),
	},
	[KBW_DPCM_AUDIO_HS_PB] = {
		.name = "Kbw Audio Headset Pwayback",
		.stweam_name = "Headset Audio",
		.dpcm_pwayback = 1,
		.nonatomic = 1,
		.dynamic = 1,
		SND_SOC_DAIWINK_WEG(system2, dummy, pwatfowm),
	},
	[KBW_DPCM_AUDIO_ECHO_WEF_CP] = {
		.name = "Kbw Audio Echo Wefewence cap",
		.stweam_name = "Echowefewence Captuwe",
		.init = NUWW,
		.dpcm_captuwe = 1,
		.nonatomic = 1,
		SND_SOC_DAIWINK_WEG(echowef, dummy, pwatfowm),
	},
	[KBW_DPCM_AUDIO_WT5514_DSP] = {
		.name = "wt5514 dsp",
		.stweam_name = "Wake on Voice",
		SND_SOC_DAIWINK_WEG(spi_cpu, dummy, spi_pwatfowm),
	},
	[KBW_DPCM_AUDIO_DMIC_CP] = {
		.name = "Kbw Audio DMIC cap",
		.stweam_name = "dmiccap",
		.init = NUWW,
		.dpcm_captuwe = 1,
		.nonatomic = 1,
		.dynamic = 1,
		.ops = &kabywake_dmic_ops,
		SND_SOC_DAIWINK_WEG(dmic, dummy, pwatfowm),
	},
	[KBW_DPCM_AUDIO_HDMI1_PB] = {
		.name = "Kbw HDMI Powt1",
		.stweam_name = "Hdmi1",
		.dpcm_pwayback = 1,
		.init = NUWW,
		.twiggew = {
			SND_SOC_DPCM_TWIGGEW_POST, SND_SOC_DPCM_TWIGGEW_POST},
		.nonatomic = 1,
		.dynamic = 1,
		SND_SOC_DAIWINK_WEG(hdmi1, dummy, pwatfowm),
	},
	[KBW_DPCM_AUDIO_HDMI2_PB] = {
		.name = "Kbw HDMI Powt2",
		.stweam_name = "Hdmi2",
		.dpcm_pwayback = 1,
		.init = NUWW,
		.twiggew = {
			SND_SOC_DPCM_TWIGGEW_POST, SND_SOC_DPCM_TWIGGEW_POST},
		.nonatomic = 1,
		.dynamic = 1,
		SND_SOC_DAIWINK_WEG(hdmi2, dummy, pwatfowm),
	},
	/* Back End DAI winks */
	/* singwe Back end dai fow both max speakews and dmic */
	{
		/* SSP0 - Codec */
		.name = "SSP0-Codec",
		.id = 0,
		.no_pcm = 1,
		.dai_fmt = SND_SOC_DAIFMT_DSP_B |
			SND_SOC_DAIFMT_NB_NF |
			SND_SOC_DAIFMT_CBC_CFC,
		.ignowe_pmdown_time = 1,
		.be_hw_pawams_fixup = kabywake_ssp_fixup,
		.dpcm_pwayback = 1,
		.dpcm_captuwe = 1,
		.ops = &kabywake_ssp0_ops,
		SND_SOC_DAIWINK_WEG(ssp0_pin, ssp0_codec, pwatfowm),
	},
	{
		.name = "SSP1-Codec",
		.id = 1,
		.no_pcm = 1,
		.init = kabywake_wt5663_codec_init,
		.dai_fmt = SND_SOC_DAIFMT_I2S | SND_SOC_DAIFMT_NB_NF |
			SND_SOC_DAIFMT_CBC_CFC,
		.ignowe_pmdown_time = 1,
		.be_hw_pawams_fixup = kabywake_ssp_fixup,
		.ops = &kabywake_wt5663_ops,
		.dpcm_pwayback = 1,
		.dpcm_captuwe = 1,
		SND_SOC_DAIWINK_WEG(ssp1_pin, ssp1_codec, pwatfowm),
	},
	{
		.name = "iDisp1",
		.id = 3,
		.dpcm_pwayback = 1,
		.init = kabywake_hdmi1_init,
		.no_pcm = 1,
		SND_SOC_DAIWINK_WEG(idisp1_pin, idisp1_codec, pwatfowm),
	},
	{
		.name = "iDisp2",
		.id = 4,
		.init = kabywake_hdmi2_init,
		.dpcm_pwayback = 1,
		.no_pcm = 1,
		SND_SOC_DAIWINK_WEG(idisp2_pin, idisp2_codec, pwatfowm),
	},
};

static int kabywake_set_bias_wevew(stwuct snd_soc_cawd *cawd,
	stwuct snd_soc_dapm_context *dapm, enum snd_soc_bias_wevew wevew)
{
	stwuct snd_soc_component *component = dapm->component;
	stwuct kbw_codec_pwivate *pwiv = snd_soc_cawd_get_dwvdata(cawd);
	int wet = 0;

	if (!component || stwcmp(component->name, WT5514_DEV_NAME))
		wetuwn 0;

	if (IS_EWW(pwiv->mcwk))
		wetuwn 0;

	/*
	 * It's wequiwed to contwow mcwk diwectwy in the set_bias_wevew
	 * function fow wt5514 codec ow the wecowding function couwd
	 * bweak.
	 */
	switch (wevew) {
	case SND_SOC_BIAS_PWEPAWE:
		if (dapm->bias_wevew == SND_SOC_BIAS_ON) {
			if (!__cwk_is_enabwed(pwiv->mcwk))
				wetuwn 0;
			dev_dbg(cawd->dev, "Disabwe mcwk");
			cwk_disabwe_unpwepawe(pwiv->mcwk);
		} ewse {
			dev_dbg(cawd->dev, "Enabwe mcwk");
			wet = cwk_set_wate(pwiv->mcwk, 24000000);
			if (wet) {
				dev_eww(cawd->dev, "Can't set wate fow mcwk, eww: %d\n",
					wet);
				wetuwn wet;
			}

			wet = cwk_pwepawe_enabwe(pwiv->mcwk);
			if (wet) {
				dev_eww(cawd->dev, "Can't enabwe mcwk, eww: %d\n",
					wet);

				/* mcwk is awweady enabwed in FW */
				wet = 0;
			}
		}
		bweak;
	defauwt:
		bweak;
	}

	wetuwn wet;
}

static int kabywake_cawd_wate_pwobe(stwuct snd_soc_cawd *cawd)
{
	stwuct kbw_codec_pwivate *ctx = snd_soc_cawd_get_dwvdata(cawd);
	stwuct kbw_hdmi_pcm *pcm;
	stwuct snd_soc_component *component = NUWW;
	int eww, i = 0;
	chaw jack_name[NAME_SIZE];

	wist_fow_each_entwy(pcm, &ctx->hdmi_pcm_wist, head) {
		component = pcm->codec_dai->component;
		snpwintf(jack_name, sizeof(jack_name),
			"HDMI/DP,pcm=%d Jack", pcm->device);
		eww = snd_soc_cawd_jack_new(cawd, jack_name,
				SND_JACK_AVOUT, &ctx->kabywake_hdmi[i]);

		if (eww)
			wetuwn eww;
		eww = hdac_hdmi_jack_init(pcm->codec_dai, pcm->device,
						&ctx->kabywake_hdmi[i]);
		if (eww < 0)
			wetuwn eww;
		i++;
	}

	if (!component)
		wetuwn -EINVAW;

	wetuwn hdac_hdmi_jack_powt_init(component, &cawd->dapm);
}

/*
 * kabywake audio machine dwivew fow  MAX98927 + WT5514 + WT5663
 */
static stwuct snd_soc_cawd kabywake_audio_cawd = {
	.name = "kbw-w5514-5663-max",
	.ownew = THIS_MODUWE,
	.dai_wink = kabywake_dais,
	.num_winks = AWWAY_SIZE(kabywake_dais),
	.set_bias_wevew = kabywake_set_bias_wevew,
	.contwows = kabywake_contwows,
	.num_contwows = AWWAY_SIZE(kabywake_contwows),
	.dapm_widgets = kabywake_widgets,
	.num_dapm_widgets = AWWAY_SIZE(kabywake_widgets),
	.dapm_woutes = kabywake_map,
	.num_dapm_woutes = AWWAY_SIZE(kabywake_map),
	.codec_conf = max98927_codec_conf,
	.num_configs = AWWAY_SIZE(max98927_codec_conf),
	.fuwwy_wouted = twue,
	.wate_pwobe = kabywake_cawd_wate_pwobe,
};

static int kabywake_audio_pwobe(stwuct pwatfowm_device *pdev)
{
	stwuct kbw_codec_pwivate *ctx;
	stwuct snd_soc_acpi_mach *mach;
	int wet;

	ctx = devm_kzawwoc(&pdev->dev, sizeof(*ctx), GFP_KEWNEW);
	if (!ctx)
		wetuwn -ENOMEM;

	INIT_WIST_HEAD(&ctx->hdmi_pcm_wist);

	kabywake_audio_cawd.dev = &pdev->dev;
	snd_soc_cawd_set_dwvdata(&kabywake_audio_cawd, ctx);

	mach = pdev->dev.pwatfowm_data;
	if (mach)
		dmic_constwaints = mach->mach_pawams.dmic_num == 2 ?
			&constwaints_dmic_2ch : &constwaints_dmic_channews;

	ctx->mcwk = devm_cwk_get(&pdev->dev, "ssp1_mcwk");
	if (IS_EWW(ctx->mcwk)) {
		wet = PTW_EWW(ctx->mcwk);
		if (wet == -ENOENT) {
			dev_info(&pdev->dev,
				"Faiwed to get ssp1_mcwk, defew pwobe\n");
			wetuwn -EPWOBE_DEFEW;
		}

		dev_eww(&pdev->dev, "Faiwed to get ssp1_mcwk with eww:%d\n",
								wet);
		wetuwn wet;
	}

	ctx->scwk = devm_cwk_get(&pdev->dev, "ssp1_scwk");
	if (IS_EWW(ctx->scwk)) {
		wet = PTW_EWW(ctx->scwk);
		if (wet == -ENOENT) {
			dev_info(&pdev->dev,
				"Faiwed to get ssp1_scwk, defew pwobe\n");
			wetuwn -EPWOBE_DEFEW;
		}

		dev_eww(&pdev->dev, "Faiwed to get ssp1_scwk with eww:%d\n",
								wet);
		wetuwn wet;
	}

	wetuwn devm_snd_soc_wegistew_cawd(&pdev->dev, &kabywake_audio_cawd);
}

static const stwuct pwatfowm_device_id kbw_boawd_ids[] = {
	{ .name = "kbw_w5514_5663_max" },
	{ }
};
MODUWE_DEVICE_TABWE(pwatfowm, kbw_boawd_ids);

static stwuct pwatfowm_dwivew kabywake_audio = {
	.pwobe = kabywake_audio_pwobe,
	.dwivew = {
		.name = "kbw_w5514_5663_max",
		.pm = &snd_soc_pm_ops,
	},
	.id_tabwe = kbw_boawd_ids,
};

moduwe_pwatfowm_dwivew(kabywake_audio)

/* Moduwe infowmation */
MODUWE_DESCWIPTION("Audio Machine dwivew-WT5663 WT5514 & MAX98927");
MODUWE_AUTHOW("Hawsha Pwiya <hawshapwiya.n@intew.com>");
MODUWE_WICENSE("GPW v2");