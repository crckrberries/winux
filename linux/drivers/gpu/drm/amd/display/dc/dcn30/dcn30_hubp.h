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

#ifndef __DC_HUBP_DCN30_H__
#define __DC_HUBP_DCN30_H__

#incwude "dcn20/dcn20_hubp.h"
#incwude "dcn21/dcn21_hubp.h"

#define HUBP_WEG_WIST_DCN30(id)\
	HUBP_WEG_WIST_DCN21(id),\
	SWI(DCN_DMDATA_VM_CNTW, HUBPWEQ, id)


#define HUBP_MASK_SH_WIST_DCN30_BASE(mask_sh)\
	HUBP_MASK_SH_WIST_DCN21_COMMON(mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SUWFACE_CONFIG, AWPHA_PWANE_EN, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, WEFCYC_PEW_VM_DMDATA, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, DMDATA_VM_FAUWT_STATUS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, DMDATA_VM_FAUWT_STATUS_CWEAW, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, DMDATA_VM_UNDEWFWOW_STATUS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, DMDATA_VM_WATE_STATUS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, DMDATA_VM_UNDEWFWOW_STATUS_CWEAW, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, DMDATA_VM_DONE, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_ADDW_CONFIG, NUM_PKWS, mask_sh)


#define HUBP_MASK_SH_WIST_DCN30(mask_sh)\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, WEFCYC_PEW_VM_DMDATA, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, DMDATA_VM_FAUWT_STATUS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, DMDATA_VM_FAUWT_STATUS_CWEAW, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, DMDATA_VM_UNDEWFWOW_STATUS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, DMDATA_VM_WATE_STATUS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, DMDATA_VM_UNDEWFWOW_STATUS_CWEAW, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_DMDATA_VM_CNTW, DMDATA_VM_DONE, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_CNTW, HUBP_BWANK_EN, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_CNTW, HUBP_TTU_DISABWE, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_CNTW, HUBP_UNDEWFWOW_STATUS, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_CNTW, HUBP_UNDEWFWOW_CWEAW, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_CNTW, HUBP_NO_OUTSTANDING_WEQ, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_CNTW, HUBP_VTG_SEW, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_CNTW, HUBP_DISABWE, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_CNTW, HUBP_IN_BWANK, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_ADDW_CONFIG, NUM_PIPES, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_ADDW_CONFIG, PIPE_INTEWWEAVE, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_ADDW_CONFIG, MAX_COMPWESSED_FWAGS, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_ADDW_CONFIG, NUM_PKWS, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_TIWING_CONFIG, SW_MODE, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_TIWING_CONFIG, META_WINEAW, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_TIWING_CONFIG, PIPE_AWIGNED, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_PITCH, PITCH, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_PITCH, META_PITCH, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_PITCH_C, PITCH_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_PITCH_C, META_PITCH_C, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SUWFACE_CONFIG, SUWFACE_PIXEW_FOWMAT, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_FWIP_CONTWOW, SUWFACE_FWIP_TYPE, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_FWIP_CONTWOW, SUWFACE_FWIP_MODE_FOW_STEWEOSYNC, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_FWIP_CONTWOW, SUWFACE_FWIP_IN_STEWEOSYNC, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_FWIP_CONTWOW, SUWFACE_FWIP_PENDING, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_FWIP_CONTWOW, SUWFACE_UPDATE_WOCK, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_PWI_VIEWPOWT_DIMENSION, PWI_VIEWPOWT_WIDTH, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_PWI_VIEWPOWT_DIMENSION, PWI_VIEWPOWT_HEIGHT, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_PWI_VIEWPOWT_STAWT, PWI_VIEWPOWT_X_STAWT, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_PWI_VIEWPOWT_STAWT, PWI_VIEWPOWT_Y_STAWT, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SEC_VIEWPOWT_DIMENSION, SEC_VIEWPOWT_WIDTH, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SEC_VIEWPOWT_DIMENSION, SEC_VIEWPOWT_HEIGHT, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SEC_VIEWPOWT_STAWT, SEC_VIEWPOWT_X_STAWT, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SEC_VIEWPOWT_STAWT, SEC_VIEWPOWT_Y_STAWT, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_PWI_VIEWPOWT_DIMENSION_C, PWI_VIEWPOWT_WIDTH_C, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_PWI_VIEWPOWT_DIMENSION_C, PWI_VIEWPOWT_HEIGHT_C, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_PWI_VIEWPOWT_STAWT_C, PWI_VIEWPOWT_X_STAWT_C, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_PWI_VIEWPOWT_STAWT_C, PWI_VIEWPOWT_Y_STAWT_C, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SEC_VIEWPOWT_DIMENSION_C, SEC_VIEWPOWT_WIDTH_C, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SEC_VIEWPOWT_DIMENSION_C, SEC_VIEWPOWT_HEIGHT_C, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SEC_VIEWPOWT_STAWT_C, SEC_VIEWPOWT_X_STAWT_C, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SEC_VIEWPOWT_STAWT_C, SEC_VIEWPOWT_Y_STAWT_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_PWIMAWY_SUWFACE_ADDWESS_HIGH, PWIMAWY_SUWFACE_ADDWESS_HIGH, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_PWIMAWY_SUWFACE_ADDWESS, PWIMAWY_SUWFACE_ADDWESS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SECONDAWY_SUWFACE_ADDWESS_HIGH, SECONDAWY_SUWFACE_ADDWESS_HIGH, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SECONDAWY_SUWFACE_ADDWESS, SECONDAWY_SUWFACE_ADDWESS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_PWIMAWY_META_SUWFACE_ADDWESS_HIGH, PWIMAWY_META_SUWFACE_ADDWESS_HIGH, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_PWIMAWY_META_SUWFACE_ADDWESS, PWIMAWY_META_SUWFACE_ADDWESS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SECONDAWY_META_SUWFACE_ADDWESS_HIGH, SECONDAWY_META_SUWFACE_ADDWESS_HIGH, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SECONDAWY_META_SUWFACE_ADDWESS, SECONDAWY_META_SUWFACE_ADDWESS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_PWIMAWY_SUWFACE_ADDWESS_HIGH_C, PWIMAWY_SUWFACE_ADDWESS_HIGH_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_PWIMAWY_SUWFACE_ADDWESS_C, PWIMAWY_SUWFACE_ADDWESS_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SECONDAWY_SUWFACE_ADDWESS_HIGH_C, SECONDAWY_SUWFACE_ADDWESS_HIGH_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SECONDAWY_SUWFACE_ADDWESS_C, SECONDAWY_SUWFACE_ADDWESS_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_PWIMAWY_META_SUWFACE_ADDWESS_HIGH_C, PWIMAWY_META_SUWFACE_ADDWESS_HIGH_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_PWIMAWY_META_SUWFACE_ADDWESS_C, PWIMAWY_META_SUWFACE_ADDWESS_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SECONDAWY_META_SUWFACE_ADDWESS_HIGH_C, SECONDAWY_META_SUWFACE_ADDWESS_HIGH_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SECONDAWY_META_SUWFACE_ADDWESS_C, SECONDAWY_META_SUWFACE_ADDWESS_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_INUSE, SUWFACE_INUSE_ADDWESS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_INUSE_HIGH, SUWFACE_INUSE_ADDWESS_HIGH, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_INUSE_C, SUWFACE_INUSE_ADDWESS_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_INUSE_HIGH_C, SUWFACE_INUSE_ADDWESS_HIGH_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_EAWWIEST_INUSE, SUWFACE_EAWWIEST_INUSE_ADDWESS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_EAWWIEST_INUSE_HIGH, SUWFACE_EAWWIEST_INUSE_ADDWESS_HIGH, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_EAWWIEST_INUSE_C, SUWFACE_EAWWIEST_INUSE_ADDWESS_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_EAWWIEST_INUSE_HIGH_C, SUWFACE_EAWWIEST_INUSE_ADDWESS_HIGH_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, PWIMAWY_SUWFACE_TMZ, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, PWIMAWY_SUWFACE_TMZ_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, PWIMAWY_META_SUWFACE_TMZ, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, PWIMAWY_META_SUWFACE_TMZ_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, PWIMAWY_SUWFACE_DCC_EN, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, PWIMAWY_SUWFACE_DCC_IND_BWK, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, PWIMAWY_SUWFACE_DCC_IND_BWK_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, SECONDAWY_SUWFACE_TMZ, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, SECONDAWY_SUWFACE_TMZ_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, SECONDAWY_META_SUWFACE_TMZ, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, SECONDAWY_META_SUWFACE_TMZ_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, SECONDAWY_SUWFACE_DCC_EN, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, SECONDAWY_SUWFACE_DCC_IND_BWK, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_CONTWOW, SECONDAWY_SUWFACE_DCC_IND_BWK_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_SUWFACE_FWIP_INTEWWUPT, SUWFACE_FWIP_INT_MASK, mask_sh),\
	HUBP_SF(HUBPWET0_HUBPWET_CONTWOW, DET_BUF_PWANE1_BASE_ADDWESS, mask_sh),\
	HUBP_SF(HUBPWET0_HUBPWET_CONTWOW, CWOSSBAW_SWC_CB_B, mask_sh),\
	HUBP_SF(HUBPWET0_HUBPWET_CONTWOW, CWOSSBAW_SWC_CW_W, mask_sh),\
	HUBP_SF(HUBPWET0_HUBPWET_CONTWOW, CWOSSBAW_SWC_Y_G, mask_sh),\
	HUBP_SF(HUBPWET0_HUBPWET_CONTWOW, CWOSSBAW_SWC_AWPHA, mask_sh),\
	HUBP_SF(HUBPWET0_HUBPWET_CONTWOW, PACK_3TO2_EWEMENT_DISABWE, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_EXPANSION_MODE, DWQ_EXPANSION_MODE, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_EXPANSION_MODE, PWQ_EXPANSION_MODE, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_EXPANSION_MODE, MWQ_EXPANSION_MODE, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_EXPANSION_MODE, CWQ_EXPANSION_MODE, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG, CHUNK_SIZE, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG, MIN_CHUNK_SIZE, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG, META_CHUNK_SIZE, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG, MIN_META_CHUNK_SIZE, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG, DPTE_GWOUP_SIZE, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG, SWATH_HEIGHT, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG, PTE_WOW_HEIGHT_WINEAW, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG_C, CHUNK_SIZE_C, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG_C, MIN_CHUNK_SIZE_C, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG_C, META_CHUNK_SIZE_C, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG_C, MIN_META_CHUNK_SIZE_C, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG_C, DPTE_GWOUP_SIZE_C, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG_C, SWATH_HEIGHT_C, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG_C, PTE_WOW_HEIGHT_WINEAW_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_BWANK_OFFSET_0, WEFCYC_H_BWANK_END, mask_sh),\
	HUBP_SF(HUBPWEQ0_BWANK_OFFSET_0, DWG_V_BWANK_END, mask_sh),\
	HUBP_SF(HUBPWEQ0_BWANK_OFFSET_1, MIN_DST_Y_NEXT_STAWT, mask_sh),\
	HUBP_SF(HUBPWEQ0_DST_DIMENSIONS, WEFCYC_PEW_HTOTAW, mask_sh),\
	HUBP_SF(HUBPWEQ0_DST_AFTEW_SCAWEW, WEFCYC_X_AFTEW_SCAWEW, mask_sh),\
	HUBP_SF(HUBPWEQ0_DST_AFTEW_SCAWEW, DST_Y_AFTEW_SCAWEW, mask_sh),\
	HUBP_SF(HUBPWEQ0_VBWANK_PAWAMETEWS_0, DST_Y_PEW_VM_VBWANK, mask_sh),\
	HUBP_SF(HUBPWEQ0_VBWANK_PAWAMETEWS_0, DST_Y_PEW_WOW_VBWANK, mask_sh),\
	HUBP_SF(HUBPWEQ0_WEF_FWEQ_TO_PIX_FWEQ, WEF_FWEQ_TO_PIX_FWEQ, mask_sh),\
	HUBP_SF(HUBPWEQ0_VBWANK_PAWAMETEWS_1, WEFCYC_PEW_PTE_GWOUP_VBWANK_W, mask_sh),\
	HUBP_SF(HUBPWEQ0_VBWANK_PAWAMETEWS_3, WEFCYC_PEW_META_CHUNK_VBWANK_W, mask_sh),\
	HUBP_SF(HUBPWEQ0_NOM_PAWAMETEWS_4, DST_Y_PEW_META_WOW_NOM_W, mask_sh),\
	HUBP_SF(HUBPWEQ0_NOM_PAWAMETEWS_5, WEFCYC_PEW_META_CHUNK_NOM_W, mask_sh),\
	HUBP_SF(HUBPWEQ0_PEW_WINE_DEWIVEWY_PWE, WEFCYC_PEW_WINE_DEWIVEWY_PWE_W, mask_sh),\
	HUBP_SF(HUBPWEQ0_PEW_WINE_DEWIVEWY_PWE, WEFCYC_PEW_WINE_DEWIVEWY_PWE_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_PEW_WINE_DEWIVEWY, WEFCYC_PEW_WINE_DEWIVEWY_W, mask_sh),\
	HUBP_SF(HUBPWEQ0_PEW_WINE_DEWIVEWY, WEFCYC_PEW_WINE_DEWIVEWY_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_VBWANK_PAWAMETEWS_2, WEFCYC_PEW_PTE_GWOUP_VBWANK_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_VBWANK_PAWAMETEWS_4, WEFCYC_PEW_META_CHUNK_VBWANK_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_NOM_PAWAMETEWS_6, DST_Y_PEW_META_WOW_NOM_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_NOM_PAWAMETEWS_7, WEFCYC_PEW_META_CHUNK_NOM_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_TTU_QOS_WM, QoS_WEVEW_WOW_WM, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_TTU_QOS_WM, QoS_WEVEW_HIGH_WM, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_GWOBAW_TTU_CNTW, MIN_TTU_VBWANK, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_GWOBAW_TTU_CNTW, QoS_WEVEW_FWIP, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_GWOBAW_TTU_CNTW, WOW_TTU_MODE, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_SUWF0_TTU_CNTW0, WEFCYC_PEW_WEQ_DEWIVEWY, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_SUWF0_TTU_CNTW0, QoS_WEVEW_FIXED, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_SUWF0_TTU_CNTW0, QoS_WAMP_DISABWE, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_SUWF0_TTU_CNTW1, WEFCYC_PEW_WEQ_DEWIVEWY_PWE, mask_sh),\
	HUBP_SF(HUBP0_HUBP_CWK_CNTW, HUBP_CWOCK_ENABWE, mask_sh),\
	HUBP_MASK_SH_WIST_DCN_VM(mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SUWFACE_CONFIG, WOTATION_ANGWE, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SUWFACE_CONFIG, H_MIWWOW_EN, mask_sh),\
	HUBP_SF(HUBP0_DCSUWF_SUWFACE_CONFIG, AWPHA_PWANE_EN, mask_sh),\
	HUBP_SF(HUBPWEQ0_PWEFETCH_SETTINGS, DST_Y_PWEFETCH, mask_sh),\
	HUBP_SF(HUBPWEQ0_PWEFETCH_SETTINGS, VWATIO_PWEFETCH, mask_sh),\
	HUBP_SF(HUBPWEQ0_PWEFETCH_SETTINGS_C, VWATIO_PWEFETCH_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_VM_SYSTEM_APEWTUWE_WOW_ADDW, MC_VM_SYSTEM_APEWTUWE_WOW_ADDW, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCN_VM_SYSTEM_APEWTUWE_HIGH_ADDW, MC_VM_SYSTEM_APEWTUWE_HIGH_ADDW, mask_sh),\
	HUBP_SF(HUBPWEQ0_CUWSOW_SETTINGS, CUWSOW0_DST_Y_OFFSET, mask_sh), \
	HUBP_SF(HUBPWEQ0_CUWSOW_SETTINGS, CUWSOW0_CHUNK_HDW_ADJUST, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_SUWFACE_ADDWESS_HIGH, CUWSOW_SUWFACE_ADDWESS_HIGH, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_SUWFACE_ADDWESS, CUWSOW_SUWFACE_ADDWESS, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_SIZE, CUWSOW_WIDTH, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_SIZE, CUWSOW_HEIGHT, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_CONTWOW, CUWSOW_MODE, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_CONTWOW, CUWSOW_2X_MAGNIFY, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_CONTWOW, CUWSOW_PITCH, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_CONTWOW, CUWSOW_WINES_PEW_CHUNK, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_CONTWOW, CUWSOW_ENABWE, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_POSITION, CUWSOW_X_POSITION, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_POSITION, CUWSOW_Y_POSITION, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_HOT_SPOT, CUWSOW_HOT_SPOT_X, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_HOT_SPOT, CUWSOW_HOT_SPOT_Y, mask_sh), \
	HUBP_SF(CUWSOW0_0_CUWSOW_DST_OFFSET, CUWSOW_DST_X_OFFSET, mask_sh), \
	HUBP_SF(CUWSOW0_0_DMDATA_ADDWESS_HIGH, DMDATA_ADDWESS_HIGH, mask_sh), \
	HUBP_SF(CUWSOW0_0_DMDATA_CNTW, DMDATA_MODE, mask_sh), \
	HUBP_SF(CUWSOW0_0_DMDATA_CNTW, DMDATA_UPDATED, mask_sh), \
	HUBP_SF(CUWSOW0_0_DMDATA_CNTW, DMDATA_WEPEAT, mask_sh), \
	HUBP_SF(CUWSOW0_0_DMDATA_CNTW, DMDATA_SIZE, mask_sh), \
	HUBP_SF(CUWSOW0_0_DMDATA_SW_CNTW, DMDATA_SW_UPDATED, mask_sh), \
	HUBP_SF(CUWSOW0_0_DMDATA_SW_CNTW, DMDATA_SW_WEPEAT, mask_sh), \
	HUBP_SF(CUWSOW0_0_DMDATA_SW_CNTW, DMDATA_SW_SIZE, mask_sh), \
	HUBP_SF(CUWSOW0_0_DMDATA_QOS_CNTW, DMDATA_QOS_MODE, mask_sh), \
	HUBP_SF(CUWSOW0_0_DMDATA_QOS_CNTW, DMDATA_QOS_WEVEW, mask_sh), \
	HUBP_SF(CUWSOW0_0_DMDATA_QOS_CNTW, DMDATA_DW_DEWTA, mask_sh), \
	HUBP_SF(CUWSOW0_0_DMDATA_STATUS, DMDATA_DONE, mask_sh),\
	HUBP_SF(HUBPWEQ0_FWIP_PAWAMETEWS_0, DST_Y_PEW_VM_FWIP, mask_sh),\
	HUBP_SF(HUBPWEQ0_FWIP_PAWAMETEWS_0, DST_Y_PEW_WOW_FWIP, mask_sh),\
	HUBP_SF(HUBPWEQ0_FWIP_PAWAMETEWS_1, WEFCYC_PEW_PTE_GWOUP_FWIP_W, mask_sh),\
	HUBP_SF(HUBPWEQ0_FWIP_PAWAMETEWS_2, WEFCYC_PEW_META_CHUNK_FWIP_W, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_CNTW, HUBP_VWEADY_AT_OW_AFTEW_VSYNC, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_CNTW, HUBP_DISABWE_STOP_DATA_DUWING_VM, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_FWIP_CONTWOW, HUBPWEQ_MASTEW_UPDATE_WOCK_STATUS, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_FWIP_CONTWOW2, SUWFACE_GSW_ENABWE, mask_sh),\
	HUBP_SF(HUBPWEQ0_DCSUWF_FWIP_CONTWOW2, SUWFACE_TWIPWE_BUFFEW_ENABWE, mask_sh),\
	HUBP_SF(HUBPWEQ0_VMID_SETTINGS_0, VMID, mask_sh),\
	HUBP_SF(HUBPWEQ0_FWIP_PAWAMETEWS_3, WEFCYC_PEW_VM_GWOUP_FWIP, mask_sh),\
	HUBP_SF(HUBPWEQ0_FWIP_PAWAMETEWS_4, WEFCYC_PEW_VM_WEQ_FWIP, mask_sh),\
	HUBP_SF(HUBPWEQ0_FWIP_PAWAMETEWS_5, WEFCYC_PEW_PTE_GWOUP_FWIP_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_FWIP_PAWAMETEWS_6, WEFCYC_PEW_META_CHUNK_FWIP_C, mask_sh),\
	HUBP_SF(HUBPWEQ0_VBWANK_PAWAMETEWS_5, WEFCYC_PEW_VM_GWOUP_VBWANK, mask_sh),\
	HUBP_SF(HUBPWEQ0_VBWANK_PAWAMETEWS_6, WEFCYC_PEW_VM_WEQ_VBWANK, mask_sh),\
	HUBP_SF(HUBP0_DCHUBP_WEQ_SIZE_CONFIG, VM_GWOUP_SIZE, mask_sh)

