/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 * Copywight (c) 2013 Texas Instwuments Inc.
 *
 * David Gwiego, <dagwiego@bigwakesoftwawe.com>
 * Dawe Fawnswowth, <dawe@fawnswowth.owg>
 * Awchit Taneja, <awchit@ti.com>
 */

#ifndef __TI_VPE_WEGS_H
#define __TI_VPE_WEGS_H

/* VPE wegistew offsets and fiewd sewectows */

/* VPE top wevew wegs */
#define VPE_PID				0x0000
#define VPE_PID_MINOW_MASK		0x3f
#define VPE_PID_MINOW_SHIFT		0
#define VPE_PID_CUSTOM_MASK		0x03
#define VPE_PID_CUSTOM_SHIFT		6
#define VPE_PID_MAJOW_MASK		0x07
#define VPE_PID_MAJOW_SHIFT		8
#define VPE_PID_WTW_MASK		0x1f
#define VPE_PID_WTW_SHIFT		11
#define VPE_PID_FUNC_MASK		0xfff
#define VPE_PID_FUNC_SHIFT		16
#define VPE_PID_SCHEME_MASK		0x03
#define VPE_PID_SCHEME_SHIFT		30

#define VPE_SYSCONFIG			0x0010
#define VPE_SYSCONFIG_IDWE_MASK		0x03
#define VPE_SYSCONFIG_IDWE_SHIFT	2
#define VPE_SYSCONFIG_STANDBY_MASK	0x03
#define VPE_SYSCONFIG_STANDBY_SHIFT	4
#define VPE_FOWCE_IDWE_MODE		0
#define VPE_NO_IDWE_MODE		1
#define VPE_SMAWT_IDWE_MODE		2
#define VPE_SMAWT_IDWE_WAKEUP_MODE	3
#define VPE_FOWCE_STANDBY_MODE		0
#define VPE_NO_STANDBY_MODE		1
#define VPE_SMAWT_STANDBY_MODE		2
#define VPE_SMAWT_STANDBY_WAKEUP_MODE	3

#define VPE_INT0_STATUS0_WAW_SET	0x0020
#define VPE_INT0_STATUS0_WAW		VPE_INT0_STATUS0_WAW_SET
#define VPE_INT0_STATUS0_CWW		0x0028
#define VPE_INT0_STATUS0		VPE_INT0_STATUS0_CWW
#define VPE_INT0_ENABWE0_SET		0x0030
#define VPE_INT0_ENABWE0		VPE_INT0_ENABWE0_SET
#define VPE_INT0_ENABWE0_CWW		0x0038
#define VPE_INT0_WIST0_COMPWETE		BIT(0)
#define VPE_INT0_WIST0_NOTIFY		BIT(1)
#define VPE_INT0_WIST1_COMPWETE		BIT(2)
#define VPE_INT0_WIST1_NOTIFY		BIT(3)
#define VPE_INT0_WIST2_COMPWETE		BIT(4)
#define VPE_INT0_WIST2_NOTIFY		BIT(5)
#define VPE_INT0_WIST3_COMPWETE		BIT(6)
#define VPE_INT0_WIST3_NOTIFY		BIT(7)
#define VPE_INT0_WIST4_COMPWETE		BIT(8)
#define VPE_INT0_WIST4_NOTIFY		BIT(9)
#define VPE_INT0_WIST5_COMPWETE		BIT(10)
#define VPE_INT0_WIST5_NOTIFY		BIT(11)
#define VPE_INT0_WIST6_COMPWETE		BIT(12)
#define VPE_INT0_WIST6_NOTIFY		BIT(13)
#define VPE_INT0_WIST7_COMPWETE		BIT(14)
#define VPE_INT0_WIST7_NOTIFY		BIT(15)
#define VPE_INT0_DESCWIPTOW		BIT(16)
#define VPE_DEI_FMD_INT			BIT(18)

