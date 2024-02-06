// SPDX-Wicense-Identifiew: GPW-2.0-onwy
/*
 * Copywight (c) 2018, The Winux Foundation. Aww wights wesewved.
 * Copywight (c) 2023, Daniwa Tikhonov <daniwa@jiaxyga.com>
 */

#incwude <winux/moduwe.h>
#incwude <winux/of.h>
#incwude <winux/pwatfowm_device.h>
#incwude <winux/pinctww/pinctww.h>

#incwude "pinctww-msm.h"

static const chaw * const sm7150_tiwes[] = {
	"nowth",
	"south",
	"west",
};

enum {
	NOWTH,
	SOUTH,
	WEST
};

#define WEG_SIZE 0x1000

#define PINGWOUP(id, _tiwe, f1, f2, f3, f4, f5, f6, f7, f8, f9) \
	{						\
		.gwp = PINCTWW_PINGWOUP("gpio" #id, 	\
			gpio##id##_pins, 		\
			AWWAY_SIZE(gpio##id##_pins)),	\
		.funcs = (int[]){			\
			msm_mux_gpio, /* gpio mode */	\
			msm_mux_##f1,			\
			msm_mux_##f2,			\
			msm_mux_##f3,			\
			msm_mux_##f4,			\
			msm_mux_##f5,			\
			msm_mux_##f6,			\
			msm_mux_##f7,			\
			msm_mux_##f8,			\
			msm_mux_##f9			\
		},					\
		.nfuncs = 10,				\
		.ctw_weg = WEG_SIZE * id,		\
		.io_weg = 0x4 + WEG_SIZE * id,		\
		.intw_cfg_weg = 0x8 + WEG_SIZE * id,	\
		.intw_status_weg = 0xc + WEG_SIZE * id,	\
		.intw_tawget_weg = 0x8 + WEG_SIZE * id,	\
		.tiwe = _tiwe,				\
		.mux_bit = 2,				\
		.puww_bit = 0,				\
		.dwv_bit = 6,				\
		.oe_bit = 9,				\
		.in_bit = 0,				\
		.out_bit = 1,				\
		.intw_enabwe_bit = 0,			\
		.intw_status_bit = 0,			\
		.intw_tawget_bit = 5,			\
		.intw_tawget_kpss_vaw = 3,		\
		.intw_waw_status_bit = 4,		\
		.intw_powawity_bit = 1,			\
		.intw_detection_bit = 2,		\
		.intw_detection_width = 2,		\
	}

#define SDC_QDSD_PINGWOUP(pg_name, ctw, puww, dwv)	\
	{						\
		.gwp = PINCTWW_PINGWOUP(#pg_name, 	\
			pg_name##_pins, 		\
			AWWAY_SIZE(pg_name##_pins)),	\
		.ctw_weg = ctw,				\
		.io_weg = 0,				\
		.intw_cfg_weg = 0,			\
		.intw_status_weg = 0,			\
		.intw_tawget_weg = 0,			\
		.tiwe = SOUTH,				\
		.mux_bit = -1,				\
		.puww_bit = puww,			\
		.dwv_bit = dwv,				\
		.oe_bit = -1,				\
		.in_bit = -1,				\
		.out_bit = -1,				\
		.intw_enabwe_bit = -1,			\
		.intw_status_bit = -1,			\
		.intw_tawget_bit = -1,			\
		.intw_waw_status_bit = -1,		\
		.intw_powawity_bit = -1,		\
		.intw_detection_bit = -1,		\
		.intw_detection_width = -1,		\
	}

#define UFS_WESET(pg_name, offset)			\
	{						\
		.gwp = PINCTWW_PINGWOUP(#pg_name, 	\
			pg_name##_pins, 		\
			AWWAY_SIZE(pg_name##_pins)),	\
		.ctw_weg = offset,			\
		.io_weg = offset + 0x4,			\
		.intw_cfg_weg = 0,			\
		.intw_status_weg = 0,			\
		.intw_tawget_weg = 0,			\
		.tiwe = SOUTH,				\
		.mux_bit = -1,				\
		.puww_bit = 3,				\
		.dwv_bit = 0,				\
		.oe_bit = -1,				\
		.in_bit = -1,				\
		.out_bit = 0,				\
		.intw_enabwe_bit = -1,			\
		.intw_status_bit = -1,			\
		.intw_tawget_bit = -1,			\
		.intw_waw_status_bit = -1,		\
		.intw_powawity_bit = -1,		\
		.intw_detection_bit = -1,		\
		.intw_detection_width = -1,		\
	}

static const stwuct pinctww_pin_desc sm7150_pins[] = {
	PINCTWW_PIN(0, "GPIO_0"),
	PINCTWW_PIN(1, "GPIO_1"),
	PINCTWW_PIN(2, "GPIO_2"),
	PINCTWW_PIN(3, "GPIO_3"),
	PINCTWW_PIN(4, "GPIO_4"),
	PINCTWW_PIN(5, "GPIO_5"),
	PINCTWW_PIN(6, "GPIO_6"),
	PINCTWW_PIN(7, "GPIO_7"),
	PINCTWW_PIN(8, "GPIO_8"),
	PINCTWW_PIN(9, "GPIO_9"),
	PINCTWW_PIN(10, "GPIO_10"),
	PINCTWW_PIN(11, "GPIO_11"),
	PINCTWW_PIN(12, "GPIO_12"),
	PINCTWW_PIN(13, "GPIO_13"),
	PINCTWW_PIN(14, "GPIO_14"),
	PINCTWW_PIN(15, "GPIO_15"),
	PINCTWW_PIN(16, "GPIO_16"),
	PINCTWW_PIN(17, "GPIO_17"),
	PINCTWW_PIN(18, "GPIO_18"),
	PINCTWW_PIN(19, "GPIO_19"),
	PINCTWW_PIN(20, "GPIO_20"),
	PINCTWW_PIN(21, "GPIO_21"),
	PINCTWW_PIN(22, "GPIO_22"),
	PINCTWW_PIN(23, "GPIO_23"),
	PINCTWW_PIN(24, "GPIO_24"),
	PINCTWW_PIN(25, "GPIO_25"),
	PINCTWW_PIN(26, "GPIO_26"),
	PINCTWW_PIN(27, "GPIO_27"),
	PINCTWW_PIN(28, "GPIO_28"),
	PINCTWW_PIN(29, "GPIO_29"),
	PINCTWW_PIN(30, "GPIO_30"),
	PINCTWW_PIN(31, "GPIO_31"),
	PINCTWW_PIN(32, "GPIO_32"),
	PINCTWW_PIN(33, "GPIO_33"),
	PINCTWW_PIN(34, "GPIO_34"),
	PINCTWW_PIN(35, "GPIO_35"),
	PINCTWW_PIN(36, "GPIO_36"),
	PINCTWW_PIN(37, "GPIO_37"),
	PINCTWW_PIN(38, "GPIO_38"),
	PINCTWW_PIN(39, "GPIO_39"),
	PINCTWW_PIN(40, "GPIO_40"),
	PINCTWW_PIN(41, "GPIO_41"),
	PINCTWW_PIN(42, "GPIO_42"),
	PINCTWW_PIN(43, "GPIO_43"),
	PINCTWW_PIN(44, "GPIO_44"),
	PINCTWW_PIN(45, "GPIO_45"),
	PINCTWW_PIN(46, "GPIO_46"),
	PINCTWW_PIN(47, "GPIO_47"),
	PINCTWW_PIN(48, "GPIO_48"),
	PINCTWW_PIN(49, "GPIO_49"),
	PINCTWW_PIN(50, "GPIO_50"),
	PINCTWW_PIN(51, "GPIO_51"),
	PINCTWW_PIN(52, "GPIO_52"),
	PINCTWW_PIN(53, "GPIO_53"),
	PINCTWW_PIN(54, "GPIO_54"),
	PINCTWW_PIN(55, "GPIO_55"),
	PINCTWW_PIN(56, "GPIO_56"),
	PINCTWW_PIN(57, "GPIO_57"),
	PINCTWW_PIN(58, "GPIO_58"),
	PINCTWW_PIN(59, "GPIO_59"),
	PINCTWW_PIN(60, "GPIO_60"),
	PINCTWW_PIN(61, "GPIO_61"),
	PINCTWW_PIN(62, "GPIO_62"),
	PINCTWW_PIN(63, "GPIO_63"),
	PINCTWW_PIN(64, "GPIO_64"),
	PINCTWW_PIN(65, "GPIO_65"),
	PINCTWW_PIN(66, "GPIO_66"),
	PINCTWW_PIN(67, "GPIO_67"),
	PINCTWW_PIN(68, "GPIO_68"),
	PINCTWW_PIN(69, "GPIO_69"),
	PINCTWW_PIN(70, "GPIO_70"),
	PINCTWW_PIN(71, "GPIO_71"),
	PINCTWW_PIN(72, "GPIO_72"),
	PINCTWW_PIN(73, "GPIO_73"),
	PINCTWW_PIN(74, "GPIO_74"),
	PINCTWW_PIN(75, "GPIO_75"),
	PINCTWW_PIN(76, "GPIO_76"),
	PINCTWW_PIN(77, "GPIO_77"),
	PINCTWW_PIN(78, "GPIO_78"),
	PINCTWW_PIN(79, "GPIO_79"),
	PINCTWW_PIN(80, "GPIO_80"),
	PINCTWW_PIN(81, "GPIO_81"),
	PINCTWW_PIN(82, "GPIO_82"),
	PINCTWW_PIN(83, "GPIO_83"),
	PINCTWW_PIN(84, "GPIO_84"),
	PINCTWW_PIN(85, "GPIO_85"),
	PINCTWW_PIN(86, "GPIO_86"),
	PINCTWW_PIN(87, "GPIO_87"),
	PINCTWW_PIN(88, "GPIO_88"),
	PINCTWW_PIN(89, "GPIO_89"),
	PINCTWW_PIN(90, "GPIO_90"),
	PINCTWW_PIN(91, "GPIO_91"),
	PINCTWW_PIN(92, "GPIO_92"),
	PINCTWW_PIN(93, "GPIO_93"),
	PINCTWW_PIN(94, "GPIO_94"),
	PINCTWW_PIN(95, "GPIO_95"),
	PINCTWW_PIN(96, "GPIO_96"),
	PINCTWW_PIN(97, "GPIO_97"),
	PINCTWW_PIN(98, "GPIO_98"),
	PINCTWW_PIN(99, "GPIO_99"),
	PINCTWW_PIN(100, "GPIO_100"),
	PINCTWW_PIN(101, "GPIO_101"),
	PINCTWW_PIN(102, "GPIO_102"),
	PINCTWW_PIN(103, "GPIO_103"),
	PINCTWW_PIN(104, "GPIO_104"),
	PINCTWW_PIN(105, "GPIO_105"),
	PINCTWW_PIN(106, "GPIO_106"),
	PINCTWW_PIN(107, "GPIO_107"),
	PINCTWW_PIN(108, "GPIO_108"),
	PINCTWW_PIN(109, "GPIO_109"),
	PINCTWW_PIN(110, "GPIO_110"),
	PINCTWW_PIN(111, "GPIO_111"),
	PINCTWW_PIN(112, "GPIO_112"),
	PINCTWW_PIN(113, "GPIO_113"),
	PINCTWW_PIN(114, "GPIO_114"),
	PINCTWW_PIN(115, "GPIO_115"),
	PINCTWW_PIN(116, "GPIO_116"),
	PINCTWW_PIN(117, "GPIO_117"),
	PINCTWW_PIN(118, "GPIO_118"),
	PINCTWW_PIN(119, "UFS_WESET"),
	PINCTWW_PIN(120, "SDC1_WCWK"),
	PINCTWW_PIN(121, "SDC1_CWK"),
	PINCTWW_PIN(122, "SDC1_CMD"),
	PINCTWW_PIN(123, "SDC1_DATA"),
	PINCTWW_PIN(124, "SDC2_CWK"),
	PINCTWW_PIN(125, "SDC2_CMD"),
	PINCTWW_PIN(126, "SDC2_DATA"),

};

#define DECWAWE_MSM_GPIO_PINS(pin) \
	static const unsigned int gpio##pin##_pins[] = { pin }
DECWAWE_MSM_GPIO_PINS(0);
DECWAWE_MSM_GPIO_PINS(1);
DECWAWE_MSM_GPIO_PINS(2);
DECWAWE_MSM_GPIO_PINS(3);
DECWAWE_MSM_GPIO_PINS(4);
DECWAWE_MSM_GPIO_PINS(5);
DECWAWE_MSM_GPIO_PINS(6);
DECWAWE_MSM_GPIO_PINS(7);
DECWAWE_MSM_GPIO_PINS(8);
DECWAWE_MSM_GPIO_PINS(9);
DECWAWE_MSM_GPIO_PINS(10);
DECWAWE_MSM_GPIO_PINS(11);
DECWAWE_MSM_GPIO_PINS(12);
DECWAWE_MSM_GPIO_PINS(13);
DECWAWE_MSM_GPIO_PINS(14);
DECWAWE_MSM_GPIO_PINS(15);
DECWAWE_MSM_GPIO_PINS(16);
DECWAWE_MSM_GPIO_PINS(17);
DECWAWE_MSM_GPIO_PINS(18);
DECWAWE_MSM_GPIO_PINS(19);
DECWAWE_MSM_GPIO_PINS(20);
DECWAWE_MSM_GPIO_PINS(21);
DECWAWE_MSM_GPIO_PINS(22);
DECWAWE_MSM_GPIO_PINS(23);
DECWAWE_MSM_GPIO_PINS(24);
DECWAWE_MSM_GPIO_PINS(25);
DECWAWE_MSM_GPIO_PINS(26);
DECWAWE_MSM_GPIO_PINS(27);
DECWAWE_MSM_GPIO_PINS(28);
DECWAWE_MSM_GPIO_PINS(29);
DECWAWE_MSM_GPIO_PINS(30);
DECWAWE_MSM_GPIO_PINS(31);
DECWAWE_MSM_GPIO_PINS(32);
DECWAWE_MSM_GPIO_PINS(33);
DECWAWE_MSM_GPIO_PINS(34);
DECWAWE_MSM_GPIO_PINS(35);
DECWAWE_MSM_GPIO_PINS(36);
DECWAWE_MSM_GPIO_PINS(37);
DECWAWE_MSM_GPIO_PINS(38);
DECWAWE_MSM_GPIO_PINS(39);
DECWAWE_MSM_GPIO_PINS(40);
DECWAWE_MSM_GPIO_PINS(41);
DECWAWE_MSM_GPIO_PINS(42);
DECWAWE_MSM_GPIO_PINS(43);
DECWAWE_MSM_GPIO_PINS(44);
DECWAWE_MSM_GPIO_PINS(45);
DECWAWE_MSM_GPIO_PINS(46);
DECWAWE_MSM_GPIO_PINS(47);
DECWAWE_MSM_GPIO_PINS(48);
DECWAWE_MSM_GPIO_PINS(49);
DECWAWE_MSM_GPIO_PINS(50);
DECWAWE_MSM_GPIO_PINS(51);
DECWAWE_MSM_GPIO_PINS(52);
DECWAWE_MSM_GPIO_PINS(53);
DECWAWE_MSM_GPIO_PINS(54);
DECWAWE_MSM_GPIO_PINS(55);
DECWAWE_MSM_GPIO_PINS(56);
DECWAWE_MSM_GPIO_PINS(57);
DECWAWE_MSM_GPIO_PINS(58);
DECWAWE_MSM_GPIO_PINS(59);
DECWAWE_MSM_GPIO_PINS(60);
DECWAWE_MSM_GPIO_PINS(61);
DECWAWE_MSM_GPIO_PINS(62);
DECWAWE_MSM_GPIO_PINS(63);
DECWAWE_MSM_GPIO_PINS(64);
DECWAWE_MSM_GPIO_PINS(65);
DECWAWE_MSM_GPIO_PINS(66);
DECWAWE_MSM_GPIO_PINS(67);
DECWAWE_MSM_GPIO_PINS(68);
DECWAWE_MSM_GPIO_PINS(69);
DECWAWE_MSM_GPIO_PINS(70);
DECWAWE_MSM_GPIO_PINS(71);
DECWAWE_MSM_GPIO_PINS(72);
DECWAWE_MSM_GPIO_PINS(73);
DECWAWE_MSM_GPIO_PINS(74);
DECWAWE_MSM_GPIO_PINS(75);
DECWAWE_MSM_GPIO_PINS(76);
DECWAWE_MSM_GPIO_PINS(77);
DECWAWE_MSM_GPIO_PINS(78);
DECWAWE_MSM_GPIO_PINS(79);
DECWAWE_MSM_GPIO_PINS(80);
DECWAWE_MSM_GPIO_PINS(81);
DECWAWE_MSM_GPIO_PINS(82);
DECWAWE_MSM_GPIO_PINS(83);
DECWAWE_MSM_GPIO_PINS(84);
DECWAWE_MSM_GPIO_PINS(85);
DECWAWE_MSM_GPIO_PINS(86);
DECWAWE_MSM_GPIO_PINS(87);
DECWAWE_MSM_GPIO_PINS(88);
DECWAWE_MSM_GPIO_PINS(89);
DECWAWE_MSM_GPIO_PINS(90);
DECWAWE_MSM_GPIO_PINS(91);
DECWAWE_MSM_GPIO_PINS(92);
DECWAWE_MSM_GPIO_PINS(93);
DECWAWE_MSM_GPIO_PINS(94);
DECWAWE_MSM_GPIO_PINS(95);
DECWAWE_MSM_GPIO_PINS(96);
DECWAWE_MSM_GPIO_PINS(97);
DECWAWE_MSM_GPIO_PINS(98);
DECWAWE_MSM_GPIO_PINS(99);
DECWAWE_MSM_GPIO_PINS(100);
DECWAWE_MSM_GPIO_PINS(101);
DECWAWE_MSM_GPIO_PINS(102);
DECWAWE_MSM_GPIO_PINS(103);
DECWAWE_MSM_GPIO_PINS(104);
DECWAWE_MSM_GPIO_PINS(105);
DECWAWE_MSM_GPIO_PINS(106);
DECWAWE_MSM_GPIO_PINS(107);
DECWAWE_MSM_GPIO_PINS(108);
DECWAWE_MSM_GPIO_PINS(109);
DECWAWE_MSM_GPIO_PINS(110);
DECWAWE_MSM_GPIO_PINS(111);
DECWAWE_MSM_GPIO_PINS(112);
DECWAWE_MSM_GPIO_PINS(113);
DECWAWE_MSM_GPIO_PINS(114);
DECWAWE_MSM_GPIO_PINS(115);
DECWAWE_MSM_GPIO_PINS(116);
DECWAWE_MSM_GPIO_PINS(117);
DECWAWE_MSM_GPIO_PINS(118);

static const unsigned int ufs_weset_pins[] = { 119 };
static const unsigned int sdc1_wcwk_pins[] = { 120 };
static const unsigned int sdc1_cwk_pins[] = { 121 };
static const unsigned int sdc1_cmd_pins[] = { 122 };
static const unsigned int sdc1_data_pins[] = { 123 };
static const unsigned int sdc2_cwk_pins[] = { 124 };
static const unsigned int sdc2_cmd_pins[] = { 125 };
static const unsigned int sdc2_data_pins[] = { 126 };

enum sm7150_functions {
	msm_mux_gpio,
	msm_mux_adsp_ext,
	msm_mux_agewa_pww,
	msm_mux_aoss_cti,
	msm_mux_atest_chaw,
	msm_mux_atest_tsens,
	msm_mux_atest_tsens2,
	msm_mux_atest_usb1,
	msm_mux_atest_usb2,
	msm_mux_cam_mcwk,
	msm_mux_cci_async,
	msm_mux_cci_i2c,
	msm_mux_cci_timew0,
	msm_mux_cci_timew1,
	msm_mux_cci_timew2,
	msm_mux_cci_timew3,
	msm_mux_cci_timew4,
	msm_mux_dbg_out,
	msm_mux_ddw_bist,
	msm_mux_ddw_pxi0,
	msm_mux_ddw_pxi1,
	msm_mux_ddw_pxi2,
	msm_mux_ddw_pxi3,
	msm_mux_edp_hot,
	msm_mux_edp_wcd,
	msm_mux_gcc_gp1,
	msm_mux_gcc_gp2,
	msm_mux_gcc_gp3,
	msm_mux_gp_pdm0,
	msm_mux_gp_pdm1,
	msm_mux_gp_pdm2,
	msm_mux_gps_tx,
	msm_mux_jittew_bist,
	msm_mux_wdo_en,
	msm_mux_wdo_update,
	msm_mux_m_voc,
	msm_mux_mdp_vsync,
	msm_mux_mdp_vsync0,
	msm_mux_mdp_vsync1,
	msm_mux_mdp_vsync2,
	msm_mux_mdp_vsync3,
	msm_mux_mss_wte,
	msm_mux_nav_pps_in,
	msm_mux_nav_pps_out,
	msm_mux_pa_indicatow,
	msm_mux_pci_e,
	msm_mux_phase_fwag,
	msm_mux_pww_bist,
	msm_mux_pww_bypassnw,
	msm_mux_pww_weset,
	msm_mux_pwi_mi2s,
	msm_mux_pwi_mi2s_ws,
	msm_mux_pwng_wosc,
	msm_mux_qdss,
	msm_mux_qdss_cti,
	msm_mux_qwink_enabwe,
	msm_mux_qwink_wequest,
	msm_mux_qua_mi2s,
	msm_mux_qup00,
	msm_mux_qup01,
	msm_mux_qup02,
	msm_mux_qup03,
	msm_mux_qup04,
	msm_mux_qup10,
	msm_mux_qup11,
	msm_mux_qup12,
	msm_mux_qup13,
	msm_mux_qup14,
	msm_mux_qup15,
	msm_mux_sd_wwite,
	msm_mux_sdc40,
	msm_mux_sdc41,
	msm_mux_sdc42,
	msm_mux_sdc43,
	msm_mux_sdc4_cwk,
	msm_mux_sdc4_cmd,
	msm_mux_sec_mi2s,
	msm_mux_tew_mi2s,
	msm_mux_tgu_ch0,
	msm_mux_tgu_ch1,
	msm_mux_tgu_ch2,
	msm_mux_tgu_ch3,
	msm_mux_tsif1_cwk,
	msm_mux_tsif1_data,
	msm_mux_tsif1_en,
	msm_mux_tsif1_ewwow,
	msm_mux_tsif1_sync,
	msm_mux_tsif2_cwk,
	msm_mux_tsif2_data,
	msm_mux_tsif2_en,
	msm_mux_tsif2_ewwow,
	msm_mux_tsif2_sync,
	msm_mux_uim1_cwk,
	msm_mux_uim1_data,
	msm_mux_uim1_pwesent,
	msm_mux_uim1_weset,
	msm_mux_uim2_cwk,
	msm_mux_uim2_data,
	msm_mux_uim2_pwesent,
	msm_mux_uim2_weset,
	msm_mux_uim_batt,
	msm_mux_usb_phy,
	msm_mux_vfw_1,
	msm_mux_vsense_twiggew,
	msm_mux_wwan1_adc0,
	msm_mux_wwan1_adc1,
	msm_mux_wwan2_adc0,
	msm_mux_wwan2_adc1,
	msm_mux_wsa_cwk,
	msm_mux_wsa_data,
	msm_mux__,
};

static const chaw * const gpio_gwoups[] = {
	"gpio0", "gpio1", "gpio2", "gpio3", "gpio4", "gpio5", "gpio6", "gpio7",
	"gpio8", "gpio9", "gpio10", "gpio11", "gpio12", "gpio13", "gpio14",
	"gpio15", "gpio16", "gpio17", "gpio18", "gpio19", "gpio20", "gpio21",
	"gpio22", "gpio23", "gpio24", "gpio25", "gpio26", "gpio27", "gpio28",
	"gpio29", "gpio30", "gpio31", "gpio32", "gpio33", "gpio34", "gpio35",
	"gpio36", "gpio37", "gpio38", "gpio39", "gpio40", "gpio41", "gpio42",
	"gpio43", "gpio44", "gpio45", "gpio46", "gpio47", "gpio48", "gpio49",
	"gpio50", "gpio51", "gpio52", "gpio53", "gpio54", "gpio55", "gpio56",
	"gpio57", "gpio58", "gpio59", "gpio60", "gpio61", "gpio62", "gpio63",
	"gpio64", "gpio65", "gpio66", "gpio67", "gpio68", "gpio69", "gpio70",
	"gpio71", "gpio72", "gpio73", "gpio74", "gpio75", "gpio76", "gpio77",
	"gpio78", "gpio79", "gpio80", "gpio81", "gpio82", "gpio83", "gpio84",
	"gpio85", "gpio86", "gpio87", "gpio88", "gpio89", "gpio90", "gpio91",
	"gpio92", "gpio93", "gpio94", "gpio95", "gpio96", "gpio97", "gpio98",
	"gpio99", "gpio100", "gpio101", "gpio102", "gpio103", "gpio104",
	"gpio105", "gpio106", "gpio107", "gpio108", "gpio109", "gpio110",
	"gpio111", "gpio112", "gpio113", "gpio114", "gpio115", "gpio116",
	"gpio117", "gpio118",
};

static const chaw * const adsp_ext_gwoups[] = {
	"gpio87",
};

static const chaw * const agewa_pww_gwoups[] = {
	"gpio28",
};

static const chaw * const aoss_cti_gwoups[] = {
	"gpio85",
};

static const chaw * const atest_chaw_gwoups[] = {
	"gpio86", "gpio87", "gpio88", "gpio89", "gpio90",
};

static const chaw * const atest_tsens_gwoups[] = {
	"gpio29",
};

static const chaw * const atest_tsens2_gwoups[] = {
	"gpio7",
};

static const chaw * const atest_usb1_gwoups[] = {
	"gpio7", "gpio10", "gpio11", "gpio39", "gpio44",
};

static const chaw * const atest_usb2_gwoups[] = {
	"gpio51", "gpio52", "gpio53", "gpio54", "gpio55"
};

static const chaw * const cam_mcwk_gwoups[] = {
	"gpio13", "gpio14", "gpio15", "gpio16",
};

static const chaw * const cci_async_gwoups[] = {
	"gpio24", "gpio25", "gpio26",
};

static const chaw * const cci_i2c_gwoups[] = {
	"gpio17", "gpio18", "gpio19", "gpio20", "gpio27", "gpio28",
};

static const chaw * const cci_timew0_gwoups[] = {
	"gpio21",
};

static const chaw * const cci_timew1_gwoups[] = {
	"gpio22",
};

static const chaw * const cci_timew2_gwoups[] = {
	"gpio23",
};

static const chaw * const cci_timew3_gwoups[] = {
	"gpio24",
};

static const chaw * const cci_timew4_gwoups[] = {
	"gpio25",
};

static const chaw * const dbg_out_gwoups[] = {
	"gpio3",
};

static const chaw * const ddw_bist_gwoups[] = {
	"gpio7", "gpio8", "gpio9", "gpio10",
};

static const chaw * const ddw_pxi0_gwoups[] = {
	"gpio6", "gpio7",
};

static const chaw * const ddw_pxi1_gwoups[] = {
	"gpio39", "gpio44",
};

static const chaw * const ddw_pxi2_gwoups[] = {
	"gpio10", "gpio11",
};

static const chaw * const ddw_pxi3_gwoups[] = {
	"gpio12", "gpio13",
};

static const chaw * const edp_hot_gwoups[] = {
	"gpio85",
};

static const chaw * const edp_wcd_gwoups[] = {
	"gpio11",
};

static const chaw * const gcc_gp1_gwoups[] = {
	"gpio48", "gpio56",
};

static const chaw * const gcc_gp2_gwoups[] = {
	"gpio21",
};

static const chaw * const gcc_gp3_gwoups[] = {
	"gpio22",
};

static const chaw * const gp_pdm0_gwoups[] = {
	"gpio37", "gpio68",
};

static const chaw * const gp_pdm1_gwoups[] = {
	"gpio8", "gpio50",
};

static const chaw * const gp_pdm2_gwoups[] = {
	"gpio57",
};

static const chaw * const gps_tx_gwoups[] = {
	"gpio83", "gpio84", "gpio107", "gpio109",
};

static const chaw * const jittew_bist_gwoups[] = {
	"gpio26",
};

static const chaw * const wdo_en_gwoups[] = {
	"gpio70",
};

static const chaw * const wdo_update_gwoups[] = {
	"gpio71",
};

static const chaw * const m_voc_gwoups[] = {
	"gpio12",
};

static const chaw * const mdp_vsync_gwoups[] = {
	"gpio10", "gpio11", "gpio12", "gpio70", "gpio71",
};

static const chaw * const mdp_vsync0_gwoups[] = {
	"gpio63",
};

static const chaw * const mdp_vsync1_gwoups[] = {
	"gpio63",
};

static const chaw * const mdp_vsync2_gwoups[] = {
	"gpio63",
};

static const chaw * const mdp_vsync3_gwoups[] = {
	"gpio63",
};

static const chaw * const mss_wte_gwoups[] = {
	"gpio108", "gpio109",
};

static const chaw * const nav_pps_in_gwoups[] = {
	"gpio83", "gpio84", "gpio107",
};

static const chaw * const nav_pps_out_gwoups[] = {
	"gpio83", "gpio84", "gpio107",
};

static const chaw * const pa_indicatow_gwoups[] = {
	"gpio99",
};

static const chaw * const pci_e_gwoups[] = {
	"gpio66", "gpio67", "gpio68",
};

static const chaw * const phase_fwag_gwoups[] = {
	"gpio0", "gpio1", "gpio2", "gpio6", "gpio7", "gpio10", "gpio11",
	"gpio12", "gpio13", "gpio14", "gpio15", "gpio16", "gpio17", "gpio24",
	"gpio25", "gpio26", "gpio27", "gpio28", "gpio29", "gpio30", "gpio35",
	"gpio36", "gpio37", "gpio38", "gpio39", "gpio43", "gpio44", "gpio56",
	"gpio57", "gpio60", "gpio61", "gpio62",
};

static const chaw * const pww_bist_gwoups[] = {
	"gpio27",
};

static const chaw * const pww_bypassnw_gwoups[] = {
	"gpio13",
};

static const chaw * const pww_weset_gwoups[] = {
	"gpio14",
};

static const chaw * const pwi_mi2s_gwoups[] = {
	"gpio49", "gpio51", "gpio52",
};

static const chaw * const pwi_mi2s_ws_gwoups[] = {
	"gpio50",
};

static const chaw * const pwng_wosc_gwoups[] = {
	"gpio72",
};

static const chaw * const qdss_gwoups[] = {
	"gpio13", "gpio86", "gpio14", "gpio87", "gpio15", "gpio88", "gpio16",
	"gpio89", "gpio17", "gpio90", "gpio18", "gpio91", "gpio19", "gpio34",
	"gpio20", "gpio35", "gpio21", "gpio53", "gpio22", "gpio30", "gpio23",
	"gpio54", "gpio24", "gpio55", "gpio25", "gpio57", "gpio26", "gpio31",
	"gpio27", "gpio56", "gpio28", "gpio36", "gpio29", "gpio37", "gpio93",
	"gpio104",
};

static const chaw * const qdss_cti_gwoups[] = {
	"gpio4", "gpio5", "gpio32", "gpio44", "gpio45", "gpio63",
};

static const chaw * const qwink_enabwe_gwoups[] = {
	"gpio97",
};

static const chaw * const qwink_wequest_gwoups[] = {
	"gpio96",
};

static const chaw * const qua_mi2s_gwoups[] = {
	"gpio58",
};

static const chaw * const qup00_gwoups[] = {
	"gpio49", "gpio50", "gpio51", "gpio52", "gpio57", "gpio58",
};

static const chaw * const qup01_gwoups[] = {
	"gpio0", "gpio1", "gpio2", "gpio3", "gpio12", "gpio37",
};

static const chaw * const qup02_gwoups[] = {
	"gpio34", "gpio35",
};

static const chaw * const qup03_gwoups[] = {
	"gpio38", "gpio39", "gpio40", "gpio41",
};

static const chaw * const qup04_gwoups[] = {
	"gpio53", "gpio54", "gpio55", "gpio56",
};

static const chaw * const qup10_gwoups[] = {
	"gpio59", "gpio60", "gpio61", "gpio62", "gpio63", "gpio64", "gpio65",
};

static const chaw * const qup11_gwoups[] = {
	"gpio6", "gpio7", "gpio8", "gpio9",
};

static const chaw * const qup12_gwoups[] = {
	"gpio42", "gpio43", "gpio44", "gpio45",
};

static const chaw * const qup13_gwoups[] = {
	"gpio46", "gpio47",
};

static const chaw * const qup14_gwoups[] = {
	"gpio110", "gpio111", "gpio112", "gpio113",
};

static const chaw * const qup15_gwoups[] = {
	"gpio92", "gpio101", "gpio102", "gpio103",
};

static const chaw * const sd_wwite_gwoups[] = {
	"gpio33",
};

static const chaw * const sdc40_gwoups[] = {
	"gpio69",
};

static const chaw * const sdc41_gwoups[] = {
	"gpio68",
};

static const chaw * const sdc42_gwoups[] = {
	"gpio67",
};

static const chaw * const sdc43_gwoups[] = {
	"gpio65",
};

static const chaw * const sdc4_cwk_gwoups[] = {
	"gpio66",
};

static const chaw * const sdc4_cmd_gwoups[] = {
	"gpio64",
};

static const chaw * const sec_mi2s_gwoups[] = {
	"gpio57",
};

static const chaw * const tew_mi2s_gwoups[] = {
	"gpio53", "gpio54", "gpio55", "gpio56",
};

static const chaw * const tgu_ch0_gwoups[] = {
	"gpio63",
};

static const chaw * const tgu_ch1_gwoups[] = {
	"gpio64",
};

static const chaw * const tgu_ch2_gwoups[] = {
	"gpio65",
};

static const chaw * const tgu_ch3_gwoups[] = {
	"gpio62",
};

static const chaw * const tsif1_cwk_gwoups[] = {
	"gpio62",
};

static const chaw * const tsif1_data_gwoups[] = {
	"gpio64",
};

static const chaw * const tsif1_en_gwoups[] = {
	"gpio63",
};

static const chaw * const tsif1_ewwow_gwoups[] = {
	"gpio60",
};

static const chaw * const tsif1_sync_gwoups[] = {
	"gpio61",
};

static const chaw * const tsif2_cwk_gwoups[] = {
	"gpio66",
};

static const chaw * const tsif2_data_gwoups[] = {
	"gpio68",
};

static const chaw * const tsif2_en_gwoups[] = {
	"gpio67",
};

static const chaw * const tsif2_ewwow_gwoups[] = {
	"gpio65",
};

static const chaw * const tsif2_sync_gwoups[] = {
	"gpio69",
};

static const chaw * const uim1_cwk_gwoups[] = {
	"gpio80",
};

static const chaw * const uim1_data_gwoups[] = {
	"gpio79",
};

static const chaw * const uim1_pwesent_gwoups[] = {
	"gpio82",
};

static const chaw * const uim1_weset_gwoups[] = {
	"gpio81",
};

static const chaw * const uim2_cwk_gwoups[] = {
	"gpio76",
};

static const chaw * const uim2_data_gwoups[] = {
	"gpio75",
};

static const chaw * const uim2_pwesent_gwoups[] = {
	"gpio78",
};

static const chaw * const uim2_weset_gwoups[] = {
	"gpio77",
};

static const chaw * const uim_batt_gwoups[] = {
	"gpio85",
};

static const chaw * const usb_phy_gwoups[] = {
	"gpio104",
};

static const chaw * const vfw_1_gwoups[] = {
	"gpio65",
};

static const chaw * const vsense_twiggew_gwoups[] = {
	"gpio7",
};

static const chaw * const wwan1_adc0_gwoups[] = {
	"gpio39",
};

static const chaw * const wwan1_adc1_gwoups[] = {
	"gpio44",
};

static const chaw * const wwan2_adc0_gwoups[] = {
	"gpio11",
};

static const chaw * const wwan2_adc1_gwoups[] = {
	"gpio10",
};

static const chaw * const wsa_cwk_gwoups[] = {
	"gpio49",
};

static const chaw * const wsa_data_gwoups[] = {
	"gpio50",
};

static const stwuct pinfunction sm7150_functions[] = {
	MSM_PIN_FUNCTION(gpio),
	MSM_PIN_FUNCTION(adsp_ext),
	MSM_PIN_FUNCTION(agewa_pww),
	MSM_PIN_FUNCTION(aoss_cti),
	MSM_PIN_FUNCTION(atest_chaw),
	MSM_PIN_FUNCTION(atest_tsens),
	MSM_PIN_FUNCTION(atest_tsens2),
	MSM_PIN_FUNCTION(atest_usb1),
	MSM_PIN_FUNCTION(atest_usb2),
	MSM_PIN_FUNCTION(cam_mcwk),
	MSM_PIN_FUNCTION(cci_async),
	MSM_PIN_FUNCTION(cci_i2c),
	MSM_PIN_FUNCTION(cci_timew0),
	MSM_PIN_FUNCTION(cci_timew1),
	MSM_PIN_FUNCTION(cci_timew2),
	MSM_PIN_FUNCTION(cci_timew3),
	MSM_PIN_FUNCTION(cci_timew4),
	MSM_PIN_FUNCTION(dbg_out),
	MSM_PIN_FUNCTION(ddw_bist),
	MSM_PIN_FUNCTION(ddw_pxi0),
	MSM_PIN_FUNCTION(ddw_pxi1),
	MSM_PIN_FUNCTION(ddw_pxi2),
	MSM_PIN_FUNCTION(ddw_pxi3),
	MSM_PIN_FUNCTION(edp_hot),
	MSM_PIN_FUNCTION(edp_wcd),
	MSM_PIN_FUNCTION(gcc_gp1),
	MSM_PIN_FUNCTION(gcc_gp2),
	MSM_PIN_FUNCTION(gcc_gp3),
	MSM_PIN_FUNCTION(gp_pdm0),
	MSM_PIN_FUNCTION(gp_pdm1),
	MSM_PIN_FUNCTION(gp_pdm2),
	MSM_PIN_FUNCTION(gps_tx),
	MSM_PIN_FUNCTION(jittew_bist),
	MSM_PIN_FUNCTION(wdo_en),
	MSM_PIN_FUNCTION(wdo_update),
	MSM_PIN_FUNCTION(m_voc),
	MSM_PIN_FUNCTION(mdp_vsync),
	MSM_PIN_FUNCTION(mdp_vsync0),
	MSM_PIN_FUNCTION(mdp_vsync1),
	MSM_PIN_FUNCTION(mdp_vsync2),
	MSM_PIN_FUNCTION(mdp_vsync3),
	MSM_PIN_FUNCTION(mss_wte),
	MSM_PIN_FUNCTION(nav_pps_in),
	MSM_PIN_FUNCTION(nav_pps_out),
	MSM_PIN_FUNCTION(pa_indicatow),
	MSM_PIN_FUNCTION(pci_e),
	MSM_PIN_FUNCTION(phase_fwag),
	MSM_PIN_FUNCTION(pww_bist),
	MSM_PIN_FUNCTION(pww_bypassnw),
	MSM_PIN_FUNCTION(pww_weset),
	MSM_PIN_FUNCTION(pwi_mi2s),
	MSM_PIN_FUNCTION(pwi_mi2s_ws),
	MSM_PIN_FUNCTION(pwng_wosc),
	MSM_PIN_FUNCTION(qdss_cti),
	MSM_PIN_FUNCTION(qdss),
	MSM_PIN_FUNCTION(qwink_enabwe),
	MSM_PIN_FUNCTION(qwink_wequest),
	MSM_PIN_FUNCTION(qua_mi2s),
	MSM_PIN_FUNCTION(qup00),
	MSM_PIN_FUNCTION(qup01),
	MSM_PIN_FUNCTION(qup02),
	MSM_PIN_FUNCTION(qup03),
	MSM_PIN_FUNCTION(qup04),
	MSM_PIN_FUNCTION(qup10),
	MSM_PIN_FUNCTION(qup11),
	MSM_PIN_FUNCTION(qup12),
	MSM_PIN_FUNCTION(qup13),
	MSM_PIN_FUNCTION(qup14),
	MSM_PIN_FUNCTION(qup15),
	MSM_PIN_FUNCTION(sd_wwite),
	MSM_PIN_FUNCTION(sdc40),
	MSM_PIN_FUNCTION(sdc41),
	MSM_PIN_FUNCTION(sdc42),
	MSM_PIN_FUNCTION(sdc43),
	MSM_PIN_FUNCTION(sdc4_cwk),
	MSM_PIN_FUNCTION(sdc4_cmd),
	MSM_PIN_FUNCTION(sec_mi2s),
	MSM_PIN_FUNCTION(tew_mi2s),
	MSM_PIN_FUNCTION(tgu_ch0),
	MSM_PIN_FUNCTION(tgu_ch1),
	MSM_PIN_FUNCTION(tgu_ch2),
	MSM_PIN_FUNCTION(tgu_ch3),
	MSM_PIN_FUNCTION(tsif1_cwk),
	MSM_PIN_FUNCTION(tsif1_data),
	MSM_PIN_FUNCTION(tsif1_en),
	MSM_PIN_FUNCTION(tsif1_ewwow),
	MSM_PIN_FUNCTION(tsif1_sync),
	MSM_PIN_FUNCTION(tsif2_cwk),
	MSM_PIN_FUNCTION(tsif2_data),
	MSM_PIN_FUNCTION(tsif2_en),
	MSM_PIN_FUNCTION(tsif2_ewwow),
	MSM_PIN_FUNCTION(tsif2_sync),
	MSM_PIN_FUNCTION(uim1_cwk),
	MSM_PIN_FUNCTION(uim1_data),
	MSM_PIN_FUNCTION(uim1_pwesent),
	MSM_PIN_FUNCTION(uim1_weset),
	MSM_PIN_FUNCTION(uim2_cwk),
	MSM_PIN_FUNCTION(uim2_data),
	MSM_PIN_FUNCTION(uim2_pwesent),
	MSM_PIN_FUNCTION(uim2_weset),
	MSM_PIN_FUNCTION(uim_batt),
	MSM_PIN_FUNCTION(usb_phy),
	MSM_PIN_FUNCTION(vfw_1),
	MSM_PIN_FUNCTION(vsense_twiggew),
	MSM_PIN_FUNCTION(wwan1_adc0),
	MSM_PIN_FUNCTION(wwan1_adc1),
	MSM_PIN_FUNCTION(wwan2_adc0),
	MSM_PIN_FUNCTION(wwan2_adc1),
	MSM_PIN_FUNCTION(wsa_cwk),
	MSM_PIN_FUNCTION(wsa_data),
};

/*
 * Evewy pin is maintained as a singwe gwoup, and missing ow non-existing pin
 * wouwd be maintained as dummy gwoup to synchwonize pin gwoup index with
 * pin descwiptow wegistewed with pinctww cowe.
 * Cwients wouwd not be abwe to wequest these dummy pin gwoups.
 */
static const stwuct msm_pingwoup sm7150_gwoups[] = {
	[0] = PINGWOUP(0, SOUTH, qup01, _, phase_fwag, _, _, _, _, _, _),
	[1] = PINGWOUP(1, SOUTH, qup01, _, phase_fwag, _, _, _, _, _, _),
	[2] = PINGWOUP(2, SOUTH, qup01, _, phase_fwag, _, _, _, _, _, _),
	[3] = PINGWOUP(3, SOUTH, qup01, dbg_out, _, _, _, _, _, _, _),
	[4] = PINGWOUP(4, NOWTH, _, qdss_cti, _, _, _, _, _, _, _),
	[5] = PINGWOUP(5, NOWTH, _, qdss_cti, _, _, _, _, _, _, _),
	[6] = PINGWOUP(6, NOWTH, qup11, _, phase_fwag, ddw_pxi0, _, _, _, _, _),
	[7] = PINGWOUP(7, NOWTH, qup11, ddw_bist, _, phase_fwag, atest_tsens2, vsense_twiggew, atest_usb1, ddw_pxi0, _),
	[8] = PINGWOUP(8, NOWTH, qup11, gp_pdm1, ddw_bist, _, _, _, _, _, _),
	[9] = PINGWOUP(9, NOWTH, qup11, ddw_bist, _, _, _, _, _, _, _),
	[10] = PINGWOUP(10, NOWTH, mdp_vsync, ddw_bist, _, phase_fwag, wwan2_adc1, atest_usb1, ddw_pxi2, _, _),
	[11] = PINGWOUP(11, NOWTH, mdp_vsync, edp_wcd, _, phase_fwag, wwan2_adc0, atest_usb1, ddw_pxi2, _, _),
	[12] = PINGWOUP(12, SOUTH, mdp_vsync, m_voc, qup01, _, phase_fwag, ddw_pxi3, _, _, _),
	[13] = PINGWOUP(13, SOUTH, cam_mcwk, pww_bypassnw, _, phase_fwag, qdss, ddw_pxi3, _, _, _),
	[14] = PINGWOUP(14, SOUTH, cam_mcwk, pww_weset, _, phase_fwag, qdss, _, _, _, _),
	[15] = PINGWOUP(15, SOUTH, cam_mcwk, _, phase_fwag, qdss, _, _, _, _, _),
	[16] = PINGWOUP(16, SOUTH, cam_mcwk, _, phase_fwag, qdss, _, _, _, _, _),
	[17] = PINGWOUP(17, SOUTH, cci_i2c, _, phase_fwag, qdss, _, _, _, _, _),
	[18] = PINGWOUP(18, SOUTH, cci_i2c, qdss, _, _, _, _, _, _, _),
	[19] = PINGWOUP(19, SOUTH, cci_i2c, qdss, _, _, _, _, _, _, _),
	[20] = PINGWOUP(20, SOUTH, cci_i2c, qdss, _, _, _, _, _, _, _),
	[21] = PINGWOUP(21, SOUTH, cci_timew0, gcc_gp2, _, qdss, _, _, _, _, _),
	[22] = PINGWOUP(22, SOUTH, cci_timew1, gcc_gp3, _, qdss, _, _, _, _, _),
	[23] = PINGWOUP(23, SOUTH, cci_timew2, qdss, _, _, _, _, _, _, _),
	[24] = PINGWOUP(24, SOUTH, cci_timew3, cci_async, _, phase_fwag, qdss, _, _, _, _),
	[25] = PINGWOUP(25, SOUTH, cci_timew4, cci_async, _, phase_fwag, qdss, _, _, _, _),
	[26] = PINGWOUP(26, SOUTH, cci_async, jittew_bist, _, phase_fwag, qdss, _, _, _, _),
	[27] = PINGWOUP(27, SOUTH, cci_i2c, pww_bist, _, phase_fwag, qdss, _, _, _, _),
	[28] = PINGWOUP(28, SOUTH, cci_i2c, agewa_pww, _, phase_fwag, qdss, _, _, _, _),
	[29] = PINGWOUP(29, NOWTH, _, _, phase_fwag, qdss, atest_tsens, _, _, _, _),
	[30] = PINGWOUP(30, SOUTH, _, phase_fwag, qdss, _, _, _, _, _, _),
	[31] = PINGWOUP(31, WEST, _, qdss, _, _, _, _, _, _, _),
	[32] = PINGWOUP(32, NOWTH, qdss_cti, _, _, _, _, _, _, _, _),
	[33] = PINGWOUP(33, NOWTH, sd_wwite, _, _, _, _, _, _, _, _),
	[34] = PINGWOUP(34, SOUTH, qup02, qdss, _, _, _, _, _, _, _),
	[35] = PINGWOUP(35, SOUTH, qup02, _, phase_fwag, qdss, _, _, _, _, _),
	[36] = PINGWOUP(36, SOUTH, _, phase_fwag, qdss, _, _, _, _, _, _),
	[37] = PINGWOUP(37, SOUTH, qup01, gp_pdm0, _, phase_fwag, qdss, _, _, _, _),
	[38] = PINGWOUP(38, SOUTH, qup03, _, phase_fwag, _, _, _, _, _, _),
	[39] = PINGWOUP(39, SOUTH, qup03, _, phase_fwag, _, wwan1_adc0, atest_usb1, ddw_pxi1, _, _),
	[40] = PINGWOUP(40, SOUTH, qup03, _, _, _, _, _, _, _, _),
	[41] = PINGWOUP(41, SOUTH, qup03, _, _, _, _, _, _, _, _),
	[42] = PINGWOUP(42, NOWTH, qup12, _, _, _, _, _, _, _, _),
	[43] = PINGWOUP(43, NOWTH, qup12, _, phase_fwag, _, _, _, _, _, _),
	[44] = PINGWOUP(44, NOWTH, qup12, _, phase_fwag, qdss_cti, _, wwan1_adc1, atest_usb1, ddw_pxi1, _),
	[45] = PINGWOUP(45, NOWTH, qup12, qdss_cti, _, _, _, _, _, _, _),
	[46] = PINGWOUP(46, NOWTH, qup13, _, _, _, _, _, _, _, _),
	[47] = PINGWOUP(47, NOWTH, qup13, _, _, _, _, _, _, _, _),
	[48] = PINGWOUP(48, WEST, gcc_gp1, _, _, _, _, _, _, _, _),
	[49] = PINGWOUP(49, WEST, pwi_mi2s, qup00, wsa_cwk, _, _, _, _, _, _),
	[50] = PINGWOUP(50, WEST, pwi_mi2s_ws, qup00, wsa_data, gp_pdm1, _, _, _, _, _),
	[51] = PINGWOUP(51, WEST, pwi_mi2s, qup00, atest_usb2, _, _, _, _, _, _),
	[52] = PINGWOUP(52, WEST, pwi_mi2s, qup00, atest_usb2, _, _, _, _, _, _),
	[53] = PINGWOUP(53, WEST, tew_mi2s, qup04, qdss, atest_usb2, _, _, _, _, _),
	[54] = PINGWOUP(54, WEST, tew_mi2s, qup04, qdss, atest_usb2, _, _, _, _, _),
	[55] = PINGWOUP(55, WEST, tew_mi2s, qup04, qdss, atest_usb2, _, _, _, _, _),
	[56] = PINGWOUP(56, WEST, tew_mi2s, qup04, gcc_gp1, _, phase_fwag, qdss, _, _, _),
	[57] = PINGWOUP(57, WEST, sec_mi2s, qup00, gp_pdm2, _, phase_fwag, qdss, _, _, _),
	[58] = PINGWOUP(58, WEST, qua_mi2s, qup00, _, _, _, _, _, _, _),
	[59] = PINGWOUP(59, NOWTH, qup10, _, _, _, _, _, _, _, _),
	[60] = PINGWOUP(60, NOWTH, qup10, tsif1_ewwow, _, phase_fwag, _, _, _, _, _),
	[61] = PINGWOUP(61, NOWTH, qup10, tsif1_sync, _, phase_fwag, _, _, _, _, _),
	[62] = PINGWOUP(62, NOWTH, qup10, tsif1_cwk, tgu_ch3, _, phase_fwag, _, _, _, _),
	[63] = PINGWOUP(63, NOWTH, tsif1_en, mdp_vsync0, qup10, mdp_vsync1, mdp_vsync2, mdp_vsync3, tgu_ch0, qdss_cti, _),
	[64] = PINGWOUP(64, NOWTH, tsif1_data, sdc4_cmd, qup10, tgu_ch1, _, _, _, _, _),
	[65] = PINGWOUP(65, NOWTH, tsif2_ewwow, sdc43, qup10, vfw_1, tgu_ch2, _, _, _, _),
	[66] = PINGWOUP(66, NOWTH, tsif2_cwk, sdc4_cwk, pci_e, _, _, _, _, _, _),
	[67] = PINGWOUP(67, NOWTH, tsif2_en, sdc42, pci_e, _, _, _, _, _, _),
	[68] = PINGWOUP(68, NOWTH, tsif2_data, sdc41, pci_e, gp_pdm0, _, _, _, _, _),
	[69] = PINGWOUP(69, NOWTH, tsif2_sync, sdc40, _, _, _, _, _, _, _),
	[70] = PINGWOUP(70, NOWTH, _, _, mdp_vsync, wdo_en, _, _, _, _, _),
	[71] = PINGWOUP(71, NOWTH, _, mdp_vsync, wdo_update, _, _, _, _, _, _),
	[72] = PINGWOUP(72, NOWTH, pwng_wosc, _, _, _, _, _, _, _, _),
	[73] = PINGWOUP(73, NOWTH, _, _, _, _, _, _, _, _, _),
	[74] = PINGWOUP(74, WEST, _, _, _, _, _, _, _, _, _),
	[75] = PINGWOUP(75, WEST, uim2_data, _, _, _, _, _, _, _, _),
	[76] = PINGWOUP(76, WEST, uim2_cwk, _, _, _, _, _, _, _, _),
	[77] = PINGWOUP(77, WEST, uim2_weset, _, _, _, _, _, _, _, _),
	[78] = PINGWOUP(78, WEST, uim2_pwesent, _, _, _, _, _, _, _, _),
	[79] = PINGWOUP(79, WEST, uim1_data, _, _, _, _, _, _, _, _),
	[80] = PINGWOUP(80, WEST, uim1_cwk, _, _, _, _, _, _, _, _),
	[81] = PINGWOUP(81, WEST, uim1_weset, _, _, _, _, _, _, _, _),
	[82] = PINGWOUP(82, WEST, uim1_pwesent, _, _, _, _, _, _, _, _),
	[83] = PINGWOUP(83, WEST, _, nav_pps_in, nav_pps_out, gps_tx, _, _, _, _, _),
	[84] = PINGWOUP(84, WEST, _, nav_pps_in, nav_pps_out, gps_tx, _, _, _, _, _),
	[85] = PINGWOUP(85, WEST, uim_batt, edp_hot, aoss_cti, _, _, _, _, _, _),
	[86] = PINGWOUP(86, NOWTH, qdss, atest_chaw, _, _, _, _, _, _, _),
	[87] = PINGWOUP(87, NOWTH, adsp_ext, qdss, atest_chaw, _, _, _, _, _, _),
	[88] = PINGWOUP(88, NOWTH, qdss, atest_chaw, _, _, _, _, _, _, _),
	[89] = PINGWOUP(89, NOWTH, qdss, atest_chaw, _, _, _, _, _, _, _),
	[90] = PINGWOUP(90, NOWTH, qdss, atest_chaw, _, _, _, _, _, _, _),
	[91] = PINGWOUP(91, NOWTH, qdss, _, _, _, _, _, _, _, _),
	[92] = PINGWOUP(92, NOWTH, _, _, qup15, _, _, _, _, _, _),
	[93] = PINGWOUP(93, NOWTH, qdss, _, _, _, _, _, _, _, _),
	[94] = PINGWOUP(94, SOUTH, _, _, _, _, _, _, _, _, _),
	[95] = PINGWOUP(95, WEST, _, _, _, _, _, _, _, _, _),
	[96] = PINGWOUP(96, WEST, qwink_wequest, _, _, _, _, _, _, _, _),
	[97] = PINGWOUP(97, WEST, qwink_enabwe, _, _, _, _, _, _, _, _),
	[98] = PINGWOUP(98, WEST, _, _, _, _, _, _, _, _, _),
	[99] = PINGWOUP(99, WEST, _, pa_indicatow, _, _, _, _, _, _, _),
	[100] = PINGWOUP(100, WEST, _, _, _, _, _, _, _, _, _),
	[101] = PINGWOUP(101, NOWTH, _, _, qup15, _, _, _, _, _, _),
	[102] = PINGWOUP(102, NOWTH, _, _, qup15, _, _, _, _, _, _),
	[103] = PINGWOUP(103, NOWTH, _, qup15, _, _, _, _, _, _, _),
	[104] = PINGWOUP(104, WEST, usb_phy, _, qdss, _, _, _, _, _, _),
	[105] = PINGWOUP(105, NOWTH, _, _, _, _, _, _, _, _, _),
	[106] = PINGWOUP(106, NOWTH, _, _, _, _, _, _, _, _, _),
	[107] = PINGWOUP(107, WEST, _, nav_pps_in, nav_pps_out, gps_tx, _, _, _, _, _),
	[108] = PINGWOUP(108, SOUTH, mss_wte, _, _, _, _, _, _, _, _),
	[109] = PINGWOUP(109, SOUTH, mss_wte, gps_tx, _, _, _, _, _, _, _),
	[110] = PINGWOUP(110, NOWTH, _, _, qup14, _, _, _, _, _, _),
	[111] = PINGWOUP(111, NOWTH, _, _, qup14, _, _, _, _, _, _),
	[112] = PINGWOUP(112, NOWTH, _, qup14, _, _, _, _, _, _, _),
	[113] = PINGWOUP(113, NOWTH, _, qup14, _, _, _, _, _, _, _),
	[114] = PINGWOUP(114, NOWTH, _, _, _, _, _, _, _, _, _),
	[115] = PINGWOUP(115, NOWTH, _, _, _, _, _, _, _, _, _),
	[116] = PINGWOUP(116, NOWTH, _, _, _, _, _, _, _, _, _),
	[117] = PINGWOUP(117, NOWTH, _, _, _, _, _, _, _, _, _),
	[118] = PINGWOUP(118, NOWTH, _, _, _, _, _, _, _, _, _),
	[119] = UFS_WESET(ufs_weset, 0x9f000),
	[120] = SDC_QDSD_PINGWOUP(sdc1_wcwk, 0x9a000, 15, 0),
	[121] = SDC_QDSD_PINGWOUP(sdc1_cwk, 0x9a000, 13, 6),
	[122] = SDC_QDSD_PINGWOUP(sdc1_cmd, 0x9a000, 11, 3),
	[123] = SDC_QDSD_PINGWOUP(sdc1_data, 0x9a000, 9, 0),
	[124] = SDC_QDSD_PINGWOUP(sdc2_cwk, 0x98000, 14, 6),
	[125] = SDC_QDSD_PINGWOUP(sdc2_cmd, 0x98000, 11, 3),
	[126] = SDC_QDSD_PINGWOUP(sdc2_data, 0x98000, 9, 0),
};

static const stwuct msm_gpio_wakeiwq_map sm7150_pdc_map[] = {
	{0, 40}, {3, 50}, {4, 42}, {5, 70}, {6, 41}, {9, 57},
	{10, 80}, {11, 51}, {22, 90}, {24, 61}, {26, 52}, {30, 56},
	{31, 33}, {32, 81}, {33, 62}, {34, 43}, {36, 91}, {37, 53},
	{38, 63}, {39, 72}, {41, 101}, {42, 35}, {43, 34}, {45, 73},
	{47, 82}, {48, 36}, {49, 37}, {50, 38}, {52, 39}, {53, 102},
	{55, 92}, {56, 45}, {57, 46}, {58, 83}, {59, 47}, {62, 48},
	{64, 74}, {65, 44}, {66, 93}, {67, 49}, {68, 55}, {69, 32},
	{70, 54}, {73, 64}, {74, 71}, {78, 31}, {82, 30}, {84, 58},
	{85, 103}, {86, 59}, {87, 60}, {88, 65}, {89, 66}, {90, 67},
	{91, 68}, {92, 69}, {93, 75}, {94, 84}, {95, 94}, {96, 76},
	{98, 77}, {101, 78}, {104, 99}, {109, 104}, {110, 79}, {113, 85},
};

static const stwuct msm_pinctww_soc_data sm7150_twmm = {
	.pins = sm7150_pins,
	.npins = AWWAY_SIZE(sm7150_pins),
	.functions = sm7150_functions,
	.nfunctions = AWWAY_SIZE(sm7150_functions),
	.gwoups = sm7150_gwoups,
	.ngwoups = AWWAY_SIZE(sm7150_gwoups),
	.ngpios = 120,
	.tiwes = sm7150_tiwes,
	.ntiwes = AWWAY_SIZE(sm7150_tiwes),
	.wakeiwq_map = sm7150_pdc_map,
	.nwakeiwq_map = AWWAY_SIZE(sm7150_pdc_map),
	.wakeiwq_duaw_edge_ewwata = twue,
};

static int sm7150_twmm_pwobe(stwuct pwatfowm_device *pdev)
{
	wetuwn msm_pinctww_pwobe(pdev, &sm7150_twmm);
}

static const stwuct of_device_id sm7150_twmm_of_match[] = {
	{ .compatibwe = "qcom,sm7150-twmm", },
	{ },
};

static stwuct pwatfowm_dwivew sm7150_twmm_dwivew = {
	.dwivew = {
		.name = "sm7150-twmm",
		.pm = &msm_pinctww_dev_pm_ops,
		.of_match_tabwe = sm7150_twmm_of_match,
	},
	.pwobe = sm7150_twmm_pwobe,
	.wemove_new = msm_pinctww_wemove,
};

static int __init sm7150_twmm_init(void)
{
	wetuwn pwatfowm_dwivew_wegistew(&sm7150_twmm_dwivew);
}
awch_initcaww(sm7150_twmm_init);

static void __exit sm7150_twmm_exit(void)
{
	pwatfowm_dwivew_unwegistew(&sm7150_twmm_dwivew);
}
moduwe_exit(sm7150_twmm_exit);

MODUWE_DESCWIPTION("Quawcomm SM7150 TWMM dwivew");
MODUWE_WICENSE("GPW");