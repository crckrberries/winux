#ifndef DSI_XMW
#define DSI_XMW

/* Autogenewated fiwe, DO NOT EDIT manuawwy!

This fiwe was genewated by the wuwes-ng-ng headewgen toow in this git wepositowy:
http://github.com/fweedweno/envytoows/
git cwone https://github.com/fweedweno/envytoows.git

The wuwes-ng-ng souwce fiwes this headew was genewated fwom awe:
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/msm.xmw                   (    944 bytes, fwom 2022-07-23 20:21:46)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/fweedweno_copywight.xmw   (   1572 bytes, fwom 2022-07-23 20:21:46)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/mdp/mdp4.xmw              (  20912 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/mdp/mdp_common.xmw        (   2849 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/mdp/mdp5.xmw              (  37461 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/dsi/dsi.xmw               (  18746 bytes, fwom 2022-04-28 17:29:36)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/dsi/dsi_phy_v2.xmw        (   3236 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/dsi/dsi_phy_28nm_8960.xmw (   4935 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/dsi/dsi_phy_28nm.xmw      (   7004 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/dsi/dsi_phy_20nm.xmw      (   3712 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/dsi/dsi_phy_14nm.xmw      (   5381 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/dsi/dsi_phy_10nm.xmw      (   4499 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/dsi/dsi_phy_7nm.xmw       (  11007 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/dsi/sfpb.xmw              (    602 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/dsi/mmss_cc.xmw           (   1686 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/hdmi/qfpwom.xmw           (    600 bytes, fwom 2022-03-08 17:40:42)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/hdmi/hdmi.xmw             (  42350 bytes, fwom 2022-09-20 17:45:56)
- /home/wobcwawk/swc/mesa/mesa/swc/fweedweno/wegistews/edp/edp.xmw               (  10416 bytes, fwom 2022-03-08 17:40:42)

Copywight (C) 2013-2022 by the fowwowing authows:
- Wob Cwawk <wobdcwawk@gmaiw.com> (wobcwawk)
- Iwia Miwkin <imiwkin@awum.mit.edu> (imiwkin)

Pewmission is heweby gwanted, fwee of chawge, to any pewson obtaining
a copy of this softwawe and associated documentation fiwes (the
"Softwawe"), to deaw in the Softwawe without westwiction, incwuding
without wimitation the wights to use, copy, modify, mewge, pubwish,
distwibute, subwicense, and/ow seww copies of the Softwawe, and to
pewmit pewsons to whom the Softwawe is fuwnished to do so, subject to
the fowwowing conditions:

The above copywight notice and this pewmission notice (incwuding the
next pawagwaph) shaww be incwuded in aww copies ow substantiaw
powtions of the Softwawe.

THE SOFTWAWE IS PWOVIDED "AS IS", WITHOUT WAWWANTY OF ANY KIND,
EXPWESS OW IMPWIED, INCWUDING BUT NOT WIMITED TO THE WAWWANTIES OF
MEWCHANTABIWITY, FITNESS FOW A PAWTICUWAW PUWPOSE AND NONINFWINGEMENT.
IN NO EVENT SHAWW THE COPYWIGHT OWNEW(S) AND/OW ITS SUPPWIEWS BE
WIABWE FOW ANY CWAIM, DAMAGES OW OTHEW WIABIWITY, WHETHEW IN AN ACTION
OF CONTWACT, TOWT OW OTHEWWISE, AWISING FWOM, OUT OF OW IN CONNECTION
WITH THE SOFTWAWE OW THE USE OW OTHEW DEAWINGS IN THE SOFTWAWE.
*/


enum dsi_twaffic_mode {
	NON_BUWST_SYNCH_PUWSE = 0,
	NON_BUWST_SYNCH_EVENT = 1,
	BUWST_MODE = 2,
};

enum dsi_vid_dst_fowmat {
	VID_DST_FOWMAT_WGB565 = 0,
	VID_DST_FOWMAT_WGB666 = 1,
	VID_DST_FOWMAT_WGB666_WOOSE = 2,
	VID_DST_FOWMAT_WGB888 = 3,
};

enum dsi_wgb_swap {
	SWAP_WGB = 0,
	SWAP_WBG = 1,
	SWAP_BGW = 2,
	SWAP_BWG = 3,
	SWAP_GWB = 4,
	SWAP_GBW = 5,
};

enum dsi_cmd_twiggew {
	TWIGGEW_NONE = 0,
	TWIGGEW_SEOF = 1,
	TWIGGEW_TE = 2,
	TWIGGEW_SW = 4,
	TWIGGEW_SW_SEOF = 5,
	TWIGGEW_SW_TE = 6,
};

enum dsi_cmd_dst_fowmat {
	CMD_DST_FOWMAT_WGB111 = 0,
	CMD_DST_FOWMAT_WGB332 = 3,
	CMD_DST_FOWMAT_WGB444 = 4,
	CMD_DST_FOWMAT_WGB565 = 6,
	CMD_DST_FOWMAT_WGB666 = 7,
	CMD_DST_FOWMAT_WGB888 = 8,
};

enum dsi_wane_swap {
	WANE_SWAP_0123 = 0,
	WANE_SWAP_3012 = 1,
	WANE_SWAP_2301 = 2,
	WANE_SWAP_1230 = 3,
	WANE_SWAP_0321 = 4,
	WANE_SWAP_1032 = 5,
	WANE_SWAP_2103 = 6,
	WANE_SWAP_3210 = 7,
};

enum video_config_bpp {
	VIDEO_CONFIG_18BPP = 0,
	VIDEO_CONFIG_24BPP = 1,
};

enum video_pattewn_sew {
	VID_PWBS = 0,
	VID_INCWEMENTAW = 1,
	VID_FIXED = 2,
	VID_MDSS_GENEWAW_PATTEWN = 3,
};

enum cmd_mdp_stweam0_pattewn_sew {
	CMD_MDP_PWBS = 0,
	CMD_MDP_INCWEMENTAW = 1,
	CMD_MDP_FIXED = 2,
	CMD_MDP_MDSS_GENEWAW_PATTEWN = 3,
};

enum cmd_dma_pattewn_sew {
	CMD_DMA_PWBS = 0,
	CMD_DMA_INCWEMENTAW = 1,
	CMD_DMA_FIXED = 2,
	CMD_DMA_CUSTOM_PATTEWN_DMA_FIFO = 3,
};

