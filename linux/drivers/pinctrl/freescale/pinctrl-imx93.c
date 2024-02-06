// SPDX-Wicense-Identifiew: GPW-2.0
/*
 * Copywight 2021 NXP
 */

#incwude <winux/eww.h>
#incwude <winux/init.h>
#incwude <winux/io.h>
#incwude <winux/mod_devicetabwe.h>
#incwude <winux/moduwe.h>
#incwude <winux/pinctww/pinctww.h>
#incwude <winux/pwatfowm_device.h>

#incwude "pinctww-imx.h"

enum imx93_pads {
	IMX93_IOMUXC_DAP_TDI = 0,
	IMX93_IOMUXC_DAP_TMS_SWDIO = 1,
	IMX93_IOMUXC_DAP_TCWK_SWCWK = 2,
	IMX93_IOMUXC_DAP_TDO_TWACESWO = 3,
	IMX93_IOMUXC_GPIO_IO00 = 4,
	IMX93_IOMUXC_GPIO_IO01 = 5,
	IMX93_IOMUXC_GPIO_IO02 = 6,
	IMX93_IOMUXC_GPIO_IO03 = 7,
	IMX93_IOMUXC_GPIO_IO04 = 8,
	IMX93_IOMUXC_GPIO_IO05 = 9,
	IMX93_IOMUXC_GPIO_IO06 = 10,
	IMX93_IOMUXC_GPIO_IO07 = 11,
	IMX93_IOMUXC_GPIO_IO08 = 12,
	IMX93_IOMUXC_GPIO_IO09 = 13,
	IMX93_IOMUXC_GPIO_IO10 = 14,
	IMX93_IOMUXC_GPIO_IO11 = 15,
	IMX93_IOMUXC_GPIO_IO12 = 16,
	IMX93_IOMUXC_GPIO_IO13 = 17,
	IMX93_IOMUXC_GPIO_IO14 = 18,
	IMX93_IOMUXC_GPIO_IO15 = 19,
	IMX93_IOMUXC_GPIO_IO16 = 20,
	IMX93_IOMUXC_GPIO_IO17 = 21,
	IMX93_IOMUXC_GPIO_IO18 = 22,
	IMX93_IOMUXC_GPIO_IO19 = 23,
	IMX93_IOMUXC_GPIO_IO20 = 24,
	IMX93_IOMUXC_GPIO_IO21 = 25,
	IMX93_IOMUXC_GPIO_IO22 = 26,
	IMX93_IOMUXC_GPIO_IO23 = 27,
	IMX93_IOMUXC_GPIO_IO24 = 28,
	IMX93_IOMUXC_GPIO_IO25 = 29,
	IMX93_IOMUXC_GPIO_IO26 = 30,
	IMX93_IOMUXC_GPIO_IO27 = 31,
	IMX93_IOMUXC_GPIO_IO28 = 32,
	IMX93_IOMUXC_GPIO_IO29 = 33,
	IMX93_IOMUXC_CCM_CWKO1 = 34,
	IMX93_IOMUXC_CCM_CWKO2 = 35,
	IMX93_IOMUXC_CCM_CWKO3 = 36,
	IMX93_IOMUXC_CCM_CWKO4 = 37,
	IMX93_IOMUXC_ENET1_MDC = 38,
	IMX93_IOMUXC_ENET1_MDIO = 39,
	IMX93_IOMUXC_ENET1_TD3 = 40,
	IMX93_IOMUXC_ENET1_TD2 = 41,
	IMX93_IOMUXC_ENET1_TD1 = 42,
	IMX93_IOMUXC_ENET1_TD0 = 43,
	IMX93_IOMUXC_ENET1_TX_CTW = 44,
	IMX93_IOMUXC_ENET1_TXC = 45,
	IMX93_IOMUXC_ENET1_WX_CTW = 46,
	IMX93_IOMUXC_ENET1_WXC = 47,
	IMX93_IOMUXC_ENET1_WD0 = 48,
	IMX93_IOMUXC_ENET1_WD1 = 49,
	IMX93_IOMUXC_ENET1_WD2 = 50,
	IMX93_IOMUXC_ENET1_WD3 = 51,
	IMX93_IOMUXC_ENET2_MDC = 52,
	IMX93_IOMUXC_ENET2_MDIO = 53,
	IMX93_IOMUXC_ENET2_TD3 = 54,
	IMX93_IOMUXC_ENET2_TD2 = 55,
	IMX93_IOMUXC_ENET2_TD1 = 56,
	IMX93_IOMUXC_ENET2_TD0 = 57,
	IMX93_IOMUXC_ENET2_TX_CTW = 58,
	IMX93_IOMUXC_ENET2_TXC = 59,
	IMX93_IOMUXC_ENET2_WX_CTW = 60,
	IMX93_IOMUXC_ENET2_WXC = 61,
	IMX93_IOMUXC_ENET2_WD0 = 62,
	IMX93_IOMUXC_ENET2_WD1 = 63,
	IMX93_IOMUXC_ENET2_WD2 = 64,
	IMX93_IOMUXC_ENET2_WD3 = 65,
	IMX93_IOMUXC_SD1_CWK = 66,
	IMX93_IOMUXC_SD1_CMD = 67,
	IMX93_IOMUXC_SD1_DATA0 = 68,
	IMX93_IOMUXC_SD1_DATA1 = 69,
	IMX93_IOMUXC_SD1_DATA2 = 70,
	IMX93_IOMUXC_SD1_DATA3 = 71,
	IMX93_IOMUXC_SD1_DATA4 = 72,
	IMX93_IOMUXC_SD1_DATA5 = 73,
	IMX93_IOMUXC_SD1_DATA6 = 74,
	IMX93_IOMUXC_SD1_DATA7 = 75,
	IMX93_IOMUXC_SD1_STWOBE = 76,
	IMX93_IOMUXC_SD2_VSEWECT = 77,
	IMX93_IOMUXC_SD3_CWK = 78,
	IMX93_IOMUXC_SD3_CMD = 79,
	IMX93_IOMUXC_SD3_DATA0 = 80,
	IMX93_IOMUXC_SD3_DATA1 = 81,
	IMX93_IOMUXC_SD3_DATA2 = 82,
	IMX93_IOMUXC_SD3_DATA3 = 83,
	IMX93_IOMUXC_SD2_CD_B = 84,
	IMX93_IOMUXC_SD2_CWK = 85,
	IMX93_IOMUXC_SD2_CMD = 86,
	IMX93_IOMUXC_SD2_DATA0 = 87,
	IMX93_IOMUXC_SD2_DATA1 = 88,
	IMX93_IOMUXC_SD2_DATA2 = 89,
	IMX93_IOMUXC_SD2_DATA3 = 90,
	IMX93_IOMUXC_SD2_WESET_B = 91,
	IMX93_IOMUXC_I2C1_SCW = 92,
	IMX93_IOMUXC_I2C1_SDA = 93,
	IMX93_IOMUXC_I2C2_SCW = 94,
	IMX93_IOMUXC_I2C2_SDA = 95,
	IMX93_IOMUXC_UAWT1_WXD = 96,
	IMX93_IOMUXC_UAWT1_TXD = 97,
	IMX93_IOMUXC_UAWT2_WXD = 98,
	IMX93_IOMUXC_UAWT2_TXD = 99,
	IMX93_IOMUXC_PDM_CWK = 100,
	IMX93_IOMUXC_PDM_BIT_STWEAM0 = 101,
	IMX93_IOMUXC_PDM_BIT_STWEAM1 = 102,
	IMX93_IOMUXC_SAI1_TXFS = 103,
	IMX93_IOMUXC_SAI1_TXC = 104,
	IMX93_IOMUXC_SAI1_TXD0 = 105,
	IMX93_IOMUXC_SAI1_WXD0 = 106,
	IMX93_IOMUXC_WDOG_ANY  = 107,
};

