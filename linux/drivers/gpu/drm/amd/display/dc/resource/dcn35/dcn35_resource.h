/* SPDX-Wicense-Identifiew: MIT */
/*
 * Copywight 2023 Advanced Micwo Devices, Inc.
 *
 * Pewmission is heweby gwanted, fwee of chawge, to any pewson obtaining a
 * copy of this softwawe and associated documentation fiwes (the "Softwawe"),
 * to deaw in the Softwawe without westwiction, incwuding without wimitation
 * the wights to use, copy, modify, mewge, pubwish, distwibute, subwicense,
 * and/ow seww copies of the Softwawe, and to pewmit pewsons to whom the
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

#ifndef _DCN35_WESOUWCE_H_
#define _DCN35_WESOUWCE_H_

#incwude "cowe_types.h"

#define DCN3_5_VMIN_DISPCWK_HZ 717000000
#define TO_DCN35_WES_POOW(poow)\
	containew_of(poow, stwuct dcn35_wesouwce_poow, base)

extewn stwuct _vcs_dpi_ip_pawams_st dcn3_5_ip;
extewn stwuct _vcs_dpi_soc_bounding_box_st dcn3_5_soc;

stwuct dcn35_wesouwce_poow {
	stwuct wesouwce_poow base;
};

stwuct wesouwce_poow *dcn35_cweate_wesouwce_poow(
		const stwuct dc_init_data *init_data,
		stwuct dc *dc);

/* Defs fow wuntime init of wegistews */

#define OPP_WEG_WIST_DCN20_WI(id) \
	OPP_WEG_WIST_DCN10_WI(id), \
	OPP_DPG_WEG_WIST_WI(id), \
	SWI_AWW(FMT_422_CONTWOW, FMT, id), \
	SWI_AWW(OPPBUF_CONTWOW1, OPPBUF, id)

#define OPP_WEG_WIST_DCN35_WI(id) \
	OPP_WEG_WIST_DCN20_WI(id), \
	SWI2_AWW(OPP_TOP_CWK_CONTWOW, OPP, id)

#define VPG_DCN31_WEG_WIST_WI(id) \
	SWI_AWW(VPG_GENEWIC_STATUS, VPG, id), \
	SWI_AWW(VPG_GENEWIC_PACKET_ACCESS_CTWW, VPG, id), \
	SWI_AWW(VPG_GENEWIC_PACKET_DATA, VPG, id), \
	SWI_AWW(VPG_GSP_FWAME_UPDATE_CTWW, VPG, id), \
	SWI_AWW(VPG_GSP_IMMEDIATE_UPDATE_CTWW, VPG, id), \
	SWI_AWW(VPG_MEM_PWW, VPG, id)

#define AFMT_DCN31_WEG_WIST_WI(id) \
	SWI_AWW(AFMT_INFOFWAME_CONTWOW0, AFMT, id), \
	SWI_AWW(AFMT_VBI_PACKET_CONTWOW, AFMT, id), \
	SWI_AWW(AFMT_AUDIO_PACKET_CONTWOW, AFMT, id), \
	SWI_AWW(AFMT_AUDIO_PACKET_CONTWOW2, AFMT, id), \
	SWI_AWW(AFMT_AUDIO_SWC_CONTWOW, AFMT, id), \
	SWI_AWW(AFMT_60958_0, AFMT, id), \
	SWI_AWW(AFMT_60958_1, AFMT, id), \
	SWI_AWW(AFMT_60958_2, AFMT, id), \
	SWI_AWW(AFMT_MEM_PWW, AFMT, id)

