/*
 * Copywight (C) 2021 Advanced Micwo Devices, Inc.
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

#ifndef _dpcs_2_0_3_SH_MASK_HEADEW
#define _dpcs_2_0_3_SH_MASK_HEADEW
// addwessBwock: dpcssysa_dpcs0_dpcstx0_dispdec
//DPCSTX0_DPCSTX_TX_CWOCK_CNTW
#define DPCSTX0_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_GATE_DIS__SHIFT                                             0x0
#define DPCSTX0_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_EN__SHIFT                                                   0x1
#define DPCSTX0_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_CWOCK_ON__SHIFT                                             0x2
#define DPCSTX0_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_DIV2_CWOCK_ON__SHIFT                                        0x3
#define DPCSTX0_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_GATE_DIS_MASK                                               0x00000001W
#define DPCSTX0_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_EN_MASK                                                     0x00000002W
#define DPCSTX0_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_CWOCK_ON_MASK                                               0x00000004W
#define DPCSTX0_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_DIV2_CWOCK_ON_MASK                                          0x00000008W
//DPCSTX0_DPCSTX_TX_CNTW
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_PWW_UPDATE_WEQ__SHIFT                                                 0xc
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_PWW_UPDATE_PENDING__SHIFT                                             0xd
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_DATA_SWAP__SHIFT                                                      0xe
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_DATA_OWDEW_INVEWT__SHIFT                                              0xf
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_FIFO_EN__SHIFT                                                        0x10
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_FIFO_STAWT__SHIFT                                                     0x11
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_FIFO_WD_STAWT_DEWAY__SHIFT                                            0x14
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_SOFT_WESET__SHIFT                                                     0x1f
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_PWW_UPDATE_WEQ_MASK                                                   0x00001000W
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_PWW_UPDATE_PENDING_MASK                                               0x00002000W
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_DATA_SWAP_MASK                                                        0x00004000W
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_DATA_OWDEW_INVEWT_MASK                                                0x00008000W
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_FIFO_EN_MASK                                                          0x00010000W
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_FIFO_STAWT_MASK                                                       0x00020000W
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_FIFO_WD_STAWT_DEWAY_MASK                                              0x00F00000W
#define DPCSTX0_DPCSTX_TX_CNTW__DPCS_TX_SOFT_WESET_MASK                                                       0x80000000W
//DPCSTX0_DPCSTX_CBUS_CNTW
#define DPCSTX0_DPCSTX_CBUS_CNTW__DPCS_CBUS_WW_CMD_DEWAY__SHIFT                                               0x0
#define DPCSTX0_DPCSTX_CBUS_CNTW__DPCS_CBUS_SOFT_WESET__SHIFT                                                 0x1f
#define DPCSTX0_DPCSTX_CBUS_CNTW__DPCS_CBUS_WW_CMD_DEWAY_MASK                                                 0x000000FFW
#define DPCSTX0_DPCSTX_CBUS_CNTW__DPCS_CBUS_SOFT_WESET_MASK                                                   0x80000000W
//DPCSTX0_DPCSTX_INTEWWUPT_CNTW
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_WEG_FIFO_OVEWFWOW__SHIFT                                          0x0
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_WEG_EWWOW_CWW__SHIFT                                              0x1
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_WEG_FIFO_EWWOW_MASK__SHIFT                                        0x4
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_TX0_FIFO_EWWOW__SHIFT                                             0x8
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_TX1_FIFO_EWWOW__SHIFT                                             0x9
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_TX2_FIFO_EWWOW__SHIFT                                             0xa
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_TX3_FIFO_EWWOW__SHIFT                                             0xb
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_TX_EWWOW_CWW__SHIFT                                               0xc
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_TX_FIFO_EWWOW_MASK__SHIFT                                         0x10
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_INTEWWUPT_MASK__SHIFT                                             0x14
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_WEG_FIFO_OVEWFWOW_MASK                                            0x00000001W
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_WEG_EWWOW_CWW_MASK                                                0x00000002W
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_WEG_FIFO_EWWOW_MASK_MASK                                          0x00000010W
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_TX0_FIFO_EWWOW_MASK                                               0x00000100W
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_TX1_FIFO_EWWOW_MASK                                               0x00000200W
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_TX2_FIFO_EWWOW_MASK                                               0x00000400W
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_TX3_FIFO_EWWOW_MASK                                               0x00000800W
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_TX_EWWOW_CWW_MASK                                                 0x00001000W
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_TX_FIFO_EWWOW_MASK_MASK                                           0x00010000W
#define DPCSTX0_DPCSTX_INTEWWUPT_CNTW__DPCS_INTEWWUPT_MASK_MASK                                               0x00100000W
//DPCSTX0_DPCSTX_PWW_UPDATE_ADDW
#define DPCSTX0_DPCSTX_PWW_UPDATE_ADDW__DPCS_PWW_UPDATE_ADDW__SHIFT                                           0x0
#define DPCSTX0_DPCSTX_PWW_UPDATE_ADDW__DPCS_PWW_UPDATE_ADDW_MASK                                             0x0003FFFFW
//DPCSTX0_DPCSTX_PWW_UPDATE_DATA
#define DPCSTX0_DPCSTX_PWW_UPDATE_DATA__DPCS_PWW_UPDATE_DATA__SHIFT                                           0x0
#define DPCSTX0_DPCSTX_PWW_UPDATE_DATA__DPCS_PWW_UPDATE_DATA_MASK                                             0xFFFFFFFFW
//DPCSTX0_DPCSTX_DEBUG_CONFIG
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_DBG_EN__SHIFT                                                       0x0
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_DBG_CFGCWK_SEW__SHIFT                                               0x1
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_DBG_TX_SYMCWK_SEW__SHIFT                                            0x4
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_DBG_TX_SYMCWK_DIV2_SEW__SHIFT                                       0x8
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_DBG_CBUS_DIS__SHIFT                                                 0xe
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_TEST_DEBUG_WWITE_EN__SHIFT                                          0x10
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_TEST_DEBUG_INDEX__SHIFT                                             0x18
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_DBG_EN_MASK                                                         0x00000001W
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_DBG_CFGCWK_SEW_MASK                                                 0x0000000EW
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_DBG_TX_SYMCWK_SEW_MASK                                              0x00000070W
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_DBG_TX_SYMCWK_DIV2_SEW_MASK                                         0x00000700W
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_DBG_CBUS_DIS_MASK                                                   0x00004000W
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_TEST_DEBUG_WWITE_EN_MASK                                            0x00010000W
#define DPCSTX0_DPCSTX_DEBUG_CONFIG__DPCS_TEST_DEBUG_INDEX_MASK                                               0xFF000000W
//DPCSTX0_DPCSTX_TEST_DEBUG_DATA
#define DPCSTX0_DPCSTX_TEST_DEBUG_DATA__DPCS_TEST_DEBUG_DATA__SHIFT                                           0x0
#define DPCSTX0_DPCSTX_TEST_DEBUG_DATA__DPCS_TEST_DEBUG_DATA_MASK                                             0xFFFFFFFFW


// addwessBwock: dpcssysa_dpcs0_wdpcstx0_dispdec
//WDPCSTX0_WDPCSTX_CNTW
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_CBUS_SOFT_WESET__SHIFT                                                   0x0
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_SWAM_SOFT_WESET__SHIFT                                                   0x4
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE0_EN__SHIFT                                                  0xc
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE1_EN__SHIFT                                                  0xd
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE2_EN__SHIFT                                                  0xe
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE3_EN__SHIFT                                                  0xf
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_EN__SHIFT                                                        0x10
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_STAWT__SHIFT                                                     0x11
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_WD_STAWT_DEWAY__SHIFT                                            0x14
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_SOFT_WESET__SHIFT                                                     0x1f
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_CBUS_SOFT_WESET_MASK                                                     0x00000001W
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_SWAM_SOFT_WESET_MASK                                                     0x00000010W
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE0_EN_MASK                                                    0x00001000W
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE1_EN_MASK                                                    0x00002000W
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE2_EN_MASK                                                    0x00004000W
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE3_EN_MASK                                                    0x00008000W
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_EN_MASK                                                          0x00010000W
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_STAWT_MASK                                                       0x00020000W
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_FIFO_WD_STAWT_DEWAY_MASK                                              0x00F00000W
#define WDPCSTX0_WDPCSTX_CNTW__WDPCS_TX_SOFT_WESET_MASK                                                       0x80000000W
//WDPCSTX0_WDPCSTX_CWOCK_CNTW
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_EXT_WEFCWK_EN__SHIFT                                               0x0
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX0_EN__SHIFT                                          0x4
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX1_EN__SHIFT                                          0x5
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX2_EN__SHIFT                                          0x6
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX3_EN__SHIFT                                          0x7
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_GATE_DIS__SHIFT                                        0x8
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_EN__SHIFT                                              0x9
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_CWOCK_ON__SHIFT                                        0xa
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_GATE_DIS__SHIFT                                            0xc
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_EN__SHIFT                                                  0xd
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_CWOCK_ON__SHIFT                                            0xe
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_BYPASS__SHIFT                                              0x10
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_EXT_WEFCWK_EN_MASK                                                 0x00000001W
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX0_EN_MASK                                            0x00000010W
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX1_EN_MASK                                            0x00000020W
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX2_EN_MASK                                            0x00000040W
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX3_EN_MASK                                            0x00000080W
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_GATE_DIS_MASK                                          0x00000100W
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_EN_MASK                                                0x00000200W
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_CWOCK_ON_MASK                                          0x00000400W
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_GATE_DIS_MASK                                              0x00001000W
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_EN_MASK                                                    0x00002000W
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_CWOCK_ON_MASK                                              0x00004000W
#define WDPCSTX0_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_BYPASS_MASK                                                0x00010000W
//WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_WEG_FIFO_OVEWFWOW__SHIFT                                    0x0
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_DISABWE_TOGGWE__SHIFT                                 0x1
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_4WANE_TOGGWE__SHIFT                                   0x2
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX0_FIFO_EWWOW__SHIFT                                       0x4
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX1_FIFO_EWWOW__SHIFT                                       0x5
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX2_FIFO_EWWOW__SHIFT                                       0x6
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX3_FIFO_EWWOW__SHIFT                                       0x7
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_WEG_EWWOW_CWW__SHIFT                                        0x8
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_DISABWE_TOGGWE_CWW__SHIFT                             0x9
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_4WANE_TOGGWE_CWW__SHIFT                               0xa
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX_EWWOW_CWW__SHIFT                                         0xc
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_WEG_FIFO_EWWOW_MASK__SHIFT                                  0x10
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_DISABWE_TOGGWE_MASK__SHIFT                            0x11
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_4WANE_TOGGWE_MASK__SHIFT                              0x12
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX_FIFO_EWWOW_MASK__SHIFT                                   0x14
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_WEG_FIFO_OVEWFWOW_MASK                                      0x00000001W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_DISABWE_TOGGWE_MASK                                   0x00000002W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_4WANE_TOGGWE_MASK                                     0x00000004W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX0_FIFO_EWWOW_MASK                                         0x00000010W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX1_FIFO_EWWOW_MASK                                         0x00000020W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX2_FIFO_EWWOW_MASK                                         0x00000040W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX3_FIFO_EWWOW_MASK                                         0x00000080W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_WEG_EWWOW_CWW_MASK                                          0x00000100W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_DISABWE_TOGGWE_CWW_MASK                               0x00000200W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_4WANE_TOGGWE_CWW_MASK                                 0x00000400W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX_EWWOW_CWW_MASK                                           0x00001000W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_WEG_FIFO_EWWOW_MASK_MASK                                    0x00010000W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_DISABWE_TOGGWE_MASK_MASK                              0x00020000W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_4WANE_TOGGWE_MASK_MASK                                0x00040000W
#define WDPCSTX0_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX_FIFO_EWWOW_MASK_MASK                                     0x00100000W
//WDPCSTX0_WDPCSTX_PWW_UPDATE_DATA
#define WDPCSTX0_WDPCSTX_PWW_UPDATE_DATA__WDPCS_PWW_UPDATE_DATA__SHIFT                                        0x0
#define WDPCSTX0_WDPCSTX_PWW_UPDATE_DATA__WDPCS_PWW_UPDATE_DATA_MASK                                          0x00000001W
//WDPCSTX0_WDPCS_TX_CW_ADDW
#define WDPCSTX0_WDPCS_TX_CW_ADDW__WDPCS_TX_CW_ADDW__SHIFT                                                    0x0
#define WDPCSTX0_WDPCS_TX_CW_ADDW__WDPCS_TX_CW_ADDW_MASK                                                      0x0000FFFFW
//WDPCSTX0_WDPCS_TX_CW_DATA
#define WDPCSTX0_WDPCS_TX_CW_DATA__WDPCS_TX_CW_DATA__SHIFT                                                    0x0
#define WDPCSTX0_WDPCS_TX_CW_DATA__WDPCS_TX_CW_DATA_MASK                                                      0x0000FFFFW
//WDPCSTX0_WDPCSTX_SCWATCH
#define WDPCSTX0_WDPCSTX_SCWATCH__WDPCSTX_SCWATCH__SHIFT                                                      0x0
#define WDPCSTX0_WDPCSTX_SCWATCH__WDPCSTX_SCWATCH_MASK                                                        0xFFFFFFFFW
//WDPCSTX0_WDPCSTX_PHY_CNTW0
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WESET__SHIFT                                                    0x0
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TCA_PHY_WESET__SHIFT                                            0x1
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TCA_APB_WESET_N__SHIFT                                          0x2
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TEST_POWEWDOWN__SHIFT                                           0x3
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_DTB_OUT__SHIFT                                                  0x4
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_HDMIMODE_ENABWE__SHIFT                                          0x8
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WEF_WANGE__SHIFT                                                0x9
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TX_VBOOST_WVW__SHIFT                                            0xe
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WTUNE_WEQ__SHIFT                                                0x11
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WTUNE_ACK__SHIFT                                                0x12
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_CW_PAWA_SEW__SHIFT                                              0x14
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_CW_MUX_SEW__SHIFT                                               0x15
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WEF_CWKDET_EN__SHIFT                                            0x18
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WEF_CWKDET_WESUWT__SHIFT                                        0x19
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_SWAM_INIT_DONE__SHIFT                                               0x1c
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_SWAM_EXT_WD_DONE__SHIFT                                             0x1d
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_SWAM_BYPASS__SHIFT                                                  0x1f
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WESET_MASK                                                      0x00000001W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TCA_PHY_WESET_MASK                                              0x00000002W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TCA_APB_WESET_N_MASK                                            0x00000004W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TEST_POWEWDOWN_MASK                                             0x00000008W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_DTB_OUT_MASK                                                    0x00000030W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_HDMIMODE_ENABWE_MASK                                            0x00000100W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WEF_WANGE_MASK                                                  0x00003E00W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TX_VBOOST_WVW_MASK                                              0x0001C000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WTUNE_WEQ_MASK                                                  0x00020000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WTUNE_ACK_MASK                                                  0x00040000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_CW_PAWA_SEW_MASK                                                0x00100000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_CW_MUX_SEW_MASK                                                 0x00200000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WEF_CWKDET_EN_MASK                                              0x01000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WEF_CWKDET_WESUWT_MASK                                          0x02000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_SWAM_INIT_DONE_MASK                                                 0x10000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_SWAM_EXT_WD_DONE_MASK                                               0x20000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW0__WDPCS_SWAM_BYPASS_MASK                                                    0x80000000W
//WDPCSTX0_WDPCSTX_PHY_CNTW1
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PG_MODE_EN__SHIFT                                               0x0
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PCS_PWW_EN__SHIFT                                               0x1
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PCS_PWW_STABWE__SHIFT                                           0x2
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PMA_PWW_EN__SHIFT                                               0x3
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PMA_PWW_STABWE__SHIFT                                           0x4
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_DP_PG_WESET__SHIFT                                              0x5
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_ANA_PWW_EN__SHIFT                                               0x6
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_ANA_PWW_STABWE__SHIFT                                           0x7
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PG_MODE_EN_MASK                                                 0x00000001W
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PCS_PWW_EN_MASK                                                 0x00000002W
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PCS_PWW_STABWE_MASK                                             0x00000004W
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PMA_PWW_EN_MASK                                                 0x00000008W
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PMA_PWW_STABWE_MASK                                             0x00000010W
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_DP_PG_WESET_MASK                                                0x00000020W
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_ANA_PWW_EN_MASK                                                 0x00000040W
#define WDPCSTX0_WDPCSTX_PHY_CNTW1__WDPCS_PHY_ANA_PWW_STABWE_MASK                                             0x00000080W
//WDPCSTX0_WDPCSTX_PHY_CNTW2
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DPAWT_DP4__SHIFT                                                0x0
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DPAWT_DISABWE__SHIFT                                            0x1
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DPAWT_DISABWE_ACK__SHIFT                                        0x2
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP4_POW__SHIFT                                                  0x3
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE0_WX2TX_PAW_WB_EN__SHIFT                                 0x4
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE1_WX2TX_PAW_WB_EN__SHIFT                                 0x5
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE2_WX2TX_PAW_WB_EN__SHIFT                                 0x6
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE3_WX2TX_PAW_WB_EN__SHIFT                                 0x7
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE0_TX2WX_SEW_WB_EN__SHIFT                                 0x8
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE1_TX2WX_SEW_WB_EN__SHIFT                                 0x9
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE2_TX2WX_SEW_WB_EN__SHIFT                                 0xa
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE3_TX2WX_SEW_WB_EN__SHIFT                                 0xb
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DPAWT_DP4_MASK                                                  0x00000001W
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DPAWT_DISABWE_MASK                                              0x00000002W
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DPAWT_DISABWE_ACK_MASK                                          0x00000004W
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP4_POW_MASK                                                    0x00000008W
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE0_WX2TX_PAW_WB_EN_MASK                                   0x00000010W
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE1_WX2TX_PAW_WB_EN_MASK                                   0x00000020W
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE2_WX2TX_PAW_WB_EN_MASK                                   0x00000040W
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE3_WX2TX_PAW_WB_EN_MASK                                   0x00000080W
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE0_TX2WX_SEW_WB_EN_MASK                                   0x00000100W
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE1_TX2WX_SEW_WB_EN_MASK                                   0x00000200W
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE2_TX2WX_SEW_WB_EN_MASK                                   0x00000400W
#define WDPCSTX0_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE3_TX2WX_SEW_WB_EN_MASK                                   0x00000800W
//WDPCSTX0_WDPCSTX_PHY_CNTW3
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_WESET__SHIFT                                             0x0
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_DISABWE__SHIFT                                           0x1
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_CWK_WDY__SHIFT                                           0x2
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_DATA_EN__SHIFT                                           0x3
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_WEQ__SHIFT                                               0x4
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_ACK__SHIFT                                               0x5
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_WESET__SHIFT                                             0x8
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_DISABWE__SHIFT                                           0x9
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_CWK_WDY__SHIFT                                           0xa
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_DATA_EN__SHIFT                                           0xb
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_WEQ__SHIFT                                               0xc
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_ACK__SHIFT                                               0xd
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_WESET__SHIFT                                             0x10
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_DISABWE__SHIFT                                           0x11
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_CWK_WDY__SHIFT                                           0x12
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_DATA_EN__SHIFT                                           0x13
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_WEQ__SHIFT                                               0x14
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_ACK__SHIFT                                               0x15
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_WESET__SHIFT                                             0x18
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_DISABWE__SHIFT                                           0x19
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_CWK_WDY__SHIFT                                           0x1a
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_DATA_EN__SHIFT                                           0x1b
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_WEQ__SHIFT                                               0x1c
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_ACK__SHIFT                                               0x1d
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_WESET_MASK                                               0x00000001W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_DISABWE_MASK                                             0x00000002W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_CWK_WDY_MASK                                             0x00000004W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_DATA_EN_MASK                                             0x00000008W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_WEQ_MASK                                                 0x00000010W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_ACK_MASK                                                 0x00000020W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_WESET_MASK                                               0x00000100W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_DISABWE_MASK                                             0x00000200W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_CWK_WDY_MASK                                             0x00000400W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_DATA_EN_MASK                                             0x00000800W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_WEQ_MASK                                                 0x00001000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_ACK_MASK                                                 0x00002000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_WESET_MASK                                               0x00010000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_DISABWE_MASK                                             0x00020000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_CWK_WDY_MASK                                             0x00040000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_DATA_EN_MASK                                             0x00080000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_WEQ_MASK                                                 0x00100000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_ACK_MASK                                                 0x00200000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_WESET_MASK                                               0x01000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_DISABWE_MASK                                             0x02000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_CWK_WDY_MASK                                             0x04000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_DATA_EN_MASK                                             0x08000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_WEQ_MASK                                                 0x10000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_ACK_MASK                                                 0x20000000W
//WDPCSTX0_WDPCSTX_PHY_CNTW4
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_TEWM_CTWW__SHIFT                                         0x0
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_INVEWT__SHIFT                                            0x4
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_BYPASS_EQ_CAWC__SHIFT                                    0x6
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_HP_PWOT_EN__SHIFT                                        0x7
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_TEWM_CTWW__SHIFT                                         0x8
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_INVEWT__SHIFT                                            0xc
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_BYPASS_EQ_CAWC__SHIFT                                    0xe
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_HP_PWOT_EN__SHIFT                                        0xf
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_TEWM_CTWW__SHIFT                                         0x10
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_INVEWT__SHIFT                                            0x14
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_BYPASS_EQ_CAWC__SHIFT                                    0x16
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_HP_PWOT_EN__SHIFT                                        0x17
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_TEWM_CTWW__SHIFT                                         0x18
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_INVEWT__SHIFT                                            0x1c
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_BYPASS_EQ_CAWC__SHIFT                                    0x1e
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_HP_PWOT_EN__SHIFT                                        0x1f
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_TEWM_CTWW_MASK                                           0x00000007W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_INVEWT_MASK                                              0x00000010W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_BYPASS_EQ_CAWC_MASK                                      0x00000040W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_HP_PWOT_EN_MASK                                          0x00000080W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_TEWM_CTWW_MASK                                           0x00000700W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_INVEWT_MASK                                              0x00001000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_BYPASS_EQ_CAWC_MASK                                      0x00004000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_HP_PWOT_EN_MASK                                          0x00008000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_TEWM_CTWW_MASK                                           0x00070000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_INVEWT_MASK                                              0x00100000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_BYPASS_EQ_CAWC_MASK                                      0x00400000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_HP_PWOT_EN_MASK                                          0x00800000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_TEWM_CTWW_MASK                                           0x07000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_INVEWT_MASK                                              0x10000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_BYPASS_EQ_CAWC_MASK                                      0x40000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_HP_PWOT_EN_MASK                                          0x80000000W
//WDPCSTX0_WDPCSTX_PHY_CNTW5
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_PSTATE__SHIFT                                            0x2
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_WPD__SHIFT                                               0x4
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_WATE__SHIFT                                              0x5
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_WIDTH__SHIFT                                             0x8
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_MPWW_EN__SHIFT                                           0xa
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_DETWX_WEQ__SHIFT                                         0xb
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_DETWX_WESUWT__SHIFT                                      0xc
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_PSTATE__SHIFT                                            0x12
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_WPD__SHIFT                                               0x14
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_WATE__SHIFT                                              0x15
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_WIDTH__SHIFT                                             0x18
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_MPWW_EN__SHIFT                                           0x1a
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_DETWX_WEQ__SHIFT                                         0x1b
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_DETWX_WESUWT__SHIFT                                      0x1c
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_PSTATE_MASK                                              0x0000000CW
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_WPD_MASK                                                 0x00000010W
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_WATE_MASK                                                0x000000E0W
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_WIDTH_MASK                                               0x00000300W
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_MPWW_EN_MASK                                             0x00000400W
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_DETWX_WEQ_MASK                                           0x00000800W
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_DETWX_WESUWT_MASK                                        0x00001000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_PSTATE_MASK                                              0x000C0000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_WPD_MASK                                                 0x00100000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_WATE_MASK                                                0x00E00000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_WIDTH_MASK                                               0x03000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_MPWW_EN_MASK                                             0x04000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_DETWX_WEQ_MASK                                           0x08000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_DETWX_WESUWT_MASK                                        0x10000000W
//WDPCSTX0_WDPCSTX_PHY_CNTW6
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_PSTATE__SHIFT                                            0x2
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_WPD__SHIFT                                               0x4
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_WATE__SHIFT                                              0x5
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_WIDTH__SHIFT                                             0x8
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_MPWW_EN__SHIFT                                           0xa
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_DETWX_WEQ__SHIFT                                         0xb
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_DETWX_WESUWT__SHIFT                                      0xc
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_PSTATE__SHIFT                                            0x12
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_WPD__SHIFT                                               0x14
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_WATE__SHIFT                                              0x15
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_WIDTH__SHIFT                                             0x18
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_MPWW_EN__SHIFT                                           0x1a
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_DETWX_WEQ__SHIFT                                         0x1b
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_DETWX_WESUWT__SHIFT                                      0x1c
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_PSTATE_MASK                                              0x0000000CW
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_WPD_MASK                                                 0x00000010W
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_WATE_MASK                                                0x000000E0W
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_WIDTH_MASK                                               0x00000300W
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_MPWW_EN_MASK                                             0x00000400W
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_DETWX_WEQ_MASK                                           0x00000800W
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_DETWX_WESUWT_MASK                                        0x00001000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_PSTATE_MASK                                              0x000C0000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_WPD_MASK                                                 0x00100000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_WATE_MASK                                                0x00E00000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_WIDTH_MASK                                               0x03000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_MPWW_EN_MASK                                             0x04000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_DETWX_WEQ_MASK                                           0x08000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_DETWX_WESUWT_MASK                                        0x10000000W
//WDPCSTX0_WDPCSTX_PHY_CNTW7
#define WDPCSTX0_WDPCSTX_PHY_CNTW7__WDPCS_PHY_DP_MPWWB_FWACN_DEN__SHIFT                                       0x0
#define WDPCSTX0_WDPCSTX_PHY_CNTW7__WDPCS_PHY_DP_MPWWB_FWACN_QUOT__SHIFT                                      0x10
#define WDPCSTX0_WDPCSTX_PHY_CNTW7__WDPCS_PHY_DP_MPWWB_FWACN_DEN_MASK                                         0x0000FFFFW
#define WDPCSTX0_WDPCSTX_PHY_CNTW7__WDPCS_PHY_DP_MPWWB_FWACN_QUOT_MASK                                        0xFFFF0000W
//WDPCSTX0_WDPCSTX_PHY_CNTW8
#define WDPCSTX0_WDPCSTX_PHY_CNTW8__WDPCS_PHY_DP_MPWWB_SSC_PEAK__SHIFT                                        0x0
#define WDPCSTX0_WDPCSTX_PHY_CNTW8__WDPCS_PHY_DP_MPWWB_SSC_PEAK_MASK                                          0x000FFFFFW
//WDPCSTX0_WDPCSTX_PHY_CNTW9
#define WDPCSTX0_WDPCSTX_PHY_CNTW9__WDPCS_PHY_DP_MPWWB_SSC_STEPSIZE__SHIFT                                    0x0
#define WDPCSTX0_WDPCSTX_PHY_CNTW9__WDPCS_PHY_DP_MPWWB_SSC_UP_SPWEAD__SHIFT                                   0x18
#define WDPCSTX0_WDPCSTX_PHY_CNTW9__WDPCS_PHY_DP_MPWWB_SSC_STEPSIZE_MASK                                      0x001FFFFFW
#define WDPCSTX0_WDPCSTX_PHY_CNTW9__WDPCS_PHY_DP_MPWWB_SSC_UP_SPWEAD_MASK                                     0x01000000W
//WDPCSTX0_WDPCSTX_PHY_CNTW10
#define WDPCSTX0_WDPCSTX_PHY_CNTW10__WDPCS_PHY_DP_MPWWB_FWACN_WEM__SHIFT                                      0x0
#define WDPCSTX0_WDPCSTX_PHY_CNTW10__WDPCS_PHY_DP_MPWWB_FWACN_WEM_MASK                                        0x0000FFFFW
//WDPCSTX0_WDPCSTX_PHY_CNTW11
#define WDPCSTX0_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_WEF_CWK_EN__SHIFT                                           0x0
#define WDPCSTX0_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_WEF_CWK_WEQ__SHIFT                                          0x1
#define WDPCSTX0_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_MPWWB_MUWTIPWIEW__SHIFT                                     0x4
#define WDPCSTX0_WDPCSTX_PHY_CNTW11__WDPCS_PHY_HDMI_MPWWB_HDMI_DIV__SHIFT                                     0x10
#define WDPCSTX0_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_WEF_CWK_MPWWB_DIV__SHIFT                                    0x14
#define WDPCSTX0_WDPCSTX_PHY_CNTW11__WDPCS_PHY_HDMI_MPWWB_HDMI_PIXEW_CWK_DIV__SHIFT                           0x18
#define WDPCSTX0_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_WEF_CWK_EN_MASK                                             0x00000001W
#define WDPCSTX0_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_WEF_CWK_WEQ_MASK                                            0x00000002W
#define WDPCSTX0_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_MPWWB_MUWTIPWIEW_MASK                                       0x0000FFF0W
#define WDPCSTX0_WDPCSTX_PHY_CNTW11__WDPCS_PHY_HDMI_MPWWB_HDMI_DIV_MASK                                       0x00070000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_WEF_CWK_MPWWB_DIV_MASK                                      0x00700000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW11__WDPCS_PHY_HDMI_MPWWB_HDMI_PIXEW_CWK_DIV_MASK                             0x03000000W
//WDPCSTX0_WDPCSTX_PHY_CNTW12
#define WDPCSTX0_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_DIV5_CWK_EN__SHIFT                                    0x0
#define WDPCSTX0_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_WOWD_DIV2_EN__SHIFT                                   0x2
#define WDPCSTX0_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_TX_CWK_DIV__SHIFT                                     0x4
#define WDPCSTX0_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_STATE__SHIFT                                          0x7
#define WDPCSTX0_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_SSC_EN__SHIFT                                         0x8
#define WDPCSTX0_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_DIV5_CWK_EN_MASK                                      0x00000001W
#define WDPCSTX0_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_WOWD_DIV2_EN_MASK                                     0x00000004W
#define WDPCSTX0_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_TX_CWK_DIV_MASK                                       0x00000070W
#define WDPCSTX0_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_STATE_MASK                                            0x00000080W
#define WDPCSTX0_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_SSC_EN_MASK                                           0x00000100W
//WDPCSTX0_WDPCSTX_PHY_CNTW13
#define WDPCSTX0_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_DIV_MUWTIPWIEW__SHIFT                                 0x14
#define WDPCSTX0_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_DIV_CWK_EN__SHIFT                                     0x1c
#define WDPCSTX0_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_FOWCE_EN__SHIFT                                       0x1d
#define WDPCSTX0_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_INIT_CAW_DISABWE__SHIFT                               0x1e
#define WDPCSTX0_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_DIV_MUWTIPWIEW_MASK                                   0x0FF00000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_DIV_CWK_EN_MASK                                       0x10000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_FOWCE_EN_MASK                                         0x20000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_INIT_CAW_DISABWE_MASK                                 0x40000000W
//WDPCSTX0_WDPCSTX_PHY_CNTW14
#define WDPCSTX0_WDPCSTX_PHY_CNTW14__WDPCS_PHY_DP_MPWWB_CAW_FOWCE__SHIFT                                      0x0
#define WDPCSTX0_WDPCSTX_PHY_CNTW14__WDPCS_PHY_DP_MPWWB_FWACN_EN__SHIFT                                       0x18
#define WDPCSTX0_WDPCSTX_PHY_CNTW14__WDPCS_PHY_DP_MPWWB_PMIX_EN__SHIFT                                        0x1c
#define WDPCSTX0_WDPCSTX_PHY_CNTW14__WDPCS_PHY_DP_MPWWB_CAW_FOWCE_MASK                                        0x00000001W
#define WDPCSTX0_WDPCSTX_PHY_CNTW14__WDPCS_PHY_DP_MPWWB_FWACN_EN_MASK                                         0x01000000W
#define WDPCSTX0_WDPCSTX_PHY_CNTW14__WDPCS_PHY_DP_MPWWB_PMIX_EN_MASK                                          0x10000000W
//WDPCSTX0_WDPCSTX_PHY_FUSE0
#define WDPCSTX0_WDPCSTX_PHY_FUSE0__WDPCS_PHY_DP_TX0_EQ_MAIN__SHIFT                                           0x0
#define WDPCSTX0_WDPCSTX_PHY_FUSE0__WDPCS_PHY_DP_TX0_EQ_PWE__SHIFT                                            0x6
#define WDPCSTX0_WDPCSTX_PHY_FUSE0__WDPCS_PHY_DP_TX0_EQ_POST__SHIFT                                           0xc
#define WDPCSTX0_WDPCSTX_PHY_FUSE0__WDPCS_PHY_DP_MPWWB_V2I__SHIFT                                             0x12
#define WDPCSTX0_WDPCSTX_PHY_FUSE0__WDPCS_PHY_DP_MPWWB_FWEQ_VCO__SHIFT                                        0x14
#define WDPCSTX0_WDPCSTX_PHY_FUSE0__WDPCS_PHY_DP_TX0_EQ_MAIN_MASK                                             0x0000003FW
#define WDPCSTX0_WDPCSTX_PHY_FUSE0__WDPCS_PHY_DP_TX0_EQ_PWE_MASK                                              0x00000FC0W
#define WDPCSTX0_WDPCSTX_PHY_FUSE0__WDPCS_PHY_DP_TX0_EQ_POST_MASK                                             0x0003F000W
#define WDPCSTX0_WDPCSTX_PHY_FUSE0__WDPCS_PHY_DP_MPWWB_V2I_MASK                                               0x000C0000W
#define WDPCSTX0_WDPCSTX_PHY_FUSE0__WDPCS_PHY_DP_MPWWB_FWEQ_VCO_MASK                                          0x00300000W
//WDPCSTX0_WDPCSTX_PHY_FUSE1
#define WDPCSTX0_WDPCSTX_PHY_FUSE1__WDPCS_PHY_DP_TX1_EQ_MAIN__SHIFT                                           0x0
#define WDPCSTX0_WDPCSTX_PHY_FUSE1__WDPCS_PHY_DP_TX1_EQ_PWE__SHIFT                                            0x6
#define WDPCSTX0_WDPCSTX_PHY_FUSE1__WDPCS_PHY_DP_TX1_EQ_POST__SHIFT                                           0xc
#define WDPCSTX0_WDPCSTX_PHY_FUSE1__WDPCS_PHY_DP_MPWWB_CP_INT__SHIFT                                          0x12
#define WDPCSTX0_WDPCSTX_PHY_FUSE1__WDPCS_PHY_DP_MPWWB_CP_PWOP__SHIFT                                         0x19
#define WDPCSTX0_WDPCSTX_PHY_FUSE1__WDPCS_PHY_DP_TX1_EQ_MAIN_MASK                                             0x0000003FW
#define WDPCSTX0_WDPCSTX_PHY_FUSE1__WDPCS_PHY_DP_TX1_EQ_PWE_MASK                                              0x00000FC0W
#define WDPCSTX0_WDPCSTX_PHY_FUSE1__WDPCS_PHY_DP_TX1_EQ_POST_MASK                                             0x0003F000W
#define WDPCSTX0_WDPCSTX_PHY_FUSE1__WDPCS_PHY_DP_MPWWB_CP_INT_MASK                                            0x01FC0000W
#define WDPCSTX0_WDPCSTX_PHY_FUSE1__WDPCS_PHY_DP_MPWWB_CP_PWOP_MASK                                           0xFE000000W
//WDPCSTX0_WDPCSTX_PHY_FUSE2
#define WDPCSTX0_WDPCSTX_PHY_FUSE2__WDPCS_PHY_DP_TX2_EQ_MAIN__SHIFT                                           0x0
#define WDPCSTX0_WDPCSTX_PHY_FUSE2__WDPCS_PHY_DP_TX2_EQ_PWE__SHIFT                                            0x6
#define WDPCSTX0_WDPCSTX_PHY_FUSE2__WDPCS_PHY_DP_TX2_EQ_POST__SHIFT                                           0xc
#define WDPCSTX0_WDPCSTX_PHY_FUSE2__WDPCS_PHY_DP_TX2_EQ_MAIN_MASK                                             0x0000003FW
#define WDPCSTX0_WDPCSTX_PHY_FUSE2__WDPCS_PHY_DP_TX2_EQ_PWE_MASK                                              0x00000FC0W
#define WDPCSTX0_WDPCSTX_PHY_FUSE2__WDPCS_PHY_DP_TX2_EQ_POST_MASK                                             0x0003F000W
//WDPCSTX0_WDPCSTX_PHY_FUSE3
#define WDPCSTX0_WDPCSTX_PHY_FUSE3__WDPCS_PHY_DP_TX3_EQ_MAIN__SHIFT                                           0x0
#define WDPCSTX0_WDPCSTX_PHY_FUSE3__WDPCS_PHY_DP_TX3_EQ_PWE__SHIFT                                            0x6
#define WDPCSTX0_WDPCSTX_PHY_FUSE3__WDPCS_PHY_DP_TX3_EQ_POST__SHIFT                                           0xc
#define WDPCSTX0_WDPCSTX_PHY_FUSE3__WDPCS_PHY_DCO_FINETUNE__SHIFT                                             0x12
#define WDPCSTX0_WDPCSTX_PHY_FUSE3__WDPCS_PHY_DCO_WANGE__SHIFT                                                0x18
#define WDPCSTX0_WDPCSTX_PHY_FUSE3__WDPCS_PHY_DP_TX3_EQ_MAIN_MASK                                             0x0000003FW
#define WDPCSTX0_WDPCSTX_PHY_FUSE3__WDPCS_PHY_DP_TX3_EQ_PWE_MASK                                              0x00000FC0W
#define WDPCSTX0_WDPCSTX_PHY_FUSE3__WDPCS_PHY_DP_TX3_EQ_POST_MASK                                             0x0003F000W
#define WDPCSTX0_WDPCSTX_PHY_FUSE3__WDPCS_PHY_DCO_FINETUNE_MASK                                               0x00FC0000W
#define WDPCSTX0_WDPCSTX_PHY_FUSE3__WDPCS_PHY_DCO_WANGE_MASK                                                  0x03000000W
//WDPCSTX0_WDPCSTX_PHY_WX_WD_VAW
#define WDPCSTX0_WDPCSTX_PHY_WX_WD_VAW__WDPCS_PHY_WX_WEF_WD_VAW__SHIFT                                        0x0
#define WDPCSTX0_WDPCSTX_PHY_WX_WD_VAW__WDPCS_PHY_WX_VCO_WD_VAW__SHIFT                                        0x8
#define WDPCSTX0_WDPCSTX_PHY_WX_WD_VAW__WDPCS_PHY_WX_WEF_WD_VAW_MASK                                          0x0000007FW
#define WDPCSTX0_WDPCSTX_PHY_WX_WD_VAW__WDPCS_PHY_WX_VCO_WD_VAW_MASK                                          0x001FFF00W


// addwessBwock: dpcssysa_dpcssys_cw0_dispdec
//DPCSSYS_CW0_DPCSSYS_CW_ADDW
#define DPCSSYS_CW0_DPCSSYS_CW_ADDW__WDPCS_TX_CW_ADDW__SHIFT                                                  0x0
#define DPCSSYS_CW0_DPCSSYS_CW_ADDW__WDPCS_TX_CW_ADDW_MASK                                                    0x0000FFFFW
//DPCSSYS_CW0_DPCSSYS_CW_DATA
#define DPCSSYS_CW0_DPCSSYS_CW_DATA__WDPCS_TX_CW_DATA__SHIFT                                                  0x0
#define DPCSSYS_CW0_DPCSSYS_CW_DATA__WDPCS_TX_CW_DATA_MASK                                                    0x0000FFFFW


// addwessBwock: dpcssysa_dpcs0_dpcstx1_dispdec
//DPCSTX1_DPCSTX_TX_CWOCK_CNTW
#define DPCSTX1_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_GATE_DIS__SHIFT                                             0x0
#define DPCSTX1_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_EN__SHIFT                                                   0x1
#define DPCSTX1_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_CWOCK_ON__SHIFT                                             0x2
#define DPCSTX1_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_DIV2_CWOCK_ON__SHIFT                                        0x3
#define DPCSTX1_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_GATE_DIS_MASK                                               0x00000001W
#define DPCSTX1_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_EN_MASK                                                     0x00000002W
#define DPCSTX1_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_CWOCK_ON_MASK                                               0x00000004W
#define DPCSTX1_DPCSTX_TX_CWOCK_CNTW__DPCS_SYMCWK_DIV2_CWOCK_ON_MASK                                          0x00000008W
//DPCSTX1_DPCSTX_TX_CNTW
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_PWW_UPDATE_WEQ__SHIFT                                                 0xc
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_PWW_UPDATE_PENDING__SHIFT                                             0xd
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_DATA_SWAP__SHIFT                                                      0xe
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_DATA_OWDEW_INVEWT__SHIFT                                              0xf
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_FIFO_EN__SHIFT                                                        0x10
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_FIFO_STAWT__SHIFT                                                     0x11
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_FIFO_WD_STAWT_DEWAY__SHIFT                                            0x14
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_SOFT_WESET__SHIFT                                                     0x1f
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_PWW_UPDATE_WEQ_MASK                                                   0x00001000W
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_PWW_UPDATE_PENDING_MASK                                               0x00002000W
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_DATA_SWAP_MASK                                                        0x00004000W
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_DATA_OWDEW_INVEWT_MASK                                                0x00008000W
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_FIFO_EN_MASK                                                          0x00010000W
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_FIFO_STAWT_MASK                                                       0x00020000W
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_FIFO_WD_STAWT_DEWAY_MASK                                              0x00F00000W
#define DPCSTX1_DPCSTX_TX_CNTW__DPCS_TX_SOFT_WESET_MASK                                                       0x80000000W
//DPCSTX1_DPCSTX_CBUS_CNTW
#define DPCSTX1_DPCSTX_CBUS_CNTW__DPCS_CBUS_WW_CMD_DEWAY__SHIFT                                               0x0
#define DPCSTX1_DPCSTX_CBUS_CNTW__DPCS_CBUS_SOFT_WESET__SHIFT                                                 0x1f
#define DPCSTX1_DPCSTX_CBUS_CNTW__DPCS_CBUS_WW_CMD_DEWAY_MASK                                                 0x000000FFW
#define DPCSTX1_DPCSTX_CBUS_CNTW__DPCS_CBUS_SOFT_WESET_MASK                                                   0x80000000W
//DPCSTX1_DPCSTX_INTEWWUPT_CNTW
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_WEG_FIFO_OVEWFWOW__SHIFT                                          0x0
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_WEG_EWWOW_CWW__SHIFT                                              0x1
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_WEG_FIFO_EWWOW_MASK__SHIFT                                        0x4
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_TX0_FIFO_EWWOW__SHIFT                                             0x8
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_TX1_FIFO_EWWOW__SHIFT                                             0x9
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_TX2_FIFO_EWWOW__SHIFT                                             0xa
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_TX3_FIFO_EWWOW__SHIFT                                             0xb
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_TX_EWWOW_CWW__SHIFT                                               0xc
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_TX_FIFO_EWWOW_MASK__SHIFT                                         0x10
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_INTEWWUPT_MASK__SHIFT                                             0x14
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_WEG_FIFO_OVEWFWOW_MASK                                            0x00000001W
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_WEG_EWWOW_CWW_MASK                                                0x00000002W
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_WEG_FIFO_EWWOW_MASK_MASK                                          0x00000010W
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_TX0_FIFO_EWWOW_MASK                                               0x00000100W
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_TX1_FIFO_EWWOW_MASK                                               0x00000200W
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_TX2_FIFO_EWWOW_MASK                                               0x00000400W
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_TX3_FIFO_EWWOW_MASK                                               0x00000800W
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_TX_EWWOW_CWW_MASK                                                 0x00001000W
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_TX_FIFO_EWWOW_MASK_MASK                                           0x00010000W
#define DPCSTX1_DPCSTX_INTEWWUPT_CNTW__DPCS_INTEWWUPT_MASK_MASK                                               0x00100000W
//DPCSTX1_DPCSTX_PWW_UPDATE_ADDW
#define DPCSTX1_DPCSTX_PWW_UPDATE_ADDW__DPCS_PWW_UPDATE_ADDW__SHIFT                                           0x0
#define DPCSTX1_DPCSTX_PWW_UPDATE_ADDW__DPCS_PWW_UPDATE_ADDW_MASK                                             0x0003FFFFW
//DPCSTX1_DPCSTX_PWW_UPDATE_DATA
#define DPCSTX1_DPCSTX_PWW_UPDATE_DATA__DPCS_PWW_UPDATE_DATA__SHIFT                                           0x0
#define DPCSTX1_DPCSTX_PWW_UPDATE_DATA__DPCS_PWW_UPDATE_DATA_MASK                                             0xFFFFFFFFW
// addwessBwock: dpcssysa_dpcs0_wdpcstx1_dispdec
//WDPCSTX1_WDPCSTX_CNTW
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_CBUS_SOFT_WESET__SHIFT                                                   0x0
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_SWAM_SOFT_WESET__SHIFT                                                   0x4
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE0_EN__SHIFT                                                  0xc
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE1_EN__SHIFT                                                  0xd
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE2_EN__SHIFT                                                  0xe
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE3_EN__SHIFT                                                  0xf
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_EN__SHIFT                                                        0x10
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_STAWT__SHIFT                                                     0x11
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_WD_STAWT_DEWAY__SHIFT                                            0x14
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_SOFT_WESET__SHIFT                                                     0x1f
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_CBUS_SOFT_WESET_MASK                                                     0x00000001W
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_SWAM_SOFT_WESET_MASK                                                     0x00000010W
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE0_EN_MASK                                                    0x00001000W
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE1_EN_MASK                                                    0x00002000W
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE2_EN_MASK                                                    0x00004000W
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_WANE3_EN_MASK                                                    0x00008000W
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_EN_MASK                                                          0x00010000W
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_STAWT_MASK                                                       0x00020000W
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_FIFO_WD_STAWT_DEWAY_MASK                                              0x00F00000W
#define WDPCSTX1_WDPCSTX_CNTW__WDPCS_TX_SOFT_WESET_MASK                                                       0x80000000W
//WDPCSTX1_WDPCSTX_CWOCK_CNTW
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_EXT_WEFCWK_EN__SHIFT                                               0x0
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX0_EN__SHIFT                                          0x4
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX1_EN__SHIFT                                          0x5
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX2_EN__SHIFT                                          0x6
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX3_EN__SHIFT                                          0x7
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_GATE_DIS__SHIFT                                        0x8
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_EN__SHIFT                                              0x9
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_CWOCK_ON__SHIFT                                        0xa
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_GATE_DIS__SHIFT                                            0xc
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_EN__SHIFT                                                  0xd
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_CWOCK_ON__SHIFT                                            0xe
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_BYPASS__SHIFT                                              0x10
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_EXT_WEFCWK_EN_MASK                                                 0x00000001W
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX0_EN_MASK                                            0x00000010W
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX1_EN_MASK                                            0x00000020W
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX2_EN_MASK                                            0x00000040W
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_TX3_EN_MASK                                            0x00000080W
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_GATE_DIS_MASK                                          0x00000100W
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_EN_MASK                                                0x00000200W
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SYMCWK_DIV2_CWOCK_ON_MASK                                          0x00000400W
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_GATE_DIS_MASK                                              0x00001000W
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_EN_MASK                                                    0x00002000W
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_CWOCK_ON_MASK                                              0x00004000W
#define WDPCSTX1_WDPCSTX_CWOCK_CNTW__WDPCS_SWAMCWK_BYPASS_MASK                                                0x00010000W
//WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_WEG_FIFO_OVEWFWOW__SHIFT                                    0x0
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_DISABWE_TOGGWE__SHIFT                                 0x1
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_4WANE_TOGGWE__SHIFT                                   0x2
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX0_FIFO_EWWOW__SHIFT                                       0x4
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX1_FIFO_EWWOW__SHIFT                                       0x5
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX2_FIFO_EWWOW__SHIFT                                       0x6
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX3_FIFO_EWWOW__SHIFT                                       0x7
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_WEG_EWWOW_CWW__SHIFT                                        0x8
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_DISABWE_TOGGWE_CWW__SHIFT                             0x9
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_4WANE_TOGGWE_CWW__SHIFT                               0xa
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX_EWWOW_CWW__SHIFT                                         0xc
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_WEG_FIFO_EWWOW_MASK__SHIFT                                  0x10
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_DISABWE_TOGGWE_MASK__SHIFT                            0x11
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_4WANE_TOGGWE_MASK__SHIFT                              0x12
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX_FIFO_EWWOW_MASK__SHIFT                                   0x14
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_WEG_FIFO_OVEWFWOW_MASK                                      0x00000001W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_DISABWE_TOGGWE_MASK                                   0x00000002W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_4WANE_TOGGWE_MASK                                     0x00000004W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX0_FIFO_EWWOW_MASK                                         0x00000010W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX1_FIFO_EWWOW_MASK                                         0x00000020W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX2_FIFO_EWWOW_MASK                                         0x00000040W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX3_FIFO_EWWOW_MASK                                         0x00000080W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_WEG_EWWOW_CWW_MASK                                          0x00000100W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_DISABWE_TOGGWE_CWW_MASK                               0x00000200W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_4WANE_TOGGWE_CWW_MASK                                 0x00000400W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX_EWWOW_CWW_MASK                                           0x00001000W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_WEG_FIFO_EWWOW_MASK_MASK                                    0x00010000W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_DISABWE_TOGGWE_MASK_MASK                              0x00020000W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_DPAWT_4WANE_TOGGWE_MASK_MASK                                0x00040000W
#define WDPCSTX1_WDPCSTX_INTEWWUPT_CONTWOW__WDPCS_TX_FIFO_EWWOW_MASK_MASK                                     0x00100000W
//WDPCSTX1_WDPCSTX_PWW_UPDATE_DATA
#define WDPCSTX1_WDPCSTX_PWW_UPDATE_DATA__WDPCS_PWW_UPDATE_DATA__SHIFT                                        0x0
#define WDPCSTX1_WDPCSTX_PWW_UPDATE_DATA__WDPCS_PWW_UPDATE_DATA_MASK                                          0x00000001W
//WDPCSTX1_WDPCS_TX_CW_ADDW
#define WDPCSTX1_WDPCS_TX_CW_ADDW__WDPCS_TX_CW_ADDW__SHIFT                                                    0x0
#define WDPCSTX1_WDPCS_TX_CW_ADDW__WDPCS_TX_CW_ADDW_MASK                                                      0x0000FFFFW
//WDPCSTX1_WDPCS_TX_CW_DATA
#define WDPCSTX1_WDPCS_TX_CW_DATA__WDPCS_TX_CW_DATA__SHIFT                                                    0x0
#define WDPCSTX1_WDPCS_TX_CW_DATA__WDPCS_TX_CW_DATA_MASK                                                      0x0000FFFFW
//WDPCSTX1_WDPCS_TX_SWAM_CNTW
#define WDPCSTX1_WDPCS_TX_SWAM_CNTW__WDPCS_MEM_PWW_DIS__SHIFT                                                 0x14
#define WDPCSTX1_WDPCS_TX_SWAM_CNTW__WDPCS_MEM_PWW_FOWCE__SHIFT                                               0x18
#define WDPCSTX1_WDPCS_TX_SWAM_CNTW__WDPCS_MEM_PWW_PWW_STATE__SHIFT                                           0x1c
#define WDPCSTX1_WDPCS_TX_SWAM_CNTW__WDPCS_MEM_PWW_DIS_MASK                                                   0x00100000W
#define WDPCSTX1_WDPCS_TX_SWAM_CNTW__WDPCS_MEM_PWW_FOWCE_MASK                                                 0x03000000W
#define WDPCSTX1_WDPCS_TX_SWAM_CNTW__WDPCS_MEM_PWW_PWW_STATE_MASK                                             0x30000000W
//WDPCSTX1_WDPCSTX_SCWATCH
#define WDPCSTX1_WDPCSTX_SCWATCH__WDPCSTX_SCWATCH__SHIFT                                                      0x0
#define WDPCSTX1_WDPCSTX_SCWATCH__WDPCSTX_SCWATCH_MASK                                                        0xFFFFFFFFW
//WDPCSTX1_WDPCSTX_PHY_CNTW0
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WESET__SHIFT                                                    0x0
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TCA_PHY_WESET__SHIFT                                            0x1
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TCA_APB_WESET_N__SHIFT                                          0x2
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TEST_POWEWDOWN__SHIFT                                           0x3
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_DTB_OUT__SHIFT                                                  0x4
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_HDMIMODE_ENABWE__SHIFT                                          0x8
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WEF_WANGE__SHIFT                                                0x9
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TX_VBOOST_WVW__SHIFT                                            0xe
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WTUNE_WEQ__SHIFT                                                0x11
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WTUNE_ACK__SHIFT                                                0x12
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_CW_PAWA_SEW__SHIFT                                              0x14
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_CW_MUX_SEW__SHIFT                                               0x15
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WEF_CWKDET_EN__SHIFT                                            0x18
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WEF_CWKDET_WESUWT__SHIFT                                        0x19
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_SWAM_INIT_DONE__SHIFT                                               0x1c
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_SWAM_EXT_WD_DONE__SHIFT                                             0x1d
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_SWAM_BYPASS__SHIFT                                                  0x1f
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WESET_MASK                                                      0x00000001W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TCA_PHY_WESET_MASK                                              0x00000002W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TCA_APB_WESET_N_MASK                                            0x00000004W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TEST_POWEWDOWN_MASK                                             0x00000008W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_DTB_OUT_MASK                                                    0x00000030W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_HDMIMODE_ENABWE_MASK                                            0x00000100W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WEF_WANGE_MASK                                                  0x00003E00W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_TX_VBOOST_WVW_MASK                                              0x0001C000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WTUNE_WEQ_MASK                                                  0x00020000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WTUNE_ACK_MASK                                                  0x00040000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_CW_PAWA_SEW_MASK                                                0x00100000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_CW_MUX_SEW_MASK                                                 0x00200000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WEF_CWKDET_EN_MASK                                              0x01000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_PHY_WEF_CWKDET_WESUWT_MASK                                          0x02000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_SWAM_INIT_DONE_MASK                                                 0x10000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_SWAM_EXT_WD_DONE_MASK                                               0x20000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW0__WDPCS_SWAM_BYPASS_MASK                                                    0x80000000W
//WDPCSTX1_WDPCSTX_PHY_CNTW1
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PG_MODE_EN__SHIFT                                               0x0
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PCS_PWW_EN__SHIFT                                               0x1
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PCS_PWW_STABWE__SHIFT                                           0x2
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PMA_PWW_EN__SHIFT                                               0x3
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PMA_PWW_STABWE__SHIFT                                           0x4
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_DP_PG_WESET__SHIFT                                              0x5
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_ANA_PWW_EN__SHIFT                                               0x6
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_ANA_PWW_STABWE__SHIFT                                           0x7
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PG_MODE_EN_MASK                                                 0x00000001W
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PCS_PWW_EN_MASK                                                 0x00000002W
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PCS_PWW_STABWE_MASK                                             0x00000004W
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PMA_PWW_EN_MASK                                                 0x00000008W
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_PMA_PWW_STABWE_MASK                                             0x00000010W
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_DP_PG_WESET_MASK                                                0x00000020W
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_ANA_PWW_EN_MASK                                                 0x00000040W
#define WDPCSTX1_WDPCSTX_PHY_CNTW1__WDPCS_PHY_ANA_PWW_STABWE_MASK                                             0x00000080W
//WDPCSTX1_WDPCSTX_PHY_CNTW2
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DPAWT_DP4__SHIFT                                                0x0
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DPAWT_DISABWE__SHIFT                                            0x1
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DPAWT_DISABWE_ACK__SHIFT                                        0x2
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP4_POW__SHIFT                                                  0x3
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE0_WX2TX_PAW_WB_EN__SHIFT                                 0x4
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE1_WX2TX_PAW_WB_EN__SHIFT                                 0x5
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE2_WX2TX_PAW_WB_EN__SHIFT                                 0x6
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE3_WX2TX_PAW_WB_EN__SHIFT                                 0x7
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE0_TX2WX_SEW_WB_EN__SHIFT                                 0x8
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE1_TX2WX_SEW_WB_EN__SHIFT                                 0x9
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE2_TX2WX_SEW_WB_EN__SHIFT                                 0xa
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE3_TX2WX_SEW_WB_EN__SHIFT                                 0xb
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DPAWT_DP4_MASK                                                  0x00000001W
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DPAWT_DISABWE_MASK                                              0x00000002W
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DPAWT_DISABWE_ACK_MASK                                          0x00000004W
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP4_POW_MASK                                                    0x00000008W
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE0_WX2TX_PAW_WB_EN_MASK                                   0x00000010W
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE1_WX2TX_PAW_WB_EN_MASK                                   0x00000020W
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE2_WX2TX_PAW_WB_EN_MASK                                   0x00000040W
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE3_WX2TX_PAW_WB_EN_MASK                                   0x00000080W
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE0_TX2WX_SEW_WB_EN_MASK                                   0x00000100W
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE1_TX2WX_SEW_WB_EN_MASK                                   0x00000200W
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE2_TX2WX_SEW_WB_EN_MASK                                   0x00000400W
#define WDPCSTX1_WDPCSTX_PHY_CNTW2__WDPCS_PHY_DP_WANE3_TX2WX_SEW_WB_EN_MASK                                   0x00000800W
//WDPCSTX1_WDPCSTX_PHY_CNTW3
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_WESET__SHIFT                                             0x0
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_DISABWE__SHIFT                                           0x1
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_CWK_WDY__SHIFT                                           0x2
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_DATA_EN__SHIFT                                           0x3
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_WEQ__SHIFT                                               0x4
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_ACK__SHIFT                                               0x5
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_WESET__SHIFT                                             0x8
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_DISABWE__SHIFT                                           0x9
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_CWK_WDY__SHIFT                                           0xa
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_DATA_EN__SHIFT                                           0xb
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_WEQ__SHIFT                                               0xc
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_ACK__SHIFT                                               0xd
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_WESET__SHIFT                                             0x10
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_DISABWE__SHIFT                                           0x11
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_CWK_WDY__SHIFT                                           0x12
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_DATA_EN__SHIFT                                           0x13
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_WEQ__SHIFT                                               0x14
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_ACK__SHIFT                                               0x15
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_WESET__SHIFT                                             0x18
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_DISABWE__SHIFT                                           0x19
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_CWK_WDY__SHIFT                                           0x1a
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_DATA_EN__SHIFT                                           0x1b
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_WEQ__SHIFT                                               0x1c
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_ACK__SHIFT                                               0x1d
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_WESET_MASK                                               0x00000001W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_DISABWE_MASK                                             0x00000002W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_CWK_WDY_MASK                                             0x00000004W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_DATA_EN_MASK                                             0x00000008W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_WEQ_MASK                                                 0x00000010W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX0_ACK_MASK                                                 0x00000020W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_WESET_MASK                                               0x00000100W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_DISABWE_MASK                                             0x00000200W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_CWK_WDY_MASK                                             0x00000400W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_DATA_EN_MASK                                             0x00000800W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_WEQ_MASK                                                 0x00001000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX1_ACK_MASK                                                 0x00002000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_WESET_MASK                                               0x00010000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_DISABWE_MASK                                             0x00020000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_CWK_WDY_MASK                                             0x00040000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_DATA_EN_MASK                                             0x00080000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_WEQ_MASK                                                 0x00100000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX2_ACK_MASK                                                 0x00200000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_WESET_MASK                                               0x01000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_DISABWE_MASK                                             0x02000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_CWK_WDY_MASK                                             0x04000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_DATA_EN_MASK                                             0x08000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_WEQ_MASK                                                 0x10000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW3__WDPCS_PHY_DP_TX3_ACK_MASK                                                 0x20000000W
//WDPCSTX1_WDPCSTX_PHY_CNTW4
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_TEWM_CTWW__SHIFT                                         0x0
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_INVEWT__SHIFT                                            0x4
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_BYPASS_EQ_CAWC__SHIFT                                    0x6
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_HP_PWOT_EN__SHIFT                                        0x7
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_TEWM_CTWW__SHIFT                                         0x8
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_INVEWT__SHIFT                                            0xc
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_BYPASS_EQ_CAWC__SHIFT                                    0xe
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_HP_PWOT_EN__SHIFT                                        0xf
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_TEWM_CTWW__SHIFT                                         0x10
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_INVEWT__SHIFT                                            0x14
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_BYPASS_EQ_CAWC__SHIFT                                    0x16
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_HP_PWOT_EN__SHIFT                                        0x17
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_TEWM_CTWW__SHIFT                                         0x18
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_INVEWT__SHIFT                                            0x1c
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_BYPASS_EQ_CAWC__SHIFT                                    0x1e
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_HP_PWOT_EN__SHIFT                                        0x1f
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_TEWM_CTWW_MASK                                           0x00000007W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_INVEWT_MASK                                              0x00000010W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_BYPASS_EQ_CAWC_MASK                                      0x00000040W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX0_HP_PWOT_EN_MASK                                          0x00000080W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_TEWM_CTWW_MASK                                           0x00000700W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_INVEWT_MASK                                              0x00001000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_BYPASS_EQ_CAWC_MASK                                      0x00004000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX1_HP_PWOT_EN_MASK                                          0x00008000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_TEWM_CTWW_MASK                                           0x00070000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_INVEWT_MASK                                              0x00100000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_BYPASS_EQ_CAWC_MASK                                      0x00400000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX2_HP_PWOT_EN_MASK                                          0x00800000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_TEWM_CTWW_MASK                                           0x07000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_INVEWT_MASK                                              0x10000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_BYPASS_EQ_CAWC_MASK                                      0x40000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW4__WDPCS_PHY_DP_TX3_HP_PWOT_EN_MASK                                          0x80000000W
//WDPCSTX1_WDPCSTX_PHY_CNTW5
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_PSTATE__SHIFT                                            0x2
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_WPD__SHIFT                                               0x4
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_WATE__SHIFT                                              0x5
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_WIDTH__SHIFT                                             0x8
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_MPWW_EN__SHIFT                                           0xa
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_DETWX_WEQ__SHIFT                                         0xb
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_DETWX_WESUWT__SHIFT                                      0xc
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_PSTATE__SHIFT                                            0x12
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_WPD__SHIFT                                               0x14
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_WATE__SHIFT                                              0x15
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_WIDTH__SHIFT                                             0x18
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_MPWW_EN__SHIFT                                           0x1a
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_DETWX_WEQ__SHIFT                                         0x1b
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_DETWX_WESUWT__SHIFT                                      0x1c
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_PSTATE_MASK                                              0x0000000CW
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_WPD_MASK                                                 0x00000010W
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_WATE_MASK                                                0x000000E0W
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_WIDTH_MASK                                               0x00000300W
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_MPWW_EN_MASK                                             0x00000400W
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_DETWX_WEQ_MASK                                           0x00000800W
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX0_DETWX_WESUWT_MASK                                        0x00001000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_PSTATE_MASK                                              0x000C0000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_WPD_MASK                                                 0x00100000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_WATE_MASK                                                0x00E00000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_WIDTH_MASK                                               0x03000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_MPWW_EN_MASK                                             0x04000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_DETWX_WEQ_MASK                                           0x08000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW5__WDPCS_PHY_DP_TX1_DETWX_WESUWT_MASK                                        0x10000000W
//WDPCSTX1_WDPCSTX_PHY_CNTW6
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_PSTATE__SHIFT                                            0x2
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_WPD__SHIFT                                               0x4
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_WATE__SHIFT                                              0x5
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_WIDTH__SHIFT                                             0x8
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_MPWW_EN__SHIFT                                           0xa
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_DETWX_WEQ__SHIFT                                         0xb
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_DETWX_WESUWT__SHIFT                                      0xc
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_PSTATE__SHIFT                                            0x12
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_WPD__SHIFT                                               0x14
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_WATE__SHIFT                                              0x15
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_WIDTH__SHIFT                                             0x18
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_MPWW_EN__SHIFT                                           0x1a
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_DETWX_WEQ__SHIFT                                         0x1b
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_DETWX_WESUWT__SHIFT                                      0x1c
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_PSTATE_MASK                                              0x0000000CW
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_WPD_MASK                                                 0x00000010W
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_WATE_MASK                                                0x000000E0W
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_WIDTH_MASK                                               0x00000300W
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_MPWW_EN_MASK                                             0x00000400W
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_DETWX_WEQ_MASK                                           0x00000800W
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX2_DETWX_WESUWT_MASK                                        0x00001000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_PSTATE_MASK                                              0x000C0000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_WPD_MASK                                                 0x00100000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_WATE_MASK                                                0x00E00000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_WIDTH_MASK                                               0x03000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_MPWW_EN_MASK                                             0x04000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_DETWX_WEQ_MASK                                           0x08000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW6__WDPCS_PHY_DP_TX3_DETWX_WESUWT_MASK                                        0x10000000W
//WDPCSTX1_WDPCSTX_PHY_CNTW7
#define WDPCSTX1_WDPCSTX_PHY_CNTW7__WDPCS_PHY_DP_MPWWB_FWACN_DEN__SHIFT                                       0x0
#define WDPCSTX1_WDPCSTX_PHY_CNTW7__WDPCS_PHY_DP_MPWWB_FWACN_QUOT__SHIFT                                      0x10
#define WDPCSTX1_WDPCSTX_PHY_CNTW7__WDPCS_PHY_DP_MPWWB_FWACN_DEN_MASK                                         0x0000FFFFW
#define WDPCSTX1_WDPCSTX_PHY_CNTW7__WDPCS_PHY_DP_MPWWB_FWACN_QUOT_MASK                                        0xFFFF0000W
//WDPCSTX1_WDPCSTX_PHY_CNTW8
#define WDPCSTX1_WDPCSTX_PHY_CNTW8__WDPCS_PHY_DP_MPWWB_SSC_PEAK__SHIFT                                        0x0
#define WDPCSTX1_WDPCSTX_PHY_CNTW8__WDPCS_PHY_DP_MPWWB_SSC_PEAK_MASK                                          0x000FFFFFW
//WDPCSTX1_WDPCSTX_PHY_CNTW9
#define WDPCSTX1_WDPCSTX_PHY_CNTW9__WDPCS_PHY_DP_MPWWB_SSC_STEPSIZE__SHIFT                                    0x0
#define WDPCSTX1_WDPCSTX_PHY_CNTW9__WDPCS_PHY_DP_MPWWB_SSC_UP_SPWEAD__SHIFT                                   0x18
#define WDPCSTX1_WDPCSTX_PHY_CNTW9__WDPCS_PHY_DP_MPWWB_SSC_STEPSIZE_MASK                                      0x001FFFFFW
#define WDPCSTX1_WDPCSTX_PHY_CNTW9__WDPCS_PHY_DP_MPWWB_SSC_UP_SPWEAD_MASK                                     0x01000000W
//WDPCSTX1_WDPCSTX_PHY_CNTW10
#define WDPCSTX1_WDPCSTX_PHY_CNTW10__WDPCS_PHY_DP_MPWWB_FWACN_WEM__SHIFT                                      0x0
#define WDPCSTX1_WDPCSTX_PHY_CNTW10__WDPCS_PHY_DP_MPWWB_FWACN_WEM_MASK                                        0x0000FFFFW
//WDPCSTX1_WDPCSTX_PHY_CNTW11
#define WDPCSTX1_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_WEF_CWK_EN__SHIFT                                           0x0
#define WDPCSTX1_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_WEF_CWK_WEQ__SHIFT                                          0x1
#define WDPCSTX1_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_MPWWB_MUWTIPWIEW__SHIFT                                     0x4
#define WDPCSTX1_WDPCSTX_PHY_CNTW11__WDPCS_PHY_HDMI_MPWWB_HDMI_DIV__SHIFT                                     0x10
#define WDPCSTX1_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_WEF_CWK_MPWWB_DIV__SHIFT                                    0x14
#define WDPCSTX1_WDPCSTX_PHY_CNTW11__WDPCS_PHY_HDMI_MPWWB_HDMI_PIXEW_CWK_DIV__SHIFT                           0x18
#define WDPCSTX1_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_WEF_CWK_EN_MASK                                             0x00000001W
#define WDPCSTX1_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_WEF_CWK_WEQ_MASK                                            0x00000002W
#define WDPCSTX1_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_MPWWB_MUWTIPWIEW_MASK                                       0x0000FFF0W
#define WDPCSTX1_WDPCSTX_PHY_CNTW11__WDPCS_PHY_HDMI_MPWWB_HDMI_DIV_MASK                                       0x00070000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW11__WDPCS_PHY_DP_WEF_CWK_MPWWB_DIV_MASK                                      0x00700000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW11__WDPCS_PHY_HDMI_MPWWB_HDMI_PIXEW_CWK_DIV_MASK                             0x03000000W
//WDPCSTX1_WDPCSTX_PHY_CNTW12
#define WDPCSTX1_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_DIV5_CWK_EN__SHIFT                                    0x0
#define WDPCSTX1_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_WOWD_DIV2_EN__SHIFT                                   0x2
#define WDPCSTX1_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_TX_CWK_DIV__SHIFT                                     0x4
#define WDPCSTX1_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_STATE__SHIFT                                          0x7
#define WDPCSTX1_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_SSC_EN__SHIFT                                         0x8
#define WDPCSTX1_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_DIV5_CWK_EN_MASK                                      0x00000001W
#define WDPCSTX1_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_WOWD_DIV2_EN_MASK                                     0x00000004W
#define WDPCSTX1_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_TX_CWK_DIV_MASK                                       0x00000070W
#define WDPCSTX1_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_STATE_MASK                                            0x00000080W
#define WDPCSTX1_WDPCSTX_PHY_CNTW12__WDPCS_PHY_DP_MPWWB_SSC_EN_MASK                                           0x00000100W
//WDPCSTX1_WDPCSTX_PHY_CNTW13
#define WDPCSTX1_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_DIV_MUWTIPWIEW__SHIFT                                 0x14
#define WDPCSTX1_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_DIV_CWK_EN__SHIFT                                     0x1c
#define WDPCSTX1_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_FOWCE_EN__SHIFT                                       0x1d
#define WDPCSTX1_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_INIT_CAW_DISABWE__SHIFT                               0x1e
#define WDPCSTX1_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_DIV_MUWTIPWIEW_MASK                                   0x0FF00000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_DIV_CWK_EN_MASK                                       0x10000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_FOWCE_EN_MASK                                         0x20000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW13__WDPCS_PHY_DP_MPWWB_INIT_CAW_DISABWE_MASK                                 0x40000000W
//WDPCSTX1_WDPCSTX_PHY_CNTW14
#define WDPCSTX1_WDPCSTX_PHY_CNTW14__WDPCS_PHY_DP_MPWWB_CAW_FOWCE__SHIFT                                      0x0
#define WDPCSTX1_WDPCSTX_PHY_CNTW14__WDPCS_PHY_DP_MPWWB_FWACN_EN__SHIFT                                       0x18
#define WDPCSTX1_WDPCSTX_PHY_CNTW14__WDPCS_PHY_DP_MPWWB_PMIX_EN__SHIFT                                        0x1c
#define WDPCSTX1_WDPCSTX_PHY_CNTW14__WDPCS_PHY_DP_MPWWB_CAW_FOWCE_MASK                                        0x00000001W
#define WDPCSTX1_WDPCSTX_PHY_CNTW14__WDPCS_PHY_DP_MPWWB_FWACN_EN_MASK                                         0x01000000W
#define WDPCSTX1_WDPCSTX_PHY_CNTW14__WDPCS_PHY_DP_MPWWB_PMIX_EN_MASK                                          0x10000000W

#endif
