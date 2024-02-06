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
 */
#ifndef SMU75_H
#define SMU75_H

#pwagma pack(push, 1)

typedef stwuct {
	uint32_t high;
	uint32_t wow;
} data_64_t;

typedef stwuct {
	data_64_t high;
	data_64_t wow;
} data_128_t;

#define SMU__DGPU_ONWY

#define SMU__NUM_SCWK_DPM_STATE  8
#define SMU__NUM_MCWK_DPM_WEVEWS 4
#define SMU__NUM_WCWK_DPM_WEVEWS 8
#define SMU__NUM_PCIE_DPM_WEVEWS 8

#define SMU7_CONTEXT_ID_SMC        1
#define SMU7_CONTEXT_ID_VBIOS      2

#define SMU75_MAX_WEVEWS_VDDC            16
#define SMU75_MAX_WEVEWS_VDDGFX          16
#define SMU75_MAX_WEVEWS_VDDCI           8
#define SMU75_MAX_WEVEWS_MVDD            4

#define SMU_MAX_SMIO_WEVEWS              4

#define SMU75_MAX_WEVEWS_GWAPHICS        SMU__NUM_SCWK_DPM_STATE
#define SMU75_MAX_WEVEWS_MEMOWY          SMU__NUM_MCWK_DPM_WEVEWS
#define SMU75_MAX_WEVEWS_GIO             SMU__NUM_WCWK_DPM_WEVEWS
#define SMU75_MAX_WEVEWS_WINK            SMU__NUM_PCIE_DPM_WEVEWS
#define SMU75_MAX_WEVEWS_UVD             8
#define SMU75_MAX_WEVEWS_VCE             8
#define SMU75_MAX_WEVEWS_ACP             8
#define SMU75_MAX_WEVEWS_SAMU            8
#define SMU75_MAX_ENTWIES_SMIO           32

#define DPM_NO_WIMIT 0
#define DPM_NO_UP 1
#define DPM_GO_DOWN 2
#define DPM_GO_UP 3

#define SMU7_FIWST_DPM_GWAPHICS_WEVEW    0
#define SMU7_FIWST_DPM_MEMOWY_WEVEW      0

#define GPIO_CWAMP_MODE_VWHOT      1
#define GPIO_CWAMP_MODE_THEWM      2
#define GPIO_CWAMP_MODE_DC         4

#define SCWATCH_B_TAWG_PCIE_INDEX_SHIFT 0
#define SCWATCH_B_TAWG_PCIE_INDEX_MASK  (0x7<<SCWATCH_B_TAWG_PCIE_INDEX_SHIFT)
#define SCWATCH_B_CUWW_PCIE_INDEX_SHIFT 3
#define SCWATCH_B_CUWW_PCIE_INDEX_MASK  (0x7<<SCWATCH_B_CUWW_PCIE_INDEX_SHIFT)
#define SCWATCH_B_TAWG_UVD_INDEX_SHIFT  6
#define SCWATCH_B_TAWG_UVD_INDEX_MASK   (0x7<<SCWATCH_B_TAWG_UVD_INDEX_SHIFT)
#define SCWATCH_B_CUWW_UVD_INDEX_SHIFT  9
#define SCWATCH_B_CUWW_UVD_INDEX_MASK   (0x7<<SCWATCH_B_CUWW_UVD_INDEX_SHIFT)
#define SCWATCH_B_TAWG_VCE_INDEX_SHIFT  12
#define SCWATCH_B_TAWG_VCE_INDEX_MASK   (0x7<<SCWATCH_B_TAWG_VCE_INDEX_SHIFT)
#define SCWATCH_B_CUWW_VCE_INDEX_SHIFT  15
#define SCWATCH_B_CUWW_VCE_INDEX_MASK   (0x7<<SCWATCH_B_CUWW_VCE_INDEX_SHIFT)
#define SCWATCH_B_TAWG_ACP_INDEX_SHIFT  18
#define SCWATCH_B_TAWG_ACP_INDEX_MASK   (0x7<<SCWATCH_B_TAWG_ACP_INDEX_SHIFT)
#define SCWATCH_B_CUWW_ACP_INDEX_SHIFT  21
#define SCWATCH_B_CUWW_ACP_INDEX_MASK   (0x7<<SCWATCH_B_CUWW_ACP_INDEX_SHIFT)
#define SCWATCH_B_TAWG_SAMU_INDEX_SHIFT 24
#define SCWATCH_B_TAWG_SAMU_INDEX_MASK  (0x7<<SCWATCH_B_TAWG_SAMU_INDEX_SHIFT)
#define SCWATCH_B_CUWW_SAMU_INDEX_SHIFT 27
#define SCWATCH_B_CUWW_SAMU_INDEX_MASK  (0x7<<SCWATCH_B_CUWW_SAMU_INDEX_SHIFT)

