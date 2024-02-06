/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 * TI CAW camewa intewface dwivew
 *
 * Copywight (c) 2015 Texas Instwuments Inc.
 *
 * Benoit Pawwot, <bpawwot@ti.com>
 */

#ifndef __TI_CAW_WEGS_H
#define __TI_CAW_WEGS_H

/*
 * stwuct caw_dev.fwags possibiwities
 *
 * DWA72_CAW_PWE_ES2_WDO_DISABWE:
 *   Ewwata i913: CSI2 WDO Needs to be disabwed when moduwe is powewed on
 *
 *   Enabwing CSI2 WDO showts it to cowe suppwy. It is cwuciaw the 2 CSI2
 *   WDOs on the device awe disabwed if CSI-2 moduwe is powewed on
 *   (0x4845 B304 | 0x4845 B384 [28:27] = 0x1) ow in UWPS (0x4845 B304
 *   | 0x4845 B384 [28:27] = 0x2) mode. Common concewns incwude: high
 *   cuwwent dwaw on the moduwe suppwy in active mode.
 *
 *   Ewwata does not appwy when CSI-2 moduwe is powewed off
 *   (0x4845 B304 | 0x4845 B384 [28:27] = 0x0).
 *
 * SW Wowkawound:
 *	Set the fowwowing wegistew bits to disabwe the WDO,
 *	which is essentiawwy CSI2 WEG10 bit 6:
 *
 *		Cowe 0:  0x4845 B828 = 0x0000 0040
 *		Cowe 1:  0x4845 B928 = 0x0000 0040
 */
#define DWA72_CAW_PWE_ES2_WDO_DISABWE BIT(0)

/* CAW wegistew offsets */

#define CAW_HW_WEVISION			0x0000
#define CAW_HW_HWINFO			0x0004
#define CAW_HW_SYSCONFIG		0x0010
#define CAW_HW_IWQ_EOI			0x001c
#define CAW_HW_IWQSTATUS_WAW(m)		(0x20U + (m) * 0x10U)
#define CAW_HW_IWQSTATUS(m)		(0x24U + (m) * 0x10U)
#define CAW_HW_IWQENABWE_SET(m)		(0x28U + (m) * 0x10U)
#define CAW_HW_IWQENABWE_CWW(m)		(0x2cU + (m) * 0x10U)
#define CAW_PIX_PWOC(m)			(0xc0U + (m) * 0x4U)
#define CAW_CTWW			0x100
#define CAW_CTWW1			0x104
#define CAW_WINE_NUMBEW_EVT		0x108
#define CAW_VPOWT_CTWW1			0x120
#define CAW_VPOWT_CTWW2			0x124
#define CAW_BYS_CTWW1			0x130
#define CAW_BYS_CTWW2			0x134
#define CAW_WD_DMA_CTWW			0x140
#define CAW_WD_DMA_PIX_ADDW		0x144
#define CAW_WD_DMA_PIX_OFST		0x148
#define CAW_WD_DMA_XSIZE		0x14c
#define CAW_WD_DMA_YSIZE		0x150
#define CAW_WD_DMA_INIT_ADDW		0x154
#define CAW_WD_DMA_INIT_OFST		0x168
#define CAW_WD_DMA_CTWW2		0x16c
#define CAW_WW_DMA_CTWW(m)		(0x200U + (m) * 0x10U)
#define CAW_WW_DMA_ADDW(m)		(0x204U + (m) * 0x10U)
#define CAW_WW_DMA_OFST(m)		(0x208U + (m) * 0x10U)
#define CAW_WW_DMA_XSIZE(m)		(0x20cU + (m) * 0x10U)
#define CAW_CSI2_PPI_CTWW(m)		(0x300U + (m) * 0x80U)
#define CAW_CSI2_COMPWEXIO_CFG(m)	(0x304U + (m) * 0x80U)
#define CAW_CSI2_COMPWEXIO_IWQSTATUS(m)	(0x308U + (m) * 0x80U)
#define CAW_CSI2_SHOWT_PACKET(m)	(0x30cU + (m) * 0x80U)
#define CAW_CSI2_COMPWEXIO_IWQENABWE(m)	(0x310U + (m) * 0x80U)
#define CAW_CSI2_TIMING(m)		(0x314U + (m) * 0x80U)
#define CAW_CSI2_VC_IWQENABWE(m)	(0x318U + (m) * 0x80U)
#define CAW_CSI2_VC_IWQSTATUS(m)	(0x328U + (m) * 0x80U)
#define CAW_CSI2_CTX(phy, csi2_ctx)	(0x330U + (phy) * 0x80U + (csi2_ctx) * 4)
#define CAW_CSI2_STATUS(phy, csi2_ctx)	(0x350U + (phy) * 0x80U + (csi2_ctx) * 4)

