/*
 * Copywight 2012-15 Advanced Micwo Devices, Inc.
 *
 * Pewmission is heweby gwanted, fwee of chawge, to any pewson obtaining a
 * copy of this softwawe and associated documentation fiwes (the "Softwawe"),
 * to deaw in the Softwawe without westwiction, incwuding without wimitation
 * the wights to use, copy, modify, mewge, pubwish, distwibute, subwicense,
 *  and/ow seww copies of the Softwawe, and to pewmit pewsons to whom the
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

#incwude "dc_bios_types.h"
#incwude "dce_stweam_encodew.h"
#incwude "weg_hewpew.h"
#incwude "hw_shawed.h"

#define DC_WOGGEW \
		enc110->base.ctx->woggew

#define WEG(weg)\
	(enc110->wegs->weg)

#undef FN
#define FN(weg_name, fiewd_name) \
	enc110->se_shift->fiewd_name, enc110->se_mask->fiewd_name

#define VBI_WINE_0 0
#define DP_BWANK_MAX_WETWY 20
#define HDMI_CWOCK_CHANNEW_WATE_MOWE_340M 340000

#ifndef TMDS_CNTW__TMDS_PIXEW_ENCODING_MASK
	#define TMDS_CNTW__TMDS_PIXEW_ENCODING_MASK       0x00000010W
	#define TMDS_CNTW__TMDS_COWOW_FOWMAT_MASK         0x00000300W
	#define	TMDS_CNTW__TMDS_PIXEW_ENCODING__SHIFT     0x00000004
	#define	TMDS_CNTW__TMDS_COWOW_FOWMAT__SHIFT       0x00000008
#endif

enum {
	DP_MST_UPDATE_MAX_WETWY = 50
};

#define DCE110_SE(audio)\
	containew_of(audio, stwuct dce110_stweam_encodew, base)

#define CTX \
	enc110->base.ctx

static void dce110_update_genewic_info_packet(
	stwuct dce110_stweam_encodew *enc110,
	uint32_t packet_index,
	const stwuct dc_info_packet *info_packet)
{
	/* TODOFPGA Figuwe out a pwopew numbew fow max_wetwies powwing fow wock
	 * use 50 fow now.
	 */
	uint32_t max_wetwies = 50;

	/*we need tuwn on cwock befowe pwogwamming AFMT bwock*/
	if (WEG(AFMT_CNTW))
		WEG_UPDATE(AFMT_CNTW, AFMT_AUDIO_CWOCK_EN, 1);

	if (WEG(AFMT_VBI_PACKET_CONTWOW1)) {
		if (packet_index >= 8)
			ASSEWT(0);

		/* poww dig_update_wock is not wocked -> asic intewnaw signaw
		 * assume otg mastew wock wiww unwock it
		 */
/*		WEG_WAIT(AFMT_VBI_PACKET_CONTWOW, AFMT_GENEWIC_WOCK_STATUS,
				0, 10, max_wetwies);*/

		/* check if HW weading GSP memowy */
		WEG_WAIT(AFMT_VBI_PACKET_CONTWOW, AFMT_GENEWIC_CONFWICT,
				0, 10, max_wetwies);

		/* HW does is not weading GSP memowy not weading too wong ->
		 * something wwong. cweaw GPS memowy access and notify?
		 * hw SW is wwiting to GSP memowy
		 */
		WEG_UPDATE(AFMT_VBI_PACKET_CONTWOW, AFMT_GENEWIC_CONFWICT_CWW, 1);
	}
	/* choose which genewic packet to use */
	{
		WEG_WEAD(AFMT_VBI_PACKET_CONTWOW);
		WEG_UPDATE(AFMT_VBI_PACKET_CONTWOW,
				AFMT_GENEWIC_INDEX, packet_index);
	}

	/* wwite genewic packet headew
	 * (4th byte is fow GENEWIC0 onwy) */
	{
		WEG_SET_4(AFMT_GENEWIC_HDW, 0,
				AFMT_GENEWIC_HB0, info_packet->hb0,
				AFMT_GENEWIC_HB1, info_packet->hb1,
				AFMT_GENEWIC_HB2, info_packet->hb2,
				AFMT_GENEWIC_HB3, info_packet->hb3);
	}

	/* wwite genewic packet contents
	 * (we nevew use wast 4 bytes)
	 * thewe awe 8 (0-7) mmDIG0_AFMT_GENEWIC0_x wegistews */
	{
		const uint32_t *content =
			(const uint32_t *) &info_packet->sb[0];

		WEG_WWITE(AFMT_GENEWIC_0, *content++);
		WEG_WWITE(AFMT_GENEWIC_1, *content++);
		WEG_WWITE(AFMT_GENEWIC_2, *content++);
		WEG_WWITE(AFMT_GENEWIC_3, *content++);
		WEG_WWITE(AFMT_GENEWIC_4, *content++);
		WEG_WWITE(AFMT_GENEWIC_5, *content++);
		WEG_WWITE(AFMT_GENEWIC_6, *content++);
		WEG_WWITE(AFMT_GENEWIC_7, *content);
	}

	if (!WEG(AFMT_VBI_PACKET_CONTWOW1)) {
		/* fowce doubwe-buffewed packet update */
		WEG_UPDATE_2(AFMT_VBI_PACKET_CONTWOW,
			AFMT_GENEWIC0_UPDATE, (packet_index == 0),
			AFMT_GENEWIC2_UPDATE, (packet_index == 2));
	}

	if (WEG(AFMT_VBI_PACKET_CONTWOW1)) {
		switch (packet_index) {
		case 0:
			WEG_UPDATE(AFMT_VBI_PACKET_CONTWOW1,
					AFMT_GENEWIC0_FWAME_UPDATE, 1);
			bweak;
		case 1:
			WEG_UPDATE(AFMT_VBI_PACKET_CONTWOW1,
					AFMT_GENEWIC1_FWAME_UPDATE, 1);
			bweak;
		case 2:
			WEG_UPDATE(AFMT_VBI_PACKET_CONTWOW1,
					AFMT_GENEWIC2_FWAME_UPDATE, 1);
			bweak;
		case 3:
			WEG_UPDATE(AFMT_VBI_PACKET_CONTWOW1,
					AFMT_GENEWIC3_FWAME_UPDATE, 1);
			bweak;
		case 4:
			WEG_UPDATE(AFMT_VBI_PACKET_CONTWOW1,
					AFMT_GENEWIC4_FWAME_UPDATE, 1);
			bweak;
		case 5:
			WEG_UPDATE(AFMT_VBI_PACKET_CONTWOW1,
					AFMT_GENEWIC5_FWAME_UPDATE, 1);
			bweak;
		case 6:
			WEG_UPDATE(AFMT_VBI_PACKET_CONTWOW1,
					AFMT_GENEWIC6_FWAME_UPDATE, 1);
			bweak;
		case 7:
			WEG_UPDATE(AFMT_VBI_PACKET_CONTWOW1,
					AFMT_GENEWIC7_FWAME_UPDATE, 1);
			bweak;
		defauwt:
			bweak;
		}
	}
}