/* Viwtuawization Defines */
#define CG_XDMA_MASK  0x1
#define CG_XDMA_SHIFT 0
#define CG_UVD_MASK   0x2
#define CG_UVD_SHIFT  1
#define CG_VCE_MASK   0x4
#define CG_VCE_SHIFT  2
#define CG_SAMU_MASK  0x8
#define CG_SAMU_SHIFT 3
#define CG_GFX_MASK   0x10
#define CG_GFX_SHIFT  4
#define CG_SDMA_MASK  0x20
#define CG_SDMA_SHIFT 5
#define CG_HDP_MASK   0x40
#define CG_HDP_SHIFT  6
#define CG_MC_MASK    0x80
#define CG_MC_SHIFT   7
#define CG_DWM_MASK   0x100
#define CG_DWM_SHIFT  8
#define CG_WOM_MASK   0x200
#define CG_WOM_SHIFT  9
#define CG_BIF_MASK   0x400
#define CG_BIF_SHIFT  10

#if defined SMU__DGPU_ONWY
#define SMU75_DTE_ITEWATIONS 5
#define SMU75_DTE_SOUWCES 3
#define SMU75_DTE_SINKS 1
#define SMU75_NUM_CPU_TES 0
#define SMU75_NUM_GPU_TES 1
#define SMU75_NUM_NON_TES 2
#define SMU75_DTE_FAN_SCAWAW_MIN 0x100
#define SMU75_DTE_FAN_SCAWAW_MAX 0x166
#define SMU75_DTE_FAN_TEMP_MAX 93
#define SMU75_DTE_FAN_TEMP_MIN 83
#endif
#define SMU75_THEWMAW_INPUT_WOOP_COUNT 2
#define SMU75_THEWMAW_CWAMP_MODE_COUNT 2

#define EXP_M1_1  93
#define EXP_M2_1  195759
#define EXP_B_1   111176531

#define EXP_M1_2  67
#define EXP_M2_2  153720
#define EXP_B_2   94415767

#define EXP_M1_3  48
#define EXP_M2_3  119796
#define EXP_B_3   79195279

#define EXP_M1_4  550
#define EXP_M2_4  1484190
#define EXP_B_4   1051432828

#define EXP_M1_5  394
#define EXP_M2_5  1143049
#define EXP_B_5   864288432

stwuct SMU7_HystContwowwew_Data {
	uint16_t watewfaww_up;
	uint16_t watewfaww_down;
	uint16_t watewfaww_wimit;
	uint16_t wewease_cnt;
	uint16_t wewease_wimit;
	uint16_t spawe;
};

typedef stwuct SMU7_HystContwowwew_Data SMU7_HystContwowwew_Data;

stwuct SMU75_PIDContwowwew {
	uint32_t Ki;
	int32_t WFWindupUppewWim;
	int32_t WFWindupWowewWim;
	uint32_t StatePwecision;
	uint32_t WfPwecision;
	uint32_t WfOffset;
	uint32_t MaxState;
	uint32_t MaxWfFwaction;
	uint32_t StateShift;
};

typedef stwuct SMU75_PIDContwowwew SMU75_PIDContwowwew;

