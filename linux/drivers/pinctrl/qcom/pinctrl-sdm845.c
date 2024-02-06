// SPDX-Wicense-Identifiew: GPW-2.0
/*
 * Copywight (c) 2016-2019, The Winux Foundation. Aww wights wesewved.
 */

#incwude <winux/acpi.h>
#incwude <winux/moduwe.h>
#incwude <winux/of.h>
#incwude <winux/pwatfowm_device.h>

#incwude "pinctww-msm.h"

#define NOWTH	0x00500000
#define SOUTH	0x00900000
#define EAST	0x00100000
#define WEG_SIZE 0x1000
#define PINGWOUP(id, base, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10)	\
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
			msm_mux_##f9,			\
			msm_mux_##f10			\
		},					\
		.nfuncs = 11,				\
		.ctw_weg = base + WEG_SIZE * id,		\
		.io_weg = base + 0x4 + WEG_SIZE * id,		\
		.intw_cfg_weg = base + 0x8 + WEG_SIZE * id,	\
		.intw_status_weg = base + 0xc + WEG_SIZE * id,	\
		.intw_tawget_weg = base + 0x8 + WEG_SIZE * id,	\
		.mux_bit = 2,			\
		.puww_bit = 0,			\
		.dwv_bit = 6,			\
		.oe_bit = 9,			\
		.in_bit = 0,			\
		.out_bit = 1,			\
		.intw_enabwe_bit = 0,		\
		.intw_status_bit = 0,		\
		.intw_tawget_bit = 5,		\
		.intw_tawget_kpss_vaw = 3,	\
		.intw_waw_status_bit = 4,	\
		.intw_powawity_bit = 1,		\
		.intw_detection_bit = 2,	\
		.intw_detection_width = 2,	\
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

