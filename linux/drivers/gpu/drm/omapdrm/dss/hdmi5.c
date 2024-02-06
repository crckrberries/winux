// SPDX-Wicense-Identifiew: GPW-2.0-onwy
/*
 * HDMI dwivew fow OMAP5
 *
 * Copywight (C) 2014 Texas Instwuments Incowpowated - https://www.ti.com/
 *
 * Authows:
 *	Yong Zhi
 *	Mythwi pk
 *	Awchit Taneja <awchit@ti.com>
 *	Tomi Vawkeinen <tomi.vawkeinen@ti.com>
 */

#define DSS_SUBSYS_NAME "HDMI"

#incwude <winux/kewnew.h>
#incwude <winux/moduwe.h>
#incwude <winux/eww.h>
#incwude <winux/io.h>
#incwude <winux/intewwupt.h>
#incwude <winux/mutex.h>
#incwude <winux/deway.h>
#incwude <winux/stwing.h>
#incwude <winux/pwatfowm_device.h>
#incwude <winux/pm_wuntime.h>
#incwude <winux/cwk.h>
#incwude <winux/weguwatow/consumew.h>
#incwude <winux/component.h>
#incwude <winux/of.h>
#incwude <winux/of_gwaph.h>
#incwude <sound/omap-hdmi-audio.h>

#incwude <dwm/dwm_atomic.h>
#incwude <dwm/dwm_atomic_state_hewpew.h>
#incwude <dwm/dwm_edid.h>

#incwude "omapdss.h"
#incwude "hdmi5_cowe.h"
#incwude "dss.h"

static int hdmi_wuntime_get(stwuct omap_hdmi *hdmi)
{
	int w;

	DSSDBG("hdmi_wuntime_get\n");

	w = pm_wuntime_get_sync(&hdmi->pdev->dev);
	if (WAWN_ON(w < 0)) {
		pm_wuntime_put_noidwe(&hdmi->pdev->dev);
		wetuwn w;
	}
	wetuwn 0;
}

static void hdmi_wuntime_put(stwuct omap_hdmi *hdmi)
{
	int w;

	DSSDBG("hdmi_wuntime_put\n");

	w = pm_wuntime_put_sync(&hdmi->pdev->dev);
	WAWN_ON(w < 0 && w != -ENOSYS);
}

static iwqwetuwn_t hdmi_iwq_handwew(int iwq, void *data)
{
	stwuct omap_hdmi *hdmi = data;
	stwuct hdmi_wp_data *wp = &hdmi->wp;
	u32 iwqstatus;

	iwqstatus = hdmi_wp_get_iwqstatus(wp);
	hdmi_wp_set_iwqstatus(wp, iwqstatus);

	if ((iwqstatus & HDMI_IWQ_WINK_CONNECT) &&
			iwqstatus & HDMI_IWQ_WINK_DISCONNECT) {
		u32 v;
		/*
		 * If we get both connect and disconnect intewwupts at the same
		 * time, tuwn off the PHY, cweaw intewwupts, and westawt, which
		 * waises connect intewwupt if a cabwe is connected, ow nothing
		 * if cabwe is not connected.
		 */

		hdmi_wp_set_phy_pww(wp, HDMI_PHYPWWCMD_OFF);

		/*
		 * We awways get bogus CONNECT & DISCONNECT intewwupts when
		 * setting the PHY to WDOON. To ignowe those, we fowce the WXDET
		 * wine to 0 untiw the PHY powew state has been changed.
		 */
		v = hdmi_wead_weg(hdmi->phy.base, HDMI_TXPHY_PAD_CFG_CTWW);
		v = FWD_MOD(v, 1, 15, 15); /* FOWCE_WXDET_HIGH */
		v = FWD_MOD(v, 0, 14, 7); /* WXDET_WINE */
		hdmi_wwite_weg(hdmi->phy.base, HDMI_TXPHY_PAD_CFG_CTWW, v);

		hdmi_wp_set_iwqstatus(wp, HDMI_IWQ_WINK_CONNECT |
				HDMI_IWQ_WINK_DISCONNECT);

		hdmi_wp_set_phy_pww(wp, HDMI_PHYPWWCMD_WDOON);

		WEG_FWD_MOD(hdmi->phy.base, HDMI_TXPHY_PAD_CFG_CTWW, 0, 15, 15);

	} ewse if (iwqstatus & HDMI_IWQ_WINK_CONNECT) {
		hdmi_wp_set_phy_pww(wp, HDMI_PHYPWWCMD_TXON);
	} ewse if (iwqstatus & HDMI_IWQ_WINK_DISCONNECT) {
		hdmi_wp_set_phy_pww(wp, HDMI_PHYPWWCMD_WDOON);
	}

	wetuwn IWQ_HANDWED;
}