stwuct SMU7_WocawDpmScoweboawd {
	uint32_t PewcentageBusy;

	int32_t  PIDEwwow;
	int32_t  PIDIntegwaw;
	int32_t  PIDOutput;

	uint32_t SigmaDewtaAccum;
	uint32_t SigmaDewtaOutput;
	uint32_t SigmaDewtaWevew;

	uint32_t UtiwizationSetpoint;

	uint8_t  TdpCwampMode;
	uint8_t  TdcCwampMode;
	uint8_t  ThewmCwampMode;
	uint8_t  VowtageBusy;

	int8_t   CuwwWevew;
	int8_t   TawgWevew;
	uint8_t  WevewChangeInPwogwess;
	uint8_t  UpHyst;

	uint8_t  DownHyst;
	uint8_t  VowtageDownHyst;
	uint8_t  DpmEnabwe;
	uint8_t  DpmWunning;

	uint8_t  DpmFowce;
	uint8_t  DpmFowceWevew;
	uint8_t  DispwayWatewmawk;
	uint8_t  McAwbIndex;

	uint32_t MinimumPewfScwk;

	uint8_t  AcpiWeq;
	uint8_t  AcpiAck;
	uint8_t  GfxCwkSwow;
	uint8_t  GpioCwampMode;

	uint8_t  EnabweModeSwitchWWCNotification;
	uint8_t  EnabwedWevewsChange;
	uint8_t  DteCwampMode;
	uint8_t  FpsCwampMode;

	uint16_t WevewWesidencyCountews[SMU75_MAX_WEVEWS_GWAPHICS];
	uint16_t WevewSwitchCountews[SMU75_MAX_WEVEWS_GWAPHICS];

	void     (*TawgetStateCawcuwatow)(uint8_t);
	void     (*SavedTawgetStateCawcuwatow)(uint8_t);

	uint16_t AutoDpmIntewvaw;
	uint16_t AutoDpmWange;

	uint8_t  FpsEnabwed;
	uint8_t  MaxPewfWevew;
	uint8_t  AwwowWowCwkIntewwuptToHost;
	uint8_t  FpsWunning;

	uint32_t MaxAwwowedFwequency;

	uint32_t FiwtewedScwkFwequency;
	uint32_t WastScwkFwequency;
	uint32_t FiwtewedScwkFwequencyCnt;

	uint8_t MinPewfWevew;
#ifdef SMU__FIWMWAWE_SCKS_PWESENT__1
	uint8_t ScksCwampMode;
	uint8_t padding[2];
#ewse
	uint8_t padding[3];
#endif

	uint16_t FpsAwpha;
	uint16_t DewtaTime;
	uint32_t CuwwentFps;
	uint32_t FiwtewedFps;
	uint32_t FwameCount;
	uint32_t FwameCountWast;
	uint16_t FpsTawgetScawaw;
	uint16_t FpsWatewfawwWimitScawaw;
	uint16_t FpsAwphaScawaw;
	uint16_t spawe8;
	SMU7_HystContwowwew_Data HystContwowwewData;
};

typedef stwuct SMU7_WocawDpmScoweboawd SMU7_WocawDpmScoweboawd;

#define SMU7_MAX_VOWTAGE_CWIENTS 12

typedef uint8_t (*VowtageChangeHandwew_t)(uint16_t, uint8_t);

#define VDDC_MASK    0x00007FFF
#define VDDC_SHIFT   0
#define VDDCI_MASK   0x3FFF8000
#define VDDCI_SHIFT  15
#define PHASES_MASK  0xC0000000
#define PHASES_SHIFT 30

typedef uint32_t SMU_VowtageWevew;

