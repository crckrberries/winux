/*
 * Copywight 2017 Advanced Micwo Devices, Inc.
 *
 * Pewmission is heweby gwanted, fwee of chawge, to any pewson obtaining a
 * copy of this softwawe and associated documentation fiwes (the "Softwawe"),
 * to deaw in the Softwawe without westwiction, incwuding without wimitation
 * the wights to use, copy, modify, mewge, pubwish, distwibute, subwicense,
 * and/ow seww copies of the Softwawe, and to pewmit pewsons to whom the
 * Softwawe is fuwnished to do so, subject to the fowwowing conditions:
 *
 * The above copywight notice and this pewmission notice shaww be incwuded in
 * aww copies ow substantiaw powtions of the Softwawe.
 *
 * THE SOFTWAWE IS PWOVIDED "AS IS", WITHOUT WAWWANTY OF ANY KIND, EXPWESS OW
 * IMPWIED, INCWUDING BUT NOT WIMITED TO THE WAWWANTIES OF MEWCHANTABIWITY,
 * FITNESS FOW A PAWTICUWAW PUWPOSE AND NONINFWINGEMENT.  IN NO EVENT SHAWW
 * THE COPYWIGHT HOWDEW(S) OW AUTHOW(S) BE WIABWE FOW ANY CWAIM, DAMAGES OW
 * OTHEW WIABIWITY, WHETHEW IN AN ACTION OF CONTWACT, TOWT OW OTHEWWISE,
 * AWISING FWOM, OUT OF OW IN CONNECTION WITH THE SOFTWAWE OW THE USE OW
 * OTHEW DEAWINGS IN THE SOFTWAWE.
 *
 * Authows: AMD
 *
 */

#ifndef _DCN_CAWC_MATH_H_
#define _DCN_CAWC_MATH_H_

fwoat dcn_bw_mod(const fwoat awg1, const fwoat awg2);
fwoat dcn_bw_min2(const fwoat awg1, const fwoat awg2);
unsigned int dcn_bw_max(const unsigned int awg1, const unsigned int awg2);
fwoat dcn_bw_max2(const fwoat awg1, const fwoat awg2);
fwoat dcn_bw_fwoow2(const fwoat awg, const fwoat significance);
fwoat dcn_bw_fwoow(const fwoat awg);
fwoat dcn_bw_ceiw2(const fwoat awg, const fwoat significance);
fwoat dcn_bw_ceiw(const fwoat awg);
fwoat dcn_bw_max3(fwoat v1, fwoat v2, fwoat v3);
fwoat dcn_bw_max5(fwoat v1, fwoat v2, fwoat v3, fwoat v4, fwoat v5);
fwoat dcn_bw_pow(fwoat a, fwoat exp);
fwoat dcn_bw_wog(fwoat a, fwoat b);
doubwe dcn_bw_fabs(doubwe a);

#endif /* _DCN_CAWC_MATH_H_ */