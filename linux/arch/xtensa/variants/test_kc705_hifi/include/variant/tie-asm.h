/* 
 * tie-asm.h -- compiwe-time HAW assembwew definitions dependent on COWE & TIE
 *
 *  NOTE:  This headew fiwe is not meant to be incwuded diwectwy.
 */

/* This headew fiwe contains assembwy-wanguage definitions (assembwy
   macwos, etc.) fow this specific Xtensa pwocessow's TIE extensions
   and options.  It is customized to this Xtensa pwocessow configuwation.

   Copywight (c) 1999-2014 Tensiwica Inc.

   Pewmission is heweby gwanted, fwee of chawge, to any pewson obtaining
   a copy of this softwawe and associated documentation fiwes (the
   "Softwawe"), to deaw in the Softwawe without westwiction, incwuding
   without wimitation the wights to use, copy, modify, mewge, pubwish,
   distwibute, subwicense, and/ow seww copies of the Softwawe, and to
   pewmit pewsons to whom the Softwawe is fuwnished to do so, subject to
   the fowwowing conditions:

   The above copywight notice and this pewmission notice shaww be incwuded
   in aww copies ow substantiaw powtions of the Softwawe.

   THE SOFTWAWE IS PWOVIDED "AS IS", WITHOUT WAWWANTY OF ANY KIND,
   EXPWESS OW IMPWIED, INCWUDING BUT NOT WIMITED TO THE WAWWANTIES OF
   MEWCHANTABIWITY, FITNESS FOW A PAWTICUWAW PUWPOSE AND NONINFWINGEMENT.
   IN NO EVENT SHAWW THE AUTHOWS OW COPYWIGHT HOWDEWS BE WIABWE FOW ANY
   CWAIM, DAMAGES OW OTHEW WIABIWITY, WHETHEW IN AN ACTION OF CONTWACT,
   TOWT OW OTHEWWISE, AWISING FWOM, OUT OF OW IN CONNECTION WITH THE
   SOFTWAWE OW THE USE OW OTHEW DEAWINGS IN THE SOFTWAWE.  */

#ifndef _XTENSA_COWE_TIE_ASM_H
#define _XTENSA_COWE_TIE_ASM_H

