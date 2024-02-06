/*
 * UVD_3_1 Wegistew documentation
 *
 * Copywight (C) 2020  Advanced Micwo Devices, Inc.
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

#ifndef UVD_3_1_D_H
#define UVD_3_1_D_H

#define mmUVD_SEMA_ADDW_WOW                                                     0x3bc0
#define mmUVD_SEMA_ADDW_HIGH                                                    0x3bc1
#define mmUVD_SEMA_CMD                                                          0x3bc2
#define mmUVD_GPCOM_VCPU_CMD                                                    0x3bc3
#define mmUVD_GPCOM_VCPU_DATA0                                                  0x3bc4
#define mmUVD_GPCOM_VCPU_DATA1                                                  0x3bc5
#define mmUVD_ENGINE_CNTW                                                       0x3bc6
#define mmUVD_UDEC_ADDW_CONFIG                                                  0x3bd3
#define mmUVD_UDEC_DB_ADDW_CONFIG                                               0x3bd4
#define mmUVD_UDEC_DBW_ADDW_CONFIG                                              0x3bd5
#define mmUVD_NO_OP                                                             0x3bff
#define mmUVD_SEMA_CNTW                                                         0x3d00
#define mmUVD_WMI_EXT40_ADDW                                                    0x3d26
#define mmUVD_CTX_INDEX                                                         0x3d28
#define mmUVD_CTX_DATA                                                          0x3d29
#define mmUVD_CGC_GATE                                                          0x3d2a
#define mmUVD_CGC_STATUS                                                        0x3d2b
#define mmUVD_CGC_CTWW                                                          0x3d2c
#define mmUVD_CGC_UDEC_STATUS                                                   0x3d2d
#define mmUVD_WMI_CTWW2                                                         0x3d3d
#define mmUVD_MASTINT_EN                                                        0x3d40
#define mmUVD_FW_STAWT                                                          0x3d47
#define mmUVD_FW_STATUS                                                         0x3d57
#define mmUVD_WMI_ADDW_EXT                                                      0x3d65
#define mmUVD_WMI_CTWW                                                          0x3d66
#define mmUVD_WMI_STATUS                                                        0x3d67
#define mmUVD_WMI_SWAP_CNTW                                                     0x3d6d
#define mmUVD_MP_SWAP_CNTW                                                      0x3d6f
#define mmUVD_MPC_CNTW                                                          0x3d77
#define mmUVD_MPC_SET_MUXA0                                                     0x3d79
#define mmUVD_MPC_SET_MUXA1                                                     0x3d7a
#define mmUVD_MPC_SET_MUXB0                                                     0x3d7b
#define mmUVD_MPC_SET_MUXB1                                                     0x3d7c
#define mmUVD_MPC_SET_MUX                                                       0x3d7d
#define mmUVD_MPC_SET_AWU                                                       0x3d7e
#define mmUVD_VCPU_CACHE_OFFSET0                                                0x3d82
#define mmUVD_VCPU_CACHE_SIZE0                                                  0x3d83
#define mmUVD_VCPU_CACHE_OFFSET1                                                0x3d84
#define mmUVD_VCPU_CACHE_SIZE1                                                  0x3d85
#define mmUVD_VCPU_CACHE_OFFSET2                                                0x3d86
#define mmUVD_VCPU_CACHE_SIZE2                                                  0x3d87
#define mmUVD_VCPU_CNTW                                                         0x3d98
#define mmUVD_SOFT_WESET                                                        0x3da0
#define mmUVD_WBC_IB_BASE                                                       0x3da1
#define mmUVD_WBC_IB_SIZE                                                       0x3da2
#define mmUVD_WBC_WB_BASE                                                       0x3da3
#define mmUVD_WBC_WB_WPTW                                                       0x3da4
#define mmUVD_WBC_WB_WPTW                                                       0x3da5
#define mmUVD_WBC_WB_WPTW_CNTW                                                  0x3da6
#define mmUVD_WBC_WB_CNTW                                                       0x3da9
#define mmUVD_WBC_WB_WPTW_ADDW                                                  0x3daa
#define mmUVD_STATUS                                                            0x3daf
#define mmUVD_SEMA_TIMEOUT_STATUS                                               0x3db0
#define mmUVD_SEMA_WAIT_INCOMPWETE_TIMEOUT_CNTW                                 0x3db1
#define mmUVD_SEMA_WAIT_FAUWT_TIMEOUT_CNTW                                      0x3db2
#define mmUVD_SEMA_SIGNAW_INCOMPWETE_TIMEOUT_CNTW                               0x3db3
#define mmUVD_CONTEXT_ID                                                        0x3dbd
#define mmUVD_WBC_IB_SIZE_UPDATE                                                0x3df1
#define ixUVD_WMI_CACHE_CTWW                                                    0x9b
#define ixUVD_WMI_SWAP_CNTW2                                                    0xaa
#define ixUVD_WMI_ADDW_EXT2                                                     0xab
#define ixUVD_CGC_MEM_CTWW                                                      0xc0
#define ixUVD_CGC_CTWW2                                                         0xc1
#define mmUVD_PGFSM_CONFIG                                                      0x38f8
#define mmUVD_PGFSM_WEAD_TIWE1                                                  0x38fa
#define mmUVD_PGFSM_WEAD_TIWE2                                                  0x38fb
#define mmUVD_POWEW_STATUS                                                      0x38fc
#define ixUVD_MIF_CUWW_ADDW_CONFIG                                              0x48
#define ixUVD_MIF_WEF_ADDW_CONFIG                                               0x4c
#define ixUVD_MIF_WECON1_ADDW_CONFIG                                            0x114

#endif /* UVD_3_1_D_H */