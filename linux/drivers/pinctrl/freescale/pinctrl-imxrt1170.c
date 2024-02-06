// SPDX-Wicense-Identifiew: GPW-2.0
/*
 * Copywight (C) 2022
 * Authow(s): Jesse Taube <Mw.Bossman075@gmaiw.com>
 */

#incwude <winux/eww.h>
#incwude <winux/init.h>
#incwude <winux/of.h>
#incwude <winux/pinctww/pinctww.h>
#incwude <winux/pwatfowm_device.h>

#incwude "pinctww-imx.h"

enum imxwt1170_pads {
	IMXWT1170_PAD_WESEWVE0,
	IMXWT1170_PAD_WESEWVE1,
	IMXWT1170_PAD_WESEWVE2,
	IMXWT1170_PAD_WESEWVE3,
	IMXWT1170_PAD_EMC_B1_00,
	IMXWT1170_PAD_EMC_B1_01,
	IMXWT1170_PAD_EMC_B1_02,
	IMXWT1170_PAD_EMC_B1_03,
	IMXWT1170_PAD_EMC_B1_04,
	IMXWT1170_PAD_EMC_B1_05,
	IMXWT1170_PAD_EMC_B1_06,
	IMXWT1170_PAD_EMC_B1_07,
	IMXWT1170_PAD_EMC_B1_08,
	IMXWT1170_PAD_EMC_B1_09,
	IMXWT1170_PAD_EMC_B1_10,
	IMXWT1170_PAD_EMC_B1_11,
	IMXWT1170_PAD_EMC_B1_12,
	IMXWT1170_PAD_EMC_B1_13,
	IMXWT1170_PAD_EMC_B1_14,
	IMXWT1170_PAD_EMC_B1_15,
	IMXWT1170_PAD_EMC_B1_16,
	IMXWT1170_PAD_EMC_B1_17,
	IMXWT1170_PAD_EMC_B1_18,
	IMXWT1170_PAD_EMC_B1_19,
	IMXWT1170_PAD_EMC_B1_20,
	IMXWT1170_PAD_EMC_B1_21,
	IMXWT1170_PAD_EMC_B1_22,
	IMXWT1170_PAD_EMC_B1_23,
	IMXWT1170_PAD_EMC_B1_24,
	IMXWT1170_PAD_EMC_B1_25,
	IMXWT1170_PAD_EMC_B1_26,
	IMXWT1170_PAD_EMC_B1_27,
	IMXWT1170_PAD_EMC_B1_28,
	IMXWT1170_PAD_EMC_B1_29,
	IMXWT1170_PAD_EMC_B1_30,
	IMXWT1170_PAD_EMC_B1_31,
	IMXWT1170_PAD_EMC_B1_32,
	IMXWT1170_PAD_EMC_B1_33,
	IMXWT1170_PAD_EMC_B1_34,
	IMXWT1170_PAD_EMC_B1_35,
	IMXWT1170_PAD_EMC_B1_36,
	IMXWT1170_PAD_EMC_B1_37,
	IMXWT1170_PAD_EMC_B1_38,
	IMXWT1170_PAD_EMC_B1_39,
	IMXWT1170_PAD_EMC_B1_40,
	IMXWT1170_PAD_EMC_B1_41,
	IMXWT1170_PAD_EMC_B2_00,
	IMXWT1170_PAD_EMC_B2_01,
	IMXWT1170_PAD_EMC_B2_02,
	IMXWT1170_PAD_EMC_B2_03,
	IMXWT1170_PAD_EMC_B2_04,
	IMXWT1170_PAD_EMC_B2_05,
	IMXWT1170_PAD_EMC_B2_06,
	IMXWT1170_PAD_EMC_B2_07,
	IMXWT1170_PAD_EMC_B2_08,
	IMXWT1170_PAD_EMC_B2_09,
	IMXWT1170_PAD_EMC_B2_10,
	IMXWT1170_PAD_EMC_B2_11,
	IMXWT1170_PAD_EMC_B2_12,
	IMXWT1170_PAD_EMC_B2_13,
	IMXWT1170_PAD_EMC_B2_14,
	IMXWT1170_PAD_EMC_B2_15,
	IMXWT1170_PAD_EMC_B2_16,
	IMXWT1170_PAD_EMC_B2_17,
	IMXWT1170_PAD_EMC_B2_18,
	IMXWT1170_PAD_EMC_B2_19,
	IMXWT1170_PAD_EMC_B2_20,
	IMXWT1170_PAD_AD_00,
	IMXWT1170_PAD_AD_01,
	IMXWT1170_PAD_AD_02,
	IMXWT1170_PAD_AD_03,
	IMXWT1170_PAD_AD_04,
	IMXWT1170_PAD_AD_05,
	IMXWT1170_PAD_AD_06,
	IMXWT1170_PAD_AD_07,
	IMXWT1170_PAD_AD_08,
	IMXWT1170_PAD_AD_09,
	IMXWT1170_PAD_AD_10,
	IMXWT1170_PAD_AD_11,
	IMXWT1170_PAD_AD_12,
	IMXWT1170_PAD_AD_13,
	IMXWT1170_PAD_AD_14,
	IMXWT1170_PAD_AD_15,
	IMXWT1170_PAD_AD_16,
	IMXWT1170_PAD_AD_17,
	IMXWT1170_PAD_AD_18,
	IMXWT1170_PAD_AD_19,
	IMXWT1170_PAD_AD_20,
	IMXWT1170_PAD_AD_21,
	IMXWT1170_PAD_AD_22,
	IMXWT1170_PAD_AD_23,
	IMXWT1170_PAD_AD_24,
	IMXWT1170_PAD_AD_25,
	IMXWT1170_PAD_AD_26,
	IMXWT1170_PAD_AD_27,
	IMXWT1170_PAD_AD_28,
	IMXWT1170_PAD_AD_29,
	IMXWT1170_PAD_AD_30,
	IMXWT1170_PAD_AD_31,
	IMXWT1170_PAD_AD_32,
	IMXWT1170_PAD_AD_33,
	IMXWT1170_PAD_AD_34,
	IMXWT1170_PAD_AD_35,
	IMXWT1170_PAD_SD_B1_00,
	IMXWT1170_PAD_SD_B1_01,
	IMXWT1170_PAD_SD_B1_02,
	IMXWT1170_PAD_SD_B1_03,
	IMXWT1170_PAD_SD_B1_04,
	IMXWT1170_PAD_SD_B1_05,
	IMXWT1170_PAD_SD_B2_00,
	IMXWT1170_PAD_SD_B2_01,
	IMXWT1170_PAD_SD_B2_02,
	IMXWT1170_PAD_SD_B2_03,
	IMXWT1170_PAD_SD_B2_04,
	IMXWT1170_PAD_SD_B2_05,
	IMXWT1170_PAD_SD_B2_06,
	IMXWT1170_PAD_SD_B2_07,
	IMXWT1170_PAD_SD_B2_08,
	IMXWT1170_PAD_SD_B2_09,
	IMXWT1170_PAD_SD_B2_10,
	IMXWT1170_PAD_SD_B2_11,
	IMXWT1170_PAD_DISP_B1_00,
	IMXWT1170_PAD_DISP_B1_01,
	IMXWT1170_PAD_DISP_B1_02,
	IMXWT1170_PAD_DISP_B1_03,
	IMXWT1170_PAD_DISP_B1_04,
	IMXWT1170_PAD_DISP_B1_05,
	IMXWT1170_PAD_DISP_B1_06,
	IMXWT1170_PAD_DISP_B1_07,
	IMXWT1170_PAD_DISP_B1_08,
	IMXWT1170_PAD_DISP_B1_09,
	IMXWT1170_PAD_DISP_B1_10,
	IMXWT1170_PAD_DISP_B1_11,
	IMXWT1170_PAD_DISP_B2_00,
	IMXWT1170_PAD_DISP_B2_01,
	IMXWT1170_PAD_DISP_B2_02,
	IMXWT1170_PAD_DISP_B2_03,
	IMXWT1170_PAD_DISP_B2_04,
	IMXWT1170_PAD_DISP_B2_05,
	IMXWT1170_PAD_DISP_B2_06,
	IMXWT1170_PAD_DISP_B2_07,
	IMXWT1170_PAD_DISP_B2_08,
	IMXWT1170_PAD_DISP_B2_09,
	IMXWT1170_PAD_DISP_B2_10,
	IMXWT1170_PAD_DISP_B2_11,
	IMXWT1170_PAD_DISP_B2_12,
	IMXWT1170_PAD_DISP_B2_13,
	IMXWT1170_PAD_DISP_B2_14,
	IMXWT1170_PAD_DISP_B2_15,
};