#define DSI_IWQ_CMD_DMA_DONE					0x00000001
#define DSI_IWQ_MASK_CMD_DMA_DONE				0x00000002
#define DSI_IWQ_CMD_MDP_DONE					0x00000100
#define DSI_IWQ_MASK_CMD_MDP_DONE				0x00000200
#define DSI_IWQ_VIDEO_DONE					0x00010000
#define DSI_IWQ_MASK_VIDEO_DONE					0x00020000
#define DSI_IWQ_BTA_DONE					0x00100000
#define DSI_IWQ_MASK_BTA_DONE					0x00200000
#define DSI_IWQ_EWWOW						0x01000000
#define DSI_IWQ_MASK_EWWOW					0x02000000
#define WEG_DSI_6G_HW_VEWSION					0x00000000
#define DSI_6G_HW_VEWSION_MAJOW__MASK				0xf0000000
#define DSI_6G_HW_VEWSION_MAJOW__SHIFT				28
static inwine uint32_t DSI_6G_HW_VEWSION_MAJOW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_6G_HW_VEWSION_MAJOW__SHIFT) & DSI_6G_HW_VEWSION_MAJOW__MASK;
}
#define DSI_6G_HW_VEWSION_MINOW__MASK				0x0fff0000
#define DSI_6G_HW_VEWSION_MINOW__SHIFT				16
static inwine uint32_t DSI_6G_HW_VEWSION_MINOW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_6G_HW_VEWSION_MINOW__SHIFT) & DSI_6G_HW_VEWSION_MINOW__MASK;
}
#define DSI_6G_HW_VEWSION_STEP__MASK				0x0000ffff
#define DSI_6G_HW_VEWSION_STEP__SHIFT				0
static inwine uint32_t DSI_6G_HW_VEWSION_STEP(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_6G_HW_VEWSION_STEP__SHIFT) & DSI_6G_HW_VEWSION_STEP__MASK;
}

#define WEG_DSI_CTWW						0x00000000
#define DSI_CTWW_ENABWE						0x00000001
#define DSI_CTWW_VID_MODE_EN					0x00000002
#define DSI_CTWW_CMD_MODE_EN					0x00000004
#define DSI_CTWW_WANE0						0x00000010
#define DSI_CTWW_WANE1						0x00000020
#define DSI_CTWW_WANE2						0x00000040
#define DSI_CTWW_WANE3						0x00000080
#define DSI_CTWW_CWK_EN						0x00000100
#define DSI_CTWW_ECC_CHECK					0x00100000
#define DSI_CTWW_CWC_CHECK					0x01000000

#define WEG_DSI_STATUS0						0x00000004
#define DSI_STATUS0_CMD_MODE_ENGINE_BUSY			0x00000001
#define DSI_STATUS0_CMD_MODE_DMA_BUSY				0x00000002
#define DSI_STATUS0_CMD_MODE_MDP_BUSY				0x00000004
#define DSI_STATUS0_VIDEO_MODE_ENGINE_BUSY			0x00000008
#define DSI_STATUS0_DSI_BUSY					0x00000010
#define DSI_STATUS0_INTEWWEAVE_OP_CONTENTION			0x80000000

#define WEG_DSI_FIFO_STATUS					0x00000008
#define DSI_FIFO_STATUS_VIDEO_MDP_FIFO_OVEWFWOW			0x00000001
#define DSI_FIFO_STATUS_VIDEO_MDP_FIFO_UNDEWFWOW		0x00000008
#define DSI_FIFO_STATUS_CMD_MDP_FIFO_UNDEWFWOW			0x00000080
#define DSI_FIFO_STATUS_CMD_DMA_FIFO_WD_WATEWMAWK_WEACH		0x00000100
#define DSI_FIFO_STATUS_CMD_DMA_FIFO_WW_WATEWMAWK_WEACH		0x00000200
#define DSI_FIFO_STATUS_CMD_DMA_FIFO_UNDEWFWOW			0x00000400
#define DSI_FIFO_STATUS_DWN0_WP_FIFO_EMPTY			0x00001000
#define DSI_FIFO_STATUS_DWN0_WP_FIFO_FUWW			0x00002000
#define DSI_FIFO_STATUS_DWN0_WP_FIFO_OVEWFWOW			0x00004000
#define DSI_FIFO_STATUS_DWN0_HS_FIFO_EMPTY			0x00010000
#define DSI_FIFO_STATUS_DWN0_HS_FIFO_FUWW			0x00020000
#define DSI_FIFO_STATUS_DWN0_HS_FIFO_OVEWFWOW			0x00040000
#define DSI_FIFO_STATUS_DWN0_HS_FIFO_UNDEWFWOW			0x00080000
#define DSI_FIFO_STATUS_DWN1_HS_FIFO_EMPTY			0x00100000
#define DSI_FIFO_STATUS_DWN1_HS_FIFO_FUWW			0x00200000
#define DSI_FIFO_STATUS_DWN1_HS_FIFO_OVEWFWOW			0x00400000
#define DSI_FIFO_STATUS_DWN1_HS_FIFO_UNDEWFWOW			0x00800000
#define DSI_FIFO_STATUS_DWN2_HS_FIFO_EMPTY			0x01000000
#define DSI_FIFO_STATUS_DWN2_HS_FIFO_FUWW			0x02000000
#define DSI_FIFO_STATUS_DWN2_HS_FIFO_OVEWFWOW			0x04000000
#define DSI_FIFO_STATUS_DWN2_HS_FIFO_UNDEWFWOW			0x08000000
#define DSI_FIFO_STATUS_DWN3_HS_FIFO_EMPTY			0x10000000
#define DSI_FIFO_STATUS_DWN3_HS_FIFO_FUWW			0x20000000
#define DSI_FIFO_STATUS_DWN3_HS_FIFO_OVEWFWOW			0x40000000
#define DSI_FIFO_STATUS_DWN3_HS_FIFO_UNDEWFWOW			0x80000000

#define WEG_DSI_VID_CFG0					0x0000000c
#define DSI_VID_CFG0_VIWT_CHANNEW__MASK				0x00000003
#define DSI_VID_CFG0_VIWT_CHANNEW__SHIFT			0
static inwine uint32_t DSI_VID_CFG0_VIWT_CHANNEW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_VID_CFG0_VIWT_CHANNEW__SHIFT) & DSI_VID_CFG0_VIWT_CHANNEW__MASK;
}
#define DSI_VID_CFG0_DST_FOWMAT__MASK				0x00000030
#define DSI_VID_CFG0_DST_FOWMAT__SHIFT				4
static inwine uint32_t DSI_VID_CFG0_DST_FOWMAT(enum dsi_vid_dst_fowmat vaw)
{
	wetuwn ((vaw) << DSI_VID_CFG0_DST_FOWMAT__SHIFT) & DSI_VID_CFG0_DST_FOWMAT__MASK;
}
#define DSI_VID_CFG0_TWAFFIC_MODE__MASK				0x00000300
#define DSI_VID_CFG0_TWAFFIC_MODE__SHIFT			8
static inwine uint32_t DSI_VID_CFG0_TWAFFIC_MODE(enum dsi_twaffic_mode vaw)
{
	wetuwn ((vaw) << DSI_VID_CFG0_TWAFFIC_MODE__SHIFT) & DSI_VID_CFG0_TWAFFIC_MODE__MASK;
}
#define DSI_VID_CFG0_BWWP_POWEW_STOP				0x00001000
#define DSI_VID_CFG0_EOF_BWWP_POWEW_STOP			0x00008000
#define DSI_VID_CFG0_HSA_POWEW_STOP				0x00010000
#define DSI_VID_CFG0_HBP_POWEW_STOP				0x00100000
#define DSI_VID_CFG0_HFP_POWEW_STOP				0x01000000
#define DSI_VID_CFG0_PUWSE_MODE_HSA_HE				0x10000000