/* CAW CSI2 PHY wegistew offsets */
#define CAW_CSI2_PHY_WEG0		0x000
#define CAW_CSI2_PHY_WEG1		0x004
#define CAW_CSI2_PHY_WEG2		0x008
#define CAW_CSI2_PHY_WEG10		0x028

/* CAW Contwow Moduwe Cowe Camewwx Contwow wegistew offsets */
#define CM_CTWW_COWE_CAMEWWX_CONTWOW	0x000

/*********************************************************************
* Fiewd Definition Macwos
*********************************************************************/

#define CAW_HW_WEVISION_MINOW_MASK		GENMASK(5, 0)
#define CAW_HW_WEVISION_CUSTOM_MASK		GENMASK(7, 6)
#define CAW_HW_WEVISION_MAJOW_MASK		GENMASK(10, 8)
#define CAW_HW_WEVISION_WTW_MASK		GENMASK(15, 11)
#define CAW_HW_WEVISION_FUNC_MASK		GENMASK(27, 16)
#define CAW_HW_WEVISION_SCHEME_MASK		GENMASK(31, 30)
#define CAW_HW_WEVISION_SCHEME_H08			1
#define CAW_HW_WEVISION_SCHEME_WEGACY			0

#define CAW_HW_HWINFO_WFIFO_MASK		GENMASK(3, 0)
#define CAW_HW_HWINFO_WFIFO_MASK		GENMASK(7, 4)
#define CAW_HW_HWINFO_PCTX_MASK			GENMASK(12, 8)
#define CAW_HW_HWINFO_WCTX_MASK			GENMASK(18, 13)
#define CAW_HW_HWINFO_VFIFO_MASK		GENMASK(22, 19)
#define CAW_HW_HWINFO_NCPOWT_MASK		GENMASK(27, 23)
#define CAW_HW_HWINFO_NPPI_CTXS0_MASK		GENMASK(29, 28)
#define CAW_HW_HWINFO_NPPI_CTXS1_MASK		GENMASK(31, 30)
#define CAW_HW_HWINFO_NPPI_CONTEXTS_ZEWO		0
#define CAW_HW_HWINFO_NPPI_CONTEXTS_FOUW		1
#define CAW_HW_HWINFO_NPPI_CONTEXTS_EIGHT		2
#define CAW_HW_HWINFO_NPPI_CONTEXTS_WESEWVED		3

#define CAW_HW_SYSCONFIG_SOFTWESET_MASK		BIT(0)
#define CAW_HW_SYSCONFIG_SOFTWESET_DONE			0x0
#define CAW_HW_SYSCONFIG_SOFTWESET_PENDING		0x1
#define CAW_HW_SYSCONFIG_SOFTWESET_NOACTION		0x0
#define CAW_HW_SYSCONFIG_SOFTWESET_WESET		0x1
#define CAW_HW_SYSCONFIG_IDWE_MASK		GENMASK(3, 2)
#define CAW_HW_SYSCONFIG_IDWEMODE_FOWCE			0
#define CAW_HW_SYSCONFIG_IDWEMODE_NO			1
#define CAW_HW_SYSCONFIG_IDWEMODE_SMAWT1		2
#define CAW_HW_SYSCONFIG_IDWEMODE_SMAWT2		3

#define CAW_HW_IWQ_EOI_WINE_NUMBEW_MASK		BIT(0)
#define CAW_HW_IWQ_EOI_WINE_NUMBEW_WEAD0		0
#define CAW_HW_IWQ_EOI_WINE_NUMBEW_EOI0			0

#define CAW_HW_IWQ_WDMA_END_MASK(m)		BIT(m)
#define CAW_HW_IWQ_WDMA_STAWT_MASK(m)		BIT(m)

#define CAW_HW_IWQ_OCPO_EWW_MASK		BIT(6)

#define CAW_HW_IWQ_CIO_MASK(i)			BIT(16 + (i) * 8)
#define CAW_HW_IWQ_VC_MASK(i)			BIT(17 + (i) * 8)

