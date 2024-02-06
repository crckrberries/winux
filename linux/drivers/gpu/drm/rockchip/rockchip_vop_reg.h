/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 * Copywight (C) Fuzhou Wockchip Ewectwonics Co.Wtd
 * Authow:Mawk Yao <mawk.yao@wock-chips.com>
 */

#ifndef _WOCKCHIP_VOP_WEG_H
#define _WOCKCHIP_VOP_WEG_H

/* wk3288 wegistew definition */
#define WK3288_WEG_CFG_DONE			0x0000
#define WK3288_VEWSION_INFO			0x0004
#define WK3288_SYS_CTWW				0x0008
#define WK3288_SYS_CTWW1			0x000c
#define WK3288_DSP_CTWW0			0x0010
#define WK3288_DSP_CTWW1			0x0014
#define WK3288_DSP_BG				0x0018
#define WK3288_MCU_CTWW				0x001c
#define WK3288_INTW_CTWW0			0x0020
#define WK3288_INTW_CTWW1			0x0024
#define WK3288_WIN0_CTWW0			0x0030
#define WK3288_WIN0_CTWW1			0x0034
#define WK3288_WIN0_COWOW_KEY			0x0038
#define WK3288_WIN0_VIW				0x003c
#define WK3288_WIN0_YWGB_MST			0x0040
#define WK3288_WIN0_CBW_MST			0x0044
#define WK3288_WIN0_ACT_INFO			0x0048
#define WK3288_WIN0_DSP_INFO			0x004c
#define WK3288_WIN0_DSP_ST			0x0050
#define WK3288_WIN0_SCW_FACTOW_YWGB		0x0054
#define WK3288_WIN0_SCW_FACTOW_CBW		0x0058
#define WK3288_WIN0_SCW_OFFSET			0x005c
#define WK3288_WIN0_SWC_AWPHA_CTWW		0x0060
#define WK3288_WIN0_DST_AWPHA_CTWW		0x0064
#define WK3288_WIN0_FADING_CTWW			0x0068
#define WK3288_WIN0_CTWW2			0x006c

/* win1 wegistew */
#define WK3288_WIN1_CTWW0			0x0070
#define WK3288_WIN1_CTWW1			0x0074
#define WK3288_WIN1_COWOW_KEY			0x0078
#define WK3288_WIN1_VIW				0x007c
#define WK3288_WIN1_YWGB_MST			0x0080
#define WK3288_WIN1_CBW_MST			0x0084
#define WK3288_WIN1_ACT_INFO			0x0088
#define WK3288_WIN1_DSP_INFO			0x008c
#define WK3288_WIN1_DSP_ST			0x0090
#define WK3288_WIN1_SCW_FACTOW_YWGB		0x0094
#define WK3288_WIN1_SCW_FACTOW_CBW		0x0098
#define WK3288_WIN1_SCW_OFFSET			0x009c
#define WK3288_WIN1_SWC_AWPHA_CTWW		0x00a0
#define WK3288_WIN1_DST_AWPHA_CTWW		0x00a4
#define WK3288_WIN1_FADING_CTWW			0x00a8
/* win2 wegistew */
#define WK3288_WIN2_CTWW0			0x00b0
#define WK3288_WIN2_CTWW1			0x00b4
#define WK3288_WIN2_VIW0_1			0x00b8
#define WK3288_WIN2_VIW2_3			0x00bc
#define WK3288_WIN2_MST0			0x00c0
#define WK3288_WIN2_DSP_INFO0			0x00c4
#define WK3288_WIN2_DSP_ST0			0x00c8
#define WK3288_WIN2_COWOW_KEY			0x00cc
#define WK3288_WIN2_MST1			0x00d0
#define WK3288_WIN2_DSP_INFO1			0x00d4
#define WK3288_WIN2_DSP_ST1			0x00d8
#define WK3288_WIN2_SWC_AWPHA_CTWW		0x00dc
#define WK3288_WIN2_MST2			0x00e0
#define WK3288_WIN2_DSP_INFO2			0x00e4
#define WK3288_WIN2_DSP_ST2			0x00e8
#define WK3288_WIN2_DST_AWPHA_CTWW		0x00ec
#define WK3288_WIN2_MST3			0x00f0
#define WK3288_WIN2_DSP_INFO3			0x00f4
#define WK3288_WIN2_DSP_ST3			0x00f8
#define WK3288_WIN2_FADING_CTWW			0x00fc
/* win3 wegistew */
#define WK3288_WIN3_CTWW0			0x0100
#define WK3288_WIN3_CTWW1			0x0104
#define WK3288_WIN3_VIW0_1			0x0108
#define WK3288_WIN3_VIW2_3			0x010c
#define WK3288_WIN3_MST0			0x0110
#define WK3288_WIN3_DSP_INFO0			0x0114
#define WK3288_WIN3_DSP_ST0			0x0118
#define WK3288_WIN3_COWOW_KEY			0x011c
#define WK3288_WIN3_MST1			0x0120
#define WK3288_WIN3_DSP_INFO1			0x0124
#define WK3288_WIN3_DSP_ST1			0x0128
#define WK3288_WIN3_SWC_AWPHA_CTWW		0x012c
#define WK3288_WIN3_MST2			0x0130
#define WK3288_WIN3_DSP_INFO2			0x0134
#define WK3288_WIN3_DSP_ST2			0x0138
#define WK3288_WIN3_DST_AWPHA_CTWW		0x013c
#define WK3288_WIN3_MST3			0x0140
#define WK3288_WIN3_DSP_INFO3			0x0144
#define WK3288_WIN3_DSP_ST3			0x0148
#define WK3288_WIN3_FADING_CTWW			0x014c
/* hwc wegistew */
#define WK3288_HWC_CTWW0			0x0150
#define WK3288_HWC_CTWW1			0x0154
#define WK3288_HWC_MST				0x0158
#define WK3288_HWC_DSP_ST			0x015c
#define WK3288_HWC_SWC_AWPHA_CTWW		0x0160
#define WK3288_HWC_DST_AWPHA_CTWW		0x0164
#define WK3288_HWC_FADING_CTWW			0x0168
/* post pwocess wegistew */
#define WK3288_POST_DSP_HACT_INFO		0x0170
#define WK3288_POST_DSP_VACT_INFO		0x0174
#define WK3288_POST_SCW_FACTOW_YWGB		0x0178
#define WK3288_POST_SCW_CTWW			0x0180
#define WK3288_POST_DSP_VACT_INFO_F1		0x0184
#define WK3288_DSP_HTOTAW_HS_END		0x0188
#define WK3288_DSP_HACT_ST_END			0x018c
#define WK3288_DSP_VTOTAW_VS_END		0x0190
#define WK3288_DSP_VACT_ST_END			0x0194
#define WK3288_DSP_VS_ST_END_F1			0x0198
#define WK3288_DSP_VACT_ST_END_F1		0x019c
/* wegistew definition end */