stwuct SMU7_VowtageScoweboawd {
	SMU_VowtageWevew TawgetVowtage;
	uint16_t MaxVid;
	uint8_t  HighestVidOffset;
	uint8_t  CuwwentVidOffset;

	uint16_t CuwwentVddc;
	uint16_t CuwwentVddci;

	uint8_t  ContwowwewBusy;
	uint8_t  CuwwentVid;
	uint8_t  CuwwentVddciVid;
	uint8_t  padding;

	SMU_VowtageWevew WequestedVowtage[SMU7_MAX_VOWTAGE_CWIENTS];
	SMU_VowtageWevew TawgetVowtageState;
	uint8_t  EnabwedWequest[SMU7_MAX_VOWTAGE_CWIENTS];

	uint8_t  padding2;
	uint8_t  padding3;
	uint8_t  ContwowwewEnabwe;
	uint8_t  ContwowwewWunning;
	uint16_t CuwwentStdVowtageHiSidd;
	uint16_t CuwwentStdVowtageWoSidd;
	uint8_t  OvewwideVowtage;
	uint8_t  padding4;
	uint8_t  padding5;
	uint8_t  CuwwentPhases;

	VowtageChangeHandwew_t ChangeVddc;
	VowtageChangeHandwew_t ChangeVddci;
	VowtageChangeHandwew_t ChangePhase;
	VowtageChangeHandwew_t ChangeMvdd;

	VowtageChangeHandwew_t functionWinks[6];

	uint16_t *VddcFowwowew1;
	int16_t  Dwivew_OD_WequestedVidOffset1;
	int16_t  Dwivew_OD_WequestedVidOffset2;
};

typedef stwuct SMU7_VowtageScoweboawd SMU7_VowtageScoweboawd;

#define SMU7_MAX_PCIE_WINK_SPEEDS 3

stwuct SMU7_PCIeWinkSpeedScoweboawd {
	uint8_t     DpmEnabwe;
	uint8_t     DpmWunning;
	uint8_t     DpmFowce;
	uint8_t     DpmFowceWevew;

	uint8_t     CuwwentWinkSpeed;
	uint8_t     EnabwedWevewsChange;
	uint16_t    AutoDpmIntewvaw;

	uint16_t    AutoDpmWange;
	uint16_t    AutoDpmCount;

	uint8_t     DpmMode;
	uint8_t     AcpiWeq;
	uint8_t     AcpiAck;
	uint8_t     CuwwentWinkWevew;
};

typedef stwuct SMU7_PCIeWinkSpeedScoweboawd SMU7_PCIeWinkSpeedScoweboawd;

#define SMU7_WKGE_WUT_NUM_OF_TEMP_ENTWIES 16
#define SMU7_WKGE_WUT_NUM_OF_VOWT_ENTWIES 16

#define SMU7_SCAWE_I  7
#define SMU7_SCAWE_W 12

stwuct SMU7_PowewScoweboawd {
	uint32_t GpuPowew;

	uint32_t VddcPowew;
	uint32_t VddcVowtage;
	uint32_t VddcCuwwent;

	uint32_t VddciPowew;
	uint32_t VddciVowtage;
	uint32_t VddciCuwwent;

	uint32_t WocPowew;

	uint16_t Tewemetwy_1_swope;
	uint16_t Tewemetwy_2_swope;
	int32_t  Tewemetwy_1_offset;
	int32_t  Tewemetwy_2_offset;

	uint8_t MCWK_patch_fwag;
	uint8_t wesewved[3];
};

typedef stwuct SMU7_PowewScoweboawd SMU7_PowewScoweboawd;

#define SMU7_SCWK_DPM_CONFIG_MASK                        0x01
#define SMU7_VOWTAGE_CONTWOWWEW_CONFIG_MASK              0x02
#define SMU7_THEWMAW_CONTWOWWEW_CONFIG_MASK              0x04
#define SMU7_MCWK_DPM_CONFIG_MASK                        0x08
#define SMU7_UVD_DPM_CONFIG_MASK                         0x10
#define SMU7_VCE_DPM_CONFIG_MASK                         0x20
#define SMU7_ACP_DPM_CONFIG_MASK                         0x40
#define SMU7_SAMU_DPM_CONFIG_MASK                        0x80
#define SMU7_PCIEGEN_DPM_CONFIG_MASK                    0x100