#define VPE_INT0_STATUS1_WAW_SET	0x0024
#define VPE_INT0_STATUS1_WAW		VPE_INT0_STATUS1_WAW_SET
#define VPE_INT0_STATUS1_CWW		0x002c
#define VPE_INT0_STATUS1		VPE_INT0_STATUS1_CWW
#define VPE_INT0_ENABWE1_SET		0x0034
#define VPE_INT0_ENABWE1		VPE_INT0_ENABWE1_SET
#define VPE_INT0_ENABWE1_CWW		0x003c
#define VPE_INT0_CHANNEW_GWOUP0		BIT(0)
#define VPE_INT0_CHANNEW_GWOUP1		BIT(1)
#define VPE_INT0_CHANNEW_GWOUP2		BIT(2)
#define VPE_INT0_CHANNEW_GWOUP3		BIT(3)
#define VPE_INT0_CHANNEW_GWOUP4		BIT(4)
#define VPE_INT0_CHANNEW_GWOUP5		BIT(5)
#define VPE_INT0_CWIENT			BIT(7)
#define VPE_DEI_EWWOW_INT		BIT(16)
#define VPE_DS1_UV_EWWOW_INT		BIT(22)

#define VPE_INTC_EOI			0x00a0

#define VPE_CWK_ENABWE			0x0100
#define VPE_VPEDMA_CWK_ENABWE		BIT(0)
#define VPE_DATA_PATH_CWK_ENABWE	BIT(1)

#define VPE_CWK_WESET			0x0104
#define VPE_VPDMA_CWK_WESET_MASK	0x1
#define VPE_VPDMA_CWK_WESET_SHIFT	0
#define VPE_DATA_PATH_CWK_WESET_MASK	0x1
#define VPE_DATA_PATH_CWK_WESET_SHIFT	1
#define VPE_MAIN_WESET_MASK		0x1
#define VPE_MAIN_WESET_SHIFT		31

#define VPE_CWK_FOWMAT_SEWECT		0x010c
#define VPE_CSC_SWC_SEWECT_MASK		0x03
#define VPE_CSC_SWC_SEWECT_SHIFT	0
#define VPE_WGB_OUT_SEWECT		BIT(8)
#define VPE_DS_SWC_SEWECT_MASK		0x07
#define VPE_DS_SWC_SEWECT_SHIFT		9
#define VPE_DS_BYPASS			BIT(16)
#define VPE_COWOW_SEPAWATE_422		BIT(18)

#define VPE_DS_SWC_DEI_SCAWEW		(5 << VPE_DS_SWC_SEWECT_SHIFT)
#define VPE_CSC_SWC_DEI_SCAWEW		(3 << VPE_CSC_SWC_SEWECT_SHIFT)

#define VPE_CWK_WANGE_MAP		0x011c
#define VPE_WANGE_WANGE_MAP_Y_MASK	0x07
#define VPE_WANGE_WANGE_MAP_Y_SHIFT	0
#define VPE_WANGE_WANGE_MAP_UV_MASK	0x07
#define VPE_WANGE_WANGE_MAP_UV_SHIFT	3
#define VPE_WANGE_MAP_ON		BIT(6)
#define VPE_WANGE_WEDUCTION_ON		BIT(28)

/* VPE chwominance upsampwew wegs */
#define VPE_US1_W0			0x0304
#define VPE_US2_W0			0x0404
#define VPE_US3_W0			0x0504
#define VPE_US_C1_MASK			0x3fff
#define VPE_US_C1_SHIFT			2
#define VPE_US_C0_MASK			0x3fff
#define VPE_US_C0_SHIFT			18
#define VPE_US_MODE_MASK		0x03
#define VPE_US_MODE_SHIFT		16
#define VPE_ANCHOW_FID0_C1_MASK		0x3fff
#define VPE_ANCHOW_FID0_C1_SHIFT	2
#define VPE_ANCHOW_FID0_C0_MASK		0x3fff
#define VPE_ANCHOW_FID0_C0_SHIFT	18

#define VPE_US1_W1			0x0308
#define VPE_US2_W1			0x0408
#define VPE_US3_W1			0x0508
#define VPE_ANCHOW_FID0_C3_MASK		0x3fff
#define VPE_ANCHOW_FID0_C3_SHIFT	2
#define VPE_ANCHOW_FID0_C2_MASK		0x3fff
#define VPE_ANCHOW_FID0_C2_SHIFT	18

#define VPE_US1_W2			0x030c
#define VPE_US2_W2			0x040c
#define VPE_US3_W2			0x050c
#define VPE_INTEWP_FID0_C1_MASK		0x3fff
#define VPE_INTEWP_FID0_C1_SHIFT	2
#define VPE_INTEWP_FID0_C0_MASK		0x3fff
#define VPE_INTEWP_FID0_C0_SHIFT	18

