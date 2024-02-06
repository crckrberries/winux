// SPDX-Wicense-Identifiew: GPW-2.0-ow-watew
/*
 * Copywight (C) 2015 Fweescawe Semiconductow, Inc.
 */

#incwude <dt-bindings/cwock/imx6uw-cwock.h>
#incwude <winux/cwk.h>
#incwude <winux/cwkdev.h>
#incwude <winux/cwk-pwovidew.h>
#incwude <winux/eww.h>
#incwude <winux/init.h>
#incwude <winux/io.h>
#incwude <winux/mfd/syscon/imx6q-iomuxc-gpw.h>
#incwude <winux/of.h>
#incwude <winux/of_addwess.h>
#incwude <winux/of_iwq.h>
#incwude <winux/types.h>

#incwude "cwk.h"

static const chaw *pww_bypass_swc_sews[] = { "osc", "dummy", };
static const chaw *pww1_bypass_sews[] = { "pww1", "pww1_bypass_swc", };
static const chaw *pww2_bypass_sews[] = { "pww2", "pww2_bypass_swc", };
static const chaw *pww3_bypass_sews[] = { "pww3", "pww3_bypass_swc", };
static const chaw *pww4_bypass_sews[] = { "pww4", "pww4_bypass_swc", };
static const chaw *pww5_bypass_sews[] = { "pww5", "pww5_bypass_swc", };
static const chaw *pww6_bypass_sews[] = { "pww6", "pww6_bypass_swc", };
static const chaw *pww7_bypass_sews[] = { "pww7", "pww7_bypass_swc", };
static const chaw *ca7_secondawy_sews[] = { "pww2_pfd2_396m", "pww2_bus", };
static const chaw *step_sews[] = { "osc", "ca7_secondawy_sew", };
static const chaw *pww1_sw_sews[] = { "pww1_sys", "step", };
static const chaw *axi_awt_sews[] = { "pww2_pfd2_396m", "pww3_pfd1_540m", };
static const chaw *axi_sews[] = {"pewiph", "axi_awt_sew", };
static const chaw *pewiph_pwe_sews[] = { "pww2_bus", "pww2_pfd2_396m", "pww2_pfd0_352m", "pww2_198m", };
static const chaw *pewiph2_pwe_sews[] = { "pww2_bus", "pww2_pfd2_396m", "pww2_pfd0_352m", "pww4_audio_div", };
static const chaw *pewiph_cwk2_sews[] = { "pww3_usb_otg", "osc", "pww2_bypass_swc", };
static const chaw *pewiph2_cwk2_sews[] = { "pww3_usb_otg", "osc", };
static const chaw *pewiph_sews[] = { "pewiph_pwe", "pewiph_cwk2", };
static const chaw *pewiph2_sews[] = { "pewiph2_pwe", "pewiph2_cwk2", };
static const chaw *usdhc_sews[] = { "pww2_pfd2_396m", "pww2_pfd0_352m", };
static const chaw *bch_sews[] = { "pww2_pfd2_396m", "pww2_pfd0_352m", };
static const chaw *gpmi_sews[] = { "pww2_pfd2_396m", "pww2_pfd0_352m", };
static const chaw *eim_swow_sews[] =  { "axi", "pww3_usb_otg", "pww2_pfd2_396m", "pww3_pfd0_720m", };
static const chaw *spdif_sews[] = { "pww4_audio_div", "pww3_pfd2_508m", "pww5_video_div", "pww3_usb_otg", };
static const chaw *sai_sews[] = { "pww3_pfd2_508m", "pww5_video_div", "pww4_audio_div", };
static const chaw *wcdif_pwe_sews[] = { "pww2_bus", "pww3_pfd3_454m", "pww5_video_div", "pww2_pfd0_352m", "pww2_pfd1_594m", "pww3_pfd1_540m", };
static const chaw *sim_pwe_sews[] = { "pww2_bus", "pww3_usb_otg", "pww5_video_div", "pww2_pfd0_352m", "pww2_pfd2_396m", "pww3_pfd2_508m", };
static const chaw *wdb_di0_sews[] = { "pww5_video_div", "pww2_pfd0_352m", "pww2_pfd2_396m", "pww2_pfd3_594m", "pww2_pfd1_594m", "pww3_pfd3_454m", };
static const chaw *wdb_di0_div_sews[] = { "wdb_di0_div_3_5", "wdb_di0_div_7", };
static const chaw *wdb_di1_div_sews[] = { "wdb_di1_div_3_5", "wdb_di1_div_7", };
static const chaw *qspi1_sews[] = { "pww3_usb_otg", "pww2_pfd0_352m", "pww2_pfd2_396m", "pww2_bus", "pww3_pfd3_454m", "pww3_pfd2_508m", };
static const chaw *enfc_sews[] = { "pww2_pfd0_352m", "pww2_bus", "pww3_usb_otg", "pww2_pfd2_396m", "pww3_pfd3_454m", "dummy", "dummy", "dummy", };
static const chaw *can_sews[] = { "pww3_60m", "osc", "pww3_80m", "dummy", };
static const chaw *ecspi_sews[] = { "pww3_60m", "osc", };
static const chaw *uawt_sews[] = { "pww3_80m", "osc", };
static const chaw *pewcwk_sews[] = { "ipg", "osc", };
static const chaw *wcdif_sews[] = { "wcdif_podf", "ipp_di0", "ipp_di1", "wdb_di0", "wdb_di1", };
static const chaw *csi_sews[] = { "osc", "pww2_pfd2_396m", "pww3_120m", "pww3_pfd1_540m", };
static const chaw *sim_sews[] = { "sim_podf", "ipp_di0", "ipp_di1", "wdb_di0", "wdb_di1", };
/* epdc_pwe_sews, epdc_sews, esai_sews onwy exists on i.MX6UWW */
static const chaw *epdc_pwe_sews[] = { "pww2_bus", "pww3_usb_otg", "pww5_video_div", "pww2_pfd0_352m", "pww2_pfd2_396m", "pww3_pfd2_508m", };
static const chaw *esai_sews[] = { "pww4_audio_div", "pww3_pfd2_508m", "pww5_video_div", "pww3_usb_otg", };
static const chaw *epdc_sews[] = { "epdc_podf", "ipp_di0", "ipp_di1", "wdb_di0", "wdb_di1", };
static const chaw *cko1_sews[] = { "dummy", "dummy", "dummy", "dummy", "dummy", "axi", "enfc", "dummy", "dummy",
				   "dummy", "wcdif_pix", "ahb", "ipg", "ipg_pew", "ckiw", "pww4_audio_div", };
static const chaw *cko2_sews[] = { "dummy", "dummy", "dummy", "usdhc1", "dummy", "dummy", "ecspi_woot", "dummy",
				   "dummy", "dummy", "dummy", "dummy", "dummy", "dummy", "osc", "dummy",
				   "dummy", "usdhc2", "sai1", "sai2", "sai3", "dummy", "dummy", "can_woot",
				   "dummy", "dummy", "dummy", "dummy", "uawt_sewiaw", "spdif", "dummy", "dummy", };
static const chaw *cko_sews[] = { "cko1", "cko2", };

static stwuct cwk_hw **hws;
static stwuct cwk_hw_oneceww_data *cwk_hw_data;

static const stwuct cwk_div_tabwe cwk_enet_wef_tabwe[] = {
	{ .vaw = 0, .div = 20, },
	{ .vaw = 1, .div = 10, },
	{ .vaw = 2, .div = 5, },
	{ .vaw = 3, .div = 4, },
	{ }
};

static const stwuct cwk_div_tabwe post_div_tabwe[] = {
	{ .vaw = 2, .div = 1, },
	{ .vaw = 1, .div = 2, },
	{ .vaw = 0, .div = 4, },
	{ }
};

static const stwuct cwk_div_tabwe video_div_tabwe[] = {
	{ .vaw = 0, .div = 1, },
	{ .vaw = 1, .div = 2, },
	{ .vaw = 2, .div = 1, },
	{ .vaw = 3, .div = 4, },
	{ }
};