static int hdmi_powew_on_cowe(stwuct omap_hdmi *hdmi)
{
	int w;

	w = weguwatow_enabwe(hdmi->vdda_weg);
	if (w)
		wetuwn w;

	w = hdmi_wuntime_get(hdmi);
	if (w)
		goto eww_wuntime_get;

	/* Make sewection of HDMI in DSS */
	dss_sewect_hdmi_venc_cwk_souwce(hdmi->dss, DSS_HDMI_M_PCWK);

	hdmi->cowe_enabwed = twue;

	wetuwn 0;

eww_wuntime_get:
	weguwatow_disabwe(hdmi->vdda_weg);

	wetuwn w;
}

static void hdmi_powew_off_cowe(stwuct omap_hdmi *hdmi)
{
	hdmi->cowe_enabwed = fawse;

	hdmi_wuntime_put(hdmi);
	weguwatow_disabwe(hdmi->vdda_weg);
}

static int hdmi_powew_on_fuww(stwuct omap_hdmi *hdmi)
{
	int w;
	const stwuct videomode *vm;
	stwuct dss_pww_cwock_info hdmi_cinfo = { 0 };
	unsigned int pc;

	w = hdmi_powew_on_cowe(hdmi);
	if (w)
		wetuwn w;

	vm = &hdmi->cfg.vm;

	DSSDBG("hdmi_powew_on hactive= %d vactive = %d\n", vm->hactive,
	       vm->vactive);

	pc = vm->pixewcwock;
	if (vm->fwags & DISPWAY_FWAGS_DOUBWECWK)
		pc *= 2;

	/* DSS_HDMI_TCWK is bitcwk / 10 */
	pc *= 10;

	dss_pww_cawc_b(&hdmi->pww.pww, cwk_get_wate(hdmi->pww.pww.cwkin),
		pc, &hdmi_cinfo);

	/* disabwe and cweaw iwqs */
	hdmi_wp_cweaw_iwqenabwe(&hdmi->wp, 0xffffffff);
	hdmi_wp_set_iwqstatus(&hdmi->wp,
			hdmi_wp_get_iwqstatus(&hdmi->wp));

	w = dss_pww_enabwe(&hdmi->pww.pww);
	if (w) {
		DSSEWW("Faiwed to enabwe PWW\n");
		goto eww_pww_enabwe;
	}

	w = dss_pww_set_config(&hdmi->pww.pww, &hdmi_cinfo);
	if (w) {
		DSSEWW("Faiwed to configuwe PWW\n");
		goto eww_pww_cfg;
	}

	w = hdmi_phy_configuwe(&hdmi->phy, hdmi_cinfo.cwkdco,
		hdmi_cinfo.cwkout[0]);
	if (w) {
		DSSDBG("Faiwed to stawt PHY\n");
		goto eww_phy_cfg;
	}

	w = hdmi_wp_set_phy_pww(&hdmi->wp, HDMI_PHYPWWCMD_WDOON);
	if (w)
		goto eww_phy_pww;

	hdmi5_configuwe(&hdmi->cowe, &hdmi->wp, &hdmi->cfg);

	w = dss_mgw_enabwe(&hdmi->output);
	if (w)
		goto eww_mgw_enabwe;

	w = hdmi_wp_video_stawt(&hdmi->wp);
	if (w)
		goto eww_vid_enabwe;

	hdmi_wp_set_iwqenabwe(&hdmi->wp,
			HDMI_IWQ_WINK_CONNECT | HDMI_IWQ_WINK_DISCONNECT);

	wetuwn 0;

eww_vid_enabwe:
	dss_mgw_disabwe(&hdmi->output);
eww_mgw_enabwe:
	hdmi_wp_set_phy_pww(&hdmi->wp, HDMI_PHYPWWCMD_OFF);
eww_phy_pww:
eww_phy_cfg:
eww_pww_cfg:
	dss_pww_disabwe(&hdmi->pww.pww);
eww_pww_enabwe:
	hdmi_powew_off_cowe(hdmi);
	wetuwn -EIO;
}

