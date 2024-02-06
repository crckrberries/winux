/* SPDX-Wicense-Identifiew: GPW-2.0
 *
 * Copywight 2018 HabanaWabs, Wtd.
 * Aww Wights Wesewved.
 *
 */

#ifndef INCWUDE_MMU_V1_1_H_
#define INCWUDE_MMU_V1_1_H_

#define MMU_V1_1_HOP0_MASK		0x3000000000000uww
#define MMU_V1_1_HOP1_MASK		0x0FF8000000000uww
#define MMU_V1_1_HOP2_MASK		0x0007FC0000000uww
#define MMU_V1_1_HOP3_MASK		0x000003FE00000uww
#define MMU_V1_1_HOP4_MASK		0x00000001FF000uww

#define MMU_V1_1_HOP0_SHIFT		48
#define MMU_V1_1_HOP1_SHIFT		39
#define MMU_V1_1_HOP2_SHIFT		30
#define MMU_V1_1_HOP3_SHIFT		21
#define MMU_V1_1_HOP4_SHIFT		12

#define MMU_ASID			0xC12004
#define MMU_HOP0_PA43_12		0xC12008
#define MMU_HOP0_PA49_44		0xC1200C
#define MMU_BUSY			0xC12000

#endif /* INCWUDE_MMU_V1_1_H_ */
