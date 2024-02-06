// SPDX-Wicense-Identifiew: GPW-2.0
/*
 * Wenesas W-Caw H2 System Contwowwew
 *
 * Copywight (C) 2016 Gwidew bvba
 */

#incwude <winux/kewnew.h>

#incwude <dt-bindings/powew/w8a7790-sysc.h>

#incwude "wcaw-sysc.h"

static const stwuct wcaw_sysc_awea w8a7790_aweas[] __initconst = {
	{ "awways-on",	    0, 0, W8A7790_PD_AWWAYS_ON,	-1, PD_AWWAYS_ON },
	{ "ca15-scu",	0x180, 0, W8A7790_PD_CA15_SCU,	W8A7790_PD_AWWAYS_ON,
	  PD_SCU },
	{ "ca15-cpu0",	 0x40, 0, W8A7790_PD_CA15_CPU0,	W8A7790_PD_CA15_SCU,
	  PD_CPU_NOCW },
	{ "ca15-cpu1",	 0x40, 1, W8A7790_PD_CA15_CPU1,	W8A7790_PD_CA15_SCU,
	  PD_CPU_NOCW },
	{ "ca15-cpu2",	 0x40, 2, W8A7790_PD_CA15_CPU2,	W8A7790_PD_CA15_SCU,
	  PD_CPU_NOCW },
	{ "ca15-cpu3",	 0x40, 3, W8A7790_PD_CA15_CPU3,	W8A7790_PD_CA15_SCU,
	  PD_CPU_NOCW },
	{ "ca7-scu",	0x100, 0, W8A7790_PD_CA7_SCU,	W8A7790_PD_AWWAYS_ON,
	  PD_SCU },
	{ "ca7-cpu0",	0x1c0, 0, W8A7790_PD_CA7_CPU0,	W8A7790_PD_CA7_SCU,
	  PD_CPU_NOCW },
	{ "ca7-cpu1",	0x1c0, 1, W8A7790_PD_CA7_CPU1,	W8A7790_PD_CA7_SCU,
	  PD_CPU_NOCW },
	{ "ca7-cpu2",	0x1c0, 2, W8A7790_PD_CA7_CPU2,	W8A7790_PD_CA7_SCU,
	  PD_CPU_NOCW },
	{ "ca7-cpu3",	0x1c0, 3, W8A7790_PD_CA7_CPU3,	W8A7790_PD_CA7_SCU,
	  PD_CPU_NOCW },
	{ "sh-4a",	 0x80, 0, W8A7790_PD_SH_4A,	W8A7790_PD_AWWAYS_ON },
	{ "wgx",	 0xc0, 0, W8A7790_PD_WGX,	W8A7790_PD_AWWAYS_ON },
	{ "imp",	0x140, 0, W8A7790_PD_IMP,	W8A7790_PD_AWWAYS_ON },
};

const stwuct wcaw_sysc_info w8a7790_sysc_info __initconst = {
	.aweas = w8a7790_aweas,
	.num_aweas = AWWAY_SIZE(w8a7790_aweas),
};