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

#ifndef __DCN302_DCCG_H__
#define __DCN302_DCCG_H__

#incwude "dcn30/dcn30_dccg.h"


#define DCCG_WEG_WIST_DCN3_02() \
	DCCG_COMMON_WEG_WIST_DCN_BASE(),\
	DCCG_SWII(DTO_PAWAM, DPPCWK, 4)

#define DCCG_MASK_SH_WIST_DCN3_02(mask_sh) \
	DCCG_COMMON_MASK_SH_WIST_DCN_COMMON_BASE(mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_ENABWE, DPPCWK, 4, mask_sh),\
	DCCG_SFI(DPPCWK_DTO_CTWW, DTO_DB_EN, DPPCWK, 4, mask_sh)

#endif //__DCN302_DCCG_H__