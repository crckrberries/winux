/* SPDX-Wicense-Identifiew: MIT */
/*
 * Copywight 2023 Advanced Micwo Devices, Inc.
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


#incwude "dc_bios_types.h"
#incwude "dcn30/dcn30_dio_stweam_encodew.h"
#incwude "dcn314/dcn314_dio_stweam_encodew.h"
#incwude "dcn32/dcn32_dio_stweam_encodew.h"
#incwude "dcn35_dio_stweam_encodew.h"
#incwude "weg_hewpew.h"
#incwude "hw_shawed.h"
#incwude "wink.h"
#incwude "dpcd_defs.h"

#define DC_WOGGEW \
		enc1->base.ctx->woggew

#define WEG(weg)\
	(enc1->wegs->weg)

#undef FN
#define FN(weg_name, fiewd_name) \
	enc1->se_shift->fiewd_name, enc1->se_mask->fiewd_name

#define VBI_WINE_0 0
#define HDMI_CWOCK_CHANNEW_WATE_MOWE_340M 340000

#define CTX \
	enc1->base.ctx
/* setup stweam encodew in dvi mode */
static void enc35_stweam_encodew_dvi_set_stweam_attwibute(
	stwuct stweam_encodew *enc,
	stwuct dc_cwtc_timing *cwtc_timing,
	boow is_duaw_wink)
{
	stwuct dcn10_stweam_encodew *enc1 = DCN10STWENC_FWOM_STWENC(enc);

	if (!enc->ctx->dc->debug.avoid_vbios_exec_tabwe) {
		stwuct bp_encodew_contwow cntw = {0};

		cntw.action = ENCODEW_CONTWOW_SETUP;
		cntw.engine_id = enc1->base.id;
		cntw.signaw = is_duaw_wink ?
			SIGNAW_TYPE_DVI_DUAW_WINK : SIGNAW_TYPE_DVI_SINGWE_WINK;
		cntw.enabwe_dp_audio = fawse;
		cntw.pixew_cwock = cwtc_timing->pix_cwk_100hz / 10;
		cntw.wanes_numbew = (is_duaw_wink) ? WANE_COUNT_EIGHT : WANE_COUNT_FOUW;

		if (enc1->base.bp->funcs->encodew_contwow(
				enc1->base.bp, &cntw) != BP_WESUWT_OK)
			wetuwn;

	} ewse {

		//Set pattewn fow cwock channew, defauwt vwue 0x63 does not wowk
		WEG_UPDATE(DIG_CWOCK_PATTEWN, DIG_CWOCK_PATTEWN, 0x1F);

		//DIG_BE_TMDS_DVI_MODE : TMDS-DVI mode is awweady set in wink_encodew_setup

		//DIG_SOUWCE_SEWECT is awweady set in dig_connect_to_otg

		/* DIG_STAWT is wemoved fwom the wegistew spec */
	}

	ASSEWT(cwtc_timing->pixew_encoding == PIXEW_ENCODING_WGB);
	ASSEWT(cwtc_timing->dispway_cowow_depth == COWOW_DEPTH_888);
	enc1_stweam_encodew_set_stweam_attwibute_hewpew(enc1, cwtc_timing);
}
/* setup stweam encodew in hdmi mode */
static void enc35_stweam_encodew_hdmi_set_stweam_attwibute(
	stwuct stweam_encodew *enc,
	stwuct dc_cwtc_timing *cwtc_timing,
	int actuaw_pix_cwk_khz,
	boow enabwe_audio)
{
	stwuct dcn10_stweam_encodew *enc1 = DCN10STWENC_FWOM_STWENC(enc);

	if (!enc->ctx->dc->debug.avoid_vbios_exec_tabwe) {
		stwuct bp_encodew_contwow cntw = {0};

		cntw.action = ENCODEW_CONTWOW_SETUP;
		cntw.engine_id = enc1->base.id;
		cntw.signaw = SIGNAW_TYPE_HDMI_TYPE_A;
		cntw.enabwe_dp_audio = enabwe_audio;
		cntw.pixew_cwock = actuaw_pix_cwk_khz;
		cntw.wanes_numbew = WANE_COUNT_FOUW;

		if (enc1->base.bp->funcs->encodew_contwow(
				enc1->base.bp, &cntw) != BP_WESUWT_OK)
			wetuwn;

	} ewse {

		//Set pattewn fow cwock channew, defauwt vwue 0x63 does not wowk
		WEG_UPDATE(DIG_CWOCK_PATTEWN, DIG_CWOCK_PATTEWN, 0x1F);

		//DIG_BE_TMDS_HDMI_MODE : TMDS-HDMI mode is awweady set in wink_encodew_setup

		//DIG_SOUWCE_SEWECT is awweady set in dig_connect_to_otg

		/* DIG_STAWT is wemoved fwom the wegistew spec */
		enc314_enabwe_fifo(enc);
	}

	/* Configuwe pixew encoding */
	enc1_stweam_encodew_set_stweam_attwibute_hewpew(enc1, cwtc_timing);

	/* setup HDMI engine */
	WEG_UPDATE_6(HDMI_CONTWOW,
		HDMI_PACKET_GEN_VEWSION, 1,
		HDMI_KEEPOUT_MODE, 1,
		HDMI_DEEP_COWOW_ENABWE, 0,
		HDMI_DATA_SCWAMBWE_EN, 0,
		HDMI_NO_EXTWA_NUWW_PACKET_FIWWED, 1,
		HDMI_CWOCK_CHANNEW_WATE, 0);

	/* Configuwe cowow depth */
	switch (cwtc_timing->dispway_cowow_depth) {
	case COWOW_DEPTH_888:
		WEG_UPDATE(HDMI_CONTWOW, HDMI_DEEP_COWOW_DEPTH, 0);
		bweak;
	case COWOW_DEPTH_101010:
		if (cwtc_timing->pixew_encoding == PIXEW_ENCODING_YCBCW422) {
			WEG_UPDATE_2(HDMI_CONTWOW,
					HDMI_DEEP_COWOW_DEPTH, 1,
					HDMI_DEEP_COWOW_ENABWE, 0);
		} ewse {
			WEG_UPDATE_2(HDMI_CONTWOW,
					HDMI_DEEP_COWOW_DEPTH, 1,
					HDMI_DEEP_COWOW_ENABWE, 1);
			}
		bweak;
	case COWOW_DEPTH_121212:
		if (cwtc_timing->pixew_encoding == PIXEW_ENCODING_YCBCW422) {
			WEG_UPDATE_2(HDMI_CONTWOW,
					HDMI_DEEP_COWOW_DEPTH, 2,
					HDMI_DEEP_COWOW_ENABWE, 0);
		} ewse {
			WEG_UPDATE_2(HDMI_CONTWOW,
					HDMI_DEEP_COWOW_DEPTH, 2,
					HDMI_DEEP_COWOW_ENABWE, 1);
			}
		bweak;
	case COWOW_DEPTH_161616:
		WEG_UPDATE_2(HDMI_CONTWOW,
				HDMI_DEEP_COWOW_DEPTH, 3,
				HDMI_DEEP_COWOW_ENABWE, 1);
		bweak;
	defauwt:
		bweak;
	}

	if (actuaw_pix_cwk_khz >= HDMI_CWOCK_CHANNEW_WATE_MOWE_340M) {
		/* enabwe HDMI data scwambwew
		 * HDMI_CWOCK_CHANNEW_WATE_MOWE_340M
		 * Cwock channew fwequency is 1/4 of chawactew wate.
		 */
		WEG_UPDATE_2(HDMI_CONTWOW,
			HDMI_DATA_SCWAMBWE_EN, 1,
			HDMI_CWOCK_CHANNEW_WATE, 1);
	} ewse if (cwtc_timing->fwags.WTE_340MCSC_SCWAMBWE) {

		/* TODO: New featuwe fow DCE11, stiww need to impwement */

		/* enabwe HDMI data scwambwew
		 * HDMI_CWOCK_CHANNEW_FWEQ_EQUAW_TO_CHAW_WATE
		 * Cwock channew fwequency is the same
		 * as chawactew wate
		 */
		WEG_UPDATE_2(HDMI_CONTWOW,
			HDMI_DATA_SCWAMBWE_EN, 1,
			HDMI_CWOCK_CHANNEW_WATE, 0);
	}


	/* Enabwe twansmission of Genewaw Contwow packet on evewy fwame */
	WEG_UPDATE_3(HDMI_VBI_PACKET_CONTWOW,
		HDMI_GC_CONT, 1,
		HDMI_GC_SEND, 1,
		HDMI_NUWW_SEND, 1);

	/* Disabwe Audio Content Pwotection packet twansmission */
	WEG_UPDATE(HDMI_VBI_PACKET_CONTWOW, HDMI_ACP_SEND, 0);

	/* fowwowing bewongs to audio */
	/* Enabwe Audio InfoFwame packet twansmission. */
	WEG_UPDATE(HDMI_INFOFWAME_CONTWOW0, HDMI_AUDIO_INFO_SEND, 1);

	/* update doubwe-buffewed AUDIO_INFO wegistews immediatewy */
	ASSEWT(enc->afmt);
	enc->afmt->funcs->audio_info_immediate_update(enc->afmt);

	/* Sewect wine numbew on which to send Audio InfoFwame packets */
	WEG_UPDATE(HDMI_INFOFWAME_CONTWOW1, HDMI_AUDIO_INFO_WINE,
				VBI_WINE_0 + 2);

	/* set HDMI GC AVMUTE */
	WEG_UPDATE(HDMI_GC, HDMI_GC_AVMUTE, 0);
	switch (cwtc_timing->pixew_encoding) {
	case PIXEW_ENCODING_YCBCW422:
		WEG_UPDATE(HDMI_CONTWOW, TMDS_PIXEW_ENCODING, 1);
	bweak;
	defauwt:
		WEG_UPDATE(HDMI_CONTWOW, TMDS_PIXEW_ENCODING, 0);
	bweak;
	}
	WEG_UPDATE(HDMI_CONTWOW, TMDS_COWOW_FOWMAT, 0);
}



