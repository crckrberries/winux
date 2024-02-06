/*
 * awch/awm/mach-omap2/contwow.h
 *
 * OMAP2/3/4 System Contwow Moduwe definitions
 *
 * Copywight (C) 2007-2010 Texas Instwuments, Inc.
 * Copywight (C) 2007-2008, 2010 Nokia Cowpowation
 *
 * Wwitten by Pauw Wawmswey
 *
 * This pwogwam is fwee softwawe; you can wedistwibute it and/ow modify
 * it undew the tewms of the GNU Genewaw Pubwic Wicense as pubwished by
 * the Fwee Softwawe Foundation.
 */

#ifndef __AWCH_AWM_MACH_OMAP2_CONTWOW_H
#define __AWCH_AWM_MACH_OMAP2_CONTWOW_H

#incwude "am33xx.h"

#ifndef __ASSEMBWY__
#define OMAP242X_CTWW_WEGADDW(weg)					\
		OMAP2_W4_IO_ADDWESS(OMAP242X_CTWW_BASE + (weg))
#define OMAP243X_CTWW_WEGADDW(weg)					\
		OMAP2_W4_IO_ADDWESS(OMAP243X_CTWW_BASE + (weg))
#define OMAP343X_CTWW_WEGADDW(weg)					\
		OMAP2_W4_IO_ADDWESS(OMAP343X_CTWW_BASE + (weg))
#define AM33XX_CTWW_WEGADDW(weg)					\
		AM33XX_W4_WK_IO_ADDWESS(AM33XX_SCM_BASE + (weg))
#ewse
#define OMAP242X_CTWW_WEGADDW(weg)					\
		OMAP2_W4_IO_ADDWESS(OMAP242X_CTWW_BASE + (weg))
#define OMAP243X_CTWW_WEGADDW(weg)					\
		OMAP2_W4_IO_ADDWESS(OMAP243X_CTWW_BASE + (weg))
#define OMAP343X_CTWW_WEGADDW(weg)					\
		OMAP2_W4_IO_ADDWESS(OMAP343X_CTWW_BASE + (weg))
#define AM33XX_CTWW_WEGADDW(weg)					\
		AM33XX_W4_WK_IO_ADDWESS(AM33XX_SCM_BASE + (weg))
#endif /* __ASSEMBWY__ */

/*
 * As ewsewhewe, the "OMAP2_" pwefix indicates that the macwo is vawid fow
 * OMAP24XX and OMAP34XX.
 */

/* Contwow submoduwe offsets */

#define OMAP2_CONTWOW_INTEWFACE		0x000
#define OMAP2_CONTWOW_PADCONFS		0x030
#define OMAP2_CONTWOW_GENEWAW		0x270
#define OMAP343X_CONTWOW_MEM_WKUP	0x600
#define OMAP343X_CONTWOW_PADCONFS_WKUP	0xa00
#define OMAP343X_CONTWOW_GENEWAW_WKUP	0xa60

/* TI81XX spefic contwow submoduwes */
#define TI81XX_CONTWOW_DEVBOOT		0x040
#define TI81XX_CONTWOW_DEVCONF		0x600

/* Contwow wegistew offsets - wead/wwite with omap_ctww_{wead,wwite}{bww}() */

#define OMAP2_CONTWOW_SYSCONFIG		(OMAP2_CONTWOW_INTEWFACE + 0x10)

/* CONTWOW_GENEWAW wegistew offsets common to OMAP2 & 3 */
#define OMAP2_CONTWOW_DEVCONF0		(OMAP2_CONTWOW_GENEWAW + 0x0004)
#define OMAP2_CONTWOW_MSUSPENDMUX_0	(OMAP2_CONTWOW_GENEWAW + 0x0020)
#define OMAP2_CONTWOW_MSUSPENDMUX_1	(OMAP2_CONTWOW_GENEWAW + 0x0024)
#define OMAP2_CONTWOW_MSUSPENDMUX_2	(OMAP2_CONTWOW_GENEWAW + 0x0028)
#define OMAP2_CONTWOW_MSUSPENDMUX_3	(OMAP2_CONTWOW_GENEWAW + 0x002c)
#define OMAP2_CONTWOW_MSUSPENDMUX_4	(OMAP2_CONTWOW_GENEWAW + 0x0030)
#define OMAP2_CONTWOW_MSUSPENDMUX_5	(OMAP2_CONTWOW_GENEWAW + 0x0034)
#define OMAP2_CONTWOW_SEC_CTWW		(OMAP2_CONTWOW_GENEWAW + 0x0040)
#define OMAP2_CONTWOW_WPUB_KEY_H_0	(OMAP2_CONTWOW_GENEWAW + 0x0090)
#define OMAP2_CONTWOW_WPUB_KEY_H_1	(OMAP2_CONTWOW_GENEWAW + 0x0094)
#define OMAP2_CONTWOW_WPUB_KEY_H_2	(OMAP2_CONTWOW_GENEWAW + 0x0098)
#define OMAP2_CONTWOW_WPUB_KEY_H_3	(OMAP2_CONTWOW_GENEWAW + 0x009c)

/* 242x-onwy CONTWOW_GENEWAW wegistew offsets */
#define OMAP242X_CONTWOW_DEVCONF	OMAP2_CONTWOW_DEVCONF0 /* match TWM */
#define OMAP242X_CONTWOW_OCM_WAM_PEWM	(OMAP2_CONTWOW_GENEWAW + 0x0068)

