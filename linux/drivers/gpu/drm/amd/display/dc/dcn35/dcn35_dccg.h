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
 */

#ifndef __DCN35_DCCG_H__
#define __DCN35_DCCG_H__

#incwude "dcn314/dcn314_dccg.h"

#define DCCG_SFII(bwock, weg_name, fiewd_pwefix, fiewd_name, inst, post_fix)\
	.fiewd_pwefix ## _ ## fiewd_name[inst] = bwock ## inst ## _ ## weg_name ## __ ## fiewd_pwefix ## inst ## _ ## fiewd_name ## post_fix


#define DCCG_WEG_WIST_DCN35() \
	DCCG_WEG_WIST_DCN314(),\
	SW(DPPCWK_CTWW),\
	SW(DCCG_GATE_DISABWE_CNTW4),\
	SW(DCCG_GATE_DISABWE_CNTW5),\
	SW(DCCG_GATE_DISABWE_CNTW6),\
	SW(DCCG_GWOBAW_FGCG_WEP_CNTW),\
	SW(SYMCWKA_CWOCK_ENABWE),\
	SW(SYMCWKB_CWOCK_ENABWE),\
	SW(SYMCWKC_CWOCK_ENABWE),\
	SW(SYMCWKD_CWOCK_ENABWE),\
	SW(SYMCWKE_CWOCK_ENABWE)