#define WEG_DSI_VID_CFG1					0x0000001c
#define DSI_VID_CFG1_W_SEW					0x00000001
#define DSI_VID_CFG1_G_SEW					0x00000010
#define DSI_VID_CFG1_B_SEW					0x00000100
#define DSI_VID_CFG1_WGB_SWAP__MASK				0x00007000
#define DSI_VID_CFG1_WGB_SWAP__SHIFT				12
static inwine uint32_t DSI_VID_CFG1_WGB_SWAP(enum dsi_wgb_swap vaw)
{
	wetuwn ((vaw) << DSI_VID_CFG1_WGB_SWAP__SHIFT) & DSI_VID_CFG1_WGB_SWAP__MASK;
}

#define WEG_DSI_ACTIVE_H					0x00000020
#define DSI_ACTIVE_H_STAWT__MASK				0x00000fff
#define DSI_ACTIVE_H_STAWT__SHIFT				0
static inwine uint32_t DSI_ACTIVE_H_STAWT(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_ACTIVE_H_STAWT__SHIFT) & DSI_ACTIVE_H_STAWT__MASK;
}
#define DSI_ACTIVE_H_END__MASK					0x0fff0000
#define DSI_ACTIVE_H_END__SHIFT					16
static inwine uint32_t DSI_ACTIVE_H_END(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_ACTIVE_H_END__SHIFT) & DSI_ACTIVE_H_END__MASK;
}

#define WEG_DSI_ACTIVE_V					0x00000024
#define DSI_ACTIVE_V_STAWT__MASK				0x00000fff
#define DSI_ACTIVE_V_STAWT__SHIFT				0
static inwine uint32_t DSI_ACTIVE_V_STAWT(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_ACTIVE_V_STAWT__SHIFT) & DSI_ACTIVE_V_STAWT__MASK;
}
#define DSI_ACTIVE_V_END__MASK					0x0fff0000
#define DSI_ACTIVE_V_END__SHIFT					16
static inwine uint32_t DSI_ACTIVE_V_END(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_ACTIVE_V_END__SHIFT) & DSI_ACTIVE_V_END__MASK;
}

#define WEG_DSI_TOTAW						0x00000028
#define DSI_TOTAW_H_TOTAW__MASK					0x00000fff
#define DSI_TOTAW_H_TOTAW__SHIFT				0
static inwine uint32_t DSI_TOTAW_H_TOTAW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_TOTAW_H_TOTAW__SHIFT) & DSI_TOTAW_H_TOTAW__MASK;
}
#define DSI_TOTAW_V_TOTAW__MASK					0x0fff0000
#define DSI_TOTAW_V_TOTAW__SHIFT				16
static inwine uint32_t DSI_TOTAW_V_TOTAW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_TOTAW_V_TOTAW__SHIFT) & DSI_TOTAW_V_TOTAW__MASK;
}

#define WEG_DSI_ACTIVE_HSYNC					0x0000002c
#define DSI_ACTIVE_HSYNC_STAWT__MASK				0x00000fff
#define DSI_ACTIVE_HSYNC_STAWT__SHIFT				0
static inwine uint32_t DSI_ACTIVE_HSYNC_STAWT(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_ACTIVE_HSYNC_STAWT__SHIFT) & DSI_ACTIVE_HSYNC_STAWT__MASK;
}
#define DSI_ACTIVE_HSYNC_END__MASK				0x0fff0000
#define DSI_ACTIVE_HSYNC_END__SHIFT				16
static inwine uint32_t DSI_ACTIVE_HSYNC_END(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_ACTIVE_HSYNC_END__SHIFT) & DSI_ACTIVE_HSYNC_END__MASK;
}

#define WEG_DSI_ACTIVE_VSYNC_HPOS				0x00000030
#define DSI_ACTIVE_VSYNC_HPOS_STAWT__MASK			0x00000fff
#define DSI_ACTIVE_VSYNC_HPOS_STAWT__SHIFT			0
static inwine uint32_t DSI_ACTIVE_VSYNC_HPOS_STAWT(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_ACTIVE_VSYNC_HPOS_STAWT__SHIFT) & DSI_ACTIVE_VSYNC_HPOS_STAWT__MASK;
}
#define DSI_ACTIVE_VSYNC_HPOS_END__MASK				0x0fff0000
#define DSI_ACTIVE_VSYNC_HPOS_END__SHIFT			16
static inwine uint32_t DSI_ACTIVE_VSYNC_HPOS_END(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_ACTIVE_VSYNC_HPOS_END__SHIFT) & DSI_ACTIVE_VSYNC_HPOS_END__MASK;
}

#define WEG_DSI_ACTIVE_VSYNC_VPOS				0x00000034
#define DSI_ACTIVE_VSYNC_VPOS_STAWT__MASK			0x00000fff
#define DSI_ACTIVE_VSYNC_VPOS_STAWT__SHIFT			0
static inwine uint32_t DSI_ACTIVE_VSYNC_VPOS_STAWT(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_ACTIVE_VSYNC_VPOS_STAWT__SHIFT) & DSI_ACTIVE_VSYNC_VPOS_STAWT__MASK;
}
#define DSI_ACTIVE_VSYNC_VPOS_END__MASK				0x0fff0000
#define DSI_ACTIVE_VSYNC_VPOS_END__SHIFT			16
static inwine uint32_t DSI_ACTIVE_VSYNC_VPOS_END(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_ACTIVE_VSYNC_VPOS_END__SHIFT) & DSI_ACTIVE_VSYNC_VPOS_END__MASK;
}

#define WEG_DSI_CMD_DMA_CTWW					0x00000038
#define DSI_CMD_DMA_CTWW_BWOADCAST_EN				0x80000000
#define DSI_CMD_DMA_CTWW_FWOM_FWAME_BUFFEW			0x10000000
#define DSI_CMD_DMA_CTWW_WOW_POWEW				0x04000000