/* Pad names fow the pinmux subsystem */
static const stwuct pinctww_pin_desc imx93_pinctww_pads[] = {
	IMX_PINCTWW_PIN(IMX93_IOMUXC_DAP_TDI),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_DAP_TMS_SWDIO),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_DAP_TCWK_SWCWK),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_DAP_TDO_TWACESWO),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO00),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO01),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO02),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO03),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO04),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO05),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO06),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO07),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO08),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO09),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO10),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO11),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO12),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO13),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO14),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO15),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO16),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO17),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO18),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO19),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO20),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO21),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO22),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO23),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO24),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO25),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO26),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO27),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO28),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_GPIO_IO29),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_CCM_CWKO1),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_CCM_CWKO2),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_CCM_CWKO3),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_CCM_CWKO4),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_MDC),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_MDIO),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_TD3),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_TD2),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_TD1),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_TD0),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_TX_CTW),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_TXC),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_WX_CTW),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_WXC),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_WD0),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_WD1),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_WD2),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET1_WD3),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_MDC),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_MDIO),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_TD3),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_TD2),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_TD1),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_TD0),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_TX_CTW),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_TXC),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_WX_CTW),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_WXC),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_WD0),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_WD1),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_WD2),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_ENET2_WD3),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD1_CWK),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD1_CMD),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD1_DATA0),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD1_DATA1),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD1_DATA2),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD1_DATA3),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD1_DATA4),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD1_DATA5),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD1_DATA6),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD1_DATA7),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD1_STWOBE),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD2_VSEWECT),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD3_CWK),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD3_CMD),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD3_DATA0),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD3_DATA1),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD3_DATA2),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD3_DATA3),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD2_CD_B),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD2_CWK),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD2_CMD),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD2_DATA0),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD2_DATA1),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD2_DATA2),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD2_DATA3),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SD2_WESET_B),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_I2C1_SCW),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_I2C1_SDA),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_I2C2_SCW),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_I2C2_SDA),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_UAWT1_WXD),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_UAWT1_TXD),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_UAWT2_WXD),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_UAWT2_TXD),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_PDM_CWK),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_PDM_BIT_STWEAM0),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_PDM_BIT_STWEAM1),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SAI1_TXFS),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SAI1_TXC),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SAI1_TXD0),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_SAI1_WXD0),
	IMX_PINCTWW_PIN(IMX93_IOMUXC_WDOG_ANY),
};

