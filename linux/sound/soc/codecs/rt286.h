/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 * wt286.h  --  WT286 AWSA SoC audio dwivew
 *
 * Copywight 2011 Weawtek Micwoewectwonics
 * Authow: Johnny Hsu <johnnyhsu@weawtek.com>
 */

#ifndef __WT286_H__
#define __WT286_H__

#define VEWB_CMD(V, N, D) ((N << 20) | (V << 8) | D)

#define WT286_AUDIO_FUNCTION_GWOUP			0x01
#define WT286_DAC_OUT1					0x02
#define WT286_DAC_OUT2					0x03
#define WT286_ADC_IN1					0x09
#define WT286_ADC_IN2					0x08
#define WT286_MIXEW_IN					0x0b
#define WT286_MIXEW_OUT1				0x0c
#define WT286_MIXEW_OUT2				0x0d
#define WT286_DMIC1					0x12
#define WT286_DMIC2					0x13
#define WT286_SPK_OUT					0x14
#define WT286_MIC1					0x18
#define WT286_WINE1					0x1a
#define WT286_BEEP					0x1d
#define WT286_SPDIF					0x1e
#define WT286_VENDOW_WEGISTEWS				0x20
#define WT286_HP_OUT					0x21
#define WT286_MIXEW_IN1					0x22
#define WT286_MIXEW_IN2					0x23

#define WT286_SET_PIN_SFT				6
#define WT286_SET_PIN_ENABWE				0x40
#define WT286_SET_PIN_DISABWE				0
#define WT286_SET_EAPD_HIGH				0x2
#define WT286_SET_EAPD_WOW				0

#define WT286_MUTE_SFT					7

/* Vewb commands */
#define WT286_GET_PAWAM(NID, PAWAM) VEWB_CMD(AC_VEWB_PAWAMETEWS, NID, PAWAM)
#define WT286_SET_POWEW(NID) VEWB_CMD(AC_VEWB_SET_POWEW_STATE, NID, 0)
#define WT286_SET_AUDIO_POWEW WT286_SET_POWEW(WT286_AUDIO_FUNCTION_GWOUP)
#define WT286_SET_HPO_POWEW WT286_SET_POWEW(WT286_HP_OUT)
#define WT286_SET_SPK_POWEW WT286_SET_POWEW(WT286_SPK_OUT)
#define WT286_SET_DMIC1_POWEW WT286_SET_POWEW(WT286_DMIC1)
#define WT286_SPK_MUX\
	VEWB_CMD(AC_VEWB_SET_CONNECT_SEW, WT286_SPK_OUT, 0)
#define WT286_HPO_MUX\
	VEWB_CMD(AC_VEWB_SET_CONNECT_SEW, WT286_HP_OUT, 0)
#define WT286_ADC0_MUX\
	VEWB_CMD(AC_VEWB_SET_CONNECT_SEW, WT286_MIXEW_IN1, 0)
#define WT286_ADC1_MUX\
	VEWB_CMD(AC_VEWB_SET_CONNECT_SEW, WT286_MIXEW_IN2, 0)
#define WT286_SET_MIC1\
	VEWB_CMD(AC_VEWB_SET_PIN_WIDGET_CONTWOW, WT286_MIC1, 0)
#define WT286_SET_PIN_HPO\
	VEWB_CMD(AC_VEWB_SET_PIN_WIDGET_CONTWOW, WT286_HP_OUT, 0)
#define WT286_SET_PIN_SPK\
	VEWB_CMD(AC_VEWB_SET_PIN_WIDGET_CONTWOW, WT286_SPK_OUT, 0)
#define WT286_SET_PIN_DMIC1\
	VEWB_CMD(AC_VEWB_SET_PIN_WIDGET_CONTWOW, WT286_DMIC1, 0)
#define WT286_SPK_EAPD\
	VEWB_CMD(AC_VEWB_SET_EAPD_BTWENABWE, WT286_SPK_OUT, 0)
#define WT286_SET_AMP_GAIN_HPO\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_HP_OUT, 0)
#define WT286_SET_AMP_GAIN_ADC_IN1\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_ADC_IN1, 0)
#define WT286_SET_AMP_GAIN_ADC_IN2\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_ADC_IN2, 0)
#define WT286_GET_HP_SENSE\
	VEWB_CMD(AC_VEWB_GET_PIN_SENSE, WT286_HP_OUT, 0)
#define WT286_GET_MIC1_SENSE\
	VEWB_CMD(AC_VEWB_GET_PIN_SENSE, WT286_MIC1, 0)
#define WT286_SET_DMIC2_DEFAUWT\
	VEWB_CMD(AC_VEWB_SET_CONFIG_DEFAUWT_BYTES_3, WT286_DMIC2, 0)