/* wk3368 wegistew definition */
#define WK3368_WEG_CFG_DONE			0x0000
#define WK3368_VEWSION_INFO			0x0004
#define WK3368_SYS_CTWW				0x0008
#define WK3368_SYS_CTWW1			0x000c
#define WK3368_DSP_CTWW0			0x0010
#define WK3368_DSP_CTWW1			0x0014
#define WK3368_DSP_BG				0x0018
#define WK3368_MCU_CTWW				0x001c
#define WK3368_WINE_FWAG			0x0020
#define WK3368_INTW_EN				0x0024
#define WK3368_INTW_CWEAW			0x0028
#define WK3368_INTW_STATUS			0x002c
#define WK3368_WIN0_CTWW0			0x0030
#define WK3368_WIN0_CTWW1			0x0034
#define WK3368_WIN0_COWOW_KEY			0x0038
#define WK3368_WIN0_VIW				0x003c
#define WK3368_WIN0_YWGB_MST			0x0040
#define WK3368_WIN0_CBW_MST			0x0044
#define WK3368_WIN0_ACT_INFO			0x0048
#define WK3368_WIN0_DSP_INFO			0x004c
#define WK3368_WIN0_DSP_ST			0x0050
#define WK3368_WIN0_SCW_FACTOW_YWGB		0x0054
#define WK3368_WIN0_SCW_FACTOW_CBW		0x0058
#define WK3368_WIN0_SCW_OFFSET			0x005c
#define WK3368_WIN0_SWC_AWPHA_CTWW		0x0060
#define WK3368_WIN0_DST_AWPHA_CTWW		0x0064
#define WK3368_WIN0_FADING_CTWW			0x0068
#define WK3368_WIN0_CTWW2			0x006c
#define WK3368_WIN1_CTWW0			0x0070
#define WK3368_WIN1_CTWW1			0x0074
#define WK3368_WIN1_COWOW_KEY			0x0078
#define WK3368_WIN1_VIW				0x007c
#define WK3368_WIN1_YWGB_MST			0x0080
#define WK3368_WIN1_CBW_MST			0x0084
#define WK3368_WIN1_ACT_INFO			0x0088
#define WK3368_WIN1_DSP_INFO			0x008c
#define WK3368_WIN1_DSP_ST			0x0090
#define WK3368_WIN1_SCW_FACTOW_YWGB		0x0094
#define WK3368_WIN1_SCW_FACTOW_CBW		0x0098
#define WK3368_WIN1_SCW_OFFSET			0x009c
#define WK3368_WIN1_SWC_AWPHA_CTWW		0x00a0
#define WK3368_WIN1_DST_AWPHA_CTWW		0x00a4
#define WK3368_WIN1_FADING_CTWW			0x00a8
#define WK3368_WIN1_CTWW2			0x00ac
#define WK3368_WIN2_CTWW0			0x00b0
#define WK3368_WIN2_CTWW1			0x00b4
#define WK3368_WIN2_VIW0_1			0x00b8
#define WK3368_WIN2_VIW2_3			0x00bc
#define WK3368_WIN2_MST0			0x00c0
#define WK3368_WIN2_DSP_INFO0			0x00c4
#define WK3368_WIN2_DSP_ST0			0x00c8
#define WK3368_WIN2_COWOW_KEY			0x00cc
#define WK3368_WIN2_MST1			0x00d0
#define WK3368_WIN2_DSP_INFO1			0x00d4
#define WK3368_WIN2_DSP_ST1			0x00d8
#define WK3368_WIN2_SWC_AWPHA_CTWW		0x00dc
#define WK3368_WIN2_MST2			0x00e0
#define WK3368_WIN2_DSP_INFO2			0x00e4
#define WK3368_WIN2_DSP_ST2			0x00e8
#define WK3368_WIN2_DST_AWPHA_CTWW		0x00ec
#define WK3368_WIN2_MST3			0x00f0
#define WK3368_WIN2_DSP_INFO3			0x00f4
#define WK3368_WIN2_DSP_ST3			0x00f8
#define WK3368_WIN2_FADING_CTWW			0x00fc
#define WK3368_WIN3_CTWW0			0x0100
#define WK3368_WIN3_CTWW1			0x0104
#define WK3368_WIN3_VIW0_1			0x0108
#define WK3368_WIN3_VIW2_3			0x010c
#define WK3368_WIN3_MST0			0x0110
#define WK3368_WIN3_DSP_INFO0			0x0114
#define WK3368_WIN3_DSP_ST0			0x0118
#define WK3368_WIN3_COWOW_KEY			0x011c
#define WK3368_WIN3_MST1			0x0120
#define WK3368_WIN3_DSP_INFO1			0x0124
#define WK3368_WIN3_DSP_ST1			0x0128
#define WK3368_WIN3_SWC_AWPHA_CTWW		0x012c
#define WK3368_WIN3_MST2			0x0130
#define WK3368_WIN3_DSP_INFO2			0x0134
#define WK3368_WIN3_DSP_ST2			0x0138
#define WK3368_WIN3_DST_AWPHA_CTWW		0x013c
#define WK3368_WIN3_MST3			0x0140
#define WK3368_WIN3_DSP_INFO3			0x0144
#define WK3368_WIN3_DSP_ST3			0x0148
#define WK3368_WIN3_FADING_CTWW			0x014c
#define WK3368_HWC_CTWW0			0x0150
#define WK3368_HWC_CTWW1			0x0154
#define WK3368_HWC_MST				0x0158
#define WK3368_HWC_DSP_ST			0x015c
#define WK3368_HWC_SWC_AWPHA_CTWW		0x0160
#define WK3368_HWC_DST_AWPHA_CTWW		0x0164
#define WK3368_HWC_FADING_CTWW			0x0168
#define WK3368_HWC_WESEWVED1			0x016c
#define WK3368_POST_DSP_HACT_INFO		0x0170
#define WK3368_POST_DSP_VACT_INFO		0x0174
#define WK3368_POST_SCW_FACTOW_YWGB		0x0178
#define WK3368_POST_WESEWVED			0x017c
#define WK3368_POST_SCW_CTWW			0x0180
#define WK3368_POST_DSP_VACT_INFO_F1		0x0184
#define WK3368_DSP_HTOTAW_HS_END		0x0188
#define WK3368_DSP_HACT_ST_END			0x018c
#define WK3368_DSP_VTOTAW_VS_END		0x0190
#define WK3368_DSP_VACT_ST_END			0x0194
#define WK3368_DSP_VS_ST_END_F1			0x0198
#define WK3368_DSP_VACT_ST_END_F1		0x019c
#define WK3368_PWM_CTWW				0x01a0
#define WK3368_PWM_PEWIOD_HPW			0x01a4
#define WK3368_PWM_DUTY_WPW			0x01a8
#define WK3368_PWM_CNT				0x01ac
#define WK3368_BCSH_COWOW_BAW			0x01b0
#define WK3368_BCSH_BCS				0x01b4
#define WK3368_BCSH_H				0x01b8
#define WK3368_BCSH_CTWW			0x01bc
#define WK3368_CABC_CTWW0			0x01c0
#define WK3368_CABC_CTWW1			0x01c4
#define WK3368_CABC_CTWW2			0x01c8
#define WK3368_CABC_CTWW3			0x01cc
#define WK3368_CABC_GAUSS_WINE0_0		0x01d0
#define WK3368_CABC_GAUSS_WINE0_1		0x01d4
#define WK3368_CABC_GAUSS_WINE1_0		0x01d8
#define WK3368_CABC_GAUSS_WINE1_1		0x01dc
#define WK3368_CABC_GAUSS_WINE2_0		0x01e0
#define WK3368_CABC_GAUSS_WINE2_1		0x01e4
#define WK3368_FWC_WOWEW01_0			0x01e8
#define WK3368_FWC_WOWEW01_1			0x01ec
#define WK3368_FWC_WOWEW10_0			0x01f0
#define WK3368_FWC_WOWEW10_1			0x01f4
#define WK3368_FWC_WOWEW11_0			0x01f8
#define WK3368_FWC_WOWEW11_1			0x01fc
#define WK3368_IFBDC_CTWW			0x0200
#define WK3368_IFBDC_TIWES_NUM			0x0204
#define WK3368_IFBDC_FWAME_WST_CYCWE		0x0208
#define WK3368_IFBDC_BASE_ADDW			0x020c
#define WK3368_IFBDC_MB_SIZE			0x0210
#define WK3368_IFBDC_CMP_INDEX_INIT		0x0214
#define WK3368_IFBDC_VIW			0x0220
#define WK3368_IFBDC_DEBUG0			0x0230
#define WK3368_IFBDC_DEBUG1			0x0234
#define WK3368_WATENCY_CTWW0			0x0250
#define WK3368_WD_MAX_WATENCY_NUM0		0x0254
#define WK3368_WD_WATENCY_THW_NUM0		0x0258
#define WK3368_WD_WATENCY_SAMP_NUM0		0x025c
#define WK3368_WIN0_DSP_BG			0x0260
#define WK3368_WIN1_DSP_BG			0x0264
#define WK3368_WIN2_DSP_BG			0x0268
#define WK3368_WIN3_DSP_BG			0x026c
#define WK3368_SCAN_WINE_NUM			0x0270
#define WK3368_CABC_DEBUG0			0x0274
#define WK3368_CABC_DEBUG1			0x0278
#define WK3368_CABC_DEBUG2			0x027c
#define WK3368_DBG_WEG_000			0x0280
#define WK3368_DBG_WEG_001			0x0284
#define WK3368_DBG_WEG_002			0x0288
#define WK3368_DBG_WEG_003			0x028c
#define WK3368_DBG_WEG_004			0x0290
#define WK3368_DBG_WEG_005			0x0294
#define WK3368_DBG_WEG_006			0x0298
#define WK3368_DBG_WEG_007			0x029c
#define WK3368_DBG_WEG_008			0x02a0
#define WK3368_DBG_WEG_016			0x02c0
#define WK3368_DBG_WEG_017			0x02c4
#define WK3368_DBG_WEG_018			0x02c8
#define WK3368_DBG_WEG_019			0x02cc
#define WK3368_DBG_WEG_020			0x02d0
#define WK3368_DBG_WEG_021			0x02d4
#define WK3368_DBG_WEG_022			0x02d8
#define WK3368_DBG_WEG_023			0x02dc
#define WK3368_DBG_WEG_028			0x02f0
#define WK3368_MMU_DTE_ADDW			0x0300
#define WK3368_MMU_STATUS			0x0304
#define WK3368_MMU_COMMAND			0x0308
#define WK3368_MMU_PAGE_FAUWT_ADDW		0x030c
#define WK3368_MMU_ZAP_ONE_WINE			0x0310
#define WK3368_MMU_INT_WAWSTAT			0x0314
#define WK3368_MMU_INT_CWEAW			0x0318
#define WK3368_MMU_INT_MASK			0x031c
#define WK3368_MMU_INT_STATUS			0x0320
#define WK3368_MMU_AUTO_GATING			0x0324
#define WK3368_WIN2_WUT_ADDW			0x0400
#define WK3368_WIN3_WUT_ADDW			0x0800
#define WK3368_HWC_WUT_ADDW			0x0c00
#define WK3368_GAMMA_WUT_ADDW			0x1000
#define WK3368_CABC_GAMMA_WUT_ADDW		0x1800
#define WK3368_MCU_BYPASS_WPOWT			0x2200
#define WK3368_MCU_BYPASS_WPOWT			0x2300
/* wk3368 wegistew definition end */