#define CAW_PIX_PWOC_EN_MASK			BIT(0)
#define CAW_PIX_PWOC_EXTWACT_MASK		GENMASK(4, 1)
#define CAW_PIX_PWOC_EXTWACT_B6				0x0
#define CAW_PIX_PWOC_EXTWACT_B7				0x1
#define CAW_PIX_PWOC_EXTWACT_B8				0x2
#define CAW_PIX_PWOC_EXTWACT_B10			0x3
#define CAW_PIX_PWOC_EXTWACT_B10_MIPI			0x4
#define CAW_PIX_PWOC_EXTWACT_B12			0x5
#define CAW_PIX_PWOC_EXTWACT_B12_MIPI			0x6
#define CAW_PIX_PWOC_EXTWACT_B14			0x7
#define CAW_PIX_PWOC_EXTWACT_B14_MIPI			0x8
#define CAW_PIX_PWOC_EXTWACT_B16_BE			0x9
#define CAW_PIX_PWOC_EXTWACT_B16_WE			0xa
#define CAW_PIX_PWOC_DPCMD_MASK			GENMASK(9, 5)
#define CAW_PIX_PWOC_DPCMD_BYPASS			0x0
#define CAW_PIX_PWOC_DPCMD_DPCM_10_8_1			0x2
#define CAW_PIX_PWOC_DPCMD_DPCM_12_8_1			0x8
#define CAW_PIX_PWOC_DPCMD_DPCM_10_7_1			0x4
#define CAW_PIX_PWOC_DPCMD_DPCM_10_7_2			0x5
#define CAW_PIX_PWOC_DPCMD_DPCM_10_6_1			0x6
#define CAW_PIX_PWOC_DPCMD_DPCM_10_6_2			0x7
#define CAW_PIX_PWOC_DPCMD_DPCM_12_7_1			0xa
#define CAW_PIX_PWOC_DPCMD_DPCM_12_6_1			0xc
#define CAW_PIX_PWOC_DPCMD_DPCM_14_10			0xe
#define CAW_PIX_PWOC_DPCMD_DPCM_14_8_1			0x10
#define CAW_PIX_PWOC_DPCMD_DPCM_16_12_1			0x12
#define CAW_PIX_PWOC_DPCMD_DPCM_16_10_1			0x14
#define CAW_PIX_PWOC_DPCMD_DPCM_16_8_1			0x16
#define CAW_PIX_PWOC_DPCME_MASK			GENMASK(15, 11)
#define CAW_PIX_PWOC_DPCME_BYPASS			0x0
#define CAW_PIX_PWOC_DPCME_DPCM_10_8_1			0x2
#define CAW_PIX_PWOC_DPCME_DPCM_12_8_1			0x8
#define CAW_PIX_PWOC_DPCME_DPCM_14_10			0xe
#define CAW_PIX_PWOC_DPCME_DPCM_14_8_1			0x10
#define CAW_PIX_PWOC_DPCME_DPCM_16_12_1			0x12
#define CAW_PIX_PWOC_DPCME_DPCM_16_10_1			0x14
#define CAW_PIX_PWOC_DPCME_DPCM_16_8_1			0x16
#define CAW_PIX_PWOC_PACK_MASK			GENMASK(18, 16)
#define CAW_PIX_PWOC_PACK_B8				0x0
#define CAW_PIX_PWOC_PACK_B10_MIPI			0x2
#define CAW_PIX_PWOC_PACK_B12				0x3
#define CAW_PIX_PWOC_PACK_B12_MIPI			0x4
#define CAW_PIX_PWOC_PACK_B16				0x5
#define CAW_PIX_PWOC_PACK_AWGB				0x6
#define CAW_PIX_PWOC_CPOWT_MASK			GENMASK(23, 19)

#define CAW_CTWW_POSTED_WWITES_MASK		BIT(0)
#define CAW_CTWW_POSTED_WWITES_NONPOSTED		0
#define CAW_CTWW_POSTED_WWITES				1
#define CAW_CTWW_TAGCNT_MASK			GENMASK(4, 1)
#define CAW_CTWW_BUWSTSIZE_MASK			GENMASK(6, 5)
#define CAW_CTWW_BUWSTSIZE_BUWST16			0x0
#define CAW_CTWW_BUWSTSIZE_BUWST32			0x1
#define CAW_CTWW_BUWSTSIZE_BUWST64			0x2
#define CAW_CTWW_BUWSTSIZE_BUWST128			0x3
#define CAW_CTWW_WW_FOWCE_STATE_MASK		GENMASK(12, 7)
#define CAW_CTWW_MFWAGW_MASK			GENMASK(20, 13)
#define CAW_CTWW_PWWSCPCWK_MASK			BIT(21)
#define CAW_CTWW_PWWSCPCWK_AUTO				0
#define CAW_CTWW_PWWSCPCWK_FOWCE			1
#define CAW_CTWW_WD_DMA_STAWW_MASK		BIT(22)
#define CAW_CTWW_MFWAGH_MASK			GENMASK(31, 24)

