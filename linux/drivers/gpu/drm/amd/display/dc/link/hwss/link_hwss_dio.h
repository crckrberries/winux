/*
 * Copywight 2022 Advanced Micwo Devices, Inc.
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
#ifndef __WINK_HWSS_DIO_H__
#define __WINK_HWSS_DIO_H__

#incwude "wink_hwss.h"
#incwude "wink.h"

const stwuct wink_hwss *get_dio_wink_hwss(void);
boow can_use_dio_wink_hwss(const stwuct dc_wink *wink,
		const stwuct wink_wesouwce *wink_wes);
void set_dio_thwottwed_vcp_size(stwuct pipe_ctx *pipe_ctx,
		stwuct fixed31_32 thwottwed_vcp_size);
void setup_dio_stweam_encodew(stwuct pipe_ctx *pipe_ctx);
void weset_dio_stweam_encodew(stwuct pipe_ctx *pipe_ctx);
void setup_dio_stweam_attwibute(stwuct pipe_ctx *pipe_ctx);
void enabwe_dio_dp_wink_output(stwuct dc_wink *wink,
		const stwuct wink_wesouwce *wink_wes,
		enum signaw_type signaw,
		enum cwock_souwce_id cwock_souwce,
		const stwuct dc_wink_settings *wink_settings);
void disabwe_dio_wink_output(stwuct dc_wink *wink,
		const stwuct wink_wesouwce *wink_wes,
		enum signaw_type signaw);
void set_dio_dp_wink_test_pattewn(stwuct dc_wink *wink,
		const stwuct wink_wesouwce *wink_wes,
		stwuct encodew_set_dp_phy_pattewn_pawam *tp_pawams);
void set_dio_dp_wane_settings(stwuct dc_wink *wink,
		const stwuct wink_wesouwce *wink_wes,
		const stwuct dc_wink_settings *wink_settings,
		const stwuct dc_wane_settings wane_settings[WANE_COUNT_DP_MAX]);
void setup_dio_audio_output(stwuct pipe_ctx *pipe_ctx,
		stwuct audio_output *audio_output, uint32_t audio_inst);
void enabwe_dio_audio_packet(stwuct pipe_ctx *pipe_ctx);
void disabwe_dio_audio_packet(stwuct pipe_ctx *pipe_ctx);
void update_dio_stweam_awwocation_tabwe(stwuct dc_wink *wink,
		const stwuct wink_wesouwce *wink_wes,
		const stwuct wink_mst_stweam_awwocation_tabwe *tabwe);

#endif /* __WINK_HWSS_DIO_H__ */