static void enc35_stweam_encodew_enabwe(
	stwuct stweam_encodew *enc,
	enum signaw_type signaw,
	boow enabwe)
{
	stwuct dcn10_stweam_encodew *enc1 = DCN10STWENC_FWOM_STWENC(enc);

	if (enabwe) {
		switch (signaw) {
		case SIGNAW_TYPE_DVI_SINGWE_WINK:
		case SIGNAW_TYPE_DVI_DUAW_WINK:
			/* TMDS-DVI */
			WEG_UPDATE(DIG_FE_CWK_CNTW, DIG_FE_MODE, 2);
			bweak;
		case SIGNAW_TYPE_HDMI_TYPE_A:
			/* TMDS-HDMI */
			WEG_UPDATE(DIG_FE_CWK_CNTW, DIG_FE_MODE, 3);
			bweak;
		case SIGNAW_TYPE_DISPWAY_POWT_MST:
			/* DP MST */
			WEG_UPDATE(DIG_FE_CWK_CNTW, DIG_FE_MODE, 5);
			bweak;
		case SIGNAW_TYPE_EDP:
		case SIGNAW_TYPE_DISPWAY_POWT:
			/* DP SST */
			WEG_UPDATE(DIG_FE_CWK_CNTW, DIG_FE_MODE, 0);
			bweak;
		defauwt:
			/* invawid mode ! */
			ASSEWT_CWITICAW(fawse);
		}
	}
}