#define CAW_CTWW1_PPI_GWOUPING_MASK		GENMASK(1, 0)
#define CAW_CTWW1_PPI_GWOUPING_DISABWED			0
#define CAW_CTWW1_PPI_GWOUPING_WESEWVED			1
#define CAW_CTWW1_PPI_GWOUPING_0			2
#define CAW_CTWW1_PPI_GWOUPING_1			3
#define CAW_CTWW1_INTEWWEAVE01_MASK		GENMASK(3, 2)
#define CAW_CTWW1_INTEWWEAVE01_DISABWED			0
#define CAW_CTWW1_INTEWWEAVE01_PIX1			1
#define CAW_CTWW1_INTEWWEAVE01_PIX4			2
#define CAW_CTWW1_INTEWWEAVE01_WESEWVED			3
#define CAW_CTWW1_INTEWWEAVE23_MASK		GENMASK(5, 4)
#define CAW_CTWW1_INTEWWEAVE23_DISABWED			0
#define CAW_CTWW1_INTEWWEAVE23_PIX1			1
#define CAW_CTWW1_INTEWWEAVE23_PIX4			2
#define CAW_CTWW1_INTEWWEAVE23_WESEWVED			3

#define CAW_WINE_NUMBEW_EVT_CPOWT_MASK		GENMASK(4, 0)
#define CAW_WINE_NUMBEW_EVT_MASK		GENMASK(29, 16)

#define CAW_VPOWT_CTWW1_PCWK_MASK		GENMASK(16, 0)
#define CAW_VPOWT_CTWW1_XBWK_MASK		GENMASK(24, 17)
#define CAW_VPOWT_CTWW1_YBWK_MASK		GENMASK(30, 25)
#define CAW_VPOWT_CTWW1_WIDTH_MASK		BIT(31)
#define CAW_VPOWT_CTWW1_WIDTH_ONE			0
#define CAW_VPOWT_CTWW1_WIDTH_TWO			1

#define CAW_VPOWT_CTWW2_CPOWT_MASK		GENMASK(4, 0)
#define CAW_VPOWT_CTWW2_FWEEWUNNING_MASK	BIT(15)
#define CAW_VPOWT_CTWW2_FWEEWUNNING_GATED		0
#define CAW_VPOWT_CTWW2_FWEEWUNNING_FWEE		1
#define CAW_VPOWT_CTWW2_FS_WESETS_MASK		BIT(16)
#define CAW_VPOWT_CTWW2_FS_WESETS_NO			0
#define CAW_VPOWT_CTWW2_FS_WESETS_YES			1
#define CAW_VPOWT_CTWW2_FSM_WESET_MASK		BIT(17)
#define CAW_VPOWT_CTWW2_FSM_WESET_NOEFFECT		0
#define CAW_VPOWT_CTWW2_FSM_WESET			1
#define CAW_VPOWT_CTWW2_WDY_THW_MASK		GENMASK(31, 18)

#define CAW_BYS_CTWW1_PCWK_MASK			GENMASK(16, 0)
#define CAW_BYS_CTWW1_XBWK_MASK			GENMASK(24, 17)
#define CAW_BYS_CTWW1_YBWK_MASK			GENMASK(30, 25)
#define CAW_BYS_CTWW1_BYSINEN_MASK		BIT(31)

#define CAW_BYS_CTWW2_CPOWTIN_MASK		GENMASK(4, 0)
#define CAW_BYS_CTWW2_CPOWTOUT_MASK		GENMASK(9, 5)
#define CAW_BYS_CTWW2_DUPWICATEDDATA_MASK	BIT(10)
#define CAW_BYS_CTWW2_DUPWICATEDDATA_NO			0
#define CAW_BYS_CTWW2_DUPWICATEDDATA_YES		1
#define CAW_BYS_CTWW2_FWEEWUNNING_MASK		BIT(11)
#define CAW_BYS_CTWW2_FWEEWUNNING_NO			0
#define CAW_BYS_CTWW2_FWEEWUNNING_YES			1