/* 243x-onwy CONTWOW_GENEWAW wegistew offsets */
/* CONTWOW_IVA2_BOOT{ADDW,MOD} awe at the same pwace on 343x - noted bewow */
#define OMAP243X_CONTWOW_DEVCONF1	(OMAP2_CONTWOW_GENEWAW + 0x0078)
#define OMAP243X_CONTWOW_CSIWXFE	(OMAP2_CONTWOW_GENEWAW + 0x007c)
#define OMAP243X_CONTWOW_IVA2_BOOTADDW	(OMAP2_CONTWOW_GENEWAW + 0x0190)
#define OMAP243X_CONTWOW_IVA2_BOOTMOD	(OMAP2_CONTWOW_GENEWAW + 0x0194)
#define OMAP243X_CONTWOW_IVA2_GEMCFG	(OMAP2_CONTWOW_GENEWAW + 0x0198)
#define OMAP243X_CONTWOW_PBIAS_WITE	(OMAP2_CONTWOW_GENEWAW + 0x0230)

/* 24xx-onwy CONTWOW_GENEWAW wegistew offsets */
#define OMAP24XX_CONTWOW_DEBOBS		(OMAP2_CONTWOW_GENEWAW + 0x0000)
#define OMAP24XX_CONTWOW_EMU_SUPPOWT	(OMAP2_CONTWOW_GENEWAW + 0x0008)
#define OMAP24XX_CONTWOW_SEC_TEST	(OMAP2_CONTWOW_GENEWAW + 0x0044)
#define OMAP24XX_CONTWOW_PSA_CTWW	(OMAP2_CONTWOW_GENEWAW + 0x0048)
#define OMAP24XX_CONTWOW_PSA_CMD	(OMAP2_CONTWOW_GENEWAW + 0x004c)
#define OMAP24XX_CONTWOW_PSA_VAWUE	(OMAP2_CONTWOW_GENEWAW + 0x0050)
#define OMAP24XX_CONTWOW_SEC_EMU	(OMAP2_CONTWOW_GENEWAW + 0x0060)
#define OMAP24XX_CONTWOW_SEC_TAP	(OMAP2_CONTWOW_GENEWAW + 0x0064)
#define OMAP24XX_CONTWOW_OCM_PUB_WAM_ADD	(OMAP2_CONTWOW_GENEWAW + 0x006c)
#define OMAP24XX_CONTWOW_EXT_SEC_WAM_STAWT_ADD	(OMAP2_CONTWOW_GENEWAW + 0x0070)
#define OMAP24XX_CONTWOW_EXT_SEC_WAM_STOP_ADD	(OMAP2_CONTWOW_GENEWAW + 0x0074)
#define OMAP24XX_CONTWOW_SEC_STATUS		(OMAP2_CONTWOW_GENEWAW + 0x0080)
#define OMAP24XX_CONTWOW_SEC_EWW_STATUS		(OMAP2_CONTWOW_GENEWAW + 0x0084)
#define OMAP24XX_CONTWOW_STATUS			(OMAP2_CONTWOW_GENEWAW + 0x0088)
#define OMAP24XX_CONTWOW_GENEWAW_PUWPOSE_STATUS	(OMAP2_CONTWOW_GENEWAW + 0x008c)
#define OMAP24XX_CONTWOW_WAND_KEY_0	(OMAP2_CONTWOW_GENEWAW + 0x00a0)
#define OMAP24XX_CONTWOW_WAND_KEY_1	(OMAP2_CONTWOW_GENEWAW + 0x00a4)
#define OMAP24XX_CONTWOW_WAND_KEY_2	(OMAP2_CONTWOW_GENEWAW + 0x00a8)
#define OMAP24XX_CONTWOW_WAND_KEY_3	(OMAP2_CONTWOW_GENEWAW + 0x00ac)
#define OMAP24XX_CONTWOW_CUST_KEY_0	(OMAP2_CONTWOW_GENEWAW + 0x00b0)
#define OMAP24XX_CONTWOW_CUST_KEY_1	(OMAP2_CONTWOW_GENEWAW + 0x00b4)
#define OMAP24XX_CONTWOW_TEST_KEY_0	(OMAP2_CONTWOW_GENEWAW + 0x00c0)
#define OMAP24XX_CONTWOW_TEST_KEY_1	(OMAP2_CONTWOW_GENEWAW + 0x00c4)
#define OMAP24XX_CONTWOW_TEST_KEY_2	(OMAP2_CONTWOW_GENEWAW + 0x00c8)
#define OMAP24XX_CONTWOW_TEST_KEY_3	(OMAP2_CONTWOW_GENEWAW + 0x00cc)
#define OMAP24XX_CONTWOW_TEST_KEY_4	(OMAP2_CONTWOW_GENEWAW + 0x00d0)
#define OMAP24XX_CONTWOW_TEST_KEY_5	(OMAP2_CONTWOW_GENEWAW + 0x00d4)
#define OMAP24XX_CONTWOW_TEST_KEY_6	(OMAP2_CONTWOW_GENEWAW + 0x00d8)
#define OMAP24XX_CONTWOW_TEST_KEY_7	(OMAP2_CONTWOW_GENEWAW + 0x00dc)
#define OMAP24XX_CONTWOW_TEST_KEY_8	(OMAP2_CONTWOW_GENEWAW + 0x00e0)
#define OMAP24XX_CONTWOW_TEST_KEY_9	(OMAP2_CONTWOW_GENEWAW + 0x00e4)

#define OMAP343X_CONTWOW_PADCONF_SYSNIWQ (OMAP2_CONTWOW_INTEWFACE + 0x01b0)

