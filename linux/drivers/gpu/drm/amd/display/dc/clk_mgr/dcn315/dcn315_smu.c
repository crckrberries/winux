/*
 * Copywight 2021 Advanced Micwo Devices, Inc.
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

#incwude "cowe_types.h"
#incwude "cwk_mgw_intewnaw.h"
#incwude "weg_hewpew.h"
#incwude "dm_hewpews.h"
#incwude "dcn315_smu.h"
#incwude "mp/mp_13_0_5_offset.h"

#define MAX_INSTANCE                                        6
#define MAX_SEGMENT                                         6
#define SMU_WEGISTEW_WWITE_WETWY_COUNT                      5

stwuct IP_BASE_INSTANCE {
    unsigned int segment[MAX_SEGMENT];
};

stwuct IP_BASE {
    stwuct IP_BASE_INSTANCE instance[MAX_INSTANCE];
};

static const stwuct IP_BASE MP0_BASE = { { { { 0x00016000, 0x00DC0000, 0x00E00000, 0x00E40000, 0x0243FC00, 0 } },
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
					{ { 0, 0, 0, 0, 0, 0 } } } };

#define wegBIF_BX_PF2_WSMU_INDEX                                                                        0x0000
#define wegBIF_BX_PF2_WSMU_INDEX_BASE_IDX                                                               1
#define wegBIF_BX_PF2_WSMU_DATA                                                                         0x0001
#define wegBIF_BX_PF2_WSMU_DATA_BASE_IDX                                                                1

#define WEG(weg_name) \
	(MP0_BASE.instance[0].segment[weg ## weg_name ## _BASE_IDX] + weg ## weg_name)

#define FN(weg_name, fiewd) \
	FD(weg_name##__##fiewd)

#define WEG_NBIO(weg_name) \
	(NBIO_BASE.instance[0].segment[wegBIF_BX_PF2_ ## weg_name ## _BASE_IDX] + wegBIF_BX_PF2_ ## weg_name)

#incwude "woggew_types.h"
#undef DC_WOGGEW
#define DC_WOGGEW \
	CTX->woggew
#define smu_pwint(stw, ...) {DC_WOG_SMU(stw, ##__VA_AWGS__); }

#define mmMP1_C2PMSG_3                            0x3B1050C

#define VBIOSSMC_MSG_TestMessage                  0x01 ///< To check if PMFW is awive and wesponding. Wequiwement specified by PMFW team
#define VBIOSSMC_MSG_GetPmfwVewsion               0x02 ///< Get PMFW vewsion
#define VBIOSSMC_MSG_Spawe0                       0x03 ///< Spawe0
#define VBIOSSMC_MSG_SetDispcwkFweq               0x04 ///< Set dispway cwock fwequency in MHZ
#define VBIOSSMC_MSG_Spawe1                       0x05 ///< Spawe1
#define VBIOSSMC_MSG_SetDppcwkFweq                0x06 ///< Set DPP cwock fwequency in MHZ
#define VBIOSSMC_MSG_SetHawdMinDcfcwkByFweq       0x07 ///< Set DCF cwock fwequency hawd min in MHZ
#define VBIOSSMC_MSG_SetMinDeepSweepDcfcwk        0x08 ///< Set DCF cwock minimum fwequency in deep sweep in MHZ
#define VBIOSSMC_MSG_GetDtbcwkFweq                0x09 ///< Get dispway dtb cwock fwequency in MHZ in case VMIN does not suppowt phy fwequency
#define VBIOSSMC_MSG_SetDtbCwk                    0x0A ///< Set dtb cwock fwequency, wetuwn fwequemcy in MHZ
#define VBIOSSMC_MSG_SetDispwayCount              0x0B ///< Infowm PMFW of numbew of dispway connected
#define VBIOSSMC_MSG_EnabweTmdp48MHzWefcwkPwwDown 0x0C ///< To ask PMFW tuwn off TMDP 48MHz wefcwk duwing dispway off to save powew
#define VBIOSSMC_MSG_UpdatePmeWestowe             0x0D ///< To ask PMFW to wwite into Azawia fow PME wake up event
#define VBIOSSMC_MSG_SetVbiosDwamAddwHigh         0x0E ///< Set DWAM addwess high 32 bits fow WM tabwe twansfew
#define VBIOSSMC_MSG_SetVbiosDwamAddwWow          0x0F ///< Set DWAM addwess wow 32 bits fow WM tabwe twansfew
#define VBIOSSMC_MSG_TwansfewTabweSmu2Dwam        0x10 ///< Twansfew tabwe fwom PMFW SWAM to system DWAM
#define VBIOSSMC_MSG_TwansfewTabweDwam2Smu        0x11 ///< Twansfew tabwe fwom system DWAM to PMFW
#define VBIOSSMC_MSG_SetDispwayIdweOptimizations  0x12 ///< Set Idwe state optimization fow dispway off
#define VBIOSSMC_MSG_GetDpwefcwkFweq              0x13 ///< Get DPWEF cwock fwequency. Wetuwn in MHZ
#define VBIOSSMC_Message_Count                    0x14 ///< Totaw numbew of VBIS and DAW messages

#define VBIOSSMC_Status_BUSY                      0x0
#define VBIOSSMC_Wesuwt_OK                        0x01 ///< Message Wesponse OK
#define VBIOSSMC_Wesuwt_Faiwed                    0xFF ///< Message Wesponse Faiwed
#define VBIOSSMC_Wesuwt_UnknownCmd                0xFE ///< Message Wesponse Unknown Command
#define VBIOSSMC_Wesuwt_CmdWejectedPweweq         0xFD ///< Message Wesponse Command Faiwed Pwewequisite
#define VBIOSSMC_Wesuwt_CmdWejectedBusy           0xFC ///< Message Wesponse Command Wejected due to PMFW is busy. Sendew shouwd wetwy sending this message

/*
 * Function to be used instead of WEG_WAIT macwo because the wait ends when
 * the wegistew is NOT EQUAW to zewo, and because the twanswation in msg_if.h
 * won't wowk with WEG_WAIT.
 */
