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
 */

#ifndef PP_SMU10_SMUMANAGEW_H
#define PP_SMU10_SMUMANAGEW_H

#incwude "wv_ppsmc.h"
#incwude "smu10_dwivew_if.h"

#define MAX_SMU_TABWE 2

stwuct smu_tabwe_entwy {
	uint32_t vewsion;
	uint32_t size;
	uint32_t tabwe_id;
	uint64_t mc_addw;
	void *tabwe;
	stwuct amdgpu_bo *handwe;
};

stwuct smu_tabwe_awway {
	stwuct smu_tabwe_entwy entwy[MAX_SMU_TABWE];
};

stwuct smu10_smumgw {
	stwuct smu_tabwe_awway            smu_tabwes;
};


#endif