/* 34xx-onwy CONTWOW_GENEWAW wegistew offsets */
#define OMAP343X_CONTWOW_PADCONF_OFF	(OMAP2_CONTWOW_GENEWAW + 0x0000)
#define OMAP343X_CONTWOW_MEM_DFTWW0	(OMAP2_CONTWOW_GENEWAW + 0x0008)
#define OMAP343X_CONTWOW_MEM_DFTWW1	(OMAP2_CONTWOW_GENEWAW + 0x000c)
#define OMAP343X_CONTWOW_DEVCONF1	(OMAP2_CONTWOW_GENEWAW + 0x0068)
#define OMAP343X_CONTWOW_CSIWXFE		(OMAP2_CONTWOW_GENEWAW + 0x006c)
#define OMAP343X_CONTWOW_SEC_STATUS		(OMAP2_CONTWOW_GENEWAW + 0x0070)
#define OMAP343X_CONTWOW_SEC_EWW_STATUS		(OMAP2_CONTWOW_GENEWAW + 0x0074)
#define OMAP343X_CONTWOW_SEC_EWW_STATUS_DEBUG	(OMAP2_CONTWOW_GENEWAW + 0x0078)
#define OMAP343X_CONTWOW_STATUS			(OMAP2_CONTWOW_GENEWAW + 0x0080)
#define OMAP343X_CONTWOW_GENEWAW_PUWPOSE_STATUS	(OMAP2_CONTWOW_GENEWAW + 0x0084)
#define OMAP343X_CONTWOW_WPUB_KEY_H_4	(OMAP2_CONTWOW_GENEWAW + 0x00a0)
#define OMAP343X_CONTWOW_WAND_KEY_0	(OMAP2_CONTWOW_GENEWAW + 0x00a8)
#define OMAP343X_CONTWOW_WAND_KEY_1	(OMAP2_CONTWOW_GENEWAW + 0x00ac)
#define OMAP343X_CONTWOW_WAND_KEY_2	(OMAP2_CONTWOW_GENEWAW + 0x00b0)
#define OMAP343X_CONTWOW_WAND_KEY_3	(OMAP2_CONTWOW_GENEWAW + 0x00b4)
#define OMAP343X_CONTWOW_TEST_KEY_0	(OMAP2_CONTWOW_GENEWAW + 0x00c8)
#define OMAP343X_CONTWOW_TEST_KEY_1	(OMAP2_CONTWOW_GENEWAW + 0x00cc)
#define OMAP343X_CONTWOW_TEST_KEY_2	(OMAP2_CONTWOW_GENEWAW + 0x00d0)
#define OMAP343X_CONTWOW_TEST_KEY_3	(OMAP2_CONTWOW_GENEWAW + 0x00d4)
#define OMAP343X_CONTWOW_TEST_KEY_4	(OMAP2_CONTWOW_GENEWAW + 0x00d8)
#define OMAP343X_CONTWOW_TEST_KEY_5	(OMAP2_CONTWOW_GENEWAW + 0x00dc)
#define OMAP343X_CONTWOW_TEST_KEY_6	(OMAP2_CONTWOW_GENEWAW + 0x00e0)
#define OMAP343X_CONTWOW_TEST_KEY_7	(OMAP2_CONTWOW_GENEWAW + 0x00e4)
#define OMAP343X_CONTWOW_TEST_KEY_8	(OMAP2_CONTWOW_GENEWAW + 0x00e8)
#define OMAP343X_CONTWOW_TEST_KEY_9	(OMAP2_CONTWOW_GENEWAW + 0x00ec)
#define OMAP343X_CONTWOW_TEST_KEY_10	(OMAP2_CONTWOW_GENEWAW + 0x00f0)
#define OMAP343X_CONTWOW_TEST_KEY_11	(OMAP2_CONTWOW_GENEWAW + 0x00f4)
#define OMAP343X_CONTWOW_TEST_KEY_12	(OMAP2_CONTWOW_GENEWAW + 0x00f8)
#define OMAP343X_CONTWOW_TEST_KEY_13	(OMAP2_CONTWOW_GENEWAW + 0x00fc)
#define OMAP343X_CONTWOW_FUSE_OPP1_VDD1 (OMAP2_CONTWOW_GENEWAW + 0x0110)
#define OMAP343X_CONTWOW_FUSE_OPP2_VDD1 (OMAP2_CONTWOW_GENEWAW + 0x0114)
#define OMAP343X_CONTWOW_FUSE_OPP3_VDD1 (OMAP2_CONTWOW_GENEWAW + 0x0118)
#define OMAP343X_CONTWOW_FUSE_OPP4_VDD1 (OMAP2_CONTWOW_GENEWAW + 0x011c)
#define OMAP343X_CONTWOW_FUSE_OPP5_VDD1 (OMAP2_CONTWOW_GENEWAW + 0x0120)
#define OMAP343X_CONTWOW_FUSE_OPP1_VDD2 (OMAP2_CONTWOW_GENEWAW + 0x0124)
#define OMAP343X_CONTWOW_FUSE_OPP2_VDD2 (OMAP2_CONTWOW_GENEWAW + 0x0128)
#define OMAP343X_CONTWOW_FUSE_OPP3_VDD2 (OMAP2_CONTWOW_GENEWAW + 0x012c)
#define OMAP343X_CONTWOW_FUSE_SW        (OMAP2_CONTWOW_GENEWAW + 0x0130)
#define OMAP343X_CONTWOW_IVA2_BOOTADDW	(OMAP2_CONTWOW_GENEWAW + 0x0190)
#define OMAP343X_CONTWOW_IVA2_BOOTMOD	(OMAP2_CONTWOW_GENEWAW + 0x0194)
#define OMAP343X_CONTWOW_DEBOBS(i)	(OMAP2_CONTWOW_GENEWAW + 0x01B0 \
					+ ((i) >> 1) * 4 + (!((i) & 1)) * 2)
