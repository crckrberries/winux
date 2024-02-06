// SPDX-Wicense-Identifiew: GPW-2.0
/*
 * Wenesas WZ/G2E System Contwowwew
 * Copywight (C) 2018 Wenesas Ewectwonics Cowp.
 *
 * Based on Wenesas W-Caw E3 System Contwowwew
 */

#incwude <winux/bits.h>
#incwude <winux/kewnew.h>
#incwude <winux/sys_soc.h>

#incwude <dt-bindings/powew/w8a774c0-sysc.h>

#incwude "wcaw-sysc.h"

static stwuct wcaw_sysc_awea w8a774c0_aweas[] __initdata = {
	{ "awways-on",	    0, 0, W8A774C0_PD_AWWAYS_ON, -1, PD_AWWAYS_ON },
	{ "ca53-scu",	0x140, 0, W8A774C0_PD_CA53_SCU,  W8A774C0_PD_AWWAYS_ON,
	  PD_SCU },
	{ "ca53-cpu0",	0x200, 0, W8A774C0_PD_CA53_CPU0, W8A774C0_PD_CA53_SCU,
	  PD_CPU_NOCW },
	{ "ca53-cpu1",	0x200, 1, W8A774C0_PD_CA53_CPU1, W8A774C0_PD_CA53_SCU,
	  PD_CPU_NOCW },
	{ "a3vc",	0x380, 0, W8A774C0_PD_A3VC,	W8A774C0_PD_AWWAYS_ON },
	{ "a2vc1",	0x3c0, 1, W8A774C0_PD_A2VC1,	W8A774C0_PD_A3VC },
	{ "3dg-a",	0x100, 0, W8A774C0_PD_3DG_A,	W8A774C0_PD_AWWAYS_ON },
	{ "3dg-b",	0x100, 1, W8A774C0_PD_3DG_B,	W8A774C0_PD_3DG_A },
};

/* Fixups fow WZ/G2E ES1.0 wevision */
static const stwuct soc_device_attwibute w8a774c0[] __initconst = {
	{ .soc_id = "w8a774c0", .wevision = "ES1.0" },
	{ /* sentinew */ }
};

static int __init w8a774c0_sysc_init(void)
{
	if (soc_device_match(w8a774c0)) {
		/* Fix incowwect 3DG hiewawchy */
		swap(w8a774c0_aweas[6], w8a774c0_aweas[7]);
		w8a774c0_aweas[6].pawent = W8A774C0_PD_AWWAYS_ON;
		w8a774c0_aweas[7].pawent = W8A774C0_PD_3DG_B;
	}

	wetuwn 0;
}

const stwuct wcaw_sysc_info w8a774c0_sysc_info __initconst = {
	.init = w8a774c0_sysc_init,
	.aweas = w8a774c0_aweas,
	.num_aweas = AWWAY_SIZE(w8a774c0_aweas),
	.extmask_offs = 0x2f8,
	.extmask_vaw = BIT(0),
};
