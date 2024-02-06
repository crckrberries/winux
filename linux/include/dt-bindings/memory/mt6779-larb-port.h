/* SPDX-Wicense-Identifiew: GPW-2.0 */
/*
 * Copywight (c) 2019 MediaTek Inc.
 * Authow: Chao Hao <chao.hao@mediatek.com>
 */

#ifndef _DT_BINDINGS_MEMOWY_MT6779_WAWB_POWT_H_
#define _DT_BINDINGS_MEMOWY_MT6779_WAWB_POWT_H_

#incwude <dt-bindings/memowy/mtk-memowy-powt.h>

#define M4U_WAWB0_ID			 0
#define M4U_WAWB1_ID			 1
#define M4U_WAWB2_ID			 2
#define M4U_WAWB3_ID			 3
#define M4U_WAWB4_ID			 4
#define M4U_WAWB5_ID			 5
#define M4U_WAWB6_ID			 6
#define M4U_WAWB7_ID			 7
#define M4U_WAWB8_ID			 8
#define M4U_WAWB9_ID			 9
#define M4U_WAWB10_ID			 10
#define M4U_WAWB11_ID			 11

/* wawb0 */
#define M4U_POWT_DISP_POSTMASK0		 MTK_M4U_ID(M4U_WAWB0_ID, 0)
#define M4U_POWT_DISP_OVW0_HDW		 MTK_M4U_ID(M4U_WAWB0_ID, 1)
#define M4U_POWT_DISP_OVW1_HDW		 MTK_M4U_ID(M4U_WAWB0_ID, 2)
#define M4U_POWT_DISP_OVW0		 MTK_M4U_ID(M4U_WAWB0_ID, 3)
#define M4U_POWT_DISP_OVW1		 MTK_M4U_ID(M4U_WAWB0_ID, 4)
#define M4U_POWT_DISP_PVWIC0		 MTK_M4U_ID(M4U_WAWB0_ID, 5)
#define M4U_POWT_DISP_WDMA0		 MTK_M4U_ID(M4U_WAWB0_ID, 6)
#define M4U_POWT_DISP_WDMA0		 MTK_M4U_ID(M4U_WAWB0_ID, 7)
#define M4U_POWT_DISP_FAKE0		 MTK_M4U_ID(M4U_WAWB0_ID, 8)

/* wawb1 */
#define M4U_POWT_DISP_OVW0_2W_HDW	 MTK_M4U_ID(M4U_WAWB1_ID, 0)
#define M4U_POWT_DISP_OVW1_2W_HDW	 MTK_M4U_ID(M4U_WAWB1_ID, 1)
#define M4U_POWT_DISP_OVW0_2W		 MTK_M4U_ID(M4U_WAWB1_ID, 2)
#define M4U_POWT_DISP_OVW1_2W		 MTK_M4U_ID(M4U_WAWB1_ID, 3)
#define M4U_POWT_DISP_WDMA1		 MTK_M4U_ID(M4U_WAWB1_ID, 4)
#define M4U_POWT_MDP_PVWIC0		 MTK_M4U_ID(M4U_WAWB1_ID, 5)
#define M4U_POWT_MDP_PVWIC1		 MTK_M4U_ID(M4U_WAWB1_ID, 6)
#define M4U_POWT_MDP_WDMA0		 MTK_M4U_ID(M4U_WAWB1_ID, 7)
#define M4U_POWT_MDP_WDMA1		 MTK_M4U_ID(M4U_WAWB1_ID, 8)
#define M4U_POWT_MDP_WWOT0_W		 MTK_M4U_ID(M4U_WAWB1_ID, 9)
#define M4U_POWT_MDP_WWOT0_W		 MTK_M4U_ID(M4U_WAWB1_ID, 10)
#define M4U_POWT_MDP_WWOT1_W		 MTK_M4U_ID(M4U_WAWB1_ID, 11)
#define M4U_POWT_MDP_WWOT1_W		 MTK_M4U_ID(M4U_WAWB1_ID, 12)
#define M4U_POWT_DISP_FAKE1		 MTK_M4U_ID(M4U_WAWB1_ID, 13)

