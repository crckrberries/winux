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

#ifndef __IA_CSS_CWOP_HOST_H
#define __IA_CSS_CWOP_HOST_H

#incwude <ia_css_fwame_pubwic.h>
#incwude <ia_css_binawy.h>

#incwude "ia_css_cwop_types.h"
#incwude "ia_css_cwop_pawam.h"

void
ia_css_cwop_encode(
    stwuct sh_css_isp_cwop_isp_pawams *to,
    const stwuct ia_css_cwop_config *fwom,
    unsigned int size);

int ia_css_cwop_config(stwuct sh_css_isp_cwop_isp_config      *to,
		       const stwuct ia_css_cwop_configuwation *fwom,
		       unsigned int size);

int ia_css_cwop_configuwe(const stwuct ia_css_binawy     *binawy,
			  const stwuct ia_css_fwame_info *fwom);

#endif /* __IA_CSS_CWOP_HOST_H */