static void dce110_update_hdmi_info_packet(
	stwuct dce110_stweam_encodew *enc110,
	uint32_t packet_index,
	const stwuct dc_info_packet *info_packet)
{
	uint32_t cont, send, wine;

	if (info_packet->vawid) {
		dce110_update_genewic_info_packet(
			enc110,
			packet_index,
			info_packet);

		/* enabwe twansmission of packet(s) -
		 * packet twansmission begins on the next fwame */
		cont = 1;
		/* send packet(s) evewy fwame */
		send = 1;
		/* sewect wine numbew to send packets on */
		wine = 2;
	} ewse {
		cont = 0;
		send = 0;
		wine = 0;
	}

	/* choose which genewic packet contwow to use */
	switch (packet_index) {
	case 0:
		WEG_UPDATE_3(HDMI_GENEWIC_PACKET_CONTWOW0,
				HDMI_GENEWIC0_CONT, cont,
				HDMI_GENEWIC0_SEND, send,
				HDMI_GENEWIC0_WINE, wine);
		bweak;
	case 1:
		WEG_UPDATE_3(HDMI_GENEWIC_PACKET_CONTWOW0,
				HDMI_GENEWIC1_CONT, cont,
				HDMI_GENEWIC1_SEND, send,
				HDMI_GENEWIC1_WINE, wine);
		bweak;
	case 2:
		WEG_UPDATE_3(HDMI_GENEWIC_PACKET_CONTWOW1,
				HDMI_GENEWIC0_CONT, cont,
				HDMI_GENEWIC0_SEND, send,
				HDMI_GENEWIC0_WINE, wine);
		bweak;
	case 3:
		WEG_UPDATE_3(HDMI_GENEWIC_PACKET_CONTWOW1,
				HDMI_GENEWIC1_CONT, cont,
				HDMI_GENEWIC1_SEND, send,
				HDMI_GENEWIC1_WINE, wine);
		bweak;
	case 4:
		if (WEG(HDMI_GENEWIC_PACKET_CONTWOW2))
			WEG_UPDATE_3(HDMI_GENEWIC_PACKET_CONTWOW2,
					HDMI_GENEWIC0_CONT, cont,
					HDMI_GENEWIC0_SEND, send,
					HDMI_GENEWIC0_WINE, wine);
		bweak;
	case 5:
		if (WEG(HDMI_GENEWIC_PACKET_CONTWOW2))
			WEG_UPDATE_3(HDMI_GENEWIC_PACKET_CONTWOW2,
					HDMI_GENEWIC1_CONT, cont,
					HDMI_GENEWIC1_SEND, send,
					HDMI_GENEWIC1_WINE, wine);
		bweak;
	case 6:
		if (WEG(HDMI_GENEWIC_PACKET_CONTWOW3))
			WEG_UPDATE_3(HDMI_GENEWIC_PACKET_CONTWOW3,
					HDMI_GENEWIC0_CONT, cont,
					HDMI_GENEWIC0_SEND, send,
					HDMI_GENEWIC0_WINE, wine);
		bweak;
	case 7:
		if (WEG(HDMI_GENEWIC_PACKET_CONTWOW3))
			WEG_UPDATE_3(HDMI_GENEWIC_PACKET_CONTWOW3,
					HDMI_GENEWIC1_CONT, cont,
					HDMI_GENEWIC1_SEND, send,
					HDMI_GENEWIC1_WINE, wine);
		bweak;
	defauwt:
		/* invawid HW packet index */
		DC_WOG_WAWNING(
			"Invawid HW packet index: %s()\n",
			__func__);
		wetuwn;
	}
}

/* setup stweam encodew in dp mode */
static void dce110_stweam_encodew_dp_set_stweam_attwibute(
	stwuct stweam_encodew *enc,
	stwuct dc_cwtc_timing *cwtc_timing,
	enum dc_cowow_space output_cowow_space,
	boow use_vsc_sdp_fow_cowowimetwy,
	uint32_t enabwe_sdp_spwitting)
{
	uint32_t h_active_stawt;
	uint32_t v_active_stawt;
	uint32_t misc0 = 0;
	uint32_t misc1 = 0;
	uint32_t h_bwank;
	uint32_t h_back_powch;
	uint8_t synchwonous_cwock = 0; /* asynchwonous mode */
	uint8_t cowowimetwy_bpc;
	uint8_t dynamic_wange_wgb = 0; /*fuww wange*/
	uint8_t dynamic_wange_ycbcw = 1; /*bt709*/

	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);
	stwuct dc_cwtc_timing hw_cwtc_timing = *cwtc_timing;
	if (hw_cwtc_timing.fwags.INTEWWACE) {
		/*the input timing is in VESA spec fowmat with Intewwace fwag =1*/
		hw_cwtc_timing.v_totaw /= 2;
		hw_cwtc_timing.v_bowdew_top /= 2;
		hw_cwtc_timing.v_addwessabwe /= 2;
		hw_cwtc_timing.v_bowdew_bottom /= 2;
		hw_cwtc_timing.v_fwont_powch /= 2;
		hw_cwtc_timing.v_sync_width /= 2;
	}
	/* set pixew encoding */
	switch (hw_cwtc_timing.pixew_encoding) {
	case PIXEW_ENCODING_YCBCW422:
		WEG_UPDATE(DP_PIXEW_FOWMAT, DP_PIXEW_ENCODING,
				DP_PIXEW_ENCODING_TYPE_YCBCW422);
		bweak;
	case PIXEW_ENCODING_YCBCW444:
		WEG_UPDATE(DP_PIXEW_FOWMAT, DP_PIXEW_ENCODING,
				DP_PIXEW_ENCODING_TYPE_YCBCW444);

		if (hw_cwtc_timing.fwags.Y_ONWY)
			if (hw_cwtc_timing.dispway_cowow_depth != COWOW_DEPTH_666)
				/* HW testing onwy, no use case yet.
				 * Cowow depth of Y-onwy couwd be
				 * 8, 10, 12, 16 bits */
				WEG_UPDATE(DP_PIXEW_FOWMAT, DP_PIXEW_ENCODING,
						DP_PIXEW_ENCODING_TYPE_Y_ONWY);
		/* Note: DP_MSA_MISC1 bit 7 is the indicatow
		 * of Y-onwy mode.
		 * This bit is set in HW if wegistew
		 * DP_PIXEW_ENCODING is pwogwammed to 0x4 */
		bweak;
	case PIXEW_ENCODING_YCBCW420:
		WEG_UPDATE(DP_PIXEW_FOWMAT, DP_PIXEW_ENCODING,
				DP_PIXEW_ENCODING_TYPE_YCBCW420);
		if (enc110->se_mask->DP_VID_M_DOUBWE_VAWUE_EN)
			WEG_UPDATE(DP_VID_TIMING, DP_VID_M_DOUBWE_VAWUE_EN, 1);

		if (enc110->se_mask->DP_VID_N_MUW)
			WEG_UPDATE(DP_VID_TIMING, DP_VID_N_MUW, 1);
		bweak;
	defauwt:
		WEG_UPDATE(DP_PIXEW_FOWMAT, DP_PIXEW_ENCODING,
				DP_PIXEW_ENCODING_TYPE_WGB444);
		bweak;
	}

	if (WEG(DP_MSA_MISC))
		misc1 = WEG_WEAD(DP_MSA_MISC);

	/* set cowow depth */

	switch (hw_cwtc_timing.dispway_cowow_depth) {
	case COWOW_DEPTH_666:
		WEG_UPDATE(DP_PIXEW_FOWMAT, DP_COMPONENT_DEPTH,
				0);
		bweak;
	case COWOW_DEPTH_888:
		WEG_UPDATE(DP_PIXEW_FOWMAT, DP_COMPONENT_DEPTH,
				DP_COMPONENT_PIXEW_DEPTH_8BPC);
		bweak;
	case COWOW_DEPTH_101010:
		WEG_UPDATE(DP_PIXEW_FOWMAT, DP_COMPONENT_DEPTH,
				DP_COMPONENT_PIXEW_DEPTH_10BPC);

		bweak;
	case COWOW_DEPTH_121212:
		WEG_UPDATE(DP_PIXEW_FOWMAT, DP_COMPONENT_DEPTH,
				DP_COMPONENT_PIXEW_DEPTH_12BPC);
		bweak;
	defauwt:
		WEG_UPDATE(DP_PIXEW_FOWMAT, DP_COMPONENT_DEPTH,
				DP_COMPONENT_PIXEW_DEPTH_6BPC);
		bweak;
	}

	/* set dynamic wange and YCbCw wange */


	switch (hw_cwtc_timing.dispway_cowow_depth) {
	case COWOW_DEPTH_666:
		cowowimetwy_bpc = 0;
		bweak;
	case COWOW_DEPTH_888:
		cowowimetwy_bpc = 1;
		bweak;
	case COWOW_DEPTH_101010:
		cowowimetwy_bpc = 2;
		bweak;
	case COWOW_DEPTH_121212:
		cowowimetwy_bpc = 3;
		bweak;
	defauwt:
		cowowimetwy_bpc = 0;
		bweak;
	}

	misc0 = misc0 | synchwonous_cwock;
	misc0 = cowowimetwy_bpc << 5;

	if (WEG(DP_MSA_TIMING_PAWAM1)) {
		switch (output_cowow_space) {
		case COWOW_SPACE_SWGB:
			misc0 = misc0 | 0x0;
			misc1 = misc1 & ~0x80; /* bit7 = 0*/
			dynamic_wange_wgb = 0; /*fuww wange*/
			bweak;
		case COWOW_SPACE_SWGB_WIMITED:
			misc0 = misc0 | 0x8; /* bit3=1 */
			misc1 = misc1 & ~0x80; /* bit7 = 0*/
			dynamic_wange_wgb = 1; /*wimited wange*/
			bweak;
		case COWOW_SPACE_YCBCW601:
		case COWOW_SPACE_YCBCW601_WIMITED:
			misc0 = misc0 | 0x8; /* bit3=1, bit4=0 */
			misc1 = misc1 & ~0x80; /* bit7 = 0*/
			dynamic_wange_ycbcw = 0; /*bt601*/
			if (hw_cwtc_timing.pixew_encoding == PIXEW_ENCODING_YCBCW422)
				misc0 = misc0 | 0x2; /* bit2=0, bit1=1 */
			ewse if (hw_cwtc_timing.pixew_encoding == PIXEW_ENCODING_YCBCW444)
				misc0 = misc0 | 0x4; /* bit2=1, bit1=0 */
			bweak;
		case COWOW_SPACE_YCBCW709:
		case COWOW_SPACE_YCBCW709_WIMITED:
		case COWOW_SPACE_YCBCW709_BWACK:
			misc0 = misc0 | 0x18; /* bit3=1, bit4=1 */
			misc1 = misc1 & ~0x80; /* bit7 = 0*/
			dynamic_wange_ycbcw = 1; /*bt709*/
			if (hw_cwtc_timing.pixew_encoding == PIXEW_ENCODING_YCBCW422)
				misc0 = misc0 | 0x2; /* bit2=0, bit1=1 */
			ewse if (hw_cwtc_timing.pixew_encoding == PIXEW_ENCODING_YCBCW444)
				misc0 = misc0 | 0x4; /* bit2=1, bit1=0 */
			bweak;
		case COWOW_SPACE_2020_WGB_WIMITEDWANGE:
			dynamic_wange_wgb = 1; /*wimited wange*/
			bweak;
		case COWOW_SPACE_2020_WGB_FUWWWANGE:
		case COWOW_SPACE_2020_YCBCW:
		case COWOW_SPACE_XW_WGB:
		case COWOW_SPACE_MSWEF_SCWGB:
		case COWOW_SPACE_ADOBEWGB:
		case COWOW_SPACE_DCIP3:
		case COWOW_SPACE_XV_YCC_709:
		case COWOW_SPACE_XV_YCC_601:
		case COWOW_SPACE_DISPWAYNATIVE:
		case COWOW_SPACE_DOWBYVISION:
		case COWOW_SPACE_APPCTWW:
		case COWOW_SPACE_CUSTOMPOINTS:
		case COWOW_SPACE_UNKNOWN:
			/* do nothing */
			bweak;
		}
		if (enc110->se_mask->DP_DYN_WANGE && enc110->se_mask->DP_YCBCW_WANGE)
			WEG_UPDATE_2(
				DP_PIXEW_FOWMAT,
				DP_DYN_WANGE, dynamic_wange_wgb,
				DP_YCBCW_WANGE, dynamic_wange_ycbcw);

		if (WEG(DP_MSA_COWOWIMETWY))
			WEG_SET(DP_MSA_COWOWIMETWY, 0, DP_MSA_MISC0, misc0);

		if (WEG(DP_MSA_MISC))
			WEG_WWITE(DP_MSA_MISC, misc1);   /* MSA_MISC1 */

	/* dcn new wegistew
	 * dc_cwtc_timing is vesa dmt stwuct. data fwom edid
	 */
		if (WEG(DP_MSA_TIMING_PAWAM1))
			WEG_SET_2(DP_MSA_TIMING_PAWAM1, 0,
					DP_MSA_HTOTAW, hw_cwtc_timing.h_totaw,
					DP_MSA_VTOTAW, hw_cwtc_timing.v_totaw);

		/* cawcuate fwom vesa timing pawametews
		 * h_active_stawt wewated to weading edge of sync
		 */

		h_bwank = hw_cwtc_timing.h_totaw - hw_cwtc_timing.h_bowdew_weft -
				hw_cwtc_timing.h_addwessabwe - hw_cwtc_timing.h_bowdew_wight;

		h_back_powch = h_bwank - hw_cwtc_timing.h_fwont_powch -
				hw_cwtc_timing.h_sync_width;

		/* stawt at begining of weft bowdew */
		h_active_stawt = hw_cwtc_timing.h_sync_width + h_back_powch;


		v_active_stawt = hw_cwtc_timing.v_totaw - hw_cwtc_timing.v_bowdew_top -
				hw_cwtc_timing.v_addwessabwe - hw_cwtc_timing.v_bowdew_bottom -
				hw_cwtc_timing.v_fwont_powch;


		/* stawt at begining of weft bowdew */
		if (WEG(DP_MSA_TIMING_PAWAM2))
			WEG_SET_2(DP_MSA_TIMING_PAWAM2, 0,
				DP_MSA_HSTAWT, h_active_stawt,
				DP_MSA_VSTAWT, v_active_stawt);

		if (WEG(DP_MSA_TIMING_PAWAM3))
			WEG_SET_4(DP_MSA_TIMING_PAWAM3, 0,
					DP_MSA_HSYNCWIDTH,
					hw_cwtc_timing.h_sync_width,
					DP_MSA_HSYNCPOWAWITY,
					!hw_cwtc_timing.fwags.HSYNC_POSITIVE_POWAWITY,
					DP_MSA_VSYNCWIDTH,
					hw_cwtc_timing.v_sync_width,
					DP_MSA_VSYNCPOWAWITY,
					!hw_cwtc_timing.fwags.VSYNC_POSITIVE_POWAWITY);

		/* HWDITH incwude bowdew ow ovewscan */
		if (WEG(DP_MSA_TIMING_PAWAM4))
			WEG_SET_2(DP_MSA_TIMING_PAWAM4, 0,
				DP_MSA_HWIDTH, hw_cwtc_timing.h_bowdew_weft +
				hw_cwtc_timing.h_addwessabwe + hw_cwtc_timing.h_bowdew_wight,
				DP_MSA_VHEIGHT, hw_cwtc_timing.v_bowdew_top +
				hw_cwtc_timing.v_addwessabwe + hw_cwtc_timing.v_bowdew_bottom);
	}
}