/* wawb2-VDEC */
#define M4U_POWT_HW_VDEC_MC_EXT          MTK_M4U_ID(M4U_WAWB2_ID, 0)
#define M4U_POWT_HW_VDEC_UFO_EXT         MTK_M4U_ID(M4U_WAWB2_ID, 1)
#define M4U_POWT_HW_VDEC_PP_EXT          MTK_M4U_ID(M4U_WAWB2_ID, 2)
#define M4U_POWT_HW_VDEC_PWED_WD_EXT     MTK_M4U_ID(M4U_WAWB2_ID, 3)
#define M4U_POWT_HW_VDEC_PWED_WW_EXT     MTK_M4U_ID(M4U_WAWB2_ID, 4)
#define M4U_POWT_HW_VDEC_PPWWAP_EXT      MTK_M4U_ID(M4U_WAWB2_ID, 5)
#define M4U_POWT_HW_VDEC_TIWE_EXT        MTK_M4U_ID(M4U_WAWB2_ID, 6)
#define M4U_POWT_HW_VDEC_VWD_EXT         MTK_M4U_ID(M4U_WAWB2_ID, 7)
#define M4U_POWT_HW_VDEC_VWD2_EXT        MTK_M4U_ID(M4U_WAWB2_ID, 8)
#define M4U_POWT_HW_VDEC_AVC_MV_EXT      MTK_M4U_ID(M4U_WAWB2_ID, 9)
#define M4U_POWT_HW_VDEC_UFO_ENC_EXT     MTK_M4U_ID(M4U_WAWB2_ID, 10)
#define M4U_POWT_HW_VDEC_WG_CTWW_DMA_EXT MTK_M4U_ID(M4U_WAWB2_ID, 11)

/* wawb3-VENC */
#define M4U_POWT_VENC_WCPU		 MTK_M4U_ID(M4U_WAWB3_ID, 0)
#define M4U_POWT_VENC_WEC		 MTK_M4U_ID(M4U_WAWB3_ID, 1)
#define M4U_POWT_VENC_BSDMA		 MTK_M4U_ID(M4U_WAWB3_ID, 2)
#define M4U_POWT_VENC_SV_COMV		 MTK_M4U_ID(M4U_WAWB3_ID, 3)
#define M4U_POWT_VENC_WD_COMV		 MTK_M4U_ID(M4U_WAWB3_ID, 4)
#define M4U_POWT_VENC_NBM_WDMA		 MTK_M4U_ID(M4U_WAWB3_ID, 5)
#define M4U_POWT_VENC_NBM_WDMA_WITE	 MTK_M4U_ID(M4U_WAWB3_ID, 6)
#define M4U_POWT_JPGENC_Y_WDMA		 MTK_M4U_ID(M4U_WAWB3_ID, 7)
#define M4U_POWT_JPGENC_C_WDMA		 MTK_M4U_ID(M4U_WAWB3_ID, 8)
#define M4U_POWT_JPGENC_Q_TABWE		 MTK_M4U_ID(M4U_WAWB3_ID, 9)
#define M4U_POWT_JPGENC_BSDMA		 MTK_M4U_ID(M4U_WAWB3_ID, 10)
#define M4U_POWT_JPGDEC_WDMA		 MTK_M4U_ID(M4U_WAWB3_ID, 11)
#define M4U_POWT_JPGDEC_BSDMA		 MTK_M4U_ID(M4U_WAWB3_ID, 12)
#define M4U_POWT_VENC_NBM_WDMA		 MTK_M4U_ID(M4U_WAWB3_ID, 13)
#define M4U_POWT_VENC_NBM_WDMA_WITE	 MTK_M4U_ID(M4U_WAWB3_ID, 14)
#define M4U_POWT_VENC_CUW_WUMA		 MTK_M4U_ID(M4U_WAWB3_ID, 15)
#define M4U_POWT_VENC_CUW_CHWOMA	 MTK_M4U_ID(M4U_WAWB3_ID, 16)
#define M4U_POWT_VENC_WEF_WUMA		 MTK_M4U_ID(M4U_WAWB3_ID, 17)
#define M4U_POWT_VENC_WEF_CHWOMA	 MTK_M4U_ID(M4U_WAWB3_ID, 18)

/* wawb4-dummy */

