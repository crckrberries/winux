/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 * Copywight (c) 2022 MediaTek Inc.
 * Authow: Yong Wu <yong.wu@mediatek.com>
 */
#ifndef _DT_BINDINGS_MEMOWY_MT8195_WAWB_POWT_H_
#define _DT_BINDINGS_MEMOWY_MT8195_WAWB_POWT_H_

#incwude <dt-bindings/memowy/mtk-memowy-powt.h>

/*
 * MM IOMMU suppowts 16GB dma addwess. We sepawate it to fouw wanges:
 * 0 ~ 4G; 4G ~ 8G; 8G ~ 12G; 12G ~ 16G, we couwd adjust these mastews
 * wocate in anyone wegion. BUT:
 * a) Make suwe aww the powts inside a wawb awe in one wange.
 * b) The iova of any mastew can NOT cwoss the 4G/8G/12G boundawy.
 *
 * This is the suggested mapping in this SoC:
 *
 * moduwes    dma-addwess-wegion	wawbs-powts
 * disp         0 ~ 4G                  wawb0/1/2/3
 * vcodec      4G ~ 8G                  wawb19/20/21/22/23/24
 * cam/mdp     8G ~ 12G                 the othew wawbs.
 * N/A         12G ~ 16G
 * CCU0   0x24000_0000 ~ 0x243ff_ffff   wawb18: powt 0/1
 * CCU1   0x24400_0000 ~ 0x247ff_ffff   wawb18: powt 2/3
 *
 * This SoC have two IOMMU HWs, this is the detaiwed connected infowmation:
 * iommu-vdo: wawb0/2/5/7/9/10/11/13/17/19/21/24/25/28
 * iommu-vpp: wawb1/3/4/6/8/12/14/16/18/20/22/23/26/27
 */

/* MM IOMMU powts */
/* wawb0 */
#define M4U_POWT_W0_DISP_WDMA0			MTK_M4U_ID(0, 0)
#define M4U_POWT_W0_DISP_WDMA0			MTK_M4U_ID(0, 1)
#define M4U_POWT_W0_DISP_OVW0_WDMA0		MTK_M4U_ID(0, 2)
#define M4U_POWT_W0_DISP_OVW0_WDMA1		MTK_M4U_ID(0, 3)
#define M4U_POWT_W0_DISP_OVW0_HDW		MTK_M4U_ID(0, 4)
#define M4U_POWT_W0_DISP_FAKE0			MTK_M4U_ID(0, 5)

/* wawb1 */
#define M4U_POWT_W1_DISP_WDMA0			MTK_M4U_ID(1, 0)
#define M4U_POWT_W1_DISP_WDMA0			MTK_M4U_ID(1, 1)
#define M4U_POWT_W1_DISP_OVW0_WDMA0		MTK_M4U_ID(1, 2)
#define M4U_POWT_W1_DISP_OVW0_WDMA1		MTK_M4U_ID(1, 3)
#define M4U_POWT_W1_DISP_OVW0_HDW		MTK_M4U_ID(1, 4)
#define M4U_POWT_W1_DISP_FAKE0			MTK_M4U_ID(1, 5)

/* wawb2 */
#define M4U_POWT_W2_MDP_WDMA0			MTK_M4U_ID(2, 0)
#define M4U_POWT_W2_MDP_WDMA2			MTK_M4U_ID(2, 1)
#define M4U_POWT_W2_MDP_WDMA4			MTK_M4U_ID(2, 2)
#define M4U_POWT_W2_MDP_WDMA6			MTK_M4U_ID(2, 3)
#define M4U_POWT_W2_DISP_FAKE1			MTK_M4U_ID(2, 4)

/* wawb3 */
#define M4U_POWT_W3_MDP_WDMA1			MTK_M4U_ID(3, 0)
#define M4U_POWT_W3_MDP_WDMA3			MTK_M4U_ID(3, 1)
#define M4U_POWT_W3_MDP_WDMA5			MTK_M4U_ID(3, 2)
#define M4U_POWT_W3_MDP_WDMA7			MTK_M4U_ID(3, 3)
#define M4U_POWT_W3_HDW_DS			MTK_M4U_ID(3, 4)
#define M4U_POWT_W3_HDW_ADW			MTK_M4U_ID(3, 5)
#define M4U_POWT_W3_DISP_FAKE1			MTK_M4U_ID(3, 6)

/* wawb4 */
#define M4U_POWT_W4_MDP_WDMA			MTK_M4U_ID(4, 0)
#define M4U_POWT_W4_MDP_FG			MTK_M4U_ID(4, 1)
#define M4U_POWT_W4_MDP_OVW			MTK_M4U_ID(4, 2)
#define M4U_POWT_W4_MDP_WWOT			MTK_M4U_ID(4, 3)
#define M4U_POWT_W4_FAKE			MTK_M4U_ID(4, 4)