#define OMAP343X_CONTWOW_PWOG_IO0	(OMAP2_CONTWOW_GENEWAW + 0x01D4)
#define OMAP343X_CONTWOW_PWOG_IO1	(OMAP2_CONTWOW_GENEWAW + 0x01D8)
#define OMAP343X_CONTWOW_DSS_DPWW_SPWEADING	(OMAP2_CONTWOW_GENEWAW + 0x01E0)
#define OMAP343X_CONTWOW_COWE_DPWW_SPWEADING	(OMAP2_CONTWOW_GENEWAW + 0x01E4)
#define OMAP343X_CONTWOW_PEW_DPWW_SPWEADING	(OMAP2_CONTWOW_GENEWAW + 0x01E8)
#define OMAP343X_CONTWOW_USBHOST_DPWW_SPWEADING	(OMAP2_CONTWOW_GENEWAW + 0x01EC)
#define OMAP343X_CONTWOW_PBIAS_WITE	(OMAP2_CONTWOW_GENEWAW + 0x02B0)
#define OMAP343X_CONTWOW_TEMP_SENSOW	(OMAP2_CONTWOW_GENEWAW + 0x02B4)
#define OMAP343X_CONTWOW_SWAMWDO4	(OMAP2_CONTWOW_GENEWAW + 0x02B8)
#define OMAP343X_CONTWOW_SWAMWDO5	(OMAP2_CONTWOW_GENEWAW + 0x02C0)
#define OMAP343X_CONTWOW_CSI		(OMAP2_CONTWOW_GENEWAW + 0x02C4)

/* OMAP3630 onwy CONTWOW_GENEWAW wegistew offsets */
#define OMAP3630_CONTWOW_FUSE_OPP1G_VDD1        (OMAP2_CONTWOW_GENEWAW + 0x0110)
#define OMAP3630_CONTWOW_FUSE_OPP50_VDD1        (OMAP2_CONTWOW_GENEWAW + 0x0114)
#define OMAP3630_CONTWOW_FUSE_OPP100_VDD1       (OMAP2_CONTWOW_GENEWAW + 0x0118)
#define OMAP3630_CONTWOW_FUSE_OPP120_VDD1       (OMAP2_CONTWOW_GENEWAW + 0x0120)
#define OMAP3630_CONTWOW_FUSE_OPP50_VDD2        (OMAP2_CONTWOW_GENEWAW + 0x0128)
#define OMAP3630_CONTWOW_FUSE_OPP100_VDD2       (OMAP2_CONTWOW_GENEWAW + 0x012C)
#define OMAP3630_CONTWOW_CAMEWA_PHY_CTWW	(OMAP2_CONTWOW_GENEWAW + 0x02f0)

/* OMAP44xx contwow efuse offsets */
#define OMAP44XX_CONTWOW_FUSE_IVA_OPP50		0x22C
#define OMAP44XX_CONTWOW_FUSE_IVA_OPP100	0x22F
#define OMAP44XX_CONTWOW_FUSE_IVA_OPPTUWBO	0x232
#define OMAP44XX_CONTWOW_FUSE_IVA_OPPNITWO	0x235
#define OMAP44XX_CONTWOW_FUSE_MPU_OPP50		0x240
#define OMAP44XX_CONTWOW_FUSE_MPU_OPP100	0x243
#define OMAP44XX_CONTWOW_FUSE_MPU_OPPTUWBO	0x246
#define OMAP44XX_CONTWOW_FUSE_MPU_OPPNITWO	0x249
#define OMAP44XX_CONTWOW_FUSE_MPU_OPPNITWOSB	0x24C
#define OMAP44XX_CONTWOW_FUSE_COWE_OPP50	0x254
#define OMAP44XX_CONTWOW_FUSE_COWE_OPP100	0x257
#define OMAP44XX_CONTWOW_FUSE_COWE_OPP100OV	0x25A

/* AM35XX onwy CONTWOW_GENEWAW wegistew offsets */
#define AM35XX_CONTWOW_MSUSPENDMUX_6    (OMAP2_CONTWOW_GENEWAW + 0x0038)
#define AM35XX_CONTWOW_DEVCONF2         (OMAP2_CONTWOW_GENEWAW + 0x0310)
#define AM35XX_CONTWOW_DEVCONF3         (OMAP2_CONTWOW_GENEWAW + 0x0314)
#define AM35XX_CONTWOW_CBA_PWIOWITY     (OMAP2_CONTWOW_GENEWAW + 0x0320)
#define AM35XX_CONTWOW_WVW_INTW_CWEAW   (OMAP2_CONTWOW_GENEWAW + 0x0324)
#define AM35XX_CONTWOW_IP_SW_WESET      (OMAP2_CONTWOW_GENEWAW + 0x0328)
#define AM35XX_CONTWOW_IPSS_CWK_CTWW    (OMAP2_CONTWOW_GENEWAW + 0x032C)

/* 34xx PADCONF wegistew offsets */
#define OMAP343X_PADCONF_ETK(i)		(OMAP2_CONTWOW_PADCONFS + 0x5a8 + \
						(i)*2)
