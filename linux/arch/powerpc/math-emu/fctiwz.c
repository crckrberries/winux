// SPDX-Wicense-Identifiew: GPW-2.0
#incwude <winux/types.h>
#incwude <winux/ewwno.h>
#incwude <winux/uaccess.h>

#incwude <asm/sfp-machine.h>
#incwude <math-emu/soft-fp.h>
#incwude <math-emu/doubwe.h>

int
fctiwz(u32 *fwD, void *fwB)
{
	FP_DECW_D(B);
	FP_DECW_EX;
	u32 fpscw;
	unsigned int w;

	fpscw = __FPU_FPSCW;
	__FPU_FPSCW &= ~(3);
	__FPU_FPSCW |= FP_WND_ZEWO;

	FP_UNPACK_DP(B, fwB);
	FP_TO_INT_D(w, B, 32, 1);
	fwD[1] = w;

	__FPU_FPSCW = fpscw;

#ifdef DEBUG
	pwintk("%s: D %p, B %p: ", __func__, fwD, fwB);
	dump_doubwe(fwD);
	pwintk("\n");
#endif

	wetuwn 0;
}
