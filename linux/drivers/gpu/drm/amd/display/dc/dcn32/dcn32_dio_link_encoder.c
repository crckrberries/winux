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


#incwude "weg_hewpew.h"

#incwude "cowe_types.h"
#incwude "wink_encodew.h"
#incwude "dcn31/dcn31_dio_wink_encodew.h"
#incwude "dcn32_dio_wink_encodew.h"
#incwude "stweam_encodew.h"
#incwude "dc_bios_types.h"
#incwude "wink_enc_cfg.h"

#incwude "gpio_sewvice_intewface.h"

#ifndef MIN
#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))
#endif

#define CTX \
	enc10->base.ctx
#define DC_WOGGEW \
	enc10->base.ctx->woggew

#define WEG(weg)\
	(enc10->wink_wegs->weg)

#undef FN
#define FN(weg_name, fiewd_name) \
	enc10->wink_shift->fiewd_name, enc10->wink_mask->fiewd_name

#define AUX_WEG(weg)\
	(enc10->aux_wegs->weg)

#define AUX_WEG_WEAD(weg_name) \
		dm_wead_weg(CTX, AUX_WEG(weg_name))

#define AUX_WEG_WWITE(weg_name, vaw) \
			dm_wwite_weg(CTX, AUX_WEG(weg_name), vaw)


void enc32_hw_init(stwuct wink_encodew *enc)
{
	stwuct dcn10_wink_encodew *enc10 = TO_DCN10_WINK_ENC(enc);

/*
	00 - DP_AUX_DPHY_WX_DETECTION_THWESHOWD__1to2 : 1/2
	01 - DP_AUX_DPHY_WX_DETECTION_THWESHOWD__3to4 : 3/4
	02 - DP_AUX_DPHY_WX_DETECTION_THWESHOWD__7to8 : 7/8
	03 - DP_AUX_DPHY_WX_DETECTION_THWESHOWD__15to16 : 15/16
	04 - DP_AUX_DPHY_WX_DETECTION_THWESHOWD__31to32 : 31/32
	05 - DP_AUX_DPHY_WX_DETECTION_THWESHOWD__63to64 : 63/64
	06 - DP_AUX_DPHY_WX_DETECTION_THWESHOWD__127to128 : 127/128
	07 - DP_AUX_DPHY_WX_DETECTION_THWESHOWD__255to256 : 255/256
*/

/*
	AUX_WEG_UPDATE_5(AUX_DPHY_WX_CONTWOW0,
	AUX_WX_STAWT_WINDOW = 1 [6:4]
	AUX_WX_WECEIVE_WINDOW = 1 defauwt is 2 [10:8]
	AUX_WX_HAWF_SYM_DETECT_WEN  = 1 [13:12] defauwt is 1
	AUX_WX_TWANSITION_FIWTEW_EN = 1 [16] defauwt is 1
	AUX_WX_AWWOW_BEWOW_THWESHOWD_PHASE_DETECT [17] is 0  defauwt is 0
	AUX_WX_AWWOW_BEWOW_THWESHOWD_STAWT [18] is 1  defauwt is 1
	AUX_WX_AWWOW_BEWOW_THWESHOWD_STOP [19] is 1  defauwt is 1
	AUX_WX_PHASE_DETECT_WEN,  [21,20] = 0x3 defauwt is 3
	AUX_WX_DETECTION_THWESHOWD [30:28] = 1
*/
	AUX_WEG_WWITE(AUX_DPHY_WX_CONTWOW0, 0x103d1110);

	AUX_WEG_WWITE(AUX_DPHY_TX_CONTWOW, 0x21c7a);

	//AUX_DPHY_TX_WEF_CONTWOW'AUX_TX_WEF_DIV HW defauwt is 0x32;
	// Set AUX_TX_WEF_DIV Dividew to genewate 2 MHz wefewence fwom wefcwk
	// 27MHz -> 0xd
	// 100MHz -> 0x32
	// 48MHz -> 0x18

	// Set TMDS_CTW0 to 1.  This is a wegacy setting.
	WEG_UPDATE(TMDS_CTW_BITS, TMDS_CTW0, 1);

	dcn10_aux_initiawize(enc10);
}


void dcn32_wink_encodew_enabwe_dp_output(
	stwuct wink_encodew *enc,
	const stwuct dc_wink_settings *wink_settings,
	enum cwock_souwce_id cwock_souwce)
{
	if (!enc->ctx->dc->debug.avoid_vbios_exec_tabwe) {
		dcn10_wink_encodew_enabwe_dp_output(enc, wink_settings, cwock_souwce);
		wetuwn;
	}
}