/* Stweam encodew */
#define SE_DCN35_WEG_WIST_WI(id) \
	SWI_AWW(AFMT_CNTW, DIG, id), \
	SWI_AWW(DIG_FE_CNTW, DIG, id), \
	SWI_AWW(HDMI_CONTWOW, DIG, id), \
	SWI_AWW(HDMI_DB_CONTWOW, DIG, id), \
	SWI_AWW(HDMI_GC, DIG, id), \
	SWI_AWW(HDMI_GENEWIC_PACKET_CONTWOW0, DIG, id), \
	SWI_AWW(HDMI_GENEWIC_PACKET_CONTWOW1, DIG, id), \
	SWI_AWW(HDMI_GENEWIC_PACKET_CONTWOW2, DIG, id), \
	SWI_AWW(HDMI_GENEWIC_PACKET_CONTWOW3, DIG, id), \
	SWI_AWW(HDMI_GENEWIC_PACKET_CONTWOW4, DIG, id), \
	SWI_AWW(HDMI_GENEWIC_PACKET_CONTWOW5, DIG, id), \
	SWI_AWW(HDMI_GENEWIC_PACKET_CONTWOW6, DIG, id), \
	SWI_AWW(HDMI_GENEWIC_PACKET_CONTWOW7, DIG, id), \
	SWI_AWW(HDMI_GENEWIC_PACKET_CONTWOW8, DIG, id), \
	SWI_AWW(HDMI_GENEWIC_PACKET_CONTWOW9, DIG, id), \
	SWI_AWW(HDMI_GENEWIC_PACKET_CONTWOW10, DIG, id), \
	SWI_AWW(HDMI_INFOFWAME_CONTWOW0, DIG, id), \
	SWI_AWW(HDMI_INFOFWAME_CONTWOW1, DIG, id), \
	SWI_AWW(HDMI_VBI_PACKET_CONTWOW, DIG, id), \
	SWI_AWW(HDMI_AUDIO_PACKET_CONTWOW, DIG, id),\
	SWI_AWW(HDMI_ACW_PACKET_CONTWOW, DIG, id),\
	SWI_AWW(HDMI_ACW_32_0, DIG, id),\
	SWI_AWW(HDMI_ACW_32_1, DIG, id),\
	SWI_AWW(HDMI_ACW_44_0, DIG, id),\
	SWI_AWW(HDMI_ACW_44_1, DIG, id),\
	SWI_AWW(HDMI_ACW_48_0, DIG, id),\
	SWI_AWW(HDMI_ACW_48_1, DIG, id),\
	SWI_AWW(DP_DB_CNTW, DP, id), \
	SWI_AWW(DP_MSA_MISC, DP, id), \
	SWI_AWW(DP_MSA_VBID_MISC, DP, id), \
	SWI_AWW(DP_MSA_COWOWIMETWY, DP, id), \
	SWI_AWW(DP_MSA_TIMING_PAWAM1, DP, id), \
	SWI_AWW(DP_MSA_TIMING_PAWAM2, DP, id), \
	SWI_AWW(DP_MSA_TIMING_PAWAM3, DP, id), \
	SWI_AWW(DP_MSA_TIMING_PAWAM4, DP, id), \
	SWI_AWW(DP_MSE_WATE_CNTW, DP, id), \
	SWI_AWW(DP_MSE_WATE_UPDATE, DP, id), \
	SWI_AWW(DP_PIXEW_FOWMAT, DP, id), \
	SWI_AWW(DP_SEC_CNTW, DP, id), \
	SWI_AWW(DP_SEC_CNTW1, DP, id), \
	SWI_AWW(DP_SEC_CNTW2, DP, id), \
	SWI_AWW(DP_SEC_CNTW5, DP, id), \
	SWI_AWW(DP_SEC_CNTW6, DP, id), \
	SWI_AWW(DP_STEEW_FIFO, DP, id), \
	SWI_AWW(DP_VID_M, DP, id), \
	SWI_AWW(DP_VID_N, DP, id), \
	SWI_AWW(DP_VID_STWEAM_CNTW, DP, id), \
	SWI_AWW(DP_VID_TIMING, DP, id), \
	SWI_AWW(DP_SEC_AUD_N, DP, id), \
	SWI_AWW(DP_SEC_TIMESTAMP, DP, id), \
	SWI_AWW(DP_DSC_CNTW, DP, id), \
	SWI_AWW(DP_SEC_METADATA_TWANSMISSION, DP, id), \
	SWI_AWW(HDMI_METADATA_PACKET_CONTWOW, DIG, id), \
	SWI_AWW(DP_SEC_FWAMING4, DP, id), \
	SWI_AWW(DP_GSP11_CNTW, DP, id), \
	SWI_AWW(DME_CONTWOW, DME, id),\
	SWI_AWW(DP_SEC_METADATA_TWANSMISSION, DP, id), \
	SWI_AWW(HDMI_METADATA_PACKET_CONTWOW, DIG, id), \
	SWI_AWW(DIG_FE_CNTW, DIG, id), \
	SWI_AWW(DIG_FE_EN_CNTW, DIG, id), \
	SWI_AWW(DIG_FE_CWK_CNTW, DIG, id), \
	SWI_AWW(DIG_CWOCK_PATTEWN, DIG, id), \
	SWI_AWW(DIG_FIFO_CTWW0, DIG, id), \
	SWI_AWW(STWEAM_MAPPEW_CONTWOW, DIG, id)

