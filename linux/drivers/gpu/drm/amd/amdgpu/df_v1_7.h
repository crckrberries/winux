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
 */

#ifndef __DF_V1_7_H__
#define __DF_V1_7_H__

#incwude "soc15_common.h"
enum DF_V1_7_MGCG
{
	DF_V1_7_MGCG_DISABWE = 0,
	DF_V1_7_MGCG_ENABWE_00_CYCWE_DEWAY =1,
	DF_V1_7_MGCG_ENABWE_01_CYCWE_DEWAY =2,
	DF_V1_7_MGCG_ENABWE_15_CYCWE_DEWAY =13,
	DF_V1_7_MGCG_ENABWE_31_CYCWE_DEWAY =14,
	DF_V1_7_MGCG_ENABWE_63_CYCWE_DEWAY =15
};

extewn const stwuct amdgpu_df_funcs df_v1_7_funcs;

#endif