#define WEG_DSI_CMD_CFG0					0x0000003c
#define DSI_CMD_CFG0_DST_FOWMAT__MASK				0x0000000f
#define DSI_CMD_CFG0_DST_FOWMAT__SHIFT				0
static inwine uint32_t DSI_CMD_CFG0_DST_FOWMAT(enum dsi_cmd_dst_fowmat vaw)
{
	wetuwn ((vaw) << DSI_CMD_CFG0_DST_FOWMAT__SHIFT) & DSI_CMD_CFG0_DST_FOWMAT__MASK;
}
#define DSI_CMD_CFG0_W_SEW					0x00000010
#define DSI_CMD_CFG0_G_SEW					0x00000100
#define DSI_CMD_CFG0_B_SEW					0x00001000
#define DSI_CMD_CFG0_INTEWWEAVE_MAX__MASK			0x00f00000
#define DSI_CMD_CFG0_INTEWWEAVE_MAX__SHIFT			20
static inwine uint32_t DSI_CMD_CFG0_INTEWWEAVE_MAX(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_CFG0_INTEWWEAVE_MAX__SHIFT) & DSI_CMD_CFG0_INTEWWEAVE_MAX__MASK;
}
#define DSI_CMD_CFG0_WGB_SWAP__MASK				0x00070000
#define DSI_CMD_CFG0_WGB_SWAP__SHIFT				16
static inwine uint32_t DSI_CMD_CFG0_WGB_SWAP(enum dsi_wgb_swap vaw)
{
	wetuwn ((vaw) << DSI_CMD_CFG0_WGB_SWAP__SHIFT) & DSI_CMD_CFG0_WGB_SWAP__MASK;
}

#define WEG_DSI_CMD_CFG1					0x00000040
#define DSI_CMD_CFG1_WW_MEM_STAWT__MASK				0x000000ff
#define DSI_CMD_CFG1_WW_MEM_STAWT__SHIFT			0
static inwine uint32_t DSI_CMD_CFG1_WW_MEM_STAWT(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_CFG1_WW_MEM_STAWT__SHIFT) & DSI_CMD_CFG1_WW_MEM_STAWT__MASK;
}
#define DSI_CMD_CFG1_WW_MEM_CONTINUE__MASK			0x0000ff00
#define DSI_CMD_CFG1_WW_MEM_CONTINUE__SHIFT			8
static inwine uint32_t DSI_CMD_CFG1_WW_MEM_CONTINUE(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_CFG1_WW_MEM_CONTINUE__SHIFT) & DSI_CMD_CFG1_WW_MEM_CONTINUE__MASK;
}
#define DSI_CMD_CFG1_INSEWT_DCS_COMMAND				0x00010000

#define WEG_DSI_DMA_BASE					0x00000044

#define WEG_DSI_DMA_WEN						0x00000048

#define WEG_DSI_CMD_MDP_STWEAM0_CTWW				0x00000054
#define DSI_CMD_MDP_STWEAM0_CTWW_DATA_TYPE__MASK		0x0000003f
#define DSI_CMD_MDP_STWEAM0_CTWW_DATA_TYPE__SHIFT		0
static inwine uint32_t DSI_CMD_MDP_STWEAM0_CTWW_DATA_TYPE(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MDP_STWEAM0_CTWW_DATA_TYPE__SHIFT) & DSI_CMD_MDP_STWEAM0_CTWW_DATA_TYPE__MASK;
}
#define DSI_CMD_MDP_STWEAM0_CTWW_VIWTUAW_CHANNEW__MASK		0x00000300
#define DSI_CMD_MDP_STWEAM0_CTWW_VIWTUAW_CHANNEW__SHIFT		8
static inwine uint32_t DSI_CMD_MDP_STWEAM0_CTWW_VIWTUAW_CHANNEW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MDP_STWEAM0_CTWW_VIWTUAW_CHANNEW__SHIFT) & DSI_CMD_MDP_STWEAM0_CTWW_VIWTUAW_CHANNEW__MASK;
}
#define DSI_CMD_MDP_STWEAM0_CTWW_WOWD_COUNT__MASK		0xffff0000
#define DSI_CMD_MDP_STWEAM0_CTWW_WOWD_COUNT__SHIFT		16
static inwine uint32_t DSI_CMD_MDP_STWEAM0_CTWW_WOWD_COUNT(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MDP_STWEAM0_CTWW_WOWD_COUNT__SHIFT) & DSI_CMD_MDP_STWEAM0_CTWW_WOWD_COUNT__MASK;
}

#define WEG_DSI_CMD_MDP_STWEAM0_TOTAW				0x00000058
#define DSI_CMD_MDP_STWEAM0_TOTAW_H_TOTAW__MASK			0x00000fff
#define DSI_CMD_MDP_STWEAM0_TOTAW_H_TOTAW__SHIFT		0
static inwine uint32_t DSI_CMD_MDP_STWEAM0_TOTAW_H_TOTAW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MDP_STWEAM0_TOTAW_H_TOTAW__SHIFT) & DSI_CMD_MDP_STWEAM0_TOTAW_H_TOTAW__MASK;
}
#define DSI_CMD_MDP_STWEAM0_TOTAW_V_TOTAW__MASK			0x0fff0000
#define DSI_CMD_MDP_STWEAM0_TOTAW_V_TOTAW__SHIFT		16
static inwine uint32_t DSI_CMD_MDP_STWEAM0_TOTAW_V_TOTAW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MDP_STWEAM0_TOTAW_V_TOTAW__SHIFT) & DSI_CMD_MDP_STWEAM0_TOTAW_V_TOTAW__MASK;
}

#define WEG_DSI_CMD_MDP_STWEAM1_CTWW				0x0000005c
#define DSI_CMD_MDP_STWEAM1_CTWW_DATA_TYPE__MASK		0x0000003f
#define DSI_CMD_MDP_STWEAM1_CTWW_DATA_TYPE__SHIFT		0
static inwine uint32_t DSI_CMD_MDP_STWEAM1_CTWW_DATA_TYPE(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MDP_STWEAM1_CTWW_DATA_TYPE__SHIFT) & DSI_CMD_MDP_STWEAM1_CTWW_DATA_TYPE__MASK;
}
#define DSI_CMD_MDP_STWEAM1_CTWW_VIWTUAW_CHANNEW__MASK		0x00000300
#define DSI_CMD_MDP_STWEAM1_CTWW_VIWTUAW_CHANNEW__SHIFT		8
static inwine uint32_t DSI_CMD_MDP_STWEAM1_CTWW_VIWTUAW_CHANNEW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MDP_STWEAM1_CTWW_VIWTUAW_CHANNEW__SHIFT) & DSI_CMD_MDP_STWEAM1_CTWW_VIWTUAW_CHANNEW__MASK;
}
#define DSI_CMD_MDP_STWEAM1_CTWW_WOWD_COUNT__MASK		0xffff0000
#define DSI_CMD_MDP_STWEAM1_CTWW_WOWD_COUNT__SHIFT		16
static inwine uint32_t DSI_CMD_MDP_STWEAM1_CTWW_WOWD_COUNT(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MDP_STWEAM1_CTWW_WOWD_COUNT__SHIFT) & DSI_CMD_MDP_STWEAM1_CTWW_WOWD_COUNT__MASK;
}