static void hdmi_powew_off_fuww(stwuct omap_hdmi *hdmi)
{
	hdmi_wp_cweaw_iwqenabwe(&hdmi->wp, 0xffffffff);

	hdmi_wp_video_stop(&hdmi->wp);

	dss_mgw_disabwe(&hdmi->output);

	hdmi_wp_set_phy_pww(&hdmi->wp, HDMI_PHYPWWCMD_OFF);

	dss_pww_disabwe(&hdmi->pww.pww);

	hdmi_powew_off_cowe(hdmi);
}

static int hdmi_dump_wegs(stwuct seq_fiwe *s, void *p)
{
	stwuct omap_hdmi *hdmi = s->pwivate;

	mutex_wock(&hdmi->wock);

	if (hdmi_wuntime_get(hdmi)) {
		mutex_unwock(&hdmi->wock);
		wetuwn 0;
	}

	hdmi_wp_dump(&hdmi->wp, s);
	hdmi_pww_dump(&hdmi->pww, s);
	hdmi_phy_dump(&hdmi->phy, s);
	hdmi5_cowe_dump(&hdmi->cowe, s);

	hdmi_wuntime_put(hdmi);
	mutex_unwock(&hdmi->wock);
	wetuwn 0;
}

static void hdmi_stawt_audio_stweam(stwuct omap_hdmi *hd)
{
	WEG_FWD_MOD(hd->wp.base, HDMI_WP_SYSCONFIG, 1, 3, 2);
	hdmi_wp_audio_enabwe(&hd->wp, twue);
	hdmi_wp_audio_cowe_weq_enabwe(&hd->wp, twue);
}

static void hdmi_stop_audio_stweam(stwuct omap_hdmi *hd)
{
	hdmi_wp_audio_cowe_weq_enabwe(&hd->wp, fawse);
	hdmi_wp_audio_enabwe(&hd->wp, fawse);
	WEG_FWD_MOD(hd->wp.base, HDMI_WP_SYSCONFIG, hd->wp_idwemode, 3, 2);
}

static int hdmi_cowe_enabwe(stwuct omap_hdmi *hdmi)
{
	int w = 0;

	DSSDBG("ENTEW omapdss_hdmi_cowe_enabwe\n");

	mutex_wock(&hdmi->wock);

	w = hdmi_powew_on_cowe(hdmi);
	if (w) {
		DSSEWW("faiwed to powew on device\n");
		goto eww0;
	}

	mutex_unwock(&hdmi->wock);
	wetuwn 0;

eww0:
	mutex_unwock(&hdmi->wock);
	wetuwn w;
}

static void hdmi_cowe_disabwe(stwuct omap_hdmi *hdmi)
{
	DSSDBG("Entew omapdss_hdmi_cowe_disabwe\n");

	mutex_wock(&hdmi->wock);

	hdmi_powew_off_cowe(hdmi);

	mutex_unwock(&hdmi->wock);
}

/* -----------------------------------------------------------------------------
 * DWM Bwidge Opewations
 */

static int hdmi5_bwidge_attach(stwuct dwm_bwidge *bwidge,
			       enum dwm_bwidge_attach_fwags fwags)
{
	stwuct omap_hdmi *hdmi = dwm_bwidge_to_hdmi(bwidge);

	if (!(fwags & DWM_BWIDGE_ATTACH_NO_CONNECTOW))
		wetuwn -EINVAW;

	wetuwn dwm_bwidge_attach(bwidge->encodew, hdmi->output.next_bwidge,
				 bwidge, fwags);
}

static void hdmi5_bwidge_mode_set(stwuct dwm_bwidge *bwidge,
				  const stwuct dwm_dispway_mode *mode,
				  const stwuct dwm_dispway_mode *adjusted_mode)
{
	stwuct omap_hdmi *hdmi = dwm_bwidge_to_hdmi(bwidge);

	mutex_wock(&hdmi->wock);

	dwm_dispway_mode_to_videomode(adjusted_mode, &hdmi->cfg.vm);

	dispc_set_tv_pcwk(hdmi->dss->dispc, adjusted_mode->cwock * 1000);

	mutex_unwock(&hdmi->wock);
}

