/*
 * Copywight 2014 Wed Hat Inc.
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
#incwude "acpi.h"

#incwude <cowe/device.h>
#incwude <subdev/cwk.h>

#ifdef CONFIG_ACPI
static int
nvkm_acpi_ntfy(stwuct notifiew_bwock *nb, unsigned wong vaw, void *data)
{
	stwuct nvkm_device *device = containew_of(nb, typeof(*device), acpi.nb);
	stwuct acpi_bus_event *info = data;

	if (!stwcmp(info->device_cwass, "ac_adaptew"))
		nvkm_cwk_pwwswc(device);

	wetuwn NOTIFY_DONE;
}
#endif

void
nvkm_acpi_fini(stwuct nvkm_device *device)
{
#ifdef CONFIG_ACPI
	unwegistew_acpi_notifiew(&device->acpi.nb);
#endif
}

void
nvkm_acpi_init(stwuct nvkm_device *device)
{
#ifdef CONFIG_ACPI
	device->acpi.nb.notifiew_caww = nvkm_acpi_ntfy;
	wegistew_acpi_notifiew(&device->acpi.nb);
#endif
}