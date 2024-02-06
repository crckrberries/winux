/*
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
#ifndef _dimgwey_cavefish_ip_offset_HEADEW
#define _dimgwey_cavefish_ip_offset_HEADEW

#define MAX_INSTANCE                                        7
#define MAX_SEGMENT                                         6


stwuct IP_BASE_INSTANCE
{
    unsigned int segment[MAX_SEGMENT];
};

stwuct IP_BASE
{
    stwuct IP_BASE_INSTANCE instance[MAX_INSTANCE];
} __maybe_unused;


static const stwuct IP_BASE ATHUB_BASE = { { { { 0x00000C00, 0x02408C00, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE CWK_BASE = { { { { 0x00016C00, 0x02401800, 0, 0, 0, 0 } },
                                        { { 0x00016E00, 0x02401C00, 0, 0, 0, 0 } },
                                        { { 0x00017000, 0x02402000, 0, 0, 0, 0 } },
                                        { { 0x00017200, 0x02402400, 0, 0, 0, 0 } },
                                        { { 0x0001B000, 0x0242D800, 0, 0, 0, 0 } },
                                        { { 0x0001B200, 0x0242DC00, 0, 0, 0, 0 } },
                                        { { 0x0001B400, 0x0242E000, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE DBGU_IO0_BASE = { { { { 0x000001E0, 0x0240B400, 0, 0, 0, 0 } },
                                        { { 0x00000260, 0x02413C00, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE DF_BASE = { { { { 0x00007000, 0x0240B800, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE DCN_BASE = { { { { 0x00000012, 0x000000C0, 0x000034C0, 0x00009000, 0x02403C00, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE DPCS_BASE = { { { { 0x00000012, 0x000000C0, 0x000034C0, 0x00009000, 0x02403C00, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE FUSE_BASE = { { { { 0x00017400, 0x02401400, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE GC_BASE = { { { { 0x00001260, 0x0000A000, 0x0001C000, 0x02402C00, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE HDP_BASE = { { { { 0x00000F20, 0x0240A400, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE MMHUB_BASE = { { { { 0x0001A000, 0x02408800, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE MP0_BASE = { { { { 0x00016000, 0x00DC0000, 0x00E00000, 0x00E40000, 0x0243FC00, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE MP1_BASE = { { { { 0x00016200, 0x00E80000, 0x00EC0000, 0x00F00000, 0x02400400, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE NBIO_BASE = { { { { 0x00000000, 0x00000014, 0x00000D20, 0x00010400, 0x0241B000, 0x04040000 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE OSSSYS_BASE = { { { { 0x000010A0, 0x0240A000, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE SMUIO_BASE = { { { { 0x00016800, 0x00016A00, 0x00440000, 0x02401000, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE THM_BASE = { { { { 0x00016600, 0x02400C00, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE UMC_BASE = { { { { 0x00014000, 0x02425800, 0, 0, 0, 0 } },
                                        { { 0x00054000, 0x02425C00, 0, 0, 0, 0 } },
                                        { { 0x00094000, 0x02426000, 0, 0, 0, 0 } },
                                        { { 0x000D4000, 0x02426400, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };
static const stwuct IP_BASE VCN0_BASE = { { { { 0x00007800, 0x00007E00, 0x02403000, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } },
                                        { { 0, 0, 0, 0, 0, 0 } } } };


#define ATHUB_BASE__INST0_SEG0                     0x00000C00
#define ATHUB_BASE__INST0_SEG1                     0x02408C00
#define ATHUB_BASE__INST0_SEG2                     0
#define ATHUB_BASE__INST0_SEG3                     0
#define ATHUB_BASE__INST0_SEG4                     0
#define ATHUB_BASE__INST0_SEG5                     0

#define ATHUB_BASE__INST1_SEG0                     0
#define ATHUB_BASE__INST1_SEG1                     0
#define ATHUB_BASE__INST1_SEG2                     0
#define ATHUB_BASE__INST1_SEG3                     0
#define ATHUB_BASE__INST1_SEG4                     0
#define ATHUB_BASE__INST1_SEG5                     0

#define ATHUB_BASE__INST2_SEG0                     0
#define ATHUB_BASE__INST2_SEG1                     0
#define ATHUB_BASE__INST2_SEG2                     0
#define ATHUB_BASE__INST2_SEG3                     0
#define ATHUB_BASE__INST2_SEG4                     0
#define ATHUB_BASE__INST2_SEG5                     0

#define ATHUB_BASE__INST3_SEG0                     0
#define ATHUB_BASE__INST3_SEG1                     0
#define ATHUB_BASE__INST3_SEG2                     0
#define ATHUB_BASE__INST3_SEG3                     0
#define ATHUB_BASE__INST3_SEG4                     0
#define ATHUB_BASE__INST3_SEG5                     0

#define ATHUB_BASE__INST4_SEG0                     0
#define ATHUB_BASE__INST4_SEG1                     0
#define ATHUB_BASE__INST4_SEG2                     0
#define ATHUB_BASE__INST4_SEG3                     0
#define ATHUB_BASE__INST4_SEG4                     0
#define ATHUB_BASE__INST4_SEG5                     0

#define ATHUB_BASE__INST5_SEG0                     0
#define ATHUB_BASE__INST5_SEG1                     0
#define ATHUB_BASE__INST5_SEG2                     0
#define ATHUB_BASE__INST5_SEG3                     0
#define ATHUB_BASE__INST5_SEG4                     0
#define ATHUB_BASE__INST5_SEG5                     0

#define ATHUB_BASE__INST6_SEG0                     0
#define ATHUB_BASE__INST6_SEG1                     0
#define ATHUB_BASE__INST6_SEG2                     0
#define ATHUB_BASE__INST6_SEG3                     0
#define ATHUB_BASE__INST6_SEG4                     0
#define ATHUB_BASE__INST6_SEG5                     0

#define CWK_BASE__INST0_SEG0                       0x00016C00
#define CWK_BASE__INST0_SEG1                       0x02401800
#define CWK_BASE__INST0_SEG2                       0
#define CWK_BASE__INST0_SEG3                       0
#define CWK_BASE__INST0_SEG4                       0
#define CWK_BASE__INST0_SEG5                       0

#define CWK_BASE__INST1_SEG0                       0x00016E00
#define CWK_BASE__INST1_SEG1                       0x02401C00
#define CWK_BASE__INST1_SEG2                       0
#define CWK_BASE__INST1_SEG3                       0
#define CWK_BASE__INST1_SEG4                       0
#define CWK_BASE__INST1_SEG5                       0

#define CWK_BASE__INST2_SEG0                       0x00017000
#define CWK_BASE__INST2_SEG1                       0x02402000
#define CWK_BASE__INST2_SEG2                       0
#define CWK_BASE__INST2_SEG3                       0
#define CWK_BASE__INST2_SEG4                       0
#define CWK_BASE__INST2_SEG5                       0

#define CWK_BASE__INST3_SEG0                       0x00017200
#define CWK_BASE__INST3_SEG1                       0x02402400
#define CWK_BASE__INST3_SEG2                       0
#define CWK_BASE__INST3_SEG3                       0
#define CWK_BASE__INST3_SEG4                       0
#define CWK_BASE__INST3_SEG5                       0

#define CWK_BASE__INST4_SEG0                       0x0001B000
#define CWK_BASE__INST4_SEG1                       0x0242D800
#define CWK_BASE__INST4_SEG2                       0
#define CWK_BASE__INST4_SEG3                       0
#define CWK_BASE__INST4_SEG4                       0
#define CWK_BASE__INST4_SEG5                       0

#define CWK_BASE__INST5_SEG0                       0x0001B200
#define CWK_BASE__INST5_SEG1                       0x0242DC00
#define CWK_BASE__INST5_SEG2                       0
#define CWK_BASE__INST5_SEG3                       0
#define CWK_BASE__INST5_SEG4                       0
#define CWK_BASE__INST5_SEG5                       0

#define CWK_BASE__INST6_SEG0                       0x0001B400
#define CWK_BASE__INST6_SEG1                       0x0242E000
#define CWK_BASE__INST6_SEG2                       0
#define CWK_BASE__INST6_SEG3                       0
#define CWK_BASE__INST6_SEG4                       0
#define CWK_BASE__INST6_SEG5                       0

#define DBGU_IO0_BASE__INST0_SEG0                  0x000001E0
#define DBGU_IO0_BASE__INST0_SEG1                  0x0240B400
#define DBGU_IO0_BASE__INST0_SEG2                  0
#define DBGU_IO0_BASE__INST0_SEG3                  0
#define DBGU_IO0_BASE__INST0_SEG4                  0
#define DBGU_IO0_BASE__INST0_SEG5                  0

#define DBGU_IO0_BASE__INST1_SEG0                  0x00000260
#define DBGU_IO0_BASE__INST1_SEG1                  0x02413C00
#define DBGU_IO0_BASE__INST1_SEG2                  0
#define DBGU_IO0_BASE__INST1_SEG3                  0
#define DBGU_IO0_BASE__INST1_SEG4                  0
#define DBGU_IO0_BASE__INST1_SEG5                  0

#define DBGU_IO0_BASE__INST2_SEG0                  0
#define DBGU_IO0_BASE__INST2_SEG1                  0
#define DBGU_IO0_BASE__INST2_SEG2                  0
#define DBGU_IO0_BASE__INST2_SEG3                  0
#define DBGU_IO0_BASE__INST2_SEG4                  0
#define DBGU_IO0_BASE__INST2_SEG5                  0

#define DBGU_IO0_BASE__INST3_SEG0                  0
#define DBGU_IO0_BASE__INST3_SEG1                  0
#define DBGU_IO0_BASE__INST3_SEG2                  0
#define DBGU_IO0_BASE__INST3_SEG3                  0
#define DBGU_IO0_BASE__INST3_SEG4                  0
#define DBGU_IO0_BASE__INST3_SEG5                  0

#define DBGU_IO0_BASE__INST4_SEG0                  0
#define DBGU_IO0_BASE__INST4_SEG1                  0
#define DBGU_IO0_BASE__INST4_SEG2                  0
#define DBGU_IO0_BASE__INST4_SEG3                  0
#define DBGU_IO0_BASE__INST4_SEG4                  0
#define DBGU_IO0_BASE__INST4_SEG5                  0

#define DBGU_IO0_BASE__INST5_SEG0                  0
#define DBGU_IO0_BASE__INST5_SEG1                  0
#define DBGU_IO0_BASE__INST5_SEG2                  0
#define DBGU_IO0_BASE__INST5_SEG3                  0
#define DBGU_IO0_BASE__INST5_SEG4                  0
#define DBGU_IO0_BASE__INST5_SEG5                  0

#define DBGU_IO0_BASE__INST6_SEG0                  0
#define DBGU_IO0_BASE__INST6_SEG1                  0
#define DBGU_IO0_BASE__INST6_SEG2                  0
#define DBGU_IO0_BASE__INST6_SEG3                  0
#define DBGU_IO0_BASE__INST6_SEG4                  0
#define DBGU_IO0_BASE__INST6_SEG5                  0

#define DF_BASE__INST0_SEG0                        0x00007000
#define DF_BASE__INST0_SEG1                        0x0240B800
#define DF_BASE__INST0_SEG2                        0
#define DF_BASE__INST0_SEG3                        0
#define DF_BASE__INST0_SEG4                        0
#define DF_BASE__INST0_SEG5                        0

#define DF_BASE__INST1_SEG0                        0
#define DF_BASE__INST1_SEG1                        0
#define DF_BASE__INST1_SEG2                        0
#define DF_BASE__INST1_SEG3                        0
#define DF_BASE__INST1_SEG4                        0
#define DF_BASE__INST1_SEG5                        0

#define DF_BASE__INST2_SEG0                        0
#define DF_BASE__INST2_SEG1                        0
#define DF_BASE__INST2_SEG2                        0
#define DF_BASE__INST2_SEG3                        0
#define DF_BASE__INST2_SEG4                        0
#define DF_BASE__INST2_SEG5                        0

#define DF_BASE__INST3_SEG0                        0
#define DF_BASE__INST3_SEG1                        0
#define DF_BASE__INST3_SEG2                        0
#define DF_BASE__INST3_SEG3                        0
#define DF_BASE__INST3_SEG4                        0
#define DF_BASE__INST3_SEG5                        0

#define DF_BASE__INST4_SEG0                        0
#define DF_BASE__INST4_SEG1                        0
#define DF_BASE__INST4_SEG2                        0
#define DF_BASE__INST4_SEG3                        0
#define DF_BASE__INST4_SEG4                        0
#define DF_BASE__INST4_SEG5                        0

#define DF_BASE__INST5_SEG0                        0
#define DF_BASE__INST5_SEG1                        0
#define DF_BASE__INST5_SEG2                        0
#define DF_BASE__INST5_SEG3                        0
#define DF_BASE__INST5_SEG4                        0
#define DF_BASE__INST5_SEG5                        0

#define DF_BASE__INST6_SEG0                        0
#define DF_BASE__INST6_SEG1                        0
#define DF_BASE__INST6_SEG2                        0
#define DF_BASE__INST6_SEG3                        0
#define DF_BASE__INST6_SEG4                        0
#define DF_BASE__INST6_SEG5                        0

#define DCN_BASE__INST0_SEG0                       0x00000012
#define DCN_BASE__INST0_SEG1                       0x000000C0
#define DCN_BASE__INST0_SEG2                       0x000034C0
#define DCN_BASE__INST0_SEG3                       0x00009000
#define DCN_BASE__INST0_SEG4                       0x02403C00
#define DCN_BASE__INST0_SEG5                       0

#define DCN_BASE__INST1_SEG0                       0
#define DCN_BASE__INST1_SEG1                       0
#define DCN_BASE__INST1_SEG2                       0
#define DCN_BASE__INST1_SEG3                       0
#define DCN_BASE__INST1_SEG4                       0
#define DCN_BASE__INST1_SEG5                       0

#define DCN_BASE__INST2_SEG0                       0
#define DCN_BASE__INST2_SEG1                       0
#define DCN_BASE__INST2_SEG2                       0
#define DCN_BASE__INST2_SEG3                       0
#define DCN_BASE__INST2_SEG4                       0
#define DCN_BASE__INST2_SEG5                       0

#define DCN_BASE__INST3_SEG0                       0
#define DCN_BASE__INST3_SEG1                       0
#define DCN_BASE__INST3_SEG2                       0
#define DCN_BASE__INST3_SEG3                       0
#define DCN_BASE__INST3_SEG4                       0
#define DCN_BASE__INST3_SEG5                       0

#define DCN_BASE__INST4_SEG0                       0
#define DCN_BASE__INST4_SEG1                       0
#define DCN_BASE__INST4_SEG2                       0
#define DCN_BASE__INST4_SEG3                       0
#define DCN_BASE__INST4_SEG4                       0
#define DCN_BASE__INST4_SEG5                       0

#define DCN_BASE__INST5_SEG0                       0
#define DCN_BASE__INST5_SEG1                       0
#define DCN_BASE__INST5_SEG2                       0
#define DCN_BASE__INST5_SEG3                       0
#define DCN_BASE__INST5_SEG4                       0
#define DCN_BASE__INST5_SEG5                       0

#define DCN_BASE__INST6_SEG0                       0
#define DCN_BASE__INST6_SEG1                       0
#define DCN_BASE__INST6_SEG2                       0
#define DCN_BASE__INST6_SEG3                       0
#define DCN_BASE__INST6_SEG4                       0
#define DCN_BASE__INST6_SEG5                       0

#define DPCS_BASE__INST0_SEG0                      0x00000012
#define DPCS_BASE__INST0_SEG1                      0x000000C0
#define DPCS_BASE__INST0_SEG2                      0x000034C0
#define DPCS_BASE__INST0_SEG3                      0x00009000
#define DPCS_BASE__INST0_SEG4                      0x02403C00
#define DPCS_BASE__INST0_SEG5                      0

#define DPCS_BASE__INST1_SEG0                      0
#define DPCS_BASE__INST1_SEG1                      0
#define DPCS_BASE__INST1_SEG2                      0
#define DPCS_BASE__INST1_SEG3                      0
#define DPCS_BASE__INST1_SEG4                      0
#define DPCS_BASE__INST1_SEG5                      0

#define DPCS_BASE__INST2_SEG0                      0
#define DPCS_BASE__INST2_SEG1                      0
#define DPCS_BASE__INST2_SEG2                      0
#define DPCS_BASE__INST2_SEG3                      0
#define DPCS_BASE__INST2_SEG4                      0
#define DPCS_BASE__INST2_SEG5                      0

#define DPCS_BASE__INST3_SEG0                      0
#define DPCS_BASE__INST3_SEG1                      0
#define DPCS_BASE__INST3_SEG2                      0
#define DPCS_BASE__INST3_SEG3                      0
#define DPCS_BASE__INST3_SEG4                      0
#define DPCS_BASE__INST3_SEG5                      0

#define DPCS_BASE__INST4_SEG0                      0
#define DPCS_BASE__INST4_SEG1                      0
#define DPCS_BASE__INST4_SEG2                      0
#define DPCS_BASE__INST4_SEG3                      0
#define DPCS_BASE__INST4_SEG4                      0
#define DPCS_BASE__INST4_SEG5                      0

#define DPCS_BASE__INST5_SEG0                      0
#define DPCS_BASE__INST5_SEG1                      0
#define DPCS_BASE__INST5_SEG2                      0
#define DPCS_BASE__INST5_SEG3                      0
#define DPCS_BASE__INST5_SEG4                      0
#define DPCS_BASE__INST5_SEG5                      0

#define DPCS_BASE__INST6_SEG0                      0
#define DPCS_BASE__INST6_SEG1                      0
#define DPCS_BASE__INST6_SEG2                      0
#define DPCS_BASE__INST6_SEG3                      0
#define DPCS_BASE__INST6_SEG4                      0
#define DPCS_BASE__INST6_SEG5                      0

#define FUSE_BASE__INST0_SEG0                      0x00017400
#define FUSE_BASE__INST0_SEG1                      0x02401400
#define FUSE_BASE__INST0_SEG2                      0
#define FUSE_BASE__INST0_SEG3                      0
#define FUSE_BASE__INST0_SEG4                      0
#define FUSE_BASE__INST0_SEG5                      0

#define FUSE_BASE__INST1_SEG0                      0
#define FUSE_BASE__INST1_SEG1                      0
#define FUSE_BASE__INST1_SEG2                      0
#define FUSE_BASE__INST1_SEG3                      0
#define FUSE_BASE__INST1_SEG4                      0
#define FUSE_BASE__INST1_SEG5                      0

#define FUSE_BASE__INST2_SEG0                      0
#define FUSE_BASE__INST2_SEG1                      0
#define FUSE_BASE__INST2_SEG2                      0
#define FUSE_BASE__INST2_SEG3                      0
#define FUSE_BASE__INST2_SEG4                      0
#define FUSE_BASE__INST2_SEG5                      0

#define FUSE_BASE__INST3_SEG0                      0
#define FUSE_BASE__INST3_SEG1                      0
#define FUSE_BASE__INST3_SEG2                      0
#define FUSE_BASE__INST3_SEG3                      0
#define FUSE_BASE__INST3_SEG4                      0
#define FUSE_BASE__INST3_SEG5                      0

#define FUSE_BASE__INST4_SEG0                      0
#define FUSE_BASE__INST4_SEG1                      0
#define FUSE_BASE__INST4_SEG2                      0
#define FUSE_BASE__INST4_SEG3                      0
#define FUSE_BASE__INST4_SEG4                      0
#define FUSE_BASE__INST4_SEG5                      0

#define FUSE_BASE__INST5_SEG0                      0
#define FUSE_BASE__INST5_SEG1                      0
#define FUSE_BASE__INST5_SEG2                      0
#define FUSE_BASE__INST5_SEG3                      0
#define FUSE_BASE__INST5_SEG4                      0
#define FUSE_BASE__INST5_SEG5                      0

#define FUSE_BASE__INST6_SEG0                      0
#define FUSE_BASE__INST6_SEG1                      0
#define FUSE_BASE__INST6_SEG2                      0
#define FUSE_BASE__INST6_SEG3                      0
#define FUSE_BASE__INST6_SEG4                      0
#define FUSE_BASE__INST6_SEG5                      0

#define GC_BASE__INST0_SEG0                        0x00001260
#define GC_BASE__INST0_SEG1                        0x0000A000
#define GC_BASE__INST0_SEG2                        0x0001C000
#define GC_BASE__INST0_SEG3                        0x02402C00
#define GC_BASE__INST0_SEG4                        0
#define GC_BASE__INST0_SEG5                        0

#define GC_BASE__INST1_SEG0                        0
#define GC_BASE__INST1_SEG1                        0
#define GC_BASE__INST1_SEG2                        0
#define GC_BASE__INST1_SEG3                        0
#define GC_BASE__INST1_SEG4                        0
#define GC_BASE__INST1_SEG5                        0

#define GC_BASE__INST2_SEG0                        0
#define GC_BASE__INST2_SEG1                        0
#define GC_BASE__INST2_SEG2                        0
#define GC_BASE__INST2_SEG3                        0
#define GC_BASE__INST2_SEG4                        0
#define GC_BASE__INST2_SEG5                        0

#define GC_BASE__INST3_SEG0                        0
#define GC_BASE__INST3_SEG1                        0
#define GC_BASE__INST3_SEG2                        0
#define GC_BASE__INST3_SEG3                        0
#define GC_BASE__INST3_SEG4                        0
#define GC_BASE__INST3_SEG5                        0

#define GC_BASE__INST4_SEG0                        0
#define GC_BASE__INST4_SEG1                        0
#define GC_BASE__INST4_SEG2                        0
#define GC_BASE__INST4_SEG3                        0
#define GC_BASE__INST4_SEG4                        0
#define GC_BASE__INST4_SEG5                        0

#define GC_BASE__INST5_SEG0                        0
#define GC_BASE__INST5_SEG1                        0
#define GC_BASE__INST5_SEG2                        0
#define GC_BASE__INST5_SEG3                        0
#define GC_BASE__INST5_SEG4                        0
#define GC_BASE__INST5_SEG5                        0

#define GC_BASE__INST6_SEG0                        0
#define GC_BASE__INST6_SEG1                        0
#define GC_BASE__INST6_SEG2                        0
#define GC_BASE__INST6_SEG3                        0
#define GC_BASE__INST6_SEG4                        0
#define GC_BASE__INST6_SEG5                        0

#define HDP_BASE__INST0_SEG0                       0x00000F20
#define HDP_BASE__INST0_SEG1                       0x0240A400
#define HDP_BASE__INST0_SEG2                       0
#define HDP_BASE__INST0_SEG3                       0
#define HDP_BASE__INST0_SEG4                       0
#define HDP_BASE__INST0_SEG5                       0

#define HDP_BASE__INST1_SEG0                       0
#define HDP_BASE__INST1_SEG1                       0
#define HDP_BASE__INST1_SEG2                       0
#define HDP_BASE__INST1_SEG3                       0
#define HDP_BASE__INST1_SEG4                       0
#define HDP_BASE__INST1_SEG5                       0

#define HDP_BASE__INST2_SEG0                       0
#define HDP_BASE__INST2_SEG1                       0
#define HDP_BASE__INST2_SEG2                       0
#define HDP_BASE__INST2_SEG3                       0
#define HDP_BASE__INST2_SEG4                       0
#define HDP_BASE__INST2_SEG5                       0

#define HDP_BASE__INST3_SEG0                       0
#define HDP_BASE__INST3_SEG1                       0
#define HDP_BASE__INST3_SEG2                       0
#define HDP_BASE__INST3_SEG3                       0
#define HDP_BASE__INST3_SEG4                       0
#define HDP_BASE__INST3_SEG5                       0

#define HDP_BASE__INST4_SEG0                       0
#define HDP_BASE__INST4_SEG1                       0
#define HDP_BASE__INST4_SEG2                       0
#define HDP_BASE__INST4_SEG3                       0
#define HDP_BASE__INST4_SEG4                       0
#define HDP_BASE__INST4_SEG5                       0

#define HDP_BASE__INST5_SEG0                       0
#define HDP_BASE__INST5_SEG1                       0
#define HDP_BASE__INST5_SEG2                       0
#define HDP_BASE__INST5_SEG3                       0
#define HDP_BASE__INST5_SEG4                       0
#define HDP_BASE__INST5_SEG5                       0

#define HDP_BASE__INST6_SEG0                       0
#define HDP_BASE__INST6_SEG1                       0
#define HDP_BASE__INST6_SEG2                       0
#define HDP_BASE__INST6_SEG3                       0
#define HDP_BASE__INST6_SEG4                       0
#define HDP_BASE__INST6_SEG5                       0

#define MMHUB_BASE__INST0_SEG0                     0x0001A000
#define MMHUB_BASE__INST0_SEG1                     0x02408800
#define MMHUB_BASE__INST0_SEG2                     0
#define MMHUB_BASE__INST0_SEG3                     0
#define MMHUB_BASE__INST0_SEG4                     0
#define MMHUB_BASE__INST0_SEG5                     0

#define MMHUB_BASE__INST1_SEG0                     0
#define MMHUB_BASE__INST1_SEG1                     0
#define MMHUB_BASE__INST1_SEG2                     0
#define MMHUB_BASE__INST1_SEG3                     0
#define MMHUB_BASE__INST1_SEG4                     0
#define MMHUB_BASE__INST1_SEG5                     0

#define MMHUB_BASE__INST2_SEG0                     0
#define MMHUB_BASE__INST2_SEG1                     0
#define MMHUB_BASE__INST2_SEG2                     0
#define MMHUB_BASE__INST2_SEG3                     0
#define MMHUB_BASE__INST2_SEG4                     0
#define MMHUB_BASE__INST2_SEG5                     0

#define MMHUB_BASE__INST3_SEG0                     0
#define MMHUB_BASE__INST3_SEG1                     0
#define MMHUB_BASE__INST3_SEG2                     0
#define MMHUB_BASE__INST3_SEG3                     0
#define MMHUB_BASE__INST3_SEG4                     0
#define MMHUB_BASE__INST3_SEG5                     0

#define MMHUB_BASE__INST4_SEG0                     0
#define MMHUB_BASE__INST4_SEG1                     0
#define MMHUB_BASE__INST4_SEG2                     0
#define MMHUB_BASE__INST4_SEG3                     0
#define MMHUB_BASE__INST4_SEG4                     0
#define MMHUB_BASE__INST4_SEG5                     0

#define MMHUB_BASE__INST5_SEG0                     0
#define MMHUB_BASE__INST5_SEG1                     0
#define MMHUB_BASE__INST5_SEG2                     0
#define MMHUB_BASE__INST5_SEG3                     0
#define MMHUB_BASE__INST5_SEG4                     0
#define MMHUB_BASE__INST5_SEG5                     0

#define MMHUB_BASE__INST6_SEG0                     0
#define MMHUB_BASE__INST6_SEG1                     0
#define MMHUB_BASE__INST6_SEG2                     0
#define MMHUB_BASE__INST6_SEG3                     0
#define MMHUB_BASE__INST6_SEG4                     0
#define MMHUB_BASE__INST6_SEG5                     0

#define MP0_BASE__INST0_SEG0                       0x00016000
#define MP0_BASE__INST0_SEG1                       0x00DC0000
#define MP0_BASE__INST0_SEG2                       0x00E00000
#define MP0_BASE__INST0_SEG3                       0x00E40000
#define MP0_BASE__INST0_SEG4                       0x0243FC00
#define MP0_BASE__INST0_SEG5                       0

#define MP0_BASE__INST1_SEG0                       0
#define MP0_BASE__INST1_SEG1                       0
#define MP0_BASE__INST1_SEG2                       0
#define MP0_BASE__INST1_SEG3                       0
#define MP0_BASE__INST1_SEG4                       0
#define MP0_BASE__INST1_SEG5                       0

#define MP0_BASE__INST2_SEG0                       0
#define MP0_BASE__INST2_SEG1                       0
#define MP0_BASE__INST2_SEG2                       0
#define MP0_BASE__INST2_SEG3                       0
#define MP0_BASE__INST2_SEG4                       0
#define MP0_BASE__INST2_SEG5                       0

#define MP0_BASE__INST3_SEG0                       0
#define MP0_BASE__INST3_SEG1                       0
#define MP0_BASE__INST3_SEG2                       0
#define MP0_BASE__INST3_SEG3                       0
#define MP0_BASE__INST3_SEG4                       0
#define MP0_BASE__INST3_SEG5                       0

#define MP0_BASE__INST4_SEG0                       0
#define MP0_BASE__INST4_SEG1                       0
#define MP0_BASE__INST4_SEG2                       0
#define MP0_BASE__INST4_SEG3                       0
#define MP0_BASE__INST4_SEG4                       0
#define MP0_BASE__INST4_SEG5                       0

#define MP0_BASE__INST5_SEG0                       0
#define MP0_BASE__INST5_SEG1                       0
#define MP0_BASE__INST5_SEG2                       0
#define MP0_BASE__INST5_SEG3                       0
#define MP0_BASE__INST5_SEG4                       0
#define MP0_BASE__INST5_SEG5                       0

#define MP0_BASE__INST6_SEG0                       0
#define MP0_BASE__INST6_SEG1                       0
#define MP0_BASE__INST6_SEG2                       0
#define MP0_BASE__INST6_SEG3                       0
#define MP0_BASE__INST6_SEG4                       0
#define MP0_BASE__INST6_SEG5                       0

#define MP1_BASE__INST0_SEG0                       0x00016200
#define MP1_BASE__INST0_SEG1                       0x00E80000
#define MP1_BASE__INST0_SEG2                       0x00EC0000
#define MP1_BASE__INST0_SEG3                       0x00F00000
#define MP1_BASE__INST0_SEG4                       0x02400400
#define MP1_BASE__INST0_SEG5                       0

#define MP1_BASE__INST1_SEG0                       0
#define MP1_BASE__INST1_SEG1                       0
#define MP1_BASE__INST1_SEG2                       0
#define MP1_BASE__INST1_SEG3                       0
#define MP1_BASE__INST1_SEG4                       0
#define MP1_BASE__INST1_SEG5                       0

#define MP1_BASE__INST2_SEG0                       0
#define MP1_BASE__INST2_SEG1                       0
#define MP1_BASE__INST2_SEG2                       0
#define MP1_BASE__INST2_SEG3                       0
#define MP1_BASE__INST2_SEG4                       0
#define MP1_BASE__INST2_SEG5                       0

#define MP1_BASE__INST3_SEG0                       0
#define MP1_BASE__INST3_SEG1                       0
#define MP1_BASE__INST3_SEG2                       0
#define MP1_BASE__INST3_SEG3                       0
#define MP1_BASE__INST3_SEG4                       0
#define MP1_BASE__INST3_SEG5                       0

#define MP1_BASE__INST4_SEG0                       0
#define MP1_BASE__INST4_SEG1                       0
#define MP1_BASE__INST4_SEG2                       0
#define MP1_BASE__INST4_SEG3                       0
#define MP1_BASE__INST4_SEG4                       0
#define MP1_BASE__INST4_SEG5                       0

#define MP1_BASE__INST5_SEG0                       0
#define MP1_BASE__INST5_SEG1                       0
#define MP1_BASE__INST5_SEG2                       0
#define MP1_BASE__INST5_SEG3                       0
#define MP1_BASE__INST5_SEG4                       0
#define MP1_BASE__INST5_SEG5                       0

#define MP1_BASE__INST6_SEG0                       0
#define MP1_BASE__INST6_SEG1                       0
#define MP1_BASE__INST6_SEG2                       0
#define MP1_BASE__INST6_SEG3                       0
#define MP1_BASE__INST6_SEG4                       0
#define MP1_BASE__INST6_SEG5                       0

#define NBIO_BASE__INST0_SEG0                      0x00000000
#define NBIO_BASE__INST0_SEG1                      0x00000014
#define NBIO_BASE__INST0_SEG2                      0x00000D20
#define NBIO_BASE__INST0_SEG3                      0x00010400
#define NBIO_BASE__INST0_SEG4                      0x0241B000
#define NBIO_BASE__INST0_SEG5                      0x04040000

#define NBIO_BASE__INST1_SEG0                      0
#define NBIO_BASE__INST1_SEG1                      0
#define NBIO_BASE__INST1_SEG2                      0
#define NBIO_BASE__INST1_SEG3                      0
#define NBIO_BASE__INST1_SEG4                      0
#define NBIO_BASE__INST1_SEG5                      0

#define NBIO_BASE__INST2_SEG0                      0
#define NBIO_BASE__INST2_SEG1                      0
#define NBIO_BASE__INST2_SEG2                      0
#define NBIO_BASE__INST2_SEG3                      0
#define NBIO_BASE__INST2_SEG4                      0
#define NBIO_BASE__INST2_SEG5                      0

#define NBIO_BASE__INST3_SEG0                      0
#define NBIO_BASE__INST3_SEG1                      0
#define NBIO_BASE__INST3_SEG2                      0
#define NBIO_BASE__INST3_SEG3                      0
#define NBIO_BASE__INST3_SEG4                      0
#define NBIO_BASE__INST3_SEG5                      0

#define NBIO_BASE__INST4_SEG0                      0
#define NBIO_BASE__INST4_SEG1                      0
#define NBIO_BASE__INST4_SEG2                      0
#define NBIO_BASE__INST4_SEG3                      0
#define NBIO_BASE__INST4_SEG4                      0
#define NBIO_BASE__INST4_SEG5                      0

#define NBIO_BASE__INST5_SEG0                      0
#define NBIO_BASE__INST5_SEG1                      0
#define NBIO_BASE__INST5_SEG2                      0
#define NBIO_BASE__INST5_SEG3                      0
#define NBIO_BASE__INST5_SEG4                      0
#define NBIO_BASE__INST5_SEG5                      0

#define NBIO_BASE__INST6_SEG0                      0
#define NBIO_BASE__INST6_SEG1                      0
#define NBIO_BASE__INST6_SEG2                      0
#define NBIO_BASE__INST6_SEG3                      0
#define NBIO_BASE__INST6_SEG4                      0
#define NBIO_BASE__INST6_SEG5                      0

#define OSSSYS_BASE__INST0_SEG0                    0x000010A0
#define OSSSYS_BASE__INST0_SEG1                    0x0240A000
#define OSSSYS_BASE__INST0_SEG2                    0
#define OSSSYS_BASE__INST0_SEG3                    0
#define OSSSYS_BASE__INST0_SEG4                    0
#define OSSSYS_BASE__INST0_SEG5                    0

#define OSSSYS_BASE__INST1_SEG0                    0
#define OSSSYS_BASE__INST1_SEG1                    0
#define OSSSYS_BASE__INST1_SEG2                    0
#define OSSSYS_BASE__INST1_SEG3                    0
#define OSSSYS_BASE__INST1_SEG4                    0
#define OSSSYS_BASE__INST1_SEG5                    0

#define OSSSYS_BASE__INST2_SEG0                    0
#define OSSSYS_BASE__INST2_SEG1                    0
#define OSSSYS_BASE__INST2_SEG2                    0
#define OSSSYS_BASE__INST2_SEG3                    0
#define OSSSYS_BASE__INST2_SEG4                    0
#define OSSSYS_BASE__INST2_SEG5                    0

#define OSSSYS_BASE__INST3_SEG0                    0
#define OSSSYS_BASE__INST3_SEG1                    0
#define OSSSYS_BASE__INST3_SEG2                    0
#define OSSSYS_BASE__INST3_SEG3                    0
#define OSSSYS_BASE__INST3_SEG4                    0
#define OSSSYS_BASE__INST3_SEG5                    0

#define OSSSYS_BASE__INST4_SEG0                    0
#define OSSSYS_BASE__INST4_SEG1                    0
#define OSSSYS_BASE__INST4_SEG2                    0
#define OSSSYS_BASE__INST4_SEG3                    0
#define OSSSYS_BASE__INST4_SEG4                    0
#define OSSSYS_BASE__INST4_SEG5                    0

#define OSSSYS_BASE__INST5_SEG0                    0
#define OSSSYS_BASE__INST5_SEG1                    0
#define OSSSYS_BASE__INST5_SEG2                    0
#define OSSSYS_BASE__INST5_SEG3                    0
#define OSSSYS_BASE__INST5_SEG4                    0
#define OSSSYS_BASE__INST5_SEG5                    0

#define OSSSYS_BASE__INST6_SEG0                    0
#define OSSSYS_BASE__INST6_SEG1                    0
#define OSSSYS_BASE__INST6_SEG2                    0
#define OSSSYS_BASE__INST6_SEG3                    0
#define OSSSYS_BASE__INST6_SEG4                    0
#define OSSSYS_BASE__INST6_SEG5                    0

#define SMUIO_BASE__INST0_SEG0                     0x00016800
#define SMUIO_BASE__INST0_SEG1                     0x00016A00
#define SMUIO_BASE__INST0_SEG2                     0x00440000
#define SMUIO_BASE__INST0_SEG3                     0x02401000
#define SMUIO_BASE__INST0_SEG4                     0
#define SMUIO_BASE__INST0_SEG5                     0

#define SMUIO_BASE__INST1_SEG0                     0
#define SMUIO_BASE__INST1_SEG1                     0
#define SMUIO_BASE__INST1_SEG2                     0
#define SMUIO_BASE__INST1_SEG3                     0
#define SMUIO_BASE__INST1_SEG4                     0
#define SMUIO_BASE__INST1_SEG5                     0

#define SMUIO_BASE__INST2_SEG0                     0
#define SMUIO_BASE__INST2_SEG1                     0
#define SMUIO_BASE__INST2_SEG2                     0
#define SMUIO_BASE__INST2_SEG3                     0
#define SMUIO_BASE__INST2_SEG4                     0
#define SMUIO_BASE__INST2_SEG5                     0

#define SMUIO_BASE__INST3_SEG0                     0
#define SMUIO_BASE__INST3_SEG1                     0
#define SMUIO_BASE__INST3_SEG2                     0
#define SMUIO_BASE__INST3_SEG3                     0
#define SMUIO_BASE__INST3_SEG4                     0
#define SMUIO_BASE__INST3_SEG5                     0

#define SMUIO_BASE__INST4_SEG0                     0
#define SMUIO_BASE__INST4_SEG1                     0
#define SMUIO_BASE__INST4_SEG2                     0
#define SMUIO_BASE__INST4_SEG3                     0
#define SMUIO_BASE__INST4_SEG4                     0
#define SMUIO_BASE__INST4_SEG5                     0

#define SMUIO_BASE__INST5_SEG0                     0
#define SMUIO_BASE__INST5_SEG1                     0
#define SMUIO_BASE__INST5_SEG2                     0
#define SMUIO_BASE__INST5_SEG3                     0
#define SMUIO_BASE__INST5_SEG4                     0
#define SMUIO_BASE__INST5_SEG5                     0

#define SMUIO_BASE__INST6_SEG0                     0
#define SMUIO_BASE__INST6_SEG1                     0
#define SMUIO_BASE__INST6_SEG2                     0
#define SMUIO_BASE__INST6_SEG3                     0
#define SMUIO_BASE__INST6_SEG4                     0
#define SMUIO_BASE__INST6_SEG5                     0

#define THM_BASE__INST0_SEG0                       0x00016600
#define THM_BASE__INST0_SEG1                       0x02400C00
#define THM_BASE__INST0_SEG2                       0
#define THM_BASE__INST0_SEG3                       0
#define THM_BASE__INST0_SEG4                       0
#define THM_BASE__INST0_SEG5                       0

#define THM_BASE__INST1_SEG0                       0
#define THM_BASE__INST1_SEG1                       0
#define THM_BASE__INST1_SEG2                       0
#define THM_BASE__INST1_SEG3                       0
#define THM_BASE__INST1_SEG4                       0
#define THM_BASE__INST1_SEG5                       0

#define THM_BASE__INST2_SEG0                       0
#define THM_BASE__INST2_SEG1                       0
#define THM_BASE__INST2_SEG2                       0
#define THM_BASE__INST2_SEG3                       0
#define THM_BASE__INST2_SEG4                       0
#define THM_BASE__INST2_SEG5                       0

#define THM_BASE__INST3_SEG0                       0
#define THM_BASE__INST3_SEG1                       0
#define THM_BASE__INST3_SEG2                       0
#define THM_BASE__INST3_SEG3                       0
#define THM_BASE__INST3_SEG4                       0
#define THM_BASE__INST3_SEG5                       0

#define THM_BASE__INST4_SEG0                       0
#define THM_BASE__INST4_SEG1                       0
#define THM_BASE__INST4_SEG2                       0
#define THM_BASE__INST4_SEG3                       0
#define THM_BASE__INST4_SEG4                       0
#define THM_BASE__INST4_SEG5                       0

#define THM_BASE__INST5_SEG0                       0
#define THM_BASE__INST5_SEG1                       0
#define THM_BASE__INST5_SEG2                       0
#define THM_BASE__INST5_SEG3                       0
#define THM_BASE__INST5_SEG4                       0
#define THM_BASE__INST5_SEG5                       0

#define THM_BASE__INST6_SEG0                       0
#define THM_BASE__INST6_SEG1                       0
#define THM_BASE__INST6_SEG2                       0
#define THM_BASE__INST6_SEG3                       0
#define THM_BASE__INST6_SEG4                       0
#define THM_BASE__INST6_SEG5                       0

#define UMC_BASE__INST0_SEG0                       0x00014000
#define UMC_BASE__INST0_SEG1                       0x02425800
#define UMC_BASE__INST0_SEG2                       0
#define UMC_BASE__INST0_SEG3                       0
#define UMC_BASE__INST0_SEG4                       0
#define UMC_BASE__INST0_SEG5                       0

#define UMC_BASE__INST1_SEG0                       0x00054000
#define UMC_BASE__INST1_SEG1                       0x02425C00
#define UMC_BASE__INST1_SEG2                       0
#define UMC_BASE__INST1_SEG3                       0
#define UMC_BASE__INST1_SEG4                       0
#define UMC_BASE__INST1_SEG5                       0

#define UMC_BASE__INST2_SEG0                       0x00094000
#define UMC_BASE__INST2_SEG1                       0x02426000
#define UMC_BASE__INST2_SEG2                       0
#define UMC_BASE__INST2_SEG3                       0
#define UMC_BASE__INST2_SEG4                       0
#define UMC_BASE__INST2_SEG5                       0

#define UMC_BASE__INST3_SEG0                       0x000D4000
#define UMC_BASE__INST3_SEG1                       0x02426400
#define UMC_BASE__INST3_SEG2                       0
#define UMC_BASE__INST3_SEG3                       0
#define UMC_BASE__INST3_SEG4                       0
#define UMC_BASE__INST3_SEG5                       0

#define UMC_BASE__INST4_SEG0                       0
#define UMC_BASE__INST4_SEG1                       0
#define UMC_BASE__INST4_SEG2                       0
#define UMC_BASE__INST4_SEG3                       0
#define UMC_BASE__INST4_SEG4                       0
#define UMC_BASE__INST4_SEG5                       0

#define UMC_BASE__INST5_SEG0                       0
#define UMC_BASE__INST5_SEG1                       0
#define UMC_BASE__INST5_SEG2                       0
#define UMC_BASE__INST5_SEG3                       0
#define UMC_BASE__INST5_SEG4                       0
#define UMC_BASE__INST5_SEG5                       0

#define UMC_BASE__INST6_SEG0                       0
#define UMC_BASE__INST6_SEG1                       0
#define UMC_BASE__INST6_SEG2                       0
#define UMC_BASE__INST6_SEG3                       0
#define UMC_BASE__INST6_SEG4                       0
#define UMC_BASE__INST6_SEG5                       0

#define VCN0_BASE__INST0_SEG0                      0x00007800
#define VCN0_BASE__INST0_SEG1                      0x00007E00
#define VCN0_BASE__INST0_SEG2                      0x02403000
#define VCN0_BASE__INST0_SEG3                      0
#define VCN0_BASE__INST0_SEG4                      0
#define VCN0_BASE__INST0_SEG5                      0

#define VCN0_BASE__INST1_SEG0                      0
#define VCN0_BASE__INST1_SEG1                      0
#define VCN0_BASE__INST1_SEG2                      0
#define VCN0_BASE__INST1_SEG3                      0
#define VCN0_BASE__INST1_SEG4                      0
#define VCN0_BASE__INST1_SEG5                      0

#define VCN0_BASE__INST2_SEG0                      0
#define VCN0_BASE__INST2_SEG1                      0
#define VCN0_BASE__INST2_SEG2                      0
#define VCN0_BASE__INST2_SEG3                      0
#define VCN0_BASE__INST2_SEG4                      0
#define VCN0_BASE__INST2_SEG5                      0

#define VCN0_BASE__INST3_SEG0                      0
#define VCN0_BASE__INST3_SEG1                      0
#define VCN0_BASE__INST3_SEG2                      0
#define VCN0_BASE__INST3_SEG3                      0
#define VCN0_BASE__INST3_SEG4                      0
#define VCN0_BASE__INST3_SEG5                      0

#define VCN0_BASE__INST4_SEG0                      0
#define VCN0_BASE__INST4_SEG1                      0
#define VCN0_BASE__INST4_SEG2                      0
#define VCN0_BASE__INST4_SEG3                      0
#define VCN0_BASE__INST4_SEG4                      0
#define VCN0_BASE__INST4_SEG5                      0

#define VCN0_BASE__INST5_SEG0                      0
#define VCN0_BASE__INST5_SEG1                      0
#define VCN0_BASE__INST5_SEG2                      0
#define VCN0_BASE__INST5_SEG3                      0
#define VCN0_BASE__INST5_SEG4                      0
#define VCN0_BASE__INST5_SEG5                      0

#define VCN0_BASE__INST6_SEG0                      0
#define VCN0_BASE__INST6_SEG1                      0
#define VCN0_BASE__INST6_SEG2                      0
#define VCN0_BASE__INST6_SEG3                      0
#define VCN0_BASE__INST6_SEG4                      0
#define VCN0_BASE__INST6_SEG5                      0

#endif