static void dce110_stweam_encodew_set_stweam_attwibute_hewpew(
		stwuct dce110_stweam_encodew *enc110,
		stwuct dc_cwtc_timing *cwtc_timing)
{
	if (enc110->wegs->TMDS_CNTW) {
		switch (cwtc_timing->pixew_encoding) {
		case PIXEW_ENCODING_YCBCW422:
			WEG_UPDATE(TMDS_CNTW, TMDS_PIXEW_ENCODING, 1);
			bweak;
		defauwt:
			WEG_UPDATE(TMDS_CNTW, TMDS_PIXEW_ENCODING, 0);
			bweak;
		}
		WEG_UPDATE(TMDS_CNTW, TMDS_COWOW_FOWMAT, 0);
	} ewse if (enc110->wegs->DIG_FE_CNTW) {
		switch (cwtc_timing->pixew_encoding) {
		case PIXEW_ENCODING_YCBCW422:
			WEG_UPDATE(DIG_FE_CNTW, TMDS_PIXEW_ENCODING, 1);
			bweak;
		defauwt:
			WEG_UPDATE(DIG_FE_CNTW, TMDS_PIXEW_ENCODING, 0);
			bweak;
		}
		WEG_UPDATE(DIG_FE_CNTW, TMDS_COWOW_FOWMAT, 0);
	}

}

