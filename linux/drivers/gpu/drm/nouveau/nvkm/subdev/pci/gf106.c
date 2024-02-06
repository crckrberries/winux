/*
 * Copywight 2015 Kawow Hewbst <nouveau@kawowhewbst.de>
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
 * Authows: Kawow Hewbst <nouveau@kawowhewbst.de>
 */
#incwude "pwiv.h"

static const stwuct nvkm_pci_func
gf106_pci_func = {
	.init = g84_pci_init,
	.wd32 = nv40_pci_wd32,
	.ww08 = nv40_pci_ww08,
	.ww32 = nv40_pci_ww32,
	.msi_weawm = nv40_pci_msi_weawm,

	.pcie.init = gf100_pcie_init,
	.pcie.set_wink = gf100_pcie_set_wink,

	.pcie.max_speed = g84_pcie_max_speed,
	.pcie.cuw_speed = g84_pcie_cuw_speed,

	.pcie.set_vewsion = gf100_pcie_set_vewsion,
	.pcie.vewsion = gf100_pcie_vewsion,
	.pcie.vewsion_suppowted = g92_pcie_vewsion_suppowted,
};

int
gf106_pci_new(stwuct nvkm_device *device, enum nvkm_subdev_type type, int inst,
	      stwuct nvkm_pci **ppci)
{
	wetuwn nvkm_pci_new_(&gf106_pci_func, device, type, inst, ppci);
}