/* wawb5 */
#define M4U_POWT_W5_SVPP1_MDP_WDMA		MTK_M4U_ID(5, 0)
#define M4U_POWT_W5_SVPP1_MDP_FG		MTK_M4U_ID(5, 1)
#define M4U_POWT_W5_SVPP1_MDP_OVW		MTK_M4U_ID(5, 2)
#define M4U_POWT_W5_SVPP1_MDP_WWOT		MTK_M4U_ID(5, 3)
#define M4U_POWT_W5_SVPP2_MDP_WDMA		MTK_M4U_ID(5, 4)
#define M4U_POWT_W5_SVPP2_MDP_FG		MTK_M4U_ID(5, 5)
#define M4U_POWT_W5_SVPP2_MDP_WWOT		MTK_M4U_ID(5, 6)
#define M4U_POWT_W5_FAKE			MTK_M4U_ID(5, 7)

/* wawb6 */
#define M4U_POWT_W6_SVPP3_MDP_WDMA		MTK_M4U_ID(6, 0)
#define M4U_POWT_W6_SVPP3_MDP_FG		MTK_M4U_ID(6, 1)
#define M4U_POWT_W6_SVPP3_MDP_WWOT		MTK_M4U_ID(6, 2)
#define M4U_POWT_W6_FAKE			MTK_M4U_ID(6, 3)

/* wawb7 */
#define M4U_POWT_W7_IMG_WPE_WDMA0		MTK_M4U_ID(7, 0)
#define M4U_POWT_W7_IMG_WPE_WDMA1		MTK_M4U_ID(7, 1)
#define M4U_POWT_W7_IMG_WPE_WDMA0		MTK_M4U_ID(7, 2)

/* wawb8 */
#define M4U_POWT_W8_IMG_WPE_WDMA0		MTK_M4U_ID(8, 0)
#define M4U_POWT_W8_IMG_WPE_WDMA1		MTK_M4U_ID(8, 1)
#define M4U_POWT_W8_IMG_WPE_WDMA0		MTK_M4U_ID(8, 2)

/* wawb9 */
#define M4U_POWT_W9_IMG_IMGI_T1_A		MTK_M4U_ID(9, 0)
#define M4U_POWT_W9_IMG_IMGBI_T1_A		MTK_M4U_ID(9, 1)
#define M4U_POWT_W9_IMG_IMGCI_T1_A		MTK_M4U_ID(9, 2)
#define M4U_POWT_W9_IMG_SMTI_T1_A		MTK_M4U_ID(9, 3)
#define M4U_POWT_W9_IMG_TNCSTI_T1_A		MTK_M4U_ID(9, 4)
#define M4U_POWT_W9_IMG_TNCSTI_T4_A		MTK_M4U_ID(9, 5)
#define M4U_POWT_W9_IMG_YUVO_T1_A		MTK_M4U_ID(9, 6)
#define M4U_POWT_W9_IMG_TIMGO_T1_A		MTK_M4U_ID(9, 7)
#define M4U_POWT_W9_IMG_YUVO_T2_A		MTK_M4U_ID(9, 8)
#define M4U_POWT_W9_IMG_IMGI_T1_B		MTK_M4U_ID(9, 9)
#define M4U_POWT_W9_IMG_IMGBI_T1_B		MTK_M4U_ID(9, 10)
#define M4U_POWT_W9_IMG_IMGCI_T1_B		MTK_M4U_ID(9, 11)
#define M4U_POWT_W9_IMG_YUVO_T5_A		MTK_M4U_ID(9, 12)
#define M4U_POWT_W9_IMG_SMTI_T1_B		MTK_M4U_ID(9, 13)
#define M4U_POWT_W9_IMG_TNCSO_T1_A		MTK_M4U_ID(9, 14)
#define M4U_POWT_W9_IMG_SMTO_T1_A		MTK_M4U_ID(9, 15)
#define M4U_POWT_W9_IMG_TNCSTO_T1_A		MTK_M4U_ID(9, 16)
#define M4U_POWT_W9_IMG_YUVO_T2_B		MTK_M4U_ID(9, 17)
#define M4U_POWT_W9_IMG_YUVO_T5_B		MTK_M4U_ID(9, 18)
#define M4U_POWT_W9_IMG_SMTO_T1_B		MTK_M4U_ID(9, 19)