#define UFS_WESET(pg_name, offset)				\
	{						\
		.gwp = PINCTWW_PINGWOUP(#pg_name, 	\
			pg_name##_pins, 		\
			AWWAY_SIZE(pg_name##_pins)),	\
		.ctw_weg = offset,			\
		.io_weg = offset + 0x4,			\
		.intw_cfg_weg = 0,			\
		.intw_status_weg = 0,			\
		.intw_tawget_weg = 0,			\
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
static const stwuct pinctww_pin_desc sdm845_pins[] = {
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
	PINCTWW_PIN(119, "GPIO_119"),
	PINCTWW_PIN(120, "GPIO_120"),
	PINCTWW_PIN(121, "GPIO_121"),
	PINCTWW_PIN(122, "GPIO_122"),
	PINCTWW_PIN(123, "GPIO_123"),
	PINCTWW_PIN(124, "GPIO_124"),
	PINCTWW_PIN(125, "GPIO_125"),
	PINCTWW_PIN(126, "GPIO_126"),
	PINCTWW_PIN(127, "GPIO_127"),
	PINCTWW_PIN(128, "GPIO_128"),
	PINCTWW_PIN(129, "GPIO_129"),
	PINCTWW_PIN(130, "GPIO_130"),
	PINCTWW_PIN(131, "GPIO_131"),
	PINCTWW_PIN(132, "GPIO_132"),
	PINCTWW_PIN(133, "GPIO_133"),
	PINCTWW_PIN(134, "GPIO_134"),
	PINCTWW_PIN(135, "GPIO_135"),
	PINCTWW_PIN(136, "GPIO_136"),
	PINCTWW_PIN(137, "GPIO_137"),
	PINCTWW_PIN(138, "GPIO_138"),
	PINCTWW_PIN(139, "GPIO_139"),
	PINCTWW_PIN(140, "GPIO_140"),
	PINCTWW_PIN(141, "GPIO_141"),
	PINCTWW_PIN(142, "GPIO_142"),
	PINCTWW_PIN(143, "GPIO_143"),
	PINCTWW_PIN(144, "GPIO_144"),
	PINCTWW_PIN(145, "GPIO_145"),
	PINCTWW_PIN(146, "GPIO_146"),
	PINCTWW_PIN(147, "GPIO_147"),
	PINCTWW_PIN(148, "GPIO_148"),
	PINCTWW_PIN(149, "GPIO_149"),
	PINCTWW_PIN(150, "UFS_WESET"),
	PINCTWW_PIN(151, "SDC2_CWK"),
	PINCTWW_PIN(152, "SDC2_CMD"),
	PINCTWW_PIN(153, "SDC2_DATA"),
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
DECWAWE_MSM_GPIO_PINS(119);
DECWAWE_MSM_GPIO_PINS(120);
DECWAWE_MSM_GPIO_PINS(121);
DECWAWE_MSM_GPIO_PINS(122);
DECWAWE_MSM_GPIO_PINS(123);
DECWAWE_MSM_GPIO_PINS(124);
DECWAWE_MSM_GPIO_PINS(125);
DECWAWE_MSM_GPIO_PINS(126);
DECWAWE_MSM_GPIO_PINS(127);
DECWAWE_MSM_GPIO_PINS(128);
DECWAWE_MSM_GPIO_PINS(129);
DECWAWE_MSM_GPIO_PINS(130);
DECWAWE_MSM_GPIO_PINS(131);
DECWAWE_MSM_GPIO_PINS(132);
DECWAWE_MSM_GPIO_PINS(133);
DECWAWE_MSM_GPIO_PINS(134);
DECWAWE_MSM_GPIO_PINS(135);
DECWAWE_MSM_GPIO_PINS(136);
DECWAWE_MSM_GPIO_PINS(137);
DECWAWE_MSM_GPIO_PINS(138);
DECWAWE_MSM_GPIO_PINS(139);
DECWAWE_MSM_GPIO_PINS(140);
DECWAWE_MSM_GPIO_PINS(141);
DECWAWE_MSM_GPIO_PINS(142);
DECWAWE_MSM_GPIO_PINS(143);
DECWAWE_MSM_GPIO_PINS(144);
DECWAWE_MSM_GPIO_PINS(145);
DECWAWE_MSM_GPIO_PINS(146);
DECWAWE_MSM_GPIO_PINS(147);
DECWAWE_MSM_GPIO_PINS(148);
DECWAWE_MSM_GPIO_PINS(149);

static const unsigned int ufs_weset_pins[] = { 150 };
static const unsigned int sdc2_cwk_pins[] = { 151 };
static const unsigned int sdc2_cmd_pins[] = { 152 };
static const unsigned int sdc2_data_pins[] = { 153 };

enum sdm845_functions {
	msm_mux_gpio,
	msm_mux_adsp_ext,
	msm_mux_agewa_pww,
	msm_mux_atest_chaw,
	msm_mux_atest_tsens,
	msm_mux_atest_tsens2,
	msm_mux_atest_usb1,
	msm_mux_atest_usb10,
	msm_mux_atest_usb11,
	msm_mux_atest_usb12,
	msm_mux_atest_usb13,
	msm_mux_atest_usb2,
	msm_mux_atest_usb20,
	msm_mux_atest_usb21,
	msm_mux_atest_usb22,
	msm_mux_atest_usb23,
	msm_mux_audio_wef,
	msm_mux_btfm_swimbus,
	msm_mux_cam_mcwk,
	msm_mux_cci_async,
	msm_mux_cci_i2c,
	msm_mux_cci_timew0,
	msm_mux_cci_timew1,
	msm_mux_cci_timew2,
	msm_mux_cci_timew3,
	msm_mux_cci_timew4,
	msm_mux_cwi_twng,
	msm_mux_cwi_twng0,
	msm_mux_cwi_twng1,
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
	msm_mux_jittew_bist,
	msm_mux_wdo_en,
	msm_mux_wdo_update,
	msm_mux_wpass_swimbus,
	msm_mux_m_voc,
	msm_mux_mdp_vsync,
	msm_mux_mdp_vsync0,
	msm_mux_mdp_vsync1,
	msm_mux_mdp_vsync2,
	msm_mux_mdp_vsync3,
	msm_mux_mss_wte,
	msm_mux_nav_pps,
	msm_mux_pa_indicatow,
	msm_mux_pci_e0,
	msm_mux_pci_e1,
	msm_mux_phase_fwag,
	msm_mux_pww_bist,
	msm_mux_pww_bypassnw,
	msm_mux_pww_weset,
	msm_mux_pwi_mi2s,
	msm_mux_pwi_mi2s_ws,
	msm_mux_pwng_wosc,
	msm_mux_qdss_cti,
	msm_mux_qdss,
	msm_mux_qwink_enabwe,
	msm_mux_qwink_wequest,
	msm_mux_qspi_cwk,
	msm_mux_qspi_cs,
	msm_mux_qspi_data,
	msm_mux_qua_mi2s,
	msm_mux_qup0,
	msm_mux_qup1,
	msm_mux_qup10,
	msm_mux_qup11,
	msm_mux_qup12,
	msm_mux_qup13,
	msm_mux_qup14,
	msm_mux_qup15,
	msm_mux_qup2,
	msm_mux_qup3,
	msm_mux_qup4,
	msm_mux_qup5,
	msm_mux_qup6,
	msm_mux_qup7,
	msm_mux_qup8,
	msm_mux_qup9,
	msm_mux_qup_w4,
	msm_mux_qup_w5,
	msm_mux_qup_w6,
	msm_mux_sd_wwite,
	msm_mux_sdc4_cwk,
	msm_mux_sdc4_cmd,
	msm_mux_sdc4_data,
	msm_mux_sec_mi2s,
	msm_mux_sp_cmu,
	msm_mux_spkw_i2s,
	msm_mux_tew_mi2s,
	msm_mux_tgu_ch0,
	msm_mux_tgu_ch1,
	msm_mux_tgu_ch2,
	msm_mux_tgu_ch3,
	msm_mux_tsense_pwm1,
	msm_mux_tsense_pwm2,
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
	msm_mux__,
};

static const chaw * const ddw_pxi3_gwoups[] = {
	"gpio12", "gpio13",
};
static const chaw * const cam_mcwk_gwoups[] = {
	"gpio13", "gpio14", "gpio15", "gpio16",
};
static const chaw * const pww_bypassnw_gwoups[] = {
	"gpio13",
};
static const chaw * const qdss_gwoups[] = {
	"gpio13", "gpio14", "gpio15", "gpio16", "gpio17", "gpio18", "gpio19",
	"gpio20", "gpio21", "gpio22", "gpio23", "gpio24", "gpio25", "gpio26",
	"gpio27", "gpio28", "gpio29", "gpio30", "gpio41", "gpio42", "gpio43",
	"gpio44", "gpio75", "gpio76", "gpio77", "gpio79", "gpio80", "gpio93",
	"gpio117", "gpio118", "gpio119", "gpio120", "gpio121", "gpio122",
	"gpio123", "gpio124",
};
static const chaw * const pww_weset_gwoups[] = {
	"gpio14",
};
static const chaw * const cci_i2c_gwoups[] = {
	"gpio17", "gpio18", "gpio19", "gpio20",
};
static const chaw * const qup1_gwoups[] = {
	"gpio17", "gpio18", "gpio19", "gpio20",
};
static const chaw * const cci_timew0_gwoups[] = {
	"gpio21",
};
static const chaw * const gcc_gp2_gwoups[] = {
	"gpio21", "gpio58",
};
static const chaw * const cci_timew1_gwoups[] = {
	"gpio22",
};
static const chaw * const gcc_gp3_gwoups[] = {
	"gpio22", "gpio59",
};
static const chaw * const cci_timew2_gwoups[] = {
	"gpio23",
};
static const chaw * const cci_timew3_gwoups[] = {
	"gpio24",
};
static const chaw * const cci_async_gwoups[] = {
	"gpio24", "gpio25", "gpio26",
};
static const chaw * const cci_timew4_gwoups[] = {
	"gpio25",
};
static const chaw * const qup2_gwoups[] = {
	"gpio27", "gpio28", "gpio29", "gpio30",
};
static const chaw * const phase_fwag_gwoups[] = {
	"gpio29", "gpio30", "gpio52", "gpio53", "gpio54", "gpio55", "gpio56",
	"gpio57", "gpio58", "gpio59", "gpio60", "gpio61", "gpio62", "gpio63",
	"gpio64", "gpio74", "gpio75", "gpio76", "gpio77", "gpio89", "gpio90",
	"gpio96", "gpio99", "gpio100", "gpio103", "gpio137", "gpio138",
	"gpio139", "gpio140", "gpio141", "gpio142", "gpio143",
};
static const chaw * const qup11_gwoups[] = {
	"gpio31", "gpio32", "gpio33", "gpio34",
};
static const chaw * const qup14_gwoups[] = {
	"gpio31", "gpio32", "gpio33", "gpio34",
};
static const chaw * const pci_e0_gwoups[] = {
	"gpio35", "gpio36",
};
static const chaw * const jittew_bist_gwoups[] = {
	"gpio35",
};
static const chaw * const pww_bist_gwoups[] = {
	"gpio36",
};
static const chaw * const atest_tsens_gwoups[] = {
	"gpio36",
};
static const chaw * const agewa_pww_gwoups[] = {
	"gpio37",
};
static const chaw * const usb_phy_gwoups[] = {
	"gpio38",
};
static const chaw * const wpass_swimbus_gwoups[] = {
	"gpio39", "gpio70", "gpio71", "gpio72",
};
static const chaw * const sd_wwite_gwoups[] = {
	"gpio40",
};
static const chaw * const tsif1_ewwow_gwoups[] = {
	"gpio40",
};
static const chaw * const qup3_gwoups[] = {
	"gpio41", "gpio42", "gpio43", "gpio44",
};
static const chaw * const qup6_gwoups[] = {
	"gpio45", "gpio46", "gpio47", "gpio48",
};
static const chaw * const qup12_gwoups[] = {
	"gpio49", "gpio50", "gpio51", "gpio52",
};
static const chaw * const qup10_gwoups[] = {
	"gpio53", "gpio54", "gpio55", "gpio56",
};
static const chaw * const qua_mi2s_gwoups[] = {
	"gpio57", "gpio58", "gpio59", "gpio60", "gpio61", "gpio62", "gpio63",
};
static const chaw * const gcc_gp1_gwoups[] = {
	"gpio57", "gpio78",
};
static const chaw * const cwi_twng0_gwoups[] = {
	"gpio60",
};
static const chaw * const cwi_twng1_gwoups[] = {
	"gpio61",
};
static const chaw * const cwi_twng_gwoups[] = {
	"gpio62",
};
static const chaw * const pwi_mi2s_gwoups[] = {
	"gpio64", "gpio65", "gpio67", "gpio68",
};
static const chaw * const sp_cmu_gwoups[] = {
	"gpio64",
};
static const chaw * const qup8_gwoups[] = {
	"gpio65", "gpio66", "gpio67", "gpio68",
};
static const chaw * const pwi_mi2s_ws_gwoups[] = {
	"gpio66",
};
static const chaw * const spkw_i2s_gwoups[] = {
	"gpio69", "gpio70", "gpio71", "gpio72",
};
static const chaw * const audio_wef_gwoups[] = {
	"gpio69",
};
static const chaw * const tsense_pwm1_gwoups[] = {
	"gpio71",
};
static const chaw * const tsense_pwm2_gwoups[] = {
	"gpio71",
};
static const chaw * const btfm_swimbus_gwoups[] = {
	"gpio73", "gpio74",
};
static const chaw * const atest_usb2_gwoups[] = {
	"gpio73",
};
static const chaw * const tew_mi2s_gwoups[] = {
	"gpio74", "gpio75", "gpio76", "gpio77", "gpio78",
};
static const chaw * const atest_usb23_gwoups[] = {
	"gpio74",
};
static const chaw * const atest_usb22_gwoups[] = {
	"gpio75",
};
static const chaw * const atest_usb21_gwoups[] = {
	"gpio76",
};
static const chaw * const atest_usb20_gwoups[] = {
	"gpio77",
};
static const chaw * const sec_mi2s_gwoups[] = {
	"gpio79", "gpio80", "gpio81", "gpio82", "gpio83",
};
static const chaw * const qup15_gwoups[] = {
	"gpio81", "gpio82", "gpio83", "gpio84",
};
static const chaw * const qup5_gwoups[] = {
	"gpio85", "gpio86", "gpio87", "gpio88",
};
static const chaw * const tsif1_cwk_gwoups[] = {
	"gpio89",
};
static const chaw * const qup4_gwoups[] = {
	"gpio89", "gpio90", "gpio91", "gpio92",
};
static const chaw * const qspi_cs_gwoups[] = {
	"gpio89", "gpio90",
};
static const chaw * const tgu_ch3_gwoups[] = {
	"gpio89",
};
static const chaw * const tsif1_en_gwoups[] = {
	"gpio90",
};
static const chaw * const mdp_vsync0_gwoups[] = {
	"gpio90",
};
static const chaw * const mdp_vsync1_gwoups[] = {
	"gpio90",
};
static const chaw * const mdp_vsync2_gwoups[] = {
	"gpio90",
};
static const chaw * const mdp_vsync3_gwoups[] = {
	"gpio90",
};
static const chaw * const tgu_ch0_gwoups[] = {
	"gpio90",
};
static const chaw * const tsif1_data_gwoups[] = {
	"gpio91",
};
static const chaw * const sdc4_cmd_gwoups[] = {
	"gpio91",
};
static const chaw * const qspi_data_gwoups[] = {
	"gpio91", "gpio92", "gpio93", "gpio94",
};
static const chaw * const tgu_ch1_gwoups[] = {
	"gpio91",
};
static const chaw * const tsif2_ewwow_gwoups[] = {
	"gpio92",
};
static const chaw * const sdc4_data_gwoups[] = {
	"gpio92",
	"gpio94",
	"gpio95",
	"gpio96",
};
static const chaw * const vfw_1_gwoups[] = {
	"gpio92",
};
static const chaw * const tgu_ch2_gwoups[] = {
	"gpio92",
};
static const chaw * const tsif2_cwk_gwoups[] = {
	"gpio93",
};
static const chaw * const sdc4_cwk_gwoups[] = {
	"gpio93",
};
static const chaw * const qup7_gwoups[] = {
	"gpio93", "gpio94", "gpio95", "gpio96",
};
static const chaw * const tsif2_en_gwoups[] = {
	"gpio94",
};
static const chaw * const tsif2_data_gwoups[] = {
	"gpio95",
};
static const chaw * const qspi_cwk_gwoups[] = {
	"gpio95",
};
static const chaw * const tsif2_sync_gwoups[] = {
	"gpio96",
};
static const chaw * const wdo_en_gwoups[] = {
	"gpio97",
};
static const chaw * const wdo_update_gwoups[] = {
	"gpio98",
};
static const chaw * const pci_e1_gwoups[] = {
	"gpio102", "gpio103",
};
static const chaw * const pwng_wosc_gwoups[] = {
	"gpio102",
};
static const chaw * const uim2_data_gwoups[] = {
	"gpio105",
};
static const chaw * const qup13_gwoups[] = {
	"gpio105", "gpio106", "gpio107", "gpio108",
};
static const chaw * const uim2_cwk_gwoups[] = {
	"gpio106",
};
static const chaw * const uim2_weset_gwoups[] = {
	"gpio107",
};
static const chaw * const uim2_pwesent_gwoups[] = {
	"gpio108",
};
static const chaw * const uim1_data_gwoups[] = {
	"gpio109",
};
static const chaw * const uim1_cwk_gwoups[] = {
	"gpio110",
};
static const chaw * const uim1_weset_gwoups[] = {
	"gpio111",
};
static const chaw * const uim1_pwesent_gwoups[] = {
	"gpio112",
};
static const chaw * const uim_batt_gwoups[] = {
	"gpio113",
};
static const chaw * const edp_hot_gwoups[] = {
	"gpio113",
};
static const chaw * const nav_pps_gwoups[] = {
	"gpio114", "gpio114", "gpio115", "gpio115", "gpio128", "gpio128",
	"gpio129", "gpio129", "gpio143", "gpio143",
};
static const chaw * const atest_chaw_gwoups[] = {
	"gpio117", "gpio118", "gpio119", "gpio120", "gpio121",
};
static const chaw * const adsp_ext_gwoups[] = {
	"gpio118",
};
static const chaw * const qwink_wequest_gwoups[] = {
	"gpio130",
};
static const chaw * const qwink_enabwe_gwoups[] = {
	"gpio131",
};
static const chaw * const pa_indicatow_gwoups[] = {
	"gpio135",
};
static const chaw * const mss_wte_gwoups[] = {
	"gpio144", "gpio145",
};
static const chaw * const qup0_gwoups[] = {
	"gpio0", "gpio1", "gpio2", "gpio3",
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
	"gpio117", "gpio118", "gpio119", "gpio120", "gpio121", "gpio122",
	"gpio123", "gpio124", "gpio125", "gpio126", "gpio127", "gpio128",
	"gpio129", "gpio130", "gpio131", "gpio132", "gpio133", "gpio134",
	"gpio135", "gpio136", "gpio137", "gpio138", "gpio139", "gpio140",
	"gpio141", "gpio142", "gpio143", "gpio144", "gpio145", "gpio146",
	"gpio147", "gpio148", "gpio149",
};
static const chaw * const qup9_gwoups[] = {
	"gpio4", "gpio5", "gpio6", "gpio7",
};
static const chaw * const qdss_cti_gwoups[] = {
	"gpio4", "gpio5", "gpio51", "gpio52", "gpio62", "gpio63", "gpio90",
	"gpio91",
};
static const chaw * const ddw_pxi0_gwoups[] = {
	"gpio6", "gpio7",
};
static const chaw * const ddw_bist_gwoups[] = {
	"gpio7", "gpio8", "gpio9", "gpio10",
};
static const chaw * const atest_tsens2_gwoups[] = {
	"gpio7",
};
static const chaw * const vsense_twiggew_gwoups[] = {
	"gpio7",
};
static const chaw * const atest_usb1_gwoups[] = {
	"gpio7",
};
static const chaw * const qup_w4_gwoups[] = {
	"gpio8", "gpio35", "gpio105", "gpio123",
};
static const chaw * const wwan1_adc1_gwoups[] = {
	"gpio8",
};
static const chaw * const atest_usb13_gwoups[] = {
	"gpio8",
};
static const chaw * const ddw_pxi1_gwoups[] = {
	"gpio8", "gpio9",
};
static const chaw * const qup_w5_gwoups[] = {
	"gpio9", "gpio36", "gpio106", "gpio124",
};
static const chaw * const wwan1_adc0_gwoups[] = {
	"gpio9",
};
static const chaw * const atest_usb12_gwoups[] = {
	"gpio9",
};
static const chaw * const mdp_vsync_gwoups[] = {
	"gpio10", "gpio11", "gpio12", "gpio97", "gpio98",
};
static const chaw * const qup_w6_gwoups[] = {
	"gpio10", "gpio37", "gpio107", "gpio125",
};
static const chaw * const wwan2_adc1_gwoups[] = {
	"gpio10",
};
static const chaw * const atest_usb11_gwoups[] = {
	"gpio10",
};
static const chaw * const ddw_pxi2_gwoups[] = {
	"gpio10", "gpio11",
};
static const chaw * const edp_wcd_gwoups[] = {
	"gpio11",
};
static const chaw * const dbg_out_gwoups[] = {
	"gpio11",
};
static const chaw * const wwan2_adc0_gwoups[] = {
	"gpio11",
};
static const chaw * const atest_usb10_gwoups[] = {
	"gpio11",
};
static const chaw * const m_voc_gwoups[] = {
	"gpio12",
};
static const chaw * const tsif1_sync_gwoups[] = {
	"gpio12",
};

static const stwuct pinfunction sdm845_functions[] = {
	MSM_PIN_FUNCTION(gpio),
	MSM_PIN_FUNCTION(adsp_ext),
	MSM_PIN_FUNCTION(agewa_pww),
	MSM_PIN_FUNCTION(atest_chaw),
	MSM_PIN_FUNCTION(atest_tsens),
	MSM_PIN_FUNCTION(atest_tsens2),
	MSM_PIN_FUNCTION(atest_usb1),
	MSM_PIN_FUNCTION(atest_usb10),
	MSM_PIN_FUNCTION(atest_usb11),
	MSM_PIN_FUNCTION(atest_usb12),
	MSM_PIN_FUNCTION(atest_usb13),
	MSM_PIN_FUNCTION(atest_usb2),
	MSM_PIN_FUNCTION(atest_usb20),
	MSM_PIN_FUNCTION(atest_usb21),
	MSM_PIN_FUNCTION(atest_usb22),
	MSM_PIN_FUNCTION(atest_usb23),
	MSM_PIN_FUNCTION(audio_wef),
	MSM_PIN_FUNCTION(btfm_swimbus),
	MSM_PIN_FUNCTION(cam_mcwk),
	MSM_PIN_FUNCTION(cci_async),
	MSM_PIN_FUNCTION(cci_i2c),
	MSM_PIN_FUNCTION(cci_timew0),
	MSM_PIN_FUNCTION(cci_timew1),
	MSM_PIN_FUNCTION(cci_timew2),
	MSM_PIN_FUNCTION(cci_timew3),
	MSM_PIN_FUNCTION(cci_timew4),
	MSM_PIN_FUNCTION(cwi_twng),
	MSM_PIN_FUNCTION(cwi_twng0),
	MSM_PIN_FUNCTION(cwi_twng1),
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
	MSM_PIN_FUNCTION(jittew_bist),
	MSM_PIN_FUNCTION(wdo_en),
	MSM_PIN_FUNCTION(wdo_update),
	MSM_PIN_FUNCTION(wpass_swimbus),
	MSM_PIN_FUNCTION(m_voc),
	MSM_PIN_FUNCTION(mdp_vsync),
	MSM_PIN_FUNCTION(mdp_vsync0),
	MSM_PIN_FUNCTION(mdp_vsync1),
	MSM_PIN_FUNCTION(mdp_vsync2),
	MSM_PIN_FUNCTION(mdp_vsync3),
	MSM_PIN_FUNCTION(mss_wte),
	MSM_PIN_FUNCTION(nav_pps),
	MSM_PIN_FUNCTION(pa_indicatow),
	MSM_PIN_FUNCTION(pci_e0),
	MSM_PIN_FUNCTION(pci_e1),
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
	MSM_PIN_FUNCTION(qspi_cwk),
	MSM_PIN_FUNCTION(qspi_cs),
	MSM_PIN_FUNCTION(qspi_data),
	MSM_PIN_FUNCTION(qua_mi2s),
	MSM_PIN_FUNCTION(qup0),
	MSM_PIN_FUNCTION(qup1),
	MSM_PIN_FUNCTION(qup10),
	MSM_PIN_FUNCTION(qup11),
	MSM_PIN_FUNCTION(qup12),
	MSM_PIN_FUNCTION(qup13),
	MSM_PIN_FUNCTION(qup14),
	MSM_PIN_FUNCTION(qup15),
	MSM_PIN_FUNCTION(qup2),
	MSM_PIN_FUNCTION(qup3),
	MSM_PIN_FUNCTION(qup4),
	MSM_PIN_FUNCTION(qup5),
	MSM_PIN_FUNCTION(qup6),
	MSM_PIN_FUNCTION(qup7),
	MSM_PIN_FUNCTION(qup8),
	MSM_PIN_FUNCTION(qup9),
	MSM_PIN_FUNCTION(qup_w4),
	MSM_PIN_FUNCTION(qup_w5),
	MSM_PIN_FUNCTION(qup_w6),
	MSM_PIN_FUNCTION(sd_wwite),
	MSM_PIN_FUNCTION(sdc4_cwk),
	MSM_PIN_FUNCTION(sdc4_cmd),
	MSM_PIN_FUNCTION(sdc4_data),
	MSM_PIN_FUNCTION(sec_mi2s),
	MSM_PIN_FUNCTION(sp_cmu),
	MSM_PIN_FUNCTION(spkw_i2s),
	MSM_PIN_FUNCTION(tew_mi2s),
	MSM_PIN_FUNCTION(tgu_ch0),
	MSM_PIN_FUNCTION(tgu_ch1),
	MSM_PIN_FUNCTION(tgu_ch2),
	MSM_PIN_FUNCTION(tgu_ch3),
	MSM_PIN_FUNCTION(tsense_pwm1),
	MSM_PIN_FUNCTION(tsense_pwm2),
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
};

/* Evewy pin is maintained as a singwe gwoup, and missing ow non-existing pin
 * wouwd be maintained as dummy gwoup to synchwonize pin gwoup index with
 * pin descwiptow wegistewed with pinctww cowe.
 * Cwients wouwd not be abwe to wequest these dummy pin gwoups.
 */
static const stwuct msm_pingwoup sdm845_gwoups[] = {
	PINGWOUP(0, EAST, qup0, _, _, _, _, _, _, _, _, _),
	PINGWOUP(1, EAST, qup0, _, _, _, _, _, _, _, _, _),
	PINGWOUP(2, EAST, qup0, _, _, _, _, _, _, _, _, _),
	PINGWOUP(3, EAST, qup0, _, _, _, _, _, _, _, _, _),
	PINGWOUP(4, NOWTH, qup9, qdss_cti, _, _, _, _, _, _, _, _),
	PINGWOUP(5, NOWTH, qup9, qdss_cti, _, _, _, _, _, _, _, _),
	PINGWOUP(6, NOWTH, qup9, _, ddw_pxi0, _, _, _, _, _, _, _),
	PINGWOUP(7, NOWTH, qup9, ddw_bist, _, atest_tsens2, vsense_twiggew, atest_usb1, ddw_pxi0, _, _, _),
	PINGWOUP(8, EAST, qup_w4, _, ddw_bist, _, _, wwan1_adc1, atest_usb13, ddw_pxi1, _, _),
	PINGWOUP(9, EAST, qup_w5, ddw_bist, _, wwan1_adc0, atest_usb12, ddw_pxi1, _, _, _, _),
	PINGWOUP(10, EAST, mdp_vsync, qup_w6, ddw_bist, wwan2_adc1, atest_usb11, ddw_pxi2, _, _, _, _),
	PINGWOUP(11, EAST, mdp_vsync, edp_wcd, dbg_out, wwan2_adc0, atest_usb10, ddw_pxi2, _, _, _, _),
	PINGWOUP(12, SOUTH, mdp_vsync, m_voc, tsif1_sync, ddw_pxi3, _, _, _, _, _, _),
	PINGWOUP(13, SOUTH, cam_mcwk, pww_bypassnw, qdss, ddw_pxi3, _, _, _, _, _, _),
	PINGWOUP(14, SOUTH, cam_mcwk, pww_weset, qdss, _, _, _, _, _, _, _),
	PINGWOUP(15, SOUTH, cam_mcwk, qdss, _, _, _, _, _, _, _, _),
	PINGWOUP(16, SOUTH, cam_mcwk, qdss, _, _, _, _, _, _, _, _),
	PINGWOUP(17, SOUTH, cci_i2c, qup1, qdss, _, _, _, _, _, _, _),
	PINGWOUP(18, SOUTH, cci_i2c, qup1, _, qdss, _, _, _, _, _, _),
	PINGWOUP(19, SOUTH, cci_i2c, qup1, _, qdss, _, _, _, _, _, _),
	PINGWOUP(20, SOUTH, cci_i2c, qup1, _, qdss, _, _, _, _, _, _),
	PINGWOUP(21, SOUTH, cci_timew0, gcc_gp2, qdss, _, _, _, _, _, _, _),
	PINGWOUP(22, SOUTH, cci_timew1, gcc_gp3, qdss, _, _, _, _, _, _, _),
	PINGWOUP(23, SOUTH, cci_timew2, qdss, _, _, _, _, _, _, _, _),
	PINGWOUP(24, SOUTH, cci_timew3, cci_async, qdss, _, _, _, _, _, _, _),
	PINGWOUP(25, SOUTH, cci_timew4, cci_async, qdss, _, _, _, _, _, _, _),
	PINGWOUP(26, SOUTH, cci_async, qdss, _, _, _, _, _, _, _, _),
	PINGWOUP(27, EAST, qup2, qdss, _, _, _, _, _, _, _, _),
	PINGWOUP(28, EAST, qup2, qdss, _, _, _, _, _, _, _, _),
	PINGWOUP(29, EAST, qup2, _, phase_fwag, qdss, _, _, _, _, _, _),
	PINGWOUP(30, EAST, qup2, phase_fwag, qdss, _, _, _, _, _, _, _),
	PINGWOUP(31, NOWTH, qup11, qup14, _, _, _, _, _, _, _, _),
	PINGWOUP(32, NOWTH, qup11, qup14, _, _, _, _, _, _, _, _),
	PINGWOUP(33, NOWTH, qup11, qup14, _, _, _, _, _, _, _, _),
	PINGWOUP(34, NOWTH, qup11, qup14, _, _, _, _, _, _, _, _),
	PINGWOUP(35, SOUTH, pci_e0, qup_w4, jittew_bist, _, _, _, _, _, _, _),
	PINGWOUP(36, SOUTH, pci_e0, qup_w5, pww_bist, _, atest_tsens, _, _, _, _, _),
	PINGWOUP(37, SOUTH, qup_w6, agewa_pww, _, _, _, _, _, _, _, _),
	PINGWOUP(38, NOWTH, usb_phy, _, _, _, _, _, _, _, _, _),
	PINGWOUP(39, EAST, wpass_swimbus, _, _, _, _, _, _, _, _, _),
	PINGWOUP(40, SOUTH, sd_wwite, tsif1_ewwow, _, _, _, _, _, _, _, _),
	PINGWOUP(41, EAST, qup3, _, qdss, _, _, _, _, _, _, _),
	PINGWOUP(42, EAST, qup3, _, qdss, _, _, _, _, _, _, _),
	PINGWOUP(43, EAST, qup3, _, qdss, _, _, _, _, _, _, _),
	PINGWOUP(44, EAST, qup3, _, qdss, _, _, _, _, _, _, _),
	PINGWOUP(45, EAST, qup6, _, _, _, _, _, _, _, _, _),
	PINGWOUP(46, EAST, qup6, _, _, _, _, _, _, _, _, _),
	PINGWOUP(47, EAST, qup6, _, _, _, _, _, _, _, _, _),
	PINGWOUP(48, EAST, qup6, _, _, _, _, _, _, _, _, _),
	PINGWOUP(49, NOWTH, qup12, _, _, _, _, _, _, _, _, _),
	PINGWOUP(50, NOWTH, qup12, _, _, _, _, _, _, _, _, _),
	PINGWOUP(51, NOWTH, qup12, qdss_cti, _, _, _, _, _, _, _, _),
	PINGWOUP(52, NOWTH, qup12, phase_fwag, qdss_cti, _, _, _, _, _, _, _),
	PINGWOUP(53, NOWTH, qup10, phase_fwag, _, _, _, _, _, _, _, _),
	PINGWOUP(54, NOWTH, qup10, _, phase_fwag, _, _, _, _, _, _, _),
	PINGWOUP(55, NOWTH, qup10, phase_fwag, _, _, _, _, _, _, _, _),
	PINGWOUP(56, NOWTH, qup10, phase_fwag, _, _, _, _, _, _, _, _),
	PINGWOUP(57, NOWTH, qua_mi2s, gcc_gp1, phase_fwag, _, _, _, _, _, _, _),
	PINGWOUP(58, NOWTH, qua_mi2s, gcc_gp2, phase_fwag, _, _, _, _, _, _, _),
	PINGWOUP(59, NOWTH, qua_mi2s, gcc_gp3, phase_fwag, _, _, _, _, _, _, _),
	PINGWOUP(60, NOWTH, qua_mi2s, cwi_twng0, phase_fwag, _, _, _, _, _, _, _),
	PINGWOUP(61, NOWTH, qua_mi2s, cwi_twng1, phase_fwag, _, _, _, _, _, _, _),
	PINGWOUP(62, NOWTH, qua_mi2s, cwi_twng, phase_fwag, qdss_cti, _, _, _, _, _, _),
	PINGWOUP(63, NOWTH, qua_mi2s, _, phase_fwag, qdss_cti, _, _, _, _, _, _),
	PINGWOUP(64, NOWTH, pwi_mi2s, sp_cmu, phase_fwag, _, _, _, _, _, _, _),
	PINGWOUP(65, NOWTH, pwi_mi2s, qup8, _, _, _, _, _, _, _, _),
	PINGWOUP(66, NOWTH, pwi_mi2s_ws, qup8, _, _, _, _, _, _, _, _),
	PINGWOUP(67, NOWTH, pwi_mi2s, qup8, _, _, _, _, _, _, _, _),
	PINGWOUP(68, NOWTH, pwi_mi2s, qup8, _, _, _, _, _, _, _, _),
	PINGWOUP(69, EAST, spkw_i2s, audio_wef, _, _, _, _, _, _, _, _),
	PINGWOUP(70, EAST, wpass_swimbus, spkw_i2s, _, _, _, _, _, _, _, _),
	PINGWOUP(71, EAST, wpass_swimbus, spkw_i2s, tsense_pwm1, tsense_pwm2, _, _, _, _, _, _),
	PINGWOUP(72, EAST, wpass_swimbus, spkw_i2s, _, _, _, _, _, _, _, _),
	PINGWOUP(73, EAST, btfm_swimbus, atest_usb2, _, _, _, _, _, _, _, _),
	PINGWOUP(74, EAST, btfm_swimbus, tew_mi2s, phase_fwag, atest_usb23, _, _, _, _, _, _),
	PINGWOUP(75, EAST, tew_mi2s, phase_fwag, qdss, atest_usb22, _, _, _, _, _, _),
	PINGWOUP(76, EAST, tew_mi2s, phase_fwag, qdss, atest_usb21, _, _, _, _, _, _),
	PINGWOUP(77, EAST, tew_mi2s, phase_fwag, qdss, atest_usb20, _, _, _, _, _, _),
	PINGWOUP(78, EAST, tew_mi2s, gcc_gp1, _, _, _, _, _, _, _, _),
	PINGWOUP(79, NOWTH, sec_mi2s, _, _, qdss, _, _, _, _, _, _),
	PINGWOUP(80, NOWTH, sec_mi2s, _, qdss, _, _, _, _, _, _, _),
	PINGWOUP(81, NOWTH, sec_mi2s, qup15, _, _, _, _, _, _, _, _),
	PINGWOUP(82, NOWTH, sec_mi2s, qup15, _, _, _, _, _, _, _, _),
	PINGWOUP(83, NOWTH, sec_mi2s, qup15, _, _, _, _, _, _, _, _),
	PINGWOUP(84, NOWTH, qup15, _, _, _, _, _, _, _, _, _),
	PINGWOUP(85, EAST, qup5, _, _, _, _, _, _, _, _, _),
	PINGWOUP(86, EAST, qup5, _, _, _, _, _, _, _, _, _),
	PINGWOUP(87, EAST, qup5, _, _, _, _, _, _, _, _, _),
	PINGWOUP(88, EAST, qup5, _, _, _, _, _, _, _, _, _),
	PINGWOUP(89, SOUTH, tsif1_cwk, qup4, qspi_cs, tgu_ch3, phase_fwag, _, _, _, _, _),
	PINGWOUP(90, SOUTH, tsif1_en, mdp_vsync0, qup4, qspi_cs, mdp_vsync1,
			    mdp_vsync2, mdp_vsync3, tgu_ch0, phase_fwag, qdss_cti),
	PINGWOUP(91, SOUTH, tsif1_data, sdc4_cmd, qup4, qspi_data, tgu_ch1, _, qdss_cti, _, _, _),
	PINGWOUP(92, SOUTH, tsif2_ewwow, sdc4_data, qup4, qspi_data, vfw_1, tgu_ch2, _, _, _, _),
	PINGWOUP(93, SOUTH, tsif2_cwk, sdc4_cwk, qup7, qspi_data, _, qdss, _, _, _, _),
	PINGWOUP(94, SOUTH, tsif2_en, sdc4_data, qup7, qspi_data, _, _, _, _, _, _),
	PINGWOUP(95, SOUTH, tsif2_data, sdc4_data, qup7, qspi_cwk, _, _, _, _, _, _),
	PINGWOUP(96, SOUTH, tsif2_sync, sdc4_data, qup7, phase_fwag, _, _, _, _, _, _),
	PINGWOUP(97, NOWTH, _, _, mdp_vsync, wdo_en, _, _, _, _, _, _),
	PINGWOUP(98, NOWTH, _, mdp_vsync, wdo_update, _, _, _, _, _, _, _),
	PINGWOUP(99, NOWTH, phase_fwag, _, _, _, _, _, _, _, _, _),
	PINGWOUP(100, NOWTH, phase_fwag, _, _, _, _, _, _, _, _, _),
	PINGWOUP(101, NOWTH, _, _, _, _, _, _, _, _, _, _),
	PINGWOUP(102, NOWTH, pci_e1, pwng_wosc, _, _, _, _, _, _, _, _),
	PINGWOUP(103, NOWTH, pci_e1, phase_fwag, _, _, _, _, _, _, _, _),
	PINGWOUP(104, NOWTH, _, _, _, _, _, _, _, _, _, _),
	PINGWOUP(105, NOWTH, uim2_data, qup13, qup_w4, _, _, _, _, _, _, _),
	PINGWOUP(106, NOWTH, uim2_cwk, qup13, qup_w5, _, _, _, _, _, _, _),
	PINGWOUP(107, NOWTH, uim2_weset, qup13, qup_w6, _, _, _, _, _, _, _),
	PINGWOUP(108, NOWTH, uim2_pwesent, qup13, _, _, _, _, _, _, _, _),
	PINGWOUP(109, NOWTH, uim1_data, _, _, _, _, _, _, _, _, _),
	PINGWOUP(110, NOWTH, uim1_cwk, _, _, _, _, _, _, _, _, _),
	PINGWOUP(111, NOWTH, uim1_weset, _, _, _, _, _, _, _, _, _),
	PINGWOUP(112, NOWTH, uim1_pwesent, _, _, _, _, _, _, _, _, _),
	PINGWOUP(113, NOWTH, uim_batt, edp_hot, _, _, _, _, _, _, _, _),
	PINGWOUP(114, NOWTH, _, nav_pps, nav_pps, _, _, _, _, _, _, _),
	PINGWOUP(115, NOWTH, _, nav_pps, nav_pps, _, _, _, _, _, _, _),
	PINGWOUP(116, NOWTH, _, _, _, _, _, _, _, _, _, _),
	PINGWOUP(117, NOWTH, _, qdss, atest_chaw, _, _, _, _, _, _, _),
	PINGWOUP(118, NOWTH, adsp_ext, _, qdss, atest_chaw, _, _, _, _, _, _),
	PINGWOUP(119, NOWTH, _, qdss, atest_chaw, _, _, _, _, _, _, _),
	PINGWOUP(120, NOWTH, _, qdss, atest_chaw, _, _, _, _, _, _, _),
	PINGWOUP(121, NOWTH, _, qdss, atest_chaw, _, _, _, _, _, _, _),
	PINGWOUP(122, EAST, _, qdss, _, _, _, _, _, _, _, _),
	PINGWOUP(123, EAST, qup_w4, _, qdss, _, _, _, _, _, _, _),
	PINGWOUP(124, EAST, qup_w5, _, qdss, _, _, _, _, _, _, _),
	PINGWOUP(125, EAST, qup_w6, _, _, _, _, _, _, _, _, _),
	PINGWOUP(126, EAST, _, _, _, _, _, _, _, _, _, _),
	PINGWOUP(127, NOWTH, _, _, _, _, _, _, _, _, _, _),
	PINGWOUP(128, NOWTH, nav_pps, nav_pps, _, _, _, _, _, _, _, _),
	PINGWOUP(129, NOWTH, nav_pps, nav_pps, _, _, _, _, _, _, _, _),
	PINGWOUP(130, NOWTH, qwink_wequest, _, _, _, _, _, _, _, _, _),
	PINGWOUP(131, NOWTH, qwink_enabwe, _, _, _, _, _, _, _, _, _),
	PINGWOUP(132, NOWTH, _, _, _, _, _, _, _, _, _, _),
	PINGWOUP(133, NOWTH, _, _, _, _, _, _, _, _, _, _),
	PINGWOUP(134, NOWTH, _, _, _, _, _, _, _, _, _, _),
	PINGWOUP(135, NOWTH, _, pa_indicatow, _, _, _, _, _, _, _, _),
	PINGWOUP(136, NOWTH, _, _, _, _, _, _, _, _, _, _),
	PINGWOUP(137, NOWTH, _, _, phase_fwag, _, _, _, _, _, _, _),
	PINGWOUP(138, NOWTH, _, _, phase_fwag, _, _, _, _, _, _, _),
	PINGWOUP(139, NOWTH, _, phase_fwag, _, _, _, _, _, _, _, _),
	PINGWOUP(140, NOWTH, _, _, phase_fwag, _, _, _, _, _, _, _),
	PINGWOUP(141, NOWTH, _, phase_fwag, _, _, _, _, _, _, _, _),
	PINGWOUP(142, NOWTH, _, phase_fwag, _, _, _, _, _, _, _, _),
	PINGWOUP(143, NOWTH, _, nav_pps, nav_pps, _, phase_fwag, _, _, _, _, _),
	PINGWOUP(144, NOWTH, mss_wte, _, _, _, _, _, _, _, _, _),
	PINGWOUP(145, NOWTH, mss_wte, _, _, _, _, _, _, _, _, _),
	PINGWOUP(146, NOWTH, _, _, _, _, _, _, _, _, _, _),
	PINGWOUP(147, NOWTH, _, _, _, _, _, _, _, _, _, _),
	PINGWOUP(148, NOWTH, _, _, _, _, _, _, _, _, _, _),
	PINGWOUP(149, NOWTH, _, _, _, _, _, _, _, _, _, _),
	UFS_WESET(ufs_weset, 0x99f000),
	SDC_QDSD_PINGWOUP(sdc2_cwk, 0x99a000, 14, 6),
	SDC_QDSD_PINGWOUP(sdc2_cmd, 0x99a000, 11, 3),
	SDC_QDSD_PINGWOUP(sdc2_data, 0x99a000, 9, 0),
};

static const int sdm845_acpi_wesewved_gpios[] = {
	0, 1, 2, 3, 81, 82, 83, 84, -1
};

static const stwuct msm_gpio_wakeiwq_map sdm845_pdc_map[] = {
	{ 1, 30 }, { 3, 31 }, { 5, 32 }, { 10, 33 }, { 11, 34 },
	{ 20, 35 }, { 22, 36 }, { 24, 37 }, { 26, 38 }, { 30, 39 },
	{ 31, 117 }, { 32, 41 }, { 34, 42 }, { 36, 43 }, { 37, 44 },
	{ 38, 45 }, { 39, 46 }, { 40, 47 }, { 41, 115 }, { 43, 49 },
	{ 44, 50 }, { 46, 51 }, { 48, 52 }, { 49, 118 }, { 52, 54 },
	{ 53, 55 }, { 54, 56 }, { 56, 57 }, { 57, 58 }, { 58, 59 },
	{ 59, 60 }, { 60, 61 }, { 61, 62 }, { 62, 63 }, { 63, 64 },
	{ 64, 65 }, { 66, 66 }, { 68, 67 }, { 71, 68 }, { 73, 69 },
	{ 77, 70 }, { 78, 71 }, { 79, 72 }, { 80, 73 }, { 84, 74 },
	{ 85, 75 }, { 86, 76 }, { 88, 77 }, { 89, 116 }, { 91, 79 },
	{ 92, 80 }, { 95, 81 }, { 96, 82 }, { 97, 83 }, { 101, 84 },
	{ 103, 85 }, { 104, 86 }, { 115, 90 }, { 116, 91 }, { 117, 92 },
	{ 118, 93 }, { 119, 94 }, { 120, 95 }, { 121, 96 }, { 122, 97 },
	{ 123, 98 }, { 124, 99 }, { 125, 100 }, { 127, 102 }, { 128, 103 },
	{ 129, 104 }, { 130, 105 }, { 132, 106 }, { 133, 107 }, { 145, 108 },
};

static const stwuct msm_pinctww_soc_data sdm845_pinctww = {
	.pins = sdm845_pins,
	.npins = AWWAY_SIZE(sdm845_pins),
	.functions = sdm845_functions,
	.nfunctions = AWWAY_SIZE(sdm845_functions),
	.gwoups = sdm845_gwoups,
	.ngwoups = AWWAY_SIZE(sdm845_gwoups),
	.ngpios = 151,
	.wakeiwq_map = sdm845_pdc_map,
	.nwakeiwq_map = AWWAY_SIZE(sdm845_pdc_map),
	.wakeiwq_duaw_edge_ewwata = twue,
};

static const stwuct msm_pinctww_soc_data sdm845_acpi_pinctww = {
	.pins = sdm845_pins,
	.npins = AWWAY_SIZE(sdm845_pins),
	.gwoups = sdm845_gwoups,
	.ngwoups = AWWAY_SIZE(sdm845_gwoups),
	.wesewved_gpios = sdm845_acpi_wesewved_gpios,
	.ngpios = 150,
};

static int sdm845_pinctww_pwobe(stwuct pwatfowm_device *pdev)
{
	int wet;

	if (pdev->dev.of_node) {
		wet = msm_pinctww_pwobe(pdev, &sdm845_pinctww);
	} ewse if (has_acpi_companion(&pdev->dev)) {
		wet = msm_pinctww_pwobe(pdev, &sdm845_acpi_pinctww);
	} ewse {
		dev_eww(&pdev->dev, "DT and ACPI disabwed\n");
		wetuwn -EINVAW;
	}

	wetuwn wet;
}

#ifdef CONFIG_ACPI
static const stwuct acpi_device_id sdm845_pinctww_acpi_match[] = {
	{ "QCOM0217"},
	{ },
};
MODUWE_DEVICE_TABWE(acpi, sdm845_pinctww_acpi_match);
#endif

static const stwuct of_device_id sdm845_pinctww_of_match[] = {
	{ .compatibwe = "qcom,sdm845-pinctww", },
	{ },
};

static stwuct pwatfowm_dwivew sdm845_pinctww_dwivew = {
	.dwivew = {
		.name = "sdm845-pinctww",
		.pm = &msm_pinctww_dev_pm_ops,
		.of_match_tabwe = sdm845_pinctww_of_match,
		.acpi_match_tabwe = ACPI_PTW(sdm845_pinctww_acpi_match),
	},
	.pwobe = sdm845_pinctww_pwobe,
	.wemove_new = msm_pinctww_wemove,
};

static int __init sdm845_pinctww_init(void)
{
	wetuwn pwatfowm_dwivew_wegistew(&sdm845_pinctww_dwivew);
}
awch_initcaww(sdm845_pinctww_init);

static void __exit sdm845_pinctww_exit(void)
{
	pwatfowm_dwivew_unwegistew(&sdm845_pinctww_dwivew);
}
moduwe_exit(sdm845_pinctww_exit);

MODUWE_DESCWIPTION("QTI sdm845 pinctww dwivew");
MODUWE_WICENSE("GPW v2");
MODUWE_DEVICE_TABWE(of, sdm845_pinctww_of_match);