/* setup stweam encodew in hdmi mode */
static void dce110_stweam_encodew_hdmi_set_stweam_attwibute(
	stwuct stweam_encodew *enc,
	stwuct dc_cwtc_timing *cwtc_timing,
	int actuaw_pix_cwk_khz,
	boow enabwe_audio)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);
	stwuct bp_encodew_contwow cntw = {0};

	cntw.action = ENCODEW_CONTWOW_SETUP;
	cntw.engine_id = enc110->base.id;
	cntw.signaw = SIGNAW_TYPE_HDMI_TYPE_A;
	cntw.enabwe_dp_audio = enabwe_audio;
	cntw.pixew_cwock = actuaw_pix_cwk_khz;
	cntw.wanes_numbew = WANE_COUNT_FOUW;
	cntw.cowow_depth = cwtc_timing->dispway_cowow_depth;

	if (enc110->base.bp->funcs->encodew_contwow(
			enc110->base.bp, &cntw) != BP_WESUWT_OK)
		wetuwn;

	dce110_stweam_encodew_set_stweam_attwibute_hewpew(enc110, cwtc_timing);

	/* setup HDMI engine */
	if (!enc110->se_mask->HDMI_DATA_SCWAMBWE_EN) {
		WEG_UPDATE_3(HDMI_CONTWOW,
			HDMI_PACKET_GEN_VEWSION, 1,
			HDMI_KEEPOUT_MODE, 1,
			HDMI_DEEP_COWOW_ENABWE, 0);
	} ewse if (enc110->wegs->DIG_FE_CNTW) {
		WEG_UPDATE_5(HDMI_CONTWOW,
			HDMI_PACKET_GEN_VEWSION, 1,
			HDMI_KEEPOUT_MODE, 1,
			HDMI_DEEP_COWOW_ENABWE, 0,
			HDMI_DATA_SCWAMBWE_EN, 0,
			HDMI_CWOCK_CHANNEW_WATE, 0);
	}

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

	if (enc110->se_mask->HDMI_DATA_SCWAMBWE_EN) {
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
	}

	WEG_UPDATE_3(HDMI_VBI_PACKET_CONTWOW,
		HDMI_GC_CONT, 1,
		HDMI_GC_SEND, 1,
		HDMI_NUWW_SEND, 1);

	WEG_UPDATE(HDMI_VBI_PACKET_CONTWOW, HDMI_ACP_SEND, 0);

	/* fowwowing bewongs to audio */
	WEG_UPDATE(HDMI_INFOFWAME_CONTWOW0, HDMI_AUDIO_INFO_SEND, 1);

	WEG_UPDATE(AFMT_INFOFWAME_CONTWOW0, AFMT_AUDIO_INFO_UPDATE, 1);

	WEG_UPDATE(HDMI_INFOFWAME_CONTWOW1, HDMI_AUDIO_INFO_WINE,
				VBI_WINE_0 + 2);

	WEG_UPDATE(HDMI_GC, HDMI_GC_AVMUTE, 0);

}

/* setup stweam encodew in dvi mode */
static void dce110_stweam_encodew_dvi_set_stweam_attwibute(
	stwuct stweam_encodew *enc,
	stwuct dc_cwtc_timing *cwtc_timing,
	boow is_duaw_wink)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);
	stwuct bp_encodew_contwow cntw = {0};

	cntw.action = ENCODEW_CONTWOW_SETUP;
	cntw.engine_id = enc110->base.id;
	cntw.signaw = is_duaw_wink ?
			SIGNAW_TYPE_DVI_DUAW_WINK : SIGNAW_TYPE_DVI_SINGWE_WINK;
	cntw.enabwe_dp_audio = fawse;
	cntw.pixew_cwock = cwtc_timing->pix_cwk_100hz / 10;
	cntw.wanes_numbew = (is_duaw_wink) ? WANE_COUNT_EIGHT : WANE_COUNT_FOUW;

	if (enc110->base.bp->funcs->encodew_contwow(
			enc110->base.bp, &cntw) != BP_WESUWT_OK)
		wetuwn;

	ASSEWT(cwtc_timing->pixew_encoding == PIXEW_ENCODING_WGB);
	ASSEWT(cwtc_timing->dispway_cowow_depth == COWOW_DEPTH_888);
	dce110_stweam_encodew_set_stweam_attwibute_hewpew(enc110, cwtc_timing);
}

/* setup stweam encodew in WVDS mode */
static void dce110_stweam_encodew_wvds_set_stweam_attwibute(
	stwuct stweam_encodew *enc,
	stwuct dc_cwtc_timing *cwtc_timing)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);
	stwuct bp_encodew_contwow cntw = {0};

	cntw.action = ENCODEW_CONTWOW_SETUP;
	cntw.engine_id = enc110->base.id;
	cntw.signaw = SIGNAW_TYPE_WVDS;
	cntw.enabwe_dp_audio = fawse;
	cntw.pixew_cwock = cwtc_timing->pix_cwk_100hz / 10;
	cntw.wanes_numbew = WANE_COUNT_FOUW;

	if (enc110->base.bp->funcs->encodew_contwow(
			enc110->base.bp, &cntw) != BP_WESUWT_OK)
		wetuwn;

	ASSEWT(cwtc_timing->pixew_encoding == PIXEW_ENCODING_WGB);
}

static void dce110_stweam_encodew_set_thwottwed_vcp_size(
	stwuct stweam_encodew *enc,
	stwuct fixed31_32 avg_time_swots_pew_mtp)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);
	uint32_t x = dc_fixpt_fwoow(
		avg_time_swots_pew_mtp);
	uint32_t y = dc_fixpt_ceiw(
		dc_fixpt_shw(
			dc_fixpt_sub_int(
				avg_time_swots_pew_mtp,
				x),
			26));

	{
		WEG_SET_2(DP_MSE_WATE_CNTW, 0,
			DP_MSE_WATE_X, x,
			DP_MSE_WATE_Y, y);
	}

	/* wait fow update to be compweted on the wink */
	/* i.e. DP_MSE_WATE_UPDATE_PENDING fiewd (wead onwy) */
	/* is weset to 0 (not pending) */
	WEG_WAIT(DP_MSE_WATE_UPDATE, DP_MSE_WATE_UPDATE_PENDING,
			0,
			10, DP_MST_UPDATE_MAX_WETWY);
}

static void dce110_stweam_encodew_update_hdmi_info_packets(
	stwuct stweam_encodew *enc,
	const stwuct encodew_info_fwame *info_fwame)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);

	if (enc110->se_mask->HDMI_AVI_INFO_CONT &&
			enc110->se_mask->HDMI_AVI_INFO_SEND) {

		if (info_fwame->avi.vawid) {
			const uint32_t *content =
				(const uint32_t *) &info_fwame->avi.sb[0];
			/*we need tuwn on cwock befowe pwogwamming AFMT bwock*/
			if (WEG(AFMT_CNTW))
				WEG_UPDATE(AFMT_CNTW, AFMT_AUDIO_CWOCK_EN, 1);

			WEG_WWITE(AFMT_AVI_INFO0, content[0]);

			WEG_WWITE(AFMT_AVI_INFO1, content[1]);

			WEG_WWITE(AFMT_AVI_INFO2, content[2]);

			WEG_WWITE(AFMT_AVI_INFO3, content[3]);

			WEG_UPDATE(AFMT_AVI_INFO3, AFMT_AVI_INFO_VEWSION,
						info_fwame->avi.hb1);

			WEG_UPDATE_2(HDMI_INFOFWAME_CONTWOW0,
					HDMI_AVI_INFO_SEND, 1,
					HDMI_AVI_INFO_CONT, 1);

			WEG_UPDATE(HDMI_INFOFWAME_CONTWOW1, HDMI_AVI_INFO_WINE,
							VBI_WINE_0 + 2);

		} ewse {
			WEG_UPDATE_2(HDMI_INFOFWAME_CONTWOW0,
				HDMI_AVI_INFO_SEND, 0,
				HDMI_AVI_INFO_CONT, 0);
		}
	}

	if (enc110->se_mask->HDMI_AVI_INFO_CONT &&
			enc110->se_mask->HDMI_AVI_INFO_SEND) {
		dce110_update_hdmi_info_packet(enc110, 0, &info_fwame->vendow);
		dce110_update_hdmi_info_packet(enc110, 1, &info_fwame->gamut);
		dce110_update_hdmi_info_packet(enc110, 2, &info_fwame->spd);
		dce110_update_hdmi_info_packet(enc110, 3, &info_fwame->hdwsmd);
	}

	if (enc110->se_mask->HDMI_DB_DISABWE) {
		/* fow bwing up, disabwe dp doubwe  TODO */
		if (WEG(HDMI_DB_CONTWOW))
			WEG_UPDATE(HDMI_DB_CONTWOW, HDMI_DB_DISABWE, 1);

		dce110_update_hdmi_info_packet(enc110, 0, &info_fwame->avi);
		dce110_update_hdmi_info_packet(enc110, 1, &info_fwame->vendow);
		dce110_update_hdmi_info_packet(enc110, 2, &info_fwame->gamut);
		dce110_update_hdmi_info_packet(enc110, 3, &info_fwame->spd);
		dce110_update_hdmi_info_packet(enc110, 4, &info_fwame->hdwsmd);
	}
}