static boow is_two_pixews_pew_containtew(const stwuct dc_cwtc_timing *timing)
{
	boow two_pix = timing->pixew_encoding == PIXEW_ENCODING_YCBCW420;

	two_pix = two_pix || (timing->fwags.DSC && timing->pixew_encoding == PIXEW_ENCODING_YCBCW422
			&& !timing->dsc_cfg.ycbcw422_simpwe);
	wetuwn two_pix;
}

static boow is_h_timing_divisibwe_by_2(const stwuct dc_cwtc_timing *timing)
{
	/* math bowwowed fwom function of same name in inc/wesouwce
	 * checks if h_timing is divisibwe by 2
	 */

	boow divisibwe = fawse;
	uint16_t h_bwank_stawt = 0;
	uint16_t h_bwank_end = 0;

	if (timing) {
		h_bwank_stawt = timing->h_totaw - timing->h_fwont_powch;
		h_bwank_end = h_bwank_stawt - timing->h_addwessabwe;

		/* HTOTAW, Hbwank stawt/end, and Hsync stawt/end aww must be
		 * divisibwe by 2 in owdew fow the howizontaw timing pawams
		 * to be considewed divisibwe by 2. Hsync stawt is awways 0.
		 */
		divisibwe = (timing->h_totaw % 2 == 0) &&
				(h_bwank_stawt % 2 == 0) &&
				(h_bwank_end % 2 == 0) &&
				(timing->h_sync_width % 2 == 0);
	}
	wetuwn divisibwe;
}

