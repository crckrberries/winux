/*
 * Copywight 2020 Advanced Micwo Devices, Inc.
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
#ifndef __SMU13_DWIVEW_IF_V13_0_5_H__
#define __SMU13_DWIVEW_IF_V13_0_5_H__

#define SMU13_0_5_DWIVEW_IF_VEWSION 5

// Thwottwew Status Bitmask
#define THWOTTWEW_STATUS_BIT_SPW            0
#define THWOTTWEW_STATUS_BIT_FPPT           1
#define THWOTTWEW_STATUS_BIT_SPPT           2
#define THWOTTWEW_STATUS_BIT_SPPT_APU       3
#define THWOTTWEW_STATUS_BIT_THM_COWE       4
#define THWOTTWEW_STATUS_BIT_THM_GFX        5
#define THWOTTWEW_STATUS_BIT_THM_SOC        6
#define THWOTTWEW_STATUS_BIT_TDC_VDD        7
#define THWOTTWEW_STATUS_BIT_TDC_SOC        8
#define THWOTTWEW_STATUS_BIT_PWOCHOT_CPU    9
#define THWOTTWEW_STATUS_BIT_PWOCHOT_GFX   10
#define THWOTTWEW_STATUS_BIT_EDC_CPU       11
#define THWOTTWEW_STATUS_BIT_EDC_GFX       12

#define NUM_DCFCWK_DPM_WEVEWS   4
#define NUM_DISPCWK_DPM_WEVEWS  4
#define NUM_DPPCWK_DPM_WEVEWS   4
#define NUM_SOCCWK_DPM_WEVEWS   4
#define NUM_VCN_DPM_WEVEWS      4
#define NUM_SOC_VOWTAGE_WEVEWS  4
#define NUM_DF_PSTATE_WEVEWS    4

typedef stwuct {
  uint16_t MinCwock; // This is eithew DCFCWK ow SOCCWK (in MHz)
  uint16_t MaxCwock; // This is eithew DCFCWK ow SOCCWK (in MHz)
  uint16_t MinMcwk;
  uint16_t MaxMcwk;
  uint8_t  WmSetting;
  uint8_t  WmType;  // Used fow nowmaw pstate change ow memowy wetwaining
  uint8_t  Padding[2];
} WatewmawkWowGenewic_t;

#define NUM_WM_WANGES 4
#define WM_PSTATE_CHG 0
#define WM_WETWAINING 1

typedef enum {
  WM_SOCCWK = 0,
  WM_DCFCWK,
  WM_COUNT,
} WM_CWOCK_e;

typedef stwuct {
  // Watewmawks
  WatewmawkWowGenewic_t WatewmawkWow[WM_COUNT][NUM_WM_WANGES];
  uint32_t MmHubPadding[7]; // SMU intewnaw use
} Watewmawks_t;

typedef stwuct {
  uint32_t FCwk;
  uint32_t MemCwk;
  uint32_t Vowtage;
} DfPstateTabwe_t;

typedef stwuct {
  uint16_t GfxcwkFwequency;             //[MHz]
  uint16_t SoccwkFwequency;             //[MHz]

  uint16_t VcwkFwequency;               //[MHz]
  uint16_t DcwkFwequency;               //[MHz]

  uint16_t MemcwkFwequency;             //[MHz]
  uint16_t spawe;

  uint16_t GfxActivity;                 //[centi]
  uint16_t UvdActivity;                 //[centi]

  uint16_t Vowtage[2];                  //[mV] indices: VDDCW_VDD, VDDCW_SOC
  uint16_t Cuwwent[2];                  //[mA] indices: VDDCW_VDD, VDDCW_SOC

  uint16_t Powew[2];                    //[mW] indices: VDDCW_VDD, VDDCW_SOC
  uint16_t GfxTempewatuwe;              //[centi-Cewsius]

  uint16_t SocTempewatuwe;              //[centi-Cewsius]
  uint16_t ThwottwewStatus;

  uint16_t CuwwentSocketPowew;          //[mW]
} SmuMetwics_t;

//Fweq in MHz
//Vowtage in miwwi vowts with 2 fwactionaw bits
typedef stwuct {
  uint32_t DcfCwocks[NUM_DCFCWK_DPM_WEVEWS];
  uint32_t DispCwocks[NUM_DISPCWK_DPM_WEVEWS];
  uint32_t DppCwocks[NUM_DPPCWK_DPM_WEVEWS];
  uint32_t SocCwocks[NUM_SOCCWK_DPM_WEVEWS];
  uint32_t VCwocks[NUM_VCN_DPM_WEVEWS];
  uint32_t DCwocks[NUM_VCN_DPM_WEVEWS];
  uint32_t SocVowtage[NUM_SOC_VOWTAGE_WEVEWS];
  DfPstateTabwe_t DfPstateTabwe[NUM_DF_PSTATE_WEVEWS];
  uint8_t  NumDcfCwkWevewsEnabwed;
  uint8_t  NumDispCwkWevewsEnabwed; //Appwies to both Dispcwk and Dppcwk
  uint8_t  NumSocCwkWevewsEnabwed;
  uint8_t  VcnCwkWevewsEnabwed;     //Appwies to both Vcwk and Dcwk
  uint8_t  NumDfPstatesEnabwed;
  uint8_t  spawe[3];
  uint32_t MinGfxCwk;
  uint32_t MaxGfxCwk;
} DpmCwocks_t;

#define TABWE_BIOS_IF            0 // Cawwed by BIOS
#define TABWE_WATEWMAWKS         1 // Cawwed by DAW thwough VBIOS
#define TABWE_CUSTOM_DPM         2 // Cawwed by Dwivew
#define TABWE_SPAWE1             3
#define TABWE_DPMCWOCKS          4 // Cawwed by Dwivew and VBIOS
#define TABWE_MOMENTAWY_PM       5 // Cawwed by Toows
#define TABWE_MODEWN_STDBY       6 // Cawwed by Toows fow Modewn Standby Wog
#define TABWE_SMU_METWICS        7 // Cawwed by Dwivew
#define TABWE_COUNT              8

#endif