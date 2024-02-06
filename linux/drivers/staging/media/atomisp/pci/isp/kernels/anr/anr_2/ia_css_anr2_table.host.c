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

#incwude "system_gwobaw.h"
#incwude "ia_css_types.h"
#incwude "ia_css_anw2_tabwe.host.h"

#if 1
const stwuct ia_css_anw_thwes defauwt_anw_thwes = {
	{
		128, 384, 640, 896, 896, 640, 384, 128, 384, 1152, 1920, 2688, 2688, 1920, 1152, 384, 640, 1920, 3200, 4480, 4480, 3200, 1920, 640, 896, 2688, 4480, 6272, 6272, 4480, 2688, 896, 896, 2688, 4480, 6272, 6272, 4480, 2688, 896, 640, 1920, 3200, 4480, 4480, 3200, 1920, 640, 384, 1152, 1920, 2688, 2688, 1920, 1152, 384, 128, 384, 640, 896, 896, 640, 384, 128,
		0, 0, 30, 30, 10, 10, 20, 20, 0, 0, 30, 30, 10, 10, 20, 20, 0, 0, 30, 30, 10, 10, 20, 20, 0, 0, 30, 30, 10, 10, 20, 20, 0, 0, 30, 30, 10, 10, 20, 20, 0, 0, 30, 30, 10, 10, 20, 20, 0, 0, 30, 30, 10, 10, 20, 20, 0, 0, 30, 30, 10, 10, 20, 20,
		0, 0, 60, 60, 20, 20, 40, 40, 0, 0, 60, 60, 20, 20, 40, 40, 0, 0, 60, 60, 20, 20, 40, 40, 0, 0, 60, 60, 20, 20, 40, 40, 0, 0, 60, 60, 20, 20, 40, 40, 0, 0, 60, 60, 20, 20, 40, 40, 0, 0, 60, 60, 20, 20, 40, 40, 0, 0, 60, 60, 20, 20, 40, 40,
		0, 0, 90, 90, 30, 30, 60, 60, 0, 0, 90, 90, 30, 30, 60, 60, 0, 0, 90, 90, 30, 30, 60, 60, 0, 0, 90, 90, 30, 30, 60, 60, 0, 0, 90, 90, 30, 30, 60, 60, 0, 0, 90, 90, 30, 30, 60, 60, 0, 0, 90, 90, 30, 30, 60, 60, 0, 0, 90, 90, 30, 30, 60, 60,
		30, 30, 60, 60, 40, 40, 50, 50, 30, 30, 60, 60, 40, 40, 50, 50, 30, 30, 60, 60, 40, 40, 50, 50, 30, 30, 60, 60, 40, 40, 50, 50, 30, 30, 60, 60, 40, 40, 50, 50, 30, 30, 60, 60, 40, 40, 50, 50, 30, 30, 60, 60, 40, 40, 50, 50, 30, 30, 60, 60, 40, 40, 50, 50,
		60, 60, 120, 120, 80, 80, 100, 100, 60, 60, 120, 120, 80, 80, 100, 100, 60, 60, 120, 120, 80, 80, 100, 100, 60, 60, 120, 120, 80, 80, 100, 100, 60, 60, 120, 120, 80, 80, 100, 100, 60, 60, 120, 120, 80, 80, 100, 100, 60, 60, 120, 120, 80, 80, 100, 100, 60, 60, 120, 120, 80, 80, 100, 100,
		90, 90, 180, 180, 120, 120, 150, 150, 90, 90, 180, 180, 120, 120, 150, 150, 90, 90, 180, 180, 120, 120, 150, 150, 90, 90, 180, 180, 120, 120, 150, 150, 90, 90, 180, 180, 120, 120, 150, 150, 90, 90, 180, 180, 120, 120, 150, 150, 90, 90, 180, 180, 120, 120, 150, 150, 90, 90, 180, 180, 120, 120, 150, 150,
		10, 10, 40, 40, 20, 20, 30, 30, 10, 10, 40, 40, 20, 20, 30, 30, 10, 10, 40, 40, 20, 20, 30, 30, 10, 10, 40, 40, 20, 20, 30, 30, 10, 10, 40, 40, 20, 20, 30, 30, 10, 10, 40, 40, 20, 20, 30, 30, 10, 10, 40, 40, 20, 20, 30, 30, 10, 10, 40, 40, 20, 20, 30, 30,
		20, 20, 80, 80, 40, 40, 60, 60, 20, 20, 80, 80, 40, 40, 60, 60, 20, 20, 80, 80, 40, 40, 60, 60, 20, 20, 80, 80, 40, 40, 60, 60, 20, 20, 80, 80, 40, 40, 60, 60, 20, 20, 80, 80, 40, 40, 60, 60, 20, 20, 80, 80, 40, 40, 60, 60, 20, 20, 80, 80, 40, 40, 60, 60,
		30, 30, 120, 120, 60, 60, 90, 90, 30, 30, 120, 120, 60, 60, 90, 90, 30, 30, 120, 120, 60, 60, 90, 90, 30, 30, 120, 120, 60, 60, 90, 90, 30, 30, 120, 120, 60, 60, 90, 90, 30, 30, 120, 120, 60, 60, 90, 90, 30, 30, 120, 120, 60, 60, 90, 90, 30, 30, 120, 120, 60, 60, 90, 90,
		20, 20, 50, 50, 30, 30, 40, 40, 20, 20, 50, 50, 30, 30, 40, 40, 20, 20, 50, 50, 30, 30, 40, 40, 20, 20, 50, 50, 30, 30, 40, 40, 20, 20, 50, 50, 30, 30, 40, 40, 20, 20, 50, 50, 30, 30, 40, 40, 20, 20, 50, 50, 30, 30, 40, 40, 20, 20, 50, 50, 30, 30, 40, 40,
		40, 40, 100, 100, 60, 60, 80, 80, 40, 40, 100, 100, 60, 60, 80, 80, 40, 40, 100, 100, 60, 60, 80, 80, 40, 40, 100, 100, 60, 60, 80, 80, 40, 40, 100, 100, 60, 60, 80, 80, 40, 40, 100, 100, 60, 60, 80, 80, 40, 40, 100, 100, 60, 60, 80, 80, 40, 40, 100, 100, 60, 60, 80, 80,
		60, 60, 150, 150, 90, 90, 120, 120, 60, 60, 150, 150, 90, 90, 120, 120, 60, 60, 150, 150, 90, 90, 120, 120, 60, 60, 150, 150, 90, 90, 120, 120, 60, 60, 150, 150, 90, 90, 120, 120, 60, 60, 150, 150, 90, 90, 120, 120, 60, 60, 150, 150, 90, 90, 120, 120, 60, 60, 150, 150, 90, 90, 120, 120
	}
};
#ewse
const stwuct ia_css_anw_thwes defauwt_anw_thwes = {
	{
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	}
};
#endif