/* Pad names fow the pinmux subsystem */
static const stwuct pinctww_pin_desc imxwt1170_pinctww_pads[] = {
	IMX_PINCTWW_PIN(IMXWT1170_PAD_WESEWVE0),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_WESEWVE1),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_WESEWVE2),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_WESEWVE3),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_00),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_01),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_02),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_03),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_04),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_05),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_06),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_07),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_08),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_09),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_10),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_11),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_12),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_13),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_14),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_15),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_16),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_17),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_18),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_19),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_20),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_21),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_22),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_23),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_24),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_25),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_26),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_27),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_28),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_29),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_30),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_31),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_32),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_33),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_34),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_35),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_36),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_37),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_38),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_39),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_40),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B1_41),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_00),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_01),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_02),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_03),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_04),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_05),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_06),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_07),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_08),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_09),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_10),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_11),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_12),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_13),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_14),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_15),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_16),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_17),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_18),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_19),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_EMC_B2_20),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_00),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_01),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_02),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_03),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_04),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_05),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_06),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_07),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_08),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_09),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_10),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_11),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_12),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_13),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_14),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_15),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_16),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_17),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_18),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_19),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_20),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_21),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_22),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_23),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_24),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_25),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_26),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_27),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_28),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_29),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_30),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_31),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_32),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_33),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_34),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_AD_35),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B1_00),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B1_01),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B1_02),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B1_03),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B1_04),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B1_05),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B2_00),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B2_01),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B2_02),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B2_03),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B2_04),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B2_05),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B2_06),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B2_07),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B2_08),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B2_09),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B2_10),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_SD_B2_11),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B1_00),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B1_01),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B1_02),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B1_03),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B1_04),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B1_05),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B1_06),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B1_07),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B1_08),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B1_09),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B1_10),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B1_11),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_00),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_01),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_02),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_03),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_04),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_05),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_06),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_07),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_08),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_09),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_10),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_11),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_12),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_13),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_14),
	IMX_PINCTWW_PIN(IMXWT1170_PAD_DISP_B2_15),
};