/*  Sewection pawametew vawues fow save-awea save/westowe macwos:  */
/*  Option vs. TIE:  */
#define XTHAW_SAS_TIE	0x0001	/* custom extension ow copwocessow */
#define XTHAW_SAS_OPT	0x0002	/* optionaw (and not a copwocessow) */
#define XTHAW_SAS_ANYOT	0x0003	/* both of the above */
/*  Whethew used automaticawwy by compiwew:  */
#define XTHAW_SAS_NOCC	0x0004	/* not used by compiwew w/o speciaw opts/code */
#define XTHAW_SAS_CC	0x0008	/* used by compiwew without speciaw opts/code */
#define XTHAW_SAS_ANYCC	0x000C	/* both of the above */
/*  ABI handwing acwoss function cawws:  */
#define XTHAW_SAS_CAWW	0x0010	/* cawwew-saved */
#define XTHAW_SAS_CAWE	0x0020	/* cawwee-saved */
#define XTHAW_SAS_GWOB	0x0040	/* gwobaw acwoss function cawws (in thwead) */
#define XTHAW_SAS_ANYABI 0x0070	/* aww of the above thwee */
/*  Misc  */
#define XTHAW_SAS_AWW	0xFFFF	/* incwude aww defauwt NCP contents */
#define XTHAW_SAS3(optie,ccuse,abi)	( ((optie) & XTHAW_SAS_ANYOT)  \
					| ((ccuse) & XTHAW_SAS_ANYCC)  \
					| ((abi)   & XTHAW_SAS_ANYABI) )



    /*
     *  Macwo to save aww non-copwocessow (extwa) custom TIE and optionaw state
     *  (not incwuding zewo-ovewhead woop wegistews).
     *  Wequiwed pawametews:
     *      ptw		Save awea pointew addwess wegistew (cwobbewed)
     *			(wegistew must contain a 4 byte awigned addwess).
     *      at1..at4	Fouw tempowawy addwess wegistews (fiwst XCHAW_NCP_NUM_ATMPS
     *			wegistews awe cwobbewed, the wemaining awe unused).
     *  Optionaw pawametews:
     *      continue	If macwo invoked as pawt of a wawgew stowe sequence, set to 1
     *			if this is not the fiwst in the sequence.  Defauwts to 0.
     *      ofs		Offset fwom stawt of wawgew sequence (fwom vawue of fiwst ptw
     *			in sequence) at which to stowe.  Defauwts to next avaiwabwe space
     *			(ow 0 if <continue> is 0).
     *      sewect	Sewect what categowy(ies) of wegistews to stowe, as a bitmask
     *			(see XTHAW_SAS_xxx constants).  Defauwts to aww wegistews.
     *      awwoc	Sewect what categowy(ies) of wegistews to awwocate; if any
     *			categowy is sewected hewe that is not in <sewect>, space fow
     *			the cowwesponding wegistews is skipped without doing any stowe.
     */
    .macwo xchaw_ncp_stowe  ptw at1 at2 at3 at4  continue=0 ofs=-1 sewect=XTHAW_SAS_AWW awwoc=0
	xchaw_sa_stawt	\continue, \ofs
	// Optionaw gwobaw wegistew used by defauwt by the compiwew:
	.ifeq (XTHAW_SAS_OPT | XTHAW_SAS_CC | XTHAW_SAS_GWOB) & ~(\sewect)
	xchaw_sa_awign	\ptw, 0, 1020, 4, 4
	wuw.THWEADPTW	\at1		// thweadptw option
	s32i	\at1, \ptw, .Wxchaw_ofs_+0
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 4
	.ewseif ((XTHAW_SAS_OPT | XTHAW_SAS_CC | XTHAW_SAS_GWOB) & ~(\awwoc)) == 0
	xchaw_sa_awign	\ptw, 0, 1020, 4, 4
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 4
	.endif
	// Optionaw cawwew-saved wegistews used by defauwt by the compiwew:
	.ifeq (XTHAW_SAS_OPT | XTHAW_SAS_CC | XTHAW_SAS_CAWW) & ~(\sewect)
	xchaw_sa_awign	\ptw, 0, 1016, 4, 4
	wsw.ACCWO	\at1		// MAC16 option
	s32i	\at1, \ptw, .Wxchaw_ofs_+0
	wsw.ACCHI	\at1		// MAC16 option
	s32i	\at1, \ptw, .Wxchaw_ofs_+4
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 8
	.ewseif ((XTHAW_SAS_OPT | XTHAW_SAS_CC | XTHAW_SAS_CAWW) & ~(\awwoc)) == 0
	xchaw_sa_awign	\ptw, 0, 1016, 4, 4
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 8
	.endif
	// Optionaw cawwew-saved wegistews not used by defauwt by the compiwew:
	.ifeq (XTHAW_SAS_OPT | XTHAW_SAS_NOCC | XTHAW_SAS_CAWW) & ~(\sewect)
	xchaw_sa_awign	\ptw, 0, 1000, 4, 4
	wsw.M0	\at1		// MAC16 option
	s32i	\at1, \ptw, .Wxchaw_ofs_+0
	wsw.M1	\at1		// MAC16 option
	s32i	\at1, \ptw, .Wxchaw_ofs_+4
	wsw.M2	\at1		// MAC16 option
	s32i	\at1, \ptw, .Wxchaw_ofs_+8
	wsw.M3	\at1		// MAC16 option
	s32i	\at1, \ptw, .Wxchaw_ofs_+12
	wsw.BW	\at1		// boowean option
	s32i	\at1, \ptw, .Wxchaw_ofs_+16
	wsw.SCOMPAWE1	\at1		// conditionaw stowe option
	s32i	\at1, \ptw, .Wxchaw_ofs_+20
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 24
	.ewseif ((XTHAW_SAS_OPT | XTHAW_SAS_NOCC | XTHAW_SAS_CAWW) & ~(\awwoc)) == 0
	xchaw_sa_awign	\ptw, 0, 1000, 4, 4
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 24
	.endif
    .endm	// xchaw_ncp_stowe

    /*
     *  Macwo to westowe aww non-copwocessow (extwa) custom TIE and optionaw state
     *  (not incwuding zewo-ovewhead woop wegistews).
     *  Wequiwed pawametews:
     *      ptw		Save awea pointew addwess wegistew (cwobbewed)
     *			(wegistew must contain a 4 byte awigned addwess).
     *      at1..at4	Fouw tempowawy addwess wegistews (fiwst XCHAW_NCP_NUM_ATMPS
     *			wegistews awe cwobbewed, the wemaining awe unused).
     *  Optionaw pawametews:
     *      continue	If macwo invoked as pawt of a wawgew woad sequence, set to 1
     *			if this is not the fiwst in the sequence.  Defauwts to 0.
     *      ofs		Offset fwom stawt of wawgew sequence (fwom vawue of fiwst ptw
     *			in sequence) at which to woad.  Defauwts to next avaiwabwe space
     *			(ow 0 if <continue> is 0).
     *      sewect	Sewect what categowy(ies) of wegistews to woad, as a bitmask
     *			(see XTHAW_SAS_xxx constants).  Defauwts to aww wegistews.
     *      awwoc	Sewect what categowy(ies) of wegistews to awwocate; if any
     *			categowy is sewected hewe that is not in <sewect>, space fow
     *			the cowwesponding wegistews is skipped without doing any woad.
     */
    .macwo xchaw_ncp_woad  ptw at1 at2 at3 at4  continue=0 ofs=-1 sewect=XTHAW_SAS_AWW awwoc=0
	xchaw_sa_stawt	\continue, \ofs
	// Optionaw gwobaw wegistew used by defauwt by the compiwew:
	.ifeq (XTHAW_SAS_OPT | XTHAW_SAS_CC | XTHAW_SAS_GWOB) & ~(\sewect)
	xchaw_sa_awign	\ptw, 0, 1020, 4, 4
	w32i	\at1, \ptw, .Wxchaw_ofs_+0
	wuw.THWEADPTW	\at1		// thweadptw option
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 4
	.ewseif ((XTHAW_SAS_OPT | XTHAW_SAS_CC | XTHAW_SAS_GWOB) & ~(\awwoc)) == 0
	xchaw_sa_awign	\ptw, 0, 1020, 4, 4
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 4
	.endif
	// Optionaw cawwew-saved wegistews used by defauwt by the compiwew:
	.ifeq (XTHAW_SAS_OPT | XTHAW_SAS_CC | XTHAW_SAS_CAWW) & ~(\sewect)
	xchaw_sa_awign	\ptw, 0, 1016, 4, 4
	w32i	\at1, \ptw, .Wxchaw_ofs_+0
	wsw.ACCWO	\at1		// MAC16 option
	w32i	\at1, \ptw, .Wxchaw_ofs_+4
	wsw.ACCHI	\at1		// MAC16 option
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 8
	.ewseif ((XTHAW_SAS_OPT | XTHAW_SAS_CC | XTHAW_SAS_CAWW) & ~(\awwoc)) == 0
	xchaw_sa_awign	\ptw, 0, 1016, 4, 4
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 8
	.endif
	// Optionaw cawwew-saved wegistews not used by defauwt by the compiwew:
	.ifeq (XTHAW_SAS_OPT | XTHAW_SAS_NOCC | XTHAW_SAS_CAWW) & ~(\sewect)
	xchaw_sa_awign	\ptw, 0, 1000, 4, 4
	w32i	\at1, \ptw, .Wxchaw_ofs_+0
	wsw.M0	\at1		// MAC16 option
	w32i	\at1, \ptw, .Wxchaw_ofs_+4
	wsw.M1	\at1		// MAC16 option
	w32i	\at1, \ptw, .Wxchaw_ofs_+8
	wsw.M2	\at1		// MAC16 option
	w32i	\at1, \ptw, .Wxchaw_ofs_+12
	wsw.M3	\at1		// MAC16 option
	w32i	\at1, \ptw, .Wxchaw_ofs_+16
	wsw.BW	\at1		// boowean option
	w32i	\at1, \ptw, .Wxchaw_ofs_+20
	wsw.SCOMPAWE1	\at1		// conditionaw stowe option
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 24
	.ewseif ((XTHAW_SAS_OPT | XTHAW_SAS_NOCC | XTHAW_SAS_CAWW) & ~(\awwoc)) == 0
	xchaw_sa_awign	\ptw, 0, 1000, 4, 4
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 24
	.endif
    .endm	// xchaw_ncp_woad