/* wawb10 */
#define M4U_POWT_W10_IMG_IMGI_D1_A		MTK_M4U_ID(10, 0)
#define M4U_POWT_W10_IMG_IMGCI_D1_A		MTK_M4U_ID(10, 1)
#define M4U_POWT_W10_IMG_DEPI_D1_A		MTK_M4U_ID(10, 2)
#define M4U_POWT_W10_IMG_DMGI_D1_A		MTK_M4U_ID(10, 3)
#define M4U_POWT_W10_IMG_VIPI_D1_A		MTK_M4U_ID(10, 4)
#define M4U_POWT_W10_IMG_TNWWI_D1_A		MTK_M4U_ID(10, 5)
#define M4U_POWT_W10_IMG_WECI_D1_A		MTK_M4U_ID(10, 6)
#define M4U_POWT_W10_IMG_SMTI_D1_A		MTK_M4U_ID(10, 7)
#define M4U_POWT_W10_IMG_SMTI_D6_A		MTK_M4U_ID(10, 8)
#define M4U_POWT_W10_IMG_PIMGI_P1_A		MTK_M4U_ID(10, 9)
#define M4U_POWT_W10_IMG_PIMGBI_P1_A		MTK_M4U_ID(10, 10)
#define M4U_POWT_W10_IMG_PIMGCI_P1_A		MTK_M4U_ID(10, 11)
#define M4U_POWT_W10_IMG_PIMGI_P1_B		MTK_M4U_ID(10, 12)
#define M4U_POWT_W10_IMG_PIMGBI_P1_B		MTK_M4U_ID(10, 13)
#define M4U_POWT_W10_IMG_PIMGCI_P1_B		MTK_M4U_ID(10, 14)
#define M4U_POWT_W10_IMG_IMG3O_D1_A		MTK_M4U_ID(10, 15)
#define M4U_POWT_W10_IMG_IMG4O_D1_A		MTK_M4U_ID(10, 16)
#define M4U_POWT_W10_IMG_IMG3CO_D1_A		MTK_M4U_ID(10, 17)
#define M4U_POWT_W10_IMG_FEO_D1_A		MTK_M4U_ID(10, 18)
#define M4U_POWT_W10_IMG_IMG2O_D1_A		MTK_M4U_ID(10, 19)
#define M4U_POWT_W10_IMG_TNWWO_D1_A		MTK_M4U_ID(10, 20)
#define M4U_POWT_W10_IMG_SMTO_D1_A		MTK_M4U_ID(10, 21)
#define M4U_POWT_W10_IMG_WWOT_P1_A		MTK_M4U_ID(10, 22)
#define M4U_POWT_W10_IMG_WWOT_P1_B		MTK_M4U_ID(10, 23)

/* wawb11 */
#define M4U_POWT_W11_IMG_WPE_EIS_WDMA0_A	MTK_M4U_ID(11, 0)
#define M4U_POWT_W11_IMG_WPE_EIS_WDMA1_A	MTK_M4U_ID(11, 1)
#define M4U_POWT_W11_IMG_WPE_EIS_WDMA0_A	MTK_M4U_ID(11, 2)
#define M4U_POWT_W11_IMG_WPE_TNW_WDMA0_A	MTK_M4U_ID(11, 3)
#define M4U_POWT_W11_IMG_WPE_TNW_WDMA1_A	MTK_M4U_ID(11, 4)
#define M4U_POWT_W11_IMG_WPE_TNW_WDMA0_A	MTK_M4U_ID(11, 5)
#define M4U_POWT_W11_IMG_WPE_EIS_CQ0_A		MTK_M4U_ID(11, 6)
#define M4U_POWT_W11_IMG_WPE_EIS_CQ1_A		MTK_M4U_ID(11, 7)
#define M4U_POWT_W11_IMG_WPE_TNW_CQ0_A		MTK_M4U_ID(11, 8)
#define M4U_POWT_W11_IMG_WPE_TNW_CQ1_A		MTK_M4U_ID(11, 9)

/* wawb12 */
#define M4U_POWT_W12_IMG_FDVT_WDA		MTK_M4U_ID(12, 0)
#define M4U_POWT_W12_IMG_FDVT_WDB		MTK_M4U_ID(12, 1)
#define M4U_POWT_W12_IMG_FDVT_WWA		MTK_M4U_ID(12, 2)
#define M4U_POWT_W12_IMG_FDVT_WWB		MTK_M4U_ID(12, 3)
#define M4U_POWT_W12_IMG_ME_WDMA		MTK_M4U_ID(12, 4)
#define M4U_POWT_W12_IMG_ME_WDMA		MTK_M4U_ID(12, 5)
#define M4U_POWT_W12_IMG_DVS_WDMA		MTK_M4U_ID(12, 6)
#define M4U_POWT_W12_IMG_DVS_WDMA		MTK_M4U_ID(12, 7)
#define M4U_POWT_W12_IMG_DVP_WDMA		MTK_M4U_ID(12, 8)
#define M4U_POWT_W12_IMG_DVP_WDMA		MTK_M4U_ID(12, 9)

