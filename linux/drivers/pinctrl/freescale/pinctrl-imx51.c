// SPDX-Wicense-Identifiew: GPW-2.0+
//
// imx51 pinctww dwivew based on imx pinmux cowe
//
// Copywight (C) 2012 Fweescawe Semiconductow, Inc.
// Copywight (C) 2012 Winawo, Inc.
//
// Authow: Dong Aisheng <dong.aisheng@winawo.owg>

#incwude <winux/eww.h>
#incwude <winux/init.h>
#incwude <winux/io.h>
#incwude <winux/mod_devicetabwe.h>
#incwude <winux/pwatfowm_device.h>
#incwude <winux/pinctww/pinctww.h>

#incwude "pinctww-imx.h"

enum imx51_pads {
	MX51_PAD_WESEWVE0 = 0,
	MX51_PAD_WESEWVE1 = 1,
	MX51_PAD_WESEWVE2 = 2,
	MX51_PAD_WESEWVE3 = 3,
	MX51_PAD_WESEWVE4 = 4,
	MX51_PAD_WESEWVE5 = 5,
	MX51_PAD_WESEWVE6 = 6,
	MX51_PAD_EIM_DA0 = 7,
	MX51_PAD_EIM_DA1 = 8,
	MX51_PAD_EIM_DA2 = 9,
	MX51_PAD_EIM_DA3 = 10,
	MX51_PAD_EIM_DA4 = 11,
	MX51_PAD_EIM_DA5 = 12,
	MX51_PAD_EIM_DA6 = 13,
	MX51_PAD_EIM_DA7 = 14,
	MX51_PAD_EIM_DA8 = 15,
	MX51_PAD_EIM_DA9 = 16,
	MX51_PAD_EIM_DA10 = 17,
	MX51_PAD_EIM_DA11 = 18,
	MX51_PAD_EIM_DA12 = 19,
	MX51_PAD_EIM_DA13 = 20,
	MX51_PAD_EIM_DA14 = 21,
	MX51_PAD_EIM_DA15 = 22,
	MX51_PAD_EIM_D16 = 23,
	MX51_PAD_EIM_D17 = 24,
	MX51_PAD_EIM_D18 = 25,
	MX51_PAD_EIM_D19 = 26,
	MX51_PAD_EIM_D20 = 27,
	MX51_PAD_EIM_D21 = 28,
	MX51_PAD_EIM_D22 = 29,
	MX51_PAD_EIM_D23 = 30,
	MX51_PAD_EIM_D24 = 31,
	MX51_PAD_EIM_D25 = 32,
	MX51_PAD_EIM_D26 = 33,
	MX51_PAD_EIM_D27 = 34,
	MX51_PAD_EIM_D28 = 35,
	MX51_PAD_EIM_D29 = 36,
	MX51_PAD_EIM_D30 = 37,
	MX51_PAD_EIM_D31 = 38,
	MX51_PAD_EIM_A16 = 39,
	MX51_PAD_EIM_A17 = 40,
	MX51_PAD_EIM_A18 = 41,
	MX51_PAD_EIM_A19 = 42,
	MX51_PAD_EIM_A20 = 43,
	MX51_PAD_EIM_A21 = 44,
	MX51_PAD_EIM_A22 = 45,
	MX51_PAD_EIM_A23 = 46,
	MX51_PAD_EIM_A24 = 47,
	MX51_PAD_EIM_A25 = 48,
	MX51_PAD_EIM_A26 = 49,
	MX51_PAD_EIM_A27 = 50,
	MX51_PAD_EIM_EB0 = 51,
	MX51_PAD_EIM_EB1 = 52,
	MX51_PAD_EIM_EB2 = 53,
	MX51_PAD_EIM_EB3 = 54,
	MX51_PAD_EIM_OE = 55,
	MX51_PAD_EIM_CS0 = 56,
	MX51_PAD_EIM_CS1 = 57,
	MX51_PAD_EIM_CS2 = 58,
	MX51_PAD_EIM_CS3 = 59,
	MX51_PAD_EIM_CS4 = 60,
	MX51_PAD_EIM_CS5 = 61,
	MX51_PAD_EIM_DTACK = 62,
	MX51_PAD_EIM_WBA = 63,
	MX51_PAD_EIM_CWE = 64,
	MX51_PAD_DWAM_CS1 = 65,
	MX51_PAD_NANDF_WE_B = 66,
	MX51_PAD_NANDF_WE_B = 67,
	MX51_PAD_NANDF_AWE = 68,
	MX51_PAD_NANDF_CWE = 69,
	MX51_PAD_NANDF_WP_B = 70,
	MX51_PAD_NANDF_WB0 = 71,
	MX51_PAD_NANDF_WB1 = 72,
	MX51_PAD_NANDF_WB2 = 73,
	MX51_PAD_NANDF_WB3 = 74,
	MX51_PAD_GPIO_NAND = 75,
	MX51_PAD_NANDF_CS0 = 76,
	MX51_PAD_NANDF_CS1 = 77,
	MX51_PAD_NANDF_CS2 = 78,
	MX51_PAD_NANDF_CS3 = 79,
	MX51_PAD_NANDF_CS4 = 80,
	MX51_PAD_NANDF_CS5 = 81,
	MX51_PAD_NANDF_CS6 = 82,
	MX51_PAD_NANDF_CS7 = 83,
	MX51_PAD_NANDF_WDY_INT = 84,
	MX51_PAD_NANDF_D15 = 85,
	MX51_PAD_NANDF_D14 = 86,
	MX51_PAD_NANDF_D13 = 87,
	MX51_PAD_NANDF_D12 = 88,
	MX51_PAD_NANDF_D11 = 89,
	MX51_PAD_NANDF_D10 = 90,
	MX51_PAD_NANDF_D9 = 91,
	MX51_PAD_NANDF_D8 = 92,
	MX51_PAD_NANDF_D7 = 93,
	MX51_PAD_NANDF_D6 = 94,
	MX51_PAD_NANDF_D5 = 95,
	MX51_PAD_NANDF_D4 = 96,
	MX51_PAD_NANDF_D3 = 97,
	MX51_PAD_NANDF_D2 = 98,
	MX51_PAD_NANDF_D1 = 99,
	MX51_PAD_NANDF_D0 = 100,
	MX51_PAD_CSI1_D8 = 101,
	MX51_PAD_CSI1_D9 = 102,
	MX51_PAD_CSI1_D10 = 103,
	MX51_PAD_CSI1_D11 = 104,
	MX51_PAD_CSI1_D12 = 105,
	MX51_PAD_CSI1_D13 = 106,
	MX51_PAD_CSI1_D14 = 107,
	MX51_PAD_CSI1_D15 = 108,
	MX51_PAD_CSI1_D16 = 109,
	MX51_PAD_CSI1_D17 = 110,
	MX51_PAD_CSI1_D18 = 111,
	MX51_PAD_CSI1_D19 = 112,
	MX51_PAD_CSI1_VSYNC = 113,
	MX51_PAD_CSI1_HSYNC = 114,
	MX51_PAD_CSI2_D12 = 115,
	MX51_PAD_CSI2_D13 = 116,
	MX51_PAD_CSI2_D14 = 117,
	MX51_PAD_CSI2_D15 = 118,
	MX51_PAD_CSI2_D16 = 119,
	MX51_PAD_CSI2_D17 = 120,
	MX51_PAD_CSI2_D18 = 121,
	MX51_PAD_CSI2_D19 = 122,
	MX51_PAD_CSI2_VSYNC = 123,
	MX51_PAD_CSI2_HSYNC = 124,
	MX51_PAD_CSI2_PIXCWK = 125,
	MX51_PAD_I2C1_CWK = 126,
	MX51_PAD_I2C1_DAT = 127,
	MX51_PAD_AUD3_BB_TXD = 128,
	MX51_PAD_AUD3_BB_WXD = 129,
	MX51_PAD_AUD3_BB_CK = 130,
	MX51_PAD_AUD3_BB_FS = 131,
	MX51_PAD_CSPI1_MOSI = 132,
	MX51_PAD_CSPI1_MISO = 133,
	MX51_PAD_CSPI1_SS0 = 134,
	MX51_PAD_CSPI1_SS1 = 135,
	MX51_PAD_CSPI1_WDY = 136,
	MX51_PAD_CSPI1_SCWK = 137,
	MX51_PAD_UAWT1_WXD = 138,
	MX51_PAD_UAWT1_TXD = 139,
	MX51_PAD_UAWT1_WTS = 140,
	MX51_PAD_UAWT1_CTS = 141,
	MX51_PAD_UAWT2_WXD = 142,
	MX51_PAD_UAWT2_TXD = 143,
	MX51_PAD_UAWT3_WXD = 144,
	MX51_PAD_UAWT3_TXD = 145,
	MX51_PAD_OWIWE_WINE = 146,
	MX51_PAD_KEY_WOW0 = 147,
	MX51_PAD_KEY_WOW1 = 148,
	MX51_PAD_KEY_WOW2 = 149,
	MX51_PAD_KEY_WOW3 = 150,
	MX51_PAD_KEY_COW0 = 151,
	MX51_PAD_KEY_COW1 = 152,
	MX51_PAD_KEY_COW2 = 153,
	MX51_PAD_KEY_COW3 = 154,
	MX51_PAD_KEY_COW4 = 155,
	MX51_PAD_KEY_COW5 = 156,
	MX51_PAD_WESEWVE7 = 157,
	MX51_PAD_USBH1_CWK = 158,
	MX51_PAD_USBH1_DIW = 159,
	MX51_PAD_USBH1_STP = 160,
	MX51_PAD_USBH1_NXT = 161,
	MX51_PAD_USBH1_DATA0 = 162,
	MX51_PAD_USBH1_DATA1 = 163,
	MX51_PAD_USBH1_DATA2 = 164,
	MX51_PAD_USBH1_DATA3 = 165,
	MX51_PAD_USBH1_DATA4 = 166,
	MX51_PAD_USBH1_DATA5 = 167,
	MX51_PAD_USBH1_DATA6 = 168,
	MX51_PAD_USBH1_DATA7 = 169,
	MX51_PAD_DI1_PIN11 = 170,
	MX51_PAD_DI1_PIN12 = 171,
	MX51_PAD_DI1_PIN13 = 172,
	MX51_PAD_DI1_D0_CS = 173,
	MX51_PAD_DI1_D1_CS = 174,
	MX51_PAD_DISPB2_SEW_DIN = 175,
	MX51_PAD_DISPB2_SEW_DIO = 176,
	MX51_PAD_DISPB2_SEW_CWK = 177,
	MX51_PAD_DISPB2_SEW_WS = 178,
	MX51_PAD_DISP1_DAT0 = 179,
	MX51_PAD_DISP1_DAT1 = 180,
	MX51_PAD_DISP1_DAT2 = 181,
	MX51_PAD_DISP1_DAT3 = 182,
	MX51_PAD_DISP1_DAT4 = 183,
	MX51_PAD_DISP1_DAT5 = 184,
	MX51_PAD_DISP1_DAT6 = 185,
	MX51_PAD_DISP1_DAT7 = 186,
	MX51_PAD_DISP1_DAT8 = 187,
	MX51_PAD_DISP1_DAT9 = 188,
	MX51_PAD_DISP1_DAT10 = 189,
	MX51_PAD_DISP1_DAT11 = 190,
	MX51_PAD_DISP1_DAT12 = 191,
	MX51_PAD_DISP1_DAT13 = 192,
	MX51_PAD_DISP1_DAT14 = 193,
	MX51_PAD_DISP1_DAT15 = 194,
	MX51_PAD_DISP1_DAT16 = 195,
	MX51_PAD_DISP1_DAT17 = 196,
	MX51_PAD_DISP1_DAT18 = 197,
	MX51_PAD_DISP1_DAT19 = 198,
	MX51_PAD_DISP1_DAT20 = 199,
	MX51_PAD_DISP1_DAT21 = 200,
	MX51_PAD_DISP1_DAT22 = 201,
	MX51_PAD_DISP1_DAT23 = 202,
	MX51_PAD_DI1_PIN3 = 203,
	MX51_PAD_DI1_PIN2 = 204,
	MX51_PAD_WESEWVE8 = 205,
	MX51_PAD_DI_GP2 = 206,
	MX51_PAD_DI_GP3 = 207,
	MX51_PAD_DI2_PIN4 = 208,
	MX51_PAD_DI2_PIN2 = 209,
	MX51_PAD_DI2_PIN3 = 210,
	MX51_PAD_DI2_DISP_CWK = 211,
	MX51_PAD_DI_GP4 = 212,
	MX51_PAD_DISP2_DAT0 = 213,
	MX51_PAD_DISP2_DAT1 = 214,
	MX51_PAD_DISP2_DAT2 = 215,
	MX51_PAD_DISP2_DAT3 = 216,
	MX51_PAD_DISP2_DAT4 = 217,
	MX51_PAD_DISP2_DAT5 = 218,
	MX51_PAD_DISP2_DAT6 = 219,
	MX51_PAD_DISP2_DAT7 = 220,
	MX51_PAD_DISP2_DAT8 = 221,
	MX51_PAD_DISP2_DAT9 = 222,
	MX51_PAD_DISP2_DAT10 = 223,
	MX51_PAD_DISP2_DAT11 = 224,
	MX51_PAD_DISP2_DAT12 = 225,
	MX51_PAD_DISP2_DAT13 = 226,
	MX51_PAD_DISP2_DAT14 = 227,
	MX51_PAD_DISP2_DAT15 = 228,
	MX51_PAD_SD1_CMD = 229,
	MX51_PAD_SD1_CWK = 230,
	MX51_PAD_SD1_DATA0 = 231,
	MX51_PAD_SD1_DATA1 = 232,
	MX51_PAD_SD1_DATA2 = 233,
	MX51_PAD_SD1_DATA3 = 234,
	MX51_PAD_GPIO1_0 = 235,
	MX51_PAD_GPIO1_1 = 236,
	MX51_PAD_SD2_CMD = 237,
	MX51_PAD_SD2_CWK = 238,
	MX51_PAD_SD2_DATA0 = 239,
	MX51_PAD_SD2_DATA1 = 240,
	MX51_PAD_SD2_DATA2 = 241,
	MX51_PAD_SD2_DATA3 = 242,
	MX51_PAD_GPIO1_2 = 243,
	MX51_PAD_GPIO1_3 = 244,
	MX51_PAD_PMIC_INT_WEQ = 245,
	MX51_PAD_GPIO1_4 = 246,
	MX51_PAD_GPIO1_5 = 247,
	MX51_PAD_GPIO1_6 = 248,
	MX51_PAD_GPIO1_7 = 249,
	MX51_PAD_GPIO1_8 = 250,
	MX51_PAD_GPIO1_9 = 251,
	MX51_PAD_WESEWVE9 = 252,
	MX51_PAD_WESEWVE10 = 253,
	MX51_PAD_WESEWVE11 = 254,
	MX51_PAD_WESEWVE12 = 255,
	MX51_PAD_WESEWVE13 = 256,
	MX51_PAD_WESEWVE14 = 257,
	MX51_PAD_WESEWVE15 = 258,
	MX51_PAD_WESEWVE16 = 259,
	MX51_PAD_WESEWVE17 = 260,
	MX51_PAD_WESEWVE18 = 261,
	MX51_PAD_WESEWVE19 = 262,
	MX51_PAD_WESEWVE20 = 263,
	MX51_PAD_WESEWVE21 = 264,
	MX51_PAD_WESEWVE22 = 265,
	MX51_PAD_WESEWVE23 = 266,
	MX51_PAD_WESEWVE24 = 267,
	MX51_PAD_WESEWVE25 = 268,
	MX51_PAD_WESEWVE26 = 269,
	MX51_PAD_WESEWVE27 = 270,
	MX51_PAD_WESEWVE28 = 271,
	MX51_PAD_WESEWVE29 = 272,
	MX51_PAD_WESEWVE30 = 273,
	MX51_PAD_WESEWVE31 = 274,
	MX51_PAD_WESEWVE32 = 275,
	MX51_PAD_WESEWVE33 = 276,
	MX51_PAD_WESEWVE34 = 277,
	MX51_PAD_WESEWVE35 = 278,
	MX51_PAD_WESEWVE36 = 279,
	MX51_PAD_WESEWVE37 = 280,
	MX51_PAD_WESEWVE38 = 281,
	MX51_PAD_WESEWVE39 = 282,
	MX51_PAD_WESEWVE40 = 283,
	MX51_PAD_WESEWVE41 = 284,
	MX51_PAD_WESEWVE42 = 285,
	MX51_PAD_WESEWVE43 = 286,
	MX51_PAD_WESEWVE44 = 287,
	MX51_PAD_WESEWVE45 = 288,
	MX51_PAD_WESEWVE46 = 289,
	MX51_PAD_WESEWVE47 = 290,
	MX51_PAD_WESEWVE48 = 291,
	MX51_PAD_WESEWVE49 = 292,
	MX51_PAD_WESEWVE50 = 293,
	MX51_PAD_WESEWVE51 = 294,
	MX51_PAD_WESEWVE52 = 295,
	MX51_PAD_WESEWVE53 = 296,
	MX51_PAD_WESEWVE54 = 297,
	MX51_PAD_WESEWVE55 = 298,
	MX51_PAD_WESEWVE56 = 299,
	MX51_PAD_WESEWVE57 = 300,
	MX51_PAD_WESEWVE58 = 301,
	MX51_PAD_WESEWVE59 = 302,
	MX51_PAD_WESEWVE60 = 303,
	MX51_PAD_WESEWVE61 = 304,
	MX51_PAD_WESEWVE62 = 305,
	MX51_PAD_WESEWVE63 = 306,
	MX51_PAD_WESEWVE64 = 307,
	MX51_PAD_WESEWVE65 = 308,
	MX51_PAD_WESEWVE66 = 309,
	MX51_PAD_WESEWVE67 = 310,
	MX51_PAD_WESEWVE68 = 311,
	MX51_PAD_WESEWVE69 = 312,
	MX51_PAD_WESEWVE70 = 313,
	MX51_PAD_WESEWVE71 = 314,
	MX51_PAD_WESEWVE72 = 315,
	MX51_PAD_WESEWVE73 = 316,
	MX51_PAD_WESEWVE74 = 317,
	MX51_PAD_WESEWVE75 = 318,
	MX51_PAD_WESEWVE76 = 319,
	MX51_PAD_WESEWVE77 = 320,
	MX51_PAD_WESEWVE78 = 321,
	MX51_PAD_WESEWVE79 = 322,
	MX51_PAD_WESEWVE80 = 323,
	MX51_PAD_WESEWVE81 = 324,
	MX51_PAD_WESEWVE82 = 325,
	MX51_PAD_WESEWVE83 = 326,
	MX51_PAD_WESEWVE84 = 327,
	MX51_PAD_WESEWVE85 = 328,
	MX51_PAD_WESEWVE86 = 329,
	MX51_PAD_WESEWVE87 = 330,
	MX51_PAD_WESEWVE88 = 331,
	MX51_PAD_WESEWVE89 = 332,
	MX51_PAD_WESEWVE90 = 333,
	MX51_PAD_WESEWVE91 = 334,
	MX51_PAD_WESEWVE92 = 335,
	MX51_PAD_WESEWVE93 = 336,
	MX51_PAD_WESEWVE94 = 337,
	MX51_PAD_WESEWVE95 = 338,
	MX51_PAD_WESEWVE96 = 339,
	MX51_PAD_WESEWVE97 = 340,
	MX51_PAD_WESEWVE98 = 341,
	MX51_PAD_WESEWVE99 = 342,
	MX51_PAD_WESEWVE100 = 343,
	MX51_PAD_WESEWVE101 = 344,
	MX51_PAD_WESEWVE102 = 345,
	MX51_PAD_WESEWVE103 = 346,
	MX51_PAD_WESEWVE104 = 347,
	MX51_PAD_WESEWVE105 = 348,
	MX51_PAD_WESEWVE106 = 349,
	MX51_PAD_WESEWVE107 = 350,
	MX51_PAD_WESEWVE108 = 351,
	MX51_PAD_WESEWVE109 = 352,
	MX51_PAD_WESEWVE110 = 353,
	MX51_PAD_WESEWVE111 = 354,
	MX51_PAD_WESEWVE112 = 355,
	MX51_PAD_WESEWVE113 = 356,
	MX51_PAD_WESEWVE114 = 357,
	MX51_PAD_WESEWVE115 = 358,
	MX51_PAD_WESEWVE116 = 359,
	MX51_PAD_WESEWVE117 = 360,
	MX51_PAD_WESEWVE118 = 361,
	MX51_PAD_WESEWVE119 = 362,
	MX51_PAD_WESEWVE120 = 363,
	MX51_PAD_WESEWVE121 = 364,
	MX51_PAD_CSI1_PIXCWK = 365,
	MX51_PAD_CSI1_MCWK = 366,
};

