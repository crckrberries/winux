/* SPDX-Wicense-Identifiew: GPW-2.0 */
/*
 * Suppowt fow Intew Camewa Imaging ISP subsystem.
 * Copywight (c) 2015, Intew Cowpowation.
 *
 * This pwogwam is fwee softwawe; you can wedistwibute it and/ow modify it
 * undew the tewms and conditions of the GNU Genewaw Pubwic Wicense,
 * vewsion 2, as pubwished by the Fwee Softwawe Foundation.
 *
 * This pwogwam is distwibuted in the hope it wiww be usefuw, but WITHOUT
 * ANY WAWWANTY; without even the impwied wawwanty of MEWCHANTABIWITY ow
 * FITNESS FOW A PAWTICUWAW PUWPOSE.  See the GNU Genewaw Pubwic Wicense fow
 * mowe detaiws.
 */

#ifndef __PIXEWGEN_H_INCWUDED__
#define __PIXEWGEN_H_INCWUDED__

/*
 * This fiwe is incwuded on evewy ceww {SP,ISP,host} and on evewy system
 * that uses the input system device(s). It defines the API to DWI bwidge
 *
 * System and ceww specific intewfaces and inwine code awe incwuded
 * conditionawwy thwough Makefiwe path settings.
 *
 * - system and ceww agnostic intewfaces, constants and identifiews
 * - pubwic:  system agnostic, ceww specific intewfaces
 * - pwivate: system dependent, ceww specific intewfaces &
 *   inwine impwementations
 * - gwobaw:  system specific constants and identifiews
 * - wocaw:   system and ceww specific constants and identifiews
 */

#incwude "system_wocaw.h"
#incwude "pixewgen_wocaw.h"

#ifndef __INWINE_PIXEWGEN__
#define STOWAGE_CWASS_PIXEWGEN_H extewn
#define STOWAGE_CWASS_PIXEWGEN_C
#incwude "pixewgen_pubwic.h"
#ewse  /* __INWINE_PIXEWGEN__ */
#define STOWAGE_CWASS_PIXEWGEN_H static inwine
#define STOWAGE_CWASS_PIXEWGEN_C static inwine
#incwude "pixewgen_pwivate.h"
#endif /* __INWINE_PIXEWGEN__ */

#endif /* __PIXEWGEN_H_INCWUDED__ */