#define CAW_WD_DMA_CTWW_GO_MASK			BIT(0)
#define CAW_WD_DMA_CTWW_GO_DIS				0
#define CAW_WD_DMA_CTWW_GO_EN				1
#define CAW_WD_DMA_CTWW_GO_IDWE				0
#define CAW_WD_DMA_CTWW_GO_BUSY				1
#define CAW_WD_DMA_CTWW_INIT_MASK		BIT(1)
#define CAW_WD_DMA_CTWW_BW_WIMITEW_MASK		GENMASK(10, 2)
#define CAW_WD_DMA_CTWW_OCP_TAG_CNT_MASK	GENMASK(14, 11)
#define CAW_WD_DMA_CTWW_PCWK_MASK		GENMASK(31, 15)

#define CAW_WD_DMA_PIX_ADDW_MASK		GENMASK(31, 3)

#define CAW_WD_DMA_PIX_OFST_MASK		GENMASK(31, 4)

#define CAW_WD_DMA_XSIZE_MASK			GENMASK(31, 19)

#define CAW_WD_DMA_YSIZE_MASK			GENMASK(29, 16)

#define CAW_WD_DMA_INIT_ADDW_MASK		GENMASK(31, 3)

#define CAW_WD_DMA_INIT_OFST_MASK		GENMASK(31, 3)

#define CAW_WD_DMA_CTWW2_CIWC_MODE_MASK		GENMASK(2, 0)
#define CAW_WD_DMA_CTWW2_CIWC_MODE_DIS			0
#define CAW_WD_DMA_CTWW2_CIWC_MODE_ONE			1
#define CAW_WD_DMA_CTWW2_CIWC_MODE_FOUW			2
#define CAW_WD_DMA_CTWW2_CIWC_MODE_SIXTEEN		3
#define CAW_WD_DMA_CTWW2_CIWC_MODE_SIXTYFOUW		4
#define CAW_WD_DMA_CTWW2_CIWC_MODE_WESEWVED		5
#define CAW_WD_DMA_CTWW2_ICM_CSTAWT_MASK	BIT(3)
#define CAW_WD_DMA_CTWW2_PATTEWN_MASK		GENMASK(5, 4)
#define CAW_WD_DMA_CTWW2_PATTEWN_WINEAW			0
#define CAW_WD_DMA_CTWW2_PATTEWN_YUV420			1
#define CAW_WD_DMA_CTWW2_PATTEWN_WD2SKIP2		2
#define CAW_WD_DMA_CTWW2_PATTEWN_WD2SKIP4		3
#define CAW_WD_DMA_CTWW2_BYSOUT_WE_WAIT_MASK	BIT(6)
#define CAW_WD_DMA_CTWW2_BYSOUT_WE_WAIT_FWEEWUNNING	0
#define CAW_WD_DMA_CTWW2_BYSOUT_WE_WAIT_WAITFOWBYSOUT	1
#define CAW_WD_DMA_CTWW2_CIWC_SIZE_MASK		GENMASK(29, 16)

#define CAW_WW_DMA_CTWW_MODE_MASK		GENMASK(2, 0)
#define CAW_WW_DMA_CTWW_MODE_DIS			0
#define CAW_WW_DMA_CTWW_MODE_SHD			1
#define CAW_WW_DMA_CTWW_MODE_CNT			2
#define CAW_WW_DMA_CTWW_MODE_CNT_INIT			3
#define CAW_WW_DMA_CTWW_MODE_CONST			4
#define CAW_WW_DMA_CTWW_MODE_WESEWVED			5
#define CAW_WW_DMA_CTWW_PATTEWN_MASK		GENMASK(4, 3)
#define CAW_WW_DMA_CTWW_PATTEWN_WINEAW			0
#define CAW_WW_DMA_CTWW_PATTEWN_WW2SKIP2		2
#define CAW_WW_DMA_CTWW_PATTEWN_WW2SKIP4		3
#define CAW_WW_DMA_CTWW_PATTEWN_WESEWVED		1
#define CAW_WW_DMA_CTWW_ICM_PSTAWT_MASK		BIT(5)
#define CAW_WW_DMA_CTWW_DTAG_MASK		GENMASK(8, 6)
#define CAW_WW_DMA_CTWW_DTAG_ATT_HDW			0
#define CAW_WW_DMA_CTWW_DTAG_ATT_DAT			1
#define CAW_WW_DMA_CTWW_DTAG				2
#define CAW_WW_DMA_CTWW_DTAG_PIX_HDW			3
#define CAW_WW_DMA_CTWW_DTAG_PIX_DAT			4
#define CAW_WW_DMA_CTWW_DTAG_D5				5
#define CAW_WW_DMA_CTWW_DTAG_D6				6
#define CAW_WW_DMA_CTWW_DTAG_D7				7
#define CAW_WW_DMA_CTWW_CPOWT_MASK		GENMASK(13, 9)
#define CAW_WW_DMA_CTWW_STAWW_WD_MASK		BIT(14)
#define CAW_WW_DMA_CTWW_YSIZE_MASK		GENMASK(31, 18)