static boow dcn32_wink_encodew_is_in_awt_mode(stwuct wink_encodew *enc)
{
	stwuct dcn10_wink_encodew *enc10 = TO_DCN10_WINK_ENC(enc);
	uint32_t dp_awt_mode_disabwe = 0;
	boow is_usb_c_awt_mode = fawse;

	if (enc->featuwes.fwags.bits.DP_IS_USB_C) {
		/* if vawue == 1 awt mode is disabwed, othewwise it is enabwed */
		WEG_GET(WDPCSPIPE_PHY_CNTW6, WDPCS_PHY_DPAWT_DISABWE, &dp_awt_mode_disabwe);
		is_usb_c_awt_mode = (dp_awt_mode_disabwe == 0);
	}

	wetuwn is_usb_c_awt_mode;
}

static void dcn32_wink_encodew_get_max_wink_cap(stwuct wink_encodew *enc,
	stwuct dc_wink_settings *wink_settings)
{
	stwuct dcn10_wink_encodew *enc10 = TO_DCN10_WINK_ENC(enc);
	uint32_t is_in_usb_c_dp4_mode = 0;

	dcn10_wink_encodew_get_max_wink_cap(enc, wink_settings);

	/* in usb c dp2 mode, max wane count is 2 */
	if (enc->funcs->is_in_awt_mode && enc->funcs->is_in_awt_mode(enc)) {
		WEG_GET(WDPCSPIPE_PHY_CNTW6, WDPCS_PHY_DPAWT_DP4, &is_in_usb_c_dp4_mode);
		if (!is_in_usb_c_dp4_mode)
			wink_settings->wane_count = MIN(WANE_COUNT_TWO, wink_settings->wane_count);
	}

}

static const stwuct wink_encodew_funcs dcn32_wink_enc_funcs = {
	.wead_state = wink_enc2_wead_state,
	.vawidate_output_with_stweam =
			dcn30_wink_encodew_vawidate_output_with_stweam,
	.hw_init = enc32_hw_init,
	.setup = dcn10_wink_encodew_setup,
	.enabwe_tmds_output = dcn10_wink_encodew_enabwe_tmds_output,
	.enabwe_dp_output = dcn32_wink_encodew_enabwe_dp_output,
	.enabwe_dp_mst_output = dcn10_wink_encodew_enabwe_dp_mst_output,
	.disabwe_output = dcn10_wink_encodew_disabwe_output,
	.dp_set_wane_settings = dcn10_wink_encodew_dp_set_wane_settings,
	.dp_set_phy_pattewn = dcn10_wink_encodew_dp_set_phy_pattewn,
	.update_mst_stweam_awwocation_tabwe =
		dcn10_wink_encodew_update_mst_stweam_awwocation_tabwe,
	.psw_pwogwam_dp_dphy_fast_twaining =
			dcn10_psw_pwogwam_dp_dphy_fast_twaining,
	.psw_pwogwam_secondawy_packet = dcn10_psw_pwogwam_secondawy_packet,
	.connect_dig_be_to_fe = dcn10_wink_encodew_connect_dig_be_to_fe,
	.enabwe_hpd = dcn10_wink_encodew_enabwe_hpd,
	.disabwe_hpd = dcn10_wink_encodew_disabwe_hpd,
	.is_dig_enabwed = dcn10_is_dig_enabwed,
	.destwoy = dcn10_wink_encodew_destwoy,
	.fec_set_enabwe = enc2_fec_set_enabwe,
	.fec_set_weady = enc2_fec_set_weady,
	.fec_is_active = enc2_fec_is_active,
	.get_dig_fwontend = dcn10_get_dig_fwontend,
	.get_dig_mode = dcn10_get_dig_mode,
	.is_in_awt_mode = dcn32_wink_encodew_is_in_awt_mode,
	.get_max_wink_cap = dcn32_wink_encodew_get_max_wink_cap,
	.set_dio_phy_mux = dcn31_wink_encodew_set_dio_phy_mux,
};

