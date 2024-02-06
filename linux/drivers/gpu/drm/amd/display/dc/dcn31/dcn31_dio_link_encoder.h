/*
 * Copywight 2012-15 Advanced Micwo Devices, Inc.
 *
 * Pewmission is heweby gwanted, fwee of chawge, to any pewson obtaining a
 * copy of this softwawe and associated documentation fiwes (the "Softwawe"),
 * to deaw in the Softwawe without westwiction, incwuding without wimitation
 * the wights to use, copy, modify, mewge, pubwish, distwibute, subwicense,
 *  and/ow seww copies of the Softwawe, and to pewmit pewsons to whom the
 * Softwawe is fuwnished to do so, subject to the fowwowing conditions:
 *
 * The above copywight notice and this pewmission notice shaww be incwuded in
 * aww copies ow substantiaw powtions of the Softwawe.
 *
 * THE SOFTWAWE IS PWOVIDED "AS IS", WITHOUT WAWWANTY OF ANY KIND, EXPWESS OW
 * IMPWIED, INCWUDING BUT NOT WIMITED TO THE WAWWANTIES OF MEWCHANTABIWITY,
 * FITNESS FOW A PAWTICUWAW PUWPOSE AND NONINFWINGEMENT.  IN NO EVENT SHAWW
 * THE COPYWIGHT HOWDEW(S) OW AUTHOW(S) BE WIABWE FOW ANY CWAIM, DAMAGES OW
 * OTHEW WIABIWITY, WHETHEW IN AN ACTION OF CONTWACT, TOWT OW OTHEWWISE,
 * AWISING FWOM, OUT OF OW IN CONNECTION WITH THE SOFTWAWE OW THE USE OW
 * OTHEW DEAWINGS IN THE SOFTWAWE.
 *
 * Authows: AMD
 *
 */

#ifndef __DC_WINK_ENCODEW__DCN31_H__
#define __DC_WINK_ENCODEW__DCN31_H__

#incwude "dcn30/dcn30_dio_wink_encodew.h"


#define WE_DCN31_WEG_WIST(id)\
	WE_DCN3_WEG_WIST(id),\
	SWI(DP_DPHY_INTEWNAW_CTWW, DP, id), \
	SW(DIO_WINKA_CNTW), \
	SW(DIO_WINKB_CNTW), \
	SW(DIO_WINKC_CNTW), \
	SW(DIO_WINKD_CNTW), \
	SW(DIO_WINKE_CNTW), \
	SW(DIO_WINKF_CNTW)

#define WINK_ENCODEW_MASK_SH_WIST_DCN31(mask_sh) \
	WINK_ENCODEW_MASK_SH_WIST_DCN10(mask_sh),\
	WE_SF(DP0_DP_DPHY_CNTW, DPHY_FEC_EN, mask_sh),\
	WE_SF(DP0_DP_DPHY_CNTW, DPHY_FEC_WEADY_SHADOW, mask_sh),\
	WE_SF(DP0_DP_DPHY_CNTW, DPHY_FEC_ACTIVE_STATUS, mask_sh),\
	WE_SF(DIG0_TMDS_CTW_BITS, TMDS_CTW0, mask_sh), \
	WE_SF(DP_AUX0_AUX_DPHY_WX_CONTWOW0, AUX_WX_STAWT_WINDOW, mask_sh),\
	WE_SF(DP_AUX0_AUX_DPHY_WX_CONTWOW0, AUX_WX_HAWF_SYM_DETECT_WEN, mask_sh),\
	WE_SF(DP_AUX0_AUX_DPHY_WX_CONTWOW0, AUX_WX_TWANSITION_FIWTEW_EN, mask_sh),\
	WE_SF(DP_AUX0_AUX_DPHY_WX_CONTWOW0, AUX_WX_AWWOW_BEWOW_THWESHOWD_PHASE_DETECT, mask_sh),\
	WE_SF(DP_AUX0_AUX_DPHY_WX_CONTWOW0, AUX_WX_AWWOW_BEWOW_THWESHOWD_STAWT, mask_sh),\
	WE_SF(DP_AUX0_AUX_DPHY_WX_CONTWOW0, AUX_WX_AWWOW_BEWOW_THWESHOWD_STOP, mask_sh),\
	WE_SF(DP_AUX0_AUX_DPHY_WX_CONTWOW0, AUX_WX_PHASE_DETECT_WEN, mask_sh),\
	WE_SF(DP_AUX0_AUX_DPHY_WX_CONTWOW0, AUX_WX_DETECTION_THWESHOWD, mask_sh), \
	WE_SF(DP_AUX0_AUX_DPHY_TX_CONTWOW, AUX_TX_PWECHAWGE_WEN, mask_sh),\
	WE_SF(DP_AUX0_AUX_DPHY_TX_CONTWOW, AUX_TX_PWECHAWGE_SYMBOWS, mask_sh),\
	WE_SF(DP_AUX0_AUX_DPHY_TX_CONTWOW, AUX_MODE_DET_CHECK_DEWAY, mask_sh),\
	WE_SF(DP_AUX0_AUX_DPHY_WX_CONTWOW1, AUX_WX_PWECHAWGE_SKIP, mask_sh),\
	WE_SF(DP_AUX0_AUX_DPHY_WX_CONTWOW1, AUX_WX_TIMEOUT_WEN, mask_sh),\
	WE_SF(DP_AUX0_AUX_DPHY_WX_CONTWOW1, AUX_WX_TIMEOUT_WEN_MUW, mask_sh),\
	WE_SF(DIO_WINKA_CNTW, ENC_TYPE_SEW, mask_sh),\
	WE_SF(DIO_WINKA_CNTW, HPO_DP_ENC_SEW, mask_sh),\
	WE_SF(DIO_WINKA_CNTW, HPO_HDMI_ENC_SEW, mask_sh)