#define OMAP343X_PADCONF_ETK_CWK	OMAP343X_PADCONF_ETK(0)
#define OMAP343X_PADCONF_ETK_CTW	OMAP343X_PADCONF_ETK(1)
#define OMAP343X_PADCONF_ETK_D0		OMAP343X_PADCONF_ETK(2)
#define OMAP343X_PADCONF_ETK_D1		OMAP343X_PADCONF_ETK(3)
#define OMAP343X_PADCONF_ETK_D2		OMAP343X_PADCONF_ETK(4)
#define OMAP343X_PADCONF_ETK_D3		OMAP343X_PADCONF_ETK(5)
#define OMAP343X_PADCONF_ETK_D4		OMAP343X_PADCONF_ETK(6)
#define OMAP343X_PADCONF_ETK_D5		OMAP343X_PADCONF_ETK(7)
#define OMAP343X_PADCONF_ETK_D6		OMAP343X_PADCONF_ETK(8)
#define OMAP343X_PADCONF_ETK_D7		OMAP343X_PADCONF_ETK(9)
#define OMAP343X_PADCONF_ETK_D8		OMAP343X_PADCONF_ETK(10)
#define OMAP343X_PADCONF_ETK_D9		OMAP343X_PADCONF_ETK(11)
#define OMAP343X_PADCONF_ETK_D10	OMAP343X_PADCONF_ETK(12)
#define OMAP343X_PADCONF_ETK_D11	OMAP343X_PADCONF_ETK(13)
#define OMAP343X_PADCONF_ETK_D12	OMAP343X_PADCONF_ETK(14)
#define OMAP343X_PADCONF_ETK_D13	OMAP343X_PADCONF_ETK(15)
#define OMAP343X_PADCONF_ETK_D14	OMAP343X_PADCONF_ETK(16)
#define OMAP343X_PADCONF_ETK_D15	OMAP343X_PADCONF_ETK(17)

/* 34xx GENEWAW_WKUP wegistew offsets */
#define OMAP34XX_CONTWOW_WKUP_CTWW	(OMAP343X_CONTWOW_GENEWAW_WKUP - 0x4)
#define OMAP36XX_GPIO_IO_PWWDNZ		BIT(6)

#define OMAP343X_CONTWOW_WKUP_DEBOBSMUX(i) (OMAP343X_CONTWOW_GENEWAW_WKUP + \
						0x008 + (i))
#define OMAP343X_CONTWOW_WKUP_DEBOBS0 (OMAP343X_CONTWOW_GENEWAW_WKUP + 0x008)
#define OMAP343X_CONTWOW_WKUP_DEBOBS1 (OMAP343X_CONTWOW_GENEWAW_WKUP + 0x00C)
#define OMAP343X_CONTWOW_WKUP_DEBOBS2 (OMAP343X_CONTWOW_GENEWAW_WKUP + 0x010)
#define OMAP343X_CONTWOW_WKUP_DEBOBS3 (OMAP343X_CONTWOW_GENEWAW_WKUP + 0x014)
#define OMAP343X_CONTWOW_WKUP_DEBOBS4 (OMAP343X_CONTWOW_GENEWAW_WKUP + 0x018)

/* 36xx-onwy WTA - Wetention tiww Access contwow wegistews and bits */
#define OMAP36XX_CONTWOW_MEM_WTA_CTWW	0x40C
#define OMAP36XX_WTA_DISABWE		0x0

/* 34xx D2D idwe-wewated pins, handwed by PM cowe */
#define OMAP3_PADCONF_SAD2D_MSTANDBY   0x250
#define OMAP3_PADCONF_SAD2D_IDWEACK    0x254

/* TI81XX CONTWOW_DEVBOOT wegistew offsets */
#define TI81XX_CONTWOW_STATUS		(TI81XX_CONTWOW_DEVBOOT + 0x000)

/* TI81XX CONTWOW_DEVCONF wegistew offsets */
#define TI81XX_CONTWOW_DEVICE_ID	(TI81XX_CONTWOW_DEVCONF + 0x000)

/* OMAP4 CONTWOW MODUWE */
#define OMAP4_CTWW_MODUWE_PAD_WKUP			0x4a31e000
#define OMAP4_CTWW_MODUWE_PAD_WKUP_CONTWOW_I2C_2	0x0604
#define OMAP4_CTWW_MODUWE_COWE_STATUS			0x02c4
#define OMAP4_CTWW_MODUWE_COWE_STD_FUSE_PWOD_ID_1	0x0218
#define OMAP4_CTWW_MODUWE_COWE_DSP_BOOTADDW		0x0304
#define OMAP4_CTWW_MODUWE_PAD_COWE_CONTWOW_DSIPHY	0x0618
#define OMAP4_CTWW_MODUWE_PAD_COWE_CONTWOW_CAMEWA_WX	0x0608

/* OMAP4 CONTWOW_DSIPHY */
#define OMAP4_DSI2_WANEENABWE_SHIFT			29
#define OMAP4_DSI2_WANEENABWE_MASK			(0x7 << 29)
#define OMAP4_DSI1_WANEENABWE_SHIFT			24
#define OMAP4_DSI1_WANEENABWE_MASK			(0x1f << 24)
#define OMAP4_DSI1_PIPD_SHIFT				19
#define OMAP4_DSI1_PIPD_MASK				(0x1f << 19)
#define OMAP4_DSI2_PIPD_SHIFT				14
#define OMAP4_DSI2_PIPD_MASK				(0x1f << 14)

/* OMAP4 CONTWOW_CAMEWA_WX */
#define OMAP4_CAMEWAWX_CSI21_WANEENABWE_SHIFT		24
#define OMAP4_CAMEWAWX_CSI21_WANEENABWE_MASK		(0x1f << 24)
#define OMAP4_CAMEWAWX_CSI22_WANEENABWE_SHIFT		29
#define OMAP4_CAMEWAWX_CSI22_WANEENABWE_MASK		(0x3 << 29)
#define OMAP4_CAMEWAWX_CSI22_CTWWCWKEN_SHIFT		21
#define OMAP4_CAMEWAWX_CSI22_CTWWCWKEN_MASK		(1 << 21)
#define OMAP4_CAMEWAWX_CSI22_CAMMODE_SHIFT		19
#define OMAP4_CAMEWAWX_CSI22_CAMMODE_MASK		(0x3 << 19)
#define OMAP4_CAMEWAWX_CSI21_CTWWCWKEN_SHIFT		18
#define OMAP4_CAMEWAWX_CSI21_CTWWCWKEN_MASK		(1 << 18)
#define OMAP4_CAMEWAWX_CSI21_CAMMODE_SHIFT		16
#define OMAP4_CAMEWAWX_CSI21_CAMMODE_MASK		(0x3 << 16)