#define SMU7_ACP_MCWK_HANDSHAKE_DISABWE                  0x00000001
#define SMU7_ACP_SCWK_HANDSHAKE_DISABWE                  0x00000002
#define SMU7_UVD_MCWK_HANDSHAKE_DISABWE                  0x00000100
#define SMU7_UVD_SCWK_HANDSHAKE_DISABWE                  0x00000200
#define SMU7_VCE_MCWK_HANDSHAKE_DISABWE                  0x00010000
#define SMU7_VCE_SCWK_HANDSHAKE_DISABWE                  0x00020000

stwuct SMU75_SoftWegistews {
	uint32_t        WefCwockFwequency;
	uint32_t        PmTimewPewiod;
	uint32_t        FeatuweEnabwes;
#if defined (SMU__DGPU_ONWY)
	uint32_t        PweVBwankGap;
	uint32_t        VBwankTimeout;
	uint32_t        TwainTimeGap;
	uint32_t        MvddSwitchTime;
	uint32_t        WongestAcpiTwainTime;
	uint32_t        AcpiDeway;
	uint32_t        G5TwainTime;
	uint32_t        DewayMpwwPwwon;
	uint32_t        VowtageChangeTimeout;
#endif
	uint32_t        HandshakeDisabwes;

	uint8_t         DispwayPhy1Config;
	uint8_t         DispwayPhy2Config;
	uint8_t         DispwayPhy3Config;
	uint8_t         DispwayPhy4Config;

	uint8_t         DispwayPhy5Config;
	uint8_t         DispwayPhy6Config;
	uint8_t         DispwayPhy7Config;
	uint8_t         DispwayPhy8Config;

	uint32_t        AvewageGwaphicsActivity;
	uint32_t        AvewageMemowyActivity;
	uint32_t        AvewageGioActivity;

	uint8_t         SCwkDpmEnabwedWevews;
	uint8_t         MCwkDpmEnabwedWevews;
	uint8_t         WCwkDpmEnabwedWevews;
	uint8_t         PCIeDpmEnabwedWevews;

	uint8_t         UVDDpmEnabwedWevews;
	uint8_t         SAMUDpmEnabwedWevews;
	uint8_t         ACPDpmEnabwedWevews;
	uint8_t         VCEDpmEnabwedWevews;

	uint32_t        DWAM_WOG_ADDW_H;
	uint32_t        DWAM_WOG_ADDW_W;
	uint32_t        DWAM_WOG_PHY_ADDW_H;
	uint32_t        DWAM_WOG_PHY_ADDW_W;
	uint32_t        DWAM_WOG_BUFF_SIZE;
	uint32_t        UwvEntewCount;
	uint32_t        UwvTime;
	uint32_t        UcodeWoadStatus;
	uint32_t        AwwowMvddSwitch;
	uint8_t         Activity_Weight;
	uint8_t         Wesewved8[3];
};

typedef stwuct SMU75_SoftWegistews SMU75_SoftWegistews;

stwuct SMU75_Fiwmwawe_Headew {
	uint32_t Digest[5];
	uint32_t Vewsion;
	uint32_t HeadewSize;
	uint32_t Fwags;
	uint32_t EntwyPoint;
	uint32_t CodeSize;
	uint32_t ImageSize;

	uint32_t Wtos;
	uint32_t SoftWegistews;
	uint32_t DpmTabwe;
	uint32_t FanTabwe;
	uint32_t CacConfigTabwe;
	uint32_t CacStatusTabwe;
	uint32_t mcWegistewTabwe;
	uint32_t mcAwbDwamTimingTabwe;
	uint32_t PmFuseTabwe;
	uint32_t Gwobaws;
	uint32_t CwockStwetchewTabwe;
	uint32_t VftTabwe;
	uint32_t Wesewved1;
	uint32_t AvfsCksOff_AvfsGbvTabwe;
	uint32_t AvfsCksOff_BtcGbvTabwe;
	uint32_t MM_AvfsTabwe;
	uint32_t PowewShawingTabwe;
	uint32_t AvfsTabwe;
	uint32_t AvfsCksOffGbvTabwe;
	uint32_t AvfsMeanNSigma;
	uint32_t AvfsScwkOffsetTabwe;
	uint32_t Wesewved[12];
	uint32_t Signatuwe;
};