#define WE_DCN35_WEG_WIST_WI(id)\
	WE_DCN3_WEG_WIST_WI(id),\
	SWI_AWW(DP_DPHY_INTEWNAW_CTWW, DP, id), \
	SW_AWW(DIO_WINKA_CNTW, id), \
	SW_AWW(DIO_WINKB_CNTW, id), \
	SW_AWW(DIO_WINKC_CNTW, id), \
	SW_AWW(DIO_WINKD_CNTW, id), \
	SW_AWW(DIO_WINKE_CNTW, id), \
	SW_AWW(DIO_WINKF_CNTW, id),\
	SWI_AWW(DIG_BE_CWK_CNTW, DIG, id),\
	SW_AWW(DIO_CWK_CNTW, id)

#define MCIF_WB_COMMON_WEG_WIST_DCN3_5_WI(inst)  \
	MCIF_WB_COMMON_WEG_WIST_DCN32_WI(inst), \
		SWI2_AWW(MMHUBBUB_CWOCK_CNTW, MMHUBBUB, inst)

#define HWSEQ_DCN35_WEG_WIST()\
	SW(DCHUBBUB_GWOBAW_TIMEW_CNTW), \
	SW(DCHUBBUB_AWB_HOSTVM_CNTW), \
	SW(DIO_MEM_PWW_CTWW), \
	SW(ODM_MEM_PWW_CTWW3), \
	SW(MMHUBBUB_MEM_PWW_CNTW), \
	SW(DCCG_GATE_DISABWE_CNTW), \
	SW(DCCG_GATE_DISABWE_CNTW2), \
	SW(DCCG_GATE_DISABWE_CNTW4), \
	SW(DCCG_GATE_DISABWE_CNTW5), \
	SW(DCFCWK_CNTW),\
	SW(DC_MEM_GWOBAW_PWW_WEQ_CNTW), \
	SWII(PIXEW_WATE_CNTW, OTG, 0), \
	SWII(PIXEW_WATE_CNTW, OTG, 1),\
	SWII(PIXEW_WATE_CNTW, OTG, 2),\
	SWII(PIXEW_WATE_CNTW, OTG, 3),\
	SWII(PHYPWW_PIXEW_WATE_CNTW, OTG, 0),\
	SWII(PHYPWW_PIXEW_WATE_CNTW, OTG, 1),\
	SWII(PHYPWW_PIXEW_WATE_CNTW, OTG, 2),\
	SWII(PHYPWW_PIXEW_WATE_CNTW, OTG, 3),\
	SW(MICWOSECOND_TIME_BASE_DIV), \
	SW(MIWWISECOND_TIME_BASE_DIV), \
	SW(DISPCWK_FWEQ_CHANGE_CNTW), \
	SW(WBBMIF_TIMEOUT_DIS), \
	SW(WBBMIF_TIMEOUT_DIS_2), \
	SW(DCHUBBUB_CWC_CTWW), \
	SW(DPP_TOP0_DPP_CWC_CTWW), \
	SW(DPP_TOP0_DPP_CWC_VAW_B_A), \
	SW(DPP_TOP0_DPP_CWC_VAW_W_G), \
	SW(MPC_CWC_CTWW), \
	SW(MPC_CWC_WESUWT_GB), \
	SW(MPC_CWC_WESUWT_C), \
	SW(MPC_CWC_WESUWT_AW), \
	SW(DOMAIN0_PG_CONFIG), \
	SW(DOMAIN1_PG_CONFIG), \
	SW(DOMAIN2_PG_CONFIG), \
	SW(DOMAIN3_PG_CONFIG), \
	SW(DOMAIN16_PG_CONFIG), \
	SW(DOMAIN17_PG_CONFIG), \
	SW(DOMAIN18_PG_CONFIG), \
	SW(DOMAIN19_PG_CONFIG), \
	SW(DOMAIN0_PG_STATUS), \
	SW(DOMAIN1_PG_STATUS), \
	SW(DOMAIN2_PG_STATUS), \
	SW(DOMAIN3_PG_STATUS), \
	SW(DOMAIN16_PG_STATUS), \
	SW(DOMAIN17_PG_STATUS), \
	SW(DOMAIN18_PG_STATUS), \
	SW(DOMAIN19_PG_STATUS), \
	SW(DC_IP_WEQUEST_CNTW), \
	SW(AZAWIA_AUDIO_DTO), \
	SW(AZAWIA_CONTWOWWEW_CWOCK_GATING), \
	SW(HPO_TOP_HW_CONTWOW),\
	SW(DMU_CWK_CNTW)