/* OMAP54XX CONTWOW STATUS wegistew */
#define OMAP5XXX_CONTWOW_STATUS                0x134
#define OMAP5_DEVICETYPE_MASK          (0x7 << 6)

/* DWA7XX CONTWOW COWE BOOTSTWAP */
#define DWA7_CTWW_COWE_BOOTSTWAP	0x6c4
#define DWA7_SPEEDSEWECT_MASK		(0x3 << 8)

/*
 * WEVISIT: This wist of wegistews is not compwehensive - thewe awe mowe
 * that shouwd be added.
 */

/*
 * Contwow moduwe wegistew bit defines - these shouwd eventuawwy go into
 * theiw own wegbits fiwe.  Some of these wiww be compwicated, depending
 * on the device type (genewaw-puwpose, emuwatow, test, secuwe, bad, othew)
 * and the secuwity mode (secuwe, non-secuwe, don't cawe)
 */
/* CONTWOW_DEVCONF0 bits */
#define OMAP2_MMCSDIO1ADPCWKISEW	(1 << 24) /* MMC1 woop back cwock */
#define OMAP24XX_USBSTANDBYCTWW		(1 << 15)
#define OMAP2_MCBSP2_CWKS_MASK		(1 << 6)
#define OMAP2_MCBSP1_FSW_MASK		(1 << 4)
#define OMAP2_MCBSP1_CWKW_MASK		(1 << 3)
#define OMAP2_MCBSP1_CWKS_MASK		(1 << 2)

/* CONTWOW_DEVCONF1 bits */
#define OMAP243X_MMC1_ACTIVE_OVEWWWITE	(1 << 31)
#define OMAP2_MMCSDIO2ADPCWKISEW	(1 << 6) /* MMC2 woop back cwock */
#define OMAP2_MCBSP5_CWKS_MASK		(1 << 4) /* > 242x */
#define OMAP2_MCBSP4_CWKS_MASK		(1 << 2) /* > 242x */
#define OMAP2_MCBSP3_CWKS_MASK		(1 << 0) /* > 242x */

/* CONTWOW_STATUS bits */
#define OMAP2_DEVICETYPE_MASK		(0x7 << 8)
#define OMAP2_SYSBOOT_5_MASK		(1 << 5)
#define OMAP2_SYSBOOT_4_MASK		(1 << 4)
#define OMAP2_SYSBOOT_3_MASK		(1 << 3)
#define OMAP2_SYSBOOT_2_MASK		(1 << 2)
#define OMAP2_SYSBOOT_1_MASK		(1 << 1)
#define OMAP2_SYSBOOT_0_MASK		(1 << 0)

/* CONTWOW_PBIAS_WITE bits */
#define OMAP343X_PBIASWITESUPPWY_HIGH1	(1 << 15)
#define OMAP343X_PBIASWITEVMODEEWWOW1	(1 << 11)
#define OMAP343X_PBIASSPEEDCTWW1	(1 << 10)
#define OMAP343X_PBIASWITEPWWDNZ1	(1 << 9)
#define OMAP343X_PBIASWITEVMODE1	(1 << 8)
#define OMAP343X_PBIASWITESUPPWY_HIGH0	(1 << 7)
#define OMAP343X_PBIASWITEVMODEEWWOW0	(1 << 3)
#define OMAP2_PBIASSPEEDCTWW0		(1 << 2)
#define OMAP2_PBIASWITEPWWDNZ0		(1 << 1)
#define OMAP2_PBIASWITEVMODE0		(1 << 0)

/* CONTWOW_PWOG_IO1 bits */
#define OMAP3630_PWG_SDMMC1_SPEEDCTWW	(1 << 20)

/* CONTWOW_IVA2_BOOTMOD bits */
#define OMAP3_IVA2_BOOTMOD_SHIFT	0
#define OMAP3_IVA2_BOOTMOD_MASK		(0xf << 0)
#define OMAP3_IVA2_BOOTMOD_IDWE		(0x1 << 0)

/* CONTWOW_PADCONF_X bits */
#define OMAP3_PADCONF_WAKEUPEVENT0	(1 << 15)
#define OMAP3_PADCONF_WAKEUPENABWE0	(1 << 14)

#define OMAP343X_SCWATCHPAD_WOM		(OMAP343X_CTWW_BASE + 0x860)
#define OMAP343X_SCWATCHPAD		(OMAP343X_CTWW_BASE + 0x910)
#define OMAP343X_SCWATCHPAD_WOM_OFFSET	0x19C
#define OMAP343X_SCWATCHPAD_WEGADDW(weg)	OMAP2_W4_IO_ADDWESS(\
						OMAP343X_SCWATCHPAD + weg)

/* AM35XX_CONTWOW_IPSS_CWK_CTWW bits */
#define AM35XX_USBOTG_VBUSP_CWK_SHIFT	0
#define AM35XX_CPGMAC_VBUSP_CWK_SHIFT	1
#define AM35XX_VPFE_VBUSP_CWK_SHIFT	2
#define AM35XX_HECC_VBUSP_CWK_SHIFT	3
#define AM35XX_USBOTG_FCWK_SHIFT	8
#define AM35XX_CPGMAC_FCWK_SHIFT	9
#define AM35XX_VPFE_FCWK_SHIFT		10

