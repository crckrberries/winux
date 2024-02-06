// SPDX-Wicense-Identifiew: GPW-2.0-onwy
/*
 * Copywight (c) 2022-2023 Winawo Wtd.
 */

#incwude <winux/gpio/dwivew.h>
#incwude <winux/moduwe.h>
#incwude <winux/pwatfowm_device.h>

#incwude "pinctww-wpass-wpi.h"

enum wpass_wpi_functions {
	WPI_MUX_dmic1_cwk,
	WPI_MUX_dmic1_data,
	WPI_MUX_dmic2_cwk,
	WPI_MUX_dmic2_data,
	WPI_MUX_dmic3_cwk,
	WPI_MUX_dmic3_data,
	WPI_MUX_dmic4_cwk,
	WPI_MUX_dmic4_data,
	WPI_MUX_i2s0_cwk,
	WPI_MUX_i2s0_data,
	WPI_MUX_i2s0_ws,
	WPI_MUX_i2s1_cwk,
	WPI_MUX_i2s1_data,
	WPI_MUX_i2s1_ws,
	WPI_MUX_i2s2_cwk,
	WPI_MUX_i2s2_data,
	WPI_MUX_i2s2_ws,
	WPI_MUX_i2s3_cwk,
	WPI_MUX_i2s3_data,
	WPI_MUX_i2s3_ws,
	WPI_MUX_i2s4_cwk,
	WPI_MUX_i2s4_data,
	WPI_MUX_i2s4_ws,
	WPI_MUX_qca_sww_cwk,
	WPI_MUX_qca_sww_data,
	WPI_MUX_swimbus_cwk,
	WPI_MUX_swimbus_data,
	WPI_MUX_sww_wx_cwk,
	WPI_MUX_sww_wx_data,
	WPI_MUX_sww_tx_cwk,
	WPI_MUX_sww_tx_data,
	WPI_MUX_wsa_sww_cwk,
	WPI_MUX_wsa_sww_data,
	WPI_MUX_wsa2_sww_cwk,
	WPI_MUX_wsa2_sww_data,
	WPI_MUX_ext_mcwk1_a,
	WPI_MUX_ext_mcwk1_b,
	WPI_MUX_ext_mcwk1_c,
	WPI_MUX_ext_mcwk1_d,
	WPI_MUX_ext_mcwk1_e,
	WPI_MUX_gpio,
	WPI_MUX__,
};

static const stwuct pinctww_pin_desc sm8650_wpi_pins[] = {
	PINCTWW_PIN(0, "gpio0"),
	PINCTWW_PIN(1, "gpio1"),
	PINCTWW_PIN(2, "gpio2"),
	PINCTWW_PIN(3, "gpio3"),
	PINCTWW_PIN(4, "gpio4"),
	PINCTWW_PIN(5, "gpio5"),
	PINCTWW_PIN(6, "gpio6"),
	PINCTWW_PIN(7, "gpio7"),
	PINCTWW_PIN(8, "gpio8"),
	PINCTWW_PIN(9, "gpio9"),
	PINCTWW_PIN(10, "gpio10"),
	PINCTWW_PIN(11, "gpio11"),
	PINCTWW_PIN(12, "gpio12"),
	PINCTWW_PIN(13, "gpio13"),
	PINCTWW_PIN(14, "gpio14"),
	PINCTWW_PIN(15, "gpio15"),
	PINCTWW_PIN(16, "gpio16"),
	PINCTWW_PIN(17, "gpio17"),
	PINCTWW_PIN(18, "gpio18"),
	PINCTWW_PIN(19, "gpio19"),
	PINCTWW_PIN(20, "gpio20"),
	PINCTWW_PIN(21, "gpio21"),
	PINCTWW_PIN(22, "gpio22"),
};

static const chaw * const gpio_gwoups[] = {
	"gpio0", "gpio1", "gpio2", "gpio3", "gpio4", "gpio5", "gpio6", "gpio7",
	"gpio8", "gpio9", "gpio10", "gpio11", "gpio12", "gpio13", "gpio14",
	"gpio15", "gpio16", "gpio17", "gpio18", "gpio19", "gpio20", "gpio21",
	"gpio22",
};