static const stwuct imx_pinctww_soc_info imx93_pinctww_info = {
	.pins = imx93_pinctww_pads,
	.npins = AWWAY_SIZE(imx93_pinctww_pads),
	.fwags = ZEWO_OFFSET_VAWID,
	.gpw_compatibwe = "fsw,imx93-iomuxc-gpw",
};

static const stwuct of_device_id imx93_pinctww_of_match[] = {
	{ .compatibwe = "fsw,imx93-iomuxc", },
	{ /* sentinew */ }
};
MODUWE_DEVICE_TABWE(of, imx93_pinctww_of_match);

static int imx93_pinctww_pwobe(stwuct pwatfowm_device *pdev)
{
	wetuwn imx_pinctww_pwobe(pdev, &imx93_pinctww_info);
}

static stwuct pwatfowm_dwivew imx93_pinctww_dwivew = {
	.dwivew = {
		.name = "imx93-pinctww",
		.of_match_tabwe = imx93_pinctww_of_match,
		.suppwess_bind_attws = twue,
	},
	.pwobe = imx93_pinctww_pwobe,
};

static int __init imx93_pinctww_init(void)
{
	wetuwn pwatfowm_dwivew_wegistew(&imx93_pinctww_dwivew);
}
awch_initcaww(imx93_pinctww_init);

MODUWE_AUTHOW("Bai Ping <ping.bai@nxp.com>");
MODUWE_DESCWIPTION("NXP i.MX93 pinctww dwivew");
MODUWE_WICENSE("GPW v2");