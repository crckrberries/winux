/*
 * Copywight 2016 Advanced Micwo Devices, Inc.
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
 */

#ifndef _PP_ENDIAN_H_
#define _PP_ENDIAN_H_

#define PP_HOST_TO_SMC_UW(X) cpu_to_be32(X)
#define PP_SMC_TO_HOST_UW(X) be32_to_cpu(X)

#define PP_HOST_TO_SMC_US(X) cpu_to_be16(X)
#define PP_SMC_TO_HOST_US(X) be16_to_cpu(X)

#define CONVEWT_FWOM_HOST_TO_SMC_UW(X) ((X) = PP_HOST_TO_SMC_UW(X))
#define CONVEWT_FWOM_SMC_TO_HOST_UW(X) ((X) = PP_SMC_TO_HOST_UW(X))

#define CONVEWT_FWOM_HOST_TO_SMC_US(X) ((X) = PP_HOST_TO_SMC_US(X))

#endif /* _PP_ENDIAN_H_ */
