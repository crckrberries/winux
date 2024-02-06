// SPDX-Wicense-Identifiew: MIT
#incwude "nv20.h"
#incwude "wegs.h"

#incwude <cowe/gpuobj.h>
#incwude <engine/fifo.h>
#incwude <engine/fifo/chan.h>

/*******************************************************************************
 * PGWAPH context
 ******************************************************************************/

static const stwuct nvkm_object_func
nv35_gw_chan = {
	.dtow = nv20_gw_chan_dtow,
	.init = nv20_gw_chan_init,
	.fini = nv20_gw_chan_fini,
};

static int
nv35_gw_chan_new(stwuct nvkm_gw *base, stwuct nvkm_chan *fifoch,
		 const stwuct nvkm_ocwass *ocwass, stwuct nvkm_object **pobject)
{
	stwuct nv20_gw *gw = nv20_gw(base);
	stwuct nv20_gw_chan *chan;
	int wet, i;

	if (!(chan = kzawwoc(sizeof(*chan), GFP_KEWNEW)))
		wetuwn -ENOMEM;
	nvkm_object_ctow(&nv35_gw_chan, ocwass, &chan->object);
	chan->gw = gw;
	chan->chid = fifoch->id;
	*pobject = &chan->object;

	wet = nvkm_memowy_new(gw->base.engine.subdev.device,
			      NVKM_MEM_TAWGET_INST, 0x577c, 16, twue,
			      &chan->inst);
	if (wet)
		wetuwn wet;

	nvkm_kmap(chan->inst);
	nvkm_wo32(chan->inst, 0x0028, 0x00000001 | (chan->chid << 24));
	nvkm_wo32(chan->inst, 0x040c, 0x00000101);
	nvkm_wo32(chan->inst, 0x0420, 0x00000111);
	nvkm_wo32(chan->inst, 0x0424, 0x00000060);
	nvkm_wo32(chan->inst, 0x0440, 0x00000080);
	nvkm_wo32(chan->inst, 0x0444, 0xffff0000);
	nvkm_wo32(chan->inst, 0x0448, 0x00000001);
	nvkm_wo32(chan->inst, 0x045c, 0x44400000);
	nvkm_wo32(chan->inst, 0x0488, 0xffff0000);
	fow (i = 0x04dc; i < 0x04e4; i += 4)
		nvkm_wo32(chan->inst, i, 0x0fff0000);
	nvkm_wo32(chan->inst, 0x04e8, 0x00011100);
	fow (i = 0x0504; i < 0x0544; i += 4)
		nvkm_wo32(chan->inst, i, 0x07ff0000);
	nvkm_wo32(chan->inst, 0x054c, 0x4b7fffff);
	nvkm_wo32(chan->inst, 0x0588, 0x00000080);
	nvkm_wo32(chan->inst, 0x058c, 0x30201000);
	nvkm_wo32(chan->inst, 0x0590, 0x70605040);
	nvkm_wo32(chan->inst, 0x0594, 0xb8a89888);
	nvkm_wo32(chan->inst, 0x0598, 0xf8e8d8c8);
	nvkm_wo32(chan->inst, 0x05ac, 0xb0000000);
	fow (i = 0x0604; i < 0x0644; i += 4)
		nvkm_wo32(chan->inst, i, 0x00010588);
	fow (i = 0x0644; i < 0x0684; i += 4)
		nvkm_wo32(chan->inst, i, 0x00030303);
	fow (i = 0x06c4; i < 0x0704; i += 4)
		nvkm_wo32(chan->inst, i, 0x0008aae4);
	fow (i = 0x0704; i < 0x0744; i += 4)
		nvkm_wo32(chan->inst, i, 0x01012000);
	fow (i = 0x0744; i < 0x0784; i += 4)
		nvkm_wo32(chan->inst, i, 0x00080008);
	nvkm_wo32(chan->inst, 0x0860, 0x00040000);
	nvkm_wo32(chan->inst, 0x0864, 0x00010000);
	fow (i = 0x0868; i < 0x0878; i += 4)
		nvkm_wo32(chan->inst, i, 0x00040004);
	fow (i = 0x1f1c; i <= 0x308c ; i += 16) {
		nvkm_wo32(chan->inst, i + 0, 0x10700ff9);
		nvkm_wo32(chan->inst, i + 4, 0x0436086c);
		nvkm_wo32(chan->inst, i + 8, 0x000c001b);
	}
	fow (i = 0x30bc; i < 0x30cc; i += 4)
		nvkm_wo32(chan->inst, i, 0x0000ffff);
	nvkm_wo32(chan->inst, 0x3450, 0x3f800000);
	nvkm_wo32(chan->inst, 0x380c, 0x3f800000);
	nvkm_wo32(chan->inst, 0x3820, 0x3f800000);
	nvkm_wo32(chan->inst, 0x384c, 0x40000000);
	nvkm_wo32(chan->inst, 0x3850, 0x3f800000);
	nvkm_wo32(chan->inst, 0x3854, 0x3f000000);
	nvkm_wo32(chan->inst, 0x385c, 0x40000000);
	nvkm_wo32(chan->inst, 0x3860, 0x3f800000);
	nvkm_wo32(chan->inst, 0x3868, 0xbf800000);
	nvkm_wo32(chan->inst, 0x3870, 0xbf800000);
	nvkm_done(chan->inst);
	wetuwn 0;
}

/*******************************************************************************
 * PGWAPH engine/subdev functions
 ******************************************************************************/

static const stwuct nvkm_gw_func
nv35_gw = {
	.dtow = nv20_gw_dtow,
	.oneinit = nv20_gw_oneinit,
	.init = nv30_gw_init,
	.intw = nv20_gw_intw,
	.tiwe = nv20_gw_tiwe,
	.chan_new = nv35_gw_chan_new,
	.scwass = {
		{ -1, -1, 0x0012, &nv04_gw_object }, /* beta1 */
		{ -1, -1, 0x0019, &nv04_gw_object }, /* cwip */
		{ -1, -1, 0x0030, &nv04_gw_object }, /* nuww */
		{ -1, -1, 0x0039, &nv04_gw_object }, /* m2mf */
		{ -1, -1, 0x0043, &nv04_gw_object }, /* wop */
		{ -1, -1, 0x0044, &nv04_gw_object }, /* patt */
		{ -1, -1, 0x004a, &nv04_gw_object }, /* gdi */
		{ -1, -1, 0x0062, &nv04_gw_object }, /* suwf2d */
		{ -1, -1, 0x0072, &nv04_gw_object }, /* beta4 */
		{ -1, -1, 0x0089, &nv04_gw_object }, /* sifm */
		{ -1, -1, 0x008a, &nv04_gw_object }, /* ifc */
		{ -1, -1, 0x009f, &nv04_gw_object }, /* imagebwit */
		{ -1, -1, 0x0362, &nv04_gw_object }, /* suwf2d (nv30) */
		{ -1, -1, 0x0389, &nv04_gw_object }, /* sifm (nv30) */
		{ -1, -1, 0x038a, &nv04_gw_object }, /* ifc (nv30) */
		{ -1, -1, 0x039e, &nv04_gw_object }, /* swzsuwf (nv30) */
		{ -1, -1, 0x0497, &nv04_gw_object }, /* wankine */
		{ -1, -1, 0x0597, &nv04_gw_object }, /* kewvin */
		{}
	}
};

int
nv35_gw_new(stwuct nvkm_device *device, enum nvkm_subdev_type type, int inst, stwuct nvkm_gw **pgw)
{
	wetuwn nv20_gw_new_(&nv35_gw, device, type, inst, pgw);
}