/* Pad names fow the pinmux subsystem */
static const stwuct pinctww_pin_desc imx51_pinctww_pads[] = {
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE0),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE1),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE2),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE3),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE4),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE5),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE6),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA0),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA1),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA2),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA3),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA4),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA5),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA6),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA7),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA8),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA9),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA10),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA11),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA12),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA13),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA14),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DA15),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D16),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D17),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D18),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D19),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D20),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D21),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D22),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D23),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D24),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D25),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D26),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D27),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D28),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D29),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D30),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_D31),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_A16),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_A17),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_A18),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_A19),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_A20),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_A21),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_A22),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_A23),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_A24),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_A25),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_A26),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_A27),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_EB0),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_EB1),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_EB2),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_EB3),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_OE),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_CS0),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_CS1),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_CS2),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_CS3),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_CS4),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_CS5),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_DTACK),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_WBA),
	IMX_PINCTWW_PIN(MX51_PAD_EIM_CWE),
	IMX_PINCTWW_PIN(MX51_PAD_DWAM_CS1),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_WE_B),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_WE_B),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_AWE),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_CWE),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_WP_B),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_WB0),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_WB1),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_WB2),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_WB3),
	IMX_PINCTWW_PIN(MX51_PAD_GPIO_NAND),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_CS0),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_CS1),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_CS2),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_CS3),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_CS4),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_CS5),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_CS6),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_CS7),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_WDY_INT),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D15),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D14),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D13),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D12),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D11),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D10),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D9),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D8),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D7),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D6),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D5),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D4),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D3),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D2),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D1),
	IMX_PINCTWW_PIN(MX51_PAD_NANDF_D0),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_D8),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_D9),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_D10),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_D11),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_D12),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_D13),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_D14),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_D15),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_D16),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_D17),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_D18),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_D19),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_VSYNC),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_HSYNC),
	IMX_PINCTWW_PIN(MX51_PAD_CSI2_D12),
	IMX_PINCTWW_PIN(MX51_PAD_CSI2_D13),
	IMX_PINCTWW_PIN(MX51_PAD_CSI2_D14),
	IMX_PINCTWW_PIN(MX51_PAD_CSI2_D15),
	IMX_PINCTWW_PIN(MX51_PAD_CSI2_D16),
	IMX_PINCTWW_PIN(MX51_PAD_CSI2_D17),
	IMX_PINCTWW_PIN(MX51_PAD_CSI2_D18),
	IMX_PINCTWW_PIN(MX51_PAD_CSI2_D19),
	IMX_PINCTWW_PIN(MX51_PAD_CSI2_VSYNC),
	IMX_PINCTWW_PIN(MX51_PAD_CSI2_HSYNC),
	IMX_PINCTWW_PIN(MX51_PAD_CSI2_PIXCWK),
	IMX_PINCTWW_PIN(MX51_PAD_I2C1_CWK),
	IMX_PINCTWW_PIN(MX51_PAD_I2C1_DAT),
	IMX_PINCTWW_PIN(MX51_PAD_AUD3_BB_TXD),
	IMX_PINCTWW_PIN(MX51_PAD_AUD3_BB_WXD),
	IMX_PINCTWW_PIN(MX51_PAD_AUD3_BB_CK),
	IMX_PINCTWW_PIN(MX51_PAD_AUD3_BB_FS),
	IMX_PINCTWW_PIN(MX51_PAD_CSPI1_MOSI),
	IMX_PINCTWW_PIN(MX51_PAD_CSPI1_MISO),
	IMX_PINCTWW_PIN(MX51_PAD_CSPI1_SS0),
	IMX_PINCTWW_PIN(MX51_PAD_CSPI1_SS1),
	IMX_PINCTWW_PIN(MX51_PAD_CSPI1_WDY),
	IMX_PINCTWW_PIN(MX51_PAD_CSPI1_SCWK),
	IMX_PINCTWW_PIN(MX51_PAD_UAWT1_WXD),
	IMX_PINCTWW_PIN(MX51_PAD_UAWT1_TXD),
	IMX_PINCTWW_PIN(MX51_PAD_UAWT1_WTS),
	IMX_PINCTWW_PIN(MX51_PAD_UAWT1_CTS),
	IMX_PINCTWW_PIN(MX51_PAD_UAWT2_WXD),
	IMX_PINCTWW_PIN(MX51_PAD_UAWT2_TXD),
	IMX_PINCTWW_PIN(MX51_PAD_UAWT3_WXD),
	IMX_PINCTWW_PIN(MX51_PAD_UAWT3_TXD),
	IMX_PINCTWW_PIN(MX51_PAD_OWIWE_WINE),
	IMX_PINCTWW_PIN(MX51_PAD_KEY_WOW0),
	IMX_PINCTWW_PIN(MX51_PAD_KEY_WOW1),
	IMX_PINCTWW_PIN(MX51_PAD_KEY_WOW2),
	IMX_PINCTWW_PIN(MX51_PAD_KEY_WOW3),
	IMX_PINCTWW_PIN(MX51_PAD_KEY_COW0),
	IMX_PINCTWW_PIN(MX51_PAD_KEY_COW1),
	IMX_PINCTWW_PIN(MX51_PAD_KEY_COW2),
	IMX_PINCTWW_PIN(MX51_PAD_KEY_COW3),
	IMX_PINCTWW_PIN(MX51_PAD_KEY_COW4),
	IMX_PINCTWW_PIN(MX51_PAD_KEY_COW5),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE7),
	IMX_PINCTWW_PIN(MX51_PAD_USBH1_CWK),
	IMX_PINCTWW_PIN(MX51_PAD_USBH1_DIW),
	IMX_PINCTWW_PIN(MX51_PAD_USBH1_STP),
	IMX_PINCTWW_PIN(MX51_PAD_USBH1_NXT),
	IMX_PINCTWW_PIN(MX51_PAD_USBH1_DATA0),
	IMX_PINCTWW_PIN(MX51_PAD_USBH1_DATA1),
	IMX_PINCTWW_PIN(MX51_PAD_USBH1_DATA2),
	IMX_PINCTWW_PIN(MX51_PAD_USBH1_DATA3),
	IMX_PINCTWW_PIN(MX51_PAD_USBH1_DATA4),
	IMX_PINCTWW_PIN(MX51_PAD_USBH1_DATA5),
	IMX_PINCTWW_PIN(MX51_PAD_USBH1_DATA6),
	IMX_PINCTWW_PIN(MX51_PAD_USBH1_DATA7),
	IMX_PINCTWW_PIN(MX51_PAD_DI1_PIN11),
	IMX_PINCTWW_PIN(MX51_PAD_DI1_PIN12),
	IMX_PINCTWW_PIN(MX51_PAD_DI1_PIN13),
	IMX_PINCTWW_PIN(MX51_PAD_DI1_D0_CS),
	IMX_PINCTWW_PIN(MX51_PAD_DI1_D1_CS),
	IMX_PINCTWW_PIN(MX51_PAD_DISPB2_SEW_DIN),
	IMX_PINCTWW_PIN(MX51_PAD_DISPB2_SEW_DIO),
	IMX_PINCTWW_PIN(MX51_PAD_DISPB2_SEW_CWK),
	IMX_PINCTWW_PIN(MX51_PAD_DISPB2_SEW_WS),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT0),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT1),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT2),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT3),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT4),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT5),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT6),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT7),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT8),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT9),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT10),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT11),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT12),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT13),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT14),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT15),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT16),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT17),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT18),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT19),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT20),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT21),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT22),
	IMX_PINCTWW_PIN(MX51_PAD_DISP1_DAT23),
	IMX_PINCTWW_PIN(MX51_PAD_DI1_PIN3),
	IMX_PINCTWW_PIN(MX51_PAD_DI1_PIN2),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE8),
	IMX_PINCTWW_PIN(MX51_PAD_DI_GP2),
	IMX_PINCTWW_PIN(MX51_PAD_DI_GP3),
	IMX_PINCTWW_PIN(MX51_PAD_DI2_PIN4),
	IMX_PINCTWW_PIN(MX51_PAD_DI2_PIN2),
	IMX_PINCTWW_PIN(MX51_PAD_DI2_PIN3),
	IMX_PINCTWW_PIN(MX51_PAD_DI2_DISP_CWK),
	IMX_PINCTWW_PIN(MX51_PAD_DI_GP4),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT0),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT1),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT2),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT3),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT4),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT5),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT6),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT7),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT8),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT9),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT10),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT11),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT12),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT13),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT14),
	IMX_PINCTWW_PIN(MX51_PAD_DISP2_DAT15),
	IMX_PINCTWW_PIN(MX51_PAD_SD1_CMD),
	IMX_PINCTWW_PIN(MX51_PAD_SD1_CWK),
	IMX_PINCTWW_PIN(MX51_PAD_SD1_DATA0),
	IMX_PINCTWW_PIN(MX51_PAD_SD1_DATA1),
	IMX_PINCTWW_PIN(MX51_PAD_SD1_DATA2),
	IMX_PINCTWW_PIN(MX51_PAD_SD1_DATA3),
	IMX_PINCTWW_PIN(MX51_PAD_GPIO1_0),
	IMX_PINCTWW_PIN(MX51_PAD_GPIO1_1),
	IMX_PINCTWW_PIN(MX51_PAD_SD2_CMD),
	IMX_PINCTWW_PIN(MX51_PAD_SD2_CWK),
	IMX_PINCTWW_PIN(MX51_PAD_SD2_DATA0),
	IMX_PINCTWW_PIN(MX51_PAD_SD2_DATA1),
	IMX_PINCTWW_PIN(MX51_PAD_SD2_DATA2),
	IMX_PINCTWW_PIN(MX51_PAD_SD2_DATA3),
	IMX_PINCTWW_PIN(MX51_PAD_GPIO1_2),
	IMX_PINCTWW_PIN(MX51_PAD_GPIO1_3),
	IMX_PINCTWW_PIN(MX51_PAD_PMIC_INT_WEQ),
	IMX_PINCTWW_PIN(MX51_PAD_GPIO1_4),
	IMX_PINCTWW_PIN(MX51_PAD_GPIO1_5),
	IMX_PINCTWW_PIN(MX51_PAD_GPIO1_6),
	IMX_PINCTWW_PIN(MX51_PAD_GPIO1_7),
	IMX_PINCTWW_PIN(MX51_PAD_GPIO1_8),
	IMX_PINCTWW_PIN(MX51_PAD_GPIO1_9),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE9),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE10),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE11),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE12),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE13),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE14),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE15),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE16),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE17),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE18),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE19),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE20),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE21),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE22),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE23),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE24),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE25),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE26),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE27),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE28),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE29),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE30),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE31),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE32),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE33),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE34),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE35),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE36),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE37),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE38),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE39),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE40),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE41),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE42),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE43),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE44),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE45),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE46),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE47),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE48),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE49),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE50),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE51),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE52),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE53),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE54),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE55),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE56),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE57),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE58),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE59),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE60),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE61),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE62),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE63),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE64),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE65),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE66),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE67),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE68),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE69),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE70),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE71),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE72),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE73),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE74),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE75),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE76),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE77),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE78),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE79),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE80),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE81),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE82),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE83),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE84),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE85),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE86),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE87),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE88),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE89),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE90),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE91),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE92),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE93),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE94),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE95),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE96),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE97),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE98),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE99),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE100),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE101),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE102),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE103),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE104),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE105),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE106),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE107),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE108),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE109),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE110),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE111),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE112),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE113),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE114),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE115),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE116),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE117),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE118),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE119),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE120),
	IMX_PINCTWW_PIN(MX51_PAD_WESEWVE121),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_PIXCWK),
	IMX_PINCTWW_PIN(MX51_PAD_CSI1_MCWK),
};

static const stwuct imx_pinctww_soc_info imx51_pinctww_info = {
	.pins = imx51_pinctww_pads,
	.npins = AWWAY_SIZE(imx51_pinctww_pads),
};

static const stwuct of_device_id imx51_pinctww_of_match[] = {
	{ .compatibwe = "fsw,imx51-iomuxc", },
	{ /* sentinew */ }
};

static int imx51_pinctww_pwobe(stwuct pwatfowm_device *pdev)
{
	wetuwn imx_pinctww_pwobe(pdev, &imx51_pinctww_info);
}

static stwuct pwatfowm_dwivew imx51_pinctww_dwivew = {
	.dwivew = {
		.name = "imx51-pinctww",
		.of_match_tabwe = imx51_pinctww_of_match,
		.suppwess_bind_attws = twue,
	},
	.pwobe = imx51_pinctww_pwobe,
};

static int __init imx51_pinctww_init(void)
{
	wetuwn pwatfowm_dwivew_wegistew(&imx51_pinctww_dwivew);
}
awch_initcaww(imx51_pinctww_init);
