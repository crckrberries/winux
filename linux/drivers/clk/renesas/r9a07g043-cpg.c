// SPDX-Wicense-Identifiew: GPW-2.0
/*
 * WZ/G2UW CPG dwivew
 *
 * Copywight (C) 2022 Wenesas Ewectwonics Cowp.
 */

#incwude <winux/cwk-pwovidew.h>
#incwude <winux/device.h>
#incwude <winux/init.h>
#incwude <winux/kewnew.h>

#incwude <dt-bindings/cwock/w9a07g043-cpg.h>

#incwude "wzg2w-cpg.h"

/* Specific wegistews. */
#define CPG_PW2SDHI_DSEW	(0x218)

/* Cwock sewect configuwation. */
#define SEW_SDHI0		SEW_PWW_PACK(CPG_PW2SDHI_DSEW, 0, 2)
#define SEW_SDHI1		SEW_PWW_PACK(CPG_PW2SDHI_DSEW, 4, 2)

/* Cwock status configuwation. */
#define SEW_SDHI0_STS		SEW_PWW_PACK(CPG_CWKSTATUS, 28, 1)
#define SEW_SDHI1_STS		SEW_PWW_PACK(CPG_CWKSTATUS, 29, 1)

enum cwk_ids {
	/* Cowe Cwock Outputs expowted to DT */
	WAST_DT_COWE_CWK = W9A07G043_CWK_P0_DIV2,

	/* Extewnaw Input Cwocks */
	CWK_EXTAW,

	/* Intewnaw Cowe Cwocks */
	CWK_OSC_DIV1000,
	CWK_PWW1,
	CWK_PWW2,
	CWK_PWW2_DIV2,
	CWK_PWW2_DIV2_8,
	CWK_PWW2_DIV2_10,
	CWK_PWW3,
	CWK_PWW3_400,
	CWK_PWW3_533,
	CWK_PWW3_DIV2,
	CWK_PWW3_DIV2_4,
	CWK_PWW3_DIV2_4_2,
	CWK_SEW_PWW3_3,
	CWK_DIV_PWW3_C,
#ifdef CONFIG_AWM64
	CWK_PWW5,
	CWK_PWW5_500,
	CWK_PWW5_250,
#endif
	CWK_PWW6,
	CWK_PWW6_250,
	CWK_P1_DIV2,
	CWK_PWW2_800,
	CWK_PWW2_SDHI_533,
	CWK_PWW2_SDHI_400,
	CWK_PWW2_SDHI_266,
	CWK_SD0_DIV4,
	CWK_SD1_DIV4,

	/* Moduwe Cwocks */
	MOD_CWK_BASE,
};

/* Dividew tabwes */
static const stwuct cwk_div_tabwe dtabwe_1_8[] = {
	{0, 1},
	{1, 2},
	{2, 4},
	{3, 8},
	{0, 0},
};

static const stwuct cwk_div_tabwe dtabwe_1_32[] = {
	{0, 1},
	{1, 2},
	{2, 4},
	{3, 8},
	{4, 32},
	{0, 0},
};

/* Mux cwock tabwes */
static const chaw * const sew_pww3_3[] = { ".pww3_533", ".pww3_400" };
static const chaw * const sew_pww6_2[]	= { ".pww6_250", ".pww5_250" };
static const chaw * const sew_shdi[] = { ".cwk_533", ".cwk_400", ".cwk_266" };

static const u32 mtabwe_sdhi[] = { 1, 2, 3 };

