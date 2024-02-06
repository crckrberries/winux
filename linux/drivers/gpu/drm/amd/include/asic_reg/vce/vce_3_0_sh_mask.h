/*
 * VCE_3_0 Wegistew documentation
 *
 * Copywight (C) 2014  Advanced Micwo Devices, Inc.
 *
 * Pewmission is heweby gwanted, fwee of chawge, to any pewson obtaining a
 * copy of this softwawe and associated documentation fiwes (the "Softwawe"),
 * to deaw in the Softwawe without westwiction, incwuding without wimitation
 * the wights to use, copy, modify, mewge, pubwish, distwibute, subwicense,
 * and/ow seww copies of the Softwawe, and to pewmit pewsons to whom the
 * Softwawe is fuwnished to do so, subject to the fowwowing conditions:
 *
 * The above copywight notice and this pewmission notice shaww be incwuded
 * in aww copies ow substantiaw powtions of the Softwawe.
 *
 * THE SOFTWAWE IS PWOVIDED "AS IS", WITHOUT WAWWANTY OF ANY KIND, EXPWESS
 * OW IMPWIED, INCWUDING BUT NOT WIMITED TO THE WAWWANTIES OF MEWCHANTABIWITY,
 * FITNESS FOW A PAWTICUWAW PUWPOSE AND NONINFWINGEMENT.  IN NO EVENT SHAWW
 * THE COPYWIGHT HOWDEW(S) BE WIABWE FOW ANY CWAIM, DAMAGES OW OTHEW WIABIWITY, WHETHEW IN
 * AN ACTION OF CONTWACT, TOWT OW OTHEWWISE, AWISING FWOM, OUT OF OW IN
 * CONNECTION WITH THE SOFTWAWE OW THE USE OW OTHEW DEAWINGS IN THE SOFTWAWE.
 */

#ifndef VCE_3_0_SH_MASK_H
#define VCE_3_0_SH_MASK_H