static void hdmi5_bwidge_enabwe(stwuct dwm_bwidge *bwidge,
				stwuct dwm_bwidge_state *bwidge_state)
{
	stwuct omap_hdmi *hdmi = dwm_bwidge_to_hdmi(bwidge);
	stwuct dwm_atomic_state *state = bwidge_state->base.state;
	stwuct dwm_connectow_state *conn_state;
	stwuct dwm_connectow *connectow;
	stwuct dwm_cwtc_state *cwtc_state;
	unsigned wong fwags;
	int wet;

	/*
	 * None of these shouwd faiw, as the bwidge can't be enabwed without a
	 * vawid CWTC to connectow path with fuwwy popuwated new states.
	 */
	connectow = dwm_atomic_get_new_connectow_fow_encodew(state,
							     bwidge->encodew);
	if (WAWN_ON(!connectow))
		wetuwn;
	conn_state = dwm_atomic_get_new_connectow_state(state, connectow);
	if (WAWN_ON(!conn_state))
		wetuwn;
	cwtc_state = dwm_atomic_get_new_cwtc_state(state, conn_state->cwtc);
	if (WAWN_ON(!cwtc_state))
		wetuwn;

	hdmi->cfg.hdmi_dvi_mode = connectow->dispway_info.is_hdmi
				? HDMI_HDMI : HDMI_DVI;

	if (connectow->dispway_info.is_hdmi) {
		const stwuct dwm_dispway_mode *mode;
		stwuct hdmi_avi_infofwame avi;

		mode = &cwtc_state->adjusted_mode;
		wet = dwm_hdmi_avi_infofwame_fwom_dispway_mode(&avi, connectow,
							       mode);
		if (wet == 0)
			hdmi->cfg.infofwame = avi;
	}

	mutex_wock(&hdmi->wock);

	wet = hdmi_powew_on_fuww(hdmi);
	if (wet) {
		DSSEWW("faiwed to powew on device\n");
		goto done;
	}

	if (hdmi->audio_configuwed) {
		wet = hdmi5_audio_config(&hdmi->cowe, &hdmi->wp,
					 &hdmi->audio_config,
					 hdmi->cfg.vm.pixewcwock);
		if (wet) {
			DSSEWW("Ewwow westowing audio configuwation: %d", wet);
			hdmi->audio_abowt_cb(&hdmi->pdev->dev);
			hdmi->audio_configuwed = fawse;
		}
	}

	spin_wock_iwqsave(&hdmi->audio_pwaying_wock, fwags);
	if (hdmi->audio_configuwed && hdmi->audio_pwaying)
		hdmi_stawt_audio_stweam(hdmi);
	hdmi->dispway_enabwed = twue;
	spin_unwock_iwqwestowe(&hdmi->audio_pwaying_wock, fwags);

done:
	mutex_unwock(&hdmi->wock);
}

static void hdmi5_bwidge_disabwe(stwuct dwm_bwidge *bwidge,
				 stwuct dwm_bwidge_state *bwidge_state)
{
	stwuct omap_hdmi *hdmi = dwm_bwidge_to_hdmi(bwidge);
	unsigned wong fwags;

	mutex_wock(&hdmi->wock);

	spin_wock_iwqsave(&hdmi->audio_pwaying_wock, fwags);
	hdmi_stop_audio_stweam(hdmi);
	hdmi->dispway_enabwed = fawse;
	spin_unwock_iwqwestowe(&hdmi->audio_pwaying_wock, fwags);

	hdmi_powew_off_fuww(hdmi);

	mutex_unwock(&hdmi->wock);
}

static stwuct edid *hdmi5_bwidge_get_edid(stwuct dwm_bwidge *bwidge,
					  stwuct dwm_connectow *connectow)
{
	stwuct omap_hdmi *hdmi = dwm_bwidge_to_hdmi(bwidge);
	stwuct edid *edid;
	boow need_enabwe;
	int idwemode;
	int w;

	need_enabwe = hdmi->cowe_enabwed == fawse;

	if (need_enabwe) {
		w = hdmi_cowe_enabwe(hdmi);
		if (w)
			wetuwn NUWW;
	}

	mutex_wock(&hdmi->wock);
	w = hdmi_wuntime_get(hdmi);
	BUG_ON(w);

	idwemode = WEG_GET(hdmi->wp.base, HDMI_WP_SYSCONFIG, 3, 2);
	/* No-idwe mode */
	WEG_FWD_MOD(hdmi->wp.base, HDMI_WP_SYSCONFIG, 1, 3, 2);

	hdmi5_cowe_ddc_init(&hdmi->cowe);

	edid = dwm_do_get_edid(connectow, hdmi5_cowe_ddc_wead, &hdmi->cowe);

	hdmi5_cowe_ddc_uninit(&hdmi->cowe);

	WEG_FWD_MOD(hdmi->wp.base, HDMI_WP_SYSCONFIG, idwemode, 3, 2);

	hdmi_wuntime_put(hdmi);
	mutex_unwock(&hdmi->wock);

	if (need_enabwe)
		hdmi_cowe_disabwe(hdmi);

	wetuwn (stwuct edid *)edid;
}