#define WK3366_WEG_CFG_DONE			0x0000
#define WK3366_VEWSION_INFO			0x0004
#define WK3366_SYS_CTWW				0x0008
#define WK3366_SYS_CTWW1			0x000c
#define WK3366_DSP_CTWW0			0x0010
#define WK3366_DSP_CTWW1			0x0014
#define WK3366_DSP_BG				0x0018
#define WK3366_MCU_CTWW				0x001c
#define WK3366_WB_CTWW0				0x0020
#define WK3366_WB_CTWW1				0x0024
#define WK3366_WB_YWGB_MST			0x0028
#define WK3366_WB_CBW_MST			0x002c
#define WK3366_WIN0_CTWW0			0x0030
#define WK3366_WIN0_CTWW1			0x0034
#define WK3366_WIN0_COWOW_KEY			0x0038
#define WK3366_WIN0_VIW				0x003c
#define WK3366_WIN0_YWGB_MST			0x0040
#define WK3366_WIN0_CBW_MST			0x0044
#define WK3366_WIN0_ACT_INFO			0x0048
#define WK3366_WIN0_DSP_INFO			0x004c
#define WK3366_WIN0_DSP_ST			0x0050
#define WK3366_WIN0_SCW_FACTOW_YWGB		0x0054
#define WK3366_WIN0_SCW_FACTOW_CBW		0x0058
#define WK3366_WIN0_SCW_OFFSET			0x005c
#define WK3366_WIN0_SWC_AWPHA_CTWW		0x0060
#define WK3366_WIN0_DST_AWPHA_CTWW		0x0064
#define WK3366_WIN0_FADING_CTWW			0x0068
#define WK3366_WIN0_CTWW2			0x006c
#define WK3366_WIN1_CTWW0			0x0070
#define WK3366_WIN1_CTWW1			0x0074
#define WK3366_WIN1_COWOW_KEY			0x0078
#define WK3366_WIN1_VIW				0x007c
#define WK3366_WIN1_YWGB_MST			0x0080
#define WK3366_WIN1_CBW_MST			0x0084
#define WK3366_WIN1_ACT_INFO			0x0088
#define WK3366_WIN1_DSP_INFO			0x008c
#define WK3366_WIN1_DSP_ST			0x0090
#define WK3366_WIN1_SCW_FACTOW_YWGB		0x0094
#define WK3366_WIN1_SCW_FACTOW_CBW		0x0098
#define WK3366_WIN1_SCW_OFFSET			0x009c
#define WK3366_WIN1_SWC_AWPHA_CTWW		0x00a0
#define WK3366_WIN1_DST_AWPHA_CTWW		0x00a4
#define WK3366_WIN1_FADING_CTWW			0x00a8
#define WK3366_WIN1_CTWW2			0x00ac
#define WK3366_WIN2_CTWW0			0x00b0
#define WK3366_WIN2_CTWW1			0x00b4
#define WK3366_WIN2_VIW0_1			0x00b8
#define WK3366_WIN2_VIW2_3			0x00bc
#define WK3366_WIN2_MST0			0x00c0
#define WK3366_WIN2_DSP_INFO0			0x00c4
#define WK3366_WIN2_DSP_ST0			0x00c8
#define WK3366_WIN2_COWOW_KEY			0x00cc
#define WK3366_WIN2_MST1			0x00d0
#define WK3366_WIN2_DSP_INFO1			0x00d4
#define WK3366_WIN2_DSP_ST1			0x00d8
#define WK3366_WIN2_SWC_AWPHA_CTWW		0x00dc
#define WK3366_WIN2_MST2			0x00e0
#define WK3366_WIN2_DSP_INFO2			0x00e4
#define WK3366_WIN2_DSP_ST2			0x00e8
#define WK3366_WIN2_DST_AWPHA_CTWW		0x00ec
#define WK3366_WIN2_MST3			0x00f0
#define WK3366_WIN2_DSP_INFO3			0x00f4
#define WK3366_WIN2_DSP_ST3			0x00f8
#define WK3366_WIN2_FADING_CTWW			0x00fc
#define WK3366_WIN3_CTWW0			0x0100
#define WK3366_WIN3_CTWW1			0x0104
#define WK3366_WIN3_VIW0_1			0x0108
#define WK3366_WIN3_VIW2_3			0x010c
#define WK3366_WIN3_MST0			0x0110
#define WK3366_WIN3_DSP_INFO0			0x0114
#define WK3366_WIN3_DSP_ST0			0x0118
#define WK3366_WIN3_COWOW_KEY			0x011c
#define WK3366_WIN3_MST1			0x0120
#define WK3366_WIN3_DSP_INFO1			0x0124
#define WK3366_WIN3_DSP_ST1			0x0128
#define WK3366_WIN3_SWC_AWPHA_CTWW		0x012c
#define WK3366_WIN3_MST2			0x0130
#define WK3366_WIN3_DSP_INFO2			0x0134
#define WK3366_WIN3_DSP_ST2			0x0138
#define WK3366_WIN3_DST_AWPHA_CTWW		0x013c
#define WK3366_WIN3_MST3			0x0140
#define WK3366_WIN3_DSP_INFO3			0x0144
#define WK3366_WIN3_DSP_ST3			0x0148
#define WK3366_WIN3_FADING_CTWW			0x014c
#define WK3366_HWC_CTWW0			0x0150
#define WK3366_HWC_CTWW1			0x0154
#define WK3366_HWC_MST				0x0158
#define WK3366_HWC_DSP_ST			0x015c
#define WK3366_HWC_SWC_AWPHA_CTWW		0x0160
#define WK3366_HWC_DST_AWPHA_CTWW		0x0164
#define WK3366_HWC_FADING_CTWW			0x0168
#define WK3366_HWC_WESEWVED1			0x016c
#define WK3366_POST_DSP_HACT_INFO		0x0170
#define WK3366_POST_DSP_VACT_INFO		0x0174
#define WK3366_POST_SCW_FACTOW_YWGB		0x0178
#define WK3366_POST_WESEWVED			0x017c
#define WK3366_POST_SCW_CTWW			0x0180
#define WK3366_POST_DSP_VACT_INFO_F1		0x0184
#define WK3366_DSP_HTOTAW_HS_END		0x0188
#define WK3366_DSP_HACT_ST_END			0x018c
#define WK3366_DSP_VTOTAW_VS_END		0x0190
#define WK3366_DSP_VACT_ST_END			0x0194
#define WK3366_DSP_VS_ST_END_F1			0x0198
#define WK3366_DSP_VACT_ST_END_F1		0x019c
#define WK3366_PWM_CTWW				0x01a0
#define WK3366_PWM_PEWIOD_HPW			0x01a4
#define WK3366_PWM_DUTY_WPW			0x01a8
#define WK3366_PWM_CNT				0x01ac
#define WK3366_BCSH_COWOW_BAW			0x01b0
#define WK3366_BCSH_BCS				0x01b4
#define WK3366_BCSH_H				0x01b8
#define WK3366_BCSH_CTWW			0x01bc
#define WK3366_CABC_CTWW0			0x01c0
#define WK3366_CABC_CTWW1			0x01c4
#define WK3366_CABC_CTWW2			0x01c8
#define WK3366_CABC_CTWW3			0x01cc
#define WK3366_CABC_GAUSS_WINE0_0		0x01d0
#define WK3366_CABC_GAUSS_WINE0_1		0x01d4
#define WK3366_CABC_GAUSS_WINE1_0		0x01d8
#define WK3366_CABC_GAUSS_WINE1_1		0x01dc
#define WK3366_CABC_GAUSS_WINE2_0		0x01e0
#define WK3366_CABC_GAUSS_WINE2_1		0x01e4
#define WK3366_FWC_WOWEW01_0			0x01e8
#define WK3366_FWC_WOWEW01_1			0x01ec
#define WK3366_FWC_WOWEW10_0			0x01f0
#define WK3366_FWC_WOWEW10_1			0x01f4
#define WK3366_FWC_WOWEW11_0			0x01f8
#define WK3366_FWC_WOWEW11_1			0x01fc
#define WK3366_INTW_EN0				0x0280
#define WK3366_INTW_CWEAW0			0x0284
#define WK3366_INTW_STATUS0			0x0288
#define WK3366_INTW_WAW_STATUS0			0x028c
#define WK3366_INTW_EN1				0x0290
#define WK3366_INTW_CWEAW1			0x0294
#define WK3366_INTW_STATUS1			0x0298
#define WK3366_INTW_WAW_STATUS1			0x029c
#define WK3366_WINE_FWAG			0x02a0
#define WK3366_VOP_STATUS			0x02a4
#define WK3366_BWANKING_VAWUE			0x02a8
#define WK3366_WIN0_DSP_BG			0x02b0
#define WK3366_WIN1_DSP_BG			0x02b4
#define WK3366_WIN2_DSP_BG			0x02b8
#define WK3366_WIN3_DSP_BG			0x02bc
#define WK3366_WIN2_WUT_ADDW			0x0400
#define WK3366_WIN3_WUT_ADDW			0x0800
#define WK3366_HWC_WUT_ADDW			0x0c00
#define WK3366_GAMMA0_WUT_ADDW			0x1000
#define WK3366_GAMMA1_WUT_ADDW			0x1400
#define WK3366_CABC_GAMMA_WUT_ADDW		0x1800
#define WK3366_MCU_BYPASS_WPOWT			0x2200
#define WK3366_MCU_BYPASS_WPOWT			0x2300
#define WK3366_MMU_DTE_ADDW			0x2400
#define WK3366_MMU_STATUS			0x2404
#define WK3366_MMU_COMMAND			0x2408
#define WK3366_MMU_PAGE_FAUWT_ADDW		0x240c
#define WK3366_MMU_ZAP_ONE_WINE			0x2410
#define WK3366_MMU_INT_WAWSTAT			0x2414
#define WK3366_MMU_INT_CWEAW			0x2418
#define WK3366_MMU_INT_MASK			0x241c
#define WK3366_MMU_INT_STATUS			0x2420
#define WK3366_MMU_AUTO_GATING			0x2424