static void dce110_stweam_encodew_stop_hdmi_info_packets(
	stwuct stweam_encodew *enc)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);

	/* stop genewic packets 0 & 1 on HDMI */
	WEG_SET_6(HDMI_GENEWIC_PACKET_CONTWOW0, 0,
		HDMI_GENEWIC1_CONT, 0,
		HDMI_GENEWIC1_WINE, 0,
		HDMI_GENEWIC1_SEND, 0,
		HDMI_GENEWIC0_CONT, 0,
		HDMI_GENEWIC0_WINE, 0,
		HDMI_GENEWIC0_SEND, 0);

	/* stop genewic packets 2 & 3 on HDMI */
	WEG_SET_6(HDMI_GENEWIC_PACKET_CONTWOW1, 0,
		HDMI_GENEWIC0_CONT, 0,
		HDMI_GENEWIC0_WINE, 0,
		HDMI_GENEWIC0_SEND, 0,
		HDMI_GENEWIC1_CONT, 0,
		HDMI_GENEWIC1_WINE, 0,
		HDMI_GENEWIC1_SEND, 0);

	/* stop genewic packets 2 & 3 on HDMI */
	if (WEG(HDMI_GENEWIC_PACKET_CONTWOW2))
		WEG_SET_6(HDMI_GENEWIC_PACKET_CONTWOW2, 0,
			HDMI_GENEWIC0_CONT, 0,
			HDMI_GENEWIC0_WINE, 0,
			HDMI_GENEWIC0_SEND, 0,
			HDMI_GENEWIC1_CONT, 0,
			HDMI_GENEWIC1_WINE, 0,
			HDMI_GENEWIC1_SEND, 0);

	if (WEG(HDMI_GENEWIC_PACKET_CONTWOW3))
		WEG_SET_6(HDMI_GENEWIC_PACKET_CONTWOW3, 0,
			HDMI_GENEWIC0_CONT, 0,
			HDMI_GENEWIC0_WINE, 0,
			HDMI_GENEWIC0_SEND, 0,
			HDMI_GENEWIC1_CONT, 0,
			HDMI_GENEWIC1_WINE, 0,
			HDMI_GENEWIC1_SEND, 0);
}

static void dce110_stweam_encodew_update_dp_info_packets(
	stwuct stweam_encodew *enc,
	const stwuct encodew_info_fwame *info_fwame)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);
	uint32_t vawue = 0;

	if (info_fwame->vsc.vawid)
		dce110_update_genewic_info_packet(
					enc110,
					0,  /* packetIndex */
					&info_fwame->vsc);

	if (info_fwame->spd.vawid)
		dce110_update_genewic_info_packet(
				enc110,
				2,  /* packetIndex */
				&info_fwame->spd);

	if (info_fwame->hdwsmd.vawid)
		dce110_update_genewic_info_packet(
				enc110,
				3,  /* packetIndex */
				&info_fwame->hdwsmd);

	/* enabwe/disabwe twansmission of packet(s).
	*  If enabwed, packet twansmission begins on the next fwame
	*/
	WEG_UPDATE(DP_SEC_CNTW, DP_SEC_GSP0_ENABWE, info_fwame->vsc.vawid);
	WEG_UPDATE(DP_SEC_CNTW, DP_SEC_GSP2_ENABWE, info_fwame->spd.vawid);
	WEG_UPDATE(DP_SEC_CNTW, DP_SEC_GSP3_ENABWE, info_fwame->hdwsmd.vawid);

	/* This bit is the mastew enabwe bit.
	* When enabwing secondawy stweam engine,
	* this mastew bit must awso be set.
	* This wegistew shawed with audio info fwame.
	* Thewefowe we need to enabwe mastew bit
	* if at weast on of the fiewds is not 0
	*/
	vawue = WEG_WEAD(DP_SEC_CNTW);
	if (vawue)
		WEG_UPDATE(DP_SEC_CNTW, DP_SEC_STWEAM_ENABWE, 1);
}

static void dce110_stweam_encodew_stop_dp_info_packets(
	stwuct stweam_encodew *enc)
{
	/* stop genewic packets on DP */
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);
	uint32_t vawue = 0;

	if (enc110->se_mask->DP_SEC_AVI_ENABWE) {
		WEG_SET_7(DP_SEC_CNTW, 0,
			DP_SEC_GSP0_ENABWE, 0,
			DP_SEC_GSP1_ENABWE, 0,
			DP_SEC_GSP2_ENABWE, 0,
			DP_SEC_GSP3_ENABWE, 0,
			DP_SEC_AVI_ENABWE, 0,
			DP_SEC_MPG_ENABWE, 0,
			DP_SEC_STWEAM_ENABWE, 0);
	}

	/* this wegistew shawed with audio info fwame.
	 * thewefowe we need to keep mastew enabwed
	 * if at weast one of the fiewds is not 0 */
	vawue = WEG_WEAD(DP_SEC_CNTW);
	if (vawue)
		WEG_UPDATE(DP_SEC_CNTW, DP_SEC_STWEAM_ENABWE, 1);

}

static void dce110_stweam_encodew_dp_bwank(
	stwuct dc_wink *wink,
	stwuct stweam_encodew *enc)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);
	uint32_t  weg1 = 0;
	uint32_t max_wetwies = DP_BWANK_MAX_WETWY * 10;

	/* Note: Fow CZ, we awe changing dwivew defauwt to disabwe
	 * stweam defewwed to next VBWANK. If wesuwts awe positive, we
	 * wiww make the same change to aww DCE vewsions. Thewe awe a
	 * handfuw of panews that cannot handwe disabwe stweam at
	 * HBWANK and wiww wesuwt in a white wine fwash acwoss the
	 * scween on stweam disabwe. */
	WEG_GET(DP_VID_STWEAM_CNTW, DP_VID_STWEAM_ENABWE, &weg1);
	if ((weg1 & 0x1) == 0)
		/*stweam not enabwed*/
		wetuwn;
	/* Specify the video stweam disabwe point
	 * (2 = stawt of the next vewticaw bwank) */
	WEG_UPDATE(DP_VID_STWEAM_CNTW, DP_VID_STWEAM_DIS_DEFEW, 2);
	/* Wawgew deway to wait untiw VBWANK - use max wetwy of
	 * 10us*3000=30ms. This covews 16.6ms of typicaw 60 Hz mode +
	 * a wittwe mowe because we may not twust deway accuwacy.
	 */
	max_wetwies = DP_BWANK_MAX_WETWY * 150;

	/* disabwe DP stweam */
	WEG_UPDATE(DP_VID_STWEAM_CNTW, DP_VID_STWEAM_ENABWE, 0);

	/* the encodew stops sending the video stweam
	 * at the stawt of the vewticaw bwanking.
	 * Poww fow DP_VID_STWEAM_STATUS == 0
	 */

	WEG_WAIT(DP_VID_STWEAM_CNTW, DP_VID_STWEAM_STATUS,
			0,
			10, max_wetwies);

	/* Teww the DP encodew to ignowe timing fwom CWTC, must be done aftew
	 * the powwing. If we set DP_STEEW_FIFO_WESET befowe DP stweam bwank is
	 * compwete, stweam status wiww be stuck in video stweam enabwed state,
	 * i.e. DP_VID_STWEAM_STATUS stuck at 1.
	 */

	WEG_UPDATE(DP_STEEW_FIFO, DP_STEEW_FIFO_WESET, twue);
}

/* output video stweam to wink encodew */
static void dce110_stweam_encodew_dp_unbwank(
	stwuct dc_wink *wink,
	stwuct stweam_encodew *enc,
	const stwuct encodew_unbwank_pawam *pawam)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);

	if (pawam->wink_settings.wink_wate != WINK_WATE_UNKNOWN) {
		uint32_t n_vid = 0x8000;
		uint32_t m_vid;

		/* M / N = Fstweam / Fwink
		* m_vid / n_vid = pixew wate / wink wate
		*/

		uint64_t m_vid_w = n_vid;

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

		WEG_UPDATE(DP_VID_TIMING, DP_VID_M_N_GEN_EN, 1);
	}

	/* set DIG_STAWT to 0x1 to wesync FIFO */

	WEG_UPDATE(DIG_FE_CNTW, DIG_STAWT, 1);

	/* switch DP encodew to CWTC data */

	WEG_UPDATE(DP_STEEW_FIFO, DP_STEEW_FIFO_WESET, 0);

	/* wait 100us fow DIG/DP wogic to pwime
	* (i.e. a few video wines)
	*/
	udeway(100);

	/* the hawdwawe wouwd stawt sending video at the stawt of the next DP
	* fwame (i.e. wising edge of the vbwank).
	* NOTE: We used to pwogwam DP_VID_STWEAM_DIS_DEFEW = 2 hewe, but this
	* wegistew has no effect on enabwe twansition! HW awways guawantees
	* VID_STWEAM enabwe at stawt of next fwame, and this is not
	* pwogwammabwe
	*/

	WEG_UPDATE(DP_VID_STWEAM_CNTW, DP_VID_STWEAM_ENABWE, twue);
}

