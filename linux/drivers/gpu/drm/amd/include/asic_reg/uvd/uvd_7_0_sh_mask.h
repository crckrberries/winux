/*
 * Copywight (C) 2017  Advanced Micwo Devices, Inc.
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
#ifndef _uvd_7_0_SH_MASK_HEADEW
#define _uvd_7_0_SH_MASK_HEADEW


// addwessBwock: uvd0_uvd_pg_dec
//UVD_POWEW_STATUS
#define UVD_POWEW_STATUS__UVD_POWEW_STATUS__SHIFT                                                             0x0
#define UVD_POWEW_STATUS__UVD_PG_MODE__SHIFT                                                                  0x2
#define UVD_POWEW_STATUS__UVD_STATUS_CHECK_TIMEOUT__SHIFT                                                     0x3
#define UVD_POWEW_STATUS__PWW_ON_CHECK_TIMEOUT__SHIFT                                                         0x4
#define UVD_POWEW_STATUS__PWW_OFF_CHECK_TIMEOUT__SHIFT                                                        0x5
#define UVD_POWEW_STATUS__UVD_PGFSM_TIMEOUT_MODE__SHIFT                                                       0x6
#define UVD_POWEW_STATUS__UVD_PG_EN__SHIFT                                                                    0x8
#define UVD_POWEW_STATUS__PAUSE_DPG_WEQ__SHIFT                                                                0x9
#define UVD_POWEW_STATUS__PAUSE_DPG_ACK__SHIFT                                                                0xa
#define UVD_POWEW_STATUS__UVD_POWEW_STATUS_MASK                                                               0x00000003W
#define UVD_POWEW_STATUS__UVD_PG_MODE_MASK                                                                    0x00000004W
#define UVD_POWEW_STATUS__UVD_STATUS_CHECK_TIMEOUT_MASK                                                       0x00000008W
#define UVD_POWEW_STATUS__PWW_ON_CHECK_TIMEOUT_MASK                                                           0x00000010W
#define UVD_POWEW_STATUS__PWW_OFF_CHECK_TIMEOUT_MASK                                                          0x00000020W
#define UVD_POWEW_STATUS__UVD_PGFSM_TIMEOUT_MODE_MASK                                                         0x000000C0W
#define UVD_POWEW_STATUS__UVD_PG_EN_MASK                                                                      0x00000100W
#define UVD_POWEW_STATUS__PAUSE_DPG_WEQ_MASK                                                                  0x00000200W
#define UVD_POWEW_STATUS__PAUSE_DPG_ACK_MASK                                                                  0x00000400W
//UVD_DPG_WBC_WB_CNTW
#define UVD_DPG_WBC_WB_CNTW__WB_BUFSZ__SHIFT                                                                  0x0
#define UVD_DPG_WBC_WB_CNTW__WB_BWKSZ__SHIFT                                                                  0x8
#define UVD_DPG_WBC_WB_CNTW__WB_NO_FETCH__SHIFT                                                               0x10
#define UVD_DPG_WBC_WB_CNTW__WB_WPTW_POWW_EN__SHIFT                                                           0x14
#define UVD_DPG_WBC_WB_CNTW__WB_NO_UPDATE__SHIFT                                                              0x18
#define UVD_DPG_WBC_WB_CNTW__WB_WPTW_WW_EN__SHIFT                                                             0x1c
#define UVD_DPG_WBC_WB_CNTW__WB_BUFSZ_MASK                                                                    0x0000001FW
#define UVD_DPG_WBC_WB_CNTW__WB_BWKSZ_MASK                                                                    0x00001F00W
#define UVD_DPG_WBC_WB_CNTW__WB_NO_FETCH_MASK                                                                 0x00010000W
#define UVD_DPG_WBC_WB_CNTW__WB_WPTW_POWW_EN_MASK                                                             0x00100000W
#define UVD_DPG_WBC_WB_CNTW__WB_NO_UPDATE_MASK                                                                0x01000000W
#define UVD_DPG_WBC_WB_CNTW__WB_WPTW_WW_EN_MASK                                                               0x10000000W
//UVD_DPG_WBC_WB_BASE_WOW
#define UVD_DPG_WBC_WB_BASE_WOW__WB_BASE_WOW__SHIFT                                                           0x0
#define UVD_DPG_WBC_WB_BASE_WOW__WB_BASE_WOW_MASK                                                             0xFFFFFFFFW
//UVD_DPG_WBC_WB_BASE_HIGH
#define UVD_DPG_WBC_WB_BASE_HIGH__WB_BASE_HIGH__SHIFT                                                         0x0
#define UVD_DPG_WBC_WB_BASE_HIGH__WB_BASE_HIGH_MASK                                                           0xFFFFFFFFW
//UVD_DPG_WBC_WB_WPTW_CNTW
#define UVD_DPG_WBC_WB_WPTW_CNTW__WB_PWE_WWITE_TIMEW__SHIFT                                                   0x0
#define UVD_DPG_WBC_WB_WPTW_CNTW__WB_PWE_WWITE_TIMEW_MASK                                                     0x00007FFFW
//UVD_DPG_WBC_WB_WPTW
#define UVD_DPG_WBC_WB_WPTW__WB_WPTW__SHIFT                                                                   0x4
#define UVD_DPG_WBC_WB_WPTW__WB_WPTW_MASK                                                                     0x007FFFF0W
//UVD_DPG_WBC_WB_WPTW
#define UVD_DPG_WBC_WB_WPTW__WB_WPTW__SHIFT                                                                   0x4
#define UVD_DPG_WBC_WB_WPTW__WB_WPTW_MASK                                                                     0x007FFFF0W
//UVD_DPG_WMI_VCPU_CACHE_64BIT_BAW_WOW
#define UVD_DPG_WMI_VCPU_CACHE_64BIT_BAW_WOW__BITS_31_0__SHIFT                                                0x0
#define UVD_DPG_WMI_VCPU_CACHE_64BIT_BAW_WOW__BITS_31_0_MASK                                                  0xFFFFFFFFW
//UVD_DPG_WMI_VCPU_CACHE_64BIT_BAW_HIGH
#define UVD_DPG_WMI_VCPU_CACHE_64BIT_BAW_HIGH__BITS_63_32__SHIFT                                              0x0
#define UVD_DPG_WMI_VCPU_CACHE_64BIT_BAW_HIGH__BITS_63_32_MASK                                                0xFFFFFFFFW
//UVD_DPG_VCPU_CACHE_OFFSET0
#define UVD_DPG_VCPU_CACHE_OFFSET0__CACHE_OFFSET0__SHIFT                                                      0x0
#define UVD_DPG_VCPU_CACHE_OFFSET0__CACHE_OFFSET0_MASK                                                        0x01FFFFFFW


// addwessBwock: uvd0_uvdnpdec
//UVD_JPEG_ADDW_CONFIG
#define UVD_JPEG_ADDW_CONFIG__NUM_PIPES__SHIFT                                                                0x0
#define UVD_JPEG_ADDW_CONFIG__PIPE_INTEWWEAVE_SIZE__SHIFT                                                     0x3
#define UVD_JPEG_ADDW_CONFIG__MAX_COMPWESSED_FWAGS__SHIFT                                                     0x6
#define UVD_JPEG_ADDW_CONFIG__BANK_INTEWWEAVE_SIZE__SHIFT                                                     0x8
#define UVD_JPEG_ADDW_CONFIG__NUM_BANKS__SHIFT                                                                0xc
#define UVD_JPEG_ADDW_CONFIG__SHADEW_ENGINE_TIWE_SIZE__SHIFT                                                  0x10
#define UVD_JPEG_ADDW_CONFIG__NUM_SHADEW_ENGINES__SHIFT                                                       0x13
#define UVD_JPEG_ADDW_CONFIG__NUM_GPUS__SHIFT                                                                 0x15
#define UVD_JPEG_ADDW_CONFIG__MUWTI_GPU_TIWE_SIZE__SHIFT                                                      0x18
#define UVD_JPEG_ADDW_CONFIG__NUM_WB_PEW_SE__SHIFT                                                            0x1a
#define UVD_JPEG_ADDW_CONFIG__WOW_SIZE__SHIFT                                                                 0x1c
#define UVD_JPEG_ADDW_CONFIG__NUM_WOWEW_PIPES__SHIFT                                                          0x1e
#define UVD_JPEG_ADDW_CONFIG__SE_ENABWE__SHIFT                                                                0x1f
#define UVD_JPEG_ADDW_CONFIG__NUM_PIPES_MASK                                                                  0x00000007W
#define UVD_JPEG_ADDW_CONFIG__PIPE_INTEWWEAVE_SIZE_MASK                                                       0x00000038W
#define UVD_JPEG_ADDW_CONFIG__MAX_COMPWESSED_FWAGS_MASK                                                       0x000000C0W
#define UVD_JPEG_ADDW_CONFIG__BANK_INTEWWEAVE_SIZE_MASK                                                       0x00000700W
#define UVD_JPEG_ADDW_CONFIG__NUM_BANKS_MASK                                                                  0x00007000W
#define UVD_JPEG_ADDW_CONFIG__SHADEW_ENGINE_TIWE_SIZE_MASK                                                    0x00070000W
#define UVD_JPEG_ADDW_CONFIG__NUM_SHADEW_ENGINES_MASK                                                         0x00180000W
#define UVD_JPEG_ADDW_CONFIG__NUM_GPUS_MASK                                                                   0x00E00000W
#define UVD_JPEG_ADDW_CONFIG__MUWTI_GPU_TIWE_SIZE_MASK                                                        0x03000000W
#define UVD_JPEG_ADDW_CONFIG__NUM_WB_PEW_SE_MASK                                                              0x0C000000W
#define UVD_JPEG_ADDW_CONFIG__WOW_SIZE_MASK                                                                   0x30000000W
#define UVD_JPEG_ADDW_CONFIG__NUM_WOWEW_PIPES_MASK                                                            0x40000000W
#define UVD_JPEG_ADDW_CONFIG__SE_ENABWE_MASK                                                                  0x80000000W
//UVD_GPCOM_VCPU_CMD
#define UVD_GPCOM_VCPU_CMD__CMD_SEND__SHIFT                                                                   0x0
#define UVD_GPCOM_VCPU_CMD__CMD__SHIFT                                                                        0x1
#define UVD_GPCOM_VCPU_CMD__CMD_SOUWCE__SHIFT                                                                 0x1f
#define UVD_GPCOM_VCPU_CMD__CMD_SEND_MASK                                                                     0x00000001W
#define UVD_GPCOM_VCPU_CMD__CMD_MASK                                                                          0x7FFFFFFEW
#define UVD_GPCOM_VCPU_CMD__CMD_SOUWCE_MASK                                                                   0x80000000W
//UVD_GPCOM_VCPU_DATA0
#define UVD_GPCOM_VCPU_DATA0__DATA0__SHIFT                                                                    0x0
#define UVD_GPCOM_VCPU_DATA0__DATA0_MASK                                                                      0xFFFFFFFFW
//UVD_GPCOM_VCPU_DATA1
#define UVD_GPCOM_VCPU_DATA1__DATA1__SHIFT                                                                    0x0
#define UVD_GPCOM_VCPU_DATA1__DATA1_MASK                                                                      0xFFFFFFFFW
//UVD_UDEC_ADDW_CONFIG
#define UVD_UDEC_ADDW_CONFIG__NUM_PIPES__SHIFT                                                                0x0
#define UVD_UDEC_ADDW_CONFIG__PIPE_INTEWWEAVE_SIZE__SHIFT                                                     0x3
#define UVD_UDEC_ADDW_CONFIG__MAX_COMPWESSED_FWAGS__SHIFT                                                     0x6
#define UVD_UDEC_ADDW_CONFIG__BANK_INTEWWEAVE_SIZE__SHIFT                                                     0x8
#define UVD_UDEC_ADDW_CONFIG__NUM_BANKS__SHIFT                                                                0xc
#define UVD_UDEC_ADDW_CONFIG__SHADEW_ENGINE_TIWE_SIZE__SHIFT                                                  0x10
#define UVD_UDEC_ADDW_CONFIG__NUM_SHADEW_ENGINES__SHIFT                                                       0x13
#define UVD_UDEC_ADDW_CONFIG__NUM_GPUS__SHIFT                                                                 0x15
#define UVD_UDEC_ADDW_CONFIG__MUWTI_GPU_TIWE_SIZE__SHIFT                                                      0x18
#define UVD_UDEC_ADDW_CONFIG__NUM_WB_PEW_SE__SHIFT                                                            0x1a
#define UVD_UDEC_ADDW_CONFIG__WOW_SIZE__SHIFT                                                                 0x1c
#define UVD_UDEC_ADDW_CONFIG__NUM_WOWEW_PIPES__SHIFT                                                          0x1e
#define UVD_UDEC_ADDW_CONFIG__SE_ENABWE__SHIFT                                                                0x1f
#define UVD_UDEC_ADDW_CONFIG__NUM_PIPES_MASK                                                                  0x00000007W
#define UVD_UDEC_ADDW_CONFIG__PIPE_INTEWWEAVE_SIZE_MASK                                                       0x00000038W
#define UVD_UDEC_ADDW_CONFIG__MAX_COMPWESSED_FWAGS_MASK                                                       0x000000C0W
#define UVD_UDEC_ADDW_CONFIG__BANK_INTEWWEAVE_SIZE_MASK                                                       0x00000700W
#define UVD_UDEC_ADDW_CONFIG__NUM_BANKS_MASK                                                                  0x00007000W
#define UVD_UDEC_ADDW_CONFIG__SHADEW_ENGINE_TIWE_SIZE_MASK                                                    0x00070000W
#define UVD_UDEC_ADDW_CONFIG__NUM_SHADEW_ENGINES_MASK                                                         0x00180000W
#define UVD_UDEC_ADDW_CONFIG__NUM_GPUS_MASK                                                                   0x00E00000W
#define UVD_UDEC_ADDW_CONFIG__MUWTI_GPU_TIWE_SIZE_MASK                                                        0x03000000W
#define UVD_UDEC_ADDW_CONFIG__NUM_WB_PEW_SE_MASK                                                              0x0C000000W
#define UVD_UDEC_ADDW_CONFIG__WOW_SIZE_MASK                                                                   0x30000000W
#define UVD_UDEC_ADDW_CONFIG__NUM_WOWEW_PIPES_MASK                                                            0x40000000W
#define UVD_UDEC_ADDW_CONFIG__SE_ENABWE_MASK                                                                  0x80000000W
//UVD_UDEC_DB_ADDW_CONFIG
#define UVD_UDEC_DB_ADDW_CONFIG__NUM_PIPES__SHIFT                                                             0x0
#define UVD_UDEC_DB_ADDW_CONFIG__PIPE_INTEWWEAVE_SIZE__SHIFT                                                  0x3
#define UVD_UDEC_DB_ADDW_CONFIG__MAX_COMPWESSED_FWAGS__SHIFT                                                  0x6
#define UVD_UDEC_DB_ADDW_CONFIG__BANK_INTEWWEAVE_SIZE__SHIFT                                                  0x8
#define UVD_UDEC_DB_ADDW_CONFIG__NUM_BANKS__SHIFT                                                             0xc
#define UVD_UDEC_DB_ADDW_CONFIG__SHADEW_ENGINE_TIWE_SIZE__SHIFT                                               0x10
#define UVD_UDEC_DB_ADDW_CONFIG__NUM_SHADEW_ENGINES__SHIFT                                                    0x13
#define UVD_UDEC_DB_ADDW_CONFIG__NUM_GPUS__SHIFT                                                              0x15
#define UVD_UDEC_DB_ADDW_CONFIG__MUWTI_GPU_TIWE_SIZE__SHIFT                                                   0x18
#define UVD_UDEC_DB_ADDW_CONFIG__NUM_WB_PEW_SE__SHIFT                                                         0x1a
#define UVD_UDEC_DB_ADDW_CONFIG__WOW_SIZE__SHIFT                                                              0x1c
#define UVD_UDEC_DB_ADDW_CONFIG__NUM_WOWEW_PIPES__SHIFT                                                       0x1e
#define UVD_UDEC_DB_ADDW_CONFIG__SE_ENABWE__SHIFT                                                             0x1f
#define UVD_UDEC_DB_ADDW_CONFIG__NUM_PIPES_MASK                                                               0x00000007W
#define UVD_UDEC_DB_ADDW_CONFIG__PIPE_INTEWWEAVE_SIZE_MASK                                                    0x00000038W
#define UVD_UDEC_DB_ADDW_CONFIG__MAX_COMPWESSED_FWAGS_MASK                                                    0x000000C0W
#define UVD_UDEC_DB_ADDW_CONFIG__BANK_INTEWWEAVE_SIZE_MASK                                                    0x00000700W
#define UVD_UDEC_DB_ADDW_CONFIG__NUM_BANKS_MASK                                                               0x00007000W
#define UVD_UDEC_DB_ADDW_CONFIG__SHADEW_ENGINE_TIWE_SIZE_MASK                                                 0x00070000W
#define UVD_UDEC_DB_ADDW_CONFIG__NUM_SHADEW_ENGINES_MASK                                                      0x00180000W
#define UVD_UDEC_DB_ADDW_CONFIG__NUM_GPUS_MASK                                                                0x00E00000W
#define UVD_UDEC_DB_ADDW_CONFIG__MUWTI_GPU_TIWE_SIZE_MASK                                                     0x03000000W
#define UVD_UDEC_DB_ADDW_CONFIG__NUM_WB_PEW_SE_MASK                                                           0x0C000000W
#define UVD_UDEC_DB_ADDW_CONFIG__WOW_SIZE_MASK                                                                0x30000000W
#define UVD_UDEC_DB_ADDW_CONFIG__NUM_WOWEW_PIPES_MASK                                                         0x40000000W
#define UVD_UDEC_DB_ADDW_CONFIG__SE_ENABWE_MASK                                                               0x80000000W
//UVD_UDEC_DBW_ADDW_CONFIG
#define UVD_UDEC_DBW_ADDW_CONFIG__NUM_PIPES__SHIFT                                                            0x0
#define UVD_UDEC_DBW_ADDW_CONFIG__PIPE_INTEWWEAVE_SIZE__SHIFT                                                 0x3
#define UVD_UDEC_DBW_ADDW_CONFIG__MAX_COMPWESSED_FWAGS__SHIFT                                                 0x6
#define UVD_UDEC_DBW_ADDW_CONFIG__BANK_INTEWWEAVE_SIZE__SHIFT                                                 0x8
#define UVD_UDEC_DBW_ADDW_CONFIG__NUM_BANKS__SHIFT                                                            0xc
#define UVD_UDEC_DBW_ADDW_CONFIG__SHADEW_ENGINE_TIWE_SIZE__SHIFT                                              0x10
#define UVD_UDEC_DBW_ADDW_CONFIG__NUM_SHADEW_ENGINES__SHIFT                                                   0x13
#define UVD_UDEC_DBW_ADDW_CONFIG__NUM_GPUS__SHIFT                                                             0x15
#define UVD_UDEC_DBW_ADDW_CONFIG__MUWTI_GPU_TIWE_SIZE__SHIFT                                                  0x18
#define UVD_UDEC_DBW_ADDW_CONFIG__NUM_WB_PEW_SE__SHIFT                                                        0x1a
#define UVD_UDEC_DBW_ADDW_CONFIG__WOW_SIZE__SHIFT                                                             0x1c
#define UVD_UDEC_DBW_ADDW_CONFIG__NUM_WOWEW_PIPES__SHIFT                                                      0x1e
#define UVD_UDEC_DBW_ADDW_CONFIG__SE_ENABWE__SHIFT                                                            0x1f
#define UVD_UDEC_DBW_ADDW_CONFIG__NUM_PIPES_MASK                                                              0x00000007W
#define UVD_UDEC_DBW_ADDW_CONFIG__PIPE_INTEWWEAVE_SIZE_MASK                                                   0x00000038W
#define UVD_UDEC_DBW_ADDW_CONFIG__MAX_COMPWESSED_FWAGS_MASK                                                   0x000000C0W
#define UVD_UDEC_DBW_ADDW_CONFIG__BANK_INTEWWEAVE_SIZE_MASK                                                   0x00000700W
#define UVD_UDEC_DBW_ADDW_CONFIG__NUM_BANKS_MASK                                                              0x00007000W
#define UVD_UDEC_DBW_ADDW_CONFIG__SHADEW_ENGINE_TIWE_SIZE_MASK                                                0x00070000W
#define UVD_UDEC_DBW_ADDW_CONFIG__NUM_SHADEW_ENGINES_MASK                                                     0x00180000W
#define UVD_UDEC_DBW_ADDW_CONFIG__NUM_GPUS_MASK                                                               0x00E00000W
#define UVD_UDEC_DBW_ADDW_CONFIG__MUWTI_GPU_TIWE_SIZE_MASK                                                    0x03000000W
#define UVD_UDEC_DBW_ADDW_CONFIG__NUM_WB_PEW_SE_MASK                                                          0x0C000000W
#define UVD_UDEC_DBW_ADDW_CONFIG__WOW_SIZE_MASK                                                               0x30000000W
#define UVD_UDEC_DBW_ADDW_CONFIG__NUM_WOWEW_PIPES_MASK                                                        0x40000000W
#define UVD_UDEC_DBW_ADDW_CONFIG__SE_ENABWE_MASK                                                              0x80000000W
//UVD_SUVD_CGC_GATE
#define UVD_SUVD_CGC_GATE__SWE__SHIFT                                                                         0x0
#define UVD_SUVD_CGC_GATE__SIT__SHIFT                                                                         0x1
#define UVD_SUVD_CGC_GATE__SMP__SHIFT                                                                         0x2
#define UVD_SUVD_CGC_GATE__SCM__SHIFT                                                                         0x3
#define UVD_SUVD_CGC_GATE__SDB__SHIFT                                                                         0x4
#define UVD_SUVD_CGC_GATE__SWE_H264__SHIFT                                                                    0x5
#define UVD_SUVD_CGC_GATE__SWE_HEVC__SHIFT                                                                    0x6
#define UVD_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                    0x7
#define UVD_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                    0x8
#define UVD_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                    0x9
#define UVD_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                    0xa
#define UVD_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                    0xb
#define UVD_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                    0xc
#define UVD_SUVD_CGC_GATE__SCWW__SHIFT                                                                        0xd
#define UVD_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                      0xe
#define UVD_SUVD_CGC_GATE__ENT__SHIFT                                                                         0xf
#define UVD_SUVD_CGC_GATE__IME__SHIFT                                                                         0x10
#define UVD_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                                0x11
#define UVD_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                                0x12
#define UVD_SUVD_CGC_GATE__SWE_MASK                                                                           0x00000001W
#define UVD_SUVD_CGC_GATE__SIT_MASK                                                                           0x00000002W
#define UVD_SUVD_CGC_GATE__SMP_MASK                                                                           0x00000004W
#define UVD_SUVD_CGC_GATE__SCM_MASK                                                                           0x00000008W
#define UVD_SUVD_CGC_GATE__SDB_MASK                                                                           0x00000010W
#define UVD_SUVD_CGC_GATE__SWE_H264_MASK                                                                      0x00000020W
#define UVD_SUVD_CGC_GATE__SWE_HEVC_MASK                                                                      0x00000040W
#define UVD_SUVD_CGC_GATE__SIT_H264_MASK                                                                      0x00000080W
#define UVD_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                      0x00000100W
#define UVD_SUVD_CGC_GATE__SCM_H264_MASK                                                                      0x00000200W
#define UVD_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                      0x00000400W
#define UVD_SUVD_CGC_GATE__SDB_H264_MASK                                                                      0x00000800W
#define UVD_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                      0x00001000W
#define UVD_SUVD_CGC_GATE__SCWW_MASK                                                                          0x00002000W
#define UVD_SUVD_CGC_GATE__UVD_SC_MASK                                                                        0x00004000W
#define UVD_SUVD_CGC_GATE__ENT_MASK                                                                           0x00008000W
#define UVD_SUVD_CGC_GATE__IME_MASK                                                                           0x00010000W
#define UVD_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                  0x00020000W
#define UVD_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                  0x00040000W
//UVD_SUVD_CGC_CTWW
#define UVD_SUVD_CGC_CTWW__SWE_MODE__SHIFT                                                                    0x0
#define UVD_SUVD_CGC_CTWW__SIT_MODE__SHIFT                                                                    0x1
#define UVD_SUVD_CGC_CTWW__SMP_MODE__SHIFT                                                                    0x2
#define UVD_SUVD_CGC_CTWW__SCM_MODE__SHIFT                                                                    0x3
#define UVD_SUVD_CGC_CTWW__SDB_MODE__SHIFT                                                                    0x4
#define UVD_SUVD_CGC_CTWW__SCWW_MODE__SHIFT                                                                   0x5
#define UVD_SUVD_CGC_CTWW__UVD_SC_MODE__SHIFT                                                                 0x6
#define UVD_SUVD_CGC_CTWW__ENT_MODE__SHIFT                                                                    0x7
#define UVD_SUVD_CGC_CTWW__IME_MODE__SHIFT                                                                    0x8
#define UVD_SUVD_CGC_CTWW__SWE_MODE_MASK                                                                      0x00000001W
#define UVD_SUVD_CGC_CTWW__SIT_MODE_MASK                                                                      0x00000002W
#define UVD_SUVD_CGC_CTWW__SMP_MODE_MASK                                                                      0x00000004W
#define UVD_SUVD_CGC_CTWW__SCM_MODE_MASK                                                                      0x00000008W
#define UVD_SUVD_CGC_CTWW__SDB_MODE_MASK                                                                      0x00000010W
#define UVD_SUVD_CGC_CTWW__SCWW_MODE_MASK                                                                     0x00000020W
#define UVD_SUVD_CGC_CTWW__UVD_SC_MODE_MASK                                                                   0x00000040W
#define UVD_SUVD_CGC_CTWW__ENT_MODE_MASK                                                                      0x00000080W
#define UVD_SUVD_CGC_CTWW__IME_MODE_MASK                                                                      0x00000100W
//UVD_WMI_VCPU_CACHE1_64BIT_BAW_WOW
#define UVD_WMI_VCPU_CACHE1_64BIT_BAW_WOW__BITS_31_0__SHIFT                                                   0x0
#define UVD_WMI_VCPU_CACHE1_64BIT_BAW_WOW__BITS_31_0_MASK                                                     0xFFFFFFFFW
//UVD_WMI_VCPU_CACHE1_64BIT_BAW_HIGH
#define UVD_WMI_VCPU_CACHE1_64BIT_BAW_HIGH__BITS_63_32__SHIFT                                                 0x0
#define UVD_WMI_VCPU_CACHE1_64BIT_BAW_HIGH__BITS_63_32_MASK                                                   0xFFFFFFFFW
//UVD_WMI_VCPU_CACHE2_64BIT_BAW_WOW
#define UVD_WMI_VCPU_CACHE2_64BIT_BAW_WOW__BITS_31_0__SHIFT                                                   0x0
#define UVD_WMI_VCPU_CACHE2_64BIT_BAW_WOW__BITS_31_0_MASK                                                     0xFFFFFFFFW
//UVD_WMI_VCPU_CACHE2_64BIT_BAW_HIGH
#define UVD_WMI_VCPU_CACHE2_64BIT_BAW_HIGH__BITS_63_32__SHIFT                                                 0x0
#define UVD_WMI_VCPU_CACHE2_64BIT_BAW_HIGH__BITS_63_32_MASK                                                   0xFFFFFFFFW
//UVD_POWEW_STATUS_U
#define UVD_POWEW_STATUS_U__UVD_POWEW_STATUS__SHIFT                                                           0x0
#define UVD_POWEW_STATUS_U__UVD_POWEW_STATUS_MASK                                                             0x00000003W
//UVD_NO_OP
#define UVD_NO_OP__NO_OP__SHIFT                                                                               0x0
#define UVD_NO_OP__NO_OP_MASK                                                                                 0xFFFFFFFFW
//UVD_GP_SCWATCH8
#define UVD_GP_SCWATCH8__DATA__SHIFT                                                                          0x0
#define UVD_GP_SCWATCH8__DATA_MASK                                                                            0xFFFFFFFFW
//UVD_WB_BASE_WO2
#define UVD_WB_BASE_WO2__WB_BASE_WO__SHIFT                                                                    0x6
#define UVD_WB_BASE_WO2__WB_BASE_WO_MASK                                                                      0xFFFFFFC0W
//UVD_WB_BASE_HI2
#define UVD_WB_BASE_HI2__WB_BASE_HI__SHIFT                                                                    0x0
#define UVD_WB_BASE_HI2__WB_BASE_HI_MASK                                                                      0xFFFFFFFFW
//UVD_WB_SIZE2
#define UVD_WB_SIZE2__WB_SIZE__SHIFT                                                                          0x4
#define UVD_WB_SIZE2__WB_SIZE_MASK                                                                            0x007FFFF0W
//UVD_WB_WPTW2
#define UVD_WB_WPTW2__WB_WPTW__SHIFT                                                                          0x4
#define UVD_WB_WPTW2__WB_WPTW_MASK                                                                            0x007FFFF0W
//UVD_WB_WPTW2
#define UVD_WB_WPTW2__WB_WPTW__SHIFT                                                                          0x4
#define UVD_WB_WPTW2__WB_WPTW_MASK                                                                            0x007FFFF0W
//UVD_WB_BASE_WO
#define UVD_WB_BASE_WO__WB_BASE_WO__SHIFT                                                                     0x6
#define UVD_WB_BASE_WO__WB_BASE_WO_MASK                                                                       0xFFFFFFC0W
//UVD_WB_BASE_HI
#define UVD_WB_BASE_HI__WB_BASE_HI__SHIFT                                                                     0x0
#define UVD_WB_BASE_HI__WB_BASE_HI_MASK                                                                       0xFFFFFFFFW
//UVD_WB_SIZE
#define UVD_WB_SIZE__WB_SIZE__SHIFT                                                                           0x4
#define UVD_WB_SIZE__WB_SIZE_MASK                                                                             0x007FFFF0W
//UVD_WB_WPTW
#define UVD_WB_WPTW__WB_WPTW__SHIFT                                                                           0x4
#define UVD_WB_WPTW__WB_WPTW_MASK                                                                             0x007FFFF0W
//UVD_WB_WPTW
#define UVD_WB_WPTW__WB_WPTW__SHIFT                                                                           0x4
#define UVD_WB_WPTW__WB_WPTW_MASK                                                                             0x007FFFF0W
//UVD_JWBC_WB_WPTW
#define UVD_JWBC_WB_WPTW__WB_WPTW__SHIFT                                                                      0x4
#define UVD_JWBC_WB_WPTW__WB_WPTW_MASK                                                                        0x007FFFF0W
//UVD_WMI_VCPU_CACHE_64BIT_BAW_HIGH
#define UVD_WMI_VCPU_CACHE_64BIT_BAW_HIGH__BITS_63_32__SHIFT                                                  0x0
#define UVD_WMI_VCPU_CACHE_64BIT_BAW_HIGH__BITS_63_32_MASK                                                    0xFFFFFFFFW
//UVD_WMI_VCPU_CACHE_64BIT_BAW_WOW
#define UVD_WMI_VCPU_CACHE_64BIT_BAW_WOW__BITS_31_0__SHIFT                                                    0x0
#define UVD_WMI_VCPU_CACHE_64BIT_BAW_WOW__BITS_31_0_MASK                                                      0xFFFFFFFFW
//UVD_WMI_WBC_IB_64BIT_BAW_HIGH
#define UVD_WMI_WBC_IB_64BIT_BAW_HIGH__BITS_63_32__SHIFT                                                      0x0
#define UVD_WMI_WBC_IB_64BIT_BAW_HIGH__BITS_63_32_MASK                                                        0xFFFFFFFFW
//UVD_WMI_WBC_IB_64BIT_BAW_WOW
#define UVD_WMI_WBC_IB_64BIT_BAW_WOW__BITS_31_0__SHIFT                                                        0x0
#define UVD_WMI_WBC_IB_64BIT_BAW_WOW__BITS_31_0_MASK                                                          0xFFFFFFFFW
//UVD_WMI_WBC_WB_64BIT_BAW_HIGH
#define UVD_WMI_WBC_WB_64BIT_BAW_HIGH__BITS_63_32__SHIFT                                                      0x0
#define UVD_WMI_WBC_WB_64BIT_BAW_HIGH__BITS_63_32_MASK                                                        0xFFFFFFFFW
//UVD_WMI_WBC_WB_64BIT_BAW_WOW
#define UVD_WMI_WBC_WB_64BIT_BAW_WOW__BITS_31_0__SHIFT                                                        0x0
#define UVD_WMI_WBC_WB_64BIT_BAW_WOW__BITS_31_0_MASK                                                          0xFFFFFFFFW


// addwessBwock: uvd0_uvddec
//UVD_SEMA_CNTW
#define UVD_SEMA_CNTW__SEMAPHOWE_EN__SHIFT                                                                    0x0
#define UVD_SEMA_CNTW__ADVANCED_MODE_DIS__SHIFT                                                               0x1
#define UVD_SEMA_CNTW__SEMAPHOWE_EN_MASK                                                                      0x00000001W
#define UVD_SEMA_CNTW__ADVANCED_MODE_DIS_MASK                                                                 0x00000002W
//UVD_WMI_JWBC_WB_64BIT_BAW_WOW
#define UVD_WMI_JWBC_WB_64BIT_BAW_WOW__BITS_31_0__SHIFT                                                       0x0
#define UVD_WMI_JWBC_WB_64BIT_BAW_WOW__BITS_31_0_MASK                                                         0xFFFFFFFFW
//UVD_JWBC_WB_WPTW
#define UVD_JWBC_WB_WPTW__WB_WPTW__SHIFT                                                                      0x4
#define UVD_JWBC_WB_WPTW__WB_WPTW_MASK                                                                        0x007FFFF0W
//UVD_WB_WPTW3
#define UVD_WB_WPTW3__WB_WPTW__SHIFT                                                                          0x4
#define UVD_WB_WPTW3__WB_WPTW_MASK                                                                            0x007FFFF0W
//UVD_WB_WPTW3
#define UVD_WB_WPTW3__WB_WPTW__SHIFT                                                                          0x4
#define UVD_WB_WPTW3__WB_WPTW_MASK                                                                            0x007FFFF0W
//UVD_WB_BASE_WO3
#define UVD_WB_BASE_WO3__WB_BASE_WO__SHIFT                                                                    0x6
#define UVD_WB_BASE_WO3__WB_BASE_WO_MASK                                                                      0xFFFFFFC0W
//UVD_WB_BASE_HI3
#define UVD_WB_BASE_HI3__WB_BASE_HI__SHIFT                                                                    0x0
#define UVD_WB_BASE_HI3__WB_BASE_HI_MASK                                                                      0xFFFFFFFFW
//UVD_WB_SIZE3
#define UVD_WB_SIZE3__WB_SIZE__SHIFT                                                                          0x4
#define UVD_WB_SIZE3__WB_SIZE_MASK                                                                            0x007FFFF0W
//JPEG_CGC_GATE
#define JPEG_CGC_GATE__JPEG__SHIFT                                                                            0x14
#define JPEG_CGC_GATE__JPEG2__SHIFT                                                                           0x15
#define JPEG_CGC_GATE__JPEG_MASK                                                                              0x00100000W
#define JPEG_CGC_GATE__JPEG2_MASK                                                                             0x00200000W
//UVD_CTX_INDEX
#define UVD_CTX_INDEX__INDEX__SHIFT                                                                           0x0
#define UVD_CTX_INDEX__INDEX_MASK                                                                             0x000001FFW
//UVD_CTX_DATA
#define UVD_CTX_DATA__DATA__SHIFT                                                                             0x0
#define UVD_CTX_DATA__DATA_MASK                                                                               0xFFFFFFFFW
//UVD_CGC_GATE
#define UVD_CGC_GATE__SYS__SHIFT                                                                              0x0
#define UVD_CGC_GATE__UDEC__SHIFT                                                                             0x1
#define UVD_CGC_GATE__MPEG2__SHIFT                                                                            0x2
#define UVD_CGC_GATE__WEGS__SHIFT                                                                             0x3
#define UVD_CGC_GATE__WBC__SHIFT                                                                              0x4
#define UVD_CGC_GATE__WMI_MC__SHIFT                                                                           0x5
#define UVD_CGC_GATE__WMI_UMC__SHIFT                                                                          0x6
#define UVD_CGC_GATE__IDCT__SHIFT                                                                             0x7
#define UVD_CGC_GATE__MPWD__SHIFT                                                                             0x8
#define UVD_CGC_GATE__MPC__SHIFT                                                                              0x9
#define UVD_CGC_GATE__WBSI__SHIFT                                                                             0xa
#define UVD_CGC_GATE__WWBBM__SHIFT                                                                            0xb
#define UVD_CGC_GATE__UDEC_WE__SHIFT                                                                          0xc
#define UVD_CGC_GATE__UDEC_CM__SHIFT                                                                          0xd
#define UVD_CGC_GATE__UDEC_IT__SHIFT                                                                          0xe
#define UVD_CGC_GATE__UDEC_DB__SHIFT                                                                          0xf
#define UVD_CGC_GATE__UDEC_MP__SHIFT                                                                          0x10
#define UVD_CGC_GATE__WCB__SHIFT                                                                              0x11
#define UVD_CGC_GATE__VCPU__SHIFT                                                                             0x12
#define UVD_CGC_GATE__SCPU__SHIFT                                                                             0x13
#define UVD_CGC_GATE__SYS_MASK                                                                                0x00000001W
#define UVD_CGC_GATE__UDEC_MASK                                                                               0x00000002W
#define UVD_CGC_GATE__MPEG2_MASK                                                                              0x00000004W
#define UVD_CGC_GATE__WEGS_MASK                                                                               0x00000008W
#define UVD_CGC_GATE__WBC_MASK                                                                                0x00000010W
#define UVD_CGC_GATE__WMI_MC_MASK                                                                             0x00000020W
#define UVD_CGC_GATE__WMI_UMC_MASK                                                                            0x00000040W
#define UVD_CGC_GATE__IDCT_MASK                                                                               0x00000080W
#define UVD_CGC_GATE__MPWD_MASK                                                                               0x00000100W
#define UVD_CGC_GATE__MPC_MASK                                                                                0x00000200W
#define UVD_CGC_GATE__WBSI_MASK                                                                               0x00000400W
#define UVD_CGC_GATE__WWBBM_MASK                                                                              0x00000800W
#define UVD_CGC_GATE__UDEC_WE_MASK                                                                            0x00001000W
#define UVD_CGC_GATE__UDEC_CM_MASK                                                                            0x00002000W
#define UVD_CGC_GATE__UDEC_IT_MASK                                                                            0x00004000W
#define UVD_CGC_GATE__UDEC_DB_MASK                                                                            0x00008000W
#define UVD_CGC_GATE__UDEC_MP_MASK                                                                            0x00010000W
#define UVD_CGC_GATE__WCB_MASK                                                                                0x00020000W
#define UVD_CGC_GATE__VCPU_MASK                                                                               0x00040000W
#define UVD_CGC_GATE__SCPU_MASK                                                                               0x00080000W
//UVD_CGC_CTWW
#define UVD_CGC_CTWW__DYN_CWOCK_MODE__SHIFT                                                                   0x0
#define UVD_CGC_CTWW__CWK_GATE_DWY_TIMEW__SHIFT                                                               0x2
#define UVD_CGC_CTWW__CWK_OFF_DEWAY__SHIFT                                                                    0x6
#define UVD_CGC_CTWW__UDEC_WE_MODE__SHIFT                                                                     0xb
#define UVD_CGC_CTWW__UDEC_CM_MODE__SHIFT                                                                     0xc
#define UVD_CGC_CTWW__UDEC_IT_MODE__SHIFT                                                                     0xd
#define UVD_CGC_CTWW__UDEC_DB_MODE__SHIFT                                                                     0xe
#define UVD_CGC_CTWW__UDEC_MP_MODE__SHIFT                                                                     0xf
#define UVD_CGC_CTWW__SYS_MODE__SHIFT                                                                         0x10
#define UVD_CGC_CTWW__UDEC_MODE__SHIFT                                                                        0x11
#define UVD_CGC_CTWW__MPEG2_MODE__SHIFT                                                                       0x12
#define UVD_CGC_CTWW__WEGS_MODE__SHIFT                                                                        0x13
#define UVD_CGC_CTWW__WBC_MODE__SHIFT                                                                         0x14
#define UVD_CGC_CTWW__WMI_MC_MODE__SHIFT                                                                      0x15
#define UVD_CGC_CTWW__WMI_UMC_MODE__SHIFT                                                                     0x16
#define UVD_CGC_CTWW__IDCT_MODE__SHIFT                                                                        0x17
#define UVD_CGC_CTWW__MPWD_MODE__SHIFT                                                                        0x18
#define UVD_CGC_CTWW__MPC_MODE__SHIFT                                                                         0x19
#define UVD_CGC_CTWW__WBSI_MODE__SHIFT                                                                        0x1a
#define UVD_CGC_CTWW__WWBBM_MODE__SHIFT                                                                       0x1b
#define UVD_CGC_CTWW__WCB_MODE__SHIFT                                                                         0x1c
#define UVD_CGC_CTWW__VCPU_MODE__SHIFT                                                                        0x1d
#define UVD_CGC_CTWW__SCPU_MODE__SHIFT                                                                        0x1e
#define UVD_CGC_CTWW__DYN_CWOCK_MODE_MASK                                                                     0x00000001W
#define UVD_CGC_CTWW__CWK_GATE_DWY_TIMEW_MASK                                                                 0x0000003CW
#define UVD_CGC_CTWW__CWK_OFF_DEWAY_MASK                                                                      0x000007C0W
#define UVD_CGC_CTWW__UDEC_WE_MODE_MASK                                                                       0x00000800W
#define UVD_CGC_CTWW__UDEC_CM_MODE_MASK                                                                       0x00001000W
#define UVD_CGC_CTWW__UDEC_IT_MODE_MASK                                                                       0x00002000W
#define UVD_CGC_CTWW__UDEC_DB_MODE_MASK                                                                       0x00004000W
#define UVD_CGC_CTWW__UDEC_MP_MODE_MASK                                                                       0x00008000W
#define UVD_CGC_CTWW__SYS_MODE_MASK                                                                           0x00010000W
#define UVD_CGC_CTWW__UDEC_MODE_MASK                                                                          0x00020000W
#define UVD_CGC_CTWW__MPEG2_MODE_MASK                                                                         0x00040000W
#define UVD_CGC_CTWW__WEGS_MODE_MASK                                                                          0x00080000W
#define UVD_CGC_CTWW__WBC_MODE_MASK                                                                           0x00100000W
#define UVD_CGC_CTWW__WMI_MC_MODE_MASK                                                                        0x00200000W
#define UVD_CGC_CTWW__WMI_UMC_MODE_MASK                                                                       0x00400000W
#define UVD_CGC_CTWW__IDCT_MODE_MASK                                                                          0x00800000W
#define UVD_CGC_CTWW__MPWD_MODE_MASK                                                                          0x01000000W
#define UVD_CGC_CTWW__MPC_MODE_MASK                                                                           0x02000000W
#define UVD_CGC_CTWW__WBSI_MODE_MASK                                                                          0x04000000W
#define UVD_CGC_CTWW__WWBBM_MODE_MASK                                                                         0x08000000W
#define UVD_CGC_CTWW__WCB_MODE_MASK                                                                           0x10000000W
#define UVD_CGC_CTWW__VCPU_MODE_MASK                                                                          0x20000000W
#define UVD_CGC_CTWW__SCPU_MODE_MASK                                                                          0x40000000W
//UVD_GP_SCWATCH4
#define UVD_GP_SCWATCH4__DATA__SHIFT                                                                          0x0
#define UVD_GP_SCWATCH4__DATA_MASK                                                                            0xFFFFFFFFW
//UVD_WMI_CTWW2
#define UVD_WMI_CTWW2__SPH_DIS__SHIFT                                                                         0x0
#define UVD_WMI_CTWW2__STAWW_AWB__SHIFT                                                                       0x1
#define UVD_WMI_CTWW2__ASSEWT_UMC_UWGENT__SHIFT                                                               0x2
#define UVD_WMI_CTWW2__MASK_UMC_UWGENT__SHIFT                                                                 0x3
#define UVD_WMI_CTWW2__DWCITF_BUBBWE_FIX_DIS__SHIFT                                                           0x7
#define UVD_WMI_CTWW2__STAWW_AWB_UMC__SHIFT                                                                   0x8
#define UVD_WMI_CTWW2__MC_WEAD_ID_SEW__SHIFT                                                                  0x9
#define UVD_WMI_CTWW2__MC_WWITE_ID_SEW__SHIFT                                                                 0xb
#define UVD_WMI_CTWW2__SPH_DIS_MASK                                                                           0x00000001W
#define UVD_WMI_CTWW2__STAWW_AWB_MASK                                                                         0x00000002W
#define UVD_WMI_CTWW2__ASSEWT_UMC_UWGENT_MASK                                                                 0x00000004W
#define UVD_WMI_CTWW2__MASK_UMC_UWGENT_MASK                                                                   0x00000008W
#define UVD_WMI_CTWW2__DWCITF_BUBBWE_FIX_DIS_MASK                                                             0x00000080W
#define UVD_WMI_CTWW2__STAWW_AWB_UMC_MASK                                                                     0x00000100W
#define UVD_WMI_CTWW2__MC_WEAD_ID_SEW_MASK                                                                    0x00000600W
#define UVD_WMI_CTWW2__MC_WWITE_ID_SEW_MASK                                                                   0x00001800W
//UVD_MASTINT_EN
#define UVD_MASTINT_EN__OVEWWUN_WST__SHIFT                                                                    0x0
#define UVD_MASTINT_EN__VCPU_EN__SHIFT                                                                        0x1
#define UVD_MASTINT_EN__SYS_EN__SHIFT                                                                         0x2
#define UVD_MASTINT_EN__INT_OVEWWUN__SHIFT                                                                    0x4
#define UVD_MASTINT_EN__OVEWWUN_WST_MASK                                                                      0x00000001W
#define UVD_MASTINT_EN__VCPU_EN_MASK                                                                          0x00000002W
#define UVD_MASTINT_EN__SYS_EN_MASK                                                                           0x00000004W
#define UVD_MASTINT_EN__INT_OVEWWUN_MASK                                                                      0x007FFFF0W
//JPEG_CGC_CTWW
#define JPEG_CGC_CTWW__DYN_CWOCK_MODE__SHIFT                                                                  0x0
#define JPEG_CGC_CTWW__JPEG2_MODE__SHIFT                                                                      0x1
#define JPEG_CGC_CTWW__CWK_GATE_DWY_TIMEW__SHIFT                                                              0x2
#define JPEG_CGC_CTWW__CWK_OFF_DEWAY__SHIFT                                                                   0x6
#define JPEG_CGC_CTWW__JPEG_MODE__SHIFT                                                                       0x1f
#define JPEG_CGC_CTWW__DYN_CWOCK_MODE_MASK                                                                    0x00000001W
#define JPEG_CGC_CTWW__JPEG2_MODE_MASK                                                                        0x00000002W
#define JPEG_CGC_CTWW__CWK_GATE_DWY_TIMEW_MASK                                                                0x0000003CW
#define JPEG_CGC_CTWW__CWK_OFF_DEWAY_MASK                                                                     0x000007C0W
#define JPEG_CGC_CTWW__JPEG_MODE_MASK                                                                         0x80000000W
//UVD_WMI_CTWW
#define UVD_WMI_CTWW__WWITE_CWEAN_TIMEW__SHIFT                                                                0x0
#define UVD_WMI_CTWW__WWITE_CWEAN_TIMEW_EN__SHIFT                                                             0x8
#define UVD_WMI_CTWW__WEQ_MODE__SHIFT                                                                         0x9
#define UVD_WMI_CTWW__ASSEWT_MC_UWGENT__SHIFT                                                                 0xb
#define UVD_WMI_CTWW__MASK_MC_UWGENT__SHIFT                                                                   0xc
#define UVD_WMI_CTWW__DATA_COHEWENCY_EN__SHIFT                                                                0xd
#define UVD_WMI_CTWW__CWC_WESET__SHIFT                                                                        0xe
#define UVD_WMI_CTWW__CWC_SEW__SHIFT                                                                          0xf
#define UVD_WMI_CTWW__VCPU_DATA_COHEWENCY_EN__SHIFT                                                           0x15
#define UVD_WMI_CTWW__CM_DATA_COHEWENCY_EN__SHIFT                                                             0x16
#define UVD_WMI_CTWW__DB_DB_DATA_COHEWENCY_EN__SHIFT                                                          0x17
#define UVD_WMI_CTWW__DB_IT_DATA_COHEWENCY_EN__SHIFT                                                          0x18
#define UVD_WMI_CTWW__IT_IT_DATA_COHEWENCY_EN__SHIFT                                                          0x19
#define UVD_WMI_CTWW__WFU__SHIFT                                                                              0x1b
#define UVD_WMI_CTWW__WWITE_CWEAN_TIMEW_MASK                                                                  0x000000FFW
#define UVD_WMI_CTWW__WWITE_CWEAN_TIMEW_EN_MASK                                                               0x00000100W
#define UVD_WMI_CTWW__WEQ_MODE_MASK                                                                           0x00000200W
#define UVD_WMI_CTWW__ASSEWT_MC_UWGENT_MASK                                                                   0x00000800W
#define UVD_WMI_CTWW__MASK_MC_UWGENT_MASK                                                                     0x00001000W
#define UVD_WMI_CTWW__DATA_COHEWENCY_EN_MASK                                                                  0x00002000W
#define UVD_WMI_CTWW__CWC_WESET_MASK                                                                          0x00004000W
#define UVD_WMI_CTWW__CWC_SEW_MASK                                                                            0x000F8000W
#define UVD_WMI_CTWW__VCPU_DATA_COHEWENCY_EN_MASK                                                             0x00200000W
#define UVD_WMI_CTWW__CM_DATA_COHEWENCY_EN_MASK                                                               0x00400000W
#define UVD_WMI_CTWW__DB_DB_DATA_COHEWENCY_EN_MASK                                                            0x00800000W
#define UVD_WMI_CTWW__DB_IT_DATA_COHEWENCY_EN_MASK                                                            0x01000000W
#define UVD_WMI_CTWW__IT_IT_DATA_COHEWENCY_EN_MASK                                                            0x02000000W
#define UVD_WMI_CTWW__WFU_MASK                                                                                0xF8000000W
//UVD_WMI_SWAP_CNTW
#define UVD_WMI_SWAP_CNTW__WB_MC_SWAP__SHIFT                                                                  0x0
#define UVD_WMI_SWAP_CNTW__IB_MC_SWAP__SHIFT                                                                  0x2
#define UVD_WMI_SWAP_CNTW__WB_WPTW_MC_SWAP__SHIFT                                                             0x4
#define UVD_WMI_SWAP_CNTW__VCPU_W_MC_SWAP__SHIFT                                                              0x6
#define UVD_WMI_SWAP_CNTW__VCPU_W_MC_SWAP__SHIFT                                                              0x8
#define UVD_WMI_SWAP_CNTW__CM_MC_SWAP__SHIFT                                                                  0xa
#define UVD_WMI_SWAP_CNTW__IT_MC_SWAP__SHIFT                                                                  0xc
#define UVD_WMI_SWAP_CNTW__DB_W_MC_SWAP__SHIFT                                                                0xe
#define UVD_WMI_SWAP_CNTW__DB_W_MC_SWAP__SHIFT                                                                0x10
#define UVD_WMI_SWAP_CNTW__CSM_MC_SWAP__SHIFT                                                                 0x12
#define UVD_WMI_SWAP_CNTW__MP_WEF16_MC_SWAP__SHIFT                                                            0x16
#define UVD_WMI_SWAP_CNTW__DBW_MC_SWAP__SHIFT                                                                 0x18
#define UVD_WMI_SWAP_CNTW__WB_WW_MC_SWAP__SHIFT                                                               0x1a
#define UVD_WMI_SWAP_CNTW__WE_MC_SWAP__SHIFT                                                                  0x1c
#define UVD_WMI_SWAP_CNTW__MP_MC_SWAP__SHIFT                                                                  0x1e
#define UVD_WMI_SWAP_CNTW__WB_MC_SWAP_MASK                                                                    0x00000003W
#define UVD_WMI_SWAP_CNTW__IB_MC_SWAP_MASK                                                                    0x0000000CW
#define UVD_WMI_SWAP_CNTW__WB_WPTW_MC_SWAP_MASK                                                               0x00000030W
#define UVD_WMI_SWAP_CNTW__VCPU_W_MC_SWAP_MASK                                                                0x000000C0W
#define UVD_WMI_SWAP_CNTW__VCPU_W_MC_SWAP_MASK                                                                0x00000300W
#define UVD_WMI_SWAP_CNTW__CM_MC_SWAP_MASK                                                                    0x00000C00W
#define UVD_WMI_SWAP_CNTW__IT_MC_SWAP_MASK                                                                    0x00003000W
#define UVD_WMI_SWAP_CNTW__DB_W_MC_SWAP_MASK                                                                  0x0000C000W
#define UVD_WMI_SWAP_CNTW__DB_W_MC_SWAP_MASK                                                                  0x00030000W
#define UVD_WMI_SWAP_CNTW__CSM_MC_SWAP_MASK                                                                   0x000C0000W
#define UVD_WMI_SWAP_CNTW__MP_WEF16_MC_SWAP_MASK                                                              0x00C00000W
#define UVD_WMI_SWAP_CNTW__DBW_MC_SWAP_MASK                                                                   0x03000000W
#define UVD_WMI_SWAP_CNTW__WB_WW_MC_SWAP_MASK                                                                 0x0C000000W
#define UVD_WMI_SWAP_CNTW__WE_MC_SWAP_MASK                                                                    0x30000000W
#define UVD_WMI_SWAP_CNTW__MP_MC_SWAP_MASK                                                                    0xC0000000W
//UVD_MP_SWAP_CNTW
#define UVD_MP_SWAP_CNTW__MP_WEF0_MC_SWAP__SHIFT                                                              0x0
#define UVD_MP_SWAP_CNTW__MP_WEF1_MC_SWAP__SHIFT                                                              0x2
#define UVD_MP_SWAP_CNTW__MP_WEF2_MC_SWAP__SHIFT                                                              0x4
#define UVD_MP_SWAP_CNTW__MP_WEF3_MC_SWAP__SHIFT                                                              0x6
#define UVD_MP_SWAP_CNTW__MP_WEF4_MC_SWAP__SHIFT                                                              0x8
#define UVD_MP_SWAP_CNTW__MP_WEF5_MC_SWAP__SHIFT                                                              0xa
#define UVD_MP_SWAP_CNTW__MP_WEF6_MC_SWAP__SHIFT                                                              0xc
#define UVD_MP_SWAP_CNTW__MP_WEF7_MC_SWAP__SHIFT                                                              0xe
#define UVD_MP_SWAP_CNTW__MP_WEF8_MC_SWAP__SHIFT                                                              0x10
#define UVD_MP_SWAP_CNTW__MP_WEF9_MC_SWAP__SHIFT                                                              0x12
#define UVD_MP_SWAP_CNTW__MP_WEF10_MC_SWAP__SHIFT                                                             0x14
#define UVD_MP_SWAP_CNTW__MP_WEF11_MC_SWAP__SHIFT                                                             0x16
#define UVD_MP_SWAP_CNTW__MP_WEF12_MC_SWAP__SHIFT                                                             0x18
#define UVD_MP_SWAP_CNTW__MP_WEF13_MC_SWAP__SHIFT                                                             0x1a
#define UVD_MP_SWAP_CNTW__MP_WEF14_MC_SWAP__SHIFT                                                             0x1c
#define UVD_MP_SWAP_CNTW__MP_WEF15_MC_SWAP__SHIFT                                                             0x1e
#define UVD_MP_SWAP_CNTW__MP_WEF0_MC_SWAP_MASK                                                                0x00000003W
#define UVD_MP_SWAP_CNTW__MP_WEF1_MC_SWAP_MASK                                                                0x0000000CW
#define UVD_MP_SWAP_CNTW__MP_WEF2_MC_SWAP_MASK                                                                0x00000030W
#define UVD_MP_SWAP_CNTW__MP_WEF3_MC_SWAP_MASK                                                                0x000000C0W
#define UVD_MP_SWAP_CNTW__MP_WEF4_MC_SWAP_MASK                                                                0x00000300W
#define UVD_MP_SWAP_CNTW__MP_WEF5_MC_SWAP_MASK                                                                0x00000C00W
#define UVD_MP_SWAP_CNTW__MP_WEF6_MC_SWAP_MASK                                                                0x00003000W
#define UVD_MP_SWAP_CNTW__MP_WEF7_MC_SWAP_MASK                                                                0x0000C000W
#define UVD_MP_SWAP_CNTW__MP_WEF8_MC_SWAP_MASK                                                                0x00030000W
#define UVD_MP_SWAP_CNTW__MP_WEF9_MC_SWAP_MASK                                                                0x000C0000W
#define UVD_MP_SWAP_CNTW__MP_WEF10_MC_SWAP_MASK                                                               0x00300000W
#define UVD_MP_SWAP_CNTW__MP_WEF11_MC_SWAP_MASK                                                               0x00C00000W
#define UVD_MP_SWAP_CNTW__MP_WEF12_MC_SWAP_MASK                                                               0x03000000W
#define UVD_MP_SWAP_CNTW__MP_WEF13_MC_SWAP_MASK                                                               0x0C000000W
#define UVD_MP_SWAP_CNTW__MP_WEF14_MC_SWAP_MASK                                                               0x30000000W
#define UVD_MP_SWAP_CNTW__MP_WEF15_MC_SWAP_MASK                                                               0xC0000000W
//UVD_MPC_SET_MUXA0
#define UVD_MPC_SET_MUXA0__VAWA_0__SHIFT                                                                      0x0
#define UVD_MPC_SET_MUXA0__VAWA_1__SHIFT                                                                      0x6
#define UVD_MPC_SET_MUXA0__VAWA_2__SHIFT                                                                      0xc
#define UVD_MPC_SET_MUXA0__VAWA_3__SHIFT                                                                      0x12
#define UVD_MPC_SET_MUXA0__VAWA_4__SHIFT                                                                      0x18
#define UVD_MPC_SET_MUXA0__VAWA_0_MASK                                                                        0x0000003FW
#define UVD_MPC_SET_MUXA0__VAWA_1_MASK                                                                        0x00000FC0W
#define UVD_MPC_SET_MUXA0__VAWA_2_MASK                                                                        0x0003F000W
#define UVD_MPC_SET_MUXA0__VAWA_3_MASK                                                                        0x00FC0000W
#define UVD_MPC_SET_MUXA0__VAWA_4_MASK                                                                        0x3F000000W
//UVD_MPC_SET_MUXA1
#define UVD_MPC_SET_MUXA1__VAWA_5__SHIFT                                                                      0x0
#define UVD_MPC_SET_MUXA1__VAWA_6__SHIFT                                                                      0x6
#define UVD_MPC_SET_MUXA1__VAWA_7__SHIFT                                                                      0xc
#define UVD_MPC_SET_MUXA1__VAWA_5_MASK                                                                        0x0000003FW
#define UVD_MPC_SET_MUXA1__VAWA_6_MASK                                                                        0x00000FC0W
#define UVD_MPC_SET_MUXA1__VAWA_7_MASK                                                                        0x0003F000W
//UVD_MPC_SET_MUXB0
#define UVD_MPC_SET_MUXB0__VAWB_0__SHIFT                                                                      0x0
#define UVD_MPC_SET_MUXB0__VAWB_1__SHIFT                                                                      0x6
#define UVD_MPC_SET_MUXB0__VAWB_2__SHIFT                                                                      0xc
#define UVD_MPC_SET_MUXB0__VAWB_3__SHIFT                                                                      0x12
#define UVD_MPC_SET_MUXB0__VAWB_4__SHIFT                                                                      0x18
#define UVD_MPC_SET_MUXB0__VAWB_0_MASK                                                                        0x0000003FW
#define UVD_MPC_SET_MUXB0__VAWB_1_MASK                                                                        0x00000FC0W
#define UVD_MPC_SET_MUXB0__VAWB_2_MASK                                                                        0x0003F000W
#define UVD_MPC_SET_MUXB0__VAWB_3_MASK                                                                        0x00FC0000W
#define UVD_MPC_SET_MUXB0__VAWB_4_MASK                                                                        0x3F000000W
//UVD_MPC_SET_MUXB1
#define UVD_MPC_SET_MUXB1__VAWB_5__SHIFT                                                                      0x0
#define UVD_MPC_SET_MUXB1__VAWB_6__SHIFT                                                                      0x6
#define UVD_MPC_SET_MUXB1__VAWB_7__SHIFT                                                                      0xc
#define UVD_MPC_SET_MUXB1__VAWB_5_MASK                                                                        0x0000003FW
#define UVD_MPC_SET_MUXB1__VAWB_6_MASK                                                                        0x00000FC0W
#define UVD_MPC_SET_MUXB1__VAWB_7_MASK                                                                        0x0003F000W
//UVD_MPC_SET_MUX
#define UVD_MPC_SET_MUX__SET_0__SHIFT                                                                         0x0
#define UVD_MPC_SET_MUX__SET_1__SHIFT                                                                         0x3
#define UVD_MPC_SET_MUX__SET_2__SHIFT                                                                         0x6
#define UVD_MPC_SET_MUX__SET_0_MASK                                                                           0x00000007W
#define UVD_MPC_SET_MUX__SET_1_MASK                                                                           0x00000038W
#define UVD_MPC_SET_MUX__SET_2_MASK                                                                           0x000001C0W
//UVD_MPC_SET_AWU
#define UVD_MPC_SET_AWU__FUNCT__SHIFT                                                                         0x0
#define UVD_MPC_SET_AWU__OPEWAND__SHIFT                                                                       0x4
#define UVD_MPC_SET_AWU__FUNCT_MASK                                                                           0x00000007W
#define UVD_MPC_SET_AWU__OPEWAND_MASK                                                                         0x00000FF0W
//UVD_VCPU_CACHE_OFFSET0
#define UVD_VCPU_CACHE_OFFSET0__CACHE_OFFSET0__SHIFT                                                          0x0
#define UVD_VCPU_CACHE_OFFSET0__CACHE_OFFSET0_MASK                                                            0x01FFFFFFW
//UVD_VCPU_CACHE_SIZE0
#define UVD_VCPU_CACHE_SIZE0__CACHE_SIZE0__SHIFT                                                              0x0
#define UVD_VCPU_CACHE_SIZE0__CACHE_SIZE0_MASK                                                                0x001FFFFFW
//UVD_VCPU_CACHE_OFFSET1
#define UVD_VCPU_CACHE_OFFSET1__CACHE_OFFSET1__SHIFT                                                          0x0
#define UVD_VCPU_CACHE_OFFSET1__CACHE_OFFSET1_MASK                                                            0x01FFFFFFW
//UVD_VCPU_CACHE_SIZE1
#define UVD_VCPU_CACHE_SIZE1__CACHE_SIZE1__SHIFT                                                              0x0
#define UVD_VCPU_CACHE_SIZE1__CACHE_SIZE1_MASK                                                                0x001FFFFFW
//UVD_VCPU_CACHE_OFFSET2
#define UVD_VCPU_CACHE_OFFSET2__CACHE_OFFSET2__SHIFT                                                          0x0
#define UVD_VCPU_CACHE_OFFSET2__CACHE_OFFSET2_MASK                                                            0x01FFFFFFW
//UVD_VCPU_CACHE_SIZE2
#define UVD_VCPU_CACHE_SIZE2__CACHE_SIZE2__SHIFT                                                              0x0
#define UVD_VCPU_CACHE_SIZE2__CACHE_SIZE2_MASK                                                                0x001FFFFFW
//UVD_VCPU_CNTW
#define UVD_VCPU_CNTW__CWK_EN__SHIFT                                                                          0x9
#define UVD_VCPU_CNTW__CWK_EN_MASK                                                                            0x00000200W
//UVD_SOFT_WESET
#define UVD_SOFT_WESET__WBC_SOFT_WESET__SHIFT                                                                 0x0
#define UVD_SOFT_WESET__WBSI_SOFT_WESET__SHIFT                                                                0x1
#define UVD_SOFT_WESET__WMI_SOFT_WESET__SHIFT                                                                 0x2
#define UVD_SOFT_WESET__VCPU_SOFT_WESET__SHIFT                                                                0x3
#define UVD_SOFT_WESET__UDEC_SOFT_WESET__SHIFT                                                                0x4
#define UVD_SOFT_WESET__CSM_SOFT_WESET__SHIFT                                                                 0x5
#define UVD_SOFT_WESET__CXW_SOFT_WESET__SHIFT                                                                 0x6
#define UVD_SOFT_WESET__TAP_SOFT_WESET__SHIFT                                                                 0x7
#define UVD_SOFT_WESET__MPC_SOFT_WESET__SHIFT                                                                 0x8
#define UVD_SOFT_WESET__IH_SOFT_WESET__SHIFT                                                                  0xa
#define UVD_SOFT_WESET__WMI_UMC_SOFT_WESET__SHIFT                                                             0xd
#define UVD_SOFT_WESET__SPH_SOFT_WESET__SHIFT                                                                 0xe
#define UVD_SOFT_WESET__MIF_SOFT_WESET__SHIFT                                                                 0xf
#define UVD_SOFT_WESET__WCM_SOFT_WESET__SHIFT                                                                 0x10
#define UVD_SOFT_WESET__SUVD_SOFT_WESET__SHIFT                                                                0x11
#define UVD_SOFT_WESET__WBSI_VCWK_WESET_STATUS__SHIFT                                                         0x12
#define UVD_SOFT_WESET__VCPU_VCWK_WESET_STATUS__SHIFT                                                         0x13
#define UVD_SOFT_WESET__UDEC_VCWK_WESET_STATUS__SHIFT                                                         0x14
#define UVD_SOFT_WESET__UDEC_DCWK_WESET_STATUS__SHIFT                                                         0x15
#define UVD_SOFT_WESET__MPC_DCWK_WESET_STATUS__SHIFT                                                          0x16
#define UVD_SOFT_WESET__MIF_DCWK_WESET_STATUS__SHIFT                                                          0x1a
#define UVD_SOFT_WESET__WCM_DCWK_WESET_STATUS__SHIFT                                                          0x1b
#define UVD_SOFT_WESET__SUVD_VCWK_WESET_STATUS__SHIFT                                                         0x1c
#define UVD_SOFT_WESET__SUVD_DCWK_WESET_STATUS__SHIFT                                                         0x1d
#define UVD_SOFT_WESET__WE_DCWK_WESET_STATUS__SHIFT                                                           0x1e
#define UVD_SOFT_WESET__SWE_DCWK_WESET_STATUS__SHIFT                                                          0x1f
#define UVD_SOFT_WESET__WBC_SOFT_WESET_MASK                                                                   0x00000001W
#define UVD_SOFT_WESET__WBSI_SOFT_WESET_MASK                                                                  0x00000002W
#define UVD_SOFT_WESET__WMI_SOFT_WESET_MASK                                                                   0x00000004W
#define UVD_SOFT_WESET__VCPU_SOFT_WESET_MASK                                                                  0x00000008W
#define UVD_SOFT_WESET__UDEC_SOFT_WESET_MASK                                                                  0x00000010W
#define UVD_SOFT_WESET__CSM_SOFT_WESET_MASK                                                                   0x00000020W
#define UVD_SOFT_WESET__CXW_SOFT_WESET_MASK                                                                   0x00000040W
#define UVD_SOFT_WESET__TAP_SOFT_WESET_MASK                                                                   0x00000080W
#define UVD_SOFT_WESET__MPC_SOFT_WESET_MASK                                                                   0x00000100W
#define UVD_SOFT_WESET__IH_SOFT_WESET_MASK                                                                    0x00000400W
#define UVD_SOFT_WESET__WMI_UMC_SOFT_WESET_MASK                                                               0x00002000W
#define UVD_SOFT_WESET__SPH_SOFT_WESET_MASK                                                                   0x00004000W
#define UVD_SOFT_WESET__MIF_SOFT_WESET_MASK                                                                   0x00008000W
#define UVD_SOFT_WESET__WCM_SOFT_WESET_MASK                                                                   0x00010000W
#define UVD_SOFT_WESET__SUVD_SOFT_WESET_MASK                                                                  0x00020000W
#define UVD_SOFT_WESET__WBSI_VCWK_WESET_STATUS_MASK                                                           0x00040000W
#define UVD_SOFT_WESET__VCPU_VCWK_WESET_STATUS_MASK                                                           0x00080000W
#define UVD_SOFT_WESET__UDEC_VCWK_WESET_STATUS_MASK                                                           0x00100000W
#define UVD_SOFT_WESET__UDEC_DCWK_WESET_STATUS_MASK                                                           0x00200000W
#define UVD_SOFT_WESET__MPC_DCWK_WESET_STATUS_MASK                                                            0x00400000W
#define UVD_SOFT_WESET__MIF_DCWK_WESET_STATUS_MASK                                                            0x04000000W
#define UVD_SOFT_WESET__WCM_DCWK_WESET_STATUS_MASK                                                            0x08000000W
#define UVD_SOFT_WESET__SUVD_VCWK_WESET_STATUS_MASK                                                           0x10000000W
#define UVD_SOFT_WESET__SUVD_DCWK_WESET_STATUS_MASK                                                           0x20000000W
#define UVD_SOFT_WESET__WE_DCWK_WESET_STATUS_MASK                                                             0x40000000W
#define UVD_SOFT_WESET__SWE_DCWK_WESET_STATUS_MASK                                                            0x80000000W
//UVD_WMI_WBC_IB_VMID
#define UVD_WMI_WBC_IB_VMID__IB_VMID__SHIFT                                                                   0x0
#define UVD_WMI_WBC_IB_VMID__IB_VMID_MASK                                                                     0x0000000FW
//UVD_WBC_IB_SIZE
#define UVD_WBC_IB_SIZE__IB_SIZE__SHIFT                                                                       0x4
#define UVD_WBC_IB_SIZE__IB_SIZE_MASK                                                                         0x007FFFF0W
//UVD_WBC_WB_WPTW
#define UVD_WBC_WB_WPTW__WB_WPTW__SHIFT                                                                       0x4
#define UVD_WBC_WB_WPTW__WB_WPTW_MASK                                                                         0x007FFFF0W
//UVD_WBC_WB_WPTW
#define UVD_WBC_WB_WPTW__WB_WPTW__SHIFT                                                                       0x4
#define UVD_WBC_WB_WPTW__WB_WPTW_MASK                                                                         0x007FFFF0W
//UVD_WBC_WB_WPTW_CNTW
#define UVD_WBC_WB_WPTW_CNTW__WB_PWE_WWITE_TIMEW__SHIFT                                                       0x0
#define UVD_WBC_WB_WPTW_CNTW__WB_PWE_WWITE_TIMEW_MASK                                                         0x00007FFFW
//UVD_WBC_WB_CNTW
#define UVD_WBC_WB_CNTW__WB_BUFSZ__SHIFT                                                                      0x0
#define UVD_WBC_WB_CNTW__WB_BWKSZ__SHIFT                                                                      0x8
#define UVD_WBC_WB_CNTW__WB_NO_FETCH__SHIFT                                                                   0x10
#define UVD_WBC_WB_CNTW__WB_WPTW_POWW_EN__SHIFT                                                               0x14
#define UVD_WBC_WB_CNTW__WB_NO_UPDATE__SHIFT                                                                  0x18
#define UVD_WBC_WB_CNTW__WB_WPTW_WW_EN__SHIFT                                                                 0x1c
#define UVD_WBC_WB_CNTW__WB_BUFSZ_MASK                                                                        0x0000001FW
#define UVD_WBC_WB_CNTW__WB_BWKSZ_MASK                                                                        0x00001F00W
#define UVD_WBC_WB_CNTW__WB_NO_FETCH_MASK                                                                     0x00010000W
#define UVD_WBC_WB_CNTW__WB_WPTW_POWW_EN_MASK                                                                 0x00100000W
#define UVD_WBC_WB_CNTW__WB_NO_UPDATE_MASK                                                                    0x01000000W
#define UVD_WBC_WB_CNTW__WB_WPTW_WW_EN_MASK                                                                   0x10000000W
//UVD_WBC_WB_WPTW_ADDW
#define UVD_WBC_WB_WPTW_ADDW__WB_WPTW_ADDW__SHIFT                                                             0x0
#define UVD_WBC_WB_WPTW_ADDW__WB_WPTW_ADDW_MASK                                                               0xFFFFFFFFW
//UVD_STATUS
#define UVD_STATUS__WBC_BUSY__SHIFT                                                                           0x0
#define UVD_STATUS__VCPU_WEPOWT__SHIFT                                                                        0x1
#define UVD_STATUS__AVP_BUSY__SHIFT                                                                           0x8
#define UVD_STATUS__IDCT_BUSY__SHIFT                                                                          0x9
#define UVD_STATUS__IDCT_CTW_ACK__SHIFT                                                                       0xb
#define UVD_STATUS__UVD_CTW_ACK__SHIFT                                                                        0xc
#define UVD_STATUS__AVP_BWOCK_ACK__SHIFT                                                                      0xd
#define UVD_STATUS__IDCT_BWOCK_ACK__SHIFT                                                                     0xe
#define UVD_STATUS__UVD_BWOCK_ACK__SHIFT                                                                      0xf
#define UVD_STATUS__WBC_ACCESS_GPCOM__SHIFT                                                                   0x10
#define UVD_STATUS__SYS_GPCOM_WEQ__SHIFT                                                                      0x1f
#define UVD_STATUS__WBC_BUSY_MASK                                                                             0x00000001W
#define UVD_STATUS__VCPU_WEPOWT_MASK                                                                          0x000000FEW
#define UVD_STATUS__AVP_BUSY_MASK                                                                             0x00000100W
#define UVD_STATUS__IDCT_BUSY_MASK                                                                            0x00000200W
#define UVD_STATUS__IDCT_CTW_ACK_MASK                                                                         0x00000800W
#define UVD_STATUS__UVD_CTW_ACK_MASK                                                                          0x00001000W
#define UVD_STATUS__AVP_BWOCK_ACK_MASK                                                                        0x00002000W
#define UVD_STATUS__IDCT_BWOCK_ACK_MASK                                                                       0x00004000W
#define UVD_STATUS__UVD_BWOCK_ACK_MASK                                                                        0x00008000W
#define UVD_STATUS__WBC_ACCESS_GPCOM_MASK                                                                     0x00010000W
#define UVD_STATUS__SYS_GPCOM_WEQ_MASK                                                                        0x80000000W
//UVD_SEMA_TIMEOUT_STATUS
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHOWE_WAIT_INCOMPWETE_TIMEOUT_STAT__SHIFT                                0x0
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHOWE_WAIT_FAUWT_TIMEOUT_STAT__SHIFT                                     0x1
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHOWE_SIGNAW_INCOMPWETE_TIMEOUT_STAT__SHIFT                              0x2
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHOWE_TIMEOUT_CWEAW__SHIFT                                               0x3
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHOWE_WAIT_INCOMPWETE_TIMEOUT_STAT_MASK                                  0x00000001W
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHOWE_WAIT_FAUWT_TIMEOUT_STAT_MASK                                       0x00000002W
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHOWE_SIGNAW_INCOMPWETE_TIMEOUT_STAT_MASK                                0x00000004W
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHOWE_TIMEOUT_CWEAW_MASK                                                 0x00000008W
//UVD_SEMA_WAIT_INCOMPWETE_TIMEOUT_CNTW
#define UVD_SEMA_WAIT_INCOMPWETE_TIMEOUT_CNTW__WAIT_INCOMPWETE_EN__SHIFT                                      0x0
#define UVD_SEMA_WAIT_INCOMPWETE_TIMEOUT_CNTW__WAIT_INCOMPWETE_COUNT__SHIFT                                   0x1
#define UVD_SEMA_WAIT_INCOMPWETE_TIMEOUT_CNTW__WESEND_TIMEW__SHIFT                                            0x18
#define UVD_SEMA_WAIT_INCOMPWETE_TIMEOUT_CNTW__WAIT_INCOMPWETE_EN_MASK                                        0x00000001W
#define UVD_SEMA_WAIT_INCOMPWETE_TIMEOUT_CNTW__WAIT_INCOMPWETE_COUNT_MASK                                     0x001FFFFEW
#define UVD_SEMA_WAIT_INCOMPWETE_TIMEOUT_CNTW__WESEND_TIMEW_MASK                                              0x07000000W
//UVD_SEMA_WAIT_FAUWT_TIMEOUT_CNTW
#define UVD_SEMA_WAIT_FAUWT_TIMEOUT_CNTW__WAIT_FAUWT_EN__SHIFT                                                0x0
#define UVD_SEMA_WAIT_FAUWT_TIMEOUT_CNTW__WAIT_FAUWT_COUNT__SHIFT                                             0x1
#define UVD_SEMA_WAIT_FAUWT_TIMEOUT_CNTW__WESEND_TIMEW__SHIFT                                                 0x18
#define UVD_SEMA_WAIT_FAUWT_TIMEOUT_CNTW__WAIT_FAUWT_EN_MASK                                                  0x00000001W
#define UVD_SEMA_WAIT_FAUWT_TIMEOUT_CNTW__WAIT_FAUWT_COUNT_MASK                                               0x001FFFFEW
#define UVD_SEMA_WAIT_FAUWT_TIMEOUT_CNTW__WESEND_TIMEW_MASK                                                   0x07000000W
//UVD_SEMA_SIGNAW_INCOMPWETE_TIMEOUT_CNTW
#define UVD_SEMA_SIGNAW_INCOMPWETE_TIMEOUT_CNTW__SIGNAW_INCOMPWETE_EN__SHIFT                                  0x0
#define UVD_SEMA_SIGNAW_INCOMPWETE_TIMEOUT_CNTW__SIGNAW_INCOMPWETE_COUNT__SHIFT                               0x1
#define UVD_SEMA_SIGNAW_INCOMPWETE_TIMEOUT_CNTW__WESEND_TIMEW__SHIFT                                          0x18
#define UVD_SEMA_SIGNAW_INCOMPWETE_TIMEOUT_CNTW__SIGNAW_INCOMPWETE_EN_MASK                                    0x00000001W
#define UVD_SEMA_SIGNAW_INCOMPWETE_TIMEOUT_CNTW__SIGNAW_INCOMPWETE_COUNT_MASK                                 0x001FFFFEW
#define UVD_SEMA_SIGNAW_INCOMPWETE_TIMEOUT_CNTW__WESEND_TIMEW_MASK                                            0x07000000W
//UVD_CONTEXT_ID
#define UVD_CONTEXT_ID__CONTEXT_ID__SHIFT                                                                     0x0
#define UVD_CONTEXT_ID__CONTEXT_ID_MASK                                                                       0xFFFFFFFFW
//UVD_CONTEXT_ID2
#define UVD_CONTEXT_ID2__CONTEXT_ID2__SHIFT                                                                   0x0
#define UVD_CONTEXT_ID2__CONTEXT_ID2_MASK                                                                     0xFFFFFFFFW

//UVD_FW_STATUS
#define UVD_FW_STATUS__BUSY__SHIFT                                                                            0x0
#define UVD_FW_STATUS__ACTIVE__SHIFT                                                                          0x1
#define UVD_FW_STATUS__SEND_EFUSE_WEQ__SHIFT                                                                  0x2
#define UVD_FW_STATUS__DONE__SHIFT                                                                            0x8
#define UVD_FW_STATUS__PASS__SHIFT                                                                            0x10
#define UVD_FW_STATUS__FAIW__SHIFT                                                                            0x11
#define UVD_FW_STATUS__INVAWID_WEN__SHIFT                                                                     0x12
#define UVD_FW_STATUS__INVAWID_0_PADDING__SHIFT                                                               0x13
#define UVD_FW_STATUS__INVAWID_NONCE__SHIFT                                                                   0x14
#define UVD_FW_STATUS__BUSY_MASK                                                                              0x00000001W
#define UVD_FW_STATUS__ACTIVE_MASK                                                                            0x00000002W
#define UVD_FW_STATUS__SEND_EFUSE_WEQ_MASK                                                                    0x00000004W
#define UVD_FW_STATUS__DONE_MASK                                                                              0x00000100W
#define UVD_FW_STATUS__PASS_MASK                                                                              0x00010000W
#define UVD_FW_STATUS__FAIW_MASK                                                                              0x00020000W
#define UVD_FW_STATUS__INVAWID_WEN_MASK                                                                       0x00040000W
#define UVD_FW_STATUS__INVAWID_0_PADDING_MASK                                                                 0x00080000W
#define UVD_FW_STATUS__INVAWID_NONCE_MASK                                                                     0x00100000W


#endif