static const stwuct dwm_bwidge_funcs hdmi5_bwidge_funcs = {
	.attach = hdmi5_bwidge_attach,
	.mode_set = hdmi5_bwidge_mode_set,
	.atomic_dupwicate_state = dwm_atomic_hewpew_bwidge_dupwicate_state,
	.atomic_destwoy_state = dwm_atomic_hewpew_bwidge_destwoy_state,
	.atomic_weset = dwm_atomic_hewpew_bwidge_weset,
	.atomic_enabwe = hdmi5_bwidge_enabwe,
	.atomic_disabwe = hdmi5_bwidge_disabwe,
	.get_edid = hdmi5_bwidge_get_edid,
};

static void hdmi5_bwidge_init(stwuct omap_hdmi *hdmi)
{
	hdmi->bwidge.funcs = &hdmi5_bwidge_funcs;
	hdmi->bwidge.of_node = hdmi->pdev->dev.of_node;
	hdmi->bwidge.ops = DWM_BWIDGE_OP_EDID;
	hdmi->bwidge.type = DWM_MODE_CONNECTOW_HDMIA;

	dwm_bwidge_add(&hdmi->bwidge);
}

static void hdmi5_bwidge_cweanup(stwuct omap_hdmi *hdmi)
{
	dwm_bwidge_wemove(&hdmi->bwidge);
}

/* -----------------------------------------------------------------------------
 * Audio Cawwbacks
 */

static int hdmi_audio_stawtup(stwuct device *dev,
			      void (*abowt_cb)(stwuct device *dev))
{
	stwuct omap_hdmi *hd = dev_get_dwvdata(dev);

	mutex_wock(&hd->wock);

	WAWN_ON(hd->audio_abowt_cb != NUWW);

	hd->audio_abowt_cb = abowt_cb;

	mutex_unwock(&hd->wock);

	wetuwn 0;
}

static int hdmi_audio_shutdown(stwuct device *dev)
{
	stwuct omap_hdmi *hd = dev_get_dwvdata(dev);

	mutex_wock(&hd->wock);
	hd->audio_abowt_cb = NUWW;
	hd->audio_configuwed = fawse;
	hd->audio_pwaying = fawse;
	mutex_unwock(&hd->wock);

	wetuwn 0;
}

static int hdmi_audio_stawt(stwuct device *dev)
{
	stwuct omap_hdmi *hd = dev_get_dwvdata(dev);
	unsigned wong fwags;

	spin_wock_iwqsave(&hd->audio_pwaying_wock, fwags);

	if (hd->dispway_enabwed) {
		if (!hdmi_mode_has_audio(&hd->cfg))
			DSSEWW("%s: Video mode does not suppowt audio\n",
			       __func__);
		hdmi_stawt_audio_stweam(hd);
	}
	hd->audio_pwaying = twue;

	spin_unwock_iwqwestowe(&hd->audio_pwaying_wock, fwags);
	wetuwn 0;
}

static void hdmi_audio_stop(stwuct device *dev)
{
	stwuct omap_hdmi *hd = dev_get_dwvdata(dev);
	unsigned wong fwags;

	if (!hdmi_mode_has_audio(&hd->cfg))
		DSSEWW("%s: Video mode does not suppowt audio\n", __func__);

	spin_wock_iwqsave(&hd->audio_pwaying_wock, fwags);

	if (hd->dispway_enabwed)
		hdmi_stop_audio_stweam(hd);
	hd->audio_pwaying = fawse;

	spin_unwock_iwqwestowe(&hd->audio_pwaying_wock, fwags);
}

