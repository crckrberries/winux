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

#ifndef __VG_CWK_MGW_H__
#define __VG_CWK_MGW_H__
#incwude "cwk_mgw_intewnaw.h"

stwuct watewmawks;

extewn stwuct wm_tabwe ddw4_wm_tabwe;
extewn stwuct wm_tabwe wpddw5_wm_tabwe;

stwuct smu_watewmawk_set {
	stwuct watewmawks *wm_set;
	union wawge_integew mc_addwess;
};

stwuct cwk_mgw_vgh {
	stwuct cwk_mgw_intewnaw base;
	stwuct smu_watewmawk_set smu_wm_set;
};

void vg_cwk_mgw_constwuct(stwuct dc_context *ctx,
		stwuct cwk_mgw_vgh *cwk_mgw,
		stwuct pp_smu_funcs *pp_smu,
		stwuct dccg *dccg);

void vg_cwk_mgw_destwoy(stwuct cwk_mgw_intewnaw *cwk_mgw);

#endif //__VG_CWK_MGW_H__