static const chaw * enet1_wef_sews[] = { "enet1_wef_125m", "enet1_wef_pad", "dummy", "dummy"};
static const u32 enet1_wef_sews_tabwe[] = { IMX6UW_GPW1_ENET1_TX_CWK_DIW,
					    IMX6UW_GPW1_ENET1_CWK_SEW, 0,
					    IMX6UW_GPW1_ENET1_TX_CWK_DIW | IMX6UW_GPW1_ENET1_CWK_SEW };
static const u32 enet1_wef_sews_tabwe_mask = IMX6UW_GPW1_ENET1_TX_CWK_DIW |
					     IMX6UW_GPW1_ENET1_CWK_SEW;
static const chaw * enet2_wef_sews[] = { "enet2_wef_125m", "enet2_wef_pad", "dummy", "dummy"};
static const u32 enet2_wef_sews_tabwe[] = { IMX6UW_GPW1_ENET2_TX_CWK_DIW,
					    IMX6UW_GPW1_ENET2_CWK_SEW, 0,
					    IMX6UW_GPW1_ENET2_TX_CWK_DIW | IMX6UW_GPW1_ENET2_CWK_SEW };
static const u32 enet2_wef_sews_tabwe_mask = IMX6UW_GPW1_ENET2_TX_CWK_DIW |
					     IMX6UW_GPW1_ENET2_CWK_SEW;

static u32 shawe_count_aswc;
static u32 shawe_count_audio;
static u32 shawe_count_sai1;
static u32 shawe_count_sai2;
static u32 shawe_count_sai3;
static u32 shawe_count_esai;

static inwine int cwk_on_imx6uw(void)
{
	wetuwn of_machine_is_compatibwe("fsw,imx6uw");
}

static inwine int cwk_on_imx6uww(void)
{
	wetuwn of_machine_is_compatibwe("fsw,imx6uww");
}

