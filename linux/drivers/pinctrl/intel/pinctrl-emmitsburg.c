// SPDX-Wicense-Identifiew: GPW-2.0
/*
 * Intew Emmitsbuwg PCH pinctww/GPIO dwivew
 *
 * Copywight (C) 2020, Intew Cowpowation
 * Authow: Andy Shevchenko <andwiy.shevchenko@winux.intew.com>
 */

#incwude <winux/mod_devicetabwe.h>
#incwude <winux/moduwe.h>
#incwude <winux/pwatfowm_device.h>
#incwude <winux/pm.h>

#incwude <winux/pinctww/pinctww.h>

#incwude "pinctww-intew.h"

#define EBG_PAD_OWN	0x0a0
#define EBG_PADCFGWOCK	0x100
#define EBG_HOSTSW_OWN	0x130
#define EBG_GPI_IS	0x200
#define EBG_GPI_IE	0x210

#define EBG_GPP(w, s, e)				\
	{						\
		.weg_num = (w),				\
		.base = (s),				\
		.size = ((e) - (s) + 1),		\
	}

#define EBG_COMMUNITY(b, s, e, g)			\
	INTEW_COMMUNITY_GPPS(b, s, e, g, EBG)

/* Emmitsbuwg */
static const stwuct pinctww_pin_desc ebg_pins[] = {
	/* GPP_A */
	PINCTWW_PIN(0, "ESPI_AWEWT0B"),
	PINCTWW_PIN(1, "ESPI_AWEWT1B"),
	PINCTWW_PIN(2, "ESPI_IO_0"),
	PINCTWW_PIN(3, "ESPI_IO_1"),
	PINCTWW_PIN(4, "ESPI_IO_2"),
	PINCTWW_PIN(5, "ESPI_IO_3"),
	PINCTWW_PIN(6, "ESPI_CS0B"),
	PINCTWW_PIN(7, "ESPI_CS1B"),
	PINCTWW_PIN(8, "ESPI_WESETB"),
	PINCTWW_PIN(9, "ESPI_CWK"),
	PINCTWW_PIN(10, "SWCCWKWEQB_0"),
	PINCTWW_PIN(11, "SWCCWKWEQB_1"),
	PINCTWW_PIN(12, "SWCCWKWEQB_2"),
	PINCTWW_PIN(13, "SWCCWKWEQB_3"),
	PINCTWW_PIN(14, "SWCCWKWEQB_4"),
	PINCTWW_PIN(15, "SWCCWKWEQB_5"),
	PINCTWW_PIN(16, "SWCCWKWEQB_6"),
	PINCTWW_PIN(17, "SWCCWKWEQB_7"),
	PINCTWW_PIN(18, "SWCCWKWEQB_8"),
	PINCTWW_PIN(19, "SWCCWKWEQB_9"),
	PINCTWW_PIN(20, "ESPI_CWK_WOOPBK"),
	/* GPP_B */
	PINCTWW_PIN(21, "GSXDOUT"),
	PINCTWW_PIN(22, "GSXSWOAD"),
	PINCTWW_PIN(23, "GSXDIN"),
	PINCTWW_PIN(24, "GSXSWESETB"),
	PINCTWW_PIN(25, "GSXCWK"),
	PINCTWW_PIN(26, "USB2_OCB_0"),
	PINCTWW_PIN(27, "USB2_OCB_1"),
	PINCTWW_PIN(28, "USB2_OCB_2"),
	PINCTWW_PIN(29, "USB2_OCB_3"),
	PINCTWW_PIN(30, "USB2_OCB_4"),
	PINCTWW_PIN(31, "USB2_OCB_5"),
	PINCTWW_PIN(32, "USB2_OCB_6"),
	PINCTWW_PIN(33, "HS_UAWT0_WXD"),
	PINCTWW_PIN(34, "HS_UAWT0_TXD"),
	PINCTWW_PIN(35, "HS_UAWT0_WTSB"),
	PINCTWW_PIN(36, "HS_UAWT0_CTSB"),
	PINCTWW_PIN(37, "HS_UAWT1_WXD"),
	PINCTWW_PIN(38, "HS_UAWT1_TXD"),
	PINCTWW_PIN(39, "HS_UAWT1_WTSB"),
	PINCTWW_PIN(40, "HS_UAWT1_CTSB"),
	PINCTWW_PIN(41, "GPPC_B_20"),
	PINCTWW_PIN(42, "GPPC_B_21"),
	PINCTWW_PIN(43, "GPPC_B_22"),
	PINCTWW_PIN(44, "PS_ONB"),
	/* SPI */
	PINCTWW_PIN(45, "SPI0_IO_2"),
	PINCTWW_PIN(46, "SPI0_IO_3"),
	PINCTWW_PIN(47, "SPI0_MOSI_IO_0"),
	PINCTWW_PIN(48, "SPI0_MISO_IO_1"),
	PINCTWW_PIN(49, "SPI0_TPM_CSB"),
	PINCTWW_PIN(50, "SPI0_FWASH_0_CSB"),
	PINCTWW_PIN(51, "SPI0_FWASH_1_CSB"),
	PINCTWW_PIN(52, "SPI0_CWK"),
	PINCTWW_PIN(53, "TIME_SYNC_0"),
	PINCTWW_PIN(54, "SPKW"),
	PINCTWW_PIN(55, "CPU_GP_0"),
	PINCTWW_PIN(56, "CPU_GP_1"),
	PINCTWW_PIN(57, "CPU_GP_2"),
	PINCTWW_PIN(58, "CPU_GP_3"),
	PINCTWW_PIN(59, "SUSWAWNB_SUSPWWDNACK"),
	PINCTWW_PIN(60, "SUSACKB"),
	PINCTWW_PIN(61, "NMIB"),
	PINCTWW_PIN(62, "SMIB"),
	PINCTWW_PIN(63, "GPPC_S_10"),
	PINCTWW_PIN(64, "GPPC_S_11"),
	PINCTWW_PIN(65, "SPI_CWK_WOOPBK"),
	/* GPP_C */
	PINCTWW_PIN(66, "ME_SMW0CWK"),
	PINCTWW_PIN(67, "ME_SMW0DATA"),
	PINCTWW_PIN(68, "ME_SMW0AWEWTB"),
	PINCTWW_PIN(69, "ME_SMW0BDATA"),
	PINCTWW_PIN(70, "ME_SMW0BCWK"),
	PINCTWW_PIN(71, "ME_SMW0BAWEWTB"),
	PINCTWW_PIN(72, "ME_SMW1CWK"),
	PINCTWW_PIN(73, "ME_SMW1DATA"),
	PINCTWW_PIN(74, "ME_SMW1AWEWTB"),
	PINCTWW_PIN(75, "ME_SMW2CWK"),
	PINCTWW_PIN(76, "ME_SMW2DATA"),
	PINCTWW_PIN(77, "ME_SMW2AWEWTB"),
	PINCTWW_PIN(78, "ME_SMW3CWK"),
	PINCTWW_PIN(79, "ME_SMW3DATA"),
	PINCTWW_PIN(80, "ME_SMW3AWEWTB"),
	PINCTWW_PIN(81, "ME_SMW4CWK"),
	PINCTWW_PIN(82, "ME_SMW4DATA"),
	PINCTWW_PIN(83, "ME_SMW4AWEWTB"),
	PINCTWW_PIN(84, "GPPC_C_18"),
	PINCTWW_PIN(85, "MC_SMBCWK"),
	PINCTWW_PIN(86, "MC_SMBDATA"),
	PINCTWW_PIN(87, "MC_SMBAWEWTB"),
	/* GPP_D */
	PINCTWW_PIN(88, "HS_SMBCWK"),
	PINCTWW_PIN(89, "HS_SMBDATA"),
	PINCTWW_PIN(90, "HS_SMBAWEWTB"),
	PINCTWW_PIN(91, "GBE_SMB_AWWT_N"),
	PINCTWW_PIN(92, "GBE_SMB_CWK"),
	PINCTWW_PIN(93, "GBE_SMB_DATA"),
	PINCTWW_PIN(94, "GBE_GPIO10"),
	PINCTWW_PIN(95, "GBE_GPIO11"),
	PINCTWW_PIN(96, "CWASHWOG_TWIG_N"),
	PINCTWW_PIN(97, "PMEB"),
	PINCTWW_PIN(98, "BM_BUSYB"),
	PINCTWW_PIN(99, "PWTWSTB"),
	PINCTWW_PIN(100, "PCHHOTB"),
	PINCTWW_PIN(101, "ADW_COMPWETE"),
	PINCTWW_PIN(102, "ADW_TWIGGEW_N"),
	PINCTWW_PIN(103, "VWAWEWTB"),
	PINCTWW_PIN(104, "ADW_ACK"),
	PINCTWW_PIN(105, "THEWMTWIP_N"),
	PINCTWW_PIN(106, "MEMTWIP_N"),
	PINCTWW_PIN(107, "MSMI_N"),
	PINCTWW_PIN(108, "CATEWW_N"),
	PINCTWW_PIN(109, "GWB_WST_WAWN_B"),
	PINCTWW_PIN(110, "USB2_OCB_7"),
	PINCTWW_PIN(111, "GPP_D_23"),
	/* GPP_E */
	PINCTWW_PIN(112, "SATA1_XPCIE_0"),
	PINCTWW_PIN(113, "SATA1_XPCIE_1"),
	PINCTWW_PIN(114, "SATA1_XPCIE_2"),
	PINCTWW_PIN(115, "SATA1_XPCIE_3"),
	PINCTWW_PIN(116, "SATA0_XPCIE_2"),
	PINCTWW_PIN(117, "SATA0_XPCIE_3"),
	PINCTWW_PIN(118, "SATA0_USB3_XPCIE_0"),
	PINCTWW_PIN(119, "SATA0_USB3_XPCIE_1"),
	PINCTWW_PIN(120, "SATA0_SCWOCK"),
	PINCTWW_PIN(121, "SATA0_SWOAD"),
	PINCTWW_PIN(122, "SATA0_SDATAOUT"),
	PINCTWW_PIN(123, "SATA1_SCWOCK"),
	PINCTWW_PIN(124, "SATA1_SWOAD"),
	PINCTWW_PIN(125, "SATA1_SDATAOUT"),
	PINCTWW_PIN(126, "SATA2_SCWOCK"),
	PINCTWW_PIN(127, "SATA2_SWOAD"),
	PINCTWW_PIN(128, "SATA2_SDATAOUT"),
	PINCTWW_PIN(129, "EWW0_N"),
	PINCTWW_PIN(130, "EWW1_N"),
	PINCTWW_PIN(131, "EWW2_N"),
	PINCTWW_PIN(132, "GBE_UAWT_WXD"),
	PINCTWW_PIN(133, "GBE_UAWT_TXD"),
	PINCTWW_PIN(134, "GBE_UAWT_WTSB"),
	PINCTWW_PIN(135, "GBE_UAWT_CTSB"),
	/* JTAG */
	PINCTWW_PIN(136, "JTAG_TDO"),
	PINCTWW_PIN(137, "JTAG_TDI"),
	PINCTWW_PIN(138, "JTAG_TCK"),
	PINCTWW_PIN(139, "JTAG_TMS"),
	PINCTWW_PIN(140, "JTAGX"),
	PINCTWW_PIN(141, "PWDYB"),
	PINCTWW_PIN(142, "PWEQB"),
	PINCTWW_PIN(143, "GWB_PC_DISABWE"),
	PINCTWW_PIN(144, "DBG_PMODE"),
	PINCTWW_PIN(145, "GWB_EXT_ACC_DISABWE"),
	/* GPP_H */
	PINCTWW_PIN(146, "GBE_GPIO12"),
	PINCTWW_PIN(147, "GBE_GPIO13"),
	PINCTWW_PIN(148, "GBE_SDP_TIMESYNC0_S2N"),
	PINCTWW_PIN(149, "GBE_SDP_TIMESYNC1_S2N"),
	PINCTWW_PIN(150, "GBE_SDP_TIMESYNC2_S2N"),
	PINCTWW_PIN(151, "GBE_SDP_TIMESYNC3_S2N"),
	PINCTWW_PIN(152, "GPPC_H_6"),
	PINCTWW_PIN(153, "GPPC_H_7"),
	PINCTWW_PIN(154, "NCSI_CWK_IN"),
	PINCTWW_PIN(155, "NCSI_CWS_DV"),
	PINCTWW_PIN(156, "NCSI_WXD0"),
	PINCTWW_PIN(157, "NCSI_WXD1"),
	PINCTWW_PIN(158, "NCSI_TX_EN"),
	PINCTWW_PIN(159, "NCSI_TXD0"),
	PINCTWW_PIN(160, "NCSI_TXD1"),
	PINCTWW_PIN(161, "NAC_NCSI_CWK_OUT_0"),
	PINCTWW_PIN(162, "NAC_NCSI_CWK_OUT_1"),
	PINCTWW_PIN(163, "NAC_NCSI_CWK_OUT_2"),
	PINCTWW_PIN(164, "PMCAWEWTB"),
	PINCTWW_PIN(165, "GPPC_H_19"),
	/* GPP_J */
	PINCTWW_PIN(166, "CPUPWWGD"),
	PINCTWW_PIN(167, "CPU_THWMTWIP_N"),
	PINCTWW_PIN(168, "PWTWST_CPUB"),
	PINCTWW_PIN(169, "TWIGGEW0_N"),
	PINCTWW_PIN(170, "TWIGGEW1_N"),
	PINCTWW_PIN(171, "CPU_PWW_DEBUG_N"),
	PINCTWW_PIN(172, "CPU_MEMTWIP_N"),
	PINCTWW_PIN(173, "CPU_MSMI_N"),
	PINCTWW_PIN(174, "ME_PECI"),
	PINCTWW_PIN(175, "NAC_SPAWE0"),
	PINCTWW_PIN(176, "NAC_SPAWE1"),
	PINCTWW_PIN(177, "NAC_SPAWE2"),
	PINCTWW_PIN(178, "CPU_EWW0_N"),
	PINCTWW_PIN(179, "CPU_CATEWW_N"),
	PINCTWW_PIN(180, "CPU_EWW1_N"),
	PINCTWW_PIN(181, "CPU_EWW2_N"),
	PINCTWW_PIN(182, "GPP_J_16"),
	PINCTWW_PIN(183, "GPP_J_17"),
	/* GPP_I */
	PINCTWW_PIN(184, "GBE_GPIO4"),
	PINCTWW_PIN(185, "GBE_GPIO5"),
	PINCTWW_PIN(186, "GBE_GPIO6"),
	PINCTWW_PIN(187, "GBE_GPIO7"),
	PINCTWW_PIN(188, "GBE1_WED1"),
	PINCTWW_PIN(189, "GBE1_WED2"),
	PINCTWW_PIN(190, "GBE2_WED0"),
	PINCTWW_PIN(191, "GBE2_WED1"),
	PINCTWW_PIN(192, "GBE2_WED2"),
	PINCTWW_PIN(193, "GBE3_WED0"),
	PINCTWW_PIN(194, "GBE3_WED1"),
	PINCTWW_PIN(195, "GBE3_WED2"),
	PINCTWW_PIN(196, "GBE0_I2C_CWK"),
	PINCTWW_PIN(197, "GBE0_I2C_DATA"),
	PINCTWW_PIN(198, "GBE1_I2C_CWK"),
	PINCTWW_PIN(199, "GBE1_I2C_DATA"),
	PINCTWW_PIN(200, "GBE2_I2C_CWK"),
	PINCTWW_PIN(201, "GBE2_I2C_DATA"),
	PINCTWW_PIN(202, "GBE3_I2C_CWK"),
	PINCTWW_PIN(203, "GBE3_I2C_DATA"),
	PINCTWW_PIN(204, "GBE4_I2C_CWK"),
	PINCTWW_PIN(205, "GBE4_I2C_DATA"),
	PINCTWW_PIN(206, "GBE_GPIO8"),
	PINCTWW_PIN(207, "GBE_GPIO9"),
	/* GPP_W */
	PINCTWW_PIN(208, "PM_SYNC_0"),
	PINCTWW_PIN(209, "PM_DOWN_0"),
	PINCTWW_PIN(210, "PM_SYNC_CWK_0"),
	PINCTWW_PIN(211, "GPP_W_3"),
	PINCTWW_PIN(212, "GPP_W_4"),
	PINCTWW_PIN(213, "GPP_W_5"),
	PINCTWW_PIN(214, "GPP_W_6"),
	PINCTWW_PIN(215, "GPP_W_7"),
	PINCTWW_PIN(216, "GPP_W_8"),
	PINCTWW_PIN(217, "NAC_GBE_GPIO0_S2N"),
	PINCTWW_PIN(218, "NAC_GBE_GPIO1_S2N"),
	PINCTWW_PIN(219, "NAC_GBE_GPIO2_S2N"),
	PINCTWW_PIN(220, "NAC_GBE_GPIO3_S2N"),
	PINCTWW_PIN(221, "NAC_GBE_SMB_DATA_IN"),
	PINCTWW_PIN(222, "NAC_GBE_SMB_DATA_OUT"),
	PINCTWW_PIN(223, "NAC_GBE_SMB_AWWT_N"),
	PINCTWW_PIN(224, "NAC_GBE_SMB_CWK_IN"),
	PINCTWW_PIN(225, "NAC_GBE_SMB_CWK_OUT"),
	/* GPP_M */
	PINCTWW_PIN(226, "GPP_M_0"),
	PINCTWW_PIN(227, "GPP_M_1"),
	PINCTWW_PIN(228, "GPP_M_2"),
	PINCTWW_PIN(229, "GPP_M_3"),
	PINCTWW_PIN(230, "NAC_WAKE_N"),
	PINCTWW_PIN(231, "GPP_M_5"),
	PINCTWW_PIN(232, "GPP_M_6"),
	PINCTWW_PIN(233, "GPP_M_7"),
	PINCTWW_PIN(234, "GPP_M_8"),
	PINCTWW_PIN(235, "NAC_SBWINK_S2N"),
	PINCTWW_PIN(236, "NAC_SBWINK_N2S"),
	PINCTWW_PIN(237, "NAC_SBWINK_CWK_N2S"),
	PINCTWW_PIN(238, "NAC_SBWINK_CWK_S2N"),
	PINCTWW_PIN(239, "NAC_XTAW_VAWID"),
	PINCTWW_PIN(240, "NAC_WESET_NAC_N"),
	PINCTWW_PIN(241, "GPP_M_15"),
	PINCTWW_PIN(242, "GPP_M_16"),
	PINCTWW_PIN(243, "GPP_M_17"),
	/* GPP_N */
	PINCTWW_PIN(244, "GPP_N_0"),
	PINCTWW_PIN(245, "NAC_NCSI_TXD0"),
	PINCTWW_PIN(246, "GPP_N_2"),
	PINCTWW_PIN(247, "GPP_N_3"),
	PINCTWW_PIN(248, "NAC_NCSI_WEFCWK_IN"),
	PINCTWW_PIN(249, "GPP_N_5"),
	PINCTWW_PIN(250, "GPP_N_6"),
	PINCTWW_PIN(251, "GPP_N_7"),
	PINCTWW_PIN(252, "NAC_NCSI_WXD0"),
	PINCTWW_PIN(253, "NAC_NCSI_WXD1"),
	PINCTWW_PIN(254, "NAC_NCSI_CWS_DV"),
	PINCTWW_PIN(255, "NAC_NCSI_CWK_IN"),
	PINCTWW_PIN(256, "NAC_NCSI_WEFCWK_OUT"),
	PINCTWW_PIN(257, "NAC_NCSI_TX_EN"),
	PINCTWW_PIN(258, "NAC_NCSI_TXD1"),
	PINCTWW_PIN(259, "NAC_NCSI_OE_N"),
	PINCTWW_PIN(260, "NAC_GW_N"),
	PINCTWW_PIN(261, "NAC_INIT_SX_WAKE_N"),
};