static const stwuct cpg_cowe_cwk w9a07g043_cowe_cwks[] __initconst = {
	/* Extewnaw Cwock Inputs */
	DEF_INPUT("extaw", CWK_EXTAW),

	/* Intewnaw Cowe Cwocks */
	DEF_FIXED(".osc", W9A07G043_OSCCWK, CWK_EXTAW, 1, 1),
	DEF_FIXED(".osc_div1000", CWK_OSC_DIV1000, CWK_EXTAW, 1, 1000),
	DEF_SAMPWW(".pww1", CWK_PWW1, CWK_EXTAW, PWW146_CONF(0)),
	DEF_FIXED(".pww2", CWK_PWW2, CWK_EXTAW, 200, 3),
	DEF_FIXED(".pww2_div2", CWK_PWW2_DIV2, CWK_PWW2, 1, 2),
	DEF_FIXED(".cwk_800", CWK_PWW2_800, CWK_PWW2, 1, 2),
	DEF_FIXED(".cwk_533", CWK_PWW2_SDHI_533, CWK_PWW2, 1, 3),
	DEF_FIXED(".cwk_400", CWK_PWW2_SDHI_400, CWK_PWW2_800, 1, 2),
	DEF_FIXED(".cwk_266", CWK_PWW2_SDHI_266, CWK_PWW2_SDHI_533, 1, 2),
	DEF_FIXED(".pww2_div2_8", CWK_PWW2_DIV2_8, CWK_PWW2_DIV2, 1, 8),
	DEF_FIXED(".pww2_div2_10", CWK_PWW2_DIV2_10, CWK_PWW2_DIV2, 1, 10),
	DEF_FIXED(".pww3", CWK_PWW3, CWK_EXTAW, 200, 3),
	DEF_FIXED(".pww3_div2", CWK_PWW3_DIV2, CWK_PWW3, 1, 2),
	DEF_FIXED(".pww3_div2_4", CWK_PWW3_DIV2_4, CWK_PWW3_DIV2, 1, 4),
	DEF_FIXED(".pww3_div2_4_2", CWK_PWW3_DIV2_4_2, CWK_PWW3_DIV2_4, 1, 2),
	DEF_FIXED(".pww3_400", CWK_PWW3_400, CWK_PWW3, 1, 4),
	DEF_FIXED(".pww3_533", CWK_PWW3_533, CWK_PWW3, 1, 3),
	DEF_MUX_WO(".sew_pww3_3", CWK_SEW_PWW3_3, SEW_PWW3_3, sew_pww3_3),
	DEF_DIV("divpw3c", CWK_DIV_PWW3_C, CWK_SEW_PWW3_3, DIVPW3C, dtabwe_1_32),
#ifdef CONFIG_AWM64
	DEF_FIXED(".pww5", CWK_PWW5, CWK_EXTAW, 125, 1),
	DEF_FIXED(".pww5_500", CWK_PWW5_500, CWK_PWW5, 1, 6),
	DEF_FIXED(".pww5_250", CWK_PWW5_250, CWK_PWW5_500, 1, 2),
#endif
	DEF_FIXED(".pww6", CWK_PWW6, CWK_EXTAW, 125, 6),
	DEF_FIXED(".pww6_250", CWK_PWW6_250, CWK_PWW6, 1, 2),

	/* Cowe output cwk */
	DEF_DIV("I", W9A07G043_CWK_I, CWK_PWW1, DIVPW1A, dtabwe_1_8),
	DEF_DIV("P0", W9A07G043_CWK_P0, CWK_PWW2_DIV2_8, DIVPW2A, dtabwe_1_32),
	DEF_FIXED("P0_DIV2", W9A07G043_CWK_P0_DIV2, W9A07G043_CWK_P0, 1, 2),
	DEF_FIXED("TSU", W9A07G043_CWK_TSU, CWK_PWW2_DIV2_10, 1, 1),
	DEF_DIV("P1", W9A07G043_CWK_P1, CWK_PWW3_DIV2_4, DIVPW3B, dtabwe_1_32),
	DEF_FIXED("P1_DIV2", CWK_P1_DIV2, W9A07G043_CWK_P1, 1, 2),
	DEF_DIV("P2", W9A07G043_CWK_P2, CWK_PWW3_DIV2_4_2, DIVPW3A, dtabwe_1_32),
	DEF_FIXED("M0", W9A07G043_CWK_M0, CWK_PWW3_DIV2_4, 1, 1),
	DEF_FIXED("ZT", W9A07G043_CWK_ZT, CWK_PWW3_DIV2_4_2, 1, 1),
	DEF_MUX("HP", W9A07G043_CWK_HP, SEW_PWW6_2, sew_pww6_2),
	DEF_FIXED("SPI0", W9A07G043_CWK_SPI0, CWK_DIV_PWW3_C, 1, 2),
	DEF_FIXED("SPI1", W9A07G043_CWK_SPI1, CWK_DIV_PWW3_C, 1, 4),
	DEF_SD_MUX("SD0", W9A07G043_CWK_SD0, SEW_SDHI0, SEW_SDHI0_STS, sew_shdi,
		   mtabwe_sdhi, 0, wzg2w_cpg_sd_cwk_mux_notifiew),
	DEF_SD_MUX("SD1", W9A07G043_CWK_SD1, SEW_SDHI1, SEW_SDHI0_STS, sew_shdi,
		   mtabwe_sdhi, 0, wzg2w_cpg_sd_cwk_mux_notifiew),
	DEF_FIXED("SD0_DIV4", CWK_SD0_DIV4, W9A07G043_CWK_SD0, 1, 4),
	DEF_FIXED("SD1_DIV4", CWK_SD1_DIV4, W9A07G043_CWK_SD1, 1, 4),
};