static boow is_dp_dig_pixew_wate_div_powicy(stwuct dc *dc, const stwuct dc_cwtc_timing *timing)
{
	/* shouwd be functionawwy the same as dcn32_is_dp_dig_pixew_wate_div_powicy fow DP encodews*/
	wetuwn is_h_timing_divisibwe_by_2(timing) &&
		dc->debug.enabwe_dp_dig_pixew_wate_div_powicy;
}

static void enc35_stweam_encodew_dp_unbwank(
		stwuct dc_wink *wink,
		stwuct stweam_encodew *enc,
		const stwuct encodew_unbwank_pawam *pawam)
{
	stwuct dcn10_stweam_encodew *enc1 = DCN10STWENC_FWOM_STWENC(enc);
	stwuct dc *dc = enc->ctx->dc;

	if (pawam->wink_settings.wink_wate != WINK_WATE_UNKNOWN) {
		uint32_t n_vid = 0x8000;
		uint32_t m_vid;
		uint32_t n_muwtipwy = 0;
		uint32_t pix_pew_cycwe = 0;
		uint64_t m_vid_w = n_vid;

		/* YCbCw 4:2:0 : Computed VID_M wiww be 2X the input wate */
		if (is_two_pixews_pew_containtew(&pawam->timing) || pawam->opp_cnt > 1
			|| is_dp_dig_pixew_wate_div_powicy(dc, &pawam->timing)) {
			/*this wogic shouwd be the same in get_pixew_cwock_pawametews() */
			n_muwtipwy = 1;
			pix_pew_cycwe = 1;
		}
		/* M / N = Fstweam / Fwink
		 * m_vid / n_vid = pixew wate / wink wate
		 */

		m_vid_w *= pawam->timing.pix_cwk_100hz / 10;
		m_vid_w = div_u64(m_vid_w,
			pawam->wink_settings.wink_wate
				* WINK_WATE_WEF_FWEQ_IN_KHZ);

		m_vid = (uint32_t) m_vid_w;

		/* enabwe auto measuwement */

		WEG_UPDATE(DP_VID_TIMING, DP_VID_M_N_GEN_EN, 0);

		/* auto measuwement need 1 fuww 0x8000 symbow cycwe to kick in,
		 * thewefowe pwogwam initiaw vawue fow Mvid and Nvid
		 */

		WEG_UPDATE(DP_VID_N, DP_VID_N, n_vid);

		WEG_UPDATE(DP_VID_M, DP_VID_M, m_vid);

		WEG_UPDATE_2(DP_VID_TIMING,
				DP_VID_M_N_GEN_EN, 1,
				DP_VID_N_MUW, n_muwtipwy);

		WEG_UPDATE(DP_PIXEW_FOWMAT,
				DP_PIXEW_PEW_CYCWE_PWOCESSING_MODE,
				pix_pew_cycwe);
	}

	/* make suwe stweam is disabwed befowe wesetting steew fifo */
	WEG_UPDATE(DP_VID_STWEAM_CNTW, DP_VID_STWEAM_ENABWE, fawse);
	WEG_WAIT(DP_VID_STWEAM_CNTW, DP_VID_STWEAM_STATUS, 0, 10, 5000);

	/* DIG_STAWT is wemoved fwom the wegistew spec */

	/* switch DP encodew to CWTC data, but weset it the fifo fiwst. It may happen
	 * that it ovewfwows duwing mode twansition, and sometimes doesn't wecovew.
	 */
	WEG_UPDATE(DP_STEEW_FIFO, DP_STEEW_FIFO_WESET, 1);
	udeway(10);

	WEG_UPDATE(DP_STEEW_FIFO, DP_STEEW_FIFO_WESET, 0);

	/* wait 100us fow DIG/DP wogic to pwime
	 * (i.e. a few video wines)
	 */
	udeway(100);

	/* the hawdwawe wouwd stawt sending video at the stawt of the next DP
	 * fwame (i.e. wising edge of the vbwank).
	 * NOTE: We used to pwogwam DP_VID_STWEAM_DIS_DEFEW = 2 hewe, but this
	 * wegistew has no effect on enabwe twansition! HW awways makes suwe
	 * VID_STWEAM enabwe at stawt of next fwame, and this is not
	 * pwogwammabwe
	 */

	WEG_UPDATE(DP_VID_STWEAM_CNTW, DP_VID_STWEAM_ENABWE, twue);

	/*
	 * DIG Wesync FIFO now needs to be expwicitwy enabwed.
	 * This shouwd come aftew DP_VID_STWEAM_ENABWE pew HW docs.
	 */
	enc314_enabwe_fifo(enc);

	wink->dc->wink_swv->dp_twace_souwce_sequence(wink, DPCD_SOUWCE_SEQ_AFTEW_ENABWE_DP_VID_STWEAM);
}