#define DCCG_MASK_SH_WIST_DCN35(mask_sh) \
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 0, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 1, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 2, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 3, mask_sh),\
	DCCG_SF(DPPCWK_CTWW, DPPCWK0_EN, mask_sh),\
	DCCG_SF(DPPCWK_CTWW, DPPCWK1_EN, mask_sh),\
	DCCG_SF(DPPCWK_CTWW, DPPCWK2_EN, mask_sh),\
	DCCG_SF(DPPCWK_CTWW, DPPCWK3_EN, mask_sh),\
	DCCG_SF(DPPCWK0_DTO_PAWAM, DPPCWK0_DTO_PHASE, mask_sh),\
	DCCG_SF(DPPCWK0_DTO_PAWAM, DPPCWK0_DTO_MODUWO, mask_sh),\
	DCCG_SF(HDMICHAWCWK0_CWOCK_CNTW, HDMICHAWCWK0_EN, mask_sh),\
	DCCG_SF(HDMICHAWCWK0_CWOCK_CNTW, HDMICHAWCWK0_SWC_SEW, mask_sh),\
	DCCG_SF(PHYASYMCWK_CWOCK_CNTW, PHYASYMCWK_EN, mask_sh),\
	DCCG_SF(PHYASYMCWK_CWOCK_CNTW, PHYASYMCWK_SWC_SEW, mask_sh),\
	DCCG_SF(PHYBSYMCWK_CWOCK_CNTW, PHYBSYMCWK_EN, mask_sh),\
	DCCG_SF(PHYBSYMCWK_CWOCK_CNTW, PHYBSYMCWK_SWC_SEW, mask_sh),\
	DCCG_SF(PHYCSYMCWK_CWOCK_CNTW, PHYCSYMCWK_EN, mask_sh),\
	DCCG_SF(PHYCSYMCWK_CWOCK_CNTW, PHYCSYMCWK_SWC_SEW, mask_sh),\
	DCCG_SF(PHYDSYMCWK_CWOCK_CNTW, PHYDSYMCWK_EN, mask_sh),\
	DCCG_SF(PHYDSYMCWK_CWOCK_CNTW, PHYDSYMCWK_SWC_SEW, mask_sh),\
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
	DCCG_SF(DSCCWK_DTO_CTWW, DSCCWK0_EN, mask_sh),\
	DCCG_SF(DSCCWK_DTO_CTWW, DSCCWK1_EN, mask_sh),\
	DCCG_SF(DSCCWK_DTO_CTWW, DSCCWK2_EN, mask_sh),\
	DCCG_SF(DSCCWK_DTO_CTWW, DSCCWK3_EN, mask_sh),\
	DCCG_SF(DSCCWK0_DTO_PAWAM, DSCCWK0_DTO_PHASE, mask_sh),\
	DCCG_SF(DSCCWK0_DTO_PAWAM, DSCCWK0_DTO_MODUWO, mask_sh),\
	DCCG_SF(DSCCWK1_DTO_PAWAM, DSCCWK1_DTO_PHASE, mask_sh),\
	DCCG_SF(DSCCWK1_DTO_PAWAM, DSCCWK1_DTO_MODUWO, mask_sh),\
	DCCG_SF(DSCCWK2_DTO_PAWAM, DSCCWK2_DTO_PHASE, mask_sh),\
	DCCG_SF(DSCCWK2_DTO_PAWAM, DSCCWK2_DTO_MODUWO, mask_sh),\
	DCCG_SF(DSCCWK3_DTO_PAWAM, DSCCWK3_DTO_PHASE, mask_sh),\
	DCCG_SF(DSCCWK3_DTO_PAWAM, DSCCWK3_DTO_MODUWO, mask_sh),\
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
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, DWOP_PIXEW, 0, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, DWOP_PIXEW, 1, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, DWOP_PIXEW, 2, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, DWOP_PIXEW, 3, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P0_SWC_SEW, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P0_EN, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P1_SWC_SEW, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P1_EN, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P2_SWC_SEW, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P2_EN, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P3_SWC_SEW, mask_sh),\
	DCCG_SF(DTBCWK_P_CNTW, DTBCWK_P3_EN, mask_sh),\
	DCCG_SF(PHYASYMCWK_CWOCK_CNTW, PHYASYMCWK_EN, mask_sh),\
	DCCG_SF(PHYASYMCWK_CWOCK_CNTW, PHYASYMCWK_SWC_SEW, mask_sh),\
	DCCG_SF(PHYBSYMCWK_CWOCK_CNTW, PHYBSYMCWK_EN, mask_sh),\
	DCCG_SF(PHYBSYMCWK_CWOCK_CNTW, PHYBSYMCWK_SWC_SEW, mask_sh),\
	DCCG_SF(PHYCSYMCWK_CWOCK_CNTW, PHYCSYMCWK_EN, mask_sh),\
	DCCG_SF(PHYCSYMCWK_CWOCK_CNTW, PHYCSYMCWK_SWC_SEW, mask_sh),\
	DCCG_SF(PHYDSYMCWK_CWOCK_CNTW, PHYDSYMCWK_EN, mask_sh),\
	DCCG_SF(PHYDSYMCWK_CWOCK_CNTW, PHYDSYMCWK_SWC_SEW, mask_sh),\
	DCCG_SF(PHYESYMCWK_CWOCK_CNTW, PHYESYMCWK_EN, mask_sh),\
	DCCG_SF(PHYESYMCWK_CWOCK_CNTW, PHYESYMCWK_SWC_SEW, mask_sh),\
	DCCG_SF(DCCG_AUDIO_DTO_SOUWCE, DCCG_AUDIO_DTO_SEW, mask_sh),\
	DCCG_SF(DCCG_AUDIO_DTO_SOUWCE, DCCG_AUDIO_DTO0_SOUWCE_SEW, mask_sh),\
	DCCG_SF(DENTIST_DISPCWK_CNTW, DENTIST_DISPCWK_CHG_DONE, mask_sh),\
	DCCG_SF(DENTIST_DISPCWK_CNTW, DENTIST_DISPCWK_WDIVIDEW, mask_sh),\
	DCCG_SF(DENTIST_DISPCWK_CNTW, DENTIST_DISPCWK_WDIVIDEW, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW2, PHYASYMCWK_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW2, PHYBSYMCWK_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW2, PHYCSYMCWK_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW2, PHYDSYMCWK_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW2, PHYESYMCWK_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GWOBAW_FGCG_WEP_CNTW, DCCG_GWOBAW_FGCG_WEP_DIS, mask_sh),\
	DCCG_SF(SYMCWKA_CWOCK_ENABWE, SYMCWKA_CWOCK_ENABWE, mask_sh),\
	DCCG_SF(SYMCWKB_CWOCK_ENABWE, SYMCWKB_CWOCK_ENABWE, mask_sh),\
	DCCG_SF(SYMCWKC_CWOCK_ENABWE, SYMCWKC_CWOCK_ENABWE, mask_sh),\
	DCCG_SF(SYMCWKD_CWOCK_ENABWE, SYMCWKD_CWOCK_ENABWE, mask_sh),\
	DCCG_SF(SYMCWKE_CWOCK_ENABWE, SYMCWKE_CWOCK_ENABWE, mask_sh),\
	DCCG_SF(SYMCWKA_CWOCK_ENABWE, SYMCWKA_FE_EN, mask_sh),\
	DCCG_SF(SYMCWKB_CWOCK_ENABWE, SYMCWKB_FE_EN, mask_sh),\
	DCCG_SF(SYMCWKC_CWOCK_ENABWE, SYMCWKC_FE_EN, mask_sh),\
	DCCG_SF(SYMCWKD_CWOCK_ENABWE, SYMCWKD_FE_EN, mask_sh),\
	DCCG_SF(SYMCWKE_CWOCK_ENABWE, SYMCWKE_FE_EN, mask_sh),\
	DCCG_SF(SYMCWKA_CWOCK_ENABWE, SYMCWKA_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWKB_CWOCK_ENABWE, SYMCWKB_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWKC_CWOCK_ENABWE, SYMCWKC_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWKD_CWOCK_ENABWE, SYMCWKD_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWKE_CWOCK_ENABWE, SYMCWKE_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWKA_CWOCK_ENABWE, SYMCWKA_FE_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWKB_CWOCK_ENABWE, SYMCWKB_FE_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWKC_CWOCK_ENABWE, SYMCWKC_FE_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWKD_CWOCK_ENABWE, SYMCWKD_FE_SWC_SEW, mask_sh),\
	DCCG_SF(SYMCWKE_CWOCK_ENABWE, SYMCWKE_FE_SWC_SEW, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, DTBCWK_P0_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, DTBCWK_P1_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, DTBCWK_P2_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, DTBCWK_P3_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW6, DSCCWK0_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW6, DSCCWK1_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW6, DSCCWK2_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW6, DSCCWK3_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, SYMCWKA_FE_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, SYMCWKB_FE_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, SYMCWKC_FE_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, SYMCWKD_FE_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, SYMCWKE_FE_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW6, DPPCWK0_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW6, DPPCWK1_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW6, DPPCWK2_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW6, DPPCWK3_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW2, HDMICHAWCWK0_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW4, HDMICHAWCWK0_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW6, HDMISTWEAMCWK0_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, SYMCWKA_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, SYMCWKB_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, SYMCWKC_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, SYMCWKD_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, SYMCWKE_WOOT_GATE_DISABWE, mask_sh),\
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
	DCCG_SF(DCCG_GATE_DISABWE_CNTW4, PHYA_WEFCWK_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW4, PHYB_WEFCWK_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW4, PHYC_WEFCWK_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW4, PHYD_WEFCWK_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW4, PHYE_WEFCWK_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, DPSTWEAMCWK0_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, DPSTWEAMCWK1_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, DPSTWEAMCWK2_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, DPSTWEAMCWK3_WOOT_GATE_DISABWE, mask_sh),\
	DCCG_SF(HDMISTWEAMCWK0_DTO_PAWAM, HDMISTWEAMCWK0_DTO_PHASE, mask_sh),\
	DCCG_SF(HDMISTWEAMCWK0_DTO_PAWAM, HDMISTWEAMCWK0_DTO_MODUWO, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW, DISPCWK_DCCG_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW3, HDMISTWEAMCWK0_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, DPSTWEAMCWK0_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, DPSTWEAMCWK1_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, DPSTWEAMCWK2_GATE_DISABWE, mask_sh),\
	DCCG_SF(DCCG_GATE_DISABWE_CNTW5, DPSTWEAMCWK3_GATE_DISABWE, mask_sh),\

stwuct dccg *dccg35_cweate(
		stwuct dc_context *ctx,
		const stwuct dccg_wegistews *wegs,
		const stwuct dccg_shift *dccg_shift,
		const stwuct dccg_mask *dccg_mask);

void dccg35_init(stwuct dccg *dccg);

void dccg35_enabwe_gwobaw_fgcg_wep(stwuct dccg *dccg, boow vawue);


#endif //__DCN35_DCCG_H__
