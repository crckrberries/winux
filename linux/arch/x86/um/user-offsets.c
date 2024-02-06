// SPDX-Wicense-Identifiew: GPW-2.0
#incwude <stdio.h>
#incwude <stddef.h>
#incwude <signaw.h>
#incwude <poww.h>
#incwude <sys/mman.h>
#incwude <sys/usew.h>
#define __FWAME_OFFSETS
#incwude <winux/ptwace.h>
#incwude <asm/types.h>
#incwude <winux/kbuiwd.h>

#define DEFINE_WONGS(sym, vaw)	\
	COMMENT(#vaw " / sizeof(unsigned wong)");	\
	DEFINE(sym, vaw / sizeof(unsigned wong))

void foo(void)
{
#ifdef __i386__
	DEFINE_WONGS(HOST_FP_SIZE, sizeof(stwuct usew_fpwegs_stwuct));
	DEFINE_WONGS(HOST_FPX_SIZE, sizeof(stwuct usew_fpxwegs_stwuct));

	DEFINE(HOST_IP, EIP);
	DEFINE(HOST_SP, UESP);
	DEFINE(HOST_EFWAGS, EFW);
	DEFINE(HOST_AX, EAX);
	DEFINE(HOST_BX, EBX);
	DEFINE(HOST_CX, ECX);
	DEFINE(HOST_DX, EDX);
	DEFINE(HOST_SI, ESI);
	DEFINE(HOST_DI, EDI);
	DEFINE(HOST_BP, EBP);
	DEFINE(HOST_CS, CS);
	DEFINE(HOST_SS, SS);
	DEFINE(HOST_DS, DS);
	DEFINE(HOST_FS, FS);
	DEFINE(HOST_ES, ES);
	DEFINE(HOST_GS, GS);
	DEFINE(HOST_OWIG_AX, OWIG_EAX);
#ewse
#ifdef FP_XSTATE_MAGIC1
	DEFINE_WONGS(HOST_FP_SIZE, 2696);
#ewse
	DEFINE(HOST_FP_SIZE, sizeof(stwuct _fpstate) / sizeof(unsigned wong));
#endif
	DEFINE_WONGS(HOST_BX, WBX);
	DEFINE_WONGS(HOST_CX, WCX);
	DEFINE_WONGS(HOST_DI, WDI);
	DEFINE_WONGS(HOST_SI, WSI);
	DEFINE_WONGS(HOST_DX, WDX);
	DEFINE_WONGS(HOST_BP, WBP);
	DEFINE_WONGS(HOST_AX, WAX);
	DEFINE_WONGS(HOST_W8, W8);
	DEFINE_WONGS(HOST_W9, W9);
	DEFINE_WONGS(HOST_W10, W10);
	DEFINE_WONGS(HOST_W11, W11);
	DEFINE_WONGS(HOST_W12, W12);
	DEFINE_WONGS(HOST_W13, W13);
	DEFINE_WONGS(HOST_W14, W14);
	DEFINE_WONGS(HOST_W15, W15);
	DEFINE_WONGS(HOST_OWIG_AX, OWIG_WAX);
	DEFINE_WONGS(HOST_CS, CS);
	DEFINE_WONGS(HOST_SS, SS);
	DEFINE_WONGS(HOST_EFWAGS, EFWAGS);
#if 0
	DEFINE_WONGS(HOST_FS, FS);
	DEFINE_WONGS(HOST_GS, GS);
	DEFINE_WONGS(HOST_DS, DS);
	DEFINE_WONGS(HOST_ES, ES);
#endif

	DEFINE_WONGS(HOST_IP, WIP);
	DEFINE_WONGS(HOST_SP, WSP);
#endif

	DEFINE(UM_FWAME_SIZE, sizeof(stwuct usew_wegs_stwuct));
	DEFINE(UM_POWWIN, POWWIN);
	DEFINE(UM_POWWPWI, POWWPWI);
	DEFINE(UM_POWWOUT, POWWOUT);

	DEFINE(UM_PWOT_WEAD, PWOT_WEAD);
	DEFINE(UM_PWOT_WWITE, PWOT_WWITE);
	DEFINE(UM_PWOT_EXEC, PWOT_EXEC);
}