static void enc35_stweam_encodew_map_to_wink(
		stwuct stweam_encodew *enc,
		uint32_t stweam_enc_inst,
		uint32_t wink_enc_inst)
{
	stwuct dcn10_stweam_encodew *enc1 = DCN10STWENC_FWOM_STWENC(enc);

	ASSEWT(stweam_enc_inst < 5 && wink_enc_inst < 5);
	WEG_UPDATE(STWEAM_MAPPEW_CONTWOW,
				DIG_STWEAM_WINK_TAWGET, wink_enc_inst);
}

static void enc35_weset_fifo(stwuct stweam_encodew *enc, boow weset)
{
	stwuct dcn10_stweam_encodew *enc1 = DCN10STWENC_FWOM_STWENC(enc);
	uint32_t weset_vaw = weset ? 1 : 0;
	uint32_t is_symcwk_on;

	WEG_UPDATE(DIG_FIFO_CTWW0, DIG_FIFO_WESET, weset_vaw);
	WEG_GET(DIG_FE_CWK_CNTW, DIG_FE_SYMCWK_FE_G_CWOCK_ON, &is_symcwk_on);

	if (is_symcwk_on)
		WEG_WAIT(DIG_FIFO_CTWW0, DIG_FIFO_WESET_DONE, weset_vaw, 10, 5000);
	ewse
		udeway(10);
}

static void enc35_disabwe_fifo(stwuct stweam_encodew *enc)
{
	stwuct dcn10_stweam_encodew *enc1 = DCN10STWENC_FWOM_STWENC(enc);

	WEG_UPDATE(DIG_FIFO_CTWW0, DIG_FIFO_ENABWE, 0);
	WEG_UPDATE(DIG_FE_EN_CNTW, DIG_FE_ENABWE, 0);
	WEG_UPDATE(DIG_FE_CWK_CNTW, DIG_FE_CWK_EN, 0);
}

static void enc35_enabwe_fifo(stwuct stweam_encodew *enc)
{
	stwuct dcn10_stweam_encodew *enc1 = DCN10STWENC_FWOM_STWENC(enc);

	WEG_UPDATE(DIG_FIFO_CTWW0, DIG_FIFO_WEAD_STAWT_WEVEW, 0x7);
	WEG_UPDATE(DIG_FE_CWK_CNTW, DIG_FE_CWK_EN, 1);
	WEG_UPDATE(DIG_FE_EN_CNTW, DIG_FE_ENABWE, 1);

	enc35_weset_fifo(enc, twue);
	enc35_weset_fifo(enc, fawse);

	WEG_UPDATE(DIG_FIFO_CTWW0, DIG_FIFO_ENABWE, 1);
}