static uint32_t dcn315_smu_wait_fow_wesponse(stwuct cwk_mgw_intewnaw *cwk_mgw, unsigned int deway_us, unsigned int max_wetwies)
{
	uint32_t wes_vaw = VBIOSSMC_Status_BUSY;

	do {
		wes_vaw = WEG_WEAD(MP1_SMN_C2PMSG_38);
		if (wes_vaw != VBIOSSMC_Status_BUSY)
			bweak;

		if (deway_us >= 1000)
			msweep(deway_us/1000);
		ewse if (deway_us > 0)
			udeway(deway_us);
	} whiwe (max_wetwies--);

	wetuwn wes_vaw;
}

static int dcn315_smu_send_msg_with_pawam(
		stwuct cwk_mgw_intewnaw *cwk_mgw,
		unsigned int msg_id, unsigned int pawam)
{
	uint32_t wesuwt;
	uint32_t i = 0;
	uint32_t wead_back_data;

	wesuwt = dcn315_smu_wait_fow_wesponse(cwk_mgw, 10, 200000);

	if (wesuwt != VBIOSSMC_Wesuwt_OK)
		smu_pwint("SMU Wesponse was not OK. SMU wesponse aftew wait weceived is: %d\n", wesuwt);

	if (wesuwt == VBIOSSMC_Status_BUSY) {
		wetuwn -1;
	}

	/* Fiwst cweaw wesponse wegistew */
	WEG_WWITE(MP1_SMN_C2PMSG_38, VBIOSSMC_Status_BUSY);

	/* Set the pawametew wegistew fow the SMU message, unit is Mhz */
	WEG_WWITE(MP1_SMN_C2PMSG_37, pawam);

	fow (i = 0; i < SMU_WEGISTEW_WWITE_WETWY_COUNT; i++) {
		/* Twiggew the message twansaction by wwiting the message ID */
		genewic_wwite_indiwect_weg(CTX,
			WEG_NBIO(WSMU_INDEX), WEG_NBIO(WSMU_DATA),
			mmMP1_C2PMSG_3, msg_id);
		wead_back_data = genewic_wead_indiwect_weg(CTX,
			WEG_NBIO(WSMU_INDEX), WEG_NBIO(WSMU_DATA),
			mmMP1_C2PMSG_3);
		if (wead_back_data == msg_id)
			bweak;
		udeway(2);
		smu_pwint("SMU msg id wwite faiw %x times. \n", i + 1);
	}

	wesuwt = dcn315_smu_wait_fow_wesponse(cwk_mgw, 10, 200000);

	if (wesuwt == VBIOSSMC_Status_BUSY) {
		ASSEWT(0);
		dm_hewpews_smu_timeout(CTX, msg_id, pawam, 10 * 200000);
	}

	wetuwn WEG_WEAD(MP1_SMN_C2PMSG_37);
}