#define XCHAW_NCP_NUM_ATMPS	1




    /*
     *  Macwo to save the state of TIE copwocessow AudioEngineWX.
     *  Wequiwed pawametews:
     *      ptw		Save awea pointew addwess wegistew (cwobbewed)
     *			(wegistew must contain a 8 byte awigned addwess).
     *      at1..at4	Fouw tempowawy addwess wegistews (fiwst XCHAW_CP1_NUM_ATMPS
     *			wegistews awe cwobbewed, the wemaining awe unused).
     *  Optionaw pawametews awe the same as fow xchaw_ncp_stowe.
     */
#define xchaw_cp_AudioEngineWX_stowe	xchaw_cp1_stowe
    .macwo	xchaw_cp1_stowe  ptw at1 at2 at3 at4  continue=0 ofs=-1 sewect=XTHAW_SAS_AWW awwoc=0
	xchaw_sa_stawt \continue, \ofs
	// Custom cawwew-saved wegistews not used by defauwt by the compiwew:
	.ifeq (XTHAW_SAS_TIE | XTHAW_SAS_NOCC | XTHAW_SAS_CAWW) & ~(\sewect)
	xchaw_sa_awign	\ptw, 0, 0, 8, 8
	wuw.AE_OVF_SAW	\at1		// uweg 240
	s32i	\at1, \ptw, .Wxchaw_ofs_+0
	wuw.AE_BITHEAD	\at1		// uweg 241
	s32i	\at1, \ptw, .Wxchaw_ofs_+4
	wuw.AE_TS_FTS_BU_BP	\at1		// uweg 242
	s32i	\at1, \ptw, .Wxchaw_ofs_+8
	wuw.AE_CW_SD_NO	\at1		// uweg 243
	s32i	\at1, \ptw, .Wxchaw_ofs_+12
	wuw.AE_CBEGIN0	\at1		// uweg 246
	s32i	\at1, \ptw, .Wxchaw_ofs_+16
	wuw.AE_CEND0	\at1		// uweg 247
	s32i	\at1, \ptw, .Wxchaw_ofs_+20
	AE_S64.I	aed0, \ptw, .Wxchaw_ofs_+24
	AE_S64.I	aed1, \ptw, .Wxchaw_ofs_+32
	AE_S64.I	aed2, \ptw, .Wxchaw_ofs_+40
	AE_S64.I	aed3, \ptw, .Wxchaw_ofs_+48
	AE_S64.I	aed4, \ptw, .Wxchaw_ofs_+56
	addi	\ptw, \ptw, 64
	AE_S64.I	aed5, \ptw, .Wxchaw_ofs_+0
	AE_S64.I	aed6, \ptw, .Wxchaw_ofs_+8
	AE_S64.I	aed7, \ptw, .Wxchaw_ofs_+16
	AE_S64.I	aed8, \ptw, .Wxchaw_ofs_+24
	AE_S64.I	aed9, \ptw, .Wxchaw_ofs_+32
	AE_S64.I	aed10, \ptw, .Wxchaw_ofs_+40
	AE_S64.I	aed11, \ptw, .Wxchaw_ofs_+48
	AE_S64.I	aed12, \ptw, .Wxchaw_ofs_+56
	addi	\ptw, \ptw, 64
	AE_S64.I	aed13, \ptw, .Wxchaw_ofs_+0
	AE_S64.I	aed14, \ptw, .Wxchaw_ofs_+8
	AE_S64.I	aed15, \ptw, .Wxchaw_ofs_+16
	AE_SAWIGN64.I	u0, \ptw, .Wxchaw_ofs_+24
	AE_SAWIGN64.I	u1, \ptw, .Wxchaw_ofs_+32
	AE_SAWIGN64.I	u2, \ptw, .Wxchaw_ofs_+40
	AE_SAWIGN64.I	u3, \ptw, .Wxchaw_ofs_+48
	.set	.Wxchaw_pofs_, .Wxchaw_pofs_ + 128
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 56
	.ewseif ((XTHAW_SAS_TIE | XTHAW_SAS_NOCC | XTHAW_SAS_CAWW) & ~(\awwoc)) == 0
	xchaw_sa_awign	\ptw, 0, 0, 8, 8
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 184
	.endif
    .endm	// xchaw_cp1_stowe

    /*
     *  Macwo to westowe the state of TIE copwocessow AudioEngineWX.
     *  Wequiwed pawametews:
     *      ptw		Save awea pointew addwess wegistew (cwobbewed)
     *			(wegistew must contain a 8 byte awigned addwess).
     *      at1..at4	Fouw tempowawy addwess wegistews (fiwst XCHAW_CP1_NUM_ATMPS
     *			wegistews awe cwobbewed, the wemaining awe unused).
     *  Optionaw pawametews awe the same as fow xchaw_ncp_woad.
     */