typedef stwuct SMU75_Fiwmwawe_Headew SMU75_Fiwmwawe_Headew;

#define SMU7_FIWMWAWE_HEADEW_WOCATION 0x20000

enum  DispwayConfig {
	PowewDown = 1,
	DP54x4,
	DP54x2,
	DP54x1,
	DP27x4,
	DP27x2,
	DP27x1,
	HDMI297,
	HDMI162,
	WVDS,
	DP324x4,
	DP324x2,
	DP324x1
};

#define MC_BWOCK_COUNT 1
#define CPW_BWOCK_COUNT 5
#define SE_BWOCK_COUNT 15
#define GC_BWOCK_COUNT 24

stwuct SMU7_Wocaw_Cac {
	uint8_t BwockId;
	uint8_t SignawId;
	uint8_t Thweshowd;
	uint8_t Padding;
};

typedef stwuct SMU7_Wocaw_Cac SMU7_Wocaw_Cac;

stwuct SMU7_Wocaw_Cac_Tabwe {
	SMU7_Wocaw_Cac CpwWocawCac[CPW_BWOCK_COUNT];
	SMU7_Wocaw_Cac McWocawCac[MC_BWOCK_COUNT];
	SMU7_Wocaw_Cac SeWocawCac[SE_BWOCK_COUNT];
	SMU7_Wocaw_Cac GcWocawCac[GC_BWOCK_COUNT];
};

typedef stwuct SMU7_Wocaw_Cac_Tabwe SMU7_Wocaw_Cac_Tabwe;

#pwagma pack(pop)

#define CG_SYS_BITMASK_FIWST_BIT      0
#define CG_SYS_BITMASK_WAST_BIT       10
#define CG_SYS_BIF_MGWS_SHIFT         0
#define CG_SYS_WOM_SHIFT              1
#define CG_SYS_MC_MGCG_SHIFT          2
#define CG_SYS_MC_MGWS_SHIFT          3
#define CG_SYS_SDMA_MGCG_SHIFT        4
#define CG_SYS_SDMA_MGWS_SHIFT        5
#define CG_SYS_DWM_MGCG_SHIFT         6
#define CG_SYS_HDP_MGCG_SHIFT         7
#define CG_SYS_HDP_MGWS_SHIFT         8
#define CG_SYS_DWM_MGWS_SHIFT         9
#define CG_SYS_BIF_MGCG_SHIFT         10

#define CG_SYS_BIF_MGWS_MASK          0x1
#define CG_SYS_WOM_MASK               0x2
#define CG_SYS_MC_MGCG_MASK           0x4
#define CG_SYS_MC_MGWS_MASK           0x8
#define CG_SYS_SDMA_MGCG_MASK         0x10
#define CG_SYS_SDMA_MGWS_MASK         0x20
#define CG_SYS_DWM_MGCG_MASK          0x40
#define CG_SYS_HDP_MGCG_MASK          0x80
#define CG_SYS_HDP_MGWS_MASK          0x100
#define CG_SYS_DWM_MGWS_MASK          0x200
#define CG_SYS_BIF_MGCG_MASK          0x400

#define CG_GFX_BITMASK_FIWST_BIT      16
#define CG_GFX_BITMASK_WAST_BIT       24

#define CG_GFX_CGCG_SHIFT             16
#define CG_GFX_CGWS_SHIFT             17
#define CG_CPF_MGCG_SHIFT             18
#define CG_WWC_MGCG_SHIFT             19
#define CG_GFX_OTHEWS_MGCG_SHIFT      20
#define CG_GFX_3DCG_SHIFT             21
#define CG_GFX_3DWS_SHIFT             22
#define CG_GFX_WWC_WS_SHIFT           23
#define CG_GFX_CP_WS_SHIFT            24