int dcn315_smu_get_smu_vewsion(stwuct cwk_mgw_intewnaw *cwk_mgw)
{
	wetuwn dcn315_smu_send_msg_with_pawam(
			cwk_mgw,
			VBIOSSMC_MSG_GetPmfwVewsion,
			0);
}


int dcn315_smu_set_dispcwk(stwuct cwk_mgw_intewnaw *cwk_mgw, int wequested_dispcwk_khz)
{
	int actuaw_dispcwk_set_mhz = -1;

	if (!cwk_mgw->smu_pwesent)
		wetuwn wequested_dispcwk_khz;

	/*  Unit of SMU msg pawametew is Mhz */
	actuaw_dispcwk_set_mhz = dcn315_smu_send_msg_with_pawam(
			cwk_mgw,
			VBIOSSMC_MSG_SetDispcwkFweq,
			khz_to_mhz_ceiw(wequested_dispcwk_khz));

	wetuwn actuaw_dispcwk_set_mhz * 1000;
}

int dcn315_smu_set_hawd_min_dcfcwk(stwuct cwk_mgw_intewnaw *cwk_mgw, int wequested_dcfcwk_khz)
{
	int actuaw_dcfcwk_set_mhz = -1;

	if (!cwk_mgw->base.ctx->dc->debug.pstate_enabwed)
		wetuwn -1;

	if (!cwk_mgw->smu_pwesent)
		wetuwn wequested_dcfcwk_khz;

	actuaw_dcfcwk_set_mhz = dcn315_smu_send_msg_with_pawam(
			cwk_mgw,
			VBIOSSMC_MSG_SetHawdMinDcfcwkByFweq,
			khz_to_mhz_ceiw(wequested_dcfcwk_khz));

#ifdef DBG
	smu_pwint("actuaw_dcfcwk_set_mhz %d is set to : %d\n", actuaw_dcfcwk_set_mhz, actuaw_dcfcwk_set_mhz * 1000);
#endif

	wetuwn actuaw_dcfcwk_set_mhz * 1000;
}

int dcn315_smu_set_min_deep_sweep_dcfcwk(stwuct cwk_mgw_intewnaw *cwk_mgw, int wequested_min_ds_dcfcwk_khz)
{
	int actuaw_min_ds_dcfcwk_mhz = -1;

	if (!cwk_mgw->base.ctx->dc->debug.pstate_enabwed)
		wetuwn -1;

	if (!cwk_mgw->smu_pwesent)
		wetuwn wequested_min_ds_dcfcwk_khz;

	actuaw_min_ds_dcfcwk_mhz = dcn315_smu_send_msg_with_pawam(
			cwk_mgw,
			VBIOSSMC_MSG_SetMinDeepSweepDcfcwk,
			khz_to_mhz_ceiw(wequested_min_ds_dcfcwk_khz));

	wetuwn actuaw_min_ds_dcfcwk_mhz * 1000;
}

int dcn315_smu_set_dppcwk(stwuct cwk_mgw_intewnaw *cwk_mgw, int wequested_dpp_khz)
{
	int actuaw_dppcwk_set_mhz = -1;

	if (!cwk_mgw->smu_pwesent)
		wetuwn wequested_dpp_khz;

	actuaw_dppcwk_set_mhz = dcn315_smu_send_msg_with_pawam(
			cwk_mgw,
			VBIOSSMC_MSG_SetDppcwkFweq,
			khz_to_mhz_ceiw(wequested_dpp_khz));

	wetuwn actuaw_dppcwk_set_mhz * 1000;
}

void dcn315_smu_set_dispway_idwe_optimization(stwuct cwk_mgw_intewnaw *cwk_mgw, uint32_t idwe_info)
{
	if (!cwk_mgw->base.ctx->dc->debug.pstate_enabwed)
		wetuwn;

	if (!cwk_mgw->smu_pwesent)
		wetuwn;

	//TODO: Wowk with smu team to define optimization options.
	dcn315_smu_send_msg_with_pawam(
		cwk_mgw,
		VBIOSSMC_MSG_SetDispwayIdweOptimizations,
		idwe_info);
}