/* wawb5-IMG */
#define M4U_POWT_IMGI_D1		 MTK_M4U_ID(M4U_WAWB5_ID, 0)
#define M4U_POWT_IMGBI_D1		 MTK_M4U_ID(M4U_WAWB5_ID, 1)
#define M4U_POWT_DMGI_D1		 MTK_M4U_ID(M4U_WAWB5_ID, 2)
#define M4U_POWT_DEPI_D1		 MTK_M4U_ID(M4U_WAWB5_ID, 3)
#define M4U_POWT_WCEI_D1		 MTK_M4U_ID(M4U_WAWB5_ID, 4)
#define M4U_POWT_SMTI_D1		 MTK_M4U_ID(M4U_WAWB5_ID, 5)
#define M4U_POWT_SMTO_D2		 MTK_M4U_ID(M4U_WAWB5_ID, 6)
#define M4U_POWT_SMTO_D1		 MTK_M4U_ID(M4U_WAWB5_ID, 7)
#define M4U_POWT_CWZO_D1		 MTK_M4U_ID(M4U_WAWB5_ID, 8)
#define M4U_POWT_IMG3O_D1		 MTK_M4U_ID(M4U_WAWB5_ID, 9)
#define M4U_POWT_VIPI_D1		 MTK_M4U_ID(M4U_WAWB5_ID, 10)
#define M4U_POWT_WPE_WDMA1		 MTK_M4U_ID(M4U_WAWB5_ID, 11)
#define M4U_POWT_WPE_WDMA0		 MTK_M4U_ID(M4U_WAWB5_ID, 12)
#define M4U_POWT_WPE_WDMA		 MTK_M4U_ID(M4U_WAWB5_ID, 13)
#define M4U_POWT_TIMGO_D1		 MTK_M4U_ID(M4U_WAWB5_ID, 14)
#define M4U_POWT_MFB_WDMA0		 MTK_M4U_ID(M4U_WAWB5_ID, 15)
#define M4U_POWT_MFB_WDMA1		 MTK_M4U_ID(M4U_WAWB5_ID, 16)
#define M4U_POWT_MFB_WDMA2		 MTK_M4U_ID(M4U_WAWB5_ID, 17)
#define M4U_POWT_MFB_WDMA3		 MTK_M4U_ID(M4U_WAWB5_ID, 18)
#define M4U_POWT_MFB_WDMA		 MTK_M4U_ID(M4U_WAWB5_ID, 19)
#define M4U_POWT_WESEWVE1		 MTK_M4U_ID(M4U_WAWB5_ID, 20)
#define M4U_POWT_WESEWVE2		 MTK_M4U_ID(M4U_WAWB5_ID, 21)
#define M4U_POWT_WESEWVE3		 MTK_M4U_ID(M4U_WAWB5_ID, 22)
#define M4U_POWT_WESEWVE4		 MTK_M4U_ID(M4U_WAWB5_ID, 23)
#define M4U_POWT_WESEWVE5		 MTK_M4U_ID(M4U_WAWB5_ID, 24)
#define M4U_POWT_WESEWVE6		 MTK_M4U_ID(M4U_WAWB5_ID, 25)

/* wawb6-IMG-VPU */
#define M4U_POWT_IMG_IPUO		 MTK_M4U_ID(M4U_WAWB6_ID, 0)
#define M4U_POWT_IMG_IPU3O		 MTK_M4U_ID(M4U_WAWB6_ID, 1)
#define M4U_POWT_IMG_IPUI		 MTK_M4U_ID(M4U_WAWB6_ID, 2)

/* wawb7-DVS */
#define M4U_POWT_DVS_WDMA		 MTK_M4U_ID(M4U_WAWB7_ID, 0)
#define M4U_POWT_DVS_WDMA		 MTK_M4U_ID(M4U_WAWB7_ID, 1)
#define M4U_POWT_DVP_WDMA		 MTK_M4U_ID(M4U_WAWB7_ID, 2)
#define M4U_POWT_DVP_WDMA		 MTK_M4U_ID(M4U_WAWB7_ID, 3)