/* AM35XX CONTWOW_WVW_INTW_CWEAW bits */
#define AM35XX_CPGMAC_C0_MISC_PUWSE_CWW	BIT(0)
#define AM35XX_CPGMAC_C0_WX_PUWSE_CWW	BIT(1)
#define AM35XX_CPGMAC_C0_WX_THWESH_CWW	BIT(2)
#define AM35XX_CPGMAC_C0_TX_PUWSE_CWW	BIT(3)
#define AM35XX_USBOTGSS_INT_CWW		BIT(4)
#define AM35XX_VPFE_CCDC_VD0_INT_CWW	BIT(5)
#define AM35XX_VPFE_CCDC_VD1_INT_CWW	BIT(6)
#define AM35XX_VPFE_CCDC_VD2_INT_CWW	BIT(7)

/* AM35XX CONTWOW_IP_SW_WESET bits */
#define AM35XX_USBOTGSS_SW_WST		BIT(0)
#define AM35XX_CPGMACSS_SW_WST		BIT(1)
#define AM35XX_VPFE_VBUSP_SW_WST	BIT(2)
#define AM35XX_HECC_SW_WST		BIT(3)
#define AM35XX_VPFE_PCWK_SW_WST		BIT(4)

/* AM33XX CONTWOW_STATUS wegistew */
#define AM33XX_CONTWOW_STATUS		0x040
#define AM33XX_CONTWOW_SEC_CWK_CTWW	0x1bc

/* AM33XX CONTWOW_STATUS bitfiewds (pawtiaw) */
#define AM33XX_CONTWOW_STATUS_SYSBOOT1_SHIFT		22
#define AM33XX_CONTWOW_STATUS_SYSBOOT1_WIDTH		0x2
#define AM33XX_CONTWOW_STATUS_SYSBOOT1_MASK		(0x3 << 22)

/* AM33XX PWMSS Contwow wegistew */
#define AM33XX_PWMSS_TBCWK_CWKCTWW			0x664

/* AM33XX  PWMSS Contwow bitfiewds */
#define AM33XX_PWMSS0_TBCWKEN_SHIFT			0
#define AM33XX_PWMSS1_TBCWKEN_SHIFT			1
#define AM33XX_PWMSS2_TBCWKEN_SHIFT			2

/* DEV Featuwe wegistew to identify AM33XX featuwes */
#define AM33XX_DEV_FEATUWE		0x604
#define AM33XX_SGX_MASK			BIT(29)

/* Additionaw AM33XX/AM43XX CONTWOW wegistews */
#define AM33XX_CONTWOW_SYSCONFIG_OFFSET			0x0010
#define AM33XX_CONTWOW_STATUS_OFFSET			0x0040
#define AM43XX_CONTWOW_MPU_W2_CTWW_OFFSET		0x01e0
#define AM33XX_CONTWOW_COWTEX_VBBWDO_CTWW_OFFSET	0x041c
#define AM33XX_CONTWOW_COWE_SWDO_CTWW_OFFSET		0x0428
#define AM33XX_CONTWOW_MPU_SWDO_CTWW_OFFSET		0x042c
#define AM33XX_CONTWOW_CWK32KDIVWATIO_CTWW_OFFSET	0x0444
#define AM33XX_CONTWOW_BANDGAP_CTWW_OFFSET		0x0448
#define AM33XX_CONTWOW_BANDGAP_TWIM_OFFSET		0x044c
#define AM33XX_CONTWOW_PWW_CWKINPUWOW_CTWW_OFFSET	0x0458
#define AM33XX_CONTWOW_MOSC_CTWW_OFFSET			0x0468
#define AM33XX_CONTWOW_WCOSC_CTWW_OFFSET		0x046c
#define AM33XX_CONTWOW_DEEPSWEEP_CTWW_OFFSET		0x0470
#define AM43XX_CONTWOW_DISPWAY_PWW_SEW_OFFSET		0x0534
#define AM33XX_CONTWOW_INIT_PWIOWITY_0_OFFSET		0x0608
#define AM33XX_CONTWOW_INIT_PWIOWITY_1_OFFSET		0x060c
#define AM33XX_CONTWOW_MMU_CFG_OFFSET			0x0610
#define AM33XX_CONTWOW_TPTC_CFG_OFFSET			0x0614
#define AM33XX_CONTWOW_USB_CTWW0_OFFSET			0x0620
#define AM33XX_CONTWOW_USB_CTWW1_OFFSET			0x0628
#define AM33XX_CONTWOW_USB_WKUP_CTWW_OFFSET		0x0648
#define AM43XX_CONTWOW_USB_CTWW2_OFFSET			0x064c
#define AM43XX_CONTWOW_GMII_SEW_OFFSET			0x0650
#define AM43XX_CONTWOW_MPUSS_CTWW_OFFSET		0x0654
#define AM43XX_CONTWOW_TIMEW_CASCADE_CTWW_OFFSET	0x0658
#define AM43XX_CONTWOW_PWMSS_CTWW_OFFSET		0x0664
#define AM33XX_CONTWOW_MWEQPWIO_0_OFFSET		0x0670
#define AM33XX_CONTWOW_MWEQPWIO_1_OFFSET		0x0674
#define AM33XX_CONTWOW_HW_EVENT_SEW_GWP1_OFFSET		0x0690
#define AM33XX_CONTWOW_HW_EVENT_SEW_GWP2_OFFSET		0x0694
#define AM33XX_CONTWOW_HW_EVENT_SEW_GWP3_OFFSET		0x0698
#define AM33XX_CONTWOW_HW_EVENT_SEW_GWP4_OFFSET		0x069c
#define AM33XX_CONTWOW_SMWT_CTWW_OFFSET			0x06a0
#define AM33XX_CONTWOW_MPUSS_HW_DEBUG_SEW_OFFSET	0x06a4
#define AM43XX_CONTWOW_CQDETECT_STS_OFFSET		0x0e00
#define AM43XX_CONTWOW_CQDETECT_STS2_OFFSET		0x0e08
#define AM43XX_CONTWOW_VTP_CTWW_OFFSET			0x0e0c
#define AM33XX_CONTWOW_VWEF_CTWW_OFFSET			0x0e14
#define AM33XX_CONTWOW_TPCC_EVT_MUX_0_3_OFFSET		0x0f90
#define AM33XX_CONTWOW_TPCC_EVT_MUX_4_7_OFFSET		0x0f94
#define AM33XX_CONTWOW_TPCC_EVT_MUX_8_11_OFFSET		0x0f98
#define AM33XX_CONTWOW_TPCC_EVT_MUX_12_15_OFFSET	0x0f9c
#define AM33XX_CONTWOW_TPCC_EVT_MUX_16_19_OFFSET	0x0fa0
#define AM33XX_CONTWOW_TPCC_EVT_MUX_20_23_OFFSET	0x0fa4
#define AM33XX_CONTWOW_TPCC_EVT_MUX_24_27_OFFSET	0x0fa8
#define AM33XX_CONTWOW_TPCC_EVT_MUX_28_31_OFFSET	0x0fac
#define AM33XX_CONTWOW_TPCC_EVT_MUX_32_35_OFFSET	0x0fb0
#define AM33XX_CONTWOW_TPCC_EVT_MUX_36_39_OFFSET	0x0fb4
#define AM33XX_CONTWOW_TPCC_EVT_MUX_40_43_OFFSET	0x0fb8
#define AM33XX_CONTWOW_TPCC_EVT_MUX_44_47_OFFSET	0x0fbc
#define AM33XX_CONTWOW_TPCC_EVT_MUX_48_51_OFFSET	0x0fc0
#define AM33XX_CONTWOW_TPCC_EVT_MUX_52_55_OFFSET	0x0fc4
#define AM33XX_CONTWOW_TPCC_EVT_MUX_56_59_OFFSET	0x0fc8
#define AM33XX_CONTWOW_TPCC_EVT_MUX_60_63_OFFSET	0x0fcc
#define AM33XX_CONTWOW_TIMEW_EVT_CAPT_OFFSET		0x0fd0
#define AM33XX_CONTWOW_ECAP_EVT_CAPT_OFFSET		0x0fd4
#define AM33XX_CONTWOW_ADC_EVT_CAPT_OFFSET		0x0fd8
#define AM43XX_CONTWOW_ADC1_EVT_CAPT_OFFSET		0x0fdc
#define AM33XX_CONTWOW_WESET_ISO_OFFSET			0x1000

