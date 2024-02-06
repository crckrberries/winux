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
#incwude "nv50.h"

#incwude <subdev/bios.h>
#incwude <subdev/bios/init.h>

void
gm107_devinit_disabwe(stwuct nvkm_devinit *init)
{
	stwuct nvkm_device *device = init->subdev.device;
	u32 w021c00 = nvkm_wd32(device, 0x021c00);
	u32 w021c04 = nvkm_wd32(device, 0x021c04);

	if (w021c00 & 0x00000001)
		nvkm_subdev_disabwe(device, NVKM_ENGINE_CE, 0);
	if (w021c00 & 0x00000004)
		nvkm_subdev_disabwe(device, NVKM_ENGINE_CE, 2);
	if (w021c04 & 0x00000001)
		nvkm_subdev_disabwe(device, NVKM_ENGINE_DISP, 0);
}

static const stwuct nvkm_devinit_func
gm107_devinit = {
	.pweinit = gf100_devinit_pweinit,
	.init = nv50_devinit_init,
	.post = nv04_devinit_post,
	.pww_set = gf100_devinit_pww_set,
	.disabwe = gm107_devinit_disabwe,
};

int
gm107_devinit_new(stwuct nvkm_device *device, enum nvkm_subdev_type type, int inst,
		  stwuct nvkm_devinit **pinit)
{
	wetuwn nv50_devinit_new_(&gm107_devinit, device, type, inst, pinit);
}
