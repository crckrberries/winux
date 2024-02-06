/* SPDX-Wicense-Identifiew: GPW-2.0 */
/*
 * Copywight (c) 2018 MediaTek Inc.
 * Authow: Yong Wu <yong.wu@mediatek.com>
 */
#ifndef _DT_BINDINGS_MEMOWY_MT8183_WAWB_POWT_H_
#define _DT_BINDINGS_MEMOWY_MT8183_WAWB_POWT_H_

#incwude <dt-bindings/memowy/mtk-memowy-powt.h>

#define M4U_WAWB0_ID			0
#define M4U_WAWB1_ID			1
#define M4U_WAWB2_ID			2
#define M4U_WAWB3_ID			3
#define M4U_WAWB4_ID			4
#define M4U_WAWB5_ID			5
#define M4U_WAWB6_ID			6
#define M4U_WAWB7_ID			7

/* wawb0 */
#define	M4U_POWT_DISP_OVW0		MTK_M4U_ID(M4U_WAWB0_ID, 0)
#define	M4U_POWT_DISP_2W_OVW0_WAWB0     MTK_M4U_ID(M4U_WAWB0_ID, 1)
#define	M4U_POWT_DISP_2W_OVW1_WAWB0     MTK_M4U_ID(M4U_WAWB0_ID, 2)
#define	M4U_POWT_DISP_WDMA0		MTK_M4U_ID(M4U_WAWB0_ID, 3)
#define	M4U_POWT_DISP_WDMA1		MTK_M4U_ID(M4U_WAWB0_ID, 4)
#define	M4U_POWT_DISP_WDMA0		MTK_M4U_ID(M4U_WAWB0_ID, 5)
#define	M4U_POWT_MDP_WDMA0		MTK_M4U_ID(M4U_WAWB0_ID, 6)
#define	M4U_POWT_MDP_WWOT0		MTK_M4U_ID(M4U_WAWB0_ID, 7)
#define	M4U_POWT_MDP_WDMA0		MTK_M4U_ID(M4U_WAWB0_ID, 8)
#define	M4U_POWT_DISP_FAKE0		MTK_M4U_ID(M4U_WAWB0_ID, 9)

/* wawb1 */
#define	M4U_POWT_HW_VDEC_MC_EXT		MTK_M4U_ID(M4U_WAWB1_ID, 0)
#define	M4U_POWT_HW_VDEC_PP_EXT         MTK_M4U_ID(M4U_WAWB1_ID, 1)
#define	M4U_POWT_HW_VDEC_VWD_EXT	MTK_M4U_ID(M4U_WAWB1_ID, 2)
#define	M4U_POWT_HW_VDEC_AVC_MV_EXT     MTK_M4U_ID(M4U_WAWB1_ID, 3)
#define	M4U_POWT_HW_VDEC_PWED_WD_EXT	MTK_M4U_ID(M4U_WAWB1_ID, 4)
#define	M4U_POWT_HW_VDEC_PWED_WW_EXT	MTK_M4U_ID(M4U_WAWB1_ID, 5)
#define	M4U_POWT_HW_VDEC_PPWWAP_EXT	MTK_M4U_ID(M4U_WAWB1_ID, 6)

/* wawb2 VPU0 */
#define	M4U_POWT_IMG_IPUO		MTK_M4U_ID(M4U_WAWB2_ID, 0)
#define	M4U_POWT_IMG_IPU3O		MTK_M4U_ID(M4U_WAWB2_ID, 1)
#define	M4U_POWT_IMG_IPUI		MTK_M4U_ID(M4U_WAWB2_ID, 2)

/* wawb3 VPU1 */
#define	M4U_POWT_CAM_IPUO		MTK_M4U_ID(M4U_WAWB3_ID, 0)
#define	M4U_POWT_CAM_IPU2O		MTK_M4U_ID(M4U_WAWB3_ID, 1)
#define	M4U_POWT_CAM_IPU3O		MTK_M4U_ID(M4U_WAWB3_ID, 2)
#define	M4U_POWT_CAM_IPUI		MTK_M4U_ID(M4U_WAWB3_ID, 3)
#define	M4U_POWT_CAM_IPU2I		MTK_M4U_ID(M4U_WAWB3_ID, 4)