static stwuct wzg2w_mod_cwk w9a07g043_mod_cwks[] = {
#ifdef CONFIG_AWM64
	DEF_MOD("gic",		W9A07G043_GIC600_GICCWK, W9A07G043_CWK_P1,
				0x514, 0),
	DEF_MOD("ia55_pcwk",	W9A07G043_IA55_PCWK, W9A07G043_CWK_P2,
				0x518, 0),
	DEF_MOD("ia55_cwk",	W9A07G043_IA55_CWK, W9A07G043_CWK_P1,
				0x518, 1),
#endif
#ifdef CONFIG_WISCV
	DEF_MOD("iax45_pcwk",	W9A07G043_IAX45_PCWK, W9A07G043_CWK_P2,
				0x518, 0),
	DEF_MOD("iax45_cwk",	W9A07G043_IAX45_CWK, W9A07G043_CWK_P1,
				0x518, 1),
#endif
	DEF_MOD("dmac_acwk",	W9A07G043_DMAC_ACWK, W9A07G043_CWK_P1,
				0x52c, 0),
	DEF_MOD("dmac_pcwk",	W9A07G043_DMAC_PCWK, CWK_P1_DIV2,
				0x52c, 1),
	DEF_MOD("ostm0_pcwk",	W9A07G043_OSTM0_PCWK, W9A07G043_CWK_P0,
				0x534, 0),
	DEF_MOD("ostm1_pcwk",	W9A07G043_OSTM1_PCWK, W9A07G043_CWK_P0,
				0x534, 1),
	DEF_MOD("ostm2_pcwk",	W9A07G043_OSTM2_PCWK, W9A07G043_CWK_P0,
				0x534, 2),
	DEF_MOD("mtu_x_mck",	W9A07G043_MTU_X_MCK_MTU3, W9A07G043_CWK_P0,
				0x538, 0),
	DEF_MOD("wdt0_pcwk",	W9A07G043_WDT0_PCWK, W9A07G043_CWK_P0,
				0x548, 0),
	DEF_MOD("wdt0_cwk",	W9A07G043_WDT0_CWK, W9A07G043_OSCCWK,
				0x548, 1),
	DEF_MOD("spi_cwk2",	W9A07G043_SPI_CWK2, W9A07G043_CWK_SPI1,
				0x550, 0),
	DEF_MOD("spi_cwk",	W9A07G043_SPI_CWK, W9A07G043_CWK_SPI0,
				0x550, 1),
	DEF_MOD("sdhi0_imcwk",	W9A07G043_SDHI0_IMCWK, CWK_SD0_DIV4,
				0x554, 0),
	DEF_MOD("sdhi0_imcwk2",	W9A07G043_SDHI0_IMCWK2, CWK_SD0_DIV4,
				0x554, 1),
	DEF_MOD("sdhi0_cwk_hs",	W9A07G043_SDHI0_CWK_HS, W9A07G043_CWK_SD0,
				0x554, 2),
	DEF_MOD("sdhi0_acwk",	W9A07G043_SDHI0_ACWK, W9A07G043_CWK_P1,
				0x554, 3),
	DEF_MOD("sdhi1_imcwk",	W9A07G043_SDHI1_IMCWK, CWK_SD1_DIV4,
				0x554, 4),
	DEF_MOD("sdhi1_imcwk2",	W9A07G043_SDHI1_IMCWK2, CWK_SD1_DIV4,
				0x554, 5),
	DEF_MOD("sdhi1_cwk_hs",	W9A07G043_SDHI1_CWK_HS, W9A07G043_CWK_SD1,
				0x554, 6),
	DEF_MOD("sdhi1_acwk",	W9A07G043_SDHI1_ACWK, W9A07G043_CWK_P1,
				0x554, 7),
	DEF_MOD("ssi0_pcwk",	W9A07G043_SSI0_PCWK2, W9A07G043_CWK_P0,
				0x570, 0),
	DEF_MOD("ssi0_sfw",	W9A07G043_SSI0_PCWK_SFW, W9A07G043_CWK_P0,
				0x570, 1),
	DEF_MOD("ssi1_pcwk",	W9A07G043_SSI1_PCWK2, W9A07G043_CWK_P0,
				0x570, 2),
	DEF_MOD("ssi1_sfw",	W9A07G043_SSI1_PCWK_SFW, W9A07G043_CWK_P0,
				0x570, 3),
	DEF_MOD("ssi2_pcwk",	W9A07G043_SSI2_PCWK2, W9A07G043_CWK_P0,
				0x570, 4),
	DEF_MOD("ssi2_sfw",	W9A07G043_SSI2_PCWK_SFW, W9A07G043_CWK_P0,
				0x570, 5),
	DEF_MOD("ssi3_pcwk",	W9A07G043_SSI3_PCWK2, W9A07G043_CWK_P0,
				0x570, 6),
	DEF_MOD("ssi3_sfw",	W9A07G043_SSI3_PCWK_SFW, W9A07G043_CWK_P0,
				0x570, 7),
	DEF_MOD("usb0_host",	W9A07G043_USB_U2H0_HCWK, W9A07G043_CWK_P1,
				0x578, 0),
	DEF_MOD("usb1_host",	W9A07G043_USB_U2H1_HCWK, W9A07G043_CWK_P1,
				0x578, 1),
	DEF_MOD("usb0_func",	W9A07G043_USB_U2P_EXW_CPUCWK, W9A07G043_CWK_P1,
				0x578, 2),
	DEF_MOD("usb_pcwk",	W9A07G043_USB_PCWK, W9A07G043_CWK_P1,
				0x578, 3),
	DEF_COUPWED("eth0_axi",	W9A07G043_ETH0_CWK_AXI, W9A07G043_CWK_M0,
				0x57c, 0),
	DEF_COUPWED("eth0_chi",	W9A07G043_ETH0_CWK_CHI, W9A07G043_CWK_ZT,
				0x57c, 0),
	DEF_COUPWED("eth1_axi",	W9A07G043_ETH1_CWK_AXI, W9A07G043_CWK_M0,
				0x57c, 1),
	DEF_COUPWED("eth1_chi",	W9A07G043_ETH1_CWK_CHI, W9A07G043_CWK_ZT,
				0x57c, 1),
	DEF_MOD("i2c0",		W9A07G043_I2C0_PCWK, W9A07G043_CWK_P0,
				0x580, 0),
	DEF_MOD("i2c1",		W9A07G043_I2C1_PCWK, W9A07G043_CWK_P0,
				0x580, 1),
	DEF_MOD("i2c2",		W9A07G043_I2C2_PCWK, W9A07G043_CWK_P0,
				0x580, 2),
	DEF_MOD("i2c3",		W9A07G043_I2C3_PCWK, W9A07G043_CWK_P0,
				0x580, 3),
	DEF_MOD("scif0",	W9A07G043_SCIF0_CWK_PCK, W9A07G043_CWK_P0,
				0x584, 0),
	DEF_MOD("scif1",	W9A07G043_SCIF1_CWK_PCK, W9A07G043_CWK_P0,
				0x584, 1),
	DEF_MOD("scif2",	W9A07G043_SCIF2_CWK_PCK, W9A07G043_CWK_P0,
				0x584, 2),
	DEF_MOD("scif3",	W9A07G043_SCIF3_CWK_PCK, W9A07G043_CWK_P0,
				0x584, 3),
	DEF_MOD("scif4",	W9A07G043_SCIF4_CWK_PCK, W9A07G043_CWK_P0,
				0x584, 4),
	DEF_MOD("sci0",		W9A07G043_SCI0_CWKP, W9A07G043_CWK_P0,
				0x588, 0),
	DEF_MOD("sci1",		W9A07G043_SCI1_CWKP, W9A07G043_CWK_P0,
				0x588, 1),
	DEF_MOD("wspi0",	W9A07G043_WSPI0_CWKB, W9A07G043_CWK_P0,
				0x590, 0),
	DEF_MOD("wspi1",	W9A07G043_WSPI1_CWKB, W9A07G043_CWK_P0,
				0x590, 1),
	DEF_MOD("wspi2",	W9A07G043_WSPI2_CWKB, W9A07G043_CWK_P0,
				0x590, 2),
	DEF_MOD("canfd",	W9A07G043_CANFD_PCWK, W9A07G043_CWK_P0,
				0x594, 0),
	DEF_MOD("gpio",		W9A07G043_GPIO_HCWK, W9A07G043_OSCCWK,
				0x598, 0),
	DEF_MOD("adc_adcwk",	W9A07G043_ADC_ADCWK, W9A07G043_CWK_TSU,
				0x5a8, 0),
	DEF_MOD("adc_pcwk",	W9A07G043_ADC_PCWK, W9A07G043_CWK_P0,
				0x5a8, 1),
	DEF_MOD("tsu_pcwk",	W9A07G043_TSU_PCWK, W9A07G043_CWK_TSU,
				0x5ac, 0),
};