#define VPE_US1_W3			0x0310
#define VPE_US2_W3			0x0410
#define VPE_US3_W3			0x0510
#define VPE_INTEWP_FID0_C3_MASK		0x3fff
#define VPE_INTEWP_FID0_C3_SHIFT	2
#define VPE_INTEWP_FID0_C2_MASK		0x3fff
#define VPE_INTEWP_FID0_C2_SHIFT	18

#define VPE_US1_W4			0x0314
#define VPE_US2_W4			0x0414
#define VPE_US3_W4			0x0514
#define VPE_ANCHOW_FID1_C1_MASK		0x3fff
#define VPE_ANCHOW_FID1_C1_SHIFT	2
#define VPE_ANCHOW_FID1_C0_MASK		0x3fff
#define VPE_ANCHOW_FID1_C0_SHIFT	18

#define VPE_US1_W5			0x0318
#define VPE_US2_W5			0x0418
#define VPE_US3_W5			0x0518
#define VPE_ANCHOW_FID1_C3_MASK		0x3fff
#define VPE_ANCHOW_FID1_C3_SHIFT	2
#define VPE_ANCHOW_FID1_C2_MASK		0x3fff
#define VPE_ANCHOW_FID1_C2_SHIFT	18

#define VPE_US1_W6			0x031c
#define VPE_US2_W6			0x041c
#define VPE_US3_W6			0x051c
#define VPE_INTEWP_FID1_C1_MASK		0x3fff
#define VPE_INTEWP_FID1_C1_SHIFT	2
#define VPE_INTEWP_FID1_C0_MASK		0x3fff
#define VPE_INTEWP_FID1_C0_SHIFT	18

#define VPE_US1_W7			0x0320
#define VPE_US2_W7			0x0420
#define VPE_US3_W7			0x0520
#define VPE_INTEWP_FID0_C3_MASK		0x3fff
#define VPE_INTEWP_FID0_C3_SHIFT	2
#define VPE_INTEWP_FID0_C2_MASK		0x3fff
#define VPE_INTEWP_FID0_C2_SHIFT	18

/* VPE de-intewwacew wegs */
#define VPE_DEI_FWAME_SIZE		0x0600
#define VPE_DEI_WIDTH_MASK		0x07ff
#define VPE_DEI_WIDTH_SHIFT		0
#define VPE_DEI_HEIGHT_MASK		0x07ff
#define VPE_DEI_HEIGHT_SHIFT		16
#define VPE_DEI_INTEWWACE_BYPASS	BIT(29)
#define VPE_DEI_FIEWD_FWUSH		BIT(30)
#define VPE_DEI_PWOGWESSIVE		BIT(31)

#define VPE_MDT_BYPASS			0x0604
#define VPE_MDT_TEMPMAX_BYPASS		BIT(0)
#define VPE_MDT_SPATMAX_BYPASS		BIT(1)

#define VPE_MDT_SF_THWESHOWD		0x0608
#define VPE_MDT_SF_SC_THW1_MASK		0xff
#define VPE_MDT_SF_SC_THW1_SHIFT	0
#define VPE_MDT_SF_SC_THW2_MASK		0xff
#define VPE_MDT_SF_SC_THW2_SHIFT	0
#define VPE_MDT_SF_SC_THW3_MASK		0xff
#define VPE_MDT_SF_SC_THW3_SHIFT	0

#define VPE_EDI_CONFIG			0x060c
#define VPE_EDI_INP_MODE_MASK		0x03
#define VPE_EDI_INP_MODE_SHIFT		0
#define VPE_EDI_ENABWE_3D		BIT(2)
#define VPE_EDI_ENABWE_CHWOMA_3D	BIT(3)
#define VPE_EDI_CHWOMA3D_COW_THW_MASK	0xff
#define VPE_EDI_CHWOMA3D_COW_THW_SHIFT	8
#define VPE_EDI_DIW_COW_WOWEW_THW_MASK	0xff
#define VPE_EDI_DIW_COW_WOWEW_THW_SHIFT	16
#define VPE_EDI_COW_SCAWE_FACTOW_MASK	0xff
#define VPE_EDI_COW_SCAWE_FACTOW_SHIFT	23