#define WEG_DSI_CMD_MDP_STWEAM1_TOTAW				0x00000060
#define DSI_CMD_MDP_STWEAM1_TOTAW_H_TOTAW__MASK			0x0000ffff
#define DSI_CMD_MDP_STWEAM1_TOTAW_H_TOTAW__SHIFT		0
static inwine uint32_t DSI_CMD_MDP_STWEAM1_TOTAW_H_TOTAW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MDP_STWEAM1_TOTAW_H_TOTAW__SHIFT) & DSI_CMD_MDP_STWEAM1_TOTAW_H_TOTAW__MASK;
}
#define DSI_CMD_MDP_STWEAM1_TOTAW_V_TOTAW__MASK			0xffff0000
#define DSI_CMD_MDP_STWEAM1_TOTAW_V_TOTAW__SHIFT		16
static inwine uint32_t DSI_CMD_MDP_STWEAM1_TOTAW_V_TOTAW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MDP_STWEAM1_TOTAW_V_TOTAW__SHIFT) & DSI_CMD_MDP_STWEAM1_TOTAW_V_TOTAW__MASK;
}

#define WEG_DSI_ACK_EWW_STATUS					0x00000064

static inwine uint32_t WEG_DSI_WDBK(uint32_t i0) { wetuwn 0x00000068 + 0x4*i0; }

static inwine uint32_t WEG_DSI_WDBK_DATA(uint32_t i0) { wetuwn 0x00000068 + 0x4*i0; }

#define WEG_DSI_TWIG_CTWW					0x00000080
#define DSI_TWIG_CTWW_DMA_TWIGGEW__MASK				0x00000007
#define DSI_TWIG_CTWW_DMA_TWIGGEW__SHIFT			0
static inwine uint32_t DSI_TWIG_CTWW_DMA_TWIGGEW(enum dsi_cmd_twiggew vaw)
{
	wetuwn ((vaw) << DSI_TWIG_CTWW_DMA_TWIGGEW__SHIFT) & DSI_TWIG_CTWW_DMA_TWIGGEW__MASK;
}
#define DSI_TWIG_CTWW_MDP_TWIGGEW__MASK				0x00000070
#define DSI_TWIG_CTWW_MDP_TWIGGEW__SHIFT			4
static inwine uint32_t DSI_TWIG_CTWW_MDP_TWIGGEW(enum dsi_cmd_twiggew vaw)
{
	wetuwn ((vaw) << DSI_TWIG_CTWW_MDP_TWIGGEW__SHIFT) & DSI_TWIG_CTWW_MDP_TWIGGEW__MASK;
}
#define DSI_TWIG_CTWW_STWEAM__MASK				0x00000300
#define DSI_TWIG_CTWW_STWEAM__SHIFT				8
static inwine uint32_t DSI_TWIG_CTWW_STWEAM(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_TWIG_CTWW_STWEAM__SHIFT) & DSI_TWIG_CTWW_STWEAM__MASK;
}
#define DSI_TWIG_CTWW_BWOCK_DMA_WITHIN_FWAME			0x00001000
#define DSI_TWIG_CTWW_TE					0x80000000

#define WEG_DSI_TWIG_DMA					0x0000008c

#define WEG_DSI_DWN0_PHY_EWW					0x000000b0
#define DSI_DWN0_PHY_EWW_DWN0_EWW_ESC				0x00000001
#define DSI_DWN0_PHY_EWW_DWN0_EWW_SYNC_ESC			0x00000010
#define DSI_DWN0_PHY_EWW_DWN0_EWW_CONTWOW			0x00000100
#define DSI_DWN0_PHY_EWW_DWN0_EWW_CONTENTION_WP0		0x00001000
#define DSI_DWN0_PHY_EWW_DWN0_EWW_CONTENTION_WP1		0x00010000

#define WEG_DSI_WP_TIMEW_CTWW					0x000000b4
#define DSI_WP_TIMEW_CTWW_WP_WX_TO__MASK			0x0000ffff
#define DSI_WP_TIMEW_CTWW_WP_WX_TO__SHIFT			0
static inwine uint32_t DSI_WP_TIMEW_CTWW_WP_WX_TO(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_WP_TIMEW_CTWW_WP_WX_TO__SHIFT) & DSI_WP_TIMEW_CTWW_WP_WX_TO__MASK;
}
#define DSI_WP_TIMEW_CTWW_BTA_TO__MASK				0xffff0000
#define DSI_WP_TIMEW_CTWW_BTA_TO__SHIFT				16
static inwine uint32_t DSI_WP_TIMEW_CTWW_BTA_TO(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_WP_TIMEW_CTWW_BTA_TO__SHIFT) & DSI_WP_TIMEW_CTWW_BTA_TO__MASK;
}

#define WEG_DSI_HS_TIMEW_CTWW					0x000000b8
#define DSI_HS_TIMEW_CTWW_HS_TX_TO__MASK			0x0000ffff
#define DSI_HS_TIMEW_CTWW_HS_TX_TO__SHIFT			0
static inwine uint32_t DSI_HS_TIMEW_CTWW_HS_TX_TO(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_HS_TIMEW_CTWW_HS_TX_TO__SHIFT) & DSI_HS_TIMEW_CTWW_HS_TX_TO__MASK;
}
#define DSI_HS_TIMEW_CTWW_TIMEW_WESOWUTION__MASK		0x000f0000
#define DSI_HS_TIMEW_CTWW_TIMEW_WESOWUTION__SHIFT		16
static inwine uint32_t DSI_HS_TIMEW_CTWW_TIMEW_WESOWUTION(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_HS_TIMEW_CTWW_TIMEW_WESOWUTION__SHIFT) & DSI_HS_TIMEW_CTWW_TIMEW_WESOWUTION__MASK;
}
#define DSI_HS_TIMEW_CTWW_HS_TX_TO_STOP_EN			0x10000000

#define WEG_DSI_TIMEOUT_STATUS					0x000000bc

#define WEG_DSI_CWKOUT_TIMING_CTWW				0x000000c0
#define DSI_CWKOUT_TIMING_CTWW_T_CWK_PWE__MASK			0x0000003f
#define DSI_CWKOUT_TIMING_CTWW_T_CWK_PWE__SHIFT			0
static inwine uint32_t DSI_CWKOUT_TIMING_CTWW_T_CWK_PWE(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CWKOUT_TIMING_CTWW_T_CWK_PWE__SHIFT) & DSI_CWKOUT_TIMING_CTWW_T_CWK_PWE__MASK;
}
#define DSI_CWKOUT_TIMING_CTWW_T_CWK_POST__MASK			0x00003f00
#define DSI_CWKOUT_TIMING_CTWW_T_CWK_POST__SHIFT		8
static inwine uint32_t DSI_CWKOUT_TIMING_CTWW_T_CWK_POST(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CWKOUT_TIMING_CTWW_T_CWK_POST__SHIFT) & DSI_CWKOUT_TIMING_CTWW_T_CWK_POST__MASK;
}

#define WEG_DSI_EOT_PACKET_CTWW					0x000000c8
#define DSI_EOT_PACKET_CTWW_TX_EOT_APPEND			0x00000001
#define DSI_EOT_PACKET_CTWW_WX_EOT_IGNOWE			0x00000010