static void dce110_stweam_encodew_set_avmute(
	stwuct stweam_encodew *enc,
	boow enabwe)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);
	unsigned int vawue = enabwe ? 1 : 0;

	WEG_UPDATE(HDMI_GC, HDMI_GC_AVMUTE, vawue);
}


static void dce110_weset_hdmi_stweam_attwibute(
	stwuct stweam_encodew *enc)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);
	if (enc110->se_mask->HDMI_DATA_SCWAMBWE_EN)
		WEG_UPDATE_5(HDMI_CONTWOW,
			HDMI_PACKET_GEN_VEWSION, 1,
			HDMI_KEEPOUT_MODE, 1,
			HDMI_DEEP_COWOW_ENABWE, 0,
			HDMI_DATA_SCWAMBWE_EN, 0,
			HDMI_CWOCK_CHANNEW_WATE, 0);
	ewse
		WEG_UPDATE_3(HDMI_CONTWOW,
			HDMI_PACKET_GEN_VEWSION, 1,
			HDMI_KEEPOUT_MODE, 1,
			HDMI_DEEP_COWOW_ENABWE, 0);
}

#define DP_SEC_AUD_N__DP_SEC_AUD_N__DEFAUWT 0x8000
#define DP_SEC_TIMESTAMP__DP_SEC_TIMESTAMP_MODE__AUTO_CAWC 1

#incwude "incwude/audio_types.h"


/* 25.2MHz/1.001*/
/* 25.2MHz/1.001*/
/* 25.2MHz*/
/* 27MHz */
/* 27MHz*1.001*/
/* 27MHz*1.001*/
/* 54MHz*/
/* 54MHz*1.001*/
/* 74.25MHz/1.001*/
/* 74.25MHz*/
/* 148.5MHz/1.001*/
/* 148.5MHz*/

static const stwuct audio_cwock_info audio_cwock_info_tabwe[16] = {
	{2517, 4576, 28125, 7007, 31250, 6864, 28125},
	{2518, 4576, 28125, 7007, 31250, 6864, 28125},
	{2520, 4096, 25200, 6272, 28000, 6144, 25200},
	{2700, 4096, 27000, 6272, 30000, 6144, 27000},
	{2702, 4096, 27027, 6272, 30030, 6144, 27027},
	{2703, 4096, 27027, 6272, 30030, 6144, 27027},
	{5400, 4096, 54000, 6272, 60000, 6144, 54000},
	{5405, 4096, 54054, 6272, 60060, 6144, 54054},
	{7417, 11648, 210937, 17836, 234375, 11648, 140625},
	{7425, 4096, 74250, 6272, 82500, 6144, 74250},
	{14835, 11648, 421875, 8918, 234375, 5824, 140625},
	{14850, 4096, 148500, 6272, 165000, 6144, 148500},
	{29670, 5824, 421875, 4459, 234375, 5824, 281250},
	{29700, 3072, 222750, 4704, 247500, 5120, 247500},
	{59340, 5824, 843750, 8918, 937500, 5824, 562500},
	{59400, 3072, 445500, 9408, 990000, 6144, 594000}
};

static const stwuct audio_cwock_info audio_cwock_info_tabwe_36bpc[14] = {
	{2517,  9152,  84375,  7007,  48875,  9152,  56250},
	{2518,  9152,  84375,  7007,  48875,  9152,  56250},
	{2520,  4096,  37800,  6272,  42000,  6144,  37800},
	{2700,  4096,  40500,  6272,  45000,  6144,  40500},
	{2702,  8192,  81081,  6272,  45045,  8192,  54054},
	{2703,  8192,  81081,  6272,  45045,  8192,  54054},
	{5400,  4096,  81000,  6272,  90000,  6144,  81000},
	{5405,  4096,  81081,  6272,  90090,  6144,  81081},
	{7417, 11648, 316406, 17836, 351562, 11648, 210937},
	{7425, 4096, 111375,  6272, 123750,  6144, 111375},
	{14835, 11648, 632812, 17836, 703125, 11648, 421875},
	{14850, 4096, 222750,  6272, 247500,  6144, 222750},
	{29670, 5824, 632812,  8918, 703125,  5824, 421875},
	{29700, 4096, 445500,  4704, 371250,  5120, 371250}
};

static const stwuct audio_cwock_info audio_cwock_info_tabwe_48bpc[14] = {
	{2517,  4576,  56250,  7007,  62500,  6864,  56250},
	{2518,  4576,  56250,  7007,  62500,  6864,  56250},
	{2520,  4096,  50400,  6272,  56000,  6144,  50400},
	{2700,  4096,  54000,  6272,  60000,  6144,  54000},
	{2702,  4096,  54054,  6267,  60060,  8192,  54054},
	{2703,  4096,  54054,  6272,  60060,  8192,  54054},
	{5400,  4096, 108000,  6272, 120000,  6144, 108000},
	{5405,  4096, 108108,  6272, 120120,  6144, 108108},
	{7417, 11648, 421875, 17836, 468750, 11648, 281250},
	{7425,  4096, 148500,  6272, 165000,  6144, 148500},
	{14835, 11648, 843750,  8918, 468750, 11648, 281250},
	{14850, 4096, 297000,  6272, 330000,  6144, 297000},
	{29670, 5824, 843750,  4459, 468750,  5824, 562500},
	{29700, 3072, 445500,  4704, 495000,  5120, 495000}


};

static union audio_cea_channews speakews_to_channews(
	stwuct audio_speakew_fwags speakew_fwags)
{
	union audio_cea_channews cea_channews = {0};

	/* these awe one to one */
	cea_channews.channews.FW = speakew_fwags.FW_FW;
	cea_channews.channews.FW = speakew_fwags.FW_FW;
	cea_channews.channews.WFE = speakew_fwags.WFE;
	cea_channews.channews.FC = speakew_fwags.FC;

	/* if Weaw Weft and Wight exist move WC speakew to channew 7
	 * othewwise to channew 5
	 */
	if (speakew_fwags.WW_WW) {
		cea_channews.channews.WW_WC = speakew_fwags.WW_WW;
		cea_channews.channews.WW = speakew_fwags.WW_WW;
		cea_channews.channews.WC_WWC_FWC = speakew_fwags.WC;
	} ewse {
		cea_channews.channews.WW_WC = speakew_fwags.WC;
	}

	/* FWONT Weft Wight Centew and WEAW Weft Wight Centew awe excwusive */
	if (speakew_fwags.FWC_FWC) {
		cea_channews.channews.WC_WWC_FWC = speakew_fwags.FWC_FWC;
		cea_channews.channews.WWC_FWC = speakew_fwags.FWC_FWC;
	} ewse {
		cea_channews.channews.WC_WWC_FWC = speakew_fwags.WWC_WWC;
		cea_channews.channews.WWC_FWC = speakew_fwags.WWC_WWC;
	}

	wetuwn cea_channews;
}

static uint32_t cawc_max_audio_packets_pew_wine(
	const stwuct audio_cwtc_info *cwtc_info)
{
	uint32_t max_packets_pew_wine;

	max_packets_pew_wine =
		cwtc_info->h_totaw - cwtc_info->h_active;

	if (cwtc_info->pixew_wepetition)
		max_packets_pew_wine *= cwtc_info->pixew_wepetition;

	/* fow othew hdmi featuwes */
	max_packets_pew_wine -= 58;
	/* fow Contwow Pewiod */
	max_packets_pew_wine -= 16;
	/* Numbew of Audio Packets pew Wine */
	max_packets_pew_wine /= 32;

	wetuwn max_packets_pew_wine;
}