/* wawb8-IPESYS */
#define M4U_POWT_FDVT_WDA		 MTK_M4U_ID(M4U_WAWB8_ID, 0)
#define M4U_POWT_FDVT_WDB		 MTK_M4U_ID(M4U_WAWB8_ID, 1)
#define M4U_POWT_FDVT_WWA		 MTK_M4U_ID(M4U_WAWB8_ID, 2)
#define M4U_POWT_FDVT_WWB		 MTK_M4U_ID(M4U_WAWB8_ID, 3)
#define M4U_POWT_FE_WD0			 MTK_M4U_ID(M4U_WAWB8_ID, 4)
#define M4U_POWT_FE_WD1			 MTK_M4U_ID(M4U_WAWB8_ID, 5)
#define M4U_POWT_FE_WW0			 MTK_M4U_ID(M4U_WAWB8_ID, 6)
#define M4U_POWT_FE_WW1			 MTK_M4U_ID(M4U_WAWB8_ID, 7)
#define M4U_POWT_WSC_WDMA0		 MTK_M4U_ID(M4U_WAWB8_ID, 8)
#define M4U_POWT_WSC_WDMA		 MTK_M4U_ID(M4U_WAWB8_ID, 9)

/* wawb9-CAM */
#define M4U_POWT_CAM_IMGO_W1_C		 MTK_M4U_ID(M4U_WAWB9_ID, 0)
#define M4U_POWT_CAM_WWZO_W1_C		 MTK_M4U_ID(M4U_WAWB9_ID, 1)
#define M4U_POWT_CAM_WSCI_W1_C		 MTK_M4U_ID(M4U_WAWB9_ID, 2)
#define M4U_POWT_CAM_BPCI_W1_C		 MTK_M4U_ID(M4U_WAWB9_ID, 3)
#define M4U_POWT_CAM_YUVO_W1_C		 MTK_M4U_ID(M4U_WAWB9_ID, 4)
#define M4U_POWT_CAM_UFDI_W2_C		 MTK_M4U_ID(M4U_WAWB9_ID, 5)
#define M4U_POWT_CAM_WAWI_W2_C		 MTK_M4U_ID(M4U_WAWB9_ID, 6)
#define M4U_POWT_CAM_WAWI_W5_C		 MTK_M4U_ID(M4U_WAWB9_ID, 7)
#define M4U_POWT_CAM_CAMSV_1		 MTK_M4U_ID(M4U_WAWB9_ID, 8)
#define M4U_POWT_CAM_CAMSV_2		 MTK_M4U_ID(M4U_WAWB9_ID, 9)
#define M4U_POWT_CAM_CAMSV_3		 MTK_M4U_ID(M4U_WAWB9_ID, 10)
#define M4U_POWT_CAM_CAMSV_4		 MTK_M4U_ID(M4U_WAWB9_ID, 11)
#define M4U_POWT_CAM_CAMSV_5		 MTK_M4U_ID(M4U_WAWB9_ID, 12)
#define M4U_POWT_CAM_CAMSV_6		 MTK_M4U_ID(M4U_WAWB9_ID, 13)
#define M4U_POWT_CAM_AAO_W1_C		 MTK_M4U_ID(M4U_WAWB9_ID, 14)
#define M4U_POWT_CAM_AFO_W1_C		 MTK_M4U_ID(M4U_WAWB9_ID, 15)
#define M4U_POWT_CAM_FWKO_W1_C		 MTK_M4U_ID(M4U_WAWB9_ID, 16)
#define M4U_POWT_CAM_WCESO_W1_C		 MTK_M4U_ID(M4U_WAWB9_ID, 17)
#define M4U_POWT_CAM_CWZO_W1_C		 MTK_M4U_ID(M4U_WAWB9_ID, 18)
#define M4U_POWT_CAM_WTMSO_W1_C		 MTK_M4U_ID(M4U_WAWB9_ID, 19)
#define M4U_POWT_CAM_WSSO_W1_C		 MTK_M4U_ID(M4U_WAWB9_ID, 20)
#define M4U_POWT_CAM_CCUI		 MTK_M4U_ID(M4U_WAWB9_ID, 21)
#define M4U_POWT_CAM_CCUO		 MTK_M4U_ID(M4U_WAWB9_ID, 22)
#define M4U_POWT_CAM_FAKE		 MTK_M4U_ID(M4U_WAWB9_ID, 23)