boow hubp3_constwuct(
		stwuct dcn20_hubp *hubp2,
		stwuct dc_context *ctx,
		uint32_t inst,
		const stwuct dcn_hubp2_wegistews *hubp_wegs,
		const stwuct dcn_hubp2_shift *hubp_shift,
		const stwuct dcn_hubp2_mask *hubp_mask);

void hubp3_set_vm_system_apewtuwe_settings(stwuct hubp *hubp,
	stwuct vm_system_apewtuwe_pawam *apt);

boow hubp3_pwogwam_suwface_fwip_and_addw(
	stwuct hubp *hubp,
	const stwuct dc_pwane_addwess *addwess,
	boow fwip_immediate);

void hubp3_pwogwam_suwface_config(
	stwuct hubp *hubp,
	enum suwface_pixew_fowmat fowmat,
	union dc_tiwing_info *tiwing_info,
	stwuct pwane_size *pwane_size,
	enum dc_wotation_angwe wotation,
	stwuct dc_pwane_dcc_pawam *dcc,
	boow howizontaw_miwwow,
	unsigned int compat_wevew);

void hubp3_setup(
		stwuct hubp *hubp,
		stwuct _vcs_dpi_dispway_dwg_wegs_st *dwg_attw,
		stwuct _vcs_dpi_dispway_ttu_wegs_st *ttu_attw,
		stwuct _vcs_dpi_dispway_wq_wegs_st *wq_wegs,
		stwuct _vcs_dpi_dispway_pipe_dest_pawams_st *pipe_dest);

void hubp3_pwogwam_tiwing(
		stwuct dcn20_hubp *hubp2,
		const union dc_tiwing_info *info,
		const enum suwface_pixew_fowmat pixew_fowmat);

void hubp3_dcc_contwow(stwuct hubp *hubp, boow enabwe,
		enum hubp_ind_bwock_size bwk_size);

void hubp3_dcc_contwow_sienna_cichwid(stwuct hubp *hubp,
		stwuct dc_pwane_dcc_pawam *dcc);

void hubp3_dmdata_set_attwibutes(
		stwuct hubp *hubp,
		const stwuct dc_dmdata_attwibutes *attw);

void hubp3_wead_state(stwuct hubp *hubp);

void hubp3_init(stwuct hubp *hubp);

#endif /* __DC_HUBP_DCN30_H__ */


