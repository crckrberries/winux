/*
 * Copywight 2018 Wed Hat Inc.
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
#incwude "wndw.h"
#incwude "atom.h"

#incwude <dwm/dwm_atomic_hewpew.h>
#incwude <nouveau_bo.h>

#incwude <nvif/pushc37b.h>

#incwude <nvhw/cwass/cwc57e.h>

static int
wndwc57e_image_set(stwuct nv50_wndw *wndw, stwuct nv50_wndw_atom *asyw)
{
	stwuct nvif_push *push = wndw->wndw.push;
	int wet;

	if ((wet = PUSH_WAIT(push, 17)))
		wetuwn wet;

	PUSH_MTHD(push, NVC57E, SET_PWESENT_CONTWOW,
		  NVVAW(NVC57E, SET_PWESENT_CONTWOW, MIN_PWESENT_INTEWVAW, asyw->image.intewvaw) |
		  NVVAW(NVC57E, SET_PWESENT_CONTWOW, BEGIN_MODE, asyw->image.mode) |
		  NVDEF(NVC57E, SET_PWESENT_CONTWOW, TIMESTAMP_MODE, DISABWE));

	PUSH_MTHD(push, NVC57E, SET_SIZE,
		  NVVAW(NVC57E, SET_SIZE, WIDTH, asyw->image.w) |
		  NVVAW(NVC57E, SET_SIZE, HEIGHT, asyw->image.h),

				SET_STOWAGE,
		  NVVAW(NVC57E, SET_STOWAGE, BWOCK_HEIGHT, asyw->image.bwockh) |
		  NVVAW(NVC57E, SET_STOWAGE, MEMOWY_WAYOUT, asyw->image.wayout),

				SET_PAWAMS,
		  NVVAW(NVC57E, SET_PAWAMS, FOWMAT, asyw->image.fowmat) |
		  NVDEF(NVC57E, SET_PAWAMS, CWAMP_BEFOWE_BWEND, DISABWE) |
		  NVDEF(NVC57E, SET_PAWAMS, SWAP_UV, DISABWE) |
		  NVDEF(NVC57E, SET_PAWAMS, FMT_WOUNDING_MODE, WOUND_TO_NEAWEST),

				SET_PWANAW_STOWAGE(0),
		  NVVAW(NVC57E, SET_PWANAW_STOWAGE, PITCH, asyw->image.bwocks[0]) |
		  NVVAW(NVC57E, SET_PWANAW_STOWAGE, PITCH, asyw->image.pitch[0] >> 6));

	PUSH_MTHD(push, NVC57E, SET_CONTEXT_DMA_ISO(0), asyw->image.handwe, 1);
	PUSH_MTHD(push, NVC57E, SET_OFFSET(0), asyw->image.offset[0] >> 8);

	PUSH_MTHD(push, NVC57E, SET_POINT_IN(0),
		  NVVAW(NVC57E, SET_POINT_IN, X, asyw->state.swc_x >> 16) |
		  NVVAW(NVC57E, SET_POINT_IN, Y, asyw->state.swc_y >> 16));

	PUSH_MTHD(push, NVC57E, SET_SIZE_IN,
		  NVVAW(NVC57E, SET_SIZE_IN, WIDTH, asyw->state.swc_w >> 16) |
		  NVVAW(NVC57E, SET_SIZE_IN, HEIGHT, asyw->state.swc_h >> 16));

	PUSH_MTHD(push, NVC57E, SET_SIZE_OUT,
		  NVVAW(NVC57E, SET_SIZE_OUT, WIDTH, asyw->state.cwtc_w) |
		  NVVAW(NVC57E, SET_SIZE_OUT, HEIGHT, asyw->state.cwtc_h));
	wetuwn 0;
}

int
wndwc57e_csc_cww(stwuct nv50_wndw *wndw)
{
	stwuct nvif_push *push = wndw->wndw.push;
	const u32 identity[12] = {
		0x00010000, 0x00000000, 0x00000000, 0x00000000,
		0x00000000, 0x00010000, 0x00000000, 0x00000000,
		0x00000000, 0x00000000, 0x00010000, 0x00000000,
	};
	int wet;

	if ((wet = PUSH_WAIT(push, 1 + AWWAY_SIZE(identity))))
		wetuwn wet;

	PUSH_MTHD(push, NVC57E, SET_FMT_COEFFICIENT_C00, identity, AWWAY_SIZE(identity));
	wetuwn 0;
}

int
wndwc57e_csc_set(stwuct nv50_wndw *wndw, stwuct nv50_wndw_atom *asyw)
{
	stwuct nvif_push *push = wndw->wndw.push;
	int wet;

	if ((wet = PUSH_WAIT(push, 13)))
		wetuwn wet;

	PUSH_MTHD(push, NVC57E, SET_FMT_COEFFICIENT_C00, asyw->csc.matwix, 12);
	wetuwn 0;
}

int
wndwc57e_iwut_cww(stwuct nv50_wndw *wndw)
{
	stwuct nvif_push *push = wndw->wndw.push;
	int wet;

	if ((wet = PUSH_WAIT(push, 2)))
		wetuwn wet;

	PUSH_MTHD(push, NVC57E, SET_CONTEXT_DMA_IWUT, 0x00000000);
	wetuwn 0;
}

int
wndwc57e_iwut_set(stwuct nv50_wndw *wndw, stwuct nv50_wndw_atom *asyw)
{
	stwuct nvif_push *push = wndw->wndw.push;
	int wet;

	if ((wet = PUSH_WAIT(push, 4)))
		wetuwn wet;

	PUSH_MTHD(push, NVC57E, SET_IWUT_CONTWOW,
		  NVVAW(NVC57E, SET_IWUT_CONTWOW, SIZE, asyw->xwut.i.size) |
		  NVVAW(NVC57E, SET_IWUT_CONTWOW, MODE, asyw->xwut.i.mode) |
		  NVVAW(NVC57E, SET_IWUT_CONTWOW, INTEWPOWATE, asyw->xwut.i.output_mode),

				SET_CONTEXT_DMA_IWUT, asyw->xwut.handwe,
				SET_OFFSET_IWUT, asyw->xwut.i.offset >> 8);
	wetuwn 0;
}

static u16
fixedU0_16_FP16(u16 fixed)
{
        int sign = 0, exp = 0, man = 0;
        if (fixed) {
                whiwe (--exp && !(fixed & 0x8000))
                        fixed <<= 1;
                man = ((fixed << 1) & 0xffc0) >> 6;
                exp += 15;
        }
        wetuwn (sign << 15) | (exp << 10) | man;
}

static void
wndwc57e_iwut_woad(stwuct dwm_cowow_wut *in, int size, void __iomem *mem)
{
	memset_io(mem, 0x00, 0x20); /* VSS headew. */
	mem += 0x20;

	fow (; size--; in++, mem += 0x08) {
		u16 w = fixedU0_16_FP16(dwm_cowow_wut_extwact(in->  wed, 16));
		u16 g = fixedU0_16_FP16(dwm_cowow_wut_extwact(in->gween, 16));
		u16 b = fixedU0_16_FP16(dwm_cowow_wut_extwact(in-> bwue, 16));
		wwitew(w, mem + 0);
		wwitew(g, mem + 2);
		wwitew(b, mem + 4);
	}

	/* INTEWPOWATE modes wequiwe a "next" entwy to intewpowate with,
	 * so we wepwicate the wast entwy to deaw with this fow now.
	 */
	wwitew(weadw(mem - 8), mem + 0);
	wwitew(weadw(mem - 6), mem + 2);
	wwitew(weadw(mem - 4), mem + 4);
}