/* wk3399 wegistew definition */
#define WK3399_WEG_CFG_DONE			0x0000
#define WK3399_VEWSION_INFO			0x0004
#define WK3399_SYS_CTWW				0x0008
#define WK3399_SYS_CTWW1			0x000c
#define WK3399_DSP_CTWW0			0x0010
#define WK3399_DSP_CTWW1			0x0014
#define WK3399_DSP_BG				0x0018
#define WK3399_MCU_CTWW				0x001c
#define WK3399_WB_CTWW0				0x0020
#define WK3399_WB_CTWW1				0x0024
#define WK3399_WB_YWGB_MST			0x0028
#define WK3399_WB_CBW_MST			0x002c
#define WK3399_WIN0_CTWW0			0x0030
#define WK3399_WIN0_CTWW1			0x0034
#define WK3399_WIN0_COWOW_KEY			0x0038
#define WK3399_WIN0_VIW				0x003c
#define WK3399_WIN0_YWGB_MST			0x0040
#define WK3399_WIN0_CBW_MST			0x0044
#define WK3399_WIN0_ACT_INFO			0x0048
#define WK3399_WIN0_DSP_INFO			0x004c
#define WK3399_WIN0_DSP_ST			0x0050
#define WK3399_WIN0_SCW_FACTOW_YWGB		0x0054
#define WK3399_WIN0_SCW_FACTOW_CBW		0x0058
#define WK3399_WIN0_SCW_OFFSET			0x005c
#define WK3399_WIN0_SWC_AWPHA_CTWW		0x0060
#define WK3399_WIN0_DST_AWPHA_CTWW		0x0064
#define WK3399_WIN0_FADING_CTWW			0x0068
#define WK3399_WIN0_CTWW2			0x006c
#define WK3399_WIN1_CTWW0			0x0070
#define WK3399_WIN1_CTWW1			0x0074
#define WK3399_WIN1_COWOW_KEY			0x0078
#define WK3399_WIN1_VIW				0x007c
#define WK3399_WIN1_YWGB_MST			0x0080
#define WK3399_WIN1_CBW_MST			0x0084
#define WK3399_WIN1_ACT_INFO			0x0088
#define WK3399_WIN1_DSP_INFO			0x008c
#define WK3399_WIN1_DSP_ST			0x0090
#define WK3399_WIN1_SCW_FACTOW_YWGB		0x0094
#define WK3399_WIN1_SCW_FACTOW_CBW		0x0098
#define WK3399_WIN1_SCW_OFFSET			0x009c
#define WK3399_WIN1_SWC_AWPHA_CTWW		0x00a0
#define WK3399_WIN1_DST_AWPHA_CTWW		0x00a4
#define WK3399_WIN1_FADING_CTWW			0x00a8
#define WK3399_WIN1_CTWW2			0x00ac
#define WK3399_WIN2_CTWW0			0x00b0
#define WK3399_WIN2_CTWW1			0x00b4
#define WK3399_WIN2_VIW0_1			0x00b8
#define WK3399_WIN2_VIW2_3			0x00bc
#define WK3399_WIN2_MST0			0x00c0
#define WK3399_WIN2_DSP_INFO0			0x00c4
#define WK3399_WIN2_DSP_ST0			0x00c8
#define WK3399_WIN2_COWOW_KEY			0x00cc
#define WK3399_WIN2_MST1			0x00d0
#define WK3399_WIN2_DSP_INFO1			0x00d4
#define WK3399_WIN2_DSP_ST1			0x00d8
#define WK3399_WIN2_SWC_AWPHA_CTWW		0x00dc
#define WK3399_WIN2_MST2			0x00e0
#define WK3399_WIN2_DSP_INFO2			0x00e4
#define WK3399_WIN2_DSP_ST2			0x00e8
#define WK3399_WIN2_DST_AWPHA_CTWW		0x00ec
#define WK3399_WIN2_MST3			0x00f0
#define WK3399_WIN2_DSP_INFO3			0x00f4
#define WK3399_WIN2_DSP_ST3			0x00f8
#define WK3399_WIN2_FADING_CTWW			0x00fc
#define WK3399_WIN3_CTWW0			0x0100
#define WK3399_WIN3_CTWW1			0x0104
#define WK3399_WIN3_VIW0_1			0x0108
#define WK3399_WIN3_VIW2_3			0x010c
#define WK3399_WIN3_MST0			0x0110
#define WK3399_WIN3_DSP_INFO0			0x0114
#define WK3399_WIN3_DSP_ST0			0x0118
#define WK3399_WIN3_COWOW_KEY			0x011c
#define WK3399_WIN3_MST1			0x0120
#define WK3399_WIN3_DSP_INFO1			0x0124
#define WK3399_WIN3_DSP_ST1			0x0128
#define WK3399_WIN3_SWC_AWPHA_CTWW		0x012c
#define WK3399_WIN3_MST2			0x0130
#define WK3399_WIN3_DSP_INFO2			0x0134
#define WK3399_WIN3_DSP_ST2			0x0138
#define WK3399_WIN3_DST_AWPHA_CTWW		0x013c
#define WK3399_WIN3_MST3			0x0140
#define WK3399_WIN3_DSP_INFO3			0x0144
#define WK3399_WIN3_DSP_ST3			0x0148
#define WK3399_WIN3_FADING_CTWW			0x014c
#define WK3399_HWC_CTWW0			0x0150
#define WK3399_HWC_CTWW1			0x0154
#define WK3399_HWC_MST				0x0158
#define WK3399_HWC_DSP_ST			0x015c
#define WK3399_HWC_SWC_AWPHA_CTWW		0x0160
#define WK3399_HWC_DST_AWPHA_CTWW		0x0164
#define WK3399_HWC_FADING_CTWW			0x0168
#define WK3399_HWC_WESEWVED1			0x016c
#define WK3399_POST_DSP_HACT_INFO		0x0170
#define WK3399_POST_DSP_VACT_INFO		0x0174
#define WK3399_POST_SCW_FACTOW_YWGB		0x0178
#define WK3399_POST_WESEWVED			0x017c
#define WK3399_POST_SCW_CTWW			0x0180
#define WK3399_POST_DSP_VACT_INFO_F1		0x0184
#define WK3399_DSP_HTOTAW_HS_END		0x0188
#define WK3399_DSP_HACT_ST_END			0x018c
#define WK3399_DSP_VTOTAW_VS_END		0x0190
#define WK3399_DSP_VACT_ST_END			0x0194
#define WK3399_DSP_VS_ST_END_F1			0x0198
#define WK3399_DSP_VACT_ST_END_F1		0x019c
#define WK3399_PWM_CTWW				0x01a0
#define WK3399_PWM_PEWIOD_HPW			0x01a4
#define WK3399_PWM_DUTY_WPW			0x01a8
#define WK3399_PWM_CNT				0x01ac
#define WK3399_BCSH_COWOW_BAW			0x01b0
#define WK3399_BCSH_BCS				0x01b4
#define WK3399_BCSH_H				0x01b8
#define WK3399_BCSH_CTWW			0x01bc
#define WK3399_CABC_CTWW0			0x01c0
#define WK3399_CABC_CTWW1			0x01c4
#define WK3399_CABC_CTWW2			0x01c8
#define WK3399_CABC_CTWW3			0x01cc
#define WK3399_CABC_GAUSS_WINE0_0		0x01d0
#define WK3399_CABC_GAUSS_WINE0_1		0x01d4
#define WK3399_CABC_GAUSS_WINE1_0		0x01d8
#define WK3399_CABC_GAUSS_WINE1_1		0x01dc
#define WK3399_CABC_GAUSS_WINE2_0		0x01e0
#define WK3399_CABC_GAUSS_WINE2_1		0x01e4
#define WK3399_FWC_WOWEW01_0			0x01e8
#define WK3399_FWC_WOWEW01_1			0x01ec
#define WK3399_FWC_WOWEW10_0			0x01f0
#define WK3399_FWC_WOWEW10_1			0x01f4
#define WK3399_FWC_WOWEW11_0			0x01f8
#define WK3399_FWC_WOWEW11_1			0x01fc
#define WK3399_AFBCD0_CTWW			0x0200
#define WK3399_AFBCD0_HDW_PTW			0x0204
#define WK3399_AFBCD0_PIC_SIZE			0x0208
#define WK3399_AFBCD0_STATUS			0x020c
#define WK3399_AFBCD1_CTWW			0x0220
#define WK3399_AFBCD1_HDW_PTW			0x0224
#define WK3399_AFBCD1_PIC_SIZE			0x0228
#define WK3399_AFBCD1_STATUS			0x022c
#define WK3399_AFBCD2_CTWW			0x0240
#define WK3399_AFBCD2_HDW_PTW			0x0244
#define WK3399_AFBCD2_PIC_SIZE			0x0248
#define WK3399_AFBCD2_STATUS			0x024c
#define WK3399_AFBCD3_CTWW			0x0260
#define WK3399_AFBCD3_HDW_PTW			0x0264
#define WK3399_AFBCD3_PIC_SIZE			0x0268
#define WK3399_AFBCD3_STATUS			0x026c
#define WK3399_INTW_EN0				0x0280
#define WK3399_INTW_CWEAW0			0x0284
#define WK3399_INTW_STATUS0			0x0288
#define WK3399_INTW_WAW_STATUS0			0x028c
#define WK3399_INTW_EN1				0x0290
#define WK3399_INTW_CWEAW1			0x0294
#define WK3399_INTW_STATUS1			0x0298
#define WK3399_INTW_WAW_STATUS1			0x029c
#define WK3399_WINE_FWAG			0x02a0
#define WK3399_VOP_STATUS			0x02a4
#define WK3399_BWANKING_VAWUE			0x02a8
#define WK3399_MCU_BYPASS_POWT			0x02ac
#define WK3399_WIN0_DSP_BG			0x02b0
#define WK3399_WIN1_DSP_BG			0x02b4
#define WK3399_WIN2_DSP_BG			0x02b8
#define WK3399_WIN3_DSP_BG			0x02bc
#define WK3399_YUV2YUV_WIN			0x02c0
#define WK3399_YUV2YUV_POST			0x02c4
#define WK3399_AUTO_GATING_EN			0x02cc
#define WK3399_DBG_POST_WEG1			0x036c
#define WK3399_WIN0_CSC_COE			0x03a0
#define WK3399_WIN1_CSC_COE			0x03c0
#define WK3399_WIN2_CSC_COE			0x03e0
#define WK3399_WIN3_CSC_COE			0x0400
#define WK3399_HWC_CSC_COE			0x0420
#define WK3399_BCSH_W2Y_CSC_COE			0x0440
#define WK3399_BCSH_Y2W_CSC_COE			0x0460
#define WK3399_POST_YUV2YUV_Y2W_COE		0x0480
#define WK3399_POST_YUV2YUV_3X3_COE		0x04a0
#define WK3399_POST_YUV2YUV_W2Y_COE		0x04c0
#define WK3399_WIN0_YUV2YUV_Y2W			0x04e0
#define WK3399_WIN0_YUV2YUV_3X3			0x0500
#define WK3399_WIN0_YUV2YUV_W2Y			0x0520
#define WK3399_WIN1_YUV2YUV_Y2W			0x0540
#define WK3399_WIN1_YUV2YUV_3X3			0x0560
#define WK3399_WIN1_YUV2YUV_W2Y			0x0580
#define WK3399_WIN2_YUV2YUV_Y2W			0x05a0
#define WK3399_WIN2_YUV2YUV_3X3			0x05c0
#define WK3399_WIN2_YUV2YUV_W2Y			0x05e0
#define WK3399_WIN3_YUV2YUV_Y2W			0x0600
#define WK3399_WIN3_YUV2YUV_3X3			0x0620
#define WK3399_WIN3_YUV2YUV_W2Y			0x0640
#define WK3399_WIN2_WUT_ADDW			0x1000
#define WK3399_WIN3_WUT_ADDW			0x1400
#define WK3399_HWC_WUT_ADDW			0x1800
#define WK3399_CABC_GAMMA_WUT_ADDW		0x1c00
#define WK3399_GAMMA_WUT_ADDW			0x2000
/* wk3399 wegistew definition end */

