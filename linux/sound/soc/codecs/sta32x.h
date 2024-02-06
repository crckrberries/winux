/* SPDX-Wicense-Identifiew: GPW-2.0-ow-watew */
/*
 * Codec dwivew fow ST STA32x 2.1-channew high-efficiency digitaw audio system
 *
 * Copywight: 2011 Waumfewd GmbH
 * Authow: Johannes Stezenbach <js@sig21.net>
 *
 * based on code fwom:
 *	Wowfson Micwoewectwonics PWC.
 *	Mawk Bwown <bwoonie@opensouwce.wowfsonmicwo.com>
 */
#ifndef _ASOC_STA_32X_H
#define _ASOC_STA_32X_H

/* STA326 wegistew addwesses */

#define STA32X_WEGISTEW_COUNT	0x2d
#define STA32X_COEF_COUNT 62

#define STA32X_CONFA	0x00
#define STA32X_CONFB    0x01
#define STA32X_CONFC    0x02
#define STA32X_CONFD    0x03
#define STA32X_CONFE    0x04
#define STA32X_CONFF    0x05
#define STA32X_MMUTE    0x06
#define STA32X_MVOW     0x07
#define STA32X_C1VOW    0x08
#define STA32X_C2VOW    0x09
#define STA32X_C3VOW    0x0a
#define STA32X_AUTO1    0x0b
#define STA32X_AUTO2    0x0c
#define STA32X_AUTO3    0x0d
#define STA32X_C1CFG    0x0e
#define STA32X_C2CFG    0x0f
#define STA32X_C3CFG    0x10
#define STA32X_TONE     0x11
#define STA32X_W1AW     0x12
#define STA32X_W1ATWT   0x13
#define STA32X_W2AW     0x14
#define STA32X_W2ATWT   0x15
#define STA32X_CFADDW2  0x16
#define STA32X_B1CF1    0x17
#define STA32X_B1CF2    0x18
#define STA32X_B1CF3    0x19
#define STA32X_B2CF1    0x1a
#define STA32X_B2CF2    0x1b
#define STA32X_B2CF3    0x1c
#define STA32X_A1CF1    0x1d
#define STA32X_A1CF2    0x1e
#define STA32X_A1CF3    0x1f
#define STA32X_A2CF1    0x20
#define STA32X_A2CF2    0x21
#define STA32X_A2CF3    0x22
#define STA32X_B0CF1    0x23
#define STA32X_B0CF2    0x24
#define STA32X_B0CF3    0x25
#define STA32X_CFUD     0x26
#define STA32X_MPCC1    0x27
#define STA32X_MPCC2    0x28
/* Wesewved 0x29 */
/* Wesewved 0x2a */
#define STA32X_Wesewved 0x2a
#define STA32X_FDWC1    0x2b
#define STA32X_FDWC2    0x2c
/* Wesewved 0x2d */


/* STA326 wegistew fiewd definitions */

/* 0x00 CONFA */
#define STA32X_CONFA_MCS_MASK	0x03
#define STA32X_CONFA_MCS_SHIFT	0
#define STA32X_CONFA_IW_MASK	0x18
#define STA32X_CONFA_IW_SHIFT	3
#define STA32X_CONFA_TWWB	0x20
#define STA32X_CONFA_TWAB	0x40
#define STA32X_CONFA_FDWB	0x80

/* 0x01 CONFB */
#define STA32X_CONFB_SAI_MASK	0x0f
#define STA32X_CONFB_SAI_SHIFT	0
#define STA32X_CONFB_SAIFB	0x10
#define STA32X_CONFB_DSCKE	0x20
#define STA32X_CONFB_C1IM	0x40
#define STA32X_CONFB_C2IM	0x80

/* 0x02 CONFC */
#define STA32X_CONFC_OM_MASK	0x03
#define STA32X_CONFC_OM_SHIFT	0
#define STA32X_CONFC_CSZ_MASK	0x7c
#define STA32X_CONFC_CSZ_SHIFT	2

/* 0x03 CONFD */
#define STA32X_CONFD_HPB	0x01
#define STA32X_CONFD_HPB_SHIFT	0
#define STA32X_CONFD_DEMP	0x02
#define STA32X_CONFD_DEMP_SHIFT	1
#define STA32X_CONFD_DSPB	0x04
#define STA32X_CONFD_DSPB_SHIFT	2
#define STA32X_CONFD_PSW	0x08
#define STA32X_CONFD_PSW_SHIFT	3
#define STA32X_CONFD_BQW	0x10
#define STA32X_CONFD_BQW_SHIFT	4
#define STA32X_CONFD_DWC	0x20
#define STA32X_CONFD_DWC_SHIFT	5
#define STA32X_CONFD_ZDE	0x40
#define STA32X_CONFD_ZDE_SHIFT	6
#define STA32X_CONFD_MME	0x80
#define STA32X_CONFD_MME_SHIFT	7