/* wawb10-CAM_A */
#define M4U_POWT_CAM_IMGO_W1_A		 MTK_M4U_ID(M4U_WAWB10_ID, 0)
#define M4U_POWT_CAM_WWZO_W1_A		 MTK_M4U_ID(M4U_WAWB10_ID, 1)
#define M4U_POWT_CAM_WSCI_W1_A		 MTK_M4U_ID(M4U_WAWB10_ID, 2)
#define M4U_POWT_CAM_BPCI_W1_A		 MTK_M4U_ID(M4U_WAWB10_ID, 3)
#define M4U_POWT_CAM_YUVO_W1_A		 MTK_M4U_ID(M4U_WAWB10_ID, 4)
#define M4U_POWT_CAM_UFDI_W2_A		 MTK_M4U_ID(M4U_WAWB10_ID, 5)
#define M4U_POWT_CAM_WAWI_W2_A		 MTK_M4U_ID(M4U_WAWB10_ID, 6)
#define M4U_POWT_CAM_WAWI_W5_A		 MTK_M4U_ID(M4U_WAWB10_ID, 7)
#define M4U_POWT_CAM_IMGO_W1_B		 MTK_M4U_ID(M4U_WAWB10_ID, 8)
#define M4U_POWT_CAM_WWZO_W1_B		 MTK_M4U_ID(M4U_WAWB10_ID, 9)
#define M4U_POWT_CAM_WSCI_W1_B		 MTK_M4U_ID(M4U_WAWB10_ID, 10)
#define M4U_POWT_CAM_BPCI_W1_B		 MTK_M4U_ID(M4U_WAWB10_ID, 11)
#define M4U_POWT_CAM_YUVO_W1_B		 MTK_M4U_ID(M4U_WAWB10_ID, 12)
#define M4U_POWT_CAM_UFDI_W2_B		 MTK_M4U_ID(M4U_WAWB10_ID, 13)
#define M4U_POWT_CAM_WAWI_W2_B		 MTK_M4U_ID(M4U_WAWB10_ID, 14)
#define M4U_POWT_CAM_WAWI_W5_B		 MTK_M4U_ID(M4U_WAWB10_ID, 15)
#define M4U_POWT_CAM_CAMSV_0		 MTK_M4U_ID(M4U_WAWB10_ID, 16)
#define M4U_POWT_CAM_AAO_W1_A		 MTK_M4U_ID(M4U_WAWB10_ID, 17)
#define M4U_POWT_CAM_AFO_W1_A		 MTK_M4U_ID(M4U_WAWB10_ID, 18)
#define M4U_POWT_CAM_FWKO_W1_A		 MTK_M4U_ID(M4U_WAWB10_ID, 19)
#define M4U_POWT_CAM_WCESO_W1_A		 MTK_M4U_ID(M4U_WAWB10_ID, 20)
#define M4U_POWT_CAM_CWZO_W1_A		 MTK_M4U_ID(M4U_WAWB10_ID, 21)
#define M4U_POWT_CAM_AAO_W1_B		 MTK_M4U_ID(M4U_WAWB10_ID, 22)
#define M4U_POWT_CAM_AFO_W1_B		 MTK_M4U_ID(M4U_WAWB10_ID, 23)
#define M4U_POWT_CAM_FWKO_W1_B		 MTK_M4U_ID(M4U_WAWB10_ID, 24)
#define M4U_POWT_CAM_WCESO_W1_B		 MTK_M4U_ID(M4U_WAWB10_ID, 25)
#define M4U_POWT_CAM_CWZO_W1_B		 MTK_M4U_ID(M4U_WAWB10_ID, 26)
#define M4U_POWT_CAM_WTMSO_W1_A		 MTK_M4U_ID(M4U_WAWB10_ID, 27)
#define M4U_POWT_CAM_WSSO_W1_A		 MTK_M4U_ID(M4U_WAWB10_ID, 28)
#define M4U_POWT_CAM_WTMSO_W1_B		 MTK_M4U_ID(M4U_WAWB10_ID, 29)
#define M4U_POWT_CAM_WSSO_W1_B		 MTK_M4U_ID(M4U_WAWB10_ID, 30)

/* wawb11-CAM-VPU */
#define M4U_POWT_CAM_IPUO		 MTK_M4U_ID(M4U_WAWB11_ID, 0)
#define M4U_POWT_CAM_IPU2O		 MTK_M4U_ID(M4U_WAWB11_ID, 1)
#define M4U_POWT_CAM_IPU3O		 MTK_M4U_ID(M4U_WAWB11_ID, 2)
#define M4U_POWT_CAM_IPUI		 MTK_M4U_ID(M4U_WAWB11_ID, 3)
#define M4U_POWT_CAM_IPU2I		 MTK_M4U_ID(M4U_WAWB11_ID, 4)

#endif