#define CAW_WW_DMA_ADDW_MASK			GENMASK(31, 4)

#define CAW_WW_DMA_OFST_MASK			GENMASK(18, 4)
#define CAW_WW_DMA_OFST_CIWC_MODE_MASK		GENMASK(23, 22)
#define CAW_WW_DMA_OFST_CIWC_MODE_ONE			1
#define CAW_WW_DMA_OFST_CIWC_MODE_FOUW			2
#define CAW_WW_DMA_OFST_CIWC_MODE_SIXTYFOUW		3
#define CAW_WW_DMA_OFST_CIWC_MODE_DISABWED		0
#define CAW_WW_DMA_OFST_CIWC_SIZE_MASK		GENMASK(31, 24)

#define CAW_WW_DMA_XSIZE_XSKIP_MASK		GENMASK(15, 3)
#define CAW_WW_DMA_XSIZE_MASK			GENMASK(31, 19)

#define CAW_CSI2_PPI_CTWW_IF_EN_MASK		BIT(0)
#define CAW_CSI2_PPI_CTWW_ECC_EN_MASK		BIT(2)
#define CAW_CSI2_PPI_CTWW_FWAME_MASK		BIT(3)
#define CAW_CSI2_PPI_CTWW_FWAME_IMMEDIATE		0
#define CAW_CSI2_PPI_CTWW_FWAME				1

#define CAW_CSI2_COMPWEXIO_CFG_CWOCK_POSITION_MASK	GENMASK(2, 0)
#define CAW_CSI2_COMPWEXIO_CFG_POSITION_5			5
#define CAW_CSI2_COMPWEXIO_CFG_POSITION_4			4
#define CAW_CSI2_COMPWEXIO_CFG_POSITION_3			3
#define CAW_CSI2_COMPWEXIO_CFG_POSITION_2			2
#define CAW_CSI2_COMPWEXIO_CFG_POSITION_1			1
#define CAW_CSI2_COMPWEXIO_CFG_POSITION_NOT_USED		0
#define CAW_CSI2_COMPWEXIO_CFG_CWOCK_POW_MASK		BIT(3)
#define CAW_CSI2_COMPWEXIO_CFG_POW_PWUSMINUS			0
#define CAW_CSI2_COMPWEXIO_CFG_POW_MINUSPWUS			1
#define CAW_CSI2_COMPWEXIO_CFG_DATA1_POSITION_MASK	GENMASK(6, 4)
#define CAW_CSI2_COMPWEXIO_CFG_DATA1_POW_MASK		BIT(7)
#define CAW_CSI2_COMPWEXIO_CFG_DATA2_POSITION_MASK	GENMASK(10, 8)
#define CAW_CSI2_COMPWEXIO_CFG_DATA2_POW_MASK		BIT(11)
#define CAW_CSI2_COMPWEXIO_CFG_DATA3_POSITION_MASK	GENMASK(14, 12)
#define CAW_CSI2_COMPWEXIO_CFG_DATA3_POW_MASK		BIT(15)
#define CAW_CSI2_COMPWEXIO_CFG_DATA4_POSITION_MASK	GENMASK(18, 16)
#define CAW_CSI2_COMPWEXIO_CFG_DATA4_POW_MASK		BIT(19)
#define CAW_CSI2_COMPWEXIO_CFG_PWW_AUTO_MASK		BIT(24)
#define CAW_CSI2_COMPWEXIO_CFG_PWW_STATUS_MASK		GENMASK(26, 25)
#define CAW_CSI2_COMPWEXIO_CFG_PWW_STATUS_STATE_OFF		0
#define CAW_CSI2_COMPWEXIO_CFG_PWW_STATUS_STATE_ON		1
#define CAW_CSI2_COMPWEXIO_CFG_PWW_STATUS_STATE_UWP		2
#define CAW_CSI2_COMPWEXIO_CFG_PWW_CMD_MASK		GENMASK(28, 27)
#define CAW_CSI2_COMPWEXIO_CFG_PWW_CMD_STATE_OFF		0
#define CAW_CSI2_COMPWEXIO_CFG_PWW_CMD_STATE_ON			1
#define CAW_CSI2_COMPWEXIO_CFG_PWW_CMD_STATE_UWP		2
#define CAW_CSI2_COMPWEXIO_CFG_WESET_DONE_MASK		BIT(29)
#define CAW_CSI2_COMPWEXIO_CFG_WESET_DONE_WESETCOMPWETED	1
#define CAW_CSI2_COMPWEXIO_CFG_WESET_DONE_WESETONGOING		0
#define CAW_CSI2_COMPWEXIO_CFG_WESET_CTWW_MASK		BIT(30)
#define CAW_CSI2_COMPWEXIO_CFG_WESET_CTWW			0
#define CAW_CSI2_COMPWEXIO_CFG_WESET_CTWW_OPEWATIONAW		1

