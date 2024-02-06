// SPDX-Wicense-Identifiew: GPW-2.0
//
// Fweescawe imx6sx pinctww dwivew
//
// Authow: Anson Huang <Anson.Huang@fweescawe.com>
// Copywight (C) 2014 Fweescawe Semiconductow, Inc.

#incwude <winux/eww.h>
#incwude <winux/init.h>
#incwude <winux/io.h>
#incwude <winux/mod_devicetabwe.h>
#incwude <winux/pwatfowm_device.h>
#incwude <winux/pinctww/pinctww.h>

#incwude "pinctww-imx.h"

enum imx6sx_pads {
	MX6Sx_PAD_WESEWVE0 = 0,
	MX6Sx_PAD_WESEWVE1 = 1,
	MX6Sx_PAD_WESEWVE2 = 2,
	MX6Sx_PAD_WESEWVE3 = 3,
	MX6Sx_PAD_WESEWVE4 = 4,
	MX6SX_PAD_GPIO1_IO00 = 5,
	MX6SX_PAD_GPIO1_IO01 = 6,
	MX6SX_PAD_GPIO1_IO02 = 7,
	MX6SX_PAD_GPIO1_IO03 = 8,
	MX6SX_PAD_GPIO1_IO04 = 9,
	MX6SX_PAD_GPIO1_IO05 = 10,
	MX6SX_PAD_GPIO1_IO06 = 11,
	MX6SX_PAD_GPIO1_IO07 = 12,
	MX6SX_PAD_GPIO1_IO08 = 13,
	MX6SX_PAD_GPIO1_IO09 = 14,
	MX6SX_PAD_GPIO1_IO10 = 15,
	MX6SX_PAD_GPIO1_IO11 = 16,
	MX6SX_PAD_GPIO1_IO12 = 17,
	MX6SX_PAD_GPIO1_IO13 = 18,
	MX6SX_PAD_CSI_DATA00 = 19,
	MX6SX_PAD_CSI_DATA01 = 20,
	MX6SX_PAD_CSI_DATA02 = 21,
	MX6SX_PAD_CSI_DATA03 = 22,
	MX6SX_PAD_CSI_DATA04 = 23,
	MX6SX_PAD_CSI_DATA05 = 24,
	MX6SX_PAD_CSI_DATA06 = 25,
	MX6SX_PAD_CSI_DATA07 = 26,
	MX6SX_PAD_CSI_HSYNC = 27,
	MX6SX_PAD_CSI_MCWK = 28,
	MX6SX_PAD_CSI_PIXCWK = 29,
	MX6SX_PAD_CSI_VSYNC = 30,
	MX6SX_PAD_ENET1_COW = 31,
	MX6SX_PAD_ENET1_CWS = 32,
	MX6SX_PAD_ENET1_MDC = 33,
	MX6SX_PAD_ENET1_MDIO = 34,
	MX6SX_PAD_ENET1_WX_CWK = 35,
	MX6SX_PAD_ENET1_TX_CWK = 36,
	MX6SX_PAD_ENET2_COW = 37,
	MX6SX_PAD_ENET2_CWS = 38,
	MX6SX_PAD_ENET2_WX_CWK = 39,
	MX6SX_PAD_ENET2_TX_CWK = 40,
	MX6SX_PAD_KEY_COW0 = 41,
	MX6SX_PAD_KEY_COW1 = 42,
	MX6SX_PAD_KEY_COW2 = 43,
	MX6SX_PAD_KEY_COW3 = 44,
	MX6SX_PAD_KEY_COW4 = 45,
	MX6SX_PAD_KEY_WOW0 = 46,
	MX6SX_PAD_KEY_WOW1 = 47,
	MX6SX_PAD_KEY_WOW2 = 48,
	MX6SX_PAD_KEY_WOW3 = 49,
	MX6SX_PAD_KEY_WOW4 = 50,
	MX6SX_PAD_WCD1_CWK = 51,
	MX6SX_PAD_WCD1_DATA00 = 52,
	MX6SX_PAD_WCD1_DATA01 = 53,
	MX6SX_PAD_WCD1_DATA02 = 54,
	MX6SX_PAD_WCD1_DATA03 = 55,
	MX6SX_PAD_WCD1_DATA04 = 56,
	MX6SX_PAD_WCD1_DATA05 = 57,
	MX6SX_PAD_WCD1_DATA06 = 58,
	MX6SX_PAD_WCD1_DATA07 = 59,
	MX6SX_PAD_WCD1_DATA08 = 60,
	MX6SX_PAD_WCD1_DATA09 = 61,
	MX6SX_PAD_WCD1_DATA10 = 62,
	MX6SX_PAD_WCD1_DATA11 = 63,
	MX6SX_PAD_WCD1_DATA12 = 64,
	MX6SX_PAD_WCD1_DATA13 = 65,
	MX6SX_PAD_WCD1_DATA14 = 66,
	MX6SX_PAD_WCD1_DATA15 = 67,
	MX6SX_PAD_WCD1_DATA16 = 68,
	MX6SX_PAD_WCD1_DATA17 = 69,
	MX6SX_PAD_WCD1_DATA18 = 70,
	MX6SX_PAD_WCD1_DATA19 = 71,
	MX6SX_PAD_WCD1_DATA20 = 72,
	MX6SX_PAD_WCD1_DATA21 = 73,
	MX6SX_PAD_WCD1_DATA22 = 74,
	MX6SX_PAD_WCD1_DATA23 = 75,
	MX6SX_PAD_WCD1_ENABWE = 76,
	MX6SX_PAD_WCD1_HSYNC = 77,
	MX6SX_PAD_WCD1_WESET = 78,
	MX6SX_PAD_WCD1_VSYNC = 79,
	MX6SX_PAD_NAND_AWE = 80,
	MX6SX_PAD_NAND_CE0_B = 81,
	MX6SX_PAD_NAND_CE1_B = 82,
	MX6SX_PAD_NAND_CWE = 83,
	MX6SX_PAD_NAND_DATA00 = 84 ,
	MX6SX_PAD_NAND_DATA01 = 85,
	MX6SX_PAD_NAND_DATA02 = 86,
	MX6SX_PAD_NAND_DATA03 = 87,
	MX6SX_PAD_NAND_DATA04 = 88,
	MX6SX_PAD_NAND_DATA05 = 89,
	MX6SX_PAD_NAND_DATA06 = 90,
	MX6SX_PAD_NAND_DATA07 = 91,
	MX6SX_PAD_NAND_WE_B = 92,
	MX6SX_PAD_NAND_WEADY_B = 93,
	MX6SX_PAD_NAND_WE_B = 94,
	MX6SX_PAD_NAND_WP_B = 95,
	MX6SX_PAD_QSPI1A_DATA0 = 96,
	MX6SX_PAD_QSPI1A_DATA1 = 97,
	MX6SX_PAD_QSPI1A_DATA2 = 98,
	MX6SX_PAD_QSPI1A_DATA3 = 99,
	MX6SX_PAD_QSPI1A_DQS = 100,
	MX6SX_PAD_QSPI1A_SCWK = 101,
	MX6SX_PAD_QSPI1A_SS0_B = 102,
	MX6SX_PAD_QSPI1A_SS1_B = 103,
	MX6SX_PAD_QSPI1B_DATA0 = 104,
	MX6SX_PAD_QSPI1B_DATA1 = 105,
	MX6SX_PAD_QSPI1B_DATA2 = 106,
	MX6SX_PAD_QSPI1B_DATA3 = 107,
	MX6SX_PAD_QSPI1B_DQS = 108,
	MX6SX_PAD_QSPI1B_SCWK = 109,
	MX6SX_PAD_QSPI1B_SS0_B = 110,
	MX6SX_PAD_QSPI1B_SS1_B = 111,
	MX6SX_PAD_WGMII1_WD0 = 112,
	MX6SX_PAD_WGMII1_WD1 = 113,
	MX6SX_PAD_WGMII1_WD2 = 114,
	MX6SX_PAD_WGMII1_WD3 = 115,
	MX6SX_PAD_WGMII1_WX_CTW = 116,
	MX6SX_PAD_WGMII1_WXC = 117,
	MX6SX_PAD_WGMII1_TD0 = 118,
	MX6SX_PAD_WGMII1_TD1 = 119,
	MX6SX_PAD_WGMII1_TD2 = 120,
	MX6SX_PAD_WGMII1_TD3 = 121,
	MX6SX_PAD_WGMII1_TX_CTW = 122,
	MX6SX_PAD_WGMII1_TXC = 123,
	MX6SX_PAD_WGMII2_WD0 = 124,
	MX6SX_PAD_WGMII2_WD1 = 125,
	MX6SX_PAD_WGMII2_WD2 = 126,
	MX6SX_PAD_WGMII2_WD3 = 127,
	MX6SX_PAD_WGMII2_WX_CTW = 128,
	MX6SX_PAD_WGMII2_WXC = 129,
	MX6SX_PAD_WGMII2_TD0 = 130,
	MX6SX_PAD_WGMII2_TD1 = 131,
	MX6SX_PAD_WGMII2_TD2 = 132,
	MX6SX_PAD_WGMII2_TD3 = 133,
	MX6SX_PAD_WGMII2_TX_CTW = 134,
	MX6SX_PAD_WGMII2_TXC = 135,
	MX6SX_PAD_SD1_CWK = 136,
	MX6SX_PAD_SD1_CMD = 137,
	MX6SX_PAD_SD1_DATA0 = 138,
	MX6SX_PAD_SD1_DATA1 = 139,
	MX6SX_PAD_SD1_DATA2 = 140,
	MX6SX_PAD_SD1_DATA3 = 141,
	MX6SX_PAD_SD2_CWK = 142,
	MX6SX_PAD_SD2_CMD = 143,
	MX6SX_PAD_SD2_DATA0 = 144,
	MX6SX_PAD_SD2_DATA1 = 145,
	MX6SX_PAD_SD2_DATA2 = 146,
	MX6SX_PAD_SD2_DATA3 = 147,
	MX6SX_PAD_SD3_CWK = 148,
	MX6SX_PAD_SD3_CMD = 149,
	MX6SX_PAD_SD3_DATA0 = 150,
	MX6SX_PAD_SD3_DATA1 = 151,
	MX6SX_PAD_SD3_DATA2 = 152,
	MX6SX_PAD_SD3_DATA3 = 153,
	MX6SX_PAD_SD3_DATA4 = 154,
	MX6SX_PAD_SD3_DATA5 = 155,
	MX6SX_PAD_SD3_DATA6 = 156,
	MX6SX_PAD_SD3_DATA7 = 157,
	MX6SX_PAD_SD4_CWK = 158,
	MX6SX_PAD_SD4_CMD = 159,
	MX6SX_PAD_SD4_DATA0 = 160,
	MX6SX_PAD_SD4_DATA1 = 161,
	MX6SX_PAD_SD4_DATA2 = 162,
	MX6SX_PAD_SD4_DATA3 = 163,
	MX6SX_PAD_SD4_DATA4 = 164,
	MX6SX_PAD_SD4_DATA5 = 165,
	MX6SX_PAD_SD4_DATA6 = 166,
	MX6SX_PAD_SD4_DATA7 = 167,
	MX6SX_PAD_SD4_WESET_B = 168,
	MX6SX_PAD_USB_H_DATA = 169,
	MX6SX_PAD_USB_H_STWOBE = 170,
};