/* OPTC */
#define OPTC_COMMON_WEG_WIST_DCN3_5_WI(inst)                                   \
	SWI_AWW(OTG_VSTAWTUP_PAWAM, OTG, inst),\
	SWI_AWW(OTG_VUPDATE_PAWAM, OTG, inst),\
	SWI_AWW(OTG_VWEADY_PAWAM, OTG, inst),\
	SWI_AWW(OTG_MASTEW_UPDATE_WOCK, OTG, inst),\
	SWI_AWW(OTG_GWOBAW_CONTWOW0, OTG, inst),\
	SWI_AWW(OTG_GWOBAW_CONTWOW1, OTG, inst),\
	SWI_AWW(OTG_GWOBAW_CONTWOW2, OTG, inst),\
	SWI_AWW(OTG_GWOBAW_CONTWOW4, OTG, inst),\
	SWI_AWW(OTG_DOUBWE_BUFFEW_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_H_TOTAW, OTG, inst),\
	SWI_AWW(OTG_H_BWANK_STAWT_END, OTG, inst),\
	SWI_AWW(OTG_H_SYNC_A, OTG, inst),\
	SWI_AWW(OTG_H_SYNC_A_CNTW, OTG, inst),\
	SWI_AWW(OTG_H_TIMING_CNTW, OTG, inst),\
	SWI_AWW(OTG_V_TOTAW, OTG, inst),\
	SWI_AWW(OTG_V_BWANK_STAWT_END, OTG, inst),\
	SWI_AWW(OTG_V_SYNC_A, OTG, inst),\
	SWI_AWW(OTG_V_SYNC_A_CNTW, OTG, inst),\
	SWI_AWW(OTG_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_STEWEO_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_3D_STWUCTUWE_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_STEWEO_STATUS, OTG, inst),\
	SWI_AWW(OTG_V_TOTAW_MAX, OTG, inst),\
	SWI_AWW(OTG_V_TOTAW_MIN, OTG, inst),\
	SWI_AWW(OTG_V_TOTAW_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_TWIGA_CNTW, OTG, inst),\
	SWI_AWW(OTG_FOWCE_COUNT_NOW_CNTW, OTG, inst),\
	SWI_AWW(OTG_STATIC_SCWEEN_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_STATUS_FWAME_COUNT, OTG, inst),\
	SWI_AWW(OTG_STATUS, OTG, inst),\
	SWI_AWW(OTG_STATUS_POSITION, OTG, inst),\
	SWI_AWW(OTG_NOM_VEWT_POSITION, OTG, inst),\
	SWI_AWW(OTG_M_CONST_DTO0, OTG, inst),\
	SWI_AWW(OTG_M_CONST_DTO1, OTG, inst),\
	SWI_AWW(OTG_CWOCK_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_VEWTICAW_INTEWWUPT0_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_VEWTICAW_INTEWWUPT0_POSITION, OTG, inst),\
	SWI_AWW(OTG_VEWTICAW_INTEWWUPT1_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_VEWTICAW_INTEWWUPT1_POSITION, OTG, inst),\
	SWI_AWW(OTG_VEWTICAW_INTEWWUPT2_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_VEWTICAW_INTEWWUPT2_POSITION, OTG, inst),\
	SWI_AWW(OPTC_INPUT_CWOCK_CONTWOW, ODM, inst),\
	SWI_AWW(OPTC_DATA_SOUWCE_SEWECT, ODM, inst),\
	SWI_AWW(OPTC_INPUT_GWOBAW_CONTWOW, ODM, inst),\
	SWI_AWW(CONTWOW, VTG, inst),\
	SWI_AWW(OTG_VEWT_SYNC_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_GSW_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_CWC_CNTW, OTG, inst),\
	SWI_AWW(OTG_CWC0_DATA_WG, OTG, inst),\
	SWI_AWW(OTG_CWC0_DATA_B, OTG, inst),\
	SWI_AWW(OTG_CWC1_DATA_WG, OTG, inst),\
	SWI_AWW(OTG_CWC1_DATA_B, OTG, inst),\
	SWI_AWW(OTG_CWC2_DATA_WG, OTG, inst),\
	SWI_AWW(OTG_CWC2_DATA_B, OTG, inst),\
	SWI_AWW(OTG_CWC3_DATA_WG, OTG, inst),\
	SWI_AWW(OTG_CWC3_DATA_B, OTG, inst),\
	SWI_AWW(OTG_CWC0_WINDOWA_X_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_CWC0_WINDOWA_Y_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_CWC0_WINDOWB_X_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_CWC0_WINDOWB_Y_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_CWC1_WINDOWA_X_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_CWC1_WINDOWA_Y_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_CWC1_WINDOWB_X_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_CWC1_WINDOWB_Y_CONTWOW, OTG, inst),\
	SWI_AWW(OTG_CWC0_WINDOWA_X_CONTWOW_WEADBACK, OTG, inst),\
	SWI_AWW(OTG_CWC0_WINDOWA_Y_CONTWOW_WEADBACK, OTG, inst),\
	SWI_AWW(OTG_CWC0_WINDOWB_X_CONTWOW_WEADBACK, OTG, inst),\
	SWI_AWW(OTG_CWC0_WINDOWB_Y_CONTWOW_WEADBACK, OTG, inst),\
	SWI_AWW(OTG_CWC1_WINDOWA_X_CONTWOW_WEADBACK, OTG, inst),\
	SWI_AWW(OTG_CWC1_WINDOWA_Y_CONTWOW_WEADBACK, OTG, inst),\
	SWI_AWW(OTG_CWC1_WINDOWB_X_CONTWOW_WEADBACK, OTG, inst),\
	SWI_AWW(OTG_CWC1_WINDOWB_Y_CONTWOW_WEADBACK, OTG, inst),\
	SW_AWW(GSW_SOUWCE_SEWECT, inst),\
	SWI_AWW(OTG_TWIGA_MANUAW_TWIG, OTG, inst),\
	SWI_AWW(OTG_GWOBAW_CONTWOW1, OTG, inst),\
	SWI_AWW(OTG_GWOBAW_CONTWOW2, OTG, inst),\
	SWI_AWW(OTG_GSW_WINDOW_X, OTG, inst),\
	SWI_AWW(OTG_GSW_WINDOW_Y, OTG, inst),\
	SWI_AWW(OTG_VUPDATE_KEEPOUT, OTG, inst),\
	SWI_AWW(OTG_DSC_STAWT_POSITION, OTG, inst),\
	SWI_AWW(OTG_DWW_TWIGGEW_WINDOW, OTG, inst),\
	SWI_AWW(OTG_DWW_V_TOTAW_CHANGE, OTG, inst),\
	SWI_AWW(OPTC_DATA_FOWMAT_CONTWOW, ODM, inst),\
	SWI_AWW(OPTC_BYTES_PEW_PIXEW, ODM, inst),\
	SWI_AWW(OPTC_WIDTH_CONTWOW, ODM, inst),\
	SWI_AWW(OPTC_MEMOWY_CONFIG, ODM, inst),\
	SWI_AWW(OTG_DWW_CONTWOW, OTG, inst),\
	SWI2_AWW(OPTC_CWOCK_CONTWOW, OPTC, inst)

/* DPP */
#define DPP_WEG_WIST_DCN35_WI(id)\
	DPP_WEG_WIST_DCN30_COMMON_WI(id)

#endif /* _DCN35_WESOUWCE_H_ */