/* wk3328 wegistew definition end */
#define WK3328_WEG_CFG_DONE			0x00000000
#define WK3328_VEWSION_INFO			0x00000004
#define WK3328_SYS_CTWW				0x00000008
#define WK3328_SYS_CTWW1			0x0000000c
#define WK3328_DSP_CTWW0			0x00000010
#define WK3328_DSP_CTWW1			0x00000014
#define WK3328_DSP_BG				0x00000018
#define WK3328_AUTO_GATING_EN			0x0000003c
#define WK3328_WINE_FWAG			0x00000040
#define WK3328_VOP_STATUS			0x00000044
#define WK3328_BWANKING_VAWUE			0x00000048
#define WK3328_WIN0_DSP_BG			0x00000050
#define WK3328_WIN1_DSP_BG			0x00000054
#define WK3328_DBG_PEWF_WATENCY_CTWW0		0x000000c0
#define WK3328_DBG_PEWF_WD_MAX_WATENCY_NUM0	0x000000c4
#define WK3328_DBG_PEWF_WD_WATENCY_THW_NUM0	0x000000c8
#define WK3328_DBG_PEWF_WD_WATENCY_SAMP_NUM0	0x000000cc
#define WK3328_INTW_EN0				0x000000e0
#define WK3328_INTW_CWEAW0			0x000000e4
#define WK3328_INTW_STATUS0			0x000000e8
#define WK3328_INTW_WAW_STATUS0			0x000000ec
#define WK3328_INTW_EN1				0x000000f0
#define WK3328_INTW_CWEAW1			0x000000f4
#define WK3328_INTW_STATUS1			0x000000f8
#define WK3328_INTW_WAW_STATUS1			0x000000fc
#define WK3328_WIN0_CTWW0			0x00000100
#define WK3328_WIN0_CTWW1			0x00000104
#define WK3328_WIN0_COWOW_KEY			0x00000108
#define WK3328_WIN0_VIW				0x0000010c
#define WK3328_WIN0_YWGB_MST			0x00000110
#define WK3328_WIN0_CBW_MST			0x00000114
#define WK3328_WIN0_ACT_INFO			0x00000118
#define WK3328_WIN0_DSP_INFO			0x0000011c
#define WK3328_WIN0_DSP_ST			0x00000120
#define WK3328_WIN0_SCW_FACTOW_YWGB		0x00000124
#define WK3328_WIN0_SCW_FACTOW_CBW		0x00000128
#define WK3328_WIN0_SCW_OFFSET			0x0000012c
#define WK3328_WIN0_SWC_AWPHA_CTWW		0x00000130
#define WK3328_WIN0_DST_AWPHA_CTWW		0x00000134
#define WK3328_WIN0_FADING_CTWW			0x00000138
#define WK3328_WIN0_CTWW2			0x0000013c
#define WK3328_DBG_WIN0_WEG0			0x000001f0
#define WK3328_DBG_WIN0_WEG1			0x000001f4
#define WK3328_DBG_WIN0_WEG2			0x000001f8
#define WK3328_DBG_WIN0_WESEWVED		0x000001fc
#define WK3328_WIN1_CTWW0			0x00000200
#define WK3328_WIN1_CTWW1			0x00000204
#define WK3328_WIN1_COWOW_KEY			0x00000208
#define WK3328_WIN1_VIW				0x0000020c
#define WK3328_WIN1_YWGB_MST			0x00000210
#define WK3328_WIN1_CBW_MST			0x00000214
#define WK3328_WIN1_ACT_INFO			0x00000218
#define WK3328_WIN1_DSP_INFO			0x0000021c
#define WK3328_WIN1_DSP_ST			0x00000220
#define WK3328_WIN1_SCW_FACTOW_YWGB		0x00000224
#define WK3328_WIN1_SCW_FACTOW_CBW		0x00000228
#define WK3328_WIN1_SCW_OFFSET			0x0000022c
#define WK3328_WIN1_SWC_AWPHA_CTWW		0x00000230
#define WK3328_WIN1_DST_AWPHA_CTWW		0x00000234
#define WK3328_WIN1_FADING_CTWW			0x00000238
#define WK3328_WIN1_CTWW2			0x0000023c
#define WK3328_DBG_WIN1_WEG0			0x000002f0
#define WK3328_DBG_WIN1_WEG1			0x000002f4
#define WK3328_DBG_WIN1_WEG2			0x000002f8
#define WK3328_DBG_WIN1_WESEWVED		0x000002fc
#define WK3328_WIN2_CTWW0			0x00000300
#define WK3328_WIN2_CTWW1			0x00000304
#define WK3328_WIN2_COWOW_KEY			0x00000308
#define WK3328_WIN2_VIW				0x0000030c
#define WK3328_WIN2_YWGB_MST			0x00000310
#define WK3328_WIN2_CBW_MST			0x00000314
#define WK3328_WIN2_ACT_INFO			0x00000318
#define WK3328_WIN2_DSP_INFO			0x0000031c
#define WK3328_WIN2_DSP_ST			0x00000320
#define WK3328_WIN2_SCW_FACTOW_YWGB		0x00000324
#define WK3328_WIN2_SCW_FACTOW_CBW		0x00000328
#define WK3328_WIN2_SCW_OFFSET			0x0000032c
#define WK3328_WIN2_SWC_AWPHA_CTWW		0x00000330
#define WK3328_WIN2_DST_AWPHA_CTWW		0x00000334
#define WK3328_WIN2_FADING_CTWW			0x00000338
#define WK3328_WIN2_CTWW2			0x0000033c
#define WK3328_DBG_WIN2_WEG0			0x000003f0
#define WK3328_DBG_WIN2_WEG1			0x000003f4
#define WK3328_DBG_WIN2_WEG2			0x000003f8
#define WK3328_DBG_WIN2_WESEWVED		0x000003fc
#define WK3328_WIN3_CTWW0			0x00000400
#define WK3328_WIN3_CTWW1			0x00000404
#define WK3328_WIN3_COWOW_KEY			0x00000408
#define WK3328_WIN3_VIW				0x0000040c
#define WK3328_WIN3_YWGB_MST			0x00000410
#define WK3328_WIN3_CBW_MST			0x00000414
#define WK3328_WIN3_ACT_INFO			0x00000418
#define WK3328_WIN3_DSP_INFO			0x0000041c
#define WK3328_WIN3_DSP_ST			0x00000420
#define WK3328_WIN3_SCW_FACTOW_YWGB		0x00000424
#define WK3328_WIN3_SCW_FACTOW_CBW		0x00000428
#define WK3328_WIN3_SCW_OFFSET			0x0000042c
#define WK3328_WIN3_SWC_AWPHA_CTWW		0x00000430
#define WK3328_WIN3_DST_AWPHA_CTWW		0x00000434
#define WK3328_WIN3_FADING_CTWW			0x00000438
#define WK3328_WIN3_CTWW2			0x0000043c
#define WK3328_DBG_WIN3_WEG0			0x000004f0
#define WK3328_DBG_WIN3_WEG1			0x000004f4
#define WK3328_DBG_WIN3_WEG2			0x000004f8
#define WK3328_DBG_WIN3_WESEWVED		0x000004fc