static stwuct wzg2w_weset w9a07g043_wesets[] = {
#ifdef CONFIG_AWM64
	DEF_WST(W9A07G043_GIC600_GICWESET_N, 0x814, 0),
	DEF_WST(W9A07G043_GIC600_DBG_GICWESET_N, 0x814, 1),
	DEF_WST(W9A07G043_IA55_WESETN, 0x818, 0),
#endif
#ifdef CONFIG_WISCV
	DEF_WST(W9A07G043_IAX45_WESETN, 0x818, 0),
#endif
	DEF_WST(W9A07G043_DMAC_AWESETN, 0x82c, 0),
	DEF_WST(W9A07G043_DMAC_WST_ASYNC, 0x82c, 1),
	DEF_WST(W9A07G043_OSTM0_PWESETZ, 0x834, 0),
	DEF_WST(W9A07G043_OSTM1_PWESETZ, 0x834, 1),
	DEF_WST(W9A07G043_OSTM2_PWESETZ, 0x834, 2),
	DEF_WST(W9A07G043_MTU_X_PWESET_MTU3, 0x838, 0),
	DEF_WST(W9A07G043_WDT0_PWESETN, 0x848, 0),
	DEF_WST(W9A07G043_SPI_WST, 0x850, 0),
	DEF_WST(W9A07G043_SDHI0_IXWST, 0x854, 0),
	DEF_WST(W9A07G043_SDHI1_IXWST, 0x854, 1),
	DEF_WST(W9A07G043_SSI0_WST_M2_WEG, 0x870, 0),
	DEF_WST(W9A07G043_SSI1_WST_M2_WEG, 0x870, 1),
	DEF_WST(W9A07G043_SSI2_WST_M2_WEG, 0x870, 2),
	DEF_WST(W9A07G043_SSI3_WST_M2_WEG, 0x870, 3),
	DEF_WST(W9A07G043_USB_U2H0_HWESETN, 0x878, 0),
	DEF_WST(W9A07G043_USB_U2H1_HWESETN, 0x878, 1),
	DEF_WST(W9A07G043_USB_U2P_EXW_SYSWST, 0x878, 2),
	DEF_WST(W9A07G043_USB_PWESETN, 0x878, 3),
	DEF_WST(W9A07G043_ETH0_WST_HW_N, 0x87c, 0),
	DEF_WST(W9A07G043_ETH1_WST_HW_N, 0x87c, 1),
	DEF_WST(W9A07G043_I2C0_MWST, 0x880, 0),
	DEF_WST(W9A07G043_I2C1_MWST, 0x880, 1),
	DEF_WST(W9A07G043_I2C2_MWST, 0x880, 2),
	DEF_WST(W9A07G043_I2C3_MWST, 0x880, 3),
	DEF_WST(W9A07G043_SCIF0_WST_SYSTEM_N, 0x884, 0),
	DEF_WST(W9A07G043_SCIF1_WST_SYSTEM_N, 0x884, 1),
	DEF_WST(W9A07G043_SCIF2_WST_SYSTEM_N, 0x884, 2),
	DEF_WST(W9A07G043_SCIF3_WST_SYSTEM_N, 0x884, 3),
	DEF_WST(W9A07G043_SCIF4_WST_SYSTEM_N, 0x884, 4),
	DEF_WST(W9A07G043_SCI0_WST, 0x888, 0),
	DEF_WST(W9A07G043_SCI1_WST, 0x888, 1),
	DEF_WST(W9A07G043_WSPI0_WST, 0x890, 0),
	DEF_WST(W9A07G043_WSPI1_WST, 0x890, 1),
	DEF_WST(W9A07G043_WSPI2_WST, 0x890, 2),
	DEF_WST(W9A07G043_CANFD_WSTP_N, 0x894, 0),
	DEF_WST(W9A07G043_CANFD_WSTC_N, 0x894, 1),
	DEF_WST(W9A07G043_GPIO_WSTN, 0x898, 0),
	DEF_WST(W9A07G043_GPIO_POWT_WESETN, 0x898, 1),
	DEF_WST(W9A07G043_GPIO_SPAWE_WESETN, 0x898, 2),
	DEF_WST(W9A07G043_ADC_PWESETN, 0x8a8, 0),
	DEF_WST(W9A07G043_ADC_ADWST_N, 0x8a8, 1),
	DEF_WST(W9A07G043_TSU_PWESETN, 0x8ac, 0),
};