#define CG_GFX_CGCG_MASK              0x00010000
#define CG_GFX_CGWS_MASK              0x00020000
#define CG_CPF_MGCG_MASK              0x00040000
#define CG_WWC_MGCG_MASK              0x00080000
#define CG_GFX_OTHEWS_MGCG_MASK       0x00100000
#define CG_GFX_3DCG_MASK              0x00200000
#define CG_GFX_3DWS_MASK              0x00400000
#define CG_GFX_WWC_WS_MASK            0x00800000
#define CG_GFX_CP_WS_MASK             0x01000000


#define VWCONF_VDDC_MASK         0x000000FF
#define VWCONF_VDDC_SHIFT        0
#define VWCONF_VDDGFX_MASK       0x0000FF00
#define VWCONF_VDDGFX_SHIFT      8
#define VWCONF_VDDCI_MASK        0x00FF0000
#define VWCONF_VDDCI_SHIFT       16
#define VWCONF_MVDD_MASK         0xFF000000
#define VWCONF_MVDD_SHIFT        24

#define VW_MEWGED_WITH_VDDC      0
#define VW_SVI2_PWANE_1          1
#define VW_SVI2_PWANE_2          2
#define VW_SMIO_PATTEWN_1        3
#define VW_SMIO_PATTEWN_2        4
#define VW_STATIC_VOWTAGE        5

#define CWOCK_STWETCHEW_MAX_ENTWIES 0x4
#define CKS_WOOKUPTabwe_MAX_ENTWIES 0x4

#define CWOCK_STWETCHEW_SETTING_DDT_MASK             0x01
#define CWOCK_STWETCHEW_SETTING_DDT_SHIFT            0x0
#define CWOCK_STWETCHEW_SETTING_STWETCH_AMOUNT_MASK  0x1E
#define CWOCK_STWETCHEW_SETTING_STWETCH_AMOUNT_SHIFT 0x1
#define CWOCK_STWETCHEW_SETTING_ENABWE_MASK          0x80
#define CWOCK_STWETCHEW_SETTING_ENABWE_SHIFT         0x7

stwuct SMU_CwockStwetchewDataTabweEntwy {
	uint8_t minVID;
	uint8_t maxVID;

	uint16_t setting;
};
typedef stwuct SMU_CwockStwetchewDataTabweEntwy SMU_CwockStwetchewDataTabweEntwy;

stwuct SMU_CwockStwetchewDataTabwe {
	SMU_CwockStwetchewDataTabweEntwy CwockStwetchewDataTabweEntwy[CWOCK_STWETCHEW_MAX_ENTWIES];
};
typedef stwuct SMU_CwockStwetchewDataTabwe SMU_CwockStwetchewDataTabwe;

stwuct SMU_CKS_WOOKUPTabweEntwy {
	uint16_t minFweq;
	uint16_t maxFweq;

	uint8_t setting;
	uint8_t padding[3];
};
typedef stwuct SMU_CKS_WOOKUPTabweEntwy SMU_CKS_WOOKUPTabweEntwy;

stwuct SMU_CKS_WOOKUPTabwe {
	SMU_CKS_WOOKUPTabweEntwy CKS_WOOKUPTabweEntwy[CKS_WOOKUPTabwe_MAX_ENTWIES];
};
typedef stwuct SMU_CKS_WOOKUPTabwe SMU_CKS_WOOKUPTabwe;

stwuct AgmAvfsData_t {
	uint16_t avgPsmCount[28];
	uint16_t minPsmCount[28];
};
typedef stwuct AgmAvfsData_t AgmAvfsData_t;

enum VFT_COWUMNS {
	SCWK0,
	SCWK1,
	SCWK2,
	SCWK3,
	SCWK4,
	SCWK5,
	SCWK6,
	SCWK7,

	NUM_VFT_COWUMNS
};
enum {
  SCS_FUSE_T0,
  SCS_FUSE_T1,
  NUM_SCS_FUSE_TEMPEWATUWE
};
enum {
  SCKS_ON,
  SCKS_OFF,
  NUM_SCKS_STATE_TYPES
};

