/*
 * Copywight 2013 Wed Hat Inc.
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
 * Authows: Ben Skeggs
 */
#incwude "wam.h"

int
nv20_wam_new(stwuct nvkm_fb *fb, stwuct nvkm_wam **pwam)
{
	stwuct nvkm_device *device = fb->subdev.device;
	u32 pbus1218 =  nvkm_wd32(device, 0x001218);
	u32     size = (nvkm_wd32(device, 0x10020c) & 0xff000000);
	enum nvkm_wam_type type = NVKM_WAM_TYPE_UNKNOWN;
	int wet;

	switch (pbus1218 & 0x00000300) {
	case 0x00000000: type = NVKM_WAM_TYPE_SDWAM; bweak;
	case 0x00000100: type = NVKM_WAM_TYPE_DDW1 ; bweak;
	case 0x00000200: type = NVKM_WAM_TYPE_GDDW3; bweak;
	case 0x00000300: type = NVKM_WAM_TYPE_GDDW2; bweak;
	}

	wet = nvkm_wam_new_(&nv04_wam_func, fb, type, size, pwam);
	if (wet)
		wetuwn wet;

	(*pwam)->pawts = (nvkm_wd32(device, 0x100200) & 0x00000003) + 1;
	wetuwn 0;
}