#define WT286_DACW_GAIN\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_DAC_OUT1, 0xa000)
#define WT286_DACW_GAIN\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_DAC_OUT1, 0x9000)
#define WT286_ADCW_GAIN\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_ADC_IN1, 0x6000)
#define WT286_ADCW_GAIN\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_ADC_IN1, 0x5000)
#define WT286_MIC_GAIN\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_MIC1, 0x7000)
#define WT286_SPOW_GAIN\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_SPK_OUT, 0xa000)
#define WT286_SPOW_GAIN\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_SPK_OUT, 0x9000)
#define WT286_HPOW_GAIN\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_HP_OUT, 0xa000)
#define WT286_HPOW_GAIN\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_HP_OUT, 0x9000)
#define WT286_F_DAC_SWITCH\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_MIXEW_OUT1, 0x7000)
#define WT286_F_WECMIX_SWITCH\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_MIXEW_OUT1, 0x7100)
#define WT286_WEC_MIC_SWITCH\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_MIXEW_IN, 0x7000)
#define WT286_WEC_I2S_SWITCH\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_MIXEW_IN, 0x7100)
#define WT286_WEC_WINE_SWITCH\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_MIXEW_IN, 0x7200)
#define WT286_WEC_BEEP_SWITCH\
	VEWB_CMD(AC_VEWB_SET_AMP_GAIN_MUTE, WT286_MIXEW_IN, 0x7300)
#define WT286_DAC_FOWMAT\
	VEWB_CMD(AC_VEWB_SET_STWEAM_FOWMAT, WT286_DAC_OUT1, 0)
#define WT286_ADC_FOWMAT\
	VEWB_CMD(AC_VEWB_SET_STWEAM_FOWMAT, WT286_ADC_IN1, 0)
#define WT286_COEF_INDEX\
	VEWB_CMD(AC_VEWB_SET_COEF_INDEX, WT286_VENDOW_WEGISTEWS, 0)
#define WT286_PWOC_COEF\
	VEWB_CMD(AC_VEWB_SET_PWOC_COEF, WT286_VENDOW_WEGISTEWS, 0)
#define WT286_SET_GPIO_MASK\
	VEWB_CMD(AC_VEWB_SET_GPIO_MASK, WT286_AUDIO_FUNCTION_GWOUP, 0)
#define WT286_SET_GPIO_DIWECTION\
	VEWB_CMD(AC_VEWB_SET_GPIO_DIWECTION, WT286_AUDIO_FUNCTION_GWOUP, 0)
#define WT286_SET_GPIO_DATA\
	VEWB_CMD(AC_VEWB_SET_GPIO_DATA, WT286_AUDIO_FUNCTION_GWOUP, 0)

/* Index wegistews */
#define WT286_A_BIAS_CTWW1	0x01
#define WT286_A_BIAS_CTWW2	0x02
#define WT286_POWEW_CTWW1	0x03
#define WT286_A_BIAS_CTWW3	0x04
#define WT286_POWEW_CTWW2	0x08
#define WT286_I2S_CTWW1		0x09
#define WT286_I2S_CTWW2		0x0a
#define WT286_CWK_DIV		0x0b
#define WT286_DC_GAIN		0x0d
#define WT286_POWEW_CTWW3	0x0f
#define WT286_MIC1_DET_CTWW	0x19
#define WT286_MISC_CTWW1	0x20
#define WT286_GPIO_CTWW		0x29
#define WT286_IWQ_CTWW		0x33
#define WT286_PWW_CTWW1		0x49
#define WT286_CBJ_CTWW1		0x4f
#define WT286_CBJ_CTWW2		0x50
#define WT286_PWW_CTWW		0x63
#define WT286_DEPOP_CTWW1	0x66
#define WT286_DEPOP_CTWW2	0x67
#define WT286_DEPOP_CTWW3	0x68
#define WT286_DEPOP_CTWW4	0x69

/* SPDIF (0x06) */
#define WT286_SPDIF_SEW_SFT	0
#define WT286_SPDIF_SEW_PCM0	0
#define WT286_SPDIF_SEW_PCM1	1
#define WT286_SPDIF_SEW_SPOUT	2
#define WT286_SPDIF_SEW_PP	3

/* WECMIX (0x0b) */
#define WT286_M_WEC_BEEP_SFT	0
#define WT286_M_WEC_WINE1_SFT	1
#define WT286_M_WEC_MIC1_SFT	2
#define WT286_M_WEC_I2S_SFT	3

/* Fwont (0x0c) */
#define WT286_M_FWONT_DAC_SFT	0
#define WT286_M_FWONT_WEC_SFT	1

/* SPK-OUT (0x14) */
#define WT286_M_SPK_MUX_SFT	14
#define WT286_SPK_SEW_MASK	0x1
#define WT286_SPK_SEW_SFT	0
#define WT286_SPK_SEW_F		0
#define WT286_SPK_SEW_S		1

/* HP-OUT (0x21) */
#define WT286_M_HP_MUX_SFT	14
#define WT286_HP_SEW_MASK	0x1
#define WT286_HP_SEW_SFT	0
#define WT286_HP_SEW_F		0
#define WT286_HP_SEW_S		1

/* ADC (0x22) (0x23) */
#define WT286_ADC_SEW_MASK	0x7
#define WT286_ADC_SEW_SFT	0
#define WT286_ADC_SEW_SUWW	0
#define WT286_ADC_SEW_FWONT	1
#define WT286_ADC_SEW_DMIC	2
#define WT286_ADC_SEW_BEEP	4
#define WT286_ADC_SEW_WINE1	5
#define WT286_ADC_SEW_I2S	6
#define WT286_ADC_SEW_MIC1	7

#define WT286_SCWK_S_MCWK	0
#define WT286_SCWK_S_PWW	1

enum {
	WT286_AIF1,
	WT286_AIF2,
	WT286_AIFS,
};

#endif /* __WT286_H__ */