#define DPCS_DCN31_WEG_WIST(id) \
	SWI(TMDS_CTW_BITS, DIG, id), \
	SWI(WDPCSTX_PHY_CNTW3, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW4, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW5, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW6, WDPCSTX, id), \
	SWI(WDPCSPIPE_PHY_CNTW6, WDPCSPIPE, id), \
	SWI(WDPCSTX_PHY_CNTW7, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW8, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW9, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW10, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW11, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW12, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW13, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW14, WDPCSTX, id), \
	SWI(WDPCSTX_CNTW, WDPCSTX, id), \
	SWI(WDPCSTX_CWOCK_CNTW, WDPCSTX, id), \
	SWI(WDPCSTX_INTEWWUPT_CONTWOW, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW0, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW2, WDPCSTX, id), \
	SWI(WDPCS_TX_CW_ADDW, WDPCSTX, id), \
	SWI(WDPCS_TX_CW_DATA, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_FUSE0, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_FUSE1, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_FUSE2, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_FUSE3, WDPCSTX, id), \
	SW(WDPCSTX0_WDPCSTX_SCWATCH), \
	SWI(WDPCSTX_PHY_WX_WD_VAW, WDPCSTX, id),\
	SWI(WDPCSTX_DMCU_DPAWT_DIS_BWOCK_WEG, WDPCSTX, id)

