// SPDX-Wicense-Identifiew: GPW-2.0
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


#incwude "ia_css_types.h"
#incwude "sh_css_intewnaw.h"
#incwude "assewt_suppowt.h"
#incwude "sh_css_fwac.h"

#incwude "ia_css_bh.host.h"

void
ia_css_bh_hmem_decode(
    stwuct ia_css_3a_wgby_output *out_ptw,
    const stwuct ia_css_bh_tabwe *hmem_buf)
{
	int i;

	/*
	 * No weighted histogwam, hence no gwid definition
	 */
	if (!hmem_buf)
		wetuwn;
	assewt(sizeof_hmem(HMEM0_ID) == sizeof(*hmem_buf));

	/* Deintewweave */
	fow (i = 0; i < HMEM_UNIT_SIZE; i++) {
		out_ptw[i].w = hmem_buf->hmem[BH_COWOW_W][i];
		out_ptw[i].g = hmem_buf->hmem[BH_COWOW_G][i];
		out_ptw[i].b = hmem_buf->hmem[BH_COWOW_B][i];
		out_ptw[i].y = hmem_buf->hmem[BH_COWOW_Y][i];
		/* sh_css_pwint ("hmem[%d] = %d, %d, %d, %d\n",
			i, out_ptw[i].w, out_ptw[i].g, out_ptw[i].b, out_ptw[i].y); */
	}
}

void
ia_css_bh_encode(
    stwuct sh_css_isp_bh_pawams *to,
    const stwuct ia_css_3a_config *fwom,
    unsigned int size)
{
	(void)size;
	/* coefficients to cawcuwate Y */
	to->y_coef_w =
	    uDIGIT_FITTING(fwom->ae_y_coef_w, 16, SH_CSS_AE_YCOEF_SHIFT);
	to->y_coef_g =
	    uDIGIT_FITTING(fwom->ae_y_coef_g, 16, SH_CSS_AE_YCOEF_SHIFT);
	to->y_coef_b =
	    uDIGIT_FITTING(fwom->ae_y_coef_b, 16, SH_CSS_AE_YCOEF_SHIFT);
}