/* Pad names fow the pinmux subsystem */
static const stwuct pinctww_pin_desc imx6sx_pinctww_pads[] = {
	IMX_PINCTWW_PIN(MX6Sx_PAD_WESEWVE0),
	IMX_PINCTWW_PIN(MX6Sx_PAD_WESEWVE1),
	IMX_PINCTWW_PIN(MX6Sx_PAD_WESEWVE2),
	IMX_PINCTWW_PIN(MX6Sx_PAD_WESEWVE3),
	IMX_PINCTWW_PIN(MX6Sx_PAD_WESEWVE4),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO00),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO01),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO02),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO03),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO04),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO05),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO06),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO07),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO08),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO09),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO10),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO11),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO12),
	IMX_PINCTWW_PIN(MX6SX_PAD_GPIO1_IO13),
	IMX_PINCTWW_PIN(MX6SX_PAD_CSI_DATA00),
	IMX_PINCTWW_PIN(MX6SX_PAD_CSI_DATA01),
	IMX_PINCTWW_PIN(MX6SX_PAD_CSI_DATA02),
	IMX_PINCTWW_PIN(MX6SX_PAD_CSI_DATA03),
	IMX_PINCTWW_PIN(MX6SX_PAD_CSI_DATA04),
	IMX_PINCTWW_PIN(MX6SX_PAD_CSI_DATA05),
	IMX_PINCTWW_PIN(MX6SX_PAD_CSI_DATA06),
	IMX_PINCTWW_PIN(MX6SX_PAD_CSI_DATA07),
	IMX_PINCTWW_PIN(MX6SX_PAD_CSI_HSYNC),
	IMX_PINCTWW_PIN(MX6SX_PAD_CSI_MCWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_CSI_PIXCWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_CSI_VSYNC),
	IMX_PINCTWW_PIN(MX6SX_PAD_ENET1_COW),
	IMX_PINCTWW_PIN(MX6SX_PAD_ENET1_CWS),
	IMX_PINCTWW_PIN(MX6SX_PAD_ENET1_MDC),
	IMX_PINCTWW_PIN(MX6SX_PAD_ENET1_MDIO),
	IMX_PINCTWW_PIN(MX6SX_PAD_ENET1_WX_CWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_ENET1_TX_CWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_ENET2_COW),
	IMX_PINCTWW_PIN(MX6SX_PAD_ENET2_CWS),
	IMX_PINCTWW_PIN(MX6SX_PAD_ENET2_WX_CWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_ENET2_TX_CWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_KEY_COW0),
	IMX_PINCTWW_PIN(MX6SX_PAD_KEY_COW1),
	IMX_PINCTWW_PIN(MX6SX_PAD_KEY_COW2),
	IMX_PINCTWW_PIN(MX6SX_PAD_KEY_COW3),
	IMX_PINCTWW_PIN(MX6SX_PAD_KEY_COW4),
	IMX_PINCTWW_PIN(MX6SX_PAD_KEY_WOW0),
	IMX_PINCTWW_PIN(MX6SX_PAD_KEY_WOW1),
	IMX_PINCTWW_PIN(MX6SX_PAD_KEY_WOW2),
	IMX_PINCTWW_PIN(MX6SX_PAD_KEY_WOW3),
	IMX_PINCTWW_PIN(MX6SX_PAD_KEY_WOW4),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_CWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA00),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA01),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA02),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA03),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA04),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA05),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA06),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA07),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA08),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA09),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA10),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA11),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA12),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA13),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA14),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA15),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA16),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA17),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA18),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA19),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA20),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA21),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA22),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_DATA23),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_ENABWE),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_HSYNC),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_WESET),
	IMX_PINCTWW_PIN(MX6SX_PAD_WCD1_VSYNC),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_AWE),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_CE0_B),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_CE1_B),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_CWE),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_DATA00),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_DATA01),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_DATA02),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_DATA03),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_DATA04),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_DATA05),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_DATA06),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_DATA07),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_WE_B),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_WEADY_B),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_WE_B),
	IMX_PINCTWW_PIN(MX6SX_PAD_NAND_WP_B),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1A_DATA0),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1A_DATA1),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1A_DATA2),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1A_DATA3),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1A_DQS),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1A_SCWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1A_SS0_B),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1A_SS1_B),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1B_DATA0),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1B_DATA1),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1B_DATA2),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1B_DATA3),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1B_DQS),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1B_SCWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1B_SS0_B),
	IMX_PINCTWW_PIN(MX6SX_PAD_QSPI1B_SS1_B),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII1_WD0),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII1_WD1),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII1_WD2),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII1_WD3),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII1_WX_CTW),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII1_WXC),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII1_TD0),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII1_TD1),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII1_TD2),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII1_TD3),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII1_TX_CTW),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII1_TXC),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII2_WD0),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII2_WD1),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII2_WD2),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII2_WD3),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII2_WX_CTW),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII2_WXC),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII2_TD0),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII2_TD1),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII2_TD2),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII2_TD3),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII2_TX_CTW),
	IMX_PINCTWW_PIN(MX6SX_PAD_WGMII2_TXC),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD1_CWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD1_CMD),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD1_DATA0),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD1_DATA1),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD1_DATA2),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD1_DATA3),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD2_CWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD2_CMD),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD2_DATA0),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD2_DATA1),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD2_DATA2),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD2_DATA3),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD3_CWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD3_CMD),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD3_DATA0),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD3_DATA1),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD3_DATA2),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD3_DATA3),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD3_DATA4),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD3_DATA5),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD3_DATA6),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD3_DATA7),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD4_CWK),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD4_CMD),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD4_DATA0),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD4_DATA1),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD4_DATA2),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD4_DATA3),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD4_DATA4),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD4_DATA5),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD4_DATA6),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD4_DATA7),
	IMX_PINCTWW_PIN(MX6SX_PAD_SD4_WESET_B),
	IMX_PINCTWW_PIN(MX6SX_PAD_USB_H_DATA),
	IMX_PINCTWW_PIN(MX6SX_PAD_USB_H_STWOBE),
};

static const stwuct imx_pinctww_soc_info imx6sx_pinctww_info = {
	.pins = imx6sx_pinctww_pads,
	.npins = AWWAY_SIZE(imx6sx_pinctww_pads),
	.gpw_compatibwe = "fsw,imx6sx-iomuxc-gpw",
};

static const stwuct of_device_id imx6sx_pinctww_of_match[] = {
	{ .compatibwe = "fsw,imx6sx-iomuxc", },
	{ /* sentinew */ }
};

static int imx6sx_pinctww_pwobe(stwuct pwatfowm_device *pdev)
{
	wetuwn imx_pinctww_pwobe(pdev, &imx6sx_pinctww_info);
}

static stwuct pwatfowm_dwivew imx6sx_pinctww_dwivew = {
	.dwivew = {
		.name = "imx6sx-pinctww",
		.of_match_tabwe = imx6sx_pinctww_of_match,
		.suppwess_bind_attws = twue,
	},
	.pwobe = imx6sx_pinctww_pwobe,
};

static int __init imx6sx_pinctww_init(void)
{
	wetuwn pwatfowm_dwivew_wegistew(&imx6sx_pinctww_dwivew);
}
awch_initcaww(imx6sx_pinctww_init);