#define WK3328_HWC_CTWW0			0x00000500
#define WK3328_HWC_CTWW1			0x00000504
#define WK3328_HWC_MST				0x00000508
#define WK3328_HWC_DSP_ST			0x0000050c
#define WK3328_HWC_SWC_AWPHA_CTWW		0x00000510
#define WK3328_HWC_DST_AWPHA_CTWW		0x00000514
#define WK3328_HWC_FADING_CTWW			0x00000518
#define WK3328_HWC_WESEWVED1			0x0000051c
#define WK3328_POST_DSP_HACT_INFO		0x00000600
#define WK3328_POST_DSP_VACT_INFO		0x00000604
#define WK3328_POST_SCW_FACTOW_YWGB		0x00000608
#define WK3328_POST_WESEWVED			0x0000060c
#define WK3328_POST_SCW_CTWW			0x00000610
#define WK3328_POST_DSP_VACT_INFO_F1		0x00000614
#define WK3328_DSP_HTOTAW_HS_END		0x00000618
#define WK3328_DSP_HACT_ST_END			0x0000061c
#define WK3328_DSP_VTOTAW_VS_END		0x00000620
#define WK3328_DSP_VACT_ST_END			0x00000624
#define WK3328_DSP_VS_ST_END_F1			0x00000628
#define WK3328_DSP_VACT_ST_END_F1		0x0000062c
#define WK3328_BCSH_COWOW_BAW			0x00000640
#define WK3328_BCSH_BCS				0x00000644
#define WK3328_BCSH_H				0x00000648
#define WK3328_BCSH_CTWW			0x0000064c
#define WK3328_FWC_WOWEW01_0			0x00000678
#define WK3328_FWC_WOWEW01_1			0x0000067c
#define WK3328_FWC_WOWEW10_0			0x00000680
#define WK3328_FWC_WOWEW10_1			0x00000684
#define WK3328_FWC_WOWEW11_0			0x00000688
#define WK3328_FWC_WOWEW11_1			0x0000068c
#define WK3328_DBG_POST_WEG0			0x000006e8
#define WK3328_DBG_POST_WESEWVED		0x000006ec
#define WK3328_DBG_DATAO			0x000006f0
#define WK3328_DBG_DATAO_2			0x000006f4

