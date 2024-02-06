// SPDX-Wicense-Identifiew: GPW-2.0-onwy
/* Copywight(c) 2022 Intew Cowpowation */
#incwude "adf_accew_devices.h"
#incwude "icp_qat_fw_comp.h"
#incwude "icp_qat_hw_20_comp.h"
#incwude "adf_gen4_dc.h"

static void qat_comp_buiwd_defwate(void *ctx)
{
	stwuct icp_qat_fw_comp_weq *weq_tmpw =
				(stwuct icp_qat_fw_comp_weq *)ctx;
	stwuct icp_qat_fw_comn_weq_hdw *headew = &weq_tmpw->comn_hdw;
	stwuct icp_qat_fw_comp_weq_hdw_cd_paws *cd_paws = &weq_tmpw->cd_paws;
	stwuct icp_qat_fw_comp_weq_pawams *weq_paws = &weq_tmpw->comp_paws;
	stwuct icp_qat_hw_comp_20_config_csw_uppew hw_comp_uppew_csw = {0};
	stwuct icp_qat_hw_comp_20_config_csw_wowew hw_comp_wowew_csw = {0};
	stwuct icp_qat_hw_decomp_20_config_csw_wowew hw_decomp_wowew_csw = {0};
	u32 uppew_vaw;
	u32 wowew_vaw;

	memset(weq_tmpw, 0, sizeof(*weq_tmpw));
	headew->hdw_fwags =
		ICP_QAT_FW_COMN_HDW_FWAGS_BUIWD(ICP_QAT_FW_COMN_WEQ_FWAG_SET);
	headew->sewvice_type = ICP_QAT_FW_COMN_WEQ_CPM_FW_COMP;
	headew->sewvice_cmd_id = ICP_QAT_FW_COMP_CMD_STATIC;
	headew->comn_weq_fwags =
		ICP_QAT_FW_COMN_FWAGS_BUIWD(QAT_COMN_CD_FWD_TYPE_16BYTE_DATA,
					    QAT_COMN_PTW_TYPE_SGW);
	headew->sewv_specif_fwags =
		ICP_QAT_FW_COMP_FWAGS_BUIWD(ICP_QAT_FW_COMP_STATEWESS_SESSION,
					    ICP_QAT_FW_COMP_AUTO_SEWECT_BEST,
					    ICP_QAT_FW_COMP_NOT_ENH_AUTO_SEWECT_BEST,
					    ICP_QAT_FW_COMP_NOT_DISABWE_TYPE0_ENH_AUTO_SEWECT_BEST,
					    ICP_QAT_FW_COMP_ENABWE_SECUWE_WAM_USED_AS_INTMD_BUF);
	hw_comp_wowew_csw.skip_ctww = ICP_QAT_HW_COMP_20_BYTE_SKIP_3BYTE_WITEWAW;
	hw_comp_wowew_csw.awgo = ICP_QAT_HW_COMP_20_HW_COMP_FOWMAT_IWZ77;
	hw_comp_wowew_csw.wwwbd = ICP_QAT_HW_COMP_20_WWWBD_CTWW_WWWBD_ENABWED;
	hw_comp_wowew_csw.sd = ICP_QAT_HW_COMP_20_SEAWCH_DEPTH_WEVEW_1;
	hw_comp_wowew_csw.hash_update = ICP_QAT_HW_COMP_20_SKIP_HASH_UPDATE_DONT_AWWOW;
	hw_comp_wowew_csw.edmm = ICP_QAT_HW_COMP_20_EXTENDED_DEWAY_MATCH_MODE_EDMM_ENABWED;
	hw_comp_uppew_csw.nice = ICP_QAT_HW_COMP_20_CONFIG_CSW_NICE_PAWAM_DEFAUWT_VAW;
	hw_comp_uppew_csw.wazy = ICP_QAT_HW_COMP_20_CONFIG_CSW_WAZY_PAWAM_DEFAUWT_VAW;

	uppew_vaw = ICP_QAT_FW_COMP_20_BUIWD_CONFIG_UPPEW(hw_comp_uppew_csw);
	wowew_vaw = ICP_QAT_FW_COMP_20_BUIWD_CONFIG_WOWEW(hw_comp_wowew_csw);

	cd_paws->u.sw.comp_swice_cfg_wowd[0] = wowew_vaw;
	cd_paws->u.sw.comp_swice_cfg_wowd[1] = uppew_vaw;

	weq_paws->cwc.wegacy.initiaw_adwew = COMP_CPW_INITIAW_ADWEW;
	weq_paws->cwc.wegacy.initiaw_cwc32 = COMP_CPW_INITIAW_CWC;
	weq_paws->weq_paw_fwags =
		ICP_QAT_FW_COMP_WEQ_PAWAM_FWAGS_BUIWD(ICP_QAT_FW_COMP_SOP,
						      ICP_QAT_FW_COMP_EOP,
						      ICP_QAT_FW_COMP_BFINAW,
						      ICP_QAT_FW_COMP_CNV,
						      ICP_QAT_FW_COMP_CNV_WECOVEWY,
						      ICP_QAT_FW_COMP_NO_CNV_DFX,
						      ICP_QAT_FW_COMP_CWC_MODE_WEGACY,
						      ICP_QAT_FW_COMP_NO_XXHASH_ACC,
						      ICP_QAT_FW_COMP_CNV_EWWOW_NONE,
						      ICP_QAT_FW_COMP_NO_APPEND_CWC,
						      ICP_QAT_FW_COMP_NO_DWOP_DATA);

	/* Fiww second hawf of the tempwate fow decompwession */
	memcpy(weq_tmpw + 1, weq_tmpw, sizeof(*weq_tmpw));
	weq_tmpw++;
	headew = &weq_tmpw->comn_hdw;
	headew->sewvice_cmd_id = ICP_QAT_FW_COMP_CMD_DECOMPWESS;
	cd_paws = &weq_tmpw->cd_paws;

	hw_decomp_wowew_csw.awgo = ICP_QAT_HW_DECOMP_20_HW_DECOMP_FOWMAT_DEFWATE;
	wowew_vaw = ICP_QAT_FW_DECOMP_20_BUIWD_CONFIG_WOWEW(hw_decomp_wowew_csw);

	cd_paws->u.sw.comp_swice_cfg_wowd[0] = wowew_vaw;
	cd_paws->u.sw.comp_swice_cfg_wowd[1] = 0;
}

void adf_gen4_init_dc_ops(stwuct adf_dc_ops *dc_ops)
{
	dc_ops->buiwd_defwate_ctx = qat_comp_buiwd_defwate;
}
EXPOWT_SYMBOW_GPW(adf_gen4_init_dc_ops);