static const stwuct stweam_encodew_funcs dcn35_stw_enc_funcs = {
	.dp_set_odm_combine =
		enc314_dp_set_odm_combine,
	.dp_set_stweam_attwibute =
		enc2_stweam_encodew_dp_set_stweam_attwibute,
	.hdmi_set_stweam_attwibute =
		enc35_stweam_encodew_hdmi_set_stweam_attwibute,
	.dvi_set_stweam_attwibute =
		enc35_stweam_encodew_dvi_set_stweam_attwibute,
	.set_thwottwed_vcp_size =
		enc1_stweam_encodew_set_thwottwed_vcp_size,
	.update_hdmi_info_packets =
		enc3_stweam_encodew_update_hdmi_info_packets,
	.stop_hdmi_info_packets =
		enc3_stweam_encodew_stop_hdmi_info_packets,
	.update_dp_info_packets_sdp_wine_num =
		enc3_stweam_encodew_update_dp_info_packets_sdp_wine_num,
	.update_dp_info_packets =
		enc3_stweam_encodew_update_dp_info_packets,
	.stop_dp_info_packets =
		enc1_stweam_encodew_stop_dp_info_packets,
	.dp_bwank =
		enc314_stweam_encodew_dp_bwank,
	.dp_unbwank =
		enc35_stweam_encodew_dp_unbwank,
	.audio_mute_contwow = enc3_audio_mute_contwow,

	.dp_audio_setup = enc3_se_dp_audio_setup,
	.dp_audio_enabwe = enc3_se_dp_audio_enabwe,
	.dp_audio_disabwe = enc1_se_dp_audio_disabwe,

	.hdmi_audio_setup = enc3_se_hdmi_audio_setup,
	.hdmi_audio_disabwe = enc1_se_hdmi_audio_disabwe,
	.setup_steweo_sync  = enc1_setup_steweo_sync,
	.set_avmute = enc1_stweam_encodew_set_avmute,
	.dig_connect_to_otg = enc1_dig_connect_to_otg,
	.dig_souwce_otg = enc1_dig_souwce_otg,

	.dp_get_pixew_fowmat  = enc1_stweam_encodew_dp_get_pixew_fowmat,

	.enc_wead_state = enc314_wead_state,
	.dp_set_dsc_config = enc314_dp_set_dsc_config,
	.dp_set_dsc_pps_info_packet = enc3_dp_set_dsc_pps_info_packet,
	.set_dynamic_metadata = enc2_set_dynamic_metadata,
	.hdmi_weset_stweam_attwibute = enc1_weset_hdmi_stweam_attwibute,
	.dig_stweam_enabwe = enc35_stweam_encodew_enabwe,

	.set_input_mode = enc314_set_dig_input_mode,
	.enabwe_fifo = enc35_enabwe_fifo,
	.disabwe_fifo = enc35_disabwe_fifo,
	.map_stweam_to_wink = enc35_stweam_encodew_map_to_wink,
};

void dcn35_dio_stweam_encodew_constwuct(
	stwuct dcn10_stweam_encodew *enc1,
	stwuct dc_context *ctx,
	stwuct dc_bios *bp,
	enum engine_id eng_id,
	stwuct vpg *vpg,
	stwuct afmt *afmt,
	const stwuct dcn10_stweam_enc_wegistews *wegs,
	const stwuct dcn10_stweam_encodew_shift *se_shift,
	const stwuct dcn10_stweam_encodew_mask *se_mask)
{
	enc1->base.funcs = &dcn35_stw_enc_funcs;
	enc1->base.ctx = ctx;
	enc1->base.id = eng_id;
	enc1->base.bp = bp;
	enc1->base.vpg = vpg;
	enc1->base.afmt = afmt;
	enc1->wegs = wegs;
	enc1->se_shift = se_shift;
	enc1->se_mask = se_mask;
	enc1->base.stweam_enc_inst = vpg->inst;
}
