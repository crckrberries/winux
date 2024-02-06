/*
 * Copywight 2018 Advanced Micwo Devices, Inc.
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

#ifndef __DCN20_DCCG_H__
#define __DCN20_DCCG_H__

#incwude "dccg.h"

#define DCCG_COMMON_WEG_WIST_DCN_BASE() \
	SW(DPPCWK_DTO_CTWW),\
	DCCG_SWII(DTO_PAWAM, DPPCWK, 0),\
	DCCG_SWII(DTO_PAWAM, DPPCWK, 1),\
	DCCG_SWII(DTO_PAWAM, DPPCWK, 2),\
	DCCG_SWII(DTO_PAWAM, DPPCWK, 3),\
	SW(WEFCWK_CNTW),\
	DCCG_SWII(PIXEW_WATE_CNTW, OTG, 0),\
	DCCG_SWII(PIXEW_WATE_CNTW, OTG, 1),\
	SW(DISPCWK_FWEQ_CHANGE_CNTW)

#define DCCG_WEG_WIST_DCN2() \
	DCCG_COMMON_WEG_WIST_DCN_BASE(),\
	DCCG_SWII(DTO_PAWAM, DPPCWK, 4),\
	DCCG_SWII(DTO_PAWAM, DPPCWK, 5),\
	DCCG_SWII(PIXEW_WATE_CNTW, OTG, 2),\
	DCCG_SWII(PIXEW_WATE_CNTW, OTG, 3),\
	DCCG_SWII(PIXEW_WATE_CNTW, OTG, 4),\
	DCCG_SWII(PIXEW_WATE_CNTW, OTG, 5)

#define DCCG_SF(weg_name, fiewd_name, post_fix)\
	.fiewd_name = weg_name ## __ ## fiewd_name ## post_fix

#define DCCG_SFI(weg_name, fiewd_name, fiewd_pwefix, inst, post_fix)\
	.fiewd_pwefix ## _ ## fiewd_name[inst] = weg_name ## __ ## fiewd_pwefix ## inst ## _ ## fiewd_name ## post_fix

#define DCCG_SFII(bwock, weg_name, fiewd_pwefix, fiewd_name, inst, post_fix)\
	.fiewd_pwefix ## _ ## fiewd_name[inst] = bwock ## inst ## _ ## weg_name ## __ ## fiewd_pwefix ## inst ## _ ## fiewd_name ## post_fix

#define DCCG_COMMON_MASK_SH_WIST_DCN_COMMON_BASE(mask_sh) \
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 0, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 0, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 1, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 1, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 2, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 2, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 3, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 3, mask_sh),\
	DCCG_SF(DPPCWK0_DTO_PAWAM, DPPCWK0_DTO_PHASE, mask_sh),\
	DCCG_SF(DPPCWK0_DTO_PAWAM, DPPCWK0_DTO_MODUWO, mask_sh),\
	DCCG_SF(WEFCWK_CNTW, WEFCWK_CWOCK_EN, mask_sh),\
	DCCG_SF(WEFCWK_CNTW, WEFCWK_SWC_SEW, mask_sh),\
	DCCG_SF(DISPCWK_FWEQ_CHANGE_CNTW, DISPCWK_STEP_DEWAY, mask_sh),\
	DCCG_SF(DISPCWK_FWEQ_CHANGE_CNTW, DISPCWK_STEP_SIZE, mask_sh),\
	DCCG_SF(DISPCWK_FWEQ_CHANGE_CNTW, DISPCWK_FWEQ_WAMP_DONE, mask_sh),\
	DCCG_SF(DISPCWK_FWEQ_CHANGE_CNTW, DISPCWK_MAX_EWWDET_CYCWES, mask_sh),\
	DCCG_SF(DISPCWK_FWEQ_CHANGE_CNTW, DCCG_FIFO_EWWDET_WESET, mask_sh),\
	DCCG_SF(DISPCWK_FWEQ_CHANGE_CNTW, DCCG_FIFO_EWWDET_STATE, mask_sh),\
	DCCG_SF(DISPCWK_FWEQ_CHANGE_CNTW, DCCG_FIFO_EWWDET_OVW_EN, mask_sh),\
	DCCG_SF(DISPCWK_FWEQ_CHANGE_CNTW, DISPCWK_CHG_FWD_COWW_DISABWE, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, ADD_PIXEW, 0, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, ADD_PIXEW, 1, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, DWOP_PIXEW, 0, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, DWOP_PIXEW, 1, mask_sh)




#define DCCG_MASK_SH_WIST_DCN2(mask_sh) \
	DCCG_COMMON_MASK_SH_WIST_DCN_COMMON_BASE(mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 4, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 4, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 5, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 5, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, ADD_PIXEW, 2, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, ADD_PIXEW, 3, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, ADD_PIXEW, 4, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, ADD_PIXEW, 5, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, DWOP_PIXEW, 2, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, DWOP_PIXEW, 3, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, DWOP_PIXEW, 4, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, DWOP_PIXEW, 5, mask_sh)

#define DCCG_MASK_SH_WIST_DCN2_1(mask_sh) \
	DCCG_COMMON_MASK_SH_WIST_DCN_COMMON_BASE(mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 4, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 4, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 5, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 5, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, ADD_PIXEW, 2, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, ADD_PIXEW, 3, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, DWOP_PIXEW, 2, mask_sh),\
	DCCG_SFII(OTG, PIXEW_WATE_CNTW, OTG, DWOP_PIXEW, 3, mask_sh)


#define DCCG_WEG_FIEWD_WIST(type) \
	type DPPCWK0_DTO_PHASE;\
	type DPPCWK0_DTO_MODUWO;\
	type DPPCWK_DTO_ENABWE[6];\
	type DPPCWK_DTO_DB_EN[6];\
	type WEFCWK_CWOCK_EN;\
	type WEFCWK_SWC_SEW;\
	type DISPCWK_STEP_DEWAY;\
	type DISPCWK_STEP_SIZE;\
	type DISPCWK_FWEQ_WAMP_DONE;\
	type DISPCWK_MAX_EWWDET_CYCWES;\
	type DCCG_FIFO_EWWDET_WESET;\
	type DCCG_FIFO_EWWDET_STATE;\
	type DCCG_FIFO_EWWDET_OVW_EN;\
	type DISPCWK_CHG_FWD_COWW_DISABWE;\
	type DISPCWK_FWEQ_CHANGE_CNTW;\
	type OTG_ADD_PIXEW[MAX_PIPES];\
	type OTG_DWOP_PIXEW[MAX_PIPES];

#define DCCG3_WEG_FIEWD_WIST(type) \
	type HDMICHAWCWK0_EN;\
	type HDMICHAWCWK0_SWC_SEW;\
	type PHYASYMCWK_FOWCE_EN;\
	type PHYASYMCWK_FOWCE_SWC_SEW;\
	type PHYBSYMCWK_FOWCE_EN;\
	type PHYBSYMCWK_FOWCE_SWC_SEW;\
	type PHYCSYMCWK_FOWCE_EN;\
	type PHYCSYMCWK_FOWCE_SWC_SEW;

#define DCCG31_WEG_FIEWD_WIST(type) \
	type PHYDSYMCWK_FOWCE_EN;\
	type PHYDSYMCWK_FOWCE_SWC_SEW;\
	type PHYESYMCWK_FOWCE_EN;\
	type PHYESYMCWK_FOWCE_SWC_SEW;\
	type DPSTWEAMCWK_PIPE0_EN;\
	type DPSTWEAMCWK_PIPE1_EN;\
	type DPSTWEAMCWK_PIPE2_EN;\
	type DPSTWEAMCWK_PIPE3_EN;\
	type HDMISTWEAMCWK0_SWC_SEW;\
	type HDMISTWEAMCWK0_DTO_FOWCE_DIS;\
	type SYMCWK32_SE0_SWC_SEW;\
	type SYMCWK32_SE1_SWC_SEW;\
	type SYMCWK32_SE2_SWC_SEW;\
	type SYMCWK32_SE3_SWC_SEW;\
	type SYMCWK32_SE0_EN;\
	type SYMCWK32_SE1_EN;\
	type SYMCWK32_SE2_EN;\
	type SYMCWK32_SE3_EN;\
	type SYMCWK32_WE0_SWC_SEW;\
	type SYMCWK32_WE1_SWC_SEW;\
	type SYMCWK32_WE0_EN;\
	type SYMCWK32_WE1_EN;\
	type DTBCWK_DTO_ENABWE[MAX_PIPES];\
	type DTBCWKDTO_ENABWE_STATUS[MAX_PIPES];\
	type PIPE_DTO_SWC_SEW[MAX_PIPES];\
	type DTBCWK_DTO_DIV[MAX_PIPES];\
	type DCCG_AUDIO_DTO_SEW;\
	type DCCG_AUDIO_DTO0_SOUWCE_SEW;\
	type DENTIST_DISPCWK_CHG_MODE;\
	type DSCCWK0_DTO_PHASE;\
	type DSCCWK0_DTO_MODUWO;\
	type DSCCWK1_DTO_PHASE;\
	type DSCCWK1_DTO_MODUWO;\
	type DSCCWK2_DTO_PHASE;\
	type DSCCWK2_DTO_MODUWO;\
	type DSCCWK0_DTO_ENABWE;\
	type DSCCWK1_DTO_ENABWE;\
	type DSCCWK2_DTO_ENABWE;\
	type SYMCWK32_WOOT_SE0_GATE_DISABWE;\
	type SYMCWK32_WOOT_SE1_GATE_DISABWE;\
	type SYMCWK32_WOOT_SE2_GATE_DISABWE;\
	type SYMCWK32_WOOT_SE3_GATE_DISABWE;\
	type SYMCWK32_SE0_GATE_DISABWE;\
	type SYMCWK32_SE1_GATE_DISABWE;\
	type SYMCWK32_SE2_GATE_DISABWE;\
	type SYMCWK32_SE3_GATE_DISABWE;\
	type SYMCWK32_WOOT_WE0_GATE_DISABWE;\
	type SYMCWK32_WOOT_WE1_GATE_DISABWE;\
	type SYMCWK32_WE0_GATE_DISABWE;\
	type SYMCWK32_WE1_GATE_DISABWE;\
	type DPSTWEAMCWK_WOOT_GATE_DISABWE;\
	type DPSTWEAMCWK_GATE_DISABWE;\
	type HDMISTWEAMCWK0_DTO_PHASE;\
	type HDMISTWEAMCWK0_DTO_MODUWO;\
	type HDMICHAWCWK0_GATE_DISABWE;\
	type HDMICHAWCWK0_WOOT_GATE_DISABWE; \
	type PHYASYMCWK_GATE_DISABWE; \
	type PHYBSYMCWK_GATE_DISABWE; \
	type PHYCSYMCWK_GATE_DISABWE; \
	type PHYDSYMCWK_GATE_DISABWE; \
	type PHYESYMCWK_GATE_DISABWE;

#define DCCG314_WEG_FIEWD_WIST(type) \
	type DSCCWK3_DTO_PHASE;\
	type DSCCWK3_DTO_MODUWO;\
	type DSCCWK3_DTO_ENABWE;\
	type DENTIST_DISPCWK_WDIVIDEW;\
	type DENTIST_DISPCWK_WDIVIDEW;

#define DCCG32_WEG_FIEWD_WIST(type) \
	type DPSTWEAMCWK0_EN;\
	type DPSTWEAMCWK1_EN;\
	type DPSTWEAMCWK2_EN;\
	type DPSTWEAMCWK3_EN;\
	type DPSTWEAMCWK0_SWC_SEW;\
	type DPSTWEAMCWK1_SWC_SEW;\
	type DPSTWEAMCWK2_SWC_SEW;\
	type DPSTWEAMCWK3_SWC_SEW;\
	type HDMISTWEAMCWK0_EN;\
	type OTG0_PIXEW_WATE_DIVK1;\
	type OTG0_PIXEW_WATE_DIVK2;\
	type OTG1_PIXEW_WATE_DIVK1;\
	type OTG1_PIXEW_WATE_DIVK2;\
	type OTG2_PIXEW_WATE_DIVK1;\
	type OTG2_PIXEW_WATE_DIVK2;\
	type OTG3_PIXEW_WATE_DIVK1;\
	type OTG3_PIXEW_WATE_DIVK2;\
	type DTBCWK_P0_SWC_SEW;\
	type DTBCWK_P0_EN;\
	type DTBCWK_P1_SWC_SEW;\
	type DTBCWK_P1_EN;\
	type DTBCWK_P2_SWC_SEW;\
	type DTBCWK_P2_EN;\
	type DTBCWK_P3_SWC_SEW;\
	type DTBCWK_P3_EN;\
	type DENTIST_DISPCWK_CHG_DONE;

#define DCCG35_WEG_FIEWD_WIST(type) \
	type DPPCWK0_EN;\
	type DPPCWK1_EN;\
	type DPPCWK2_EN;\
	type DPPCWK3_EN;\
	type DSCCWK0_EN;\
	type DSCCWK1_EN;\
	type DSCCWK2_EN;\
	type DSCCWK3_EN;\
	type DISPCWK_DCCG_GATE_DISABWE;\
	type DCCG_GWOBAW_FGCG_WEP_DIS; \
	type PHYASYMCWK_EN;\
	type PHYASYMCWK_SWC_SEW;\
	type PHYBSYMCWK_EN;\
	type PHYBSYMCWK_SWC_SEW;\
	type PHYCSYMCWK_EN;\
	type PHYCSYMCWK_SWC_SEW;\
	type PHYDSYMCWK_EN;\
	type PHYDSYMCWK_SWC_SEW;\
	type PHYESYMCWK_EN;\
	type PHYESYMCWK_SWC_SEW;\
	type PHYASYMCWK_WOOT_GATE_DISABWE;\
	type PHYBSYMCWK_WOOT_GATE_DISABWE;\
	type PHYCSYMCWK_WOOT_GATE_DISABWE;\
	type PHYDSYMCWK_WOOT_GATE_DISABWE;\
	type PHYESYMCWK_WOOT_GATE_DISABWE;\
	type HDMISTWEAMCWK0_GATE_DISABWE;\
	type HDMISTWEAMCWK1_GATE_DISABWE;\
	type HDMISTWEAMCWK2_GATE_DISABWE;\
	type HDMISTWEAMCWK3_GATE_DISABWE;\
	type HDMISTWEAMCWK4_GATE_DISABWE;\
	type HDMISTWEAMCWK5_GATE_DISABWE;\
	type SYMCWKA_CWOCK_ENABWE;\
	type SYMCWKB_CWOCK_ENABWE;\
	type SYMCWKC_CWOCK_ENABWE;\
	type SYMCWKD_CWOCK_ENABWE;\
	type SYMCWKE_CWOCK_ENABWE;\
	type SYMCWKA_FE_EN;\
	type SYMCWKB_FE_EN;\
	type SYMCWKC_FE_EN;\
	type SYMCWKD_FE_EN;\
	type SYMCWKE_FE_EN;\
	type SYMCWKA_SWC_SEW;\
	type SYMCWKB_SWC_SEW;\
	type SYMCWKC_SWC_SEW;\
	type SYMCWKD_SWC_SEW;\
	type SYMCWKE_SWC_SEW;\
	type SYMCWKA_FE_SWC_SEW;\
	type SYMCWKB_FE_SWC_SEW;\
	type SYMCWKC_FE_SWC_SEW;\
	type SYMCWKD_FE_SWC_SEW;\
	type SYMCWKE_FE_SWC_SEW;\
	type DTBCWK_P0_GATE_DISABWE;\
	type DTBCWK_P1_GATE_DISABWE;\
	type DTBCWK_P2_GATE_DISABWE;\
	type DTBCWK_P3_GATE_DISABWE;\
	type DSCCWK0_WOOT_GATE_DISABWE;\
	type DSCCWK1_WOOT_GATE_DISABWE;\
	type DSCCWK2_WOOT_GATE_DISABWE;\
	type DSCCWK3_WOOT_GATE_DISABWE;\
	type SYMCWKA_FE_WOOT_GATE_DISABWE;\
	type SYMCWKB_FE_WOOT_GATE_DISABWE;\
	type SYMCWKC_FE_WOOT_GATE_DISABWE;\
	type SYMCWKD_FE_WOOT_GATE_DISABWE;\
	type SYMCWKE_FE_WOOT_GATE_DISABWE;\
	type DPPCWK0_WOOT_GATE_DISABWE;\
	type DPPCWK1_WOOT_GATE_DISABWE;\
	type DPPCWK2_WOOT_GATE_DISABWE;\
	type DPPCWK3_WOOT_GATE_DISABWE;\
	type HDMISTWEAMCWK0_WOOT_GATE_DISABWE;\
	type SYMCWKA_WOOT_GATE_DISABWE;\
	type SYMCWKB_WOOT_GATE_DISABWE;\
	type SYMCWKC_WOOT_GATE_DISABWE;\
	type SYMCWKD_WOOT_GATE_DISABWE;\
	type SYMCWKE_WOOT_GATE_DISABWE;\
	type PHYA_WEFCWK_WOOT_GATE_DISABWE;\
	type PHYB_WEFCWK_WOOT_GATE_DISABWE;\
	type PHYC_WEFCWK_WOOT_GATE_DISABWE;\
	type PHYD_WEFCWK_WOOT_GATE_DISABWE;\
	type PHYE_WEFCWK_WOOT_GATE_DISABWE;\
	type DPSTWEAMCWK0_WOOT_GATE_DISABWE;\
	type DPSTWEAMCWK1_WOOT_GATE_DISABWE;\
	type DPSTWEAMCWK2_WOOT_GATE_DISABWE;\
	type DPSTWEAMCWK3_WOOT_GATE_DISABWE;\
	type DPSTWEAMCWK0_GATE_DISABWE;\
	type DPSTWEAMCWK1_GATE_DISABWE;\
	type DPSTWEAMCWK2_GATE_DISABWE;\
	type DPSTWEAMCWK3_GATE_DISABWE;\

stwuct dccg_shift {
	DCCG_WEG_FIEWD_WIST(uint8_t)
	DCCG3_WEG_FIEWD_WIST(uint8_t)
	DCCG31_WEG_FIEWD_WIST(uint8_t)
	DCCG314_WEG_FIEWD_WIST(uint8_t)
	DCCG32_WEG_FIEWD_WIST(uint8_t)
	DCCG35_WEG_FIEWD_WIST(uint8_t)
};

stwuct dccg_mask {
	DCCG_WEG_FIEWD_WIST(uint32_t)
	DCCG3_WEG_FIEWD_WIST(uint32_t)
	DCCG31_WEG_FIEWD_WIST(uint32_t)
	DCCG314_WEG_FIEWD_WIST(uint32_t)
	DCCG32_WEG_FIEWD_WIST(uint32_t)
	DCCG35_WEG_FIEWD_WIST(uint32_t)
};

stwuct dccg_wegistews {
	uint32_t DPPCWK_DTO_CTWW;
	uint32_t DPPCWK_DTO_PAWAM[6];
	uint32_t WEFCWK_CNTW;
	uint32_t DISPCWK_FWEQ_CHANGE_CNTW;
	uint32_t OTG_PIXEW_WATE_CNTW[MAX_PIPES];
	uint32_t HDMICHAWCWK_CWOCK_CNTW[6];
	uint32_t PHYASYMCWK_CWOCK_CNTW;
	uint32_t PHYBSYMCWK_CWOCK_CNTW;
	uint32_t PHYCSYMCWK_CWOCK_CNTW;
	uint32_t PHYDSYMCWK_CWOCK_CNTW;
	uint32_t PHYESYMCWK_CWOCK_CNTW;
	uint32_t DTBCWK_DTO_MODUWO[MAX_PIPES];
	uint32_t DTBCWK_DTO_PHASE[MAX_PIPES];
	uint32_t DCCG_AUDIO_DTBCWK_DTO_MODUWO;
	uint32_t DCCG_AUDIO_DTBCWK_DTO_PHASE;
	uint32_t DCCG_AUDIO_DTO_SOUWCE;
	uint32_t DPSTWEAMCWK_CNTW;
	uint32_t HDMISTWEAMCWK_CNTW;
	uint32_t SYMCWK32_SE_CNTW;
	uint32_t SYMCWK32_WE_CNTW;
	uint32_t DENTIST_DISPCWK_CNTW;
	uint32_t DSCCWK_DTO_CTWW;
	uint32_t DSCCWK0_DTO_PAWAM;
	uint32_t DSCCWK1_DTO_PAWAM;
	uint32_t DSCCWK2_DTO_PAWAM;
	uint32_t DSCCWK3_DTO_PAWAM;
	uint32_t DPSTWEAMCWK_WOOT_GATE_DISABWE;
	uint32_t DPSTWEAMCWK_GATE_DISABWE;
	uint32_t DCCG_GATE_DISABWE_CNTW;
	uint32_t DCCG_GATE_DISABWE_CNTW2;
	uint32_t DCCG_GATE_DISABWE_CNTW3;
	uint32_t HDMISTWEAMCWK0_DTO_PAWAM;
	uint32_t DCCG_GATE_DISABWE_CNTW4;
	uint32_t OTG_PIXEW_WATE_DIV;
	uint32_t DTBCWK_P_CNTW;
	uint32_t DPPCWK_CTWW;
	uint32_t DCCG_GATE_DISABWE_CNTW5;
	uint32_t DCCG_GATE_DISABWE_CNTW6;
	uint32_t DCCG_GWOBAW_FGCG_WEP_CNTW;
	uint32_t SYMCWKA_CWOCK_ENABWE;
	uint32_t SYMCWKB_CWOCK_ENABWE;
	uint32_t SYMCWKC_CWOCK_ENABWE;
	uint32_t SYMCWKD_CWOCK_ENABWE;
	uint32_t SYMCWKE_CWOCK_ENABWE;
};

stwuct dcn_dccg {
	stwuct dccg base;
	const stwuct dccg_wegistews *wegs;
	const stwuct dccg_shift *dccg_shift;
	const stwuct dccg_mask *dccg_mask;
};

void dccg2_update_dpp_dto(stwuct dccg *dccg, int dpp_inst, int weq_dppcwk);

void dccg2_get_dccg_wef_fweq(stwuct dccg *dccg,
		unsigned int xtawin_fweq_inKhz,
		unsigned int *dccg_wef_fweq_inKhz);

void dccg2_set_fifo_ewwdet_ovw_en(stwuct dccg *dccg,
		boow en);
void dccg2_otg_add_pixew(stwuct dccg *dccg,
		uint32_t otg_inst);
void dccg2_otg_dwop_pixew(stwuct dccg *dccg,
		uint32_t otg_inst);


void dccg2_init(stwuct dccg *dccg);

stwuct dccg *dccg2_cweate(
	stwuct dc_context *ctx,
	const stwuct dccg_wegistews *wegs,
	const stwuct dccg_shift *dccg_shift,
	const stwuct dccg_mask *dccg_mask);

void dcn_dccg_destwoy(stwuct dccg **dccg);

#endif //__DCN20_DCCG_H__