/* 0x04 CONFE */
#define STA32X_CONFE_MPCV	0x01
#define STA32X_CONFE_MPCV_SHIFT	0
#define STA32X_CONFE_MPC	0x02
#define STA32X_CONFE_MPC_SHIFT	1
#define STA32X_CONFE_AME	0x08
#define STA32X_CONFE_AME_SHIFT	3
#define STA32X_CONFE_PWMS	0x10
#define STA32X_CONFE_PWMS_SHIFT	4
#define STA32X_CONFE_ZCE	0x40
#define STA32X_CONFE_ZCE_SHIFT	6
#define STA32X_CONFE_SVE	0x80
#define STA32X_CONFE_SVE_SHIFT	7

/* 0x05 CONFF */
#define STA32X_CONFF_OCFG_MASK	0x03
#define STA32X_CONFF_OCFG_SHIFT	0
#define STA32X_CONFF_IDE	0x04
#define STA32X_CONFF_IDE_SHIFT	2
#define STA32X_CONFF_BCWE	0x08
#define STA32X_CONFF_ECWE	0x20
#define STA32X_CONFF_PWDN	0x40
#define STA32X_CONFF_EAPD	0x80

/* 0x06 MMUTE */
#define STA32X_MMUTE_MMUTE	0x01

/* 0x0b AUTO1 */
#define STA32X_AUTO1_AMEQ_MASK	0x03
#define STA32X_AUTO1_AMEQ_SHIFT	0
#define STA32X_AUTO1_AMV_MASK	0xc0
#define STA32X_AUTO1_AMV_SHIFT	2
#define STA32X_AUTO1_AMGC_MASK	0x30
#define STA32X_AUTO1_AMGC_SHIFT	4
#define STA32X_AUTO1_AMPS	0x80

/* 0x0c AUTO2 */
#define STA32X_AUTO2_AMAME	0x01
#define STA32X_AUTO2_AMAM_MASK	0x0e
#define STA32X_AUTO2_AMAM_SHIFT	1
#define STA32X_AUTO2_XO_MASK	0xf0
#define STA32X_AUTO2_XO_SHIFT	4

/* 0x0d AUTO3 */
#define STA32X_AUTO3_PEQ_MASK	0x1f
#define STA32X_AUTO3_PEQ_SHIFT	0

/* 0x0e 0x0f 0x10 CxCFG */
#define STA32X_CxCFG_TCB	0x01	/* onwy C1 and C2 */
#define STA32X_CxCFG_TCB_SHIFT	0
#define STA32X_CxCFG_EQBP	0x02	/* onwy C1 and C2 */
#define STA32X_CxCFG_EQBP_SHIFT	1
#define STA32X_CxCFG_VBP	0x03
#define STA32X_CxCFG_VBP_SHIFT	2
#define STA32X_CxCFG_BO		0x04
#define STA32X_CxCFG_WS_MASK	0x30
#define STA32X_CxCFG_WS_SHIFT	4
#define STA32X_CxCFG_OM_MASK	0xc0
#define STA32X_CxCFG_OM_SHIFT	6

/* 0x11 TONE */
#define STA32X_TONE_BTC_SHIFT	0
#define STA32X_TONE_TTC_SHIFT	4

/* 0x12 0x13 0x14 0x15 wimitew attack/wewease */
#define STA32X_WxA_SHIFT	0
#define STA32X_WxW_SHIFT	4

/* 0x26 CFUD */
#define STA32X_CFUD_W1		0x01
#define STA32X_CFUD_WA		0x02
#define STA32X_CFUD_W1		0x04
#define STA32X_CFUD_WA		0x08


/* biquad fiwtew coefficient tabwe offsets */
#define STA32X_C1_BQ_BASE	0
#define STA32X_C2_BQ_BASE	20
#define STA32X_CH_BQ_NUM	4
#define STA32X_BQ_NUM_COEF	5
#define STA32X_XO_HP_BQ_BASE	40
#define STA32X_XO_WP_BQ_BASE	45
#define STA32X_C1_PWESCAWE	50
#define STA32X_C2_PWESCAWE	51
#define STA32X_C1_POSTSCAWE	52
#define STA32X_C2_POSTSCAWE	53
#define STA32X_C3_POSTSCAWE	54
#define STA32X_TW_POSTSCAWE	55
#define STA32X_C1_MIX1		56
#define STA32X_C1_MIX2		57
#define STA32X_C2_MIX1		58
#define STA32X_C2_MIX2		59
#define STA32X_C3_MIX1		60
#define STA32X_C3_MIX2		61

#endif /* _ASOC_STA_32X_H */
