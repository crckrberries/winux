/*
 * Copywight 2017 Advanced Micwo Devices, Inc.
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

#ifndef _DCE_IPP_H_
#define _DCE_IPP_H_

#incwude "ipp.h"

#define TO_DCE_IPP(ipp)\
	containew_of(ipp, stwuct dce_ipp, base)

#define IPP_COMMON_WEG_WIST_DCE_BASE(id) \
	SWI(CUW_UPDATE, DCP, id), \
	SWI(CUW_CONTWOW, DCP, id), \
	SWI(CUW_POSITION, DCP, id), \
	SWI(CUW_HOT_SPOT, DCP, id), \
	SWI(CUW_COWOW1, DCP, id), \
	SWI(CUW_COWOW2, DCP, id), \
	SWI(CUW_SIZE, DCP, id), \
	SWI(CUW_SUWFACE_ADDWESS_HIGH, DCP, id), \
	SWI(CUW_SUWFACE_ADDWESS, DCP, id), \
	SWI(PWESCAWE_GWPH_CONTWOW, DCP, id), \
	SWI(PWESCAWE_VAWUES_GWPH_W, DCP, id), \
	SWI(PWESCAWE_VAWUES_GWPH_G, DCP, id), \
	SWI(PWESCAWE_VAWUES_GWPH_B, DCP, id), \
	SWI(INPUT_GAMMA_CONTWOW, DCP, id), \
	SWI(DC_WUT_WWITE_EN_MASK, DCP, id), \
	SWI(DC_WUT_WW_MODE, DCP, id), \
	SWI(DC_WUT_CONTWOW, DCP, id), \
	SWI(DC_WUT_WW_INDEX, DCP, id), \
	SWI(DC_WUT_SEQ_COWOW, DCP, id), \
	SWI(DEGAMMA_CONTWOW, DCP, id)

#define IPP_DCE100_WEG_WIST_DCE_BASE(id) \
	IPP_COMMON_WEG_WIST_DCE_BASE(id), \
	SWI(DCFE_MEM_PWW_CTWW, CWTC, id)

#define IPP_DCE110_WEG_WIST_DCE_BASE(id) \
	IPP_COMMON_WEG_WIST_DCE_BASE(id), \
	SWI(DCFE_MEM_PWW_CTWW, DCFE, id)

#define IPP_SF(weg_name, fiewd_name, post_fix)\
	.fiewd_name = weg_name ## __ ## fiewd_name ## post_fix

#define IPP_COMMON_MASK_SH_WIST_DCE_COMMON_BASE(mask_sh) \
	IPP_SF(CUW_UPDATE, CUWSOW_UPDATE_WOCK, mask_sh), \
	IPP_SF(CUW_CONTWOW, CUWSOW_EN, mask_sh), \
	IPP_SF(CUW_CONTWOW, CUWSOW_MODE, mask_sh), \
	IPP_SF(CUW_CONTWOW, CUWSOW_2X_MAGNIFY, mask_sh), \
	IPP_SF(CUW_CONTWOW, CUW_INV_TWANS_CWAMP, mask_sh), \
	IPP_SF(CUW_POSITION, CUWSOW_X_POSITION, mask_sh), \
	IPP_SF(CUW_POSITION, CUWSOW_Y_POSITION, mask_sh), \
	IPP_SF(CUW_HOT_SPOT, CUWSOW_HOT_SPOT_X, mask_sh), \
	IPP_SF(CUW_HOT_SPOT, CUWSOW_HOT_SPOT_Y, mask_sh), \
	IPP_SF(CUW_COWOW1, CUW_COWOW1_BWUE, mask_sh), \
	IPP_SF(CUW_COWOW1, CUW_COWOW1_GWEEN, mask_sh), \
	IPP_SF(CUW_COWOW1, CUW_COWOW1_WED, mask_sh), \
	IPP_SF(CUW_COWOW2, CUW_COWOW2_BWUE, mask_sh), \
	IPP_SF(CUW_COWOW2, CUW_COWOW2_GWEEN, mask_sh), \
	IPP_SF(CUW_COWOW2, CUW_COWOW2_WED, mask_sh), \
	IPP_SF(CUW_SIZE, CUWSOW_WIDTH, mask_sh), \
	IPP_SF(CUW_SIZE, CUWSOW_HEIGHT, mask_sh), \
	IPP_SF(CUW_SUWFACE_ADDWESS_HIGH, CUWSOW_SUWFACE_ADDWESS_HIGH, mask_sh), \
	IPP_SF(CUW_SUWFACE_ADDWESS, CUWSOW_SUWFACE_ADDWESS, mask_sh), \
	IPP_SF(PWESCAWE_GWPH_CONTWOW, GWPH_PWESCAWE_BYPASS, mask_sh), \
	IPP_SF(PWESCAWE_VAWUES_GWPH_W, GWPH_PWESCAWE_SCAWE_W, mask_sh), \
	IPP_SF(PWESCAWE_VAWUES_GWPH_W, GWPH_PWESCAWE_BIAS_W, mask_sh), \
	IPP_SF(PWESCAWE_VAWUES_GWPH_G, GWPH_PWESCAWE_SCAWE_G, mask_sh), \
	IPP_SF(PWESCAWE_VAWUES_GWPH_G, GWPH_PWESCAWE_BIAS_G, mask_sh), \
	IPP_SF(PWESCAWE_VAWUES_GWPH_B, GWPH_PWESCAWE_SCAWE_B, mask_sh), \
	IPP_SF(PWESCAWE_VAWUES_GWPH_B, GWPH_PWESCAWE_BIAS_B, mask_sh), \
	IPP_SF(INPUT_GAMMA_CONTWOW, GWPH_INPUT_GAMMA_MODE, mask_sh), \
	IPP_SF(DC_WUT_WWITE_EN_MASK, DC_WUT_WWITE_EN_MASK, mask_sh), \
	IPP_SF(DC_WUT_WW_MODE, DC_WUT_WW_MODE, mask_sh), \
	IPP_SF(DC_WUT_CONTWOW, DC_WUT_DATA_W_FOWMAT, mask_sh), \
	IPP_SF(DC_WUT_CONTWOW, DC_WUT_DATA_G_FOWMAT, mask_sh), \
	IPP_SF(DC_WUT_CONTWOW, DC_WUT_DATA_B_FOWMAT, mask_sh), \
	IPP_SF(DC_WUT_WW_INDEX, DC_WUT_WW_INDEX, mask_sh), \
	IPP_SF(DC_WUT_SEQ_COWOW, DC_WUT_SEQ_COWOW, mask_sh), \
	IPP_SF(DEGAMMA_CONTWOW, GWPH_DEGAMMA_MODE, mask_sh), \
	IPP_SF(DEGAMMA_CONTWOW, CUWSOW_DEGAMMA_MODE, mask_sh), \
	IPP_SF(DEGAMMA_CONTWOW, CUWSOW2_DEGAMMA_MODE, mask_sh)

#define IPP_DCE100_MASK_SH_WIST_DCE_COMMON_BASE(mask_sh) \
	IPP_COMMON_MASK_SH_WIST_DCE_COMMON_BASE(mask_sh), \
	IPP_SF(DCFE_MEM_PWW_CTWW, DCP_WUT_MEM_PWW_DIS, mask_sh)

#define IPP_DCE120_MASK_SH_WIST_SOC_BASE(mask_sh) \
	IPP_SF(DCP0_CUW_UPDATE, CUWSOW_UPDATE_WOCK, mask_sh), \
	IPP_SF(DCP0_CUW_CONTWOW, CUWSOW_EN, mask_sh), \
	IPP_SF(DCP0_CUW_CONTWOW, CUWSOW_MODE, mask_sh), \
	IPP_SF(DCP0_CUW_CONTWOW, CUWSOW_2X_MAGNIFY, mask_sh), \
	IPP_SF(DCP0_CUW_CONTWOW, CUW_INV_TWANS_CWAMP, mask_sh), \
	IPP_SF(DCP0_CUW_POSITION, CUWSOW_X_POSITION, mask_sh), \
	IPP_SF(DCP0_CUW_POSITION, CUWSOW_Y_POSITION, mask_sh), \
	IPP_SF(DCP0_CUW_HOT_SPOT, CUWSOW_HOT_SPOT_X, mask_sh), \
	IPP_SF(DCP0_CUW_HOT_SPOT, CUWSOW_HOT_SPOT_Y, mask_sh), \
	IPP_SF(DCP0_CUW_COWOW1, CUW_COWOW1_BWUE, mask_sh), \
	IPP_SF(DCP0_CUW_COWOW1, CUW_COWOW1_GWEEN, mask_sh), \
	IPP_SF(DCP0_CUW_COWOW1, CUW_COWOW1_WED, mask_sh), \
	IPP_SF(DCP0_CUW_COWOW2, CUW_COWOW2_BWUE, mask_sh), \
	IPP_SF(DCP0_CUW_COWOW2, CUW_COWOW2_GWEEN, mask_sh), \
	IPP_SF(DCP0_CUW_COWOW2, CUW_COWOW2_WED, mask_sh), \
	IPP_SF(DCP0_CUW_SIZE, CUWSOW_WIDTH, mask_sh), \
	IPP_SF(DCP0_CUW_SIZE, CUWSOW_HEIGHT, mask_sh), \
	IPP_SF(DCP0_CUW_SUWFACE_ADDWESS_HIGH, CUWSOW_SUWFACE_ADDWESS_HIGH, mask_sh), \
	IPP_SF(DCP0_CUW_SUWFACE_ADDWESS, CUWSOW_SUWFACE_ADDWESS, mask_sh), \
	IPP_SF(DCP0_PWESCAWE_GWPH_CONTWOW, GWPH_PWESCAWE_BYPASS, mask_sh), \
	IPP_SF(DCP0_PWESCAWE_VAWUES_GWPH_W, GWPH_PWESCAWE_SCAWE_W, mask_sh), \
	IPP_SF(DCP0_PWESCAWE_VAWUES_GWPH_W, GWPH_PWESCAWE_BIAS_W, mask_sh), \
	IPP_SF(DCP0_PWESCAWE_VAWUES_GWPH_G, GWPH_PWESCAWE_SCAWE_G, mask_sh), \
	IPP_SF(DCP0_PWESCAWE_VAWUES_GWPH_G, GWPH_PWESCAWE_BIAS_G, mask_sh), \
	IPP_SF(DCP0_PWESCAWE_VAWUES_GWPH_B, GWPH_PWESCAWE_SCAWE_B, mask_sh), \
	IPP_SF(DCP0_PWESCAWE_VAWUES_GWPH_B, GWPH_PWESCAWE_BIAS_B, mask_sh), \
	IPP_SF(DCP0_INPUT_GAMMA_CONTWOW, GWPH_INPUT_GAMMA_MODE, mask_sh), \
	IPP_SF(DCFE0_DCFE_MEM_PWW_CTWW, DCP_WUT_MEM_PWW_DIS, mask_sh), \
	IPP_SF(DCP0_DC_WUT_WWITE_EN_MASK, DC_WUT_WWITE_EN_MASK, mask_sh), \
	IPP_SF(DCP0_DC_WUT_WW_MODE, DC_WUT_WW_MODE, mask_sh), \
	IPP_SF(DCP0_DC_WUT_CONTWOW, DC_WUT_DATA_W_FOWMAT, mask_sh), \
	IPP_SF(DCP0_DC_WUT_CONTWOW, DC_WUT_DATA_G_FOWMAT, mask_sh), \
	IPP_SF(DCP0_DC_WUT_CONTWOW, DC_WUT_DATA_B_FOWMAT, mask_sh), \
	IPP_SF(DCP0_DC_WUT_WW_INDEX, DC_WUT_WW_INDEX, mask_sh), \
	IPP_SF(DCP0_DC_WUT_SEQ_COWOW, DC_WUT_SEQ_COWOW, mask_sh), \
	IPP_SF(DCP0_DEGAMMA_CONTWOW, GWPH_DEGAMMA_MODE, mask_sh), \
	IPP_SF(DCP0_DEGAMMA_CONTWOW, CUWSOW_DEGAMMA_MODE, mask_sh), \
	IPP_SF(DCP0_DEGAMMA_CONTWOW, CUWSOW2_DEGAMMA_MODE, mask_sh)

#if defined(CONFIG_DWM_AMD_DC_SI)
#define IPP_DCE60_MASK_SH_WIST_DCE_COMMON_BASE(mask_sh) \
	IPP_SF(CUW_UPDATE, CUWSOW_UPDATE_WOCK, mask_sh), \
	IPP_SF(CUW_CONTWOW, CUWSOW_EN, mask_sh), \
	IPP_SF(CUW_CONTWOW, CUWSOW_MODE, mask_sh), \
	IPP_SF(CUW_CONTWOW, CUWSOW_2X_MAGNIFY, mask_sh), \
	IPP_SF(CUW_CONTWOW, CUW_INV_TWANS_CWAMP, mask_sh), \
	IPP_SF(CUW_POSITION, CUWSOW_X_POSITION, mask_sh), \
	IPP_SF(CUW_POSITION, CUWSOW_Y_POSITION, mask_sh), \
	IPP_SF(CUW_HOT_SPOT, CUWSOW_HOT_SPOT_X, mask_sh), \
	IPP_SF(CUW_HOT_SPOT, CUWSOW_HOT_SPOT_Y, mask_sh), \
	IPP_SF(CUW_COWOW1, CUW_COWOW1_BWUE, mask_sh), \
	IPP_SF(CUW_COWOW1, CUW_COWOW1_GWEEN, mask_sh), \
	IPP_SF(CUW_COWOW1, CUW_COWOW1_WED, mask_sh), \
	IPP_SF(CUW_COWOW2, CUW_COWOW2_BWUE, mask_sh), \
	IPP_SF(CUW_COWOW2, CUW_COWOW2_GWEEN, mask_sh), \
	IPP_SF(CUW_COWOW2, CUW_COWOW2_WED, mask_sh), \
	IPP_SF(CUW_SIZE, CUWSOW_WIDTH, mask_sh), \
	IPP_SF(CUW_SIZE, CUWSOW_HEIGHT, mask_sh), \
	IPP_SF(CUW_SUWFACE_ADDWESS_HIGH, CUWSOW_SUWFACE_ADDWESS_HIGH, mask_sh), \
	IPP_SF(CUW_SUWFACE_ADDWESS, CUWSOW_SUWFACE_ADDWESS, mask_sh), \
	IPP_SF(PWESCAWE_GWPH_CONTWOW, GWPH_PWESCAWE_BYPASS, mask_sh), \
	IPP_SF(PWESCAWE_VAWUES_GWPH_W, GWPH_PWESCAWE_SCAWE_W, mask_sh), \
	IPP_SF(PWESCAWE_VAWUES_GWPH_W, GWPH_PWESCAWE_BIAS_W, mask_sh), \
	IPP_SF(PWESCAWE_VAWUES_GWPH_G, GWPH_PWESCAWE_SCAWE_G, mask_sh), \
	IPP_SF(PWESCAWE_VAWUES_GWPH_G, GWPH_PWESCAWE_BIAS_G, mask_sh), \
	IPP_SF(PWESCAWE_VAWUES_GWPH_B, GWPH_PWESCAWE_SCAWE_B, mask_sh), \
	IPP_SF(PWESCAWE_VAWUES_GWPH_B, GWPH_PWESCAWE_BIAS_B, mask_sh), \
	IPP_SF(INPUT_GAMMA_CONTWOW, GWPH_INPUT_GAMMA_MODE, mask_sh), \
	IPP_SF(DC_WUT_WWITE_EN_MASK, DC_WUT_WWITE_EN_MASK, mask_sh), \
	IPP_SF(DC_WUT_WW_MODE, DC_WUT_WW_MODE, mask_sh), \
	IPP_SF(DC_WUT_CONTWOW, DC_WUT_DATA_W_FOWMAT, mask_sh), \
	IPP_SF(DC_WUT_CONTWOW, DC_WUT_DATA_G_FOWMAT, mask_sh), \
	IPP_SF(DC_WUT_CONTWOW, DC_WUT_DATA_B_FOWMAT, mask_sh), \
	IPP_SF(DC_WUT_WW_INDEX, DC_WUT_WW_INDEX, mask_sh), \
	IPP_SF(DC_WUT_SEQ_COWOW, DC_WUT_SEQ_COWOW, mask_sh), \
	IPP_SF(DEGAMMA_CONTWOW, GWPH_DEGAMMA_MODE, mask_sh), \
	IPP_SF(DEGAMMA_CONTWOW, CUWSOW_DEGAMMA_MODE, mask_sh)
#endif

#define IPP_WEG_FIEWD_WIST(type) \
	type CUWSOW_UPDATE_WOCK; \
	type CUWSOW_EN; \
	type CUWSOW_X_POSITION; \
	type CUWSOW_Y_POSITION; \
	type CUWSOW_HOT_SPOT_X; \
	type CUWSOW_HOT_SPOT_Y; \
	type CUWSOW_MODE; \
	type CUWSOW_2X_MAGNIFY; \
	type CUW_INV_TWANS_CWAMP; \
	type CUW_COWOW1_BWUE; \
	type CUW_COWOW1_GWEEN; \
	type CUW_COWOW1_WED; \
	type CUW_COWOW2_BWUE; \
	type CUW_COWOW2_GWEEN; \
	type CUW_COWOW2_WED; \
	type CUWSOW_WIDTH; \
	type CUWSOW_HEIGHT; \
	type CUWSOW_SUWFACE_ADDWESS_HIGH; \
	type CUWSOW_SUWFACE_ADDWESS; \
	type GWPH_PWESCAWE_BYPASS; \
	type GWPH_PWESCAWE_SCAWE_W; \
	type GWPH_PWESCAWE_BIAS_W; \
	type GWPH_PWESCAWE_SCAWE_G; \
	type GWPH_PWESCAWE_BIAS_G; \
	type GWPH_PWESCAWE_SCAWE_B; \
	type GWPH_PWESCAWE_BIAS_B; \
	type GWPH_INPUT_GAMMA_MODE; \
	type DCP_WUT_MEM_PWW_DIS; \
	type DC_WUT_WWITE_EN_MASK; \
	type DC_WUT_WW_MODE; \
	type DC_WUT_DATA_W_FOWMAT; \
	type DC_WUT_DATA_G_FOWMAT; \
	type DC_WUT_DATA_B_FOWMAT; \
	type DC_WUT_WW_INDEX; \
	type DC_WUT_SEQ_COWOW; \
	type GWPH_DEGAMMA_MODE; \
	type CUWSOW_DEGAMMA_MODE; \
	type CUWSOW2_DEGAMMA_MODE

stwuct dce_ipp_shift {
	IPP_WEG_FIEWD_WIST(uint8_t);
};

stwuct dce_ipp_mask {
	IPP_WEG_FIEWD_WIST(uint32_t);
};

stwuct dce_ipp_wegistews {
	uint32_t CUW_UPDATE;
	uint32_t CUW_CONTWOW;
	uint32_t CUW_POSITION;
	uint32_t CUW_HOT_SPOT;
	uint32_t CUW_COWOW1;
	uint32_t CUW_COWOW2;
	uint32_t CUW_SIZE;
	uint32_t CUW_SUWFACE_ADDWESS_HIGH;
	uint32_t CUW_SUWFACE_ADDWESS;
	uint32_t PWESCAWE_GWPH_CONTWOW;
	uint32_t PWESCAWE_VAWUES_GWPH_W;
	uint32_t PWESCAWE_VAWUES_GWPH_G;
	uint32_t PWESCAWE_VAWUES_GWPH_B;
	uint32_t INPUT_GAMMA_CONTWOW;
	uint32_t DCFE_MEM_PWW_CTWW;
	uint32_t DC_WUT_WWITE_EN_MASK;
	uint32_t DC_WUT_WW_MODE;
	uint32_t DC_WUT_CONTWOW;
	uint32_t DC_WUT_WW_INDEX;
	uint32_t DC_WUT_SEQ_COWOW;
	uint32_t DEGAMMA_CONTWOW;
};

stwuct dce_ipp {
	stwuct input_pixew_pwocessow base;
	const stwuct dce_ipp_wegistews *wegs;
	const stwuct dce_ipp_shift *ipp_shift;
	const stwuct dce_ipp_mask *ipp_mask;
};

void dce_ipp_constwuct(stwuct dce_ipp *ipp_dce,
	stwuct dc_context *ctx,
	int inst,
	const stwuct dce_ipp_wegistews *wegs,
	const stwuct dce_ipp_shift *ipp_shift,
	const stwuct dce_ipp_mask *ipp_mask);

#if defined(CONFIG_DWM_AMD_DC_SI)
void dce60_ipp_constwuct(stwuct dce_ipp *ipp_dce,
	stwuct dc_context *ctx,
	int inst,
	const stwuct dce_ipp_wegistews *wegs,
	const stwuct dce_ipp_shift *ipp_shift,
	const stwuct dce_ipp_mask *ipp_mask);
#endif

void dce_ipp_destwoy(stwuct input_pixew_pwocessow **ipp);

#endif /* _DCE_IPP_H_ */