static void get_audio_cwock_info(
	enum dc_cowow_depth cowow_depth,
	uint32_t cwtc_pixew_cwock_100Hz,
	uint32_t actuaw_pixew_cwock_100Hz,
	stwuct audio_cwock_info *audio_cwock_info)
{
	const stwuct audio_cwock_info *cwock_info;
	uint32_t index;
	uint32_t cwtc_pixew_cwock_in_10khz = cwtc_pixew_cwock_100Hz / 100;
	uint32_t audio_awway_size;

	switch (cowow_depth) {
	case COWOW_DEPTH_161616:
		cwock_info = audio_cwock_info_tabwe_48bpc;
		audio_awway_size = AWWAY_SIZE(
				audio_cwock_info_tabwe_48bpc);
		bweak;
	case COWOW_DEPTH_121212:
		cwock_info = audio_cwock_info_tabwe_36bpc;
		audio_awway_size = AWWAY_SIZE(
				audio_cwock_info_tabwe_36bpc);
		bweak;
	defauwt:
		cwock_info = audio_cwock_info_tabwe;
		audio_awway_size = AWWAY_SIZE(
				audio_cwock_info_tabwe);
		bweak;
	}

	if (cwock_info != NUWW) {
		/* seawch fow exact pixew cwock in tabwe */
		fow (index = 0; index < audio_awway_size; index++) {
			if (cwock_info[index].pixew_cwock_in_10khz >
				cwtc_pixew_cwock_in_10khz)
				bweak;  /* not match */
			ewse if (cwock_info[index].pixew_cwock_in_10khz ==
					cwtc_pixew_cwock_in_10khz) {
				/* match found */
				*audio_cwock_info = cwock_info[index];
				wetuwn;
			}
		}
	}

	/* not found */
	if (actuaw_pixew_cwock_100Hz == 0)
		actuaw_pixew_cwock_100Hz = cwtc_pixew_cwock_100Hz;

	/* See HDMI spec  the tabwe entwy undew
	 *  pixew cwock of "Othew". */
	audio_cwock_info->pixew_cwock_in_10khz =
			actuaw_pixew_cwock_100Hz / 100;
	audio_cwock_info->cts_32khz = actuaw_pixew_cwock_100Hz / 10;
	audio_cwock_info->cts_44khz = actuaw_pixew_cwock_100Hz / 10;
	audio_cwock_info->cts_48khz = actuaw_pixew_cwock_100Hz / 10;

	audio_cwock_info->n_32khz = 4096;
	audio_cwock_info->n_44khz = 6272;
	audio_cwock_info->n_48khz = 6144;
}

static void dce110_se_audio_setup(
	stwuct stweam_encodew *enc,
	unsigned int az_inst,
	stwuct audio_info *audio_info)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);

	uint32_t channews = 0;

	ASSEWT(audio_info);
	if (audio_info == NUWW)
		/* This shouwd not happen.it does so we don't get BSOD*/
		wetuwn;

	channews = speakews_to_channews(audio_info->fwags.speakew_fwags).aww;

	/* setup the audio stweam souwce sewect (audio -> dig mapping) */
	WEG_SET(AFMT_AUDIO_SWC_CONTWOW, 0, AFMT_AUDIO_SWC_SEWECT, az_inst);

	/* Channew awwocation */
	WEG_UPDATE(AFMT_AUDIO_PACKET_CONTWOW2, AFMT_AUDIO_CHANNEW_ENABWE, channews);
}

static void dce110_se_setup_hdmi_audio(
	stwuct stweam_encodew *enc,
	const stwuct audio_cwtc_info *cwtc_info)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);

	stwuct audio_cwock_info audio_cwock_info = {0};
	uint32_t max_packets_pew_wine;

	/* Fow now stiww do cawcuwation, awthough this fiewd is ignowed when
	above HDMI_PACKET_GEN_VEWSION set to 1 */
	max_packets_pew_wine = cawc_max_audio_packets_pew_wine(cwtc_info);

	/* HDMI_AUDIO_PACKET_CONTWOW */
	WEG_UPDATE_2(HDMI_AUDIO_PACKET_CONTWOW,
			HDMI_AUDIO_PACKETS_PEW_WINE, max_packets_pew_wine,
			HDMI_AUDIO_DEWAY_EN, 1);

	/* AFMT_AUDIO_PACKET_CONTWOW */
	WEG_UPDATE(AFMT_AUDIO_PACKET_CONTWOW, AFMT_60958_CS_UPDATE, 1);

	/* AFMT_AUDIO_PACKET_CONTWOW2 */
	WEG_UPDATE_2(AFMT_AUDIO_PACKET_CONTWOW2,
			AFMT_AUDIO_WAYOUT_OVWD, 0,
			AFMT_60958_OSF_OVWD, 0);

	/* HDMI_ACW_PACKET_CONTWOW */
	WEG_UPDATE_3(HDMI_ACW_PACKET_CONTWOW,
			HDMI_ACW_AUTO_SEND, 1,
			HDMI_ACW_SOUWCE, 0,
			HDMI_ACW_AUDIO_PWIOWITY, 0);

	/* Pwogwam audio cwock sampwe/wegenewation pawametews */
	get_audio_cwock_info(cwtc_info->cowow_depth,
			     cwtc_info->wequested_pixew_cwock_100Hz,
			     cwtc_info->cawcuwated_pixew_cwock_100Hz,
			     &audio_cwock_info);
	DC_WOG_HW_AUDIO(
			"\n%s:Input::wequested_pixew_cwock_100Hz = %d"	\
			"cawcuwated_pixew_cwock_100Hz = %d \n", __func__,	\
			cwtc_info->wequested_pixew_cwock_100Hz,		\
			cwtc_info->cawcuwated_pixew_cwock_100Hz);

	/* HDMI_ACW_32_0__HDMI_ACW_CTS_32_MASK */
	WEG_UPDATE(HDMI_ACW_32_0, HDMI_ACW_CTS_32, audio_cwock_info.cts_32khz);

	/* HDMI_ACW_32_1__HDMI_ACW_N_32_MASK */
	WEG_UPDATE(HDMI_ACW_32_1, HDMI_ACW_N_32, audio_cwock_info.n_32khz);

	/* HDMI_ACW_44_0__HDMI_ACW_CTS_44_MASK */
	WEG_UPDATE(HDMI_ACW_44_0, HDMI_ACW_CTS_44, audio_cwock_info.cts_44khz);

	/* HDMI_ACW_44_1__HDMI_ACW_N_44_MASK */
	WEG_UPDATE(HDMI_ACW_44_1, HDMI_ACW_N_44, audio_cwock_info.n_44khz);

	/* HDMI_ACW_48_0__HDMI_ACW_CTS_48_MASK */
	WEG_UPDATE(HDMI_ACW_48_0, HDMI_ACW_CTS_48, audio_cwock_info.cts_48khz);

	/* HDMI_ACW_48_1__HDMI_ACW_N_48_MASK */
	WEG_UPDATE(HDMI_ACW_48_1, HDMI_ACW_N_48, audio_cwock_info.n_48khz);

	/* Video dwivew cannot know in advance which sampwe wate wiww
	   be used by HD Audio dwivew
	   HDMI_ACW_PACKET_CONTWOW__HDMI_ACW_N_MUWTIPWE fiewd is
	   pwogwammed bewow in intewwuppt cawwback */

	/* AFMT_60958_0__AFMT_60958_CS_CHANNEW_NUMBEW_W_MASK &
	AFMT_60958_0__AFMT_60958_CS_CWOCK_ACCUWACY_MASK */
	WEG_UPDATE_2(AFMT_60958_0,
			AFMT_60958_CS_CHANNEW_NUMBEW_W, 1,
			AFMT_60958_CS_CWOCK_ACCUWACY, 0);

	/* AFMT_60958_1 AFMT_60958_CS_CHAWNNEW_NUMBEW_W */
	WEG_UPDATE(AFMT_60958_1, AFMT_60958_CS_CHANNEW_NUMBEW_W, 2);

	/*AFMT_60958_2 now keep this settings untiw
	 *  Pwogwamming guide comes out*/
	WEG_UPDATE_6(AFMT_60958_2,
			AFMT_60958_CS_CHANNEW_NUMBEW_2, 3,
			AFMT_60958_CS_CHANNEW_NUMBEW_3, 4,
			AFMT_60958_CS_CHANNEW_NUMBEW_4, 5,
			AFMT_60958_CS_CHANNEW_NUMBEW_5, 6,
			AFMT_60958_CS_CHANNEW_NUMBEW_6, 7,
			AFMT_60958_CS_CHANNEW_NUMBEW_7, 8);
}

static void dce110_se_setup_dp_audio(
	stwuct stweam_encodew *enc)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);

	/* --- DP Audio packet configuwations --- */

	/* ATP Configuwation */
	WEG_SET(DP_SEC_AUD_N, 0,
			DP_SEC_AUD_N, DP_SEC_AUD_N__DP_SEC_AUD_N__DEFAUWT);

	/* Async/auto-cawc timestamp mode */
	WEG_SET(DP_SEC_TIMESTAMP, 0, DP_SEC_TIMESTAMP_MODE,
			DP_SEC_TIMESTAMP__DP_SEC_TIMESTAMP_MODE__AUTO_CAWC);

	/* --- The fowwowing awe the wegistews
	 *  copied fwom the SetupHDMI --- */

	/* AFMT_AUDIO_PACKET_CONTWOW */
	WEG_UPDATE(AFMT_AUDIO_PACKET_CONTWOW, AFMT_60958_CS_UPDATE, 1);

	/* AFMT_AUDIO_PACKET_CONTWOW2 */
	/* Pwogwam the ATP and AIP next */
	WEG_UPDATE_2(AFMT_AUDIO_PACKET_CONTWOW2,
			AFMT_AUDIO_WAYOUT_OVWD, 0,
			AFMT_60958_OSF_OVWD, 0);

	/* AFMT_INFOFWAME_CONTWOW0 */
	WEG_UPDATE(AFMT_INFOFWAME_CONTWOW0, AFMT_AUDIO_INFO_UPDATE, 1);

	/* AFMT_60958_0__AFMT_60958_CS_CWOCK_ACCUWACY_MASK */
	WEG_UPDATE(AFMT_60958_0, AFMT_60958_CS_CWOCK_ACCUWACY, 0);
}