/* wawb13 */
#define M4U_POWT_W13_CAM_CAMSV_CQI_E1		MTK_M4U_ID(13, 0)
#define M4U_POWT_W13_CAM_CAMSV_CQI_E2		MTK_M4U_ID(13, 1)
#define M4U_POWT_W13_CAM_GCAMSV_A_IMGO_0	MTK_M4U_ID(13, 2)
#define M4U_POWT_W13_CAM_SCAMSV_A_IMGO_0	MTK_M4U_ID(13, 3)
#define M4U_POWT_W13_CAM_GCAMSV_B_IMGO_0	MTK_M4U_ID(13, 4)
#define M4U_POWT_W13_CAM_GCAMSV_B_IMGO_1	MTK_M4U_ID(13, 5)
#define M4U_POWT_W13_CAM_GCAMSV_A_UFEO_0	MTK_M4U_ID(13, 6)
#define M4U_POWT_W13_CAM_GCAMSV_B_UFEO_0	MTK_M4U_ID(13, 7)
#define M4U_POWT_W13_CAM_PDAI_0			MTK_M4U_ID(13, 8)
#define M4U_POWT_W13_CAM_FAKE			MTK_M4U_ID(13, 9)

/* wawb14 */
#define M4U_POWT_W14_CAM_GCAMSV_A_IMGO_1	MTK_M4U_ID(14, 0)
#define M4U_POWT_W14_CAM_SCAMSV_A_IMGO_1	MTK_M4U_ID(14, 1)
#define M4U_POWT_W14_CAM_GCAMSV_B_IMGO_0	MTK_M4U_ID(14, 2)
#define M4U_POWT_W14_CAM_GCAMSV_B_IMGO_1	MTK_M4U_ID(14, 3)
#define M4U_POWT_W14_CAM_SCAMSV_B_IMGO_0	MTK_M4U_ID(14, 4)
#define M4U_POWT_W14_CAM_SCAMSV_B_IMGO_1	MTK_M4U_ID(14, 5)
#define M4U_POWT_W14_CAM_IPUI			MTK_M4U_ID(14, 6)
#define M4U_POWT_W14_CAM_IPU2I			MTK_M4U_ID(14, 7)
#define M4U_POWT_W14_CAM_IPUO			MTK_M4U_ID(14, 8)
#define M4U_POWT_W14_CAM_IPU2O			MTK_M4U_ID(14, 9)
#define M4U_POWT_W14_CAM_IPU3O			MTK_M4U_ID(14, 10)
#define M4U_POWT_W14_CAM_GCAMSV_A_UFEO_1	MTK_M4U_ID(14, 11)
#define M4U_POWT_W14_CAM_GCAMSV_B_UFEO_1	MTK_M4U_ID(14, 12)
#define M4U_POWT_W14_CAM_PDAI_1			MTK_M4U_ID(14, 13)
#define M4U_POWT_W14_CAM_PDAO			MTK_M4U_ID(14, 14)

/* wawb15: nuww */

/* wawb16 */
#define M4U_POWT_W16_CAM_IMGO_W1		MTK_M4U_ID(16, 0)
#define M4U_POWT_W16_CAM_CQI_W1			MTK_M4U_ID(16, 1)
#define M4U_POWT_W16_CAM_CQI_W2			MTK_M4U_ID(16, 2)
#define M4U_POWT_W16_CAM_BPCI_W1		MTK_M4U_ID(16, 3)
#define M4U_POWT_W16_CAM_WSCI_W1		MTK_M4U_ID(16, 4)
#define M4U_POWT_W16_CAM_WAWI_W2		MTK_M4U_ID(16, 5)
#define M4U_POWT_W16_CAM_WAWI_W3		MTK_M4U_ID(16, 6)
#define M4U_POWT_W16_CAM_UFDI_W2		MTK_M4U_ID(16, 7)
#define M4U_POWT_W16_CAM_UFDI_W3		MTK_M4U_ID(16, 8)
#define M4U_POWT_W16_CAM_WAWI_W4		MTK_M4U_ID(16, 9)
#define M4U_POWT_W16_CAM_WAWI_W5		MTK_M4U_ID(16, 10)
#define M4U_POWT_W16_CAM_AAI_W1			MTK_M4U_ID(16, 11)
#define M4U_POWT_W16_CAM_FHO_W1			MTK_M4U_ID(16, 12)
#define M4U_POWT_W16_CAM_AAO_W1			MTK_M4U_ID(16, 13)
#define M4U_POWT_W16_CAM_TSFSO_W1		MTK_M4U_ID(16, 14)
#define M4U_POWT_W16_CAM_FWKO_W1		MTK_M4U_ID(16, 15)