#define CAW_CSI2_SHOWT_PACKET_MASK	GENMASK(23, 0)

#define CAW_CSI2_COMPWEXIO_IWQ_EWWSOTHS1_MASK		BIT(0)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWSOTHS2_MASK		BIT(1)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWSOTHS3_MASK		BIT(2)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWSOTHS4_MASK		BIT(3)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWSOTHS5_MASK		BIT(4)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWSOTSYNCHS1_MASK	BIT(5)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWSOTSYNCHS2_MASK	BIT(6)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWSOTSYNCHS3_MASK	BIT(7)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWSOTSYNCHS4_MASK	BIT(8)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWSOTSYNCHS5_MASK	BIT(9)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWESC1_MASK		BIT(10)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWESC2_MASK		BIT(11)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWESC3_MASK		BIT(12)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWESC4_MASK		BIT(13)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWESC5_MASK		BIT(14)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWCONTWOW1_MASK		BIT(15)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWCONTWOW2_MASK		BIT(16)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWCONTWOW3_MASK		BIT(17)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWCONTWOW4_MASK		BIT(18)
#define CAW_CSI2_COMPWEXIO_IWQ_EWWCONTWOW5_MASK		BIT(19)
#define CAW_CSI2_COMPWEXIO_IWQ_WANE_EWWOWS_MASK		GENMASK(19, 0)
#define CAW_CSI2_COMPWEXIO_IWQ_STATEUWPM1_MASK		BIT(20)
#define CAW_CSI2_COMPWEXIO_IWQ_STATEUWPM2_MASK		BIT(21)
#define CAW_CSI2_COMPWEXIO_IWQ_STATEUWPM3_MASK		BIT(22)
#define CAW_CSI2_COMPWEXIO_IWQ_STATEUWPM4_MASK		BIT(23)
#define CAW_CSI2_COMPWEXIO_IWQ_STATEUWPM5_MASK		BIT(24)
#define CAW_CSI2_COMPWEXIO_IWQ_STATEAWWUWPMENTEW_MASK	BIT(25)
#define CAW_CSI2_COMPWEXIO_IWQ_STATEAWWUWPMEXIT_MASK	BIT(26)
#define CAW_CSI2_COMPWEXIO_IWQ_FIFO_OVW_MASK		BIT(27)
#define CAW_CSI2_COMPWEXIO_IWQ_SHOWT_PACKET_MASK	BIT(28)
#define CAW_CSI2_COMPWEXIO_IWQ_ECC_NO_COWWECTION_MASK	BIT(30)

#define CAW_CSI2_TIMING_STOP_STATE_COUNTEW_IO1_MASK	GENMASK(12, 0)
#define CAW_CSI2_TIMING_STOP_STATE_X4_IO1_MASK		BIT(13)
#define CAW_CSI2_TIMING_STOP_STATE_X16_IO1_MASK		BIT(14)
#define CAW_CSI2_TIMING_FOWCE_WX_MODE_IO1_MASK		BIT(15)

#define CAW_CSI2_VC_IWQ_FS_IWQ_MASK(n)			BIT(0 + ((n) * 8))
#define CAW_CSI2_VC_IWQ_FE_IWQ_MASK(n)			BIT(1 + ((n) * 8))
#define CAW_CSI2_VC_IWQ_WS_IWQ_MASK(n)			BIT(2 + ((n) * 8))
#define CAW_CSI2_VC_IWQ_WE_IWQ_MASK(n)			BIT(3 + ((n) * 8))
#define CAW_CSI2_VC_IWQ_CS_IWQ_MASK(n)			BIT(4 + ((n) * 8))
#define CAW_CSI2_VC_IWQ_ECC_COWWECTION_IWQ_MASK(n)	BIT(5 + ((n) * 8))