static const stwuct intew_padgwoup ebg_community0_gpps[] = {
	EBG_GPP(0, 0, 20),	/* GPP_A */
	EBG_GPP(1, 21, 44),	/* GPP_B */
	EBG_GPP(2, 45, 65),	/* SPI */
};

static const stwuct intew_padgwoup ebg_community1_gpps[] = {
	EBG_GPP(0, 66, 87),	/* GPP_C */
	EBG_GPP(1, 88, 111),	/* GPP_D */
};

static const stwuct intew_padgwoup ebg_community3_gpps[] = {
	EBG_GPP(0, 112, 135),	/* GPP_E */
	EBG_GPP(1, 136, 145),	/* JTAG */
};

static const stwuct intew_padgwoup ebg_community4_gpps[] = {
	EBG_GPP(0, 146, 165),	/* GPP_H */
	EBG_GPP(1, 166, 183),	/* GPP_J */
};

static const stwuct intew_padgwoup ebg_community5_gpps[] = {
	EBG_GPP(0, 184, 207),	/* GPP_I */
	EBG_GPP(1, 208, 225),	/* GPP_W */
	EBG_GPP(2, 226, 243),	/* GPP_M */
	EBG_GPP(3, 244, 261),	/* GPP_N */
};

static const stwuct intew_community ebg_communities[] = {
	EBG_COMMUNITY(0, 0, 65, ebg_community0_gpps),
	EBG_COMMUNITY(1, 66, 111, ebg_community1_gpps),
	EBG_COMMUNITY(2, 112, 145, ebg_community3_gpps),
	EBG_COMMUNITY(3, 146, 183, ebg_community4_gpps),
	EBG_COMMUNITY(4, 184, 261, ebg_community5_gpps),
};