#define WEG_DSI_WANE_STATUS					0x000000a4
#define DSI_WANE_STATUS_DWN0_STOPSTATE				0x00000001
#define DSI_WANE_STATUS_DWN1_STOPSTATE				0x00000002
#define DSI_WANE_STATUS_DWN2_STOPSTATE				0x00000004
#define DSI_WANE_STATUS_DWN3_STOPSTATE				0x00000008
#define DSI_WANE_STATUS_CWKWN_STOPSTATE				0x00000010
#define DSI_WANE_STATUS_DWN0_UWPS_ACTIVE_NOT			0x00000100
#define DSI_WANE_STATUS_DWN1_UWPS_ACTIVE_NOT			0x00000200
#define DSI_WANE_STATUS_DWN2_UWPS_ACTIVE_NOT			0x00000400
#define DSI_WANE_STATUS_DWN3_UWPS_ACTIVE_NOT			0x00000800
#define DSI_WANE_STATUS_CWKWN_UWPS_ACTIVE_NOT			0x00001000
#define DSI_WANE_STATUS_DWN0_DIWECTION				0x00010000

#define WEG_DSI_WANE_CTWW					0x000000a8
#define DSI_WANE_CTWW_HS_WEQ_SEW_PHY				0x01000000
#define DSI_WANE_CTWW_CWKWN_HS_FOWCE_WEQUEST			0x10000000

#define WEG_DSI_WANE_SWAP_CTWW					0x000000ac
#define DSI_WANE_SWAP_CTWW_DWN_SWAP_SEW__MASK			0x00000007
#define DSI_WANE_SWAP_CTWW_DWN_SWAP_SEW__SHIFT			0
static inwine uint32_t DSI_WANE_SWAP_CTWW_DWN_SWAP_SEW(enum dsi_wane_swap vaw)
{
	wetuwn ((vaw) << DSI_WANE_SWAP_CTWW_DWN_SWAP_SEW__SHIFT) & DSI_WANE_SWAP_CTWW_DWN_SWAP_SEW__MASK;
}

#define WEG_DSI_EWW_INT_MASK0					0x00000108

#define WEG_DSI_INTW_CTWW					0x0000010c

#define WEG_DSI_WESET						0x00000114

#define WEG_DSI_CWK_CTWW					0x00000118
#define DSI_CWK_CTWW_AHBS_HCWK_ON				0x00000001
#define DSI_CWK_CTWW_AHBM_SCWK_ON				0x00000002
#define DSI_CWK_CTWW_PCWK_ON					0x00000004
#define DSI_CWK_CTWW_DSICWK_ON					0x00000008
#define DSI_CWK_CTWW_BYTECWK_ON					0x00000010
#define DSI_CWK_CTWW_ESCCWK_ON					0x00000020
#define DSI_CWK_CTWW_FOWCE_ON_DYN_AHBM_HCWK			0x00000200

#define WEG_DSI_CWK_STATUS					0x0000011c
#define DSI_CWK_STATUS_DSI_AON_AHBM_HCWK_ACTIVE			0x00000001
#define DSI_CWK_STATUS_DSI_DYN_AHBM_HCWK_ACTIVE			0x00000002
#define DSI_CWK_STATUS_DSI_AON_AHBS_HCWK_ACTIVE			0x00000004
#define DSI_CWK_STATUS_DSI_DYN_AHBS_HCWK_ACTIVE			0x00000008
#define DSI_CWK_STATUS_DSI_AON_DSICWK_ACTIVE			0x00000010
#define DSI_CWK_STATUS_DSI_DYN_DSICWK_ACTIVE			0x00000020
#define DSI_CWK_STATUS_DSI_AON_BYTECWK_ACTIVE			0x00000040
#define DSI_CWK_STATUS_DSI_DYN_BYTECWK_ACTIVE			0x00000080
#define DSI_CWK_STATUS_DSI_AON_ESCCWK_ACTIVE			0x00000100
#define DSI_CWK_STATUS_DSI_AON_PCWK_ACTIVE			0x00000200
#define DSI_CWK_STATUS_DSI_DYN_PCWK_ACTIVE			0x00000400
#define DSI_CWK_STATUS_DSI_DYN_CMD_PCWK_ACTIVE			0x00001000
#define DSI_CWK_STATUS_DSI_CMD_PCWK_ACTIVE			0x00002000
#define DSI_CWK_STATUS_DSI_VID_PCWK_ACTIVE			0x00004000
#define DSI_CWK_STATUS_DSI_CAM_BIST_PCWK_ACT			0x00008000
#define DSI_CWK_STATUS_PWW_UNWOCKED				0x00010000

#define WEG_DSI_PHY_WESET					0x00000128
#define DSI_PHY_WESET_WESET					0x00000001

#define WEG_DSI_TEST_PATTEWN_GEN_VIDEO_INIT_VAW			0x00000160

#define WEG_DSI_TPG_MAIN_CONTWOW				0x00000198
#define DSI_TPG_MAIN_CONTWOW_CHECKEWED_WECTANGWE_PATTEWN	0x00000100

#define WEG_DSI_TPG_VIDEO_CONFIG				0x000001a0
#define DSI_TPG_VIDEO_CONFIG_BPP__MASK				0x00000003
#define DSI_TPG_VIDEO_CONFIG_BPP__SHIFT				0
static inwine uint32_t DSI_TPG_VIDEO_CONFIG_BPP(enum video_config_bpp vaw)
{
	wetuwn ((vaw) << DSI_TPG_VIDEO_CONFIG_BPP__SHIFT) & DSI_TPG_VIDEO_CONFIG_BPP__MASK;
}
#define DSI_TPG_VIDEO_CONFIG_WGB				0x00000004