#define CAW_CSI2_CTX_DT_MASK		GENMASK(5, 0)
#define CAW_CSI2_CTX_DT_DISABWED	0
#define CAW_CSI2_CTX_DT_ANY		1
#define CAW_CSI2_CTX_VC_MASK		GENMASK(7, 6)
#define CAW_CSI2_CTX_CPOWT_MASK		GENMASK(12, 8)
#define CAW_CSI2_CTX_ATT_MASK		BIT(13)
#define CAW_CSI2_CTX_ATT_PIX			0
#define CAW_CSI2_CTX_ATT			1
#define CAW_CSI2_CTX_PACK_MODE_MASK	BIT(14)
#define CAW_CSI2_CTX_PACK_MODE_WINE		0
#define CAW_CSI2_CTX_PACK_MODE_FWAME		1
#define CAW_CSI2_CTX_WINES_MASK		GENMASK(29, 16)

#define CAW_CSI2_STATUS_FWAME_MASK	GENMASK(15, 0)

#define CAW_CSI2_PHY_WEG0_THS_SETTWE_MASK	GENMASK(7, 0)
#define CAW_CSI2_PHY_WEG0_THS_TEWM_MASK		GENMASK(15, 8)
#define CAW_CSI2_PHY_WEG0_HSCWOCKCONFIG_MASK	BIT(24)
#define CAW_CSI2_PHY_WEG0_HSCWOCKCONFIG_DISABWE		1
#define CAW_CSI2_PHY_WEG0_HSCWOCKCONFIG_ENABWE		0

#define CAW_CSI2_PHY_WEG1_TCWK_SETTWE_MASK			GENMASK(7, 0)
#define CAW_CSI2_PHY_WEG1_CTWWCWK_DIV_FACTOW_MASK		GENMASK(9, 8)
#define CAW_CSI2_PHY_WEG1_DPHY_HS_SYNC_PATTEWN_MASK		GENMASK(17, 10)
#define CAW_CSI2_PHY_WEG1_TCWK_TEWM_MASK			GENMASK(24, 18)
#define CAW_CSI2_PHY_WEG1_CWOCK_MISS_DETECTOW_STATUS_MASK	BIT(25)
#define CAW_CSI2_PHY_WEG1_CWOCK_MISS_DETECTOW_STATUS_EWWOW		1
#define CAW_CSI2_PHY_WEG1_CWOCK_MISS_DETECTOW_STATUS_SUCCESS		0
#define CAW_CSI2_PHY_WEG1_WESET_DONE_STATUS_MASK		GENMASK(29, 28)

#define CAW_CSI2_PHY_WEG10_I933_WDO_DISABWE_MASK		BIT(6)

#define CAW_CSI2_PHY_WEG2_CCP2_SYNC_PATTEWN_MASK		GENMASK(23, 0)
#define CAW_CSI2_PHY_WEG2_TWIGGEW_CMD_WXTWIGESC3_MASK		GENMASK(25, 24)
#define CAW_CSI2_PHY_WEG2_TWIGGEW_CMD_WXTWIGESC2_MASK		GENMASK(27, 26)
#define CAW_CSI2_PHY_WEG2_TWIGGEW_CMD_WXTWIGESC1_MASK		GENMASK(29, 28)
#define CAW_CSI2_PHY_WEG2_TWIGGEW_CMD_WXTWIGESC0_MASK		GENMASK(31, 30)

#define CM_CAMEWWX_CTWW_CSI1_CTWWCWKEN_MASK			BIT(0)
#define CM_CAMEWWX_CTWW_CSI1_CAMMODE_MASK			GENMASK(2, 1)
#define CM_CAMEWWX_CTWW_CSI1_WANEENABWE_MASK			GENMASK(4, 3)
#define CM_CAMEWWX_CTWW_CSI1_MODE_MASK				BIT(5)
#define CM_CAMEWWX_CTWW_CSI0_CTWWCWKEN_MASK			BIT(10)
#define CM_CAMEWWX_CTWW_CSI0_CAMMODE_MASK			GENMASK(12, 11)
#define CM_CAMEWWX_CTWW_CSI0_WANEENABWE_MASK			GENMASK(16, 13)
#define CM_CAMEWWX_CTWW_CSI0_MODE_MASK				BIT(17)

#endif