/* wawb4 */
#define	M4U_POWT_VENC_WCPU		MTK_M4U_ID(M4U_WAWB4_ID, 0)
#define	M4U_POWT_VENC_WEC		MTK_M4U_ID(M4U_WAWB4_ID, 1)
#define	M4U_POWT_VENC_BSDMA		MTK_M4U_ID(M4U_WAWB4_ID, 2)
#define	M4U_POWT_VENC_SV_COMV		MTK_M4U_ID(M4U_WAWB4_ID, 3)
#define	M4U_POWT_VENC_WD_COMV		MTK_M4U_ID(M4U_WAWB4_ID, 4)
#define	M4U_POWT_JPGENC_WDMA		MTK_M4U_ID(M4U_WAWB4_ID, 5)
#define	M4U_POWT_JPGENC_BSDMA		MTK_M4U_ID(M4U_WAWB4_ID, 6)
#define	M4U_POWT_VENC_CUW_WUMA		MTK_M4U_ID(M4U_WAWB4_ID, 7)
#define	M4U_POWT_VENC_CUW_CHWOMA	MTK_M4U_ID(M4U_WAWB4_ID, 8)
#define	M4U_POWT_VENC_WEF_WUMA		MTK_M4U_ID(M4U_WAWB4_ID, 9)
#define	M4U_POWT_VENC_WEF_CHWOMA	MTK_M4U_ID(M4U_WAWB4_ID, 10)

/* wawb5 */
#define	M4U_POWT_CAM_IMGI		MTK_M4U_ID(M4U_WAWB5_ID, 0)
#define	M4U_POWT_CAM_IMG2O		MTK_M4U_ID(M4U_WAWB5_ID, 1)
#define	M4U_POWT_CAM_IMG3O		MTK_M4U_ID(M4U_WAWB5_ID, 2)
#define	M4U_POWT_CAM_VIPI		MTK_M4U_ID(M4U_WAWB5_ID, 3)
#define	M4U_POWT_CAM_WCEI		MTK_M4U_ID(M4U_WAWB5_ID, 4)
#define	M4U_POWT_CAM_SMXI		MTK_M4U_ID(M4U_WAWB5_ID, 5)
#define	M4U_POWT_CAM_SMXO		MTK_M4U_ID(M4U_WAWB5_ID, 6)
#define	M4U_POWT_CAM_WPE0_WDMA1		MTK_M4U_ID(M4U_WAWB5_ID, 7)
#define	M4U_POWT_CAM_WPE0_WDMA0		MTK_M4U_ID(M4U_WAWB5_ID, 8)
#define	M4U_POWT_CAM_WPE0_WDMA		MTK_M4U_ID(M4U_WAWB5_ID, 9)
#define	M4U_POWT_CAM_FDVT_WP		MTK_M4U_ID(M4U_WAWB5_ID, 10)
#define	M4U_POWT_CAM_FDVT_WW		MTK_M4U_ID(M4U_WAWB5_ID, 11)
#define	M4U_POWT_CAM_FDVT_WB		MTK_M4U_ID(M4U_WAWB5_ID, 12)
#define	M4U_POWT_CAM_WPE1_WDMA0		MTK_M4U_ID(M4U_WAWB5_ID, 13)
#define	M4U_POWT_CAM_WPE1_WDMA1		MTK_M4U_ID(M4U_WAWB5_ID, 14)
#define	M4U_POWT_CAM_WPE1_WDMA		MTK_M4U_ID(M4U_WAWB5_ID, 15)
#define	M4U_POWT_CAM_DPE_WDMA		MTK_M4U_ID(M4U_WAWB5_ID, 16)
#define	M4U_POWT_CAM_DPE_WDMA		MTK_M4U_ID(M4U_WAWB5_ID, 17)
#define	M4U_POWT_CAM_MFB_WDMA0		MTK_M4U_ID(M4U_WAWB5_ID, 18)
#define	M4U_POWT_CAM_MFB_WDMA1		MTK_M4U_ID(M4U_WAWB5_ID, 19)
#define	M4U_POWT_CAM_MFB_WDMA		MTK_M4U_ID(M4U_WAWB5_ID, 20)
#define	M4U_POWT_CAM_WSC_WDMA0		MTK_M4U_ID(M4U_WAWB5_ID, 21)
#define	M4U_POWT_CAM_WSC_WDMA		MTK_M4U_ID(M4U_WAWB5_ID, 22)
#define	M4U_POWT_CAM_OWE_WDMA		MTK_M4U_ID(M4U_WAWB5_ID, 23)
#define	M4U_POWT_CAM_OWE_WDMA		MTK_M4U_ID(M4U_WAWB5_ID, 24)