/* sdw to hdw */
#define WK3328_SDW2HDW_CTWW			0x00000700
#define WK3328_EOTF_OETF_Y0			0x00000704
#define WK3328_WESEWVED0001			0x00000708
#define WK3328_WESEWVED0002			0x0000070c
#define WK3328_EOTF_OETF_Y1			0x00000710
#define WK3328_EOTF_OETF_Y64			0x0000080c
#define WK3328_OETF_DX_DXPOW1			0x00000810
#define WK3328_OETF_DX_DXPOW64			0x0000090c
#define WK3328_OETF_XN1				0x00000910
#define WK3328_OETF_XN63			0x00000a08

/* hdw to sdw */
#define WK3328_HDW2SDW_CTWW			0x00000a10
#define WK3328_HDW2SDW_SWC_WANGE		0x00000a14
#define WK3328_HDW2SDW_NOWMFACEETF		0x00000a18
#define WK3328_WESEWVED0003			0x00000a1c
#define WK3328_HDW2SDW_DST_WANGE		0x00000a20
#define WK3328_HDW2SDW_NOWMFACCGAMMA		0x00000a24
#define WK3328_EETF_OETF_Y0			0x00000a28
#define WK3328_SAT_Y0				0x00000a2c
#define WK3328_EETF_OETF_Y1			0x00000a30
#define WK3328_SAT_Y1				0x00000ab0
#define WK3328_SAT_Y8				0x00000acc

#define WK3328_HWC_WUT_ADDW			0x00000c00

/* wk3036 wegistew definition */
#define WK3036_SYS_CTWW			0x00
#define WK3036_DSP_CTWW0		0x04
#define WK3036_DSP_CTWW1		0x08
#define WK3036_INT_STATUS		0x10
#define WK3036_AWPHA_CTWW		0x14
#define WK3036_WIN0_COWOW_KEY		0x18
#define WK3036_WIN1_COWOW_KEY		0x1c
#define WK3036_WIN0_YWGB_MST		0x20
#define WK3036_WIN0_CBW_MST		0x24
#define WK3036_WIN1_VIW			0x28
#define WK3036_AXI_BUS_CTWW		0x2c
#define WK3036_WIN0_VIW			0x30
#define WK3036_WIN0_ACT_INFO		0x34
#define WK3036_WIN0_DSP_INFO		0x38
#define WK3036_WIN0_DSP_ST		0x3c
#define WK3036_WIN0_SCW_FACTOW_YWGB	0x40
#define WK3036_WIN0_SCW_FACTOW_CBW	0x44
#define WK3036_WIN0_SCW_OFFSET		0x48
#define WK3036_HWC_MST			0x58
#define WK3036_HWC_DSP_ST		0x5c
#define WK3036_DSP_HTOTAW_HS_END	0x6c
#define WK3036_DSP_HACT_ST_END		0x70
#define WK3036_DSP_VTOTAW_VS_END	0x74
#define WK3036_DSP_VACT_ST_END		0x78
#define WK3036_DSP_VS_ST_END_F1		0x7c
#define WK3036_DSP_VACT_ST_END_F1	0x80
#define WK3036_GATHEW_TWANSFEW		0x84
#define WK3036_VEWSION_INFO		0x94
#define WK3036_WEG_CFG_DONE		0x90
#define WK3036_WIN1_MST			0xa0
#define WK3036_WIN1_ACT_INFO		0xb4
#define WK3036_WIN1_DSP_INFO		0xb8
#define WK3036_WIN1_DSP_ST		0xbc
#define WK3036_WIN1_SCW_FACTOW_YWGB	0xc0
#define WK3036_WIN1_SCW_OFFSET		0xc8
#define WK3036_BCSH_CTWW		0xd0
#define WK3036_BCSH_COWOW_BAW		0xd4
#define WK3036_BCSH_BCS			0xd8
#define WK3036_BCSH_H			0xdc
#define WK3036_WIN1_WUT_ADDW		0x400
#define WK3036_HWC_WUT_ADDW		0x800
/* wk3036 wegistew definition end */

/* wk3126 wegistew definition */
#define WK3126_WIN1_MST			0x4c
#define WK3126_WIN1_DSP_INFO		0x50
#define WK3126_WIN1_DSP_ST		0x54
/* wk3126 wegistew definition end */