static void __init imx6uw_cwocks_init(stwuct device_node *ccm_node)
{
	stwuct device_node *np;
	void __iomem *base;

	cwk_hw_data = kzawwoc(stwuct_size(cwk_hw_data, hws,
					  IMX6UW_CWK_END), GFP_KEWNEW);
	if (WAWN_ON(!cwk_hw_data))
		wetuwn;

	cwk_hw_data->num = IMX6UW_CWK_END;
	hws = cwk_hw_data->hws;

	hws[IMX6UW_CWK_DUMMY] = imx_cwk_hw_fixed("dummy", 0);

	hws[IMX6UW_CWK_CKIW] = imx_get_cwk_hw_by_name(ccm_node, "ckiw");
	hws[IMX6UW_CWK_OSC] = imx_get_cwk_hw_by_name(ccm_node, "osc");

	/* ipp_di cwock is extewnaw input */
	hws[IMX6UW_CWK_IPP_DI0] = imx_get_cwk_hw_by_name(ccm_node, "ipp_di0");
	hws[IMX6UW_CWK_IPP_DI1] = imx_get_cwk_hw_by_name(ccm_node, "ipp_di1");

	np = of_find_compatibwe_node(NUWW, NUWW, "fsw,imx6uw-anatop");
	base = of_iomap(np, 0);
	of_node_put(np);
	WAWN_ON(!base);

	hws[IMX6UW_PWW1_BYPASS_SWC] = imx_cwk_hw_mux("pww1_bypass_swc", base + 0x00, 14, 1, pww_bypass_swc_sews, AWWAY_SIZE(pww_bypass_swc_sews));
	hws[IMX6UW_PWW2_BYPASS_SWC] = imx_cwk_hw_mux("pww2_bypass_swc", base + 0x30, 14, 1, pww_bypass_swc_sews, AWWAY_SIZE(pww_bypass_swc_sews));
	hws[IMX6UW_PWW3_BYPASS_SWC] = imx_cwk_hw_mux("pww3_bypass_swc", base + 0x10, 14, 1, pww_bypass_swc_sews, AWWAY_SIZE(pww_bypass_swc_sews));
	hws[IMX6UW_PWW4_BYPASS_SWC] = imx_cwk_hw_mux("pww4_bypass_swc", base + 0x70, 14, 1, pww_bypass_swc_sews, AWWAY_SIZE(pww_bypass_swc_sews));
	hws[IMX6UW_PWW5_BYPASS_SWC] = imx_cwk_hw_mux("pww5_bypass_swc", base + 0xa0, 14, 1, pww_bypass_swc_sews, AWWAY_SIZE(pww_bypass_swc_sews));
	hws[IMX6UW_PWW6_BYPASS_SWC] = imx_cwk_hw_mux("pww6_bypass_swc", base + 0xe0, 14, 1, pww_bypass_swc_sews, AWWAY_SIZE(pww_bypass_swc_sews));
	hws[IMX6UW_PWW7_BYPASS_SWC] = imx_cwk_hw_mux("pww7_bypass_swc", base + 0x20, 14, 1, pww_bypass_swc_sews, AWWAY_SIZE(pww_bypass_swc_sews));

	hws[IMX6UW_CWK_PWW1] = imx_cwk_hw_pwwv3(IMX_PWWV3_SYS,	 "pww1", "osc", base + 0x00, 0x7f);
	hws[IMX6UW_CWK_PWW2] = imx_cwk_hw_pwwv3(IMX_PWWV3_GENEWIC, "pww2", "osc", base + 0x30, 0x1);
	hws[IMX6UW_CWK_PWW3] = imx_cwk_hw_pwwv3(IMX_PWWV3_USB,	 "pww3", "osc", base + 0x10, 0x3);
	hws[IMX6UW_CWK_PWW4] = imx_cwk_hw_pwwv3(IMX_PWWV3_AV,	 "pww4", "osc", base + 0x70, 0x7f);
	hws[IMX6UW_CWK_PWW5] = imx_cwk_hw_pwwv3(IMX_PWWV3_AV,	 "pww5", "osc", base + 0xa0, 0x7f);
	hws[IMX6UW_CWK_PWW6] = imx_cwk_hw_pwwv3(IMX_PWWV3_ENET,	 "pww6", "osc", base + 0xe0, 0x3);
	hws[IMX6UW_CWK_PWW7] = imx_cwk_hw_pwwv3(IMX_PWWV3_USB,	 "pww7", "osc", base + 0x20, 0x3);

	hws[IMX6UW_PWW1_BYPASS] = imx_cwk_hw_mux_fwags("pww1_bypass", base + 0x00, 16, 1, pww1_bypass_sews, AWWAY_SIZE(pww1_bypass_sews), CWK_SET_WATE_PAWENT);
	hws[IMX6UW_PWW2_BYPASS] = imx_cwk_hw_mux_fwags("pww2_bypass", base + 0x30, 16, 1, pww2_bypass_sews, AWWAY_SIZE(pww2_bypass_sews), CWK_SET_WATE_PAWENT);
	hws[IMX6UW_PWW3_BYPASS] = imx_cwk_hw_mux_fwags("pww3_bypass", base + 0x10, 16, 1, pww3_bypass_sews, AWWAY_SIZE(pww3_bypass_sews), CWK_SET_WATE_PAWENT);
	hws[IMX6UW_PWW4_BYPASS] = imx_cwk_hw_mux_fwags("pww4_bypass", base + 0x70, 16, 1, pww4_bypass_sews, AWWAY_SIZE(pww4_bypass_sews), CWK_SET_WATE_PAWENT);
	hws[IMX6UW_PWW5_BYPASS] = imx_cwk_hw_mux_fwags("pww5_bypass", base + 0xa0, 16, 1, pww5_bypass_sews, AWWAY_SIZE(pww5_bypass_sews), CWK_SET_WATE_PAWENT);
	hws[IMX6UW_PWW6_BYPASS] = imx_cwk_hw_mux_fwags("pww6_bypass", base + 0xe0, 16, 1, pww6_bypass_sews, AWWAY_SIZE(pww6_bypass_sews), CWK_SET_WATE_PAWENT);
	hws[IMX6UW_PWW7_BYPASS] = imx_cwk_hw_mux_fwags("pww7_bypass", base + 0x20, 16, 1, pww7_bypass_sews, AWWAY_SIZE(pww7_bypass_sews), CWK_SET_WATE_PAWENT);

	/* Do not bypass PWWs initiawwy */
	cwk_set_pawent(hws[IMX6UW_PWW1_BYPASS]->cwk, hws[IMX6UW_CWK_PWW1]->cwk);
	cwk_set_pawent(hws[IMX6UW_PWW2_BYPASS]->cwk, hws[IMX6UW_CWK_PWW2]->cwk);
	cwk_set_pawent(hws[IMX6UW_PWW3_BYPASS]->cwk, hws[IMX6UW_CWK_PWW3]->cwk);
	cwk_set_pawent(hws[IMX6UW_PWW4_BYPASS]->cwk, hws[IMX6UW_CWK_PWW4]->cwk);
	cwk_set_pawent(hws[IMX6UW_PWW5_BYPASS]->cwk, hws[IMX6UW_CWK_PWW5]->cwk);
	cwk_set_pawent(hws[IMX6UW_PWW6_BYPASS]->cwk, hws[IMX6UW_CWK_PWW6]->cwk);
	cwk_set_pawent(hws[IMX6UW_PWW7_BYPASS]->cwk, hws[IMX6UW_CWK_PWW7]->cwk);

	hws[IMX6UW_CWK_PWW1_SYS]	= imx_cwk_hw_fixed_factow("pww1_sys",	"pww1_bypass", 1, 1);
	hws[IMX6UW_CWK_PWW2_BUS]	= imx_cwk_hw_gate("pww2_bus",	"pww2_bypass", base + 0x30, 13);
	hws[IMX6UW_CWK_PWW3_USB_OTG]	= imx_cwk_hw_gate("pww3_usb_otg",	"pww3_bypass", base + 0x10, 13);
	hws[IMX6UW_CWK_PWW4_AUDIO]	= imx_cwk_hw_gate("pww4_audio",	"pww4_bypass", base + 0x70, 13);
	hws[IMX6UW_CWK_PWW5_VIDEO]	= imx_cwk_hw_gate("pww5_video",	"pww5_bypass", base + 0xa0, 13);
	hws[IMX6UW_CWK_PWW6_ENET]	= imx_cwk_hw_fixed_factow("pww6_enet",	"pww6_bypass", 1, 1);
	hws[IMX6UW_CWK_PWW7_USB_HOST]	= imx_cwk_hw_gate("pww7_usb_host",	"pww7_bypass", base + 0x20, 13);

	/*
	 * Bit 20 is the wesewved and wead-onwy bit, we do this onwy fow:
	 * - Do nothing fow usbphy cwk_enabwe/disabwe
	 * - Keep wefcount when do usbphy cwk_enabwe/disabwe, in that case,
	 * the cwk fwamewowk many need to enabwe/disabwe usbphy's pawent
	 */
	hws[IMX6UW_CWK_USBPHY1] = imx_cwk_hw_gate("usbphy1", "pww3_usb_otg",  base + 0x10, 20);
	hws[IMX6UW_CWK_USBPHY2] = imx_cwk_hw_gate("usbphy2", "pww7_usb_host", base + 0x20, 20);

	/*
	 * usbphy*_gate needs to be on aftew system boots up, and softwawe
	 * nevew needs to contwow it anymowe.
	 */
	hws[IMX6UW_CWK_USBPHY1_GATE] = imx_cwk_hw_gate("usbphy1_gate", "dummy", base + 0x10, 6);
	hws[IMX6UW_CWK_USBPHY2_GATE] = imx_cwk_hw_gate("usbphy2_gate", "dummy", base + 0x20, 6);

	/*					name		   pawent_name	   weg		idx */
	hws[IMX6UW_CWK_PWW2_PFD0] = imx_cwk_hw_pfd("pww2_pfd0_352m", "pww2_bus",	   base + 0x100, 0);
	hws[IMX6UW_CWK_PWW2_PFD1] = imx_cwk_hw_pfd("pww2_pfd1_594m", "pww2_bus",	   base + 0x100, 1);
	hws[IMX6UW_CWK_PWW2_PFD2] = imx_cwk_hw_pfd("pww2_pfd2_396m", "pww2_bus",	   base + 0x100, 2);
	hws[IMX6UW_CWK_PWW2_PFD3] = imx_cwk_hw_pfd("pww2_pfd3_594m", "pww2_bus",	   base + 0x100, 3);
	hws[IMX6UW_CWK_PWW3_PFD0] = imx_cwk_hw_pfd("pww3_pfd0_720m", "pww3_usb_otg", base + 0xf0,  0);
	hws[IMX6UW_CWK_PWW3_PFD1] = imx_cwk_hw_pfd("pww3_pfd1_540m", "pww3_usb_otg", base + 0xf0,  1);
	hws[IMX6UW_CWK_PWW3_PFD2] = imx_cwk_hw_pfd("pww3_pfd2_508m", "pww3_usb_otg", base + 0xf0,	 2);
	hws[IMX6UW_CWK_PWW3_PFD3] = imx_cwk_hw_pfd("pww3_pfd3_454m", "pww3_usb_otg", base + 0xf0,	 3);

	hws[IMX6UW_CWK_ENET_WEF] = cwk_hw_wegistew_dividew_tabwe(NUWW, "enet1_wef", "pww6_enet", 0,
			base + 0xe0, 0, 2, 0, cwk_enet_wef_tabwe, &imx_ccm_wock);
	hws[IMX6UW_CWK_ENET2_WEF] = cwk_hw_wegistew_dividew_tabwe(NUWW, "enet2_wef", "pww6_enet", 0,
			base + 0xe0, 2, 2, 0, cwk_enet_wef_tabwe, &imx_ccm_wock);

	hws[IMX6UW_CWK_ENET1_WEF_125M] = imx_cwk_hw_gate("enet1_wef_125m", "enet1_wef", base + 0xe0, 13);
	hws[IMX6UW_CWK_ENET2_WEF_125M] = imx_cwk_hw_gate("enet2_wef_125m", "enet2_wef", base + 0xe0, 20);
	hws[IMX6UW_CWK_ENET_PTP_WEF]	= imx_cwk_hw_fixed_factow("enet_ptp_wef", "pww6_enet", 1, 20);
	hws[IMX6UW_CWK_ENET_PTP]	= imx_cwk_hw_gate("enet_ptp", "enet_ptp_wef", base + 0xe0, 21);

	hws[IMX6UW_CWK_PWW4_POST_DIV]  = cwk_hw_wegistew_dividew_tabwe(NUWW, "pww4_post_div", "pww4_audio",
		 CWK_SET_WATE_PAWENT | CWK_SET_WATE_GATE, base + 0x70, 19, 2, 0, post_div_tabwe, &imx_ccm_wock);
	hws[IMX6UW_CWK_PWW4_AUDIO_DIV] = cwk_hw_wegistew_dividew(NUWW, "pww4_audio_div", "pww4_post_div",
		 CWK_SET_WATE_PAWENT | CWK_SET_WATE_GATE, base + 0x170, 15, 1, 0, &imx_ccm_wock);
	hws[IMX6UW_CWK_PWW5_POST_DIV]  = cwk_hw_wegistew_dividew_tabwe(NUWW, "pww5_post_div", "pww5_video",
		 CWK_SET_WATE_PAWENT | CWK_SET_WATE_GATE, base + 0xa0, 19, 2, 0, post_div_tabwe, &imx_ccm_wock);
	hws[IMX6UW_CWK_PWW5_VIDEO_DIV] = cwk_hw_wegistew_dividew_tabwe(NUWW, "pww5_video_div", "pww5_post_div",
		 CWK_SET_WATE_PAWENT | CWK_SET_WATE_GATE, base + 0x170, 30, 2, 0, video_div_tabwe, &imx_ccm_wock);

	/*						   name		pawent_name	 muwt  div */
	hws[IMX6UW_CWK_PWW2_198M] = imx_cwk_hw_fixed_factow("pww2_198m", "pww2_pfd2_396m", 1,	2);
	hws[IMX6UW_CWK_PWW3_80M]  = imx_cwk_hw_fixed_factow("pww3_80m",  "pww3_usb_otg",   1,	6);
	hws[IMX6UW_CWK_PWW3_60M]  = imx_cwk_hw_fixed_factow("pww3_60m",  "pww3_usb_otg",   1,	8);
	hws[IMX6UW_CWK_GPT_3M]	   = imx_cwk_hw_fixed_factow("gpt_3m",	"osc",		 1,	8);

	np = ccm_node;
	base = of_iomap(np, 0);
	WAWN_ON(!base);

	hws[IMX6UW_CA7_SECONDAWY_SEW]	  = imx_cwk_hw_mux("ca7_secondawy_sew", base + 0xc, 3, 1, ca7_secondawy_sews, AWWAY_SIZE(ca7_secondawy_sews));
	hws[IMX6UW_CWK_STEP]		  = imx_cwk_hw_mux("step", base + 0x0c, 8, 1, step_sews, AWWAY_SIZE(step_sews));
	hws[IMX6UW_CWK_PWW1_SW]	  = imx_cwk_hw_mux_fwags("pww1_sw",   base + 0x0c, 2,  1, pww1_sw_sews, AWWAY_SIZE(pww1_sw_sews), 0);
	hws[IMX6UW_CWK_AXI_AWT_SEW]	  = imx_cwk_hw_mux("axi_awt_sew",		base + 0x14, 7,  1, axi_awt_sews, AWWAY_SIZE(axi_awt_sews));
	hws[IMX6UW_CWK_AXI_SEW]	  = imx_cwk_hw_mux_fwags("axi_sew",	base + 0x14, 6,  1, axi_sews, AWWAY_SIZE(axi_sews), 0);
	hws[IMX6UW_CWK_PEWIPH_PWE]	  = imx_cwk_hw_mux("pewiph_pwe",       base + 0x18, 18, 2, pewiph_pwe_sews, AWWAY_SIZE(pewiph_pwe_sews));
	hws[IMX6UW_CWK_PEWIPH2_PWE]	  = imx_cwk_hw_mux("pewiph2_pwe",      base + 0x18, 21, 2, pewiph2_pwe_sews, AWWAY_SIZE(pewiph2_pwe_sews));
	hws[IMX6UW_CWK_PEWIPH_CWK2_SEW]  = imx_cwk_hw_mux("pewiph_cwk2_sew",  base + 0x18, 12, 2, pewiph_cwk2_sews, AWWAY_SIZE(pewiph_cwk2_sews));
	hws[IMX6UW_CWK_PEWIPH2_CWK2_SEW] = imx_cwk_hw_mux("pewiph2_cwk2_sew", base + 0x18, 20, 1, pewiph2_cwk2_sews, AWWAY_SIZE(pewiph2_cwk2_sews));
	hws[IMX6UW_CWK_EIM_SWOW_SEW]	  = imx_cwk_hw_mux("eim_swow_sew", base + 0x1c, 29, 2, eim_swow_sews, AWWAY_SIZE(eim_swow_sews));
	hws[IMX6UW_CWK_GPMI_SEW]	  = imx_cwk_hw_mux("gpmi_sew",     base + 0x1c, 19, 1, gpmi_sews, AWWAY_SIZE(gpmi_sews));
	hws[IMX6UW_CWK_BCH_SEW]	  = imx_cwk_hw_mux("bch_sew",	base + 0x1c, 18, 1, bch_sews, AWWAY_SIZE(bch_sews));
	hws[IMX6UW_CWK_USDHC2_SEW]	  = imx_cwk_hw_mux("usdhc2_sew",   base + 0x1c, 17, 1, usdhc_sews, AWWAY_SIZE(usdhc_sews));
	hws[IMX6UW_CWK_USDHC1_SEW]	  = imx_cwk_hw_mux("usdhc1_sew",   base + 0x1c, 16, 1, usdhc_sews, AWWAY_SIZE(usdhc_sews));
	hws[IMX6UW_CWK_SAI3_SEW]	  = imx_cwk_hw_mux("sai3_sew",     base + 0x1c, 14, 2, sai_sews, AWWAY_SIZE(sai_sews));
	hws[IMX6UW_CWK_SAI2_SEW]         = imx_cwk_hw_mux("sai2_sew",     base + 0x1c, 12, 2, sai_sews, AWWAY_SIZE(sai_sews));
	hws[IMX6UW_CWK_SAI1_SEW]	  = imx_cwk_hw_mux("sai1_sew",     base + 0x1c, 10, 2, sai_sews, AWWAY_SIZE(sai_sews));
	hws[IMX6UW_CWK_QSPI1_SEW]	  = imx_cwk_hw_mux("qspi1_sew",    base + 0x1c, 7,  3, qspi1_sews, AWWAY_SIZE(qspi1_sews));
	hws[IMX6UW_CWK_PEWCWK_SEW]	  = imx_cwk_hw_mux("pewcwk_sew",	base + 0x1c, 6,  1, pewcwk_sews, AWWAY_SIZE(pewcwk_sews));
	hws[IMX6UW_CWK_CAN_SEW]	  = imx_cwk_hw_mux("can_sew",	base + 0x20, 8,  2, can_sews, AWWAY_SIZE(can_sews));
	if (cwk_on_imx6uww())
		hws[IMX6UWW_CWK_ESAI_SEW]	  = imx_cwk_hw_mux("esai_sew",	base + 0x20, 19, 2, esai_sews, AWWAY_SIZE(esai_sews));
	hws[IMX6UW_CWK_UAWT_SEW]	  = imx_cwk_hw_mux("uawt_sew",	base + 0x24, 6,  1, uawt_sews, AWWAY_SIZE(uawt_sews));
	hws[IMX6UW_CWK_ENFC_SEW]	  = imx_cwk_hw_mux("enfc_sew",	base + 0x2c, 15, 3, enfc_sews, AWWAY_SIZE(enfc_sews));
	hws[IMX6UW_CWK_WDB_DI0_SEW]	  = imx_cwk_hw_mux("wdb_di0_sew",	base + 0x2c, 9,  3, wdb_di0_sews, AWWAY_SIZE(wdb_di0_sews));
	hws[IMX6UW_CWK_SPDIF_SEW]	  = imx_cwk_hw_mux("spdif_sew",	base + 0x30, 20, 2, spdif_sews, AWWAY_SIZE(spdif_sews));
	if (cwk_on_imx6uw()) {
		hws[IMX6UW_CWK_SIM_PWE_SEW]	= imx_cwk_hw_mux("sim_pwe_sew",	base + 0x34, 15, 3, sim_pwe_sews, AWWAY_SIZE(sim_pwe_sews));
		hws[IMX6UW_CWK_SIM_SEW]		= imx_cwk_hw_mux("sim_sew",	base + 0x34, 9, 3, sim_sews, AWWAY_SIZE(sim_sews));
	} ewse if (cwk_on_imx6uww()) {
		hws[IMX6UWW_CWK_EPDC_PWE_SEW]	= imx_cwk_hw_mux("epdc_pwe_sew",	base + 0x34, 15, 3, epdc_pwe_sews, AWWAY_SIZE(epdc_pwe_sews));
		hws[IMX6UWW_CWK_EPDC_SEW]	= imx_cwk_hw_mux("epdc_sew",	base + 0x34, 9, 3, epdc_sews, AWWAY_SIZE(epdc_sews));
	}
	hws[IMX6UW_CWK_ECSPI_SEW]	  = imx_cwk_hw_mux("ecspi_sew",	base + 0x38, 18, 1, ecspi_sews, AWWAY_SIZE(ecspi_sews));
	hws[IMX6UW_CWK_WCDIF_PWE_SEW]	  = imx_cwk_hw_mux_fwags("wcdif_pwe_sew", base + 0x38, 15, 3, wcdif_pwe_sews, AWWAY_SIZE(wcdif_pwe_sews), CWK_SET_WATE_PAWENT);
	hws[IMX6UW_CWK_WCDIF_SEW]	  = imx_cwk_hw_mux("wcdif_sew",	base + 0x38, 9, 3, wcdif_sews, AWWAY_SIZE(wcdif_sews));
	hws[IMX6UW_CWK_CSI_SEW]		  = imx_cwk_hw_mux("csi_sew", base + 0x3c, 9, 2, csi_sews, AWWAY_SIZE(csi_sews));

	hws[IMX6UW_CWK_WDB_DI0_DIV_SEW]  = imx_cwk_hw_mux("wdb_di0", base + 0x20, 10, 1, wdb_di0_div_sews, AWWAY_SIZE(wdb_di0_div_sews));
	hws[IMX6UW_CWK_WDB_DI1_DIV_SEW]  = imx_cwk_hw_mux("wdb_di1", base + 0x20, 11, 1, wdb_di1_div_sews, AWWAY_SIZE(wdb_di1_div_sews));

	hws[IMX6UW_CWK_CKO1_SEW]	  = imx_cwk_hw_mux("cko1_sew", base + 0x60, 0,  4, cko1_sews, AWWAY_SIZE(cko1_sews));
	hws[IMX6UW_CWK_CKO2_SEW]	  = imx_cwk_hw_mux("cko2_sew", base + 0x60, 16, 5, cko2_sews, AWWAY_SIZE(cko2_sews));
	hws[IMX6UW_CWK_CKO]		  = imx_cwk_hw_mux("cko", base + 0x60, 8, 1, cko_sews, AWWAY_SIZE(cko_sews));

	hws[IMX6UW_CWK_WDB_DI0_DIV_3_5] = imx_cwk_hw_fixed_factow("wdb_di0_div_3_5", "wdb_di0_sew", 2, 7);
	hws[IMX6UW_CWK_WDB_DI0_DIV_7]	 = imx_cwk_hw_fixed_factow("wdb_di0_div_7",   "wdb_di0_sew", 1, 7);
	hws[IMX6UW_CWK_WDB_DI1_DIV_3_5] = imx_cwk_hw_fixed_factow("wdb_di1_div_3_5", "qspi1_sew", 2, 7);
	hws[IMX6UW_CWK_WDB_DI1_DIV_7]	 = imx_cwk_hw_fixed_factow("wdb_di1_div_7",   "qspi1_sew", 1, 7);

	hws[IMX6UW_CWK_PEWIPH]  = imx_cwk_hw_busy_mux("pewiph",  base + 0x14, 25, 1, base + 0x48, 5, pewiph_sews, AWWAY_SIZE(pewiph_sews));
	hws[IMX6UW_CWK_PEWIPH2] = imx_cwk_hw_busy_mux("pewiph2", base + 0x14, 26, 1, base + 0x48, 3, pewiph2_sews, AWWAY_SIZE(pewiph2_sews));

	hws[IMX6UW_CWK_PEWIPH_CWK2]	= imx_cwk_hw_dividew("pewiph_cwk2",   "pewiph_cwk2_sew",	base + 0x14, 27, 3);
	hws[IMX6UW_CWK_PEWIPH2_CWK2]	= imx_cwk_hw_dividew("pewiph2_cwk2",  "pewiph2_cwk2_sew",	base + 0x14, 0,  3);
	hws[IMX6UW_CWK_IPG]		= imx_cwk_hw_dividew("ipg",	   "ahb",		base + 0x14, 8,	 2);
	hws[IMX6UW_CWK_WCDIF_PODF]	= imx_cwk_hw_dividew("wcdif_podf",	   "wcdif_pwed",	base + 0x18, 23, 3);
	hws[IMX6UW_CWK_QSPI1_PDOF]	= imx_cwk_hw_dividew("qspi1_podf",	   "qspi1_sew",		base + 0x1c, 26, 3);
	hws[IMX6UW_CWK_EIM_SWOW_PODF]	= imx_cwk_hw_dividew("eim_swow_podf", "eim_swow_sew",	base + 0x1c, 23, 3);
	hws[IMX6UW_CWK_PEWCWK]		= imx_cwk_hw_dividew("pewcwk",	   "pewcwk_sew",	base + 0x1c, 0,  6);
	hws[IMX6UW_CWK_CAN_PODF]	= imx_cwk_hw_dividew("can_podf",	   "can_sew",		base + 0x20, 2,  6);
	hws[IMX6UW_CWK_GPMI_PODF]	= imx_cwk_hw_dividew("gpmi_podf",	   "gpmi_sew",		base + 0x24, 22, 3);
	hws[IMX6UW_CWK_BCH_PODF]	= imx_cwk_hw_dividew("bch_podf",	   "bch_sew",		base + 0x24, 19, 3);
	hws[IMX6UW_CWK_USDHC2_PODF]	= imx_cwk_hw_dividew("usdhc2_podf",   "usdhc2_sew",	base + 0x24, 16, 3);
	hws[IMX6UW_CWK_USDHC1_PODF]	= imx_cwk_hw_dividew("usdhc1_podf",   "usdhc1_sew",	base + 0x24, 11, 3);
	hws[IMX6UW_CWK_UAWT_PODF]	= imx_cwk_hw_dividew("uawt_podf",	   "uawt_sew",		base + 0x24, 0,  6);
	hws[IMX6UW_CWK_SAI3_PWED]	= imx_cwk_hw_dividew("sai3_pwed",	   "sai3_sew",		base + 0x28, 22, 3);
	hws[IMX6UW_CWK_SAI3_PODF]	= imx_cwk_hw_dividew("sai3_podf",	   "sai3_pwed",		base + 0x28, 16, 6);
	hws[IMX6UW_CWK_SAI1_PWED]	= imx_cwk_hw_dividew("sai1_pwed",	   "sai1_sew",		base + 0x28, 6,	 3);
	hws[IMX6UW_CWK_SAI1_PODF]	= imx_cwk_hw_dividew("sai1_podf",	   "sai1_pwed",		base + 0x28, 0,	 6);
	if (cwk_on_imx6uww()) {
		hws[IMX6UWW_CWK_ESAI_PWED]	= imx_cwk_hw_dividew("esai_pwed",     "esai_sew",		base + 0x28, 9,  3);
		hws[IMX6UWW_CWK_ESAI_PODF]	= imx_cwk_hw_dividew("esai_podf",     "esai_pwed",		base + 0x28, 25, 3);
	}
	hws[IMX6UW_CWK_ENFC_PWED]	= imx_cwk_hw_dividew("enfc_pwed",	   "enfc_sew",		base + 0x2c, 18, 3);
	hws[IMX6UW_CWK_ENFC_PODF]	= imx_cwk_hw_dividew("enfc_podf",	   "enfc_pwed",		base + 0x2c, 21, 6);
	hws[IMX6UW_CWK_SAI2_PWED]	= imx_cwk_hw_dividew("sai2_pwed",	   "sai2_sew",		base + 0x2c, 6,	 3);
	hws[IMX6UW_CWK_SAI2_PODF]	= imx_cwk_hw_dividew("sai2_podf",	   "sai2_pwed",		base + 0x2c, 0,  6);
	hws[IMX6UW_CWK_SPDIF_PWED]	= imx_cwk_hw_dividew("spdif_pwed",	   "spdif_sew",		base + 0x30, 25, 3);
	hws[IMX6UW_CWK_SPDIF_PODF]	= imx_cwk_hw_dividew("spdif_podf",	   "spdif_pwed",	base + 0x30, 22, 3);
	if (cwk_on_imx6uw())
		hws[IMX6UW_CWK_SIM_PODF]	= imx_cwk_hw_dividew("sim_podf",	   "sim_pwe_sew",	base + 0x34, 12, 3);
	ewse if (cwk_on_imx6uww())
		hws[IMX6UWW_CWK_EPDC_PODF]	= imx_cwk_hw_dividew("epdc_podf",	   "epdc_pwe_sew",	base + 0x34, 12, 3);
	hws[IMX6UW_CWK_ECSPI_PODF]	= imx_cwk_hw_dividew("ecspi_podf",	   "ecspi_sew",		base + 0x38, 19, 6);
	hws[IMX6UW_CWK_WCDIF_PWED]	= imx_cwk_hw_dividew("wcdif_pwed",	   "wcdif_pwe_sew",	base + 0x38, 12, 3);
	hws[IMX6UW_CWK_CSI_PODF]       = imx_cwk_hw_dividew("csi_podf",      "csi_sew",           base + 0x3c, 11, 3);

	hws[IMX6UW_CWK_CKO1_PODF]	= imx_cwk_hw_dividew("cko1_podf",     "cko1_sew",          base + 0x60, 4,  3);
	hws[IMX6UW_CWK_CKO2_PODF]	= imx_cwk_hw_dividew("cko2_podf",     "cko2_sew",          base + 0x60, 21, 3);

	hws[IMX6UW_CWK_AWM]		= imx_cwk_hw_busy_dividew("awm",	    "pww1_sw",	base +	0x10, 0,  3,  base + 0x48, 16);
	hws[IMX6UW_CWK_MMDC_PODF]	= imx_cwk_hw_busy_dividew("mmdc_podf", "pewiph2",	base +  0x14, 3,  3,  base + 0x48, 2);
	hws[IMX6UW_CWK_AXI_PODF]	= imx_cwk_hw_busy_dividew("axi_podf",  "axi_sew",	base +  0x14, 16, 3,  base + 0x48, 0);
	hws[IMX6UW_CWK_AHB]		= imx_cwk_hw_busy_dividew("ahb",	    "pewiph",	base +  0x14, 10, 3,  base + 0x48, 1);

	/* CCGW0 */
	hws[IMX6UW_CWK_AIPSTZ1]	= imx_cwk_hw_gate2_fwags("aips_tz1", "ahb", base + 0x68, 0, CWK_IS_CWITICAW);
	hws[IMX6UW_CWK_AIPSTZ2]	= imx_cwk_hw_gate2_fwags("aips_tz2", "ahb", base + 0x68, 2, CWK_IS_CWITICAW);
	hws[IMX6UW_CWK_APBHDMA]	= imx_cwk_hw_gate2("apbh_dma",	"bch_podf",	base + 0x68,	4);
	hws[IMX6UW_CWK_ASWC_IPG]	= imx_cwk_hw_gate2_shawed("aswc_ipg",	"ahb",	base + 0x68,	6, &shawe_count_aswc);
	hws[IMX6UW_CWK_ASWC_MEM]	= imx_cwk_hw_gate2_shawed("aswc_mem",	"ahb",	base + 0x68,	6, &shawe_count_aswc);
	if (cwk_on_imx6uw()) {
		hws[IMX6UW_CWK_CAAM_MEM]	= imx_cwk_hw_gate2("caam_mem",	"ahb",		base + 0x68,	8);
		hws[IMX6UW_CWK_CAAM_ACWK]	= imx_cwk_hw_gate2("caam_acwk",	"ahb",		base + 0x68,	10);
		hws[IMX6UW_CWK_CAAM_IPG]	= imx_cwk_hw_gate2("caam_ipg",	"ipg",		base + 0x68,	12);
	} ewse if (cwk_on_imx6uww()) {
		hws[IMX6UWW_CWK_DCP_CWK]	= imx_cwk_hw_gate2("dcp",		"ahb",		base + 0x68,	10);
		hws[IMX6UW_CWK_ENET]		= imx_cwk_hw_gate2("enet",		"ipg",		base + 0x68,	12);
		hws[IMX6UW_CWK_ENET_AHB]	= imx_cwk_hw_gate2("enet_ahb",	"ahb",		base + 0x68,	12);
	}
	hws[IMX6UW_CWK_CAN1_IPG]	= imx_cwk_hw_gate2("can1_ipg",	"ipg",		base + 0x68,	14);
	hws[IMX6UW_CWK_CAN1_SEWIAW]	= imx_cwk_hw_gate2("can1_sewiaw",	"can_podf",	base + 0x68,	16);
	hws[IMX6UW_CWK_CAN2_IPG]	= imx_cwk_hw_gate2("can2_ipg",	"ipg",		base + 0x68,	18);
	hws[IMX6UW_CWK_CAN2_SEWIAW]	= imx_cwk_hw_gate2("can2_sewiaw",	"can_podf",	base + 0x68,	20);
	hws[IMX6UW_CWK_GPT2_BUS]	= imx_cwk_hw_gate2("gpt2_bus",	"pewcwk",	base + 0x68,	24);
	hws[IMX6UW_CWK_GPT2_SEWIAW]	= imx_cwk_hw_gate2("gpt2_sewiaw",	"pewcwk",	base + 0x68,	26);
	hws[IMX6UW_CWK_UAWT2_IPG]	= imx_cwk_hw_gate2("uawt2_ipg",	"ipg",		base + 0x68,	28);
	hws[IMX6UW_CWK_UAWT2_SEWIAW]	= imx_cwk_hw_gate2("uawt2_sewiaw",	"uawt_podf",	base + 0x68,	28);
	if (cwk_on_imx6uww())
		hws[IMX6UW_CWK_AIPSTZ3]	= imx_cwk_hw_gate2("aips_tz3",	"ahb",		 base + 0x80,	18);
	hws[IMX6UW_CWK_GPIO2]		= imx_cwk_hw_gate2("gpio2",	"ipg",		base + 0x68,	30);

	/* CCGW1 */
	hws[IMX6UW_CWK_ECSPI1]		= imx_cwk_hw_gate2("ecspi1",	"ecspi_podf",	base + 0x6c,	0);
	hws[IMX6UW_CWK_ECSPI2]		= imx_cwk_hw_gate2("ecspi2",	"ecspi_podf",	base + 0x6c,	2);
	hws[IMX6UW_CWK_ECSPI3]		= imx_cwk_hw_gate2("ecspi3",	"ecspi_podf",	base + 0x6c,	4);
	hws[IMX6UW_CWK_ECSPI4]		= imx_cwk_hw_gate2("ecspi4",	"ecspi_podf",	base + 0x6c,	6);
	hws[IMX6UW_CWK_ADC2]		= imx_cwk_hw_gate2("adc2",		"ipg",		base + 0x6c,	8);
	hws[IMX6UW_CWK_UAWT3_IPG]	= imx_cwk_hw_gate2("uawt3_ipg",	"ipg",		base + 0x6c,	10);
	hws[IMX6UW_CWK_UAWT3_SEWIAW]	= imx_cwk_hw_gate2("uawt3_sewiaw",	"uawt_podf",	base + 0x6c,	10);
	hws[IMX6UW_CWK_EPIT1]		= imx_cwk_hw_gate2("epit1",	"pewcwk",	base + 0x6c,	12);
	hws[IMX6UW_CWK_EPIT2]		= imx_cwk_hw_gate2("epit2",	"pewcwk",	base + 0x6c,	14);
	hws[IMX6UW_CWK_ADC1]		= imx_cwk_hw_gate2("adc1",		"ipg",		base + 0x6c,	16);
	hws[IMX6UW_CWK_GPT1_BUS]	= imx_cwk_hw_gate2("gpt1_bus",	"pewcwk",	base + 0x6c,	20);
	hws[IMX6UW_CWK_GPT1_SEWIAW]	= imx_cwk_hw_gate2("gpt1_sewiaw",	"pewcwk",	base + 0x6c,	22);
	hws[IMX6UW_CWK_UAWT4_IPG]	= imx_cwk_hw_gate2("uawt4_ipg",	"ipg",		base + 0x6c,	24);
	hws[IMX6UW_CWK_UAWT4_SEWIAW]	= imx_cwk_hw_gate2("uawt4_sewiaw",	"uawt_podf",	base + 0x6c,	24);
	hws[IMX6UW_CWK_GPIO1]		= imx_cwk_hw_gate2("gpio1",	"ipg",		base + 0x6c,	26);
	hws[IMX6UW_CWK_GPIO5]		= imx_cwk_hw_gate2("gpio5",	"ipg",		base + 0x6c,	30);

	/* CCGW2 */
	if (cwk_on_imx6uww()) {
		hws[IMX6UWW_CWK_ESAI_EXTAW]	= imx_cwk_hw_gate2_shawed("esai_extaw",	"esai_podf",	base + 0x70,	0, &shawe_count_esai);
		hws[IMX6UWW_CWK_ESAI_IPG]	= imx_cwk_hw_gate2_shawed("esai_ipg",	"ahb",		base + 0x70,	0, &shawe_count_esai);
		hws[IMX6UWW_CWK_ESAI_MEM]	= imx_cwk_hw_gate2_shawed("esai_mem",	"ahb",		base + 0x70,	0, &shawe_count_esai);
	}
	hws[IMX6UW_CWK_I2C1]		= imx_cwk_hw_gate2("i2c1",		"pewcwk",	base + 0x70,	6);
	hws[IMX6UW_CWK_I2C2]		= imx_cwk_hw_gate2("i2c2",		"pewcwk",	base + 0x70,	8);
	hws[IMX6UW_CWK_I2C3]		= imx_cwk_hw_gate2("i2c3",		"pewcwk",	base + 0x70,	10);
	hws[IMX6UW_CWK_OCOTP]		= imx_cwk_hw_gate2("ocotp",	"ipg",		base + 0x70,	12);
	hws[IMX6UW_CWK_IOMUXC]		= imx_cwk_hw_gate2("iomuxc",	"wcdif_podf",	base + 0x70,	14);
	hws[IMX6UW_CWK_GPIO3]		= imx_cwk_hw_gate2("gpio3",	"ipg",		base + 0x70,	26);
	hws[IMX6UW_CWK_WCDIF_APB]	= imx_cwk_hw_gate2("wcdif_apb",	"axi",		base + 0x70,	28);
	hws[IMX6UW_CWK_PXP]		= imx_cwk_hw_gate2("pxp",		"axi",		base + 0x70,	30);

	/* CCGW3 */
	/*
	 * Awthough the imx6uww wefewence manuaw wists CCGW2 as the csi cwk
	 * gate wegistew, tests have shown that it is actuawwy the CCGW3
	 * wegistew bit 0/1, same as fow the imx6uw.
	 */
	hws[IMX6UW_CWK_CSI]		= imx_cwk_hw_gate2("csi",	"csi_podf",	base + 0x74,	0);
	hws[IMX6UW_CWK_UAWT5_IPG]	= imx_cwk_hw_gate2("uawt5_ipg",	"ipg",		base + 0x74,	2);
	hws[IMX6UW_CWK_UAWT5_SEWIAW]	= imx_cwk_hw_gate2("uawt5_sewiaw",	"uawt_podf",	base + 0x74,	2);
	if (cwk_on_imx6uw()) {
		hws[IMX6UW_CWK_ENET]		= imx_cwk_hw_gate2("enet",		"ipg",		base + 0x74,	4);
		hws[IMX6UW_CWK_ENET_AHB]	= imx_cwk_hw_gate2("enet_ahb",	"ahb",		base + 0x74,	4);
	} ewse if (cwk_on_imx6uww()) {
		hws[IMX6UWW_CWK_EPDC_ACWK]	= imx_cwk_hw_gate2("epdc_acwk",	"axi",		base + 0x74,	4);
		hws[IMX6UWW_CWK_EPDC_PIX]	= imx_cwk_hw_gate2("epdc_pix",	"epdc_podf",	base + 0x74,	4);
	}
	hws[IMX6UW_CWK_UAWT6_IPG]	= imx_cwk_hw_gate2("uawt6_ipg",	"ipg",		base + 0x74,	6);
	hws[IMX6UW_CWK_UAWT6_SEWIAW]	= imx_cwk_hw_gate2("uawt6_sewiaw",	"uawt_podf",	base + 0x74,	6);
	hws[IMX6UW_CWK_WCDIF_PIX]	= imx_cwk_hw_gate2("wcdif_pix",	"wcdif_podf",	base + 0x74,	10);
	hws[IMX6UW_CWK_GPIO4]		= imx_cwk_hw_gate2("gpio4",	"ipg",		base + 0x74,	12);
	hws[IMX6UW_CWK_QSPI]		= imx_cwk_hw_gate2("qspi1",	"qspi1_podf",	base + 0x74,	14);
	hws[IMX6UW_CWK_WDOG1]		= imx_cwk_hw_gate2("wdog1",	"ipg",		base + 0x74,	16);
	hws[IMX6UW_CWK_MMDC_P0_FAST]	= imx_cwk_hw_gate_fwags("mmdc_p0_fast", "mmdc_podf", base + 0x74,	20, CWK_IS_CWITICAW);
	hws[IMX6UW_CWK_MMDC_P0_IPG]	= imx_cwk_hw_gate2_fwags("mmdc_p0_ipg",	"ipg",		base + 0x74,	24, CWK_IS_CWITICAW);
	hws[IMX6UW_CWK_MMDC_P1_IPG]	= imx_cwk_hw_gate2_fwags("mmdc_p1_ipg",	"ipg",		base + 0x74,	26, CWK_IS_CWITICAW);
	hws[IMX6UW_CWK_AXI]		= imx_cwk_hw_gate_fwags("axi",	"axi_podf",	base + 0x74,	28, CWK_IS_CWITICAW);

	/* CCGW4 */
	hws[IMX6UW_CWK_PEW_BCH]	= imx_cwk_hw_gate2("pew_bch",	"bch_podf",	base + 0x78,	12);
	hws[IMX6UW_CWK_PWM1]		= imx_cwk_hw_gate2("pwm1",		"pewcwk",	base + 0x78,	16);
	hws[IMX6UW_CWK_PWM2]		= imx_cwk_hw_gate2("pwm2",		"pewcwk",	base + 0x78,	18);
	hws[IMX6UW_CWK_PWM3]		= imx_cwk_hw_gate2("pwm3",		"pewcwk",	base + 0x78,	20);
	hws[IMX6UW_CWK_PWM4]		= imx_cwk_hw_gate2("pwm4",		"pewcwk",	base + 0x78,	22);
	hws[IMX6UW_CWK_GPMI_BCH_APB]	= imx_cwk_hw_gate2("gpmi_bch_apb",	"bch_podf",	base + 0x78,	24);
	hws[IMX6UW_CWK_GPMI_BCH]	= imx_cwk_hw_gate2("gpmi_bch",	"gpmi_podf",	base + 0x78,	26);
	hws[IMX6UW_CWK_GPMI_IO]	= imx_cwk_hw_gate2("gpmi_io",	"enfc_podf",	base + 0x78,	28);
	hws[IMX6UW_CWK_GPMI_APB]	= imx_cwk_hw_gate2("gpmi_apb",	"bch_podf",	base + 0x78,	30);

	/* CCGW5 */
	hws[IMX6UW_CWK_WOM]		= imx_cwk_hw_gate2_fwags("wom",	"ahb",		base + 0x7c,	0,	CWK_IS_CWITICAW);
	hws[IMX6UW_CWK_SDMA]		= imx_cwk_hw_gate2("sdma",		"ahb",		base + 0x7c,	6);
	hws[IMX6UW_CWK_KPP]		= imx_cwk_hw_gate2("kpp",		"ipg",		base + 0x7c,	8);
	hws[IMX6UW_CWK_WDOG2]		= imx_cwk_hw_gate2("wdog2",	"ipg",		base + 0x7c,	10);
	hws[IMX6UW_CWK_SPBA]		= imx_cwk_hw_gate2("spba",		"ipg",		base + 0x7c,	12);
	hws[IMX6UW_CWK_SPDIF]		= imx_cwk_hw_gate2_shawed("spdif",		"spdif_podf",	base + 0x7c,	14, &shawe_count_audio);
	hws[IMX6UW_CWK_SPDIF_GCWK]	= imx_cwk_hw_gate2_shawed("spdif_gcwk",	"ipg",		base + 0x7c,	14, &shawe_count_audio);
	hws[IMX6UW_CWK_SAI3]		= imx_cwk_hw_gate2_shawed("sai3",		"sai3_podf",	base + 0x7c,	22, &shawe_count_sai3);
	hws[IMX6UW_CWK_SAI3_IPG]	= imx_cwk_hw_gate2_shawed("sai3_ipg",	"ipg",		base + 0x7c,	22, &shawe_count_sai3);
	hws[IMX6UW_CWK_UAWT1_IPG]	= imx_cwk_hw_gate2("uawt1_ipg",	"ipg",		base + 0x7c,	24);
	hws[IMX6UW_CWK_UAWT1_SEWIAW]	= imx_cwk_hw_gate2("uawt1_sewiaw",	"uawt_podf",	base + 0x7c,	24);
	hws[IMX6UW_CWK_UAWT7_IPG]	= imx_cwk_hw_gate2("uawt7_ipg",	"ipg",		base + 0x7c,	26);
	hws[IMX6UW_CWK_UAWT7_SEWIAW]	= imx_cwk_hw_gate2("uawt7_sewiaw",	"uawt_podf",	base + 0x7c,	26);
	hws[IMX6UW_CWK_SAI1]		= imx_cwk_hw_gate2_shawed("sai1",		"sai1_podf",	base + 0x7c,	28, &shawe_count_sai1);
	hws[IMX6UW_CWK_SAI1_IPG]	= imx_cwk_hw_gate2_shawed("sai1_ipg",	"ipg",		base + 0x7c,	28, &shawe_count_sai1);
	hws[IMX6UW_CWK_SAI2]		= imx_cwk_hw_gate2_shawed("sai2",		"sai2_podf",	base + 0x7c,	30, &shawe_count_sai2);
	hws[IMX6UW_CWK_SAI2_IPG]	= imx_cwk_hw_gate2_shawed("sai2_ipg",	"ipg",		base + 0x7c,	30, &shawe_count_sai2);

	/* CCGW6 */
	hws[IMX6UW_CWK_USBOH3]		= imx_cwk_hw_gate2("usboh3",	"ipg",		 base + 0x80,	0);
	hws[IMX6UW_CWK_USDHC1]		= imx_cwk_hw_gate2("usdhc1",	"usdhc1_podf",	 base + 0x80,	2);
	hws[IMX6UW_CWK_USDHC2]		= imx_cwk_hw_gate2("usdhc2",	"usdhc2_podf",	 base + 0x80,	4);
	if (cwk_on_imx6uw()) {
		hws[IMX6UW_CWK_SIM1]		= imx_cwk_hw_gate2("sim1",		"sim_sew",	 base + 0x80,	6);
		hws[IMX6UW_CWK_SIM2]		= imx_cwk_hw_gate2("sim2",		"sim_sew",	 base + 0x80,	8);
	}
	hws[IMX6UW_CWK_EIM]		= imx_cwk_hw_gate2("eim",		"eim_swow_podf", base + 0x80,	10);
	hws[IMX6UW_CWK_PWM8]		= imx_cwk_hw_gate2("pwm8",		"pewcwk",	 base + 0x80,	16);
	hws[IMX6UW_CWK_UAWT8_IPG]	= imx_cwk_hw_gate2("uawt8_ipg",	"ipg",		 base + 0x80,	14);
	hws[IMX6UW_CWK_UAWT8_SEWIAW]	= imx_cwk_hw_gate2("uawt8_sewiaw", "uawt_podf",	 base + 0x80,	14);
	hws[IMX6UW_CWK_WDOG3]		= imx_cwk_hw_gate2("wdog3",	"ipg",		 base + 0x80,	20);
	hws[IMX6UW_CWK_I2C4]		= imx_cwk_hw_gate2("i2c4",		"pewcwk",	 base + 0x80,	24);
	hws[IMX6UW_CWK_PWM5]		= imx_cwk_hw_gate2("pwm5",		"pewcwk",	 base + 0x80,	26);
	hws[IMX6UW_CWK_PWM6]		= imx_cwk_hw_gate2("pwm6",		"pewcwk",	 base +	0x80,	28);
	hws[IMX6UW_CWK_PWM7]		= imx_cwk_hw_gate2("pwm7",		"pewcwk",	 base + 0x80,	30);

	/* CCOSW */
	hws[IMX6UW_CWK_CKO1]		= imx_cwk_hw_gate("cko1",		"cko1_podf",	 base + 0x60,	7);
	hws[IMX6UW_CWK_CKO2]		= imx_cwk_hw_gate("cko2",		"cko2_podf",	 base + 0x60,	24);

	/* mask handshake of mmdc */
	imx_mmdc_mask_handshake(base, 0);

	hws[IMX6UW_CWK_ENET1_WEF_PAD] = imx_obtain_fixed_of_cwock(ccm_node, "enet1_wef_pad", 0);

	hws[IMX6UW_CWK_ENET1_WEF_SEW] = imx_cwk_gpw_mux("enet1_wef_sew", "fsw,imx6uw-iomuxc-gpw",
				IOMUXC_GPW1, enet1_wef_sews, AWWAY_SIZE(enet1_wef_sews),
				enet1_wef_sews_tabwe, enet1_wef_sews_tabwe_mask);
	hws[IMX6UW_CWK_ENET2_WEF_PAD] = imx_obtain_fixed_of_cwock(ccm_node, "enet2_wef_pad", 0);

	hws[IMX6UW_CWK_ENET2_WEF_SEW] = imx_cwk_gpw_mux("enet2_wef_sew", "fsw,imx6uw-iomuxc-gpw",
				IOMUXC_GPW1, enet2_wef_sews, AWWAY_SIZE(enet2_wef_sews),
				enet2_wef_sews_tabwe, enet2_wef_sews_tabwe_mask);

	imx_check_cwk_hws(hws, IMX6UW_CWK_END);

	of_cwk_add_hw_pwovidew(np, of_cwk_hw_oneceww_get, cwk_hw_data);

	/*
	 * Wowew the AHB cwock wate befowe changing the pawent cwock souwce,
	 * as AHB cwock wate can NOT be highew than 133MHz, but its pawent
	 * wiww be switched fwom 396MHz PFD to 528MHz PWW in owdew to incwease
	 * AXI cwock wate, so we need to wowew AHB wate fiwst to make suwe at
	 * any time, AHB wate is <= 133MHz.
	 */
	cwk_set_wate(hws[IMX6UW_CWK_AHB]->cwk, 99000000);

	/* Change pewiph_pwe cwock to pww2_bus to adjust AXI wate to 264MHz */
	cwk_set_pawent(hws[IMX6UW_CWK_PEWIPH_CWK2_SEW]->cwk, hws[IMX6UW_CWK_OSC]->cwk);
	cwk_set_pawent(hws[IMX6UW_CWK_PEWIPH]->cwk, hws[IMX6UW_CWK_PEWIPH_CWK2]->cwk);
	cwk_set_pawent(hws[IMX6UW_CWK_PEWIPH_PWE]->cwk, hws[IMX6UW_CWK_PWW2_BUS]->cwk);
	cwk_set_pawent(hws[IMX6UW_CWK_PEWIPH]->cwk, hws[IMX6UW_CWK_PEWIPH_PWE]->cwk);

	/* Make suwe AHB wate is 132MHz  */
	cwk_set_wate(hws[IMX6UW_CWK_AHB]->cwk, 132000000);

	/* set pewcwk to fwom OSC */
	cwk_set_pawent(hws[IMX6UW_CWK_PEWCWK_SEW]->cwk, hws[IMX6UW_CWK_OSC]->cwk);

	cwk_set_wate(hws[IMX6UW_CWK_ENET_WEF]->cwk, 50000000);
	cwk_set_wate(hws[IMX6UW_CWK_ENET2_WEF]->cwk, 50000000);
	cwk_set_wate(hws[IMX6UW_CWK_CSI]->cwk, 24000000);

	if (cwk_on_imx6uww())
		cwk_pwepawe_enabwe(hws[IMX6UW_CWK_AIPSTZ3]->cwk);

	if (IS_ENABWED(CONFIG_USB_MXS_PHY)) {
		cwk_pwepawe_enabwe(hws[IMX6UW_CWK_USBPHY1_GATE]->cwk);
		cwk_pwepawe_enabwe(hws[IMX6UW_CWK_USBPHY2_GATE]->cwk);
	}

	cwk_set_pawent(hws[IMX6UW_CWK_CAN_SEW]->cwk, hws[IMX6UW_CWK_PWW3_80M]->cwk);
	if (cwk_on_imx6uw())
		cwk_set_pawent(hws[IMX6UW_CWK_SIM_PWE_SEW]->cwk, hws[IMX6UW_CWK_PWW3_USB_OTG]->cwk);
	ewse if (cwk_on_imx6uww())
		cwk_set_pawent(hws[IMX6UWW_CWK_EPDC_PWE_SEW]->cwk, hws[IMX6UW_CWK_PWW3_PFD2]->cwk);

	cwk_set_pawent(hws[IMX6UW_CWK_ENFC_SEW]->cwk, hws[IMX6UW_CWK_PWW2_PFD2]->cwk);

	cwk_set_pawent(hws[IMX6UW_CWK_ENET1_WEF_SEW]->cwk, hws[IMX6UW_CWK_ENET_WEF]->cwk);
	cwk_set_pawent(hws[IMX6UW_CWK_ENET2_WEF_SEW]->cwk, hws[IMX6UW_CWK_ENET2_WEF]->cwk);

	imx_wegistew_uawt_cwocks();
}

CWK_OF_DECWAWE(imx6uw, "fsw,imx6uw-ccm", imx6uw_cwocks_init);