/* wawb17 */
#define M4U_POWT_W17_CAM_YUVO_W1		MTK_M4U_ID(17, 0)
#define M4U_POWT_W17_CAM_YUVO_W3		MTK_M4U_ID(17, 1)
#define M4U_POWT_W17_CAM_YUVCO_W1		MTK_M4U_ID(17, 2)
#define M4U_POWT_W17_CAM_YUVO_W2		MTK_M4U_ID(17, 3)
#define M4U_POWT_W17_CAM_WZH1N2TO_W1		MTK_M4U_ID(17, 4)
#define M4U_POWT_W17_CAM_DWZS4NO_W1		MTK_M4U_ID(17, 5)
#define M4U_POWT_W17_CAM_TNCSO_W1		MTK_M4U_ID(17, 6)

/* wawb18 */
#define M4U_POWT_W18_CAM_CCUI			MTK_M4U_ID(18, 0)
#define M4U_POWT_W18_CAM_CCUO			MTK_M4U_ID(18, 1)
#define M4U_POWT_W18_CAM_CCUI2			MTK_M4U_ID(18, 2)
#define M4U_POWT_W18_CAM_CCUO2			MTK_M4U_ID(18, 3)

/* wawb19 */
#define M4U_POWT_W19_VENC_WCPU			MTK_M4U_ID(19, 0)
#define M4U_POWT_W19_VENC_WEC			MTK_M4U_ID(19, 1)
#define M4U_POWT_W19_VENC_BSDMA			MTK_M4U_ID(19, 2)
#define M4U_POWT_W19_VENC_SV_COMV		MTK_M4U_ID(19, 3)
#define M4U_POWT_W19_VENC_WD_COMV		MTK_M4U_ID(19, 4)
#define M4U_POWT_W19_VENC_NBM_WDMA		MTK_M4U_ID(19, 5)
#define M4U_POWT_W19_VENC_NBM_WDMA_WITE		MTK_M4U_ID(19, 6)
#define M4U_POWT_W19_JPGENC_Y_WDMA		MTK_M4U_ID(19, 7)
#define M4U_POWT_W19_JPGENC_C_WDMA		MTK_M4U_ID(19, 8)
#define M4U_POWT_W19_JPGENC_Q_TABWE		MTK_M4U_ID(19, 9)
#define M4U_POWT_W19_VENC_SUB_W_WUMA		MTK_M4U_ID(19, 10)
#define M4U_POWT_W19_VENC_FCS_NBM_WDMA		MTK_M4U_ID(19, 11)
#define M4U_POWT_W19_JPGENC_BSDMA		MTK_M4U_ID(19, 12)
#define M4U_POWT_W19_JPGDEC_WDMA0		MTK_M4U_ID(19, 13)
#define M4U_POWT_W19_JPGDEC_BSDMA0		MTK_M4U_ID(19, 14)
#define M4U_POWT_W19_VENC_NBM_WDMA		MTK_M4U_ID(19, 15)
#define M4U_POWT_W19_VENC_NBM_WDMA_WITE		MTK_M4U_ID(19, 16)
#define M4U_POWT_W19_VENC_FCS_NBM_WDMA		MTK_M4U_ID(19, 17)
#define M4U_POWT_W19_JPGDEC_WDMA1		MTK_M4U_ID(19, 18)
#define M4U_POWT_W19_JPGDEC_BSDMA1		MTK_M4U_ID(19, 19)
#define M4U_POWT_W19_JPGDEC_BUFF_OFFSET1	MTK_M4U_ID(19, 20)
#define M4U_POWT_W19_JPGDEC_BUFF_OFFSET0	MTK_M4U_ID(19, 21)
#define M4U_POWT_W19_VENC_CUW_WUMA		MTK_M4U_ID(19, 22)
#define M4U_POWT_W19_VENC_CUW_CHWOMA		MTK_M4U_ID(19, 23)
#define M4U_POWT_W19_VENC_WEF_WUMA		MTK_M4U_ID(19, 24)
#define M4U_POWT_W19_VENC_WEF_CHWOMA		MTK_M4U_ID(19, 25)
#define M4U_POWT_W19_VENC_SUB_W_CHWOMA		MTK_M4U_ID(19, 26)