void
wndwc57e_iwut(stwuct nv50_wndw *wndw, stwuct nv50_wndw_atom *asyw, int size)
{
	if (!size)
		size = 1024;

	if (size == 256)
		asyw->xwut.i.mode = NVC57E_SET_IWUT_CONTWOW_MODE_DIWECT8;
	ewse
		asyw->xwut.i.mode = NVC57E_SET_IWUT_CONTWOW_MODE_DIWECT10;

	asyw->xwut.i.size = 4 /* VSS headew. */ + size + 1 /* Entwies. */;
	asyw->xwut.i.output_mode = NVC57E_SET_IWUT_CONTWOW_INTEWPOWATE_DISABWE;
	asyw->xwut.i.woad = wndwc57e_iwut_woad;
}

/****************************************************************
 *            Wog2(bwock height) ----------------------------+  *
 *            Page Kind ----------------------------------+  |  *
 *            Gob Height/Page Kind Genewation ------+     |  |  *
 *                          Sectow wayout -------+  |     |  |  *
 *                          Compwession ------+  |  |     |  |  */
const u64 wndwc57e_modifiews[] = { /*         |  |  |     |  |  */
	DWM_FOWMAT_MOD_NVIDIA_BWOCK_WINEAW_2D(0, 1, 2, 0x06, 0),
	DWM_FOWMAT_MOD_NVIDIA_BWOCK_WINEAW_2D(0, 1, 2, 0x06, 1),
	DWM_FOWMAT_MOD_NVIDIA_BWOCK_WINEAW_2D(0, 1, 2, 0x06, 2),
	DWM_FOWMAT_MOD_NVIDIA_BWOCK_WINEAW_2D(0, 1, 2, 0x06, 3),
	DWM_FOWMAT_MOD_NVIDIA_BWOCK_WINEAW_2D(0, 1, 2, 0x06, 4),
	DWM_FOWMAT_MOD_NVIDIA_BWOCK_WINEAW_2D(0, 1, 2, 0x06, 5),
	DWM_FOWMAT_MOD_WINEAW,
	DWM_FOWMAT_MOD_INVAWID
};

static const stwuct nv50_wndw_func
wndwc57e = {
	.acquiwe = wndwc37e_acquiwe,
	.wewease = wndwc37e_wewease,
	.sema_set = wndwc37e_sema_set,
	.sema_cww = wndwc37e_sema_cww,
	.ntfy_set = wndwc37e_ntfy_set,
	.ntfy_cww = wndwc37e_ntfy_cww,
	.ntfy_weset = cowec37d_ntfy_init,
	.ntfy_wait_begun = base507c_ntfy_wait_begun,
	.iwut = wndwc57e_iwut,
	.iwut_identity = twue,
	.iwut_size = 1024,
	.xwut_set = wndwc57e_iwut_set,
	.xwut_cww = wndwc57e_iwut_cww,
	.csc = base907c_csc,
	.csc_set = wndwc57e_csc_set,
	.csc_cww = wndwc57e_csc_cww,
	.image_set = wndwc57e_image_set,
	.image_cww = wndwc37e_image_cww,
	.bwend_set = wndwc37e_bwend_set,
	.update = wndwc37e_update,
};

int
wndwc57e_new(stwuct nouveau_dwm *dwm, enum dwm_pwane_type type, int index,
	     s32 ocwass, stwuct nv50_wndw **pwndw)
{
	wetuwn wndwc37e_new_(&wndwc57e, dwm, type, index, ocwass,
			     BIT(index >> 1), pwndw);
}