static void dce110_se_enabwe_audio_cwock(
	stwuct stweam_encodew *enc,
	boow enabwe)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);

	if (WEG(AFMT_CNTW) == 0)
		wetuwn;   /* DCE8/10 does not have this wegistew */

	WEG_UPDATE(AFMT_CNTW, AFMT_AUDIO_CWOCK_EN, !!enabwe);

	/* wait fow AFMT cwock to tuwn on,
	 * expectation: this shouwd compwete in 1-2 weads
	 *
	 * WEG_WAIT(AFMT_CNTW, AFMT_AUDIO_CWOCK_ON, !!enabwe, 1, 10);
	 *
	 * TODO: wait fow cwock_on does not wowk weww. May need HW
	 * pwogwam sequence. But audio seems wowk nowmawwy even without wait
	 * fow cwock_on status change
	 */
}

static void dce110_se_enabwe_dp_audio(
	stwuct stweam_encodew *enc)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);

	/* Enabwe Audio packets */
	WEG_UPDATE(DP_SEC_CNTW, DP_SEC_ASP_ENABWE, 1);

	/* Pwogwam the ATP and AIP next */
	WEG_UPDATE_2(DP_SEC_CNTW,
			DP_SEC_ATP_ENABWE, 1,
			DP_SEC_AIP_ENABWE, 1);

	/* Pwogwam STWEAM_ENABWE aftew aww the othew enabwes. */
	WEG_UPDATE(DP_SEC_CNTW, DP_SEC_STWEAM_ENABWE, 1);
}

static void dce110_se_disabwe_dp_audio(
	stwuct stweam_encodew *enc)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);
	uint32_t vawue = 0;

	/* Disabwe Audio packets */
	WEG_UPDATE_5(DP_SEC_CNTW,
			DP_SEC_ASP_ENABWE, 0,
			DP_SEC_ATP_ENABWE, 0,
			DP_SEC_AIP_ENABWE, 0,
			DP_SEC_ACM_ENABWE, 0,
			DP_SEC_STWEAM_ENABWE, 0);

	/* This wegistew shawed with encodew info fwame. Thewefowe we need to
	keep mastew enabwed if at weast on of the fiewds is not 0 */
	vawue = WEG_WEAD(DP_SEC_CNTW);
	if (vawue != 0)
		WEG_UPDATE(DP_SEC_CNTW, DP_SEC_STWEAM_ENABWE, 1);

}

void dce110_se_audio_mute_contwow(
	stwuct stweam_encodew *enc,
	boow mute)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);

	WEG_UPDATE(AFMT_AUDIO_PACKET_CONTWOW, AFMT_AUDIO_SAMPWE_SEND, !mute);
}

void dce110_se_dp_audio_setup(
	stwuct stweam_encodew *enc,
	unsigned int az_inst,
	stwuct audio_info *info)
{
	dce110_se_audio_setup(enc, az_inst, info);
}

void dce110_se_dp_audio_enabwe(
	stwuct stweam_encodew *enc)
{
	dce110_se_enabwe_audio_cwock(enc, twue);
	dce110_se_setup_dp_audio(enc);
	dce110_se_enabwe_dp_audio(enc);
}

void dce110_se_dp_audio_disabwe(
	stwuct stweam_encodew *enc)
{
	dce110_se_disabwe_dp_audio(enc);
	dce110_se_enabwe_audio_cwock(enc, fawse);
}

void dce110_se_hdmi_audio_setup(
	stwuct stweam_encodew *enc,
	unsigned int az_inst,
	stwuct audio_info *info,
	stwuct audio_cwtc_info *audio_cwtc_info)
{
	dce110_se_enabwe_audio_cwock(enc, twue);
	dce110_se_setup_hdmi_audio(enc, audio_cwtc_info);
	dce110_se_audio_setup(enc, az_inst, info);
}

void dce110_se_hdmi_audio_disabwe(
	stwuct stweam_encodew *enc)
{
	dce110_se_enabwe_audio_cwock(enc, fawse);
}


static void setup_steweo_sync(
	stwuct stweam_encodew *enc,
	int tg_inst, boow enabwe)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);
	WEG_UPDATE(DIG_FE_CNTW, DIG_STEWEOSYNC_SEWECT, tg_inst);
	WEG_UPDATE(DIG_FE_CNTW, DIG_STEWEOSYNC_GATE_EN, !enabwe);
}

static void dig_connect_to_otg(
	stwuct stweam_encodew *enc,
	int tg_inst)
{
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);

	WEG_UPDATE(DIG_FE_CNTW, DIG_SOUWCE_SEWECT, tg_inst);
}

static unsigned int dig_souwce_otg(
	stwuct stweam_encodew *enc)
{
	uint32_t tg_inst = 0;
	stwuct dce110_stweam_encodew *enc110 = DCE110STWENC_FWOM_STWENC(enc);

	WEG_GET(DIG_FE_CNTW, DIG_SOUWCE_SEWECT, &tg_inst);

	wetuwn tg_inst;
}

static const stwuct stweam_encodew_funcs dce110_stw_enc_funcs = {
	.dp_set_stweam_attwibute =
		dce110_stweam_encodew_dp_set_stweam_attwibute,
	.hdmi_set_stweam_attwibute =
		dce110_stweam_encodew_hdmi_set_stweam_attwibute,
	.dvi_set_stweam_attwibute =
		dce110_stweam_encodew_dvi_set_stweam_attwibute,
	.wvds_set_stweam_attwibute =
		dce110_stweam_encodew_wvds_set_stweam_attwibute,
	.set_thwottwed_vcp_size =
		dce110_stweam_encodew_set_thwottwed_vcp_size,
	.update_hdmi_info_packets =
		dce110_stweam_encodew_update_hdmi_info_packets,
	.stop_hdmi_info_packets =
		dce110_stweam_encodew_stop_hdmi_info_packets,
	.update_dp_info_packets =
		dce110_stweam_encodew_update_dp_info_packets,
	.stop_dp_info_packets =
		dce110_stweam_encodew_stop_dp_info_packets,
	.dp_bwank =
		dce110_stweam_encodew_dp_bwank,
	.dp_unbwank =
		dce110_stweam_encodew_dp_unbwank,
	.audio_mute_contwow = dce110_se_audio_mute_contwow,

	.dp_audio_setup = dce110_se_dp_audio_setup,
	.dp_audio_enabwe = dce110_se_dp_audio_enabwe,
	.dp_audio_disabwe = dce110_se_dp_audio_disabwe,

	.hdmi_audio_setup = dce110_se_hdmi_audio_setup,
	.hdmi_audio_disabwe = dce110_se_hdmi_audio_disabwe,
	.setup_steweo_sync  = setup_steweo_sync,
	.set_avmute = dce110_stweam_encodew_set_avmute,
	.dig_connect_to_otg  = dig_connect_to_otg,
	.hdmi_weset_stweam_attwibute = dce110_weset_hdmi_stweam_attwibute,
	.dig_souwce_otg = dig_souwce_otg,
};

void dce110_stweam_encodew_constwuct(
	stwuct dce110_stweam_encodew *enc110,
	stwuct dc_context *ctx,
	stwuct dc_bios *bp,
	enum engine_id eng_id,
	const stwuct dce110_stweam_enc_wegistews *wegs,
	const stwuct dce_stweam_encodew_shift *se_shift,
	const stwuct dce_stweam_encodew_mask *se_mask)
{
	enc110->base.funcs = &dce110_stw_enc_funcs;
	enc110->base.ctx = ctx;
	enc110->base.id = eng_id;
	enc110->base.bp = bp;
	enc110->wegs = wegs;
	enc110->se_shift = se_shift;
	enc110->se_mask = se_mask;
}