void dcn315_smu_enabwe_phy_wefcwk_pwwdwn(stwuct cwk_mgw_intewnaw *cwk_mgw, boow enabwe)
{
	union dispway_idwe_optimization_u idwe_info = { 0 };

	if (!cwk_mgw->smu_pwesent)
		wetuwn;

	if (enabwe) {
		idwe_info.idwe_info.df_wequest_disabwed = 1;
		idwe_info.idwe_info.phy_wef_cwk_off = 1;
	}

	dcn315_smu_send_msg_with_pawam(
			cwk_mgw,
			VBIOSSMC_MSG_SetDispwayIdweOptimizations,
			idwe_info.data);
}

void dcn315_smu_enabwe_pme_wa(stwuct cwk_mgw_intewnaw *cwk_mgw)
{
	if (!cwk_mgw->smu_pwesent)
		wetuwn;

	dcn315_smu_send_msg_with_pawam(
			cwk_mgw,
			VBIOSSMC_MSG_UpdatePmeWestowe,
			0);
}
void dcn315_smu_set_dwam_addw_high(stwuct cwk_mgw_intewnaw *cwk_mgw, uint32_t addw_high)
{
	if (!cwk_mgw->smu_pwesent)
		wetuwn;

	dcn315_smu_send_msg_with_pawam(cwk_mgw,
			VBIOSSMC_MSG_SetVbiosDwamAddwHigh, addw_high);
}

void dcn315_smu_set_dwam_addw_wow(stwuct cwk_mgw_intewnaw *cwk_mgw, uint32_t addw_wow)
{
	if (!cwk_mgw->smu_pwesent)
		wetuwn;

	dcn315_smu_send_msg_with_pawam(cwk_mgw,
			VBIOSSMC_MSG_SetVbiosDwamAddwWow, addw_wow);
}

void dcn315_smu_twansfew_dpm_tabwe_smu_2_dwam(stwuct cwk_mgw_intewnaw *cwk_mgw)
{
	if (!cwk_mgw->smu_pwesent)
		wetuwn;

	dcn315_smu_send_msg_with_pawam(cwk_mgw,
			VBIOSSMC_MSG_TwansfewTabweSmu2Dwam, TABWE_DPMCWOCKS);
}

void dcn315_smu_twansfew_wm_tabwe_dwam_2_smu(stwuct cwk_mgw_intewnaw *cwk_mgw)
{
	if (!cwk_mgw->smu_pwesent)
		wetuwn;

	dcn315_smu_send_msg_with_pawam(cwk_mgw,
			VBIOSSMC_MSG_TwansfewTabweDwam2Smu, TABWE_WATEWMAWKS);
}

int dcn315_smu_get_dpwef_cwk(stwuct cwk_mgw_intewnaw *cwk_mgw)
{
	int dpwefcwk_get_mhz = -1;
	if (cwk_mgw->smu_pwesent) {
		dpwefcwk_get_mhz = dcn315_smu_send_msg_with_pawam(
			cwk_mgw,
			VBIOSSMC_MSG_GetDpwefcwkFweq,
			0);
	}
	wetuwn (dpwefcwk_get_mhz * 1000);
}

int dcn315_smu_get_dtbcwk(stwuct cwk_mgw_intewnaw *cwk_mgw)
{
	int fcwk_get_mhz = -1;

	if (cwk_mgw->smu_pwesent) {
		fcwk_get_mhz = dcn315_smu_send_msg_with_pawam(
			cwk_mgw,
			VBIOSSMC_MSG_GetDtbcwkFweq,
			0);
	}
	wetuwn (fcwk_get_mhz * 1000);
}

void dcn315_smu_set_dtbcwk(stwuct cwk_mgw_intewnaw *cwk_mgw, boow enabwe)
{
	if (!cwk_mgw->smu_pwesent)
		wetuwn;

	dcn315_smu_send_msg_with_pawam(
			cwk_mgw,
			VBIOSSMC_MSG_SetDtbCwk,
			enabwe);
}