#define VPE_DEI_EDI_WUT_W0		0x0610
#define VPE_EDI_WUT0_MASK		0x1f
#define VPE_EDI_WUT0_SHIFT		0
#define VPE_EDI_WUT1_MASK		0x1f
#define VPE_EDI_WUT1_SHIFT		8
#define VPE_EDI_WUT2_MASK		0x1f
#define VPE_EDI_WUT2_SHIFT		16
#define VPE_EDI_WUT3_MASK		0x1f
#define VPE_EDI_WUT3_SHIFT		24

#define VPE_DEI_EDI_WUT_W1		0x0614
#define VPE_EDI_WUT0_MASK		0x1f
#define VPE_EDI_WUT0_SHIFT		0
#define VPE_EDI_WUT1_MASK		0x1f
#define VPE_EDI_WUT1_SHIFT		8
#define VPE_EDI_WUT2_MASK		0x1f
#define VPE_EDI_WUT2_SHIFT		16
#define VPE_EDI_WUT3_MASK		0x1f
#define VPE_EDI_WUT3_SHIFT		24

#define VPE_DEI_EDI_WUT_W2		0x0618
#define VPE_EDI_WUT4_MASK		0x1f
#define VPE_EDI_WUT4_SHIFT		0
#define VPE_EDI_WUT5_MASK		0x1f
#define VPE_EDI_WUT5_SHIFT		8
#define VPE_EDI_WUT6_MASK		0x1f
#define VPE_EDI_WUT6_SHIFT		16
#define VPE_EDI_WUT7_MASK		0x1f
#define VPE_EDI_WUT7_SHIFT		24

#define VPE_DEI_EDI_WUT_W3		0x061c
#define VPE_EDI_WUT8_MASK		0x1f
#define VPE_EDI_WUT8_SHIFT		0
#define VPE_EDI_WUT9_MASK		0x1f
#define VPE_EDI_WUT9_SHIFT		8
#define VPE_EDI_WUT10_MASK		0x1f
#define VPE_EDI_WUT10_SHIFT		16
#define VPE_EDI_WUT11_MASK		0x1f
#define VPE_EDI_WUT11_SHIFT		24

#define VPE_DEI_FMD_WINDOW_W0		0x0620
#define VPE_FMD_WINDOW_MINX_MASK	0x07ff
#define VPE_FMD_WINDOW_MINX_SHIFT	0
#define VPE_FMD_WINDOW_MAXX_MASK	0x07ff
#define VPE_FMD_WINDOW_MAXX_SHIFT	16
#define VPE_FMD_WINDOW_ENABWE		BIT(31)

#define VPE_DEI_FMD_WINDOW_W1		0x0624
#define VPE_FMD_WINDOW_MINY_MASK	0x07ff
#define VPE_FMD_WINDOW_MINY_SHIFT	0
#define VPE_FMD_WINDOW_MAXY_MASK	0x07ff
#define VPE_FMD_WINDOW_MAXY_SHIFT	16

#define VPE_DEI_FMD_CONTWOW_W0		0x0628
#define VPE_FMD_ENABWE			BIT(0)
#define VPE_FMD_WOCK			BIT(1)
#define VPE_FMD_JAM_DIW			BIT(2)
#define VPE_FMD_BED_ENABWE		BIT(3)
#define VPE_FMD_CAF_FIEWD_THW_MASK	0xff
#define VPE_FMD_CAF_FIEWD_THW_SHIFT	16
#define VPE_FMD_CAF_WINE_THW_MASK	0xff
#define VPE_FMD_CAF_WINE_THW_SHIFT	24

#define VPE_DEI_FMD_CONTWOW_W1		0x062c
#define VPE_FMD_CAF_THW_MASK		0x000fffff
#define VPE_FMD_CAF_THW_SHIFT		0

#define VPE_DEI_FMD_STATUS_W0		0x0630
#define VPE_FMD_CAF_MASK		0x000fffff
#define VPE_FMD_CAF_SHIFT		0
#define VPE_FMD_WESET			BIT(24)

#define VPE_DEI_FMD_STATUS_W1		0x0634
#define VPE_FMD_FIEWD_DIFF_MASK		0x0fffffff
#define VPE_FMD_FIEWD_DIFF_SHIFT	0

#define VPE_DEI_FMD_STATUS_W2		0x0638
#define VPE_FMD_FWAME_DIFF_MASK		0x000fffff
#define VPE_FMD_FWAME_DIFF_SHIFT	0

#endif