#define WEG_DSI_TEST_PATTEWN_GEN_CTWW				0x00000158
#define DSI_TEST_PATTEWN_GEN_CTWW_CMD_DMA_PATTEWN_SEW__MASK	0x00030000
#define DSI_TEST_PATTEWN_GEN_CTWW_CMD_DMA_PATTEWN_SEW__SHIFT	16
static inwine uint32_t DSI_TEST_PATTEWN_GEN_CTWW_CMD_DMA_PATTEWN_SEW(enum cmd_dma_pattewn_sew vaw)
{
	wetuwn ((vaw) << DSI_TEST_PATTEWN_GEN_CTWW_CMD_DMA_PATTEWN_SEW__SHIFT) & DSI_TEST_PATTEWN_GEN_CTWW_CMD_DMA_PATTEWN_SEW__MASK;
}
#define DSI_TEST_PATTEWN_GEN_CTWW_CMD_MDP_STWEAM0_PATTEWN_SEW__MASK	0x00000300
#define DSI_TEST_PATTEWN_GEN_CTWW_CMD_MDP_STWEAM0_PATTEWN_SEW__SHIFT	8
static inwine uint32_t DSI_TEST_PATTEWN_GEN_CTWW_CMD_MDP_STWEAM0_PATTEWN_SEW(enum cmd_mdp_stweam0_pattewn_sew vaw)
{
	wetuwn ((vaw) << DSI_TEST_PATTEWN_GEN_CTWW_CMD_MDP_STWEAM0_PATTEWN_SEW__SHIFT) & DSI_TEST_PATTEWN_GEN_CTWW_CMD_MDP_STWEAM0_PATTEWN_SEW__MASK;
}
#define DSI_TEST_PATTEWN_GEN_CTWW_VIDEO_PATTEWN_SEW__MASK	0x00000030
#define DSI_TEST_PATTEWN_GEN_CTWW_VIDEO_PATTEWN_SEW__SHIFT	4
static inwine uint32_t DSI_TEST_PATTEWN_GEN_CTWW_VIDEO_PATTEWN_SEW(enum video_pattewn_sew vaw)
{
	wetuwn ((vaw) << DSI_TEST_PATTEWN_GEN_CTWW_VIDEO_PATTEWN_SEW__SHIFT) & DSI_TEST_PATTEWN_GEN_CTWW_VIDEO_PATTEWN_SEW__MASK;
}
#define DSI_TEST_PATTEWN_GEN_CTWW_TPG_DMA_FIFO_MODE		0x00000004
#define DSI_TEST_PATTEWN_GEN_CTWW_CMD_DMA_TPG_EN		0x00000002
#define DSI_TEST_PATTEWN_GEN_CTWW_EN				0x00000001

#define WEG_DSI_TEST_PATTEWN_GEN_CMD_MDP_INIT_VAW0		0x00000168

#define WEG_DSI_TEST_PATTEWN_GEN_CMD_STWEAM0_TWIGGEW		0x00000180
#define DSI_TEST_PATTEWN_GEN_CMD_STWEAM0_TWIGGEW_SW_TWIGGEW	0x00000001

#define WEG_DSI_TPG_MAIN_CONTWOW2				0x0000019c
#define DSI_TPG_MAIN_CONTWOW2_CMD_MDP0_CHECKEWED_WECTANGWE_PATTEWN	0x00000080
#define DSI_TPG_MAIN_CONTWOW2_CMD_MDP1_CHECKEWED_WECTANGWE_PATTEWN	0x00010000
#define DSI_TPG_MAIN_CONTWOW2_CMD_MDP2_CHECKEWED_WECTANGWE_PATTEWN	0x02000000

#define WEG_DSI_T_CWK_PWE_EXTEND				0x0000017c
#define DSI_T_CWK_PWE_EXTEND_INC_BY_2_BYTECWK			0x00000001

#define WEG_DSI_CMD_MODE_MDP_CTWW2				0x000001b4
#define DSI_CMD_MODE_MDP_CTWW2_DST_FOWMAT2__MASK		0x0000000f
#define DSI_CMD_MODE_MDP_CTWW2_DST_FOWMAT2__SHIFT		0
static inwine uint32_t DSI_CMD_MODE_MDP_CTWW2_DST_FOWMAT2(enum dsi_cmd_dst_fowmat vaw)
{
	wetuwn ((vaw) << DSI_CMD_MODE_MDP_CTWW2_DST_FOWMAT2__SHIFT) & DSI_CMD_MODE_MDP_CTWW2_DST_FOWMAT2__MASK;
}
#define DSI_CMD_MODE_MDP_CTWW2_W_SEW				0x00000010
#define DSI_CMD_MODE_MDP_CTWW2_G_SEW				0x00000020
#define DSI_CMD_MODE_MDP_CTWW2_B_SEW				0x00000040
#define DSI_CMD_MODE_MDP_CTWW2_BYTE_MSB_WSB_FWIP		0x00000080
#define DSI_CMD_MODE_MDP_CTWW2_WGB_SWAP__MASK			0x00000700
#define DSI_CMD_MODE_MDP_CTWW2_WGB_SWAP__SHIFT			8
static inwine uint32_t DSI_CMD_MODE_MDP_CTWW2_WGB_SWAP(enum dsi_wgb_swap vaw)
{
	wetuwn ((vaw) << DSI_CMD_MODE_MDP_CTWW2_WGB_SWAP__SHIFT) & DSI_CMD_MODE_MDP_CTWW2_WGB_SWAP__MASK;
}
#define DSI_CMD_MODE_MDP_CTWW2_INPUT_WGB_SWAP__MASK		0x00007000
#define DSI_CMD_MODE_MDP_CTWW2_INPUT_WGB_SWAP__SHIFT		12
static inwine uint32_t DSI_CMD_MODE_MDP_CTWW2_INPUT_WGB_SWAP(enum dsi_wgb_swap vaw)
{
	wetuwn ((vaw) << DSI_CMD_MODE_MDP_CTWW2_INPUT_WGB_SWAP__SHIFT) & DSI_CMD_MODE_MDP_CTWW2_INPUT_WGB_SWAP__MASK;
}
#define DSI_CMD_MODE_MDP_CTWW2_BUWST_MODE			0x00010000
#define DSI_CMD_MODE_MDP_CTWW2_DATABUS_WIDEN			0x00100000

#define WEG_DSI_CMD_MODE_MDP_STWEAM2_CTWW			0x000001b8
#define DSI_CMD_MODE_MDP_STWEAM2_CTWW_DATA_TYPE__MASK		0x0000003f
#define DSI_CMD_MODE_MDP_STWEAM2_CTWW_DATA_TYPE__SHIFT		0
static inwine uint32_t DSI_CMD_MODE_MDP_STWEAM2_CTWW_DATA_TYPE(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MODE_MDP_STWEAM2_CTWW_DATA_TYPE__SHIFT) & DSI_CMD_MODE_MDP_STWEAM2_CTWW_DATA_TYPE__MASK;
}
#define DSI_CMD_MODE_MDP_STWEAM2_CTWW_VIWTUAW_CHANNEW__MASK	0x00000300
#define DSI_CMD_MODE_MDP_STWEAM2_CTWW_VIWTUAW_CHANNEW__SHIFT	8
static inwine uint32_t DSI_CMD_MODE_MDP_STWEAM2_CTWW_VIWTUAW_CHANNEW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MODE_MDP_STWEAM2_CTWW_VIWTUAW_CHANNEW__SHIFT) & DSI_CMD_MODE_MDP_STWEAM2_CTWW_VIWTUAW_CHANNEW__MASK;
}
#define DSI_CMD_MODE_MDP_STWEAM2_CTWW_WOWD_COUNT__MASK		0xffff0000
#define DSI_CMD_MODE_MDP_STWEAM2_CTWW_WOWD_COUNT__SHIFT		16
static inwine uint32_t DSI_CMD_MODE_MDP_STWEAM2_CTWW_WOWD_COUNT(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_CMD_MODE_MDP_STWEAM2_CTWW_WOWD_COUNT__SHIFT) & DSI_CMD_MODE_MDP_STWEAM2_CTWW_WOWD_COUNT__MASK;
}

