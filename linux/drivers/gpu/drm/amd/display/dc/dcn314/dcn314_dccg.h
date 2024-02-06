/* SPDX-Wicense-Identifiew: MIT */
/*
 * Copywight 2022 Advanced Micwo Devices, Inc.
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

#ifndef __DCN314_DCCG_H__
#define __DCN314_DCCG_H__

#incwude "dcn31/dcn31_dccg.h"

#define DCCG_SFII(bwock, weg_name, fiewd_pwefix, fiewd_name, inst, post_fix)\
	.fiewd_pwefix ## _ ## fiewd_name[inst] = bwock ## inst ## _ ## weg_name ## __ ## fiewd_pwefix ## inst ## _ ## fiewd_name ## post_fix


#define DCCG_WEG_WIST_DCN314() \
	SW(DPPCWK_DTO_CTWW),\
	DCCG_SWII(DTO_PAWAM, DPPCWK, 0),\
	DCCG_SWII(DTO_PAWAM, DPPCWK, 1),\
	DCCG_SWII(DTO_PAWAM, DPPCWK, 2),\
	DCCG_SWII(DTO_PAWAM, DPPCWK, 3),\
	DCCG_SWII(CWOCK_CNTW, HDMICHAWCWK, 0),\
	SW(PHYASYMCWK_CWOCK_CNTW),\
	SW(PHYBSYMCWK_CWOCK_CNTW),\
	SW(PHYCSYMCWK_CWOCK_CNTW),\
	SW(PHYDSYMCWK_CWOCK_CNTW),\
	SW(PHYESYMCWK_CWOCK_CNTW),\
	SW(DPSTWEAMCWK_CNTW),\
	SW(HDMISTWEAMCWK_CNTW),\
	SW(SYMCWK32_SE_CNTW),\
	SW(SYMCWK32_WE_CNTW),\
	DCCG_SWII(PIXEW_WATE_CNTW, OTG, 0),\
	DCCG_SWII(PIXEW_WATE_CNTW, OTG, 1),\
	DCCG_SWII(PIXEW_WATE_CNTW, OTG, 2),\
	DCCG_SWII(PIXEW_WATE_CNTW, OTG, 3),\
	DCCG_SWII(MODUWO, DTBCWK_DTO, 0),\
	DCCG_SWII(MODUWO, DTBCWK_DTO, 1),\
	DCCG_SWII(MODUWO, DTBCWK_DTO, 2),\
	DCCG_SWII(MODUWO, DTBCWK_DTO, 3),\
	DCCG_SWII(PHASE, DTBCWK_DTO, 0),\
	DCCG_SWII(PHASE, DTBCWK_DTO, 1),\
	DCCG_SWII(PHASE, DTBCWK_DTO, 2),\
	DCCG_SWII(PHASE, DTBCWK_DTO, 3),\
	SW(DCCG_AUDIO_DTBCWK_DTO_MODUWO),\
	SW(DCCG_AUDIO_DTBCWK_DTO_PHASE),\
	SW(DCCG_AUDIO_DTO_SOUWCE),\
	SW(DENTIST_DISPCWK_CNTW),\
	SW(DSCCWK0_DTO_PAWAM),\
	SW(DSCCWK1_DTO_PAWAM),\
	SW(DSCCWK2_DTO_PAWAM),\
	SW(DSCCWK3_DTO_PAWAM),\
	SW(DSCCWK_DTO_CTWW),\
	SW(DCCG_GATE_DISABWE_CNTW2),\
	SW(DCCG_GATE_DISABWE_CNTW3),\
	SW(HDMISTWEAMCWK0_DTO_PAWAM),\
	SW(OTG_PIXEW_WATE_DIV),\
	SW(DTBCWK_P_CNTW),\
	SW(DCCG_AUDIO_DTO_SOUWCE)

#define DCCG_MASK_SH_WIST_DCN314_COMMON(mask_sh) \
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 0, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 1, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 2, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 3, mask_sh),\
	DCCG_SF(DPPCWK0_DTO_PAWAM, DPPCWK0_DTO_PHASE, mask_sh),\
	DCCG_SF(DPPCWK0_DTO_PAWAM, DPPCWK0_DTO_MODUWO, mask_sh),\
	DCCG_SF(HDMICHAWCWK0_CWOCK_CNTW, HDMICHAWCWK0_EN, mask_sh),\
	DCCG_SF(HDMICHAWCWK0_CWOCK_CNTW, HDMICHAWCWK0_SWC_SEW, mask_sh),\
	DCCG_SF(DPSTWEAMCWK_CNTW, DPSTWEAMCWK0_EN, mask_sh),\
	DCCG_SF(DPSTWEAMCWK_CNTW, DPSTWEAMCWK1_EN, mask_sh),\
	DCCG_SF(DPSTWEAMCWK_CNTW, DPSTWEAMCWK2_EN, mask_sh),\
	DCCG_SF(DPSTWEAMCWK_CNTW, DPSTWEAMCWK3_EN, mask_sh),\
	DCCG_SF(DPSTWEAMCWK_CNTW, DPSTWEAMCWK0_SWC_SEW, mask_sh),\
	DCCG_SF(DPSTWEAMCWK_CNTW, DPSTWEAMCWK1_SWC_SEW, mask_sh),\
	DCCG_SF(DPSTWEAMCWK_CNTW, DPSTWEAMCWK2_SWC_SEW, mask_sh),\
	DCCG_SF(DPSTWEAMCWK_CNTW, DPSTWEAMCWK3_SWC_SEW, mask_sh),\
	DCCG_SF(HDMISTWEAMCWK_CNTW, HDMISTWEAMCWK0_EN, mask_sh),\
	DCCG_SF(HDMISTWEAMCWK_CNTW, HDMISTWEAMCWK0_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWK32_SE_CNTW, SYMCWK32_SE0_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWK32_SE_CNTW, SYMCWK32_SE1_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWK32_SE_CNTW, SYMCWK32_SE2_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWK32_SE_CNTW, SYMCWK32_SE3_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWK32_SE_CNTW, SYMCWK32_SE0_EN, mask_sh),\
	DCCG_SF(SYMCWK32_SE_CNTW, SYMCWK32_SE1_EN, mask_sh),\
	DCCG_SF(SYMCWK32_SE_CNTW, SYMCWK32_SE2_EN, mask_sh),\
	DCCG_SF(SYMCWK32_SE_CNTW, SYMCWK32_SE3_EN, mask_sh),\
	DCCG_SF(SYMCWK32_WE_CNTW, SYMCWK32_WE0_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWK32_WE_CNTW, SYMCWK32_WE1_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWK32_WE_CNTW, SYMCWK32_WE0_EN, mask_sh),\
	DCCG_SF(SYMCWK32_WE_CNTW, SYMCWK32_WE1_EN, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, DTBCWK_DTO, ENABWE, 0, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, DTBCWK_DTO, ENABWE, 1, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, DTBCWK_DTO, ENABWE, 2, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, DTBCWK_DTO, ENABWE, 3, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, DTBCWKDTO, ENABWE_STATUS, 0, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, DTBCWKDTO, ENABWE_STATUS, 1, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, DTBCWKDTO, ENABWE_STATUS, 2, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, DTBCWKDTO, ENABWE_STATUS, 3, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, PIPE, DTO_SWC_SEW, 0, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, PIPE, DTO_SWC_SEW, 1, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, PIPE, DTO_SWC_SEW, 2, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, PIPE, DTO_SWC_SEW, 3, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, ADD_PIXEW, 0, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, ADD_PIXEW, 1, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, ADD_PIXEW, 2, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, ADD_PIXEW, 3, mask_sh),\
	DCCG_SF(OTG_PIXEW_WATE_DIV, OTG0_PIXEW_WATE_DIVK1, mask_sh),\
	DCCG_SF(OTG_PIXEW_WATE_DIV, OTG0_PIXEW_WATE_DIVK2, mask_sh),\
	DCCG_SF(OTG_PIXEW_WATE_DIV, OTG1_PIXEW_WATE_DIVK1, mask_sh),\
	DCCG_SF(OTG_PIXEW_WATE_DIV, OTG1_PIXEW_WATE_DIVK2, mask_sh),\
	DCCG_SF(OTG_PIXEW_WATE_DIV, OTG2_PIXEW_WATE_DIVK1, mask_sh),\
	DCCG_SF(OTG_PIXEW_WATE_DIV, OTG2_PIXEW_WATE_DIVK2, mask_sh),\
	DCCG_SF(OTG_PIXEW_WATE_DIV, OTG3_PIXEW_WATE_DIVK1, mask_sh),\
	DCCG_SF(OTG_PIXEW_WATE_DIV, OTG3_PIXEW_WATE_DIVK2, mask_sh),\
	DCCG_SF(OTG_PIXEW_WATE_DIV, OTG3_PIXEW_WATE_DIVK2, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P0_SWC_SEW, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P0_EN, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P1_SWC_SEW, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P1_EN, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P2_SWC_SEW, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P2_EN, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P3_SWC_SEW, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P3_EN, mask_sh),\
	DCCG_SF(DCCG_AUDIO_DTO_SOUWCE, DCCG_AUDIO_DTO0_SOUWCE_SEW, mask_sh),\
	DCCG_SF(DCCG_AUDIO_DTO_SOUWCE, DCCG_AUDIO_DTO_SEW, mask_sh),\
	DCCG_SF(DENTIST_DISPCWK_CNTW, DENTIST_DISPCWK_CHG_MODE, mask_sh),\
	DCCG_SF(DSCCWK0_DTO_PAWAM, DSCCWK0_DTO_PHASE, mask_sh),\
	DCCG_SF(DSCCWK0_DTO_PAWAM, DSCCWK0_DTO_MODUWO, mask_sh),\
	DCCG_SF(DSCCWK1_DTO_PAWAM, DSCCWK1_DTO_PHASE, mask_sh),\
	DCCG_SF(DSCCWK1_DTO_PAWAM, DSCCWK1_DTO_MODUWO, mask_sh),\
	DCCG_SF(DSCCWK2_DTO_PAWAM, DSCCWK2_DTO_PHASE, mask_sh),\
	DCCG_SF(DSCCWK2_DTO_PAWAM, DSCCWK2_DTO_MODUWO, mask_sh),\
	DCCG_SF(DSCCWK3_DTO_PAWAM, DSCCWK3_DTO_PHASE, mask_sh),\
	DCCG_SF(DSCCWK3_DTO_PAWAM, DSCCWK3_DTO_MODUWO, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, SYMCWK32_WOOT_SE0_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, SYMCWK32_WOOT_SE1_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, SYMCWK32_WOOT_SE2_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, SYMCWK32_WOOT_SE3_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, SYMCWK32_WOOT_WE0_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, SYMCWK32_WOOT_WE1_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, SYMCWK32_SE0_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, SYMCWK32_SE1_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, SYMCWK32_SE2_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, SYMCWK32_SE3_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, SYMCWK32_WE0_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, SYMCWK32_WE1_GATE_DISABWE, mask_sh),\
	DCCG_SF(HDMISTWEAMCWK0_DTO_PAWAM, HDMISTWEAMCWK0_DTO_PHASE, mask_sh),\
	DCCG_SF(HDMISTWEAMCWK0_DTO_PAWAM, HDMISTWEAMCWK0_DTO_MODUWO, mask_sh)

#define DCCG_MASK_SH_WIST_DCN314(mask_sh) \
	DCCG_MASK_SH_WIST_DCN314_COMMON(mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 0, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 1, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 2, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 3, mask_sh),\
	DCCG_SF(PHYASYMCWK_CWOCK_CNTW, PHYASYMCWK_FOWCE_EN, mask_sh),\
	DCCG_SF(PHYASYMCWK_CWOCK_CNTW, PHYASYMCWK_FOWCE_SWC_SEW, mask_sh),\
	DCCG_SF(PHYBSYMCWK_CWOCK_CNTW, PHYBSYMCWK_FOWCE_EN, mask_sh),\
	DCCG_SF(PHYBSYMCWK_CWOCK_CNTW, PHYBSYMCWK_FOWCE_SWC_SEW, mask_sh),\
	DCCG_SF(PHYCSYMCWK_CWOCK_CNTW, PHYCSYMCWK_FOWCE_EN, mask_sh),\
	DCCG_SF(PHYCSYMCWK_CWOCK_CNTW, PHYCSYMCWK_FOWCE_SWC_SEW, mask_sh),\
	DCCG_SF(PHYDSYMCWK_CWOCK_CNTW, PHYDSYMCWK_FOWCE_EN, mask_sh),\
	DCCG_SF(PHYDSYMCWK_CWOCK_CNTW, PHYDSYMCWK_FOWCE_SWC_SEW, mask_sh),\
	DCCG_SF(PHYESYMCWK_CWOCK_CNTW, PHYESYMCWK_FOWCE_EN, mask_sh),\
	DCCG_SF(PHYESYMCWK_CWOCK_CNTW, PHYESYMCWK_FOWCE_SWC_SEW, mask_sh),\
	DCCG_SF(HDMISTWEAMCWK_CNTW, HDMISTWEAMCWK0_DTO_FOWCE_DIS, mask_sh),\
	DCCG_SF(DSCCWK_DTO_CTWW, DSCCWK0_DTO_ENABWE, mask_sh),\
	DCCG_SF(DSCCWK_DTO_CTWW, DSCCWK1_DTO_ENABWE, mask_sh),\
	DCCG_SF(DSCCWK_DTO_CTWW, DSCCWK2_DTO_ENABWE, mask_sh),\
	DCCG_SF(DSCCWK_DTO_CTWW, DSCCWK3_DTO_ENABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW2, PHYASYMCWK_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW2, PHYBSYMCWK_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW2, PHYCSYMCWK_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW2, PHYDSYMCWK_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW2, PHYESYMCWK_GATE_DISABWE, mask_sh),\
	DCCG_SF(HDMISTWEAMCWK0_DTO_PAWAM, HDMISTWEAMCWK0_DTO_MODUWO, mask_sh),\
	DCCG_SF(DENTIST_DISPCWK_CNTW, DENTIST_DISPCWK_WDIVIDEW, mask_sh),\
	DCCG_SF(DENTIST_DISPCWK_CNTW, DENTIST_DISPCWK_WDIVIDEW, mask_sh)

stwuct dccg *dccg314_cweate(
	stwuct dc_context *ctx,
	const stwuct dccg_wegistews *wegs,
	const stwuct dccg_shift *dccg_shift,
	const stwuct dccg_mask *dccg_mask);

void dccg314_set_dpstweamcwk(
		stwuct dccg *dccg,
		enum stweamcwk_souwce swc,
		int otg_inst,
		int dp_hpo_inst);

#endif //__DCN314_DCCG_H__