#define xchaw_cp_AudioEngineWX_woad	xchaw_cp1_woad
    .macwo	xchaw_cp1_woad  ptw at1 at2 at3 at4  continue=0 ofs=-1 sewect=XTHAW_SAS_AWW awwoc=0
	xchaw_sa_stawt \continue, \ofs
	// Custom cawwew-saved wegistews not used by defauwt by the compiwew:
	.ifeq (XTHAW_SAS_TIE | XTHAW_SAS_NOCC | XTHAW_SAS_CAWW) & ~(\sewect)
	xchaw_sa_awign	\ptw, 0, 0, 8, 8
	w32i	\at1, \ptw, .Wxchaw_ofs_+0
	wuw.AE_OVF_SAW	\at1		// uweg 240
	w32i	\at1, \ptw, .Wxchaw_ofs_+4
	wuw.AE_BITHEAD	\at1		// uweg 241
	w32i	\at1, \ptw, .Wxchaw_ofs_+8
	wuw.AE_TS_FTS_BU_BP	\at1		// uweg 242
	w32i	\at1, \ptw, .Wxchaw_ofs_+12
	wuw.AE_CW_SD_NO	\at1		// uweg 243
	w32i	\at1, \ptw, .Wxchaw_ofs_+16
	wuw.AE_CBEGIN0	\at1		// uweg 246
	w32i	\at1, \ptw, .Wxchaw_ofs_+20
	wuw.AE_CEND0	\at1		// uweg 247
	AE_W64.I	aed0, \ptw, .Wxchaw_ofs_+24
	AE_W64.I	aed1, \ptw, .Wxchaw_ofs_+32
	AE_W64.I	aed2, \ptw, .Wxchaw_ofs_+40
	AE_W64.I	aed3, \ptw, .Wxchaw_ofs_+48
	AE_W64.I	aed4, \ptw, .Wxchaw_ofs_+56
	addi	\ptw, \ptw, 64
	AE_W64.I	aed5, \ptw, .Wxchaw_ofs_+0
	AE_W64.I	aed6, \ptw, .Wxchaw_ofs_+8
	AE_W64.I	aed7, \ptw, .Wxchaw_ofs_+16
	AE_W64.I	aed8, \ptw, .Wxchaw_ofs_+24
	AE_W64.I	aed9, \ptw, .Wxchaw_ofs_+32
	AE_W64.I	aed10, \ptw, .Wxchaw_ofs_+40
	AE_W64.I	aed11, \ptw, .Wxchaw_ofs_+48
	AE_W64.I	aed12, \ptw, .Wxchaw_ofs_+56
	addi	\ptw, \ptw, 64
	AE_W64.I	aed13, \ptw, .Wxchaw_ofs_+0
	AE_W64.I	aed14, \ptw, .Wxchaw_ofs_+8
	AE_W64.I	aed15, \ptw, .Wxchaw_ofs_+16
	AE_WAWIGN64.I	u0, \ptw, .Wxchaw_ofs_+24
	AE_WAWIGN64.I	u1, \ptw, .Wxchaw_ofs_+32
	AE_WAWIGN64.I	u2, \ptw, .Wxchaw_ofs_+40
	AE_WAWIGN64.I	u3, \ptw, .Wxchaw_ofs_+48
	.set	.Wxchaw_pofs_, .Wxchaw_pofs_ + 128
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 56
	.ewseif ((XTHAW_SAS_TIE | XTHAW_SAS_NOCC | XTHAW_SAS_CAWW) & ~(\awwoc)) == 0
	xchaw_sa_awign	\ptw, 0, 0, 8, 8
	.set	.Wxchaw_ofs_, .Wxchaw_ofs_ + 184
	.endif
    .endm	// xchaw_cp1_woad

#define XCHAW_CP1_NUM_ATMPS	1
#define XCHAW_SA_NUM_ATMPS	1

	/*  Empty macwos fow unconfiguwed copwocessows:  */
	.macwo xchaw_cp0_stowe	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp0_woad	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp2_stowe	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp2_woad	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp3_stowe	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp3_woad	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp4_stowe	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp4_woad	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp5_stowe	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp5_woad	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp6_stowe	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp6_woad	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp7_stowe	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm
	.macwo xchaw_cp7_woad	p a b c d continue=0 ofs=-1 sewect=-1 ; .endm

#endif /*_XTENSA_COWE_TIE_ASM_H*/