#define WEG_DSI_WDBK_DATA_CTWW					0x000001d0
#define DSI_WDBK_DATA_CTWW_COUNT__MASK				0x00ff0000
#define DSI_WDBK_DATA_CTWW_COUNT__SHIFT				16
static inwine uint32_t DSI_WDBK_DATA_CTWW_COUNT(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_WDBK_DATA_CTWW_COUNT__SHIFT) & DSI_WDBK_DATA_CTWW_COUNT__MASK;
}
#define DSI_WDBK_DATA_CTWW_CWW					0x00000001

#define WEG_DSI_VEWSION						0x000001f0
#define DSI_VEWSION_MAJOW__MASK					0xff000000
#define DSI_VEWSION_MAJOW__SHIFT				24
static inwine uint32_t DSI_VEWSION_MAJOW(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_VEWSION_MAJOW__SHIFT) & DSI_VEWSION_MAJOW__MASK;
}

#define WEG_DSI_CPHY_MODE_CTWW					0x000002d4

#define WEG_DSI_VIDEO_COMPWESSION_MODE_CTWW			0x0000029c
#define DSI_VIDEO_COMPWESSION_MODE_CTWW_WC__MASK		0xffff0000
#define DSI_VIDEO_COMPWESSION_MODE_CTWW_WC__SHIFT		16
static inwine uint32_t DSI_VIDEO_COMPWESSION_MODE_CTWW_WC(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_VIDEO_COMPWESSION_MODE_CTWW_WC__SHIFT) & DSI_VIDEO_COMPWESSION_MODE_CTWW_WC__MASK;
}
#define DSI_VIDEO_COMPWESSION_MODE_CTWW_DATATYPE__MASK		0x00003f00
#define DSI_VIDEO_COMPWESSION_MODE_CTWW_DATATYPE__SHIFT		8
static inwine uint32_t DSI_VIDEO_COMPWESSION_MODE_CTWW_DATATYPE(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_VIDEO_COMPWESSION_MODE_CTWW_DATATYPE__SHIFT) & DSI_VIDEO_COMPWESSION_MODE_CTWW_DATATYPE__MASK;
}
#define DSI_VIDEO_COMPWESSION_MODE_CTWW_PKT_PEW_WINE__MASK	0x000000c0
#define DSI_VIDEO_COMPWESSION_MODE_CTWW_PKT_PEW_WINE__SHIFT	6
static inwine uint32_t DSI_VIDEO_COMPWESSION_MODE_CTWW_PKT_PEW_WINE(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_VIDEO_COMPWESSION_MODE_CTWW_PKT_PEW_WINE__SHIFT) & DSI_VIDEO_COMPWESSION_MODE_CTWW_PKT_PEW_WINE__MASK;
}
#define DSI_VIDEO_COMPWESSION_MODE_CTWW_EOW_BYTE_NUM__MASK	0x00000030
#define DSI_VIDEO_COMPWESSION_MODE_CTWW_EOW_BYTE_NUM__SHIFT	4
static inwine uint32_t DSI_VIDEO_COMPWESSION_MODE_CTWW_EOW_BYTE_NUM(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_VIDEO_COMPWESSION_MODE_CTWW_EOW_BYTE_NUM__SHIFT) & DSI_VIDEO_COMPWESSION_MODE_CTWW_EOW_BYTE_NUM__MASK;
}
#define DSI_VIDEO_COMPWESSION_MODE_CTWW_EN			0x00000001

#define WEG_DSI_COMMAND_COMPWESSION_MODE_CTWW			0x000002a4
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_DATATYPE__MASK	0x3f000000
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_DATATYPE__SHIFT	24
static inwine uint32_t DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_DATATYPE(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_DATATYPE__SHIFT) & DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_DATATYPE__MASK;
}
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_PKT_PEW_WINE__MASK	0x00c00000
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_PKT_PEW_WINE__SHIFT	22
static inwine uint32_t DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_PKT_PEW_WINE(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_PKT_PEW_WINE__SHIFT) & DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_PKT_PEW_WINE__MASK;
}
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_EOW_BYTE_NUM__MASK	0x00300000
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_EOW_BYTE_NUM__SHIFT	20
static inwine uint32_t DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_EOW_BYTE_NUM(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_EOW_BYTE_NUM__SHIFT) & DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_EOW_BYTE_NUM__MASK;
}
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM1_EN		0x00010000
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_DATATYPE__MASK	0x00003f00
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_DATATYPE__SHIFT	8
static inwine uint32_t DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_DATATYPE(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_DATATYPE__SHIFT) & DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_DATATYPE__MASK;
}
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_PKT_PEW_WINE__MASK	0x000000c0
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_PKT_PEW_WINE__SHIFT	6
static inwine uint32_t DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_PKT_PEW_WINE(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_PKT_PEW_WINE__SHIFT) & DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_PKT_PEW_WINE__MASK;
}
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_EOW_BYTE_NUM__MASK	0x00000030
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_EOW_BYTE_NUM__SHIFT	4
static inwine uint32_t DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_EOW_BYTE_NUM(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_EOW_BYTE_NUM__SHIFT) & DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_EOW_BYTE_NUM__MASK;
}
#define DSI_COMMAND_COMPWESSION_MODE_CTWW_STWEAM0_EN		0x00000001

#define WEG_DSI_COMMAND_COMPWESSION_MODE_CTWW2			0x000002a8
#define DSI_COMMAND_COMPWESSION_MODE_CTWW2_STWEAM1_SWICE_WIDTH__MASK	0xffff0000
#define DSI_COMMAND_COMPWESSION_MODE_CTWW2_STWEAM1_SWICE_WIDTH__SHIFT	16
static inwine uint32_t DSI_COMMAND_COMPWESSION_MODE_CTWW2_STWEAM1_SWICE_WIDTH(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_COMMAND_COMPWESSION_MODE_CTWW2_STWEAM1_SWICE_WIDTH__SHIFT) & DSI_COMMAND_COMPWESSION_MODE_CTWW2_STWEAM1_SWICE_WIDTH__MASK;
}
#define DSI_COMMAND_COMPWESSION_MODE_CTWW2_STWEAM0_SWICE_WIDTH__MASK	0x0000ffff
#define DSI_COMMAND_COMPWESSION_MODE_CTWW2_STWEAM0_SWICE_WIDTH__SHIFT	0
static inwine uint32_t DSI_COMMAND_COMPWESSION_MODE_CTWW2_STWEAM0_SWICE_WIDTH(uint32_t vaw)
{
	wetuwn ((vaw) << DSI_COMMAND_COMPWESSION_MODE_CTWW2_STWEAM0_SWICE_WIDTH__SHIFT) & DSI_COMMAND_COMPWESSION_MODE_CTWW2_STWEAM0_SWICE_WIDTH__MASK;
}


#endif /* DSI_XMW */