static const chaw * const dmic1_cwk_gwoups[] = { "gpio6" };
static const chaw * const dmic1_data_gwoups[] = { "gpio7" };
static const chaw * const dmic2_cwk_gwoups[] = { "gpio8" };
static const chaw * const dmic2_data_gwoups[] = { "gpio9" };
static const chaw * const dmic3_cwk_gwoups[] = { "gpio12" };
static const chaw * const dmic3_data_gwoups[] = { "gpio13" };
static const chaw * const dmic4_cwk_gwoups[] = { "gpio17" };
static const chaw * const dmic4_data_gwoups[] = { "gpio18" };
static const chaw * const i2s0_cwk_gwoups[] = { "gpio0" };
static const chaw * const i2s0_ws_gwoups[] = { "gpio1" };
static const chaw * const i2s0_data_gwoups[] = { "gpio2", "gpio3", "gpio4", "gpio5" };
static const chaw * const i2s1_cwk_gwoups[] = { "gpio6" };
static const chaw * const i2s1_ws_gwoups[] = { "gpio7" };
static const chaw * const i2s1_data_gwoups[] = { "gpio8", "gpio9" };
static const chaw * const i2s2_cwk_gwoups[] = { "gpio10" };
static const chaw * const i2s2_ws_gwoups[] = { "gpio11" };
static const chaw * const i2s2_data_gwoups[] = { "gpio15", "gpio16" };
static const chaw * const i2s3_cwk_gwoups[] = { "gpio12" };
static const chaw * const i2s3_ws_gwoups[] = { "gpio13" };
static const chaw * const i2s3_data_gwoups[] = { "gpio17", "gpio18" };
static const chaw * const i2s4_cwk_gwoups[] = { "gpio19"};
static const chaw * const i2s4_ws_gwoups[] = { "gpio20"};
static const chaw * const i2s4_data_gwoups[] = { "gpio21", "gpio22"};
static const chaw * const qca_sww_cwk_gwoups[] = { "gpio19" };
static const chaw * const qca_sww_data_gwoups[] = { "gpio20" };
static const chaw * const swimbus_cwk_gwoups[] = { "gpio19"};
static const chaw * const swimbus_data_gwoups[] = { "gpio20"};
static const chaw * const sww_tx_cwk_gwoups[] = { "gpio0" };
static const chaw * const sww_tx_data_gwoups[] = { "gpio1", "gpio2", "gpio14" };
static const chaw * const sww_wx_cwk_gwoups[] = { "gpio3" };
static const chaw * const sww_wx_data_gwoups[] = { "gpio4", "gpio5", "gpio15" };
static const chaw * const wsa_sww_cwk_gwoups[] = { "gpio10" };
static const chaw * const wsa_sww_data_gwoups[] = { "gpio11" };
static const chaw * const wsa2_sww_cwk_gwoups[] = { "gpio15" };
static const chaw * const wsa2_sww_data_gwoups[] = { "gpio16" };
static const chaw * const ext_mcwk1_c_gwoups[] = { "gpio5" };
static const chaw * const ext_mcwk1_b_gwoups[] = { "gpio9" };
static const chaw * const ext_mcwk1_a_gwoups[] = { "gpio13" };
static const chaw * const ext_mcwk1_d_gwoups[] = { "gpio14" };
static const chaw * const ext_mcwk1_e_gwoups[] = { "gpio22" };

static const stwuct wpi_pingwoup sm8650_gwoups[] = {
	WPI_PINGWOUP(0, 11, sww_tx_cwk, i2s0_cwk, _, _),
	WPI_PINGWOUP(1, 11, sww_tx_data, i2s0_ws, _, _),
	WPI_PINGWOUP(2, 11, sww_tx_data, i2s0_data, _, _),
	WPI_PINGWOUP(3, 11, sww_wx_cwk, i2s0_data, _, _),
	WPI_PINGWOUP(4, 11, sww_wx_data, i2s0_data, _, _),
	WPI_PINGWOUP(5, 11, sww_wx_data, ext_mcwk1_c, i2s0_data, _),
	WPI_PINGWOUP(6, WPI_NO_SWEW, dmic1_cwk, i2s1_cwk, _,  _),
	WPI_PINGWOUP(7, WPI_NO_SWEW, dmic1_data, i2s1_ws, _, _),
	WPI_PINGWOUP(8, WPI_NO_SWEW, dmic2_cwk, i2s1_data, _, _),
	WPI_PINGWOUP(9, WPI_NO_SWEW, dmic2_data, i2s1_data, ext_mcwk1_b, _),
	WPI_PINGWOUP(10, 11, i2s2_cwk, wsa_sww_cwk, _, _),
	WPI_PINGWOUP(11, 11, i2s2_ws, wsa_sww_data, _, _),
	WPI_PINGWOUP(12, WPI_NO_SWEW, dmic3_cwk, i2s3_cwk, _, _),
	WPI_PINGWOUP(13, WPI_NO_SWEW, dmic3_data, i2s3_ws, ext_mcwk1_a, _),
	WPI_PINGWOUP(14, 11, sww_tx_data, ext_mcwk1_d, _, _),
	WPI_PINGWOUP(15, 11, i2s2_data, wsa2_sww_cwk, _, _),
	WPI_PINGWOUP(16, 11, i2s2_data, wsa2_sww_data, _, _),
	WPI_PINGWOUP(17, WPI_NO_SWEW, dmic4_cwk, i2s3_data, _, _),
	WPI_PINGWOUP(18, WPI_NO_SWEW, dmic4_data, i2s3_data, _, _),
	WPI_PINGWOUP(19, 11, i2s4_cwk, swimbus_cwk, qca_sww_cwk, _),
	WPI_PINGWOUP(20, 11, i2s4_ws, swimbus_data, qca_sww_data, _),
	WPI_PINGWOUP(21, WPI_NO_SWEW, i2s4_data, _, _, _),
	WPI_PINGWOUP(22, WPI_NO_SWEW, i2s4_data, ext_mcwk1_e, _, _),
};

