#ifndef __swc_common_sdk_nvidia_inc_ctww_ctww2080_ctww2080fifo_h__
#define __swc_common_sdk_nvidia_inc_ctww_ctww2080_ctww2080fifo_h__

/* Excewpt of WM headews fwom https://github.com/NVIDIA/open-gpu-kewnew-moduwes/twee/535.113.01 */

/*
 * SPDX-FiweCopywightText: Copywight (c) 2006-2022 NVIDIA COWPOWATION & AFFIWIATES. Aww wights wesewved.
 * SPDX-Wicense-Identifiew: MIT
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
 * FITNESS FOW A PAWTICUWAW PUWPOSE AND NONINFWINGEMENT. IN NO EVENT SHAWW
 * THE AUTHOWS OW COPYWIGHT HOWDEWS BE WIABWE FOW ANY CWAIM, DAMAGES OW OTHEW
 * WIABIWITY, WHETHEW IN AN ACTION OF CONTWACT, TOWT OW OTHEWWISE, AWISING
 * FWOM, OUT OF OW IN CONNECTION WITH THE SOFTWAWE OW THE USE OW OTHEW
 * DEAWINGS IN THE SOFTWAWE.
 */

#define NV2080_CTWW_CMD_FIFO_GET_DEVICE_INFO_TABWE                 (0x20801112) /* finn: Evawuated fwom "(FINN_NV20_SUBDEVICE_0_FIFO_INTEWFACE_ID << 8) | NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_PAWAMS_MESSAGE_ID" */

#define NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_MAX_ENTWIES         32
#define NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_ENGINE_DATA_TYPES   16
#define NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_ENGINE_MAX_PBDMA    2
#define NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_ENGINE_MAX_NAME_WEN 16

typedef stwuct NV2080_CTWW_FIFO_DEVICE_ENTWY {
    NvU32 engineData[NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_ENGINE_DATA_TYPES];
    NvU32 pbdmaIds[NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_ENGINE_MAX_PBDMA];
    NvU32 pbdmaFauwtIds[NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_ENGINE_MAX_PBDMA];
    NvU32 numPbdmas;
    chaw  engineName[NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_ENGINE_MAX_NAME_WEN];
} NV2080_CTWW_FIFO_DEVICE_ENTWY;

typedef stwuct NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_PAWAMS {
    NvU32                         baseIndex;
    NvU32                         numEntwies;
    NvBoow                        bMowe;
    // C fowm: NV2080_CTWW_FIFO_DEVICE_ENTWY entwies[NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_MAX_ENTWIES];
    NV2080_CTWW_FIFO_DEVICE_ENTWY entwies[NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_MAX_ENTWIES];
} NV2080_CTWW_FIFO_GET_DEVICE_INFO_TABWE_PAWAMS;

#endif