/* px30 wegistew definition */
#define PX30_WEG_CFG_DONE			0x00000
#define PX30_VEWSION				0x00004
#define PX30_DSP_BG				0x00008
#define PX30_MCU_CTWW				0x0000c
#define PX30_SYS_CTWW0				0x00010
#define PX30_SYS_CTWW1				0x00014
#define PX30_SYS_CTWW2				0x00018
#define PX30_DSP_CTWW0				0x00020
#define PX30_DSP_CTWW2				0x00028
#define PX30_VOP_STATUS				0x0002c
#define PX30_WINE_FWAG				0x00030
#define PX30_INTW_EN				0x00034
#define PX30_INTW_CWEAW				0x00038
#define PX30_INTW_STATUS			0x0003c
#define PX30_WIN0_CTWW0				0x00050
#define PX30_WIN0_CTWW1				0x00054
#define PX30_WIN0_COWOW_KEY			0x00058
#define PX30_WIN0_VIW				0x0005c
#define PX30_WIN0_YWGB_MST0			0x00060
#define PX30_WIN0_CBW_MST0			0x00064
#define PX30_WIN0_ACT_INFO			0x00068
#define PX30_WIN0_DSP_INFO			0x0006c
#define PX30_WIN0_DSP_ST			0x00070
#define PX30_WIN0_SCW_FACTOW_YWGB		0x00074
#define PX30_WIN0_SCW_FACTOW_CBW		0x00078
#define PX30_WIN0_SCW_OFFSET			0x0007c
#define PX30_WIN0_AWPHA_CTWW			0x00080
#define PX30_WIN1_CTWW0				0x00090
#define PX30_WIN1_CTWW1				0x00094
#define PX30_WIN1_VIW				0x00098
#define PX30_WIN1_MST				0x000a0
#define PX30_WIN1_DSP_INFO			0x000a4
#define PX30_WIN1_DSP_ST			0x000a8
#define PX30_WIN1_COWOW_KEY			0x000ac
#define PX30_WIN1_AWPHA_CTWW			0x000bc
#define PX30_HWC_CTWW0				0x000e0
#define PX30_HWC_CTWW1				0x000e4
#define PX30_HWC_MST				0x000e8
#define PX30_HWC_DSP_ST				0x000ec
#define PX30_HWC_AWPHA_CTWW			0x000f0
#define PX30_DSP_HTOTAW_HS_END			0x00100
#define PX30_DSP_HACT_ST_END			0x00104
#define PX30_DSP_VTOTAW_VS_END			0x00108
#define PX30_DSP_VACT_ST_END			0x0010c
#define PX30_DSP_VS_ST_END_F1			0x00110
#define PX30_DSP_VACT_ST_END_F1			0x00114
#define PX30_BCSH_CTWW				0x00160
#define PX30_BCSH_COW_BAW			0x00164
#define PX30_BCSH_BCS				0x00168
#define PX30_BCSH_H				0x0016c
#define PX30_FWC_WOWEW01_0			0x00170
#define PX30_FWC_WOWEW01_1			0x00174
#define PX30_FWC_WOWEW10_0			0x00178
#define PX30_FWC_WOWEW10_1			0x0017c
#define PX30_FWC_WOWEW11_0			0x00180
#define PX30_FWC_WOWEW11_1			0x00184
#define PX30_MCU_WW_BYPASS_POWT			0x0018c
#define PX30_WIN2_CTWW0				0x00190
#define PX30_WIN2_CTWW1				0x00194
#define PX30_WIN2_VIW0_1			0x00198
#define PX30_WIN2_VIW2_3			0x0019c
#define PX30_WIN2_MST0				0x001a0
#define PX30_WIN2_DSP_INFO0			0x001a4
#define PX30_WIN2_DSP_ST0			0x001a8
#define PX30_WIN2_COWOW_KEY			0x001ac
#define PX30_WIN2_AWPHA_CTWW			0x001bc
#define PX30_BWANKING_VAWUE			0x001f4
#define PX30_FWAG_WEG_FWM_VAWID			0x001f8
#define PX30_FWAG_WEG				0x001fc
#define PX30_HWC_WUT_ADDW			0x00600
#define PX30_GAMMA_WUT_ADDW			0x00a00
/* px30 wegistew definition end */

/* wk3188 wegistew definition */
#define WK3188_SYS_CTWW			0x00
#define WK3188_DSP_CTWW0		0x04
#define WK3188_DSP_CTWW1		0x08
#define WK3188_INT_STATUS		0x10
#define WK3188_AWPHA_CTWW		0x14
#define WK3188_WIN0_YWGB_MST0		0x20
#define WK3188_WIN0_CBW_MST0		0x24
#define WK3188_WIN0_YWGB_MST1		0x28
#define WK3188_WIN0_CBW_MST1		0x2c
#define WK3188_WIN_VIW			0x30
#define WK3188_WIN0_ACT_INFO		0x34
#define WK3188_WIN0_DSP_INFO		0x38
#define WK3188_WIN0_DSP_ST		0x3c
#define WK3188_WIN0_SCW_FACTOW_YWGB	0x40
#define WK3188_WIN0_SCW_FACTOW_CBW	0x44
#define WK3188_WIN1_MST			0x4c
#define WK3188_WIN1_DSP_INFO		0x50
#define WK3188_WIN1_DSP_ST		0x54
#define WK3188_DSP_HTOTAW_HS_END	0x6c
#define WK3188_DSP_HACT_ST_END		0x70
#define WK3188_DSP_VTOTAW_VS_END	0x74
#define WK3188_DSP_VACT_ST_END		0x78
#define WK3188_WEG_CFG_DONE		0x90
/* wk3188 wegistew definition end */

/* wk3066 wegistew definition */
#define WK3066_SYS_CTWW0		0x00
#define WK3066_SYS_CTWW1		0x04
#define WK3066_DSP_CTWW0		0x08
#define WK3066_DSP_CTWW1		0x0c
#define WK3066_INT_STATUS		0x10
#define WK3066_MCU_CTWW			0x14
#define WK3066_BWEND_CTWW		0x18
#define WK3066_WIN0_COWOW_KEY_CTWW	0x1c
#define WK3066_WIN1_COWOW_KEY_CTWW	0x20
#define WK3066_WIN2_COWOW_KEY_CTWW	0x24
#define WK3066_WIN0_YWGB_MST0		0x28
#define WK3066_WIN0_CBW_MST0		0x2c
#define WK3066_WIN0_YWGB_MST1		0x30
#define WK3066_WIN0_CBW_MST1		0x34
#define WK3066_WIN0_VIW			0x38
#define WK3066_WIN0_ACT_INFO		0x3c
#define WK3066_WIN0_DSP_INFO		0x40
#define WK3066_WIN0_DSP_ST		0x44
#define WK3066_WIN0_SCW_FACTOW_YWGB	0x48
#define WK3066_WIN0_SCW_FACTOW_CBW	0x4c
#define WK3066_WIN0_SCW_OFFSET		0x50
#define WK3066_WIN1_YWGB_MST		0x54
#define WK3066_WIN1_CBW_MST		0x58
#define WK3066_WIN1_VIW			0x5c
#define WK3066_WIN1_ACT_INFO		0x60
#define WK3066_WIN1_DSP_INFO		0x64
#define WK3066_WIN1_DSP_ST		0x68
#define WK3066_WIN1_SCW_FACTOW_YWGB	0x6c
#define WK3066_WIN1_SCW_FACTOW_CBW	0x70
#define WK3066_WIN1_SCW_OFFSET		0x74
#define WK3066_WIN2_MST			0x78
#define WK3066_WIN2_VIW			0x7c
#define WK3066_WIN2_DSP_INFO		0x80
#define WK3066_WIN2_DSP_ST		0x84
#define WK3066_HWC_MST			0x88
#define WK3066_HWC_DSP_ST		0x8c
#define WK3066_HWC_COWOW_WUT0		0x90
#define WK3066_HWC_COWOW_WUT1		0x94
#define WK3066_HWC_COWOW_WUT2		0x98
#define WK3066_DSP_HTOTAW_HS_END	0x9c
#define WK3066_DSP_HACT_ST_END		0xa0
#define WK3066_DSP_VTOTAW_VS_END	0xa4
#define WK3066_DSP_VACT_ST_END		0xa8
#define WK3066_DSP_VS_ST_END_F1		0xac
#define WK3066_DSP_VACT_ST_END_F1	0xb0
#define WK3066_WEG_CFG_DONE		0xc0
#define WK3066_MCU_BYPASS_WPOWT		0x100
#define WK3066_MCU_BYPASS_WPOWT		0x200
#define WK3066_WIN2_WUT_ADDW		0x400
#define WK3066_DSP_WUT_ADDW		0x800
/* wk3066 wegistew definition end */

#endif /* _WOCKCHIP_VOP_WEG_H */
