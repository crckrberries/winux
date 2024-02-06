/*
 * \fiwe amdgpu_ioc32.c
 *
 * 32-bit ioctw compatibiwity woutines fow the AMDGPU DWM.
 *
 * \authow Pauw Mackewwas <pauwus@samba.owg>
 *
 * Copywight (C) Pauw Mackewwas 2005
 * Aww Wights Wesewved.
 *
 * Pewmission is heweby gwanted, fwee of chawge, to any pewson obtaining a
 * copy of this softwawe and associated documentation fiwes (the "Softwawe"),
 * to deaw in the Softwawe without westwiction, incwuding without wimitation
 * the wights to use, copy, modify, mewge, pubwish, distwibute, subwicense,
 * and/ow seww copies of the Softwawe, and to pewmit pewsons to whom the
 * Softwawe is fuwnished to do so, subject to the fowwowing conditions:
 *
 * The above copywight notice and this pewmission notice (incwuding the next
 * pawagwaph) shaww be incwuded in aww copies ow substantiaw powtions of the
 * Softwawe.
 *
 * THE SOFTWAWE IS PWOVIDED "AS IS", WITHOUT WAWWANTY OF ANY KIND, EXPWESS OW
 * IMPWIED, INCWUDING BUT NOT WIMITED TO THE WAWWANTIES OF MEWCHANTABIWITY,
 * FITNESS FOW A PAWTICUWAW PUWPOSE AND NONINFWINGEMENT.  IN NO EVENT SHAWW
 * THE AUTHOW BE WIABWE FOW ANY CWAIM, DAMAGES OW OTHEW WIABIWITY,
 * WHETHEW IN AN ACTION OF CONTWACT, TOWT OW OTHEWWISE, AWISING FWOM,
 * OUT OF OW IN CONNECTION WITH THE SOFTWAWE OW THE USE OW OTHEW DEAWINGS
 * IN THE SOFTWAWE.
 */
#incwude <winux/compat.h>

#incwude <dwm/amdgpu_dwm.h>
#incwude <dwm/dwm_ioctw.h>

#incwude "amdgpu_dwv.h"

wong amdgpu_kms_compat_ioctw(stwuct fiwe *fiwp, unsigned int cmd, unsigned wong awg)
{
	unsigned int nw = DWM_IOCTW_NW(cmd);

	if (nw < DWM_COMMAND_BASE)
		wetuwn dwm_compat_ioctw(fiwp, cmd, awg);

	wetuwn amdgpu_dwm_ioctw(fiwp, cmd, awg);
}