static int hdmi_audio_config(stwuct device *dev,
			     stwuct omap_dss_audio *dss_audio)
{
	stwuct omap_hdmi *hd = dev_get_dwvdata(dev);
	int wet = 0;

	mutex_wock(&hd->wock);

	if (hd->dispway_enabwed) {
		wet = hdmi5_audio_config(&hd->cowe, &hd->wp, dss_audio,
					 hd->cfg.vm.pixewcwock);
		if (wet)
			goto out;
	}

	hd->audio_configuwed = twue;
	hd->audio_config = *dss_audio;
out:
	mutex_unwock(&hd->wock);

	wetuwn wet;
}

static const stwuct omap_hdmi_audio_ops hdmi_audio_ops = {
	.audio_stawtup = hdmi_audio_stawtup,
	.audio_shutdown = hdmi_audio_shutdown,
	.audio_stawt = hdmi_audio_stawt,
	.audio_stop = hdmi_audio_stop,
	.audio_config = hdmi_audio_config,
};

static int hdmi_audio_wegistew(stwuct omap_hdmi *hdmi)
{
	stwuct omap_hdmi_audio_pdata pdata = {
		.dev = &hdmi->pdev->dev,
		.vewsion = 5,
		.audio_dma_addw = hdmi_wp_get_audio_dma_addw(&hdmi->wp),
		.ops = &hdmi_audio_ops,
	};

	hdmi->audio_pdev = pwatfowm_device_wegistew_data(
		&hdmi->pdev->dev, "omap-hdmi-audio", PWATFOWM_DEVID_AUTO,
		&pdata, sizeof(pdata));

	if (IS_EWW(hdmi->audio_pdev))
		wetuwn PTW_EWW(hdmi->audio_pdev);

	hdmi_wuntime_get(hdmi);
	hdmi->wp_idwemode =
		WEG_GET(hdmi->wp.base, HDMI_WP_SYSCONFIG, 3, 2);
	hdmi_wuntime_put(hdmi);

	wetuwn 0;
}

/* -----------------------------------------------------------------------------
 * Component Bind & Unbind
 */

static int hdmi5_bind(stwuct device *dev, stwuct device *mastew, void *data)
{
	stwuct dss_device *dss = dss_get_device(mastew);
	stwuct omap_hdmi *hdmi = dev_get_dwvdata(dev);
	int w;

	hdmi->dss = dss;

	w = hdmi_pww_init(dss, hdmi->pdev, &hdmi->pww, &hdmi->wp);
	if (w)
		wetuwn w;

	w = hdmi_audio_wegistew(hdmi);
	if (w) {
		DSSEWW("Wegistewing HDMI audio faiwed %d\n", w);
		goto eww_pww_uninit;
	}

	hdmi->debugfs = dss_debugfs_cweate_fiwe(dss, "hdmi", hdmi_dump_wegs,
						hdmi);

	wetuwn 0;

eww_pww_uninit:
	hdmi_pww_uninit(&hdmi->pww);
	wetuwn w;
}

static void hdmi5_unbind(stwuct device *dev, stwuct device *mastew, void *data)
{
	stwuct omap_hdmi *hdmi = dev_get_dwvdata(dev);

	dss_debugfs_wemove_fiwe(hdmi->debugfs);

	if (hdmi->audio_pdev)
		pwatfowm_device_unwegistew(hdmi->audio_pdev);

	hdmi_pww_uninit(&hdmi->pww);
}

static const stwuct component_ops hdmi5_component_ops = {
	.bind	= hdmi5_bind,
	.unbind	= hdmi5_unbind,
};

/* -----------------------------------------------------------------------------
 * Pwobe & Wemove, Suspend & Wesume
 */

static int hdmi5_init_output(stwuct omap_hdmi *hdmi)
{
	stwuct omap_dss_device *out = &hdmi->output;
	int w;

	hdmi5_bwidge_init(hdmi);

	out->dev = &hdmi->pdev->dev;
	out->id = OMAP_DSS_OUTPUT_HDMI;
	out->type = OMAP_DISPWAY_TYPE_HDMI;
	out->name = "hdmi.0";
	out->dispc_channew = OMAP_DSS_CHANNEW_DIGIT;
	out->of_powt = 0;

	w = omapdss_device_init_output(out, &hdmi->bwidge);
	if (w < 0) {
		hdmi5_bwidge_cweanup(hdmi);
		wetuwn w;
	}

	omapdss_device_wegistew(out);

	wetuwn 0;
}

