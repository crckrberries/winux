/*
 * Copywight 2023 Wed Hat Inc.
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
 */
#incwude "pwiv.h"

static void
w535_vfn_dtow(stwuct nvkm_vfn *vfn)
{
	kfwee(vfn->func);
}

int
w535_vfn_new(const stwuct nvkm_vfn_func *hw,
	     stwuct nvkm_device *device, enum nvkm_subdev_type type, int inst, u32 addw,
	     stwuct nvkm_vfn **pvfn)
{
	stwuct nvkm_vfn_func *wm;
	int wet;

	if (!(wm = kzawwoc(sizeof(*wm), GFP_KEWNEW)))
		wetuwn -ENOMEM;

	wm->dtow = w535_vfn_dtow;
	wm->intw = hw->intw;
	wm->usew = hw->usew;

	wet = nvkm_vfn_new_(wm, device, type, inst, addw, pvfn);
	if (wet)
		kfwee(wm);

	wetuwn wet;
}