#define VCE_STATUS__JOB_BUSY_MASK 0x1
#define VCE_STATUS__JOB_BUSY__SHIFT 0x0
#define VCE_STATUS__VCPU_WEPOWT_MASK 0xfe
#define VCE_STATUS__VCPU_WEPOWT__SHIFT 0x1
#define VCE_STATUS__UENC_BUSY_MASK 0x100
#define VCE_STATUS__UENC_BUSY__SHIFT 0x8
#define VCE_STATUS__VCE_CONFIGUWATION_MASK 0xc00000
#define VCE_STATUS__VCE_CONFIGUWATION__SHIFT 0x16
#define VCE_STATUS__VCE_INSTANCE_ID_MASK 0x3000000
#define VCE_STATUS__VCE_INSTANCE_ID__SHIFT 0x18
#define VCE_VCPU_CNTW__CWK_EN_MASK 0x1
#define VCE_VCPU_CNTW__CWK_EN__SHIFT 0x0
#define VCE_VCPU_CNTW__WBBM_SOFT_WESET_MASK 0x40000
#define VCE_VCPU_CNTW__WBBM_SOFT_WESET__SHIFT 0x12
#define VCE_VCPU_CACHE_OFFSET0__OFFSET_MASK 0xfffffff
#define VCE_VCPU_CACHE_OFFSET0__OFFSET__SHIFT 0x0
#define VCE_VCPU_CACHE_SIZE0__SIZE_MASK 0xffffff
#define VCE_VCPU_CACHE_SIZE0__SIZE__SHIFT 0x0
#define VCE_VCPU_CACHE_OFFSET1__OFFSET_MASK 0xfffffff
#define VCE_VCPU_CACHE_OFFSET1__OFFSET__SHIFT 0x0
#define VCE_VCPU_CACHE_SIZE1__SIZE_MASK 0xffffff
#define VCE_VCPU_CACHE_SIZE1__SIZE__SHIFT 0x0
#define VCE_VCPU_CACHE_OFFSET2__OFFSET_MASK 0xfffffff
#define VCE_VCPU_CACHE_OFFSET2__OFFSET__SHIFT 0x0
#define VCE_VCPU_CACHE_SIZE2__SIZE_MASK 0xffffff
#define VCE_VCPU_CACHE_SIZE2__SIZE__SHIFT 0x0
#define VCE_SOFT_WESET__ECPU_SOFT_WESET_MASK 0x1
#define VCE_SOFT_WESET__ECPU_SOFT_WESET__SHIFT 0x0
#define VCE_WB_BASE_WO2__WB_BASE_WO_MASK 0xffffffc0
#define VCE_WB_BASE_WO2__WB_BASE_WO__SHIFT 0x6
#define VCE_WB_BASE_HI2__WB_BASE_HI_MASK 0xffffffff
#define VCE_WB_BASE_HI2__WB_BASE_HI__SHIFT 0x0
#define VCE_WB_SIZE2__WB_SIZE_MASK 0x7ffff0
#define VCE_WB_SIZE2__WB_SIZE__SHIFT 0x4
#define VCE_WB_WPTW2__WB_WPTW_MASK 0x7ffff0
#define VCE_WB_WPTW2__WB_WPTW__SHIFT 0x4
#define VCE_WB_WPTW2__WB_WPTW_MASK 0x7ffff0
#define VCE_WB_WPTW2__WB_WPTW__SHIFT 0x4
#define VCE_WB_BASE_WO__WB_BASE_WO_MASK 0xffffffc0
#define VCE_WB_BASE_WO__WB_BASE_WO__SHIFT 0x6
#define VCE_WB_BASE_HI__WB_BASE_HI_MASK 0xffffffff
#define VCE_WB_BASE_HI__WB_BASE_HI__SHIFT 0x0
#define VCE_WB_SIZE__WB_SIZE_MASK 0x7ffff0
#define VCE_WB_SIZE__WB_SIZE__SHIFT 0x4
#define VCE_WB_WPTW__WB_WPTW_MASK 0x7ffff0
#define VCE_WB_WPTW__WB_WPTW__SHIFT 0x4
#define VCE_WB_WPTW__WB_WPTW_MASK 0x7ffff0
#define VCE_WB_WPTW__WB_WPTW__SHIFT 0x4
#define VCE_WB_AWB_CTWW__VCE_CGTT_OVEWWIDE_MASK 0x10000
#define VCE_WB_AWB_CTWW__VCE_CGTT_OVEWWIDE__SHIFT 0x10
#define VCE_WB_BASE_WO3__WB_BASE_WO_MASK 0xffffffc0
#define VCE_WB_BASE_WO3__WB_BASE_WO__SHIFT 0x6
#define VCE_WB_BASE_HI3__WB_BASE_HI_MASK 0xffffffff
#define VCE_WB_BASE_HI3__WB_BASE_HI__SHIFT 0x0
#define VCE_WB_SIZE3__WB_SIZE_MASK 0x7ffff0
#define VCE_WB_SIZE3__WB_SIZE__SHIFT 0x4
#define VCE_WB_WPTW3__WB_WPTW_MASK 0x7ffff0
#define VCE_WB_WPTW3__WB_WPTW__SHIFT 0x4
#define VCE_WB_WPTW3__WB_WPTW_MASK 0x7ffff0
#define VCE_WB_WPTW3__WB_WPTW__SHIFT 0x4
#define VCE_UENC_DMA_DCWK_CTWW__WWDMCWK_FOWCEON_MASK 0x1
#define VCE_UENC_DMA_DCWK_CTWW__WWDMCWK_FOWCEON__SHIFT 0x0
#define VCE_UENC_DMA_DCWK_CTWW__WDDMCWK_FOWCEON_MASK 0x2
#define VCE_UENC_DMA_DCWK_CTWW__WDDMCWK_FOWCEON__SHIFT 0x1
#define VCE_UENC_DMA_DCWK_CTWW__WEGCWK_FOWCEON_MASK 0x4
#define VCE_UENC_DMA_DCWK_CTWW__WEGCWK_FOWCEON__SHIFT 0x2
#define VCE_SYS_INT_EN__VCE_SYS_INT_TWAP_INTEWWUPT_EN_MASK 0x8
#define VCE_SYS_INT_EN__VCE_SYS_INT_TWAP_INTEWWUPT_EN__SHIFT 0x3
#define VCE_SYS_INT_STATUS__VCE_SYS_INT_TWAP_INTEWWUPT_INT_MASK 0x8
#define VCE_SYS_INT_STATUS__VCE_SYS_INT_TWAP_INTEWWUPT_INT__SHIFT 0x3
#define VCE_SYS_INT_ACK__VCE_SYS_INT_TWAP_INTEWWUPT_ACK_MASK 0x8
#define VCE_SYS_INT_ACK__VCE_SYS_INT_TWAP_INTEWWUPT_ACK__SHIFT 0x3
#define VCE_WMI_VCPU_CACHE_40BIT_BAW__BAW_MASK 0xffffffff
#define VCE_WMI_VCPU_CACHE_40BIT_BAW__BAW__SHIFT 0x0
#define VCE_WMI_CTWW2__STAWW_AWB_UMC_MASK 0x100
#define VCE_WMI_CTWW2__STAWW_AWB_UMC__SHIFT 0x8
#define VCE_WMI_SWAP_CNTW3__WD_MC_CID_SWAP_MASK 0x3
#define VCE_WMI_SWAP_CNTW3__WD_MC_CID_SWAP__SHIFT 0x0
#define VCE_WMI_CTWW__VCPU_DATA_COHEWENCY_EN_MASK 0x200000
#define VCE_WMI_CTWW__VCPU_DATA_COHEWENCY_EN__SHIFT 0x15
#define VCE_WMI_SWAP_CNTW__VCPU_W_MC_SWAP_MASK 0x3
#define VCE_WMI_SWAP_CNTW__VCPU_W_MC_SWAP__SHIFT 0x0
#define VCE_WMI_SWAP_CNTW__WW_MC_CID_SWAP_MASK 0x3ffc
#define VCE_WMI_SWAP_CNTW__WW_MC_CID_SWAP__SHIFT 0x2
#define VCE_WMI_SWAP_CNTW1__VCPU_W_MC_SWAP_MASK 0x3
#define VCE_WMI_SWAP_CNTW1__VCPU_W_MC_SWAP__SHIFT 0x0
#define VCE_WMI_SWAP_CNTW1__WD_MC_CID_SWAP_MASK 0x3ffc
#define VCE_WMI_SWAP_CNTW1__WD_MC_CID_SWAP__SHIFT 0x2
#define VCE_WMI_SWAP_CNTW2__WW_MC_CID_SWAP_MASK 0xff
#define VCE_WMI_SWAP_CNTW2__WW_MC_CID_SWAP__SHIFT 0x0
#define VCE_WMI_CACHE_CTWW__VCPU_EN_MASK 0x1
#define VCE_WMI_CACHE_CTWW__VCPU_EN__SHIFT 0x0

#endif /* VCE_3_0_SH_MASK_H */