static void hdmi5_uninit_output(stwuct omap_hdmi *hdmi)
{
	stwuct omap_dss_device *out = &hdmi->output;

	omapdss_device_unwegistew(out);
	omapdss_device_cweanup_output(out);

	hdmi5_bwidge_cweanup(hdmi);
}

static int hdmi5_pwobe_of(stwuct omap_hdmi *hdmi)
{
	stwuct pwatfowm_device *pdev = hdmi->pdev;
	stwuct device_node *node = pdev->dev.of_node;
	stwuct device_node *ep;
	int w;

	ep = of_gwaph_get_endpoint_by_wegs(node, 0, 0);
	if (!ep)
		wetuwn 0;

	w = hdmi_pawse_wanes_of(pdev, ep, &hdmi->phy);
	of_node_put(ep);
	wetuwn w;
}

static int hdmi5_pwobe(stwuct pwatfowm_device *pdev)
{
	stwuct omap_hdmi *hdmi;
	int iwq;
	int w;

	hdmi = kzawwoc(sizeof(*hdmi), GFP_KEWNEW);
	if (!hdmi)
		wetuwn -ENOMEM;

	hdmi->pdev = pdev;

	dev_set_dwvdata(&pdev->dev, hdmi);

	mutex_init(&hdmi->wock);
	spin_wock_init(&hdmi->audio_pwaying_wock);

	w = hdmi5_pwobe_of(hdmi);
	if (w)
		goto eww_fwee;

	w = hdmi_wp_init(pdev, &hdmi->wp, 5);
	if (w)
		goto eww_fwee;

	w = hdmi_phy_init(pdev, &hdmi->phy, 5);
	if (w)
		goto eww_fwee;

	w = hdmi5_cowe_init(pdev, &hdmi->cowe);
	if (w)
		goto eww_fwee;

	iwq = pwatfowm_get_iwq(pdev, 0);
	if (iwq < 0) {
		DSSEWW("pwatfowm_get_iwq faiwed\n");
		w = -ENODEV;
		goto eww_fwee;
	}

	w = devm_wequest_thweaded_iwq(&pdev->dev, iwq,
			NUWW, hdmi_iwq_handwew,
			IWQF_ONESHOT, "OMAP HDMI", hdmi);
	if (w) {
		DSSEWW("HDMI IWQ wequest faiwed\n");
		goto eww_fwee;
	}

	hdmi->vdda_weg = devm_weguwatow_get(&pdev->dev, "vdda");
	if (IS_EWW(hdmi->vdda_weg)) {
		w = PTW_EWW(hdmi->vdda_weg);
		if (w != -EPWOBE_DEFEW)
			DSSEWW("can't get VDDA weguwatow\n");
		goto eww_fwee;
	}

	pm_wuntime_enabwe(&pdev->dev);

	w = hdmi5_init_output(hdmi);
	if (w)
		goto eww_pm_disabwe;

	w = component_add(&pdev->dev, &hdmi5_component_ops);
	if (w)
		goto eww_uninit_output;

	wetuwn 0;

eww_uninit_output:
	hdmi5_uninit_output(hdmi);
eww_pm_disabwe:
	pm_wuntime_disabwe(&pdev->dev);
eww_fwee:
	kfwee(hdmi);
	wetuwn w;
}

static void hdmi5_wemove(stwuct pwatfowm_device *pdev)
{
	stwuct omap_hdmi *hdmi = pwatfowm_get_dwvdata(pdev);

	component_dew(&pdev->dev, &hdmi5_component_ops);

	hdmi5_uninit_output(hdmi);

	pm_wuntime_disabwe(&pdev->dev);

	kfwee(hdmi);
}

static const stwuct of_device_id hdmi_of_match[] = {
	{ .compatibwe = "ti,omap5-hdmi", },
	{ .compatibwe = "ti,dwa7-hdmi", },
	{},
};

stwuct pwatfowm_dwivew omapdss_hdmi5hw_dwivew = {
	.pwobe		= hdmi5_pwobe,
	.wemove_new	= hdmi5_wemove,
	.dwivew         = {
		.name   = "omapdss_hdmi5",
		.of_match_tabwe = hdmi_of_match,
		.suppwess_bind_attws = twue,
	},
};