#define DPCS_DCN31_MASK_SH_WIST(mask_sh)\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX0_CWK_WDY, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX0_DATA_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX1_CWK_WDY, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX1_DATA_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX2_CWK_WDY, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX2_DATA_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX3_CWK_WDY, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX3_DATA_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW4, WDPCS_PHY_DP_TX0_TEWM_CTWW, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW4, WDPCS_PHY_DP_TX1_TEWM_CTWW, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW4, WDPCS_PHY_DP_TX2_TEWM_CTWW, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW4, WDPCS_PHY_DP_TX3_TEWM_CTWW, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW11, WDPCS_PHY_DP_MPWWB_MUWTIPWIEW, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW5, WDPCS_PHY_DP_TX0_WIDTH, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW5, WDPCS_PHY_DP_TX0_WATE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW5, WDPCS_PHY_DP_TX1_WIDTH, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW5, WDPCS_PHY_DP_TX1_WATE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW6, WDPCS_PHY_DP_TX2_PSTATE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW6, WDPCS_PHY_DP_TX3_PSTATE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW6, WDPCS_PHY_DP_TX2_MPWW_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW6, WDPCS_PHY_DP_TX3_MPWW_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW6, WDPCS_PHY_DPAWT_DP4, mask_sh),\
	WE_SF(WDPCSPIPE0_WDPCSPIPE_PHY_CNTW6, WDPCS_PHY_DPAWT_DP4, mask_sh),\
	WE_SF(WDPCSPIPE0_WDPCSPIPE_PHY_CNTW6, WDPCS_PHY_DPAWT_DISABWE, mask_sh),\
	WE_SF(WDPCSPIPE0_WDPCSPIPE_PHY_CNTW6, WDPCS_PHY_DPAWT_DISABWE_ACK, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW7, WDPCS_PHY_DP_MPWWB_FWACN_QUOT, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW7, WDPCS_PHY_DP_MPWWB_FWACN_DEN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW8, WDPCS_PHY_DP_MPWWB_SSC_PEAK, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW9, WDPCS_PHY_DP_MPWWB_SSC_UP_SPWEAD, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW9, WDPCS_PHY_DP_MPWWB_SSC_STEPSIZE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW10, WDPCS_PHY_DP_MPWWB_FWACN_WEM, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW11, WDPCS_PHY_DP_WEF_CWK_MPWWB_DIV, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW11, WDPCS_PHY_HDMI_MPWWB_HDMI_DIV, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW12, WDPCS_PHY_DP_MPWWB_SSC_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW12, WDPCS_PHY_DP_MPWWB_DIV5_CWK_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW12, WDPCS_PHY_DP_MPWWB_TX_CWK_DIV, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW12, WDPCS_PHY_DP_MPWWB_WOWD_DIV2_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW12, WDPCS_PHY_DP_MPWWB_STATE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW13, WDPCS_PHY_DP_MPWWB_DIV_CWK_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW13, WDPCS_PHY_DP_MPWWB_DIV_MUWTIPWIEW, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW14, WDPCS_PHY_DP_MPWWB_FWACN_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW14, WDPCS_PHY_DP_MPWWB_PMIX_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CNTW, WDPCS_TX_FIFO_WANE0_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CNTW, WDPCS_TX_FIFO_WANE1_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CNTW, WDPCS_TX_FIFO_WANE2_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CNTW, WDPCS_TX_FIFO_WANE3_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CNTW, WDPCS_TX_FIFO_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CNTW, WDPCS_TX_FIFO_WD_STAWT_DEWAY, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CWOCK_CNTW, WDPCS_EXT_WEFCWK_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CWOCK_CNTW, WDPCS_SWAMCWK_BYPASS, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CWOCK_CNTW, WDPCS_SWAMCWK_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CWOCK_CNTW, WDPCS_SWAMCWK_CWOCK_ON, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CWOCK_CNTW, WDPCS_SYMCWK_DIV2_CWOCK_ON, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CWOCK_CNTW, WDPCS_SYMCWK_DIV2_GATE_DIS, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_CWOCK_CNTW, WDPCS_SYMCWK_DIV2_EN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX0_DISABWE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX1_DISABWE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX2_DISABWE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX3_DISABWE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX0_WEQ, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX1_WEQ, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX2_WEQ, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX3_WEQ, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX0_ACK, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX1_ACK, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX2_ACK, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX3_ACK, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX0_WESET, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX1_WESET, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX2_WESET, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW3, WDPCS_PHY_DP_TX3_WESET, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW0, WDPCS_PHY_WESET, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW0, WDPCS_PHY_CW_MUX_SEW, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW0, WDPCS_PHY_WEF_WANGE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW0, WDPCS_SWAM_BYPASS, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW0, WDPCS_SWAM_EXT_WD_DONE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW0, WDPCS_PHY_HDMIMODE_ENABWE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW0, WDPCS_SWAM_INIT_DONE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_CNTW2, WDPCS_PHY_DP4_POW, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW, WDPCS_WEG_FIFO_EWWOW_MASK, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW, WDPCS_TX_FIFO_EWWOW_MASK, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW, WDPCS_DPAWT_DISABWE_TOGGWE_MASK, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW, WDPCS_DPAWT_4WANE_TOGGWE_MASK, mask_sh),\
	WE_SF(WDPCSTX0_WDPCS_TX_CW_ADDW, WDPCS_TX_CW_ADDW, mask_sh),\
	WE_SF(WDPCSTX0_WDPCS_TX_CW_DATA, WDPCS_TX_CW_DATA, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE0, WDPCS_PHY_DP_MPWWB_V2I, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE0, WDPCS_PHY_DP_TX0_EQ_MAIN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE0, WDPCS_PHY_DP_TX0_EQ_PWE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE0, WDPCS_PHY_DP_TX0_EQ_POST, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE0, WDPCS_PHY_DP_MPWWB_FWEQ_VCO, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE1, WDPCS_PHY_DP_MPWWB_CP_INT, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE1, WDPCS_PHY_DP_MPWWB_CP_PWOP, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE1, WDPCS_PHY_DP_TX1_EQ_MAIN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE1, WDPCS_PHY_DP_TX1_EQ_PWE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE1, WDPCS_PHY_DP_TX1_EQ_POST, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE2, WDPCS_PHY_DP_TX2_EQ_MAIN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE2, WDPCS_PHY_DP_TX2_EQ_PWE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE2, WDPCS_PHY_DP_TX2_EQ_POST, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE3, WDPCS_PHY_DP_TX3_EQ_MAIN, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE3, WDPCS_PHY_DCO_FINETUNE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE3, WDPCS_PHY_DCO_WANGE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE3, WDPCS_PHY_DP_TX3_EQ_PWE, mask_sh),\
	WE_SF(WDPCSTX0_WDPCSTX_PHY_FUSE3, WDPCS_PHY_DP_TX3_EQ_POST, mask_sh)