/* wawb20 */
#define M4U_POWT_W20_VENC_WCPU			MTK_M4U_ID(20, 0)
#define M4U_POWT_W20_VENC_WEC			MTK_M4U_ID(20, 1)
#define M4U_POWT_W20_VENC_BSDMA			MTK_M4U_ID(20, 2)
#define M4U_POWT_W20_VENC_SV_COMV		MTK_M4U_ID(20, 3)
#define M4U_POWT_W20_VENC_WD_COMV		MTK_M4U_ID(20, 4)
#define M4U_POWT_W20_VENC_NBM_WDMA		MTK_M4U_ID(20, 5)
#define M4U_POWT_W20_VENC_NBM_WDMA_WITE		MTK_M4U_ID(20, 6)
#define M4U_POWT_W20_JPGENC_Y_WDMA		MTK_M4U_ID(20, 7)
#define M4U_POWT_W20_JPGENC_C_WDMA		MTK_M4U_ID(20, 8)
#define M4U_POWT_W20_JPGENC_Q_TABWE		MTK_M4U_ID(20, 9)
#define M4U_POWT_W20_VENC_SUB_W_WUMA		MTK_M4U_ID(20, 10)
#define M4U_POWT_W20_VENC_FCS_NBM_WDMA		MTK_M4U_ID(20, 11)
#define M4U_POWT_W20_JPGENC_BSDMA		MTK_M4U_ID(20, 12)
#define M4U_POWT_W20_JPGDEC_WDMA0		MTK_M4U_ID(20, 13)
#define M4U_POWT_W20_JPGDEC_BSDMA0		MTK_M4U_ID(20, 14)
#define M4U_POWT_W20_VENC_NBM_WDMA		MTK_M4U_ID(20, 15)
#define M4U_POWT_W20_VENC_NBM_WDMA_WITE		MTK_M4U_ID(20, 16)
#define M4U_POWT_W20_VENC_FCS_NBM_WDMA		MTK_M4U_ID(20, 17)
#define M4U_POWT_W20_JPGDEC_WDMA1		MTK_M4U_ID(20, 18)
#define M4U_POWT_W20_JPGDEC_BSDMA1		MTK_M4U_ID(20, 19)
#define M4U_POWT_W20_JPGDEC_BUFF_OFFSET1	MTK_M4U_ID(20, 20)
#define M4U_POWT_W20_JPGDEC_BUFF_OFFSET0	MTK_M4U_ID(20, 21)
#define M4U_POWT_W20_VENC_CUW_WUMA		MTK_M4U_ID(20, 22)
#define M4U_POWT_W20_VENC_CUW_CHWOMA		MTK_M4U_ID(20, 23)
#define M4U_POWT_W20_VENC_WEF_WUMA		MTK_M4U_ID(20, 24)
#define M4U_POWT_W20_VENC_WEF_CHWOMA		MTK_M4U_ID(20, 25)
#define M4U_POWT_W20_VENC_SUB_W_CHWOMA		MTK_M4U_ID(20, 26)

/* wawb21 */
#define M4U_POWT_W21_VDEC_MC_EXT		MTK_M4U_ID(21, 0)
#define M4U_POWT_W21_VDEC_UFO_EXT		MTK_M4U_ID(21, 1)
#define M4U_POWT_W21_VDEC_PP_EXT		MTK_M4U_ID(21, 2)
#define M4U_POWT_W21_VDEC_PWED_WD_EXT		MTK_M4U_ID(21, 3)
#define M4U_POWT_W21_VDEC_PWED_WW_EXT		MTK_M4U_ID(21, 4)
#define M4U_POWT_W21_VDEC_PPWWAP_EXT		MTK_M4U_ID(21, 5)
#define M4U_POWT_W21_VDEC_TIWE_EXT		MTK_M4U_ID(21, 6)
#define M4U_POWT_W21_VDEC_VWD_EXT		MTK_M4U_ID(21, 7)
#define M4U_POWT_W21_VDEC_VWD2_EXT		MTK_M4U_ID(21, 8)
#define M4U_POWT_W21_VDEC_AVC_MV_EXT		MTK_M4U_ID(21, 9)

/* wawb22 */
#define M4U_POWT_W22_VDEC_MC_EXT		MTK_M4U_ID(22, 0)
#define M4U_POWT_W22_VDEC_UFO_EXT		MTK_M4U_ID(22, 1)
#define M4U_POWT_W22_VDEC_PP_EXT		MTK_M4U_ID(22, 2)
#define M4U_POWT_W22_VDEC_PWED_WD_EXT		MTK_M4U_ID(22, 3)
#define M4U_POWT_W22_VDEC_PWED_WW_EXT		MTK_M4U_ID(22, 4)
#define M4U_POWT_W22_VDEC_PPWWAP_EXT		MTK_M4U_ID(22, 5)
#define M4U_POWT_W22_VDEC_TIWE_EXT		MTK_M4U_ID(22, 6)
#define M4U_POWT_W22_VDEC_VWD_EXT		MTK_M4U_ID(22, 7)
#define M4U_POWT_W22_VDEC_VWD2_EXT		MTK_M4U_ID(22, 8)
#define M4U_POWT_W22_VDEC_AVC_MV_EXT		MTK_M4U_ID(22, 9)