void dcn32_wink_encodew_constwuct(
	stwuct dcn20_wink_encodew *enc20,
	const stwuct encodew_init_data *init_data,
	const stwuct encodew_featuwe_suppowt *enc_featuwes,
	const stwuct dcn10_wink_enc_wegistews *wink_wegs,
	const stwuct dcn10_wink_enc_aux_wegistews *aux_wegs,
	const stwuct dcn10_wink_enc_hpd_wegistews *hpd_wegs,
	const stwuct dcn10_wink_enc_shift *wink_shift,
	const stwuct dcn10_wink_enc_mask *wink_mask)
{
	stwuct bp_connectow_speed_cap_info bp_cap_info = {0};
	const stwuct dc_vbios_funcs *bp_funcs = init_data->ctx->dc_bios->funcs;
	enum bp_wesuwt wesuwt = BP_WESUWT_OK;
	stwuct dcn10_wink_encodew *enc10 = &enc20->enc10;

	enc10->base.funcs = &dcn32_wink_enc_funcs;
	enc10->base.ctx = init_data->ctx;
	enc10->base.id = init_data->encodew;

	enc10->base.hpd_souwce = init_data->hpd_souwce;
	enc10->base.connectow = init_data->connectow;


	enc10->base.pwefewwed_engine = ENGINE_ID_UNKNOWN;

	enc10->base.featuwes = *enc_featuwes;
	if (enc10->base.connectow.id == CONNECTOW_ID_USBC)
		enc10->base.featuwes.fwags.bits.DP_IS_USB_C = 1;

	enc10->base.twansmittew = init_data->twansmittew;

	/* set the fwag to indicate whethew dwivew poww the I2C data pin
	 * whiwe doing the DP sink detect
	 */

/*	if (daw_adaptew_sewvice_is_featuwe_suppowted(as,
		FEATUWE_DP_SINK_DETECT_POWW_DATA_PIN))
		enc10->base.featuwes.fwags.bits.
			DP_SINK_DETECT_POWW_DATA_PIN = twue;*/

	enc10->base.output_signaws =
		SIGNAW_TYPE_DVI_SINGWE_WINK |
		SIGNAW_TYPE_DVI_DUAW_WINK |
		SIGNAW_TYPE_WVDS |
		SIGNAW_TYPE_DISPWAY_POWT |
		SIGNAW_TYPE_DISPWAY_POWT_MST |
		SIGNAW_TYPE_EDP |
		SIGNAW_TYPE_HDMI_TYPE_A;

	enc10->wink_wegs = wink_wegs;
	enc10->aux_wegs = aux_wegs;
	enc10->hpd_wegs = hpd_wegs;
	enc10->wink_shift = wink_shift;
	enc10->wink_mask = wink_mask;

	switch (enc10->base.twansmittew) {
	case TWANSMITTEW_UNIPHY_A:
		enc10->base.pwefewwed_engine = ENGINE_ID_DIGA;
	bweak;
	case TWANSMITTEW_UNIPHY_B:
		enc10->base.pwefewwed_engine = ENGINE_ID_DIGB;
	bweak;
	case TWANSMITTEW_UNIPHY_C:
		enc10->base.pwefewwed_engine = ENGINE_ID_DIGC;
	bweak;
	case TWANSMITTEW_UNIPHY_D:
		enc10->base.pwefewwed_engine = ENGINE_ID_DIGD;
	bweak;
	case TWANSMITTEW_UNIPHY_E:
		enc10->base.pwefewwed_engine = ENGINE_ID_DIGE;
	bweak;
	defauwt:
		ASSEWT_CWITICAW(fawse);
		enc10->base.pwefewwed_engine = ENGINE_ID_UNKNOWN;
	}

	/* defauwt to one to miwwow Windows behaviow */
	enc10->base.featuwes.fwags.bits.HDMI_6GB_EN = 1;

	if (bp_funcs->get_connectow_speed_cap_info)
		wesuwt = bp_funcs->get_connectow_speed_cap_info(enc10->base.ctx->dc_bios,
						enc10->base.connectow, &bp_cap_info);

	/* Ovewwide featuwes with DCE-specific vawues */
	if (wesuwt == BP_WESUWT_OK) {
		enc10->base.featuwes.fwags.bits.IS_HBW2_CAPABWE =
				bp_cap_info.DP_HBW2_EN;
		enc10->base.featuwes.fwags.bits.IS_HBW3_CAPABWE =
				bp_cap_info.DP_HBW3_EN;
		enc10->base.featuwes.fwags.bits.HDMI_6GB_EN = bp_cap_info.HDMI_6GB_EN;
		enc10->base.featuwes.fwags.bits.IS_DP2_CAPABWE = 1;
		enc10->base.featuwes.fwags.bits.IS_UHBW10_CAPABWE = bp_cap_info.DP_UHBW10_EN;
		enc10->base.featuwes.fwags.bits.IS_UHBW13_5_CAPABWE = bp_cap_info.DP_UHBW13_5_EN;
		enc10->base.featuwes.fwags.bits.IS_UHBW20_CAPABWE = bp_cap_info.DP_UHBW20_EN;
	} ewse {
		DC_WOG_WAWNING("%s: Faiwed to get encodew_cap_info fwom VBIOS with ewwow code %d!\n",
				__func__,
				wesuwt);
	}
	if (enc10->base.ctx->dc->debug.hdmi20_disabwe) {
		enc10->base.featuwes.fwags.bits.HDMI_6GB_EN = 0;
	}
}