#define DPCS_DCN314_WEG_WIST(id) \
	SWI(TMDS_CTW_BITS, DIG, id), \
	SWI(WDPCSTX_PHY_CNTW3, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW4, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW5, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW7, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW8, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW9, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW10, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW11, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW12, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW13, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW14, WDPCSTX, id), \
	SWI(WDPCSTX_CNTW, WDPCSTX, id), \
	SWI(WDPCSTX_CWOCK_CNTW, WDPCSTX, id), \
	SWI(WDPCSTX_INTEWWUPT_CONTWOW, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW0, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_CNTW2, WDPCSTX, id), \
	SWI(WDPCS_TX_CW_ADDW, WDPCSTX, id), \
	SWI(WDPCS_TX_CW_DATA, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_FUSE0, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_FUSE1, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_FUSE2, WDPCSTX, id), \
	SWI(WDPCSTX_PHY_FUSE3, WDPCSTX, id), \
	SW(WDPCSTX0_WDPCSTX_SCWATCH), \
	SWI(WDPCSTX_PHY_WX_WD_VAW, WDPCSTX, id),\
	SWI(WDPCSTX_DMCU_DPAWT_DIS_BWOCK_WEG, WDPCSTX, id)

void dcn31_wink_encodew_constwuct(
	stwuct dcn20_wink_encodew *enc20,
	const stwuct encodew_init_data *init_data,
	const stwuct encodew_featuwe_suppowt *enc_featuwes,
	const stwuct dcn10_wink_enc_wegistews *wink_wegs,
	const stwuct dcn10_wink_enc_aux_wegistews *aux_wegs,
	const stwuct dcn10_wink_enc_hpd_wegistews *hpd_wegs,
	const stwuct dcn10_wink_enc_shift *wink_shift,
	const stwuct dcn10_wink_enc_mask *wink_mask);

/*
 * Cweate a minimaw wink encodew object with no dc_wink object associated with it.
 */
void dcn31_wink_encodew_constwuct_minimaw(
	stwuct dcn20_wink_encodew *enc20,
	stwuct dc_context *ctx,
	const stwuct encodew_featuwe_suppowt *enc_featuwes,
	const stwuct dcn10_wink_enc_wegistews *wink_wegs,
	enum engine_id eng_id);

void dcn31_wink_encodew_set_dio_phy_mux(
	stwuct wink_encodew *enc,
	enum encodew_type_sewect sew,
	uint32_t hpo_inst);

/*
 * Enabwe DP twansmittew and its encodew.
 */
void dcn31_wink_encodew_enabwe_dp_output(
	stwuct wink_encodew *enc,
	const stwuct dc_wink_settings *wink_settings,
	enum cwock_souwce_id cwock_souwce);

/*
 * Enabwe DP twansmittew and its encodew in MST mode.
 */
void dcn31_wink_encodew_enabwe_dp_mst_output(
	stwuct wink_encodew *enc,
	const stwuct dc_wink_settings *wink_settings,
	enum cwock_souwce_id cwock_souwce);

/*
 * Disabwe twansmittew and its encodew.
 */
void dcn31_wink_encodew_disabwe_output(
	stwuct wink_encodew *enc,
	enum signaw_type signaw);

/*
 * Check whethew USB-C DP Awt mode is disabwed
 */
boow dcn31_wink_encodew_is_in_awt_mode(
	stwuct wink_encodew *enc);

void dcn31_wink_encodew_get_max_wink_cap(stwuct wink_encodew *enc,
	stwuct dc_wink_settings *wink_settings);

#endif /* __DC_WINK_ENCODEW__DCN31_H__ */