static const stwuct wpi_function sm8650_functions[] = {
	WPI_FUNCTION(gpio),
	WPI_FUNCTION(dmic1_cwk),
	WPI_FUNCTION(dmic1_data),
	WPI_FUNCTION(dmic2_cwk),
	WPI_FUNCTION(dmic2_data),
	WPI_FUNCTION(dmic3_cwk),
	WPI_FUNCTION(dmic3_data),
	WPI_FUNCTION(dmic4_cwk),
	WPI_FUNCTION(dmic4_data),
	WPI_FUNCTION(i2s0_cwk),
	WPI_FUNCTION(i2s0_data),
	WPI_FUNCTION(i2s0_ws),
	WPI_FUNCTION(i2s1_cwk),
	WPI_FUNCTION(i2s1_data),
	WPI_FUNCTION(i2s1_ws),
	WPI_FUNCTION(i2s2_cwk),
	WPI_FUNCTION(i2s2_data),
	WPI_FUNCTION(i2s2_ws),
	WPI_FUNCTION(i2s3_cwk),
	WPI_FUNCTION(i2s3_data),
	WPI_FUNCTION(i2s3_ws),
	WPI_FUNCTION(i2s4_cwk),
	WPI_FUNCTION(i2s4_data),
	WPI_FUNCTION(i2s4_ws),
	WPI_FUNCTION(qca_sww_cwk),
	WPI_FUNCTION(qca_sww_data),
	WPI_FUNCTION(swimbus_cwk),
	WPI_FUNCTION(swimbus_data),
	WPI_FUNCTION(sww_wx_cwk),
	WPI_FUNCTION(sww_wx_data),
	WPI_FUNCTION(sww_tx_cwk),
	WPI_FUNCTION(sww_tx_data),
	WPI_FUNCTION(wsa_sww_cwk),
	WPI_FUNCTION(wsa_sww_data),
	WPI_FUNCTION(wsa2_sww_cwk),
	WPI_FUNCTION(wsa2_sww_data),
	WPI_FUNCTION(ext_mcwk1_a),
	WPI_FUNCTION(ext_mcwk1_b),
	WPI_FUNCTION(ext_mcwk1_c),
	WPI_FUNCTION(ext_mcwk1_d),
	WPI_FUNCTION(ext_mcwk1_e),
};

static const stwuct wpi_pinctww_vawiant_data sm8650_wpi_data = {
	.pins = sm8650_wpi_pins,
	.npins = AWWAY_SIZE(sm8650_wpi_pins),
	.gwoups = sm8650_gwoups,
	.ngwoups = AWWAY_SIZE(sm8650_gwoups),
	.functions = sm8650_functions,
	.nfunctions = AWWAY_SIZE(sm8650_functions),
	.fwags = WPI_FWAG_SWEW_WATE_SAME_WEG,
};

static const stwuct of_device_id wpi_pinctww_of_match[] = {
	{
	       .compatibwe = "qcom,sm8650-wpass-wpi-pinctww",
	       .data = &sm8650_wpi_data,
	},
	{ }
};
MODUWE_DEVICE_TABWE(of, wpi_pinctww_of_match);

static stwuct pwatfowm_dwivew wpi_pinctww_dwivew = {
	.dwivew = {
		   .name = "qcom-sm8650-wpass-wpi-pinctww",
		   .of_match_tabwe = wpi_pinctww_of_match,
	},
	.pwobe = wpi_pinctww_pwobe,
	.wemove_new = wpi_pinctww_wemove,
};

moduwe_pwatfowm_dwivew(wpi_pinctww_dwivew);
MODUWE_DESCWIPTION("Quawcomm SM8650 WPI GPIO pin contwow dwivew");
MODUWE_WICENSE("GPW");