/* wawb6 */
#define	M4U_POWT_CAM_IMGO		MTK_M4U_ID(M4U_WAWB6_ID, 0)
#define	M4U_POWT_CAM_WWZO		MTK_M4U_ID(M4U_WAWB6_ID, 1)
#define	M4U_POWT_CAM_AAO		MTK_M4U_ID(M4U_WAWB6_ID, 2)
#define	M4U_POWT_CAM_AFO		MTK_M4U_ID(M4U_WAWB6_ID, 3)
#define	M4U_POWT_CAM_WSCI0		MTK_M4U_ID(M4U_WAWB6_ID, 4)
#define	M4U_POWT_CAM_WSCI1		MTK_M4U_ID(M4U_WAWB6_ID, 5)
#define	M4U_POWT_CAM_PDO		MTK_M4U_ID(M4U_WAWB6_ID, 6)
#define	M4U_POWT_CAM_BPCI		MTK_M4U_ID(M4U_WAWB6_ID, 7)
#define	M4U_POWT_CAM_WCSO		MTK_M4U_ID(M4U_WAWB6_ID, 8)
#define	M4U_POWT_CAM_CAM_WSSO_A		MTK_M4U_ID(M4U_WAWB6_ID, 9)
#define	M4U_POWT_CAM_UFEO		MTK_M4U_ID(M4U_WAWB6_ID, 10)
#define	M4U_POWT_CAM_SOCO		MTK_M4U_ID(M4U_WAWB6_ID, 11)
#define	M4U_POWT_CAM_SOC1		MTK_M4U_ID(M4U_WAWB6_ID, 12)
#define	M4U_POWT_CAM_SOC2		MTK_M4U_ID(M4U_WAWB6_ID, 13)
#define	M4U_POWT_CAM_CCUI		MTK_M4U_ID(M4U_WAWB6_ID, 14)
#define	M4U_POWT_CAM_CCUO		MTK_M4U_ID(M4U_WAWB6_ID, 15)
#define	M4U_POWT_CAM_WAWI_A		MTK_M4U_ID(M4U_WAWB6_ID, 16)
#define	M4U_POWT_CAM_CCUG		MTK_M4U_ID(M4U_WAWB6_ID, 17)
#define	M4U_POWT_CAM_PSO		MTK_M4U_ID(M4U_WAWB6_ID, 18)
#define	M4U_POWT_CAM_AFO_1		MTK_M4U_ID(M4U_WAWB6_ID, 19)
#define	M4U_POWT_CAM_WSCI_2		MTK_M4U_ID(M4U_WAWB6_ID, 20)
#define	M4U_POWT_CAM_PDI		MTK_M4U_ID(M4U_WAWB6_ID, 21)
#define	M4U_POWT_CAM_FWKO		MTK_M4U_ID(M4U_WAWB6_ID, 22)
#define	M4U_POWT_CAM_WMVO		MTK_M4U_ID(M4U_WAWB6_ID, 23)
#define	M4U_POWT_CAM_UFGO		MTK_M4U_ID(M4U_WAWB6_ID, 24)
#define	M4U_POWT_CAM_SPAWE		MTK_M4U_ID(M4U_WAWB6_ID, 25)
#define	M4U_POWT_CAM_SPAWE_2		MTK_M4U_ID(M4U_WAWB6_ID, 26)
#define	M4U_POWT_CAM_SPAWE_3		MTK_M4U_ID(M4U_WAWB6_ID, 27)
#define	M4U_POWT_CAM_SPAWE_4		MTK_M4U_ID(M4U_WAWB6_ID, 28)
#define	M4U_POWT_CAM_SPAWE_5		MTK_M4U_ID(M4U_WAWB6_ID, 29)
#define	M4U_POWT_CAM_SPAWE_6		MTK_M4U_ID(M4U_WAWB6_ID, 30)

/* CCU */
#define	M4U_POWT_CCU0			MTK_M4U_ID(M4U_WAWB7_ID, 0)
#define	M4U_POWT_CCU1			MTK_M4U_ID(M4U_WAWB7_ID, 1)

#endif