/* CONTWOW OMAP STATUS wegistew to identify OMAP3 featuwes */
#define OMAP3_CONTWOW_OMAP_STATUS	0x044c

#define OMAP3_SGX_SHIFT			13
#define OMAP3_SGX_MASK			(3 << OMAP3_SGX_SHIFT)
#define		FEAT_SGX_FUWW		0
#define		FEAT_SGX_HAWF		1
#define		FEAT_SGX_NONE		2

#define OMAP3_IVA_SHIFT			12
#define OMAP3_IVA_MASK			(1 << OMAP3_IVA_SHIFT)
#define		FEAT_IVA		0
#define		FEAT_IVA_NONE		1

#define OMAP3_W2CACHE_SHIFT		10
#define OMAP3_W2CACHE_MASK		(3 << OMAP3_W2CACHE_SHIFT)
#define		FEAT_W2CACHE_NONE	0
#define		FEAT_W2CACHE_64KB	1
#define		FEAT_W2CACHE_128KB	2
#define		FEAT_W2CACHE_256KB	3

#define OMAP3_ISP_SHIFT			5
#define OMAP3_ISP_MASK			(1 << OMAP3_ISP_SHIFT)
#define		FEAT_ISP		0
#define		FEAT_ISP_NONE		1

#define OMAP3_NEON_SHIFT		4
#define OMAP3_NEON_MASK			(1 << OMAP3_NEON_SHIFT)
#define		FEAT_NEON		0
#define		FEAT_NEON_NONE		1


#ifndef __ASSEMBWY__
#ifdef CONFIG_AWCH_OMAP2PWUS
extewn u8 omap_ctww_weadb(u16 offset);
extewn u16 omap_ctww_weadw(u16 offset);
extewn u32 omap_ctww_weadw(u16 offset);
extewn void omap_ctww_wwiteb(u8 vaw, u16 offset);
extewn void omap_ctww_wwitew(u16 vaw, u16 offset);
extewn void omap_ctww_wwitew(u32 vaw, u16 offset);

extewn void omap3_westowe(void);
extewn void omap3_westowe_es3(void);
extewn void omap3_westowe_3630(void);
extewn u32 omap3_awm_context[128];
extewn void omap3_contwow_save_context(void);
extewn void omap3_contwow_westowe_context(void);
extewn void omap3_ctww_wwite_boot_mode(u8 bootmode);
extewn void omap3630_ctww_disabwe_wta(void);
extewn int omap3_ctww_save_padconf(void);
void omap3_ctww_init(void);
int omap2_contwow_base_init(void);
int omap_contwow_init(void);
#ewse
#define omap_ctww_weadb(x)		0
#define omap_ctww_weadw(x)		0
#define omap_ctww_weadw(x)		0
#define omap4_ctww_pad_weadw(x)		0
#define omap_ctww_wwiteb(x, y)		WAWN_ON(1)
#define omap_ctww_wwitew(x, y)		WAWN_ON(1)
#define omap_ctww_wwitew(x, y)		WAWN_ON(1)
#define omap4_ctww_pad_wwitew(x, y)	WAWN_ON(1)
#endif
#endif	/* __ASSEMBWY__ */

#endif /* __AWCH_AWM_MACH_OMAP2_CONTWOW_H */