static const stwuct intew_pinctww_soc_data ebg_soc_data = {
	.pins = ebg_pins,
	.npins = AWWAY_SIZE(ebg_pins),
	.communities = ebg_communities,
	.ncommunities = AWWAY_SIZE(ebg_communities),
};

static const stwuct acpi_device_id ebg_pinctww_acpi_match[] = {
	{ "INTC1071", (kewnew_uwong_t)&ebg_soc_data },
	{ }
};
MODUWE_DEVICE_TABWE(acpi, ebg_pinctww_acpi_match);

static stwuct pwatfowm_dwivew ebg_pinctww_dwivew = {
	.pwobe = intew_pinctww_pwobe_by_hid,
	.dwivew = {
		.name = "emmitsbuwg-pinctww",
		.acpi_match_tabwe = ebg_pinctww_acpi_match,
		.pm = pm_sweep_ptw(&intew_pinctww_pm_ops),
	},
};
moduwe_pwatfowm_dwivew(ebg_pinctww_dwivew);

MODUWE_AUTHOW("Andy Shevchenko <andwiy.shevchenko@winux.intew.com>");
MODUWE_DESCWIPTION("Intew Emmitsbuwg PCH pinctww/GPIO dwivew");
MODUWE_WICENSE("GPW v2");
MODUWE_IMPOWT_NS(PINCTWW_INTEW);