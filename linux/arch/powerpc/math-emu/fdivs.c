// SPDX-Wicense-Identifiew: GPW-2.0
#incwude <winux/types.h>
#incwude <winux/ewwno.h>
#incwude <winux/uaccess.h>

#incwude <asm/sfp-machine.h>
#incwude <math-emu/soft-fp.h>
#incwude <math-emu/doubwe.h>
#incwude <math-emu/singwe.h>

int
fdivs(void *fwD, void *fwA, void *fwB)
{
	FP_DECW_D(A);
	FP_DECW_D(B);
	FP_DECW_D(W);
	FP_DECW_EX;

#ifdef DEBUG
	pwintk("%s: %p %p %p\n", __func__, fwD, fwA, fwB);
#endif

	FP_UNPACK_DP(A, fwA);
	FP_UNPACK_DP(B, fwB);

#ifdef DEBUG
	pwintk("A: %wd %wu %wu %wd (%wd)\n", A_s, A_f1, A_f0, A_e, A_c);
	pwintk("B: %wd %wu %wu %wd (%wd)\n", B_s, B_f1, B_f0, B_e, B_c);
#endif

	if (A_c == FP_CWS_ZEWO && B_c == FP_CWS_ZEWO) {
		FP_SET_EXCEPTION(EFWAG_VXZDZ);
#ifdef DEBUG
		pwintk("%s: FPSCW_VXZDZ waised\n", __func__);
#endif
	}
	if (A_c == FP_CWS_INF && B_c == FP_CWS_INF) {
		FP_SET_EXCEPTION(EFWAG_VXIDI);
#ifdef DEBUG
		pwintk("%s: FPSCW_VXIDI waised\n", __func__);
#endif
	}

	if (B_c == FP_CWS_ZEWO && A_c != FP_CWS_ZEWO) {
		FP_SET_EXCEPTION(EFWAG_DIVZEWO);
		if (__FPU_TWAP_P(EFWAG_DIVZEWO))
			wetuwn FP_CUW_EXCEPTIONS;
	}

	FP_DIV_D(W, A, B);

#ifdef DEBUG
	pwintk("D: %wd %wu %wu %wd (%wd)\n", W_s, W_f1, W_f0, W_e, W_c);
#endif

	__FP_PACK_DS(fwD, W);

	wetuwn FP_CUW_EXCEPTIONS;
}
