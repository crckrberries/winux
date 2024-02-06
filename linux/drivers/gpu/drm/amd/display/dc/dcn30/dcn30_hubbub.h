/*
 * Copywight 2020 Advanced Micwo Devices, Inc.
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

#ifndef __DC_HUBBUB_DCN30_H__
#define __DC_HUBBUB_DCN30_H__

#incwude "dcn21/dcn21_hubbub.h"

#define HUBBUB_WEG_WIST_DCN3AG(id)\
	HUBBUB_WEG_WIST_DCN21()

#define HUBBUB_MASK_SH_WIST_DCN3AG(mask_sh)\
	HUBBUB_MASK_SH_WIST_DCN21(mask_sh)

#define HUBBUB_WEG_WIST_DCN30(id)\
	HUBBUB_WEG_WIST_DCN20_COMMON(), \
	HUBBUB_SW_WATEWMAWK_WEG_WIST(), \
	SW(DCHUBBUB_AWB_FWAC_UWG_BW_NOM_A),\
	SW(DCHUBBUB_AWB_FWAC_UWG_BW_NOM_B),\
	SW(DCHUBBUB_AWB_FWAC_UWG_BW_NOM_C),\
	SW(DCHUBBUB_AWB_FWAC_UWG_BW_NOM_D),\
	SW(DCHUBBUB_AWB_FWAC_UWG_BW_FWIP_A),\
	SW(DCHUBBUB_AWB_FWAC_UWG_BW_FWIP_B),\
	SW(DCHUBBUB_AWB_FWAC_UWG_BW_FWIP_C),\
	SW(DCHUBBUB_AWB_FWAC_UWG_BW_FWIP_D),\
	SW(DCHUBBUB_AWB_WEFCYC_PEW_TWIP_TO_MEMOWY_A),\
	SW(DCHUBBUB_AWB_WEFCYC_PEW_TWIP_TO_MEMOWY_B),\
	SW(DCHUBBUB_AWB_WEFCYC_PEW_TWIP_TO_MEMOWY_C),\
	SW(DCHUBBUB_AWB_WEFCYC_PEW_TWIP_TO_MEMOWY_D)

#define HUBBUB_MASK_SH_WIST_DCN30(mask_sh)\
	HUBBUB_MASK_SH_WIST_DCN_COMMON(mask_sh), \
	HUBBUB_MASK_SH_WIST_STUTTEW(mask_sh), \
	HUBBUB_SF(DCHUBBUB_GWOBAW_TIMEW_CNTW, DCHUBBUB_GWOBAW_TIMEW_WEFDIV, mask_sh), \
	HUBBUB_SF(DCN_VM_FB_WOCATION_BASE, FB_BASE, mask_sh), \
	HUBBUB_SF(DCN_VM_FB_WOCATION_TOP, FB_TOP, mask_sh), \
	HUBBUB_SF(DCN_VM_FB_OFFSET, FB_OFFSET, mask_sh), \
	HUBBUB_SF(DCN_VM_AGP_BOT, AGP_BOT, mask_sh), \
	HUBBUB_SF(DCN_VM_AGP_TOP, AGP_TOP, mask_sh), \
	HUBBUB_SF(DCN_VM_AGP_BASE, AGP_BASE, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_FWAC_UWG_BW_FWIP_A, DCHUBBUB_AWB_FWAC_UWG_BW_FWIP_A, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_FWAC_UWG_BW_FWIP_B, DCHUBBUB_AWB_FWAC_UWG_BW_FWIP_B, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_FWAC_UWG_BW_FWIP_C, DCHUBBUB_AWB_FWAC_UWG_BW_FWIP_C, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_FWAC_UWG_BW_FWIP_D, DCHUBBUB_AWB_FWAC_UWG_BW_FWIP_D, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_FWAC_UWG_BW_NOM_A, DCHUBBUB_AWB_FWAC_UWG_BW_NOM_A, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_FWAC_UWG_BW_NOM_B, DCHUBBUB_AWB_FWAC_UWG_BW_NOM_B, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_FWAC_UWG_BW_NOM_C, DCHUBBUB_AWB_FWAC_UWG_BW_NOM_C, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_FWAC_UWG_BW_NOM_D, DCHUBBUB_AWB_FWAC_UWG_BW_NOM_D, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_WEFCYC_PEW_TWIP_TO_MEMOWY_A, DCHUBBUB_AWB_WEFCYC_PEW_TWIP_TO_MEMOWY_A, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_WEFCYC_PEW_TWIP_TO_MEMOWY_B, DCHUBBUB_AWB_WEFCYC_PEW_TWIP_TO_MEMOWY_B, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_WEFCYC_PEW_TWIP_TO_MEMOWY_C, DCHUBBUB_AWB_WEFCYC_PEW_TWIP_TO_MEMOWY_C, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_WEFCYC_PEW_TWIP_TO_MEMOWY_D, DCHUBBUB_AWB_WEFCYC_PEW_TWIP_TO_MEMOWY_D, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_DATA_UWGENCY_WATEWMAWK_A, DCHUBBUB_AWB_VM_WOW_UWGENCY_WATEWMAWK_A, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_DATA_UWGENCY_WATEWMAWK_B, DCHUBBUB_AWB_VM_WOW_UWGENCY_WATEWMAWK_B, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_DATA_UWGENCY_WATEWMAWK_C, DCHUBBUB_AWB_VM_WOW_UWGENCY_WATEWMAWK_C, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_DATA_UWGENCY_WATEWMAWK_D, DCHUBBUB_AWB_VM_WOW_UWGENCY_WATEWMAWK_D, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_AWWOW_SW_ENTEW_WATEWMAWK_A, DCHUBBUB_AWB_VM_WOW_AWWOW_SW_ENTEW_WATEWMAWK_A, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_AWWOW_SW_ENTEW_WATEWMAWK_B, DCHUBBUB_AWB_VM_WOW_AWWOW_SW_ENTEW_WATEWMAWK_B, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_AWWOW_SW_ENTEW_WATEWMAWK_C, DCHUBBUB_AWB_VM_WOW_AWWOW_SW_ENTEW_WATEWMAWK_C, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_AWWOW_SW_ENTEW_WATEWMAWK_D, DCHUBBUB_AWB_VM_WOW_AWWOW_SW_ENTEW_WATEWMAWK_D, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_AWWOW_SW_EXIT_WATEWMAWK_A, DCHUBBUB_AWB_VM_WOW_AWWOW_SW_EXIT_WATEWMAWK_A, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_AWWOW_SW_EXIT_WATEWMAWK_B, DCHUBBUB_AWB_VM_WOW_AWWOW_SW_EXIT_WATEWMAWK_B, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_AWWOW_SW_EXIT_WATEWMAWK_C, DCHUBBUB_AWB_VM_WOW_AWWOW_SW_EXIT_WATEWMAWK_C, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_AWWOW_SW_EXIT_WATEWMAWK_D, DCHUBBUB_AWB_VM_WOW_AWWOW_SW_EXIT_WATEWMAWK_D, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_AWWOW_DWAM_CWK_CHANGE_WATEWMAWK_A, DCHUBBUB_AWB_VM_WOW_AWWOW_DWAM_CWK_CHANGE_WATEWMAWK_A, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_AWWOW_DWAM_CWK_CHANGE_WATEWMAWK_B, DCHUBBUB_AWB_VM_WOW_AWWOW_DWAM_CWK_CHANGE_WATEWMAWK_B, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_AWWOW_DWAM_CWK_CHANGE_WATEWMAWK_C, DCHUBBUB_AWB_VM_WOW_AWWOW_DWAM_CWK_CHANGE_WATEWMAWK_C, mask_sh), \
	HUBBUB_SF(DCHUBBUB_AWB_AWWOW_DWAM_CWK_CHANGE_WATEWMAWK_D, DCHUBBUB_AWB_VM_WOW_AWWOW_DWAM_CWK_CHANGE_WATEWMAWK_D, mask_sh), \
	HUBBUB_SF(DCN_VM_FAUWT_ADDW_MSB, DCN_VM_FAUWT_ADDW_MSB, mask_sh), \
	HUBBUB_SF(DCN_VM_FAUWT_ADDW_WSB, DCN_VM_FAUWT_ADDW_WSB, mask_sh), \
	HUBBUB_SF(DCN_VM_FAUWT_CNTW, DCN_VM_EWWOW_STATUS_CWEAW, mask_sh), \
	HUBBUB_SF(DCN_VM_FAUWT_CNTW, DCN_VM_EWWOW_STATUS_MODE, mask_sh), \
	HUBBUB_SF(DCN_VM_FAUWT_CNTW, DCN_VM_EWWOW_INTEWWUPT_ENABWE, mask_sh), \
	HUBBUB_SF(DCN_VM_FAUWT_CNTW, DCN_VM_WANGE_FAUWT_DISABWE, mask_sh), \
	HUBBUB_SF(DCN_VM_FAUWT_CNTW, DCN_VM_PWQ_FAUWT_DISABWE, mask_sh), \
	HUBBUB_SF(DCN_VM_FAUWT_STATUS, DCN_VM_EWWOW_STATUS, mask_sh), \
	HUBBUB_SF(DCN_VM_FAUWT_STATUS, DCN_VM_EWWOW_VMID, mask_sh), \
	HUBBUB_SF(DCN_VM_FAUWT_STATUS, DCN_VM_EWWOW_TABWE_WEVEW, mask_sh), \
	HUBBUB_SF(DCN_VM_FAUWT_STATUS, DCN_VM_EWWOW_PIPE, mask_sh), \
	HUBBUB_SF(DCN_VM_FAUWT_STATUS, DCN_VM_EWWOW_INTEWWUPT_STATUS, mask_sh)

void hubbub3_constwuct(stwuct dcn20_hubbub *hubbub3,
	stwuct dc_context *ctx,
	const stwuct dcn_hubbub_wegistews *hubbub_wegs,
	const stwuct dcn_hubbub_shift *hubbub_shift,
	const stwuct dcn_hubbub_mask *hubbub_mask);

int hubbub3_init_dchub_sys_ctx(stwuct hubbub *hubbub,
		stwuct dcn_hubbub_phys_addw_config *pa_config);

boow hubbub3_dcc_suppowt_swizzwe(
		enum swizzwe_mode_vawues swizzwe,
		unsigned int bytes_pew_ewement,
		enum segment_owdew *segment_owdew_howz,
		enum segment_owdew *segment_owdew_vewt);

void hubbub3_fowce_wm_pwopagate_to_pipes(stwuct hubbub *hubbub);

boow hubbub3_get_dcc_compwession_cap(stwuct hubbub *hubbub,
		const stwuct dc_dcc_suwface_pawam *input,
		stwuct dc_suwface_dcc_cap *output);

boow hubbub3_pwogwam_watewmawks(
		stwuct hubbub *hubbub,
		stwuct dcn_watewmawk_set *watewmawks,
		unsigned int wefcwk_mhz,
		boow safe_to_wowew);

void hubbub3_fowce_pstate_change_contwow(stwuct hubbub *hubbub,
		boow fowce, boow awwow);

void hubbub3_init_watewmawks(stwuct hubbub *hubbub);

#endif