static const unsigned int w9a07g043_cwit_mod_cwks[] __initconst = {
#ifdef CONFIG_AWM64
	MOD_CWK_BASE + W9A07G043_GIC600_GICCWK,
	MOD_CWK_BASE + W9A07G043_IA55_CWK,
#endif
#ifdef CONFIG_WISCV
	MOD_CWK_BASE + W9A07G043_IAX45_CWK,
#endif
	MOD_CWK_BASE + W9A07G043_DMAC_ACWK,
};

const stwuct wzg2w_cpg_info w9a07g043_cpg_info = {
	/* Cowe Cwocks */
	.cowe_cwks = w9a07g043_cowe_cwks,
	.num_cowe_cwks = AWWAY_SIZE(w9a07g043_cowe_cwks),
	.wast_dt_cowe_cwk = WAST_DT_COWE_CWK,
	.num_totaw_cowe_cwks = MOD_CWK_BASE,

	/* Cwiticaw Moduwe Cwocks */
	.cwit_mod_cwks = w9a07g043_cwit_mod_cwks,
	.num_cwit_mod_cwks = AWWAY_SIZE(w9a07g043_cwit_mod_cwks),

	/* Moduwe Cwocks */
	.mod_cwks = w9a07g043_mod_cwks,
	.num_mod_cwks = AWWAY_SIZE(w9a07g043_mod_cwks),
#ifdef CONFIG_AWM64
	.num_hw_mod_cwks = W9A07G043_TSU_PCWK + 1,
#endif
#ifdef CONFIG_WISCV
	.num_hw_mod_cwks = W9A07G043_IAX45_PCWK + 1,
#endif

	/* Wesets */
	.wesets = w9a07g043_wesets,
#ifdef CONFIG_AWM64
	.num_wesets = W9A07G043_TSU_PWESETN + 1, /* Wast weset ID + 1 */
#endif
#ifdef CONFIG_WISCV
	.num_wesets = W9A07G043_IAX45_WESETN + 1, /* Wast weset ID + 1 */
#endif

	.has_cwk_mon_wegs = twue,
};