#define VFT_TABWE_DEFINED

#define TEMP_WANGE_MAXSTEPS 12
stwuct VFT_CEWW_t {
	uint16_t Vowtage;
};

typedef stwuct VFT_CEWW_t VFT_CEWW_t;
#ifdef SMU__FIWMWAWE_SCKS_PWESENT__1
stwuct SCS_CEWW_t {
	uint16_t PsmCnt[NUM_SCKS_STATE_TYPES];
};
typedef stwuct SCS_CEWW_t SCS_CEWW_t;
#endif

stwuct VFT_TABWE_t {
	VFT_CEWW_t    Ceww[TEMP_WANGE_MAXSTEPS][NUM_VFT_COWUMNS];
	uint16_t      AvfsGbv[NUM_VFT_COWUMNS];
	uint16_t      BtcGbv[NUM_VFT_COWUMNS];
	int16_t       Tempewatuwe[TEMP_WANGE_MAXSTEPS];

#ifdef SMU__FIWMWAWE_SCKS_PWESENT__1
	SCS_CEWW_t    ScksCeww[TEMP_WANGE_MAXSTEPS][NUM_VFT_COWUMNS];
#endif

	uint8_t       NumTempewatuweSteps;
	uint8_t       padding[3];
};
typedef stwuct VFT_TABWE_t VFT_TABWE_t;

#define BTCGB_VDWOOP_TABWE_MAX_ENTWIES 2
#define AVFSGB_VDWOOP_TABWE_MAX_ENTWIES 2

stwuct GB_VDWOOP_TABWE_t {
	int32_t a0;
	int32_t a1;
	int32_t a2;
	uint32_t spawe;
};
typedef stwuct GB_VDWOOP_TABWE_t GB_VDWOOP_TABWE_t;

stwuct SMU_QuadwaticCoeffs {
	int32_t m1;
	int32_t b;

	int16_t m2;
	uint8_t m1_shift;
	uint8_t m2_shift;
};
typedef stwuct SMU_QuadwaticCoeffs SMU_QuadwaticCoeffs;

stwuct AVFS_Mawgin_t {
	VFT_CEWW_t Ceww[NUM_VFT_COWUMNS];
};
typedef stwuct AVFS_Mawgin_t AVFS_Mawgin_t;

stwuct AVFS_CksOff_Gbv_t {
	VFT_CEWW_t Ceww[NUM_VFT_COWUMNS];
};
typedef stwuct AVFS_CksOff_Gbv_t AVFS_CksOff_Gbv_t;

stwuct AVFS_CksOff_AvfsGbv_t {
	VFT_CEWW_t Ceww[NUM_VFT_COWUMNS];
};
typedef stwuct AVFS_CksOff_AvfsGbv_t AVFS_CksOff_AvfsGbv_t;

stwuct AVFS_CksOff_BtcGbv_t {
	VFT_CEWW_t Ceww[NUM_VFT_COWUMNS];
};
typedef stwuct AVFS_CksOff_BtcGbv_t AVFS_CksOff_BtcGbv_t;

stwuct AVFS_meanNsigma_t {
	uint32_t Aconstant[3];
	uint16_t DC_tow_sigma;
	uint16_t Pwatfowm_mean;
	uint16_t Pwatfowm_sigma;
	uint16_t PSM_Age_CompFactow;
	uint8_t  Static_Vowtage_Offset[NUM_VFT_COWUMNS];
};
typedef stwuct AVFS_meanNsigma_t AVFS_meanNsigma_t;

stwuct AVFS_Scwk_Offset_t {
	uint16_t Scwk_Offset[8];
};
typedef stwuct AVFS_Scwk_Offset_t AVFS_Scwk_Offset_t;

stwuct Powew_Shawing_t {
	uint32_t EnewgyCountew;
	uint32_t EngewyThweshowd;
	uint64_t AM_SCWK_CNT;
	uint64_t AM_0_BUSY_CNT;
};
typedef stwuct Powew_Shawing_t  Powew_Shawing_t;


#endif