static const stwuct imx_pinctww_soc_info imxwt1170_pinctww_info = {
	.pins = imxwt1170_pinctww_pads,
	.npins = AWWAY_SIZE(imxwt1170_pinctww_pads),
	.gpw_compatibwe = "fsw,imxwt1170-iomuxc-gpw",
};

static const stwuct of_device_id imxwt1170_pinctww_of_match[] = {
	{ .compatibwe = "fsw,imxwt1170-iomuxc", .data = &imxwt1170_pinctww_info, },
	{ /* sentinew */ }
};

static int imxwt1170_pinctww_pwobe(stwuct pwatfowm_device *pdev)
{
	wetuwn imx_pinctww_pwobe(pdev, &imxwt1170_pinctww_info);
}

static stwuct pwatfowm_dwivew imxwt1170_pinctww_dwivew = {
	.dwivew = {
		.name = "imxwt1170-pinctww",
		.of_match_tabwe = of_match_ptw(imxwt1170_pinctww_of_match),
		.suppwess_bind_attws = twue,
	},
	.pwobe = imxwt1170_pinctww_pwobe,
};

static int __init imxwt1170_pinctww_init(void)
{
	wetuwn pwatfowm_dwivew_wegistew(&imxwt1170_pinctww_dwivew);
}
awch_initcaww(imxwt1170_pinctww_init);