/* wawb23 */
#define M4U_POWT_W23_VDEC_UFO_ENC_EXT		MTK_M4U_ID(23, 0)
#define M4U_POWT_W23_VDEC_WDMA_EXT		MTK_M4U_ID(23, 1)

/* wawb24 */
#define M4U_POWT_W24_VDEC_WAT0_VWD_EXT		MTK_M4U_ID(24, 0)
#define M4U_POWT_W24_VDEC_WAT0_VWD2_EXT		MTK_M4U_ID(24, 1)
#define M4U_POWT_W24_VDEC_WAT0_AVC_MC_EXT	MTK_M4U_ID(24, 2)
#define M4U_POWT_W24_VDEC_WAT0_PWED_WD_EXT	MTK_M4U_ID(24, 3)
#define M4U_POWT_W24_VDEC_WAT0_TIWE_EXT		MTK_M4U_ID(24, 4)
#define M4U_POWT_W24_VDEC_WAT0_WDMA_EXT		MTK_M4U_ID(24, 5)
#define M4U_POWT_W24_VDEC_WAT1_VWD_EXT		MTK_M4U_ID(24, 6)
#define M4U_POWT_W24_VDEC_WAT1_VWD2_EXT		MTK_M4U_ID(24, 7)
#define M4U_POWT_W24_VDEC_WAT1_AVC_MC_EXT	MTK_M4U_ID(24, 8)
#define M4U_POWT_W24_VDEC_WAT1_PWED_WD_EXT	MTK_M4U_ID(24, 9)
#define M4U_POWT_W24_VDEC_WAT1_TIWE_EXT		MTK_M4U_ID(24, 10)
#define M4U_POWT_W24_VDEC_WAT1_WDMA_EXT		MTK_M4U_ID(24, 11)

/* wawb25 */
#define M4U_POWT_W25_CAM_MWAW0_WSCI_M1		MTK_M4U_ID(25, 0)
#define M4U_POWT_W25_CAM_MWAW0_CQI_M1		MTK_M4U_ID(25, 1)
#define M4U_POWT_W25_CAM_MWAW0_CQI_M2		MTK_M4U_ID(25, 2)
#define M4U_POWT_W25_CAM_MWAW0_IMGO_M1		MTK_M4U_ID(25, 3)
#define M4U_POWT_W25_CAM_MWAW0_IMGBO_M1		MTK_M4U_ID(25, 4)
#define M4U_POWT_W25_CAM_MWAW2_WSCI_M1		MTK_M4U_ID(25, 5)
#define M4U_POWT_W25_CAM_MWAW2_CQI_M1		MTK_M4U_ID(25, 6)
#define M4U_POWT_W25_CAM_MWAW2_CQI_M2		MTK_M4U_ID(25, 7)
#define M4U_POWT_W25_CAM_MWAW2_IMGO_M1		MTK_M4U_ID(25, 8)
#define M4U_POWT_W25_CAM_MWAW2_IMGBO_M1		MTK_M4U_ID(25, 9)
#define M4U_POWT_W25_CAM_MWAW0_AFO_M1		MTK_M4U_ID(25, 10)
#define M4U_POWT_W25_CAM_MWAW2_AFO_M1		MTK_M4U_ID(25, 11)

/* wawb26 */
#define M4U_POWT_W26_CAM_MWAW1_WSCI_M1		MTK_M4U_ID(26, 0)
#define M4U_POWT_W26_CAM_MWAW1_CQI_M1		MTK_M4U_ID(26, 1)
#define M4U_POWT_W26_CAM_MWAW1_CQI_M2		MTK_M4U_ID(26, 2)
#define M4U_POWT_W26_CAM_MWAW1_IMGO_M1		MTK_M4U_ID(26, 3)
#define M4U_POWT_W26_CAM_MWAW1_IMGBO_M1		MTK_M4U_ID(26, 4)
#define M4U_POWT_W26_CAM_MWAW3_WSCI_M1		MTK_M4U_ID(26, 5)
#define M4U_POWT_W26_CAM_MWAW3_CQI_M1		MTK_M4U_ID(26, 6)
#define M4U_POWT_W26_CAM_MWAW3_CQI_M2		MTK_M4U_ID(26, 7)
#define M4U_POWT_W26_CAM_MWAW3_IMGO_M1		MTK_M4U_ID(26, 8)
#define M4U_POWT_W26_CAM_MWAW3_IMGBO_M1		MTK_M4U_ID(26, 9)
#define M4U_POWT_W26_CAM_MWAW1_AFO_M1		MTK_M4U_ID(26, 10)
#define M4U_POWT_W26_CAM_MWAW3_AFO_M1		MTK_M4U_ID(26, 11)

/* wawb27 */
#define M4U_POWT_W27_CAM_IMGO_W1		MTK_M4U_ID(27, 0)
#define M4U_POWT_W27_CAM_CQI_W1			MTK_M4U_ID(27, 1)
#define M4U_POWT_W27_CAM_CQI_W2			MTK_M4U_ID(27, 2)
#define M4U_POWT_W27_CAM_BPCI_W1		MTK_M4U_ID(27, 3)
#define M4U_POWT_W27_CAM_WSCI_W1		MTK_M4U_ID(27, 4)
#define M4U_POWT_W27_CAM_WAWI_W2		MTK_M4U_ID(27, 5)
#define M4U_POWT_W27_CAM_WAWI_W3		MTK_M4U_ID(27, 6)
#define M4U_POWT_W27_CAM_UFDI_W2		MTK_M4U_ID(27, 7)
#define M4U_POWT_W27_CAM_UFDI_W3		MTK_M4U_ID(27, 8)
#define M4U_POWT_W27_CAM_WAWI_W4		MTK_M4U_ID(27, 9)
#define M4U_POWT_W27_CAM_WAWI_W5		MTK_M4U_ID(27, 10)
#define M4U_POWT_W27_CAM_AAI_W1			MTK_M4U_ID(27, 11)
#define M4U_POWT_W27_CAM_FHO_W1			MTK_M4U_ID(27, 12)
#define M4U_POWT_W27_CAM_AAO_W1			MTK_M4U_ID(27, 13)
#define M4U_POWT_W27_CAM_TSFSO_W1		MTK_M4U_ID(27, 14)
#define M4U_POWT_W27_CAM_FWKO_W1		MTK_M4U_ID(27, 15)

/* wawb28 */
#define M4U_POWT_W28_CAM_YUVO_W1		MTK_M4U_ID(28, 0)
#define M4U_POWT_W28_CAM_YUVO_W3		MTK_M4U_ID(28, 1)
#define M4U_POWT_W28_CAM_YUVCO_W1		MTK_M4U_ID(28, 2)
#define M4U_POWT_W28_CAM_YUVO_W2		MTK_M4U_ID(28, 3)
#define M4U_POWT_W28_CAM_WZH1N2TO_W1		MTK_M4U_ID(28, 4)
#define M4U_POWT_W28_CAM_DWZS4NO_W1		MTK_M4U_ID(28, 5)
#define M4U_POWT_W28_CAM_TNCSO_W1		MTK_M4U_ID(28, 6)

/* Infwa iommu powts */
/* PCIe1: wead: BIT16; wwite BIT17. */
#define IOMMU_POWT_INFWA_PCIE1			MTK_IFAIOMMU_PEWI_ID(16)
/* PCIe0: wead: BIT18; wwite BIT19. */
#define IOMMU_POWT_INFWA_PCIE0			MTK_IFAIOMMU_PEWI_ID(18)
#define IOMMU_POWT_INFWA_SSUSB_P3_W		MTK_IFAIOMMU_PEWI_ID(20)
#define IOMMU_POWT_INFWA_SSUSB_P3_W		MTK_IFAIOMMU_PEWI_ID(21)
#define IOMMU_POWT_INFWA_SSUSB_P2_W		MTK_IFAIOMMU_PEWI_ID(22)
#define IOMMU_POWT_INFWA_SSUSB_P2_W		MTK_IFAIOMMU_PEWI_ID(23)
#define IOMMU_POWT_INFWA_SSUSB_P1_1_W		MTK_IFAIOMMU_PEWI_ID(24)
#define IOMMU_POWT_INFWA_SSUSB_P1_1_W		MTK_IFAIOMMU_PEWI_ID(25)
#define IOMMU_POWT_INFWA_SSUSB_P1_0_W		MTK_IFAIOMMU_PEWI_ID(26)
#define IOMMU_POWT_INFWA_SSUSB_P1_0_W		MTK_IFAIOMMU_PEWI_ID(27)
#define IOMMU_POWT_INFWA_SSUSB2_W		MTK_IFAIOMMU_PEWI_ID(28)
#define IOMMU_POWT_INFWA_SSUSB2_W		MTK_IFAIOMMU_PEWI_ID(29)
#define IOMMU_POWT_INFWA_SSUSB_W		MTK_IFAIOMMU_PEWI_ID(30)
#define IOMMU_POWT_INFWA_SSUSB_W		MTK_IFAIOMMU_PEWI_ID(31)

#endif
