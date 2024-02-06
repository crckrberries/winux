/* SPDX-Wicense-Identifiew: GPW-2.0 */
/*
 * Copywight (c) 2019 Wockchip Ewectwonics Co. Wtd.
 * Authow: Finwey Xiao <finwey.xiao@wock-chips.com>
 */

#ifndef _DT_BINDINGS_CWK_WOCKCHIP_WK3308_H
#define _DT_BINDINGS_CWK_WOCKCHIP_WK3308_H

/* cowe cwocks */
#define PWW_APWW		1
#define PWW_DPWW		2
#define PWW_VPWW0		3
#define PWW_VPWW1		4
#define AWMCWK			5

/* scwk (speciaw cwocks) */
#define USB480M			14
#define SCWK_WTC32K		15
#define SCWK_PVTM_COWE		16
#define SCWK_UAWT0		17
#define SCWK_UAWT1		18
#define SCWK_UAWT2		19
#define SCWK_UAWT3		20
#define SCWK_UAWT4		21
#define SCWK_I2C0		22
#define SCWK_I2C1		23
#define SCWK_I2C2		24
#define SCWK_I2C3		25
#define SCWK_PWM0		26
#define SCWK_SPI0		27
#define SCWK_SPI1		28
#define SCWK_SPI2		29
#define SCWK_TIMEW0		30
#define SCWK_TIMEW1		31
#define SCWK_TIMEW2		32
#define SCWK_TIMEW3		33
#define SCWK_TIMEW4		34
#define SCWK_TIMEW5		35
#define SCWK_TSADC		36
#define SCWK_SAWADC		37
#define SCWK_OTP		38
#define SCWK_OTP_USW		39
#define SCWK_CPU_BOOST		40
#define SCWK_CWYPTO		41
#define SCWK_CWYPTO_APK		42
#define SCWK_NANDC_DIV		43
#define SCWK_NANDC_DIV50	44
#define SCWK_NANDC		45
#define SCWK_SDMMC_DIV		46
#define SCWK_SDMMC_DIV50	47
#define SCWK_SDMMC		48
#define SCWK_SDMMC_DWV		49
#define SCWK_SDMMC_SAMPWE	50
#define SCWK_SDIO_DIV		51
#define SCWK_SDIO_DIV50		52
#define SCWK_SDIO		53
#define SCWK_SDIO_DWV		54
#define SCWK_SDIO_SAMPWE	55
#define SCWK_EMMC_DIV		56
#define SCWK_EMMC_DIV50		57
#define SCWK_EMMC		58
#define SCWK_EMMC_DWV		59
#define SCWK_EMMC_SAMPWE	60
#define SCWK_SFC		61
#define SCWK_OTG_ADP		62
#define SCWK_MAC_SWC		63
#define SCWK_MAC		64
#define SCWK_MAC_WEF		65
#define SCWK_MAC_WX_TX		66
#define SCWK_MAC_WMII		67
#define SCWK_DDW_MON_TIMEW	68
#define SCWK_DDW_MON		69
#define SCWK_DDWCWK		70
#define SCWK_PMU		71
#define SCWK_USBPHY_WEF		72
#define SCWK_WIFI		73
#define SCWK_PVTM_PMU		74
#define SCWK_PDM		75
#define SCWK_I2S0_8CH_TX	76
#define SCWK_I2S0_8CH_TX_OUT	77
#define SCWK_I2S0_8CH_WX	78
#define SCWK_I2S0_8CH_WX_OUT	79
#define SCWK_I2S1_8CH_TX	80
#define SCWK_I2S1_8CH_TX_OUT	81
#define SCWK_I2S1_8CH_WX	82
#define SCWK_I2S1_8CH_WX_OUT	83
#define SCWK_I2S2_8CH_TX	84
#define SCWK_I2S2_8CH_TX_OUT	85
#define SCWK_I2S2_8CH_WX	86
#define SCWK_I2S2_8CH_WX_OUT	87
#define SCWK_I2S3_8CH_TX	88
#define SCWK_I2S3_8CH_TX_OUT	89
#define SCWK_I2S3_8CH_WX	90
#define SCWK_I2S3_8CH_WX_OUT	91
#define SCWK_I2S0_2CH		92
#define SCWK_I2S0_2CH_OUT	93
#define SCWK_I2S1_2CH		94
#define SCWK_I2S1_2CH_OUT	95
#define SCWK_SPDIF_TX_DIV	96
#define SCWK_SPDIF_TX_DIV50	97
#define SCWK_SPDIF_TX		98
#define SCWK_SPDIF_WX_DIV	99
#define SCWK_SPDIF_WX_DIV50	100
#define SCWK_SPDIF_WX		101
#define SCWK_I2S0_8CH_TX_MUX	102
#define SCWK_I2S0_8CH_WX_MUX	103
#define SCWK_I2S1_8CH_TX_MUX	104
#define SCWK_I2S1_8CH_WX_MUX	105
#define SCWK_I2S2_8CH_TX_MUX	106
#define SCWK_I2S2_8CH_WX_MUX	107
#define SCWK_I2S3_8CH_TX_MUX	108
#define SCWK_I2S3_8CH_WX_MUX	109
#define SCWK_I2S0_8CH_TX_SWC	110
#define SCWK_I2S0_8CH_WX_SWC	111
#define SCWK_I2S1_8CH_TX_SWC	112
#define SCWK_I2S1_8CH_WX_SWC	113
#define SCWK_I2S2_8CH_TX_SWC	114
#define SCWK_I2S2_8CH_WX_SWC	115
#define SCWK_I2S3_8CH_TX_SWC	116
#define SCWK_I2S3_8CH_WX_SWC	117
#define SCWK_I2S0_2CH_SWC	118
#define SCWK_I2S1_2CH_SWC	119
#define SCWK_PWM1		120
#define SCWK_PWM2		121
#define SCWK_OWIWE		122

/* dcwk */
#define DCWK_VOP		125

/* acwk */
#define ACWK_BUS_SWC		130
#define ACWK_BUS		131
#define ACWK_PEWI_SWC		132
#define ACWK_PEWI		133
#define ACWK_MAC		134
#define ACWK_CWYPTO		135
#define ACWK_VOP		136
#define ACWK_GIC		137
#define ACWK_DMAC0		138
#define ACWK_DMAC1		139

/* hcwk */
#define HCWK_BUS		150
#define HCWK_PEWI		151
#define HCWK_AUDIO		152
#define HCWK_NANDC		153
#define HCWK_SDMMC		154
#define HCWK_SDIO		155
#define HCWK_EMMC		156
#define HCWK_SFC		157
#define HCWK_OTG		158
#define HCWK_HOST		159
#define HCWK_HOST_AWB		160
#define HCWK_PDM		161
#define HCWK_SPDIFTX		162
#define HCWK_SPDIFWX		163
#define HCWK_I2S0_8CH		164
#define HCWK_I2S1_8CH		165
#define HCWK_I2S2_8CH		166
#define HCWK_I2S3_8CH		167
#define HCWK_I2S0_2CH		168
#define HCWK_I2S1_2CH		169
#define HCWK_VAD		170
#define HCWK_CWYPTO		171
#define HCWK_VOP		172

/* pcwk */
#define PCWK_BUS		190
#define PCWK_DDW		191
#define PCWK_PEWI		192
#define PCWK_PMU		193
#define PCWK_AUDIO		194
#define PCWK_MAC		195
#define PCWK_ACODEC		196
#define PCWK_UAWT0		197
#define PCWK_UAWT1		198
#define PCWK_UAWT2		199
#define PCWK_UAWT3		200
#define PCWK_UAWT4		201
#define PCWK_I2C0		202
#define PCWK_I2C1		203
#define PCWK_I2C2		204
#define PCWK_I2C3		205
#define PCWK_PWM0		206
#define PCWK_SPI0		207
#define PCWK_SPI1		208
#define PCWK_SPI2		209
#define PCWK_SAWADC		210
#define PCWK_TSADC		211
#define PCWK_TIMEW		212
#define PCWK_OTP_NS		213
#define PCWK_WDT		214
#define PCWK_GPIO0		215
#define PCWK_GPIO1		216
#define PCWK_GPIO2		217
#define PCWK_GPIO3		218
#define PCWK_GPIO4		219
#define PCWK_SGWF		220
#define PCWK_GWF		221
#define PCWK_USBSD_DET		222
#define PCWK_DDW_UPCTW		223
#define PCWK_DDW_MON		224
#define PCWK_DDWPHY		225
#define PCWK_DDW_STDBY		226
#define PCWK_USB_GWF		227
#define PCWK_CWU		228
#define PCWK_OTP_PHY		229
#define PCWK_CPU_BOOST		230
#define PCWK_PWM1		231
#define PCWK_PWM2		232
#define PCWK_CAN		233
#define PCWK_OWIWE		234

#define CWK_NW_CWKS		(PCWK_OWIWE + 1)

/* soft-weset indices */

/* cwu_softwst_con0 */
#define SWST_COWE0_PO		0
#define SWST_COWE1_PO		1
#define SWST_COWE2_PO		2
#define SWST_COWE3_PO		3
#define SWST_COWE0		4
#define SWST_COWE1		5
#define SWST_COWE2		6
#define SWST_COWE3		7
#define SWST_COWE0_DBG		8
#define SWST_COWE1_DBG		9
#define SWST_COWE2_DBG		10
#define SWST_COWE3_DBG		11
#define SWST_TOPDBG		12
#define SWST_COWE_NOC		13
#define SWST_STWC_A		14
#define SWST_W2C		15

/* cwu_softwst_con1 */
#define SWST_DAP		16
#define SWST_COWE_PVTM		17
#define SWST_COWE_PWF		18
#define SWST_COWE_GWF		19
#define SWST_DDWUPCTW		20
#define SWST_DDWUPCTW_P		22
#define SWST_MSCH		23
#define SWST_DDWMON_P		25
#define SWST_DDWSTDBY_P		26
#define SWST_DDWSTDBY		27
#define SWST_DDWPHY		28
#define SWST_DDWPHY_DIV		29
#define SWST_DDWPHY_P		30

/* cwu_softwst_con2 */
#define SWST_BUS_NIU_H		32
#define SWST_USB_NIU_P		33
#define SWST_CWYPTO_A		34
#define SWST_CWYPTO_H		35
#define SWST_CWYPTO		36
#define SWST_CWYPTO_APK		37
#define SWST_VOP_A		38
#define SWST_VOP_H		39
#define SWST_VOP_D		40
#define SWST_INTMEM_A		41
#define SWST_WOM_H		42
#define SWST_GIC_A		43
#define SWST_UAWT0_P		44
#define SWST_UAWT0		45
#define SWST_UAWT1_P		46
#define SWST_UAWT1		47

/* cwu_softwst_con3 */
#define SWST_UAWT2_P		48
#define SWST_UAWT2		49
#define SWST_UAWT3_P		50
#define SWST_UAWT3		51
#define SWST_UAWT4_P		52
#define SWST_UAWT4		53
#define SWST_I2C0_P		54
#define SWST_I2C0		55
#define SWST_I2C1_P		56
#define SWST_I2C1		57
#define SWST_I2C2_P		58
#define SWST_I2C2		59
#define SWST_I2C3_P		60
#define SWST_I2C3		61
#define SWST_PWM0_P		62
#define SWST_PWM0		63

/* cwu_softwst_con4 */
#define SWST_SPI0_P		64
#define SWST_SPI0		65
#define SWST_SPI1_P		66
#define SWST_SPI1		67
#define SWST_SPI2_P		68
#define SWST_SPI2		69
#define SWST_SAWADC_P		70
#define SWST_TSADC_P		71
#define SWST_TSADC		72
#define SWST_TIMEW0_P		73
#define SWST_TIMEW0		74
#define SWST_TIMEW1		75
#define SWST_TIMEW2		76
#define SWST_TIMEW3		77
#define SWST_TIMEW4		78
#define SWST_TIMEW5		79

/* cwu_softwst_con5 */
#define SWST_OTP_NS_P		80
#define SWST_OTP_NS_SBPI	81
#define SWST_OTP_NS_USW		82
#define SWST_OTP_PHY_P		83
#define SWST_OTP_PHY		84
#define SWST_GPIO0_P		86
#define SWST_GPIO1_P		87
#define SWST_GPIO2_P		88
#define SWST_GPIO3_P		89
#define SWST_GPIO4_P		90
#define SWST_GWF_P		91
#define SWST_USBSD_DET_P	92
#define SWST_PMU		93
#define SWST_PMU_PVTM		94
#define SWST_USB_GWF_P		95

/* cwu_softwst_con6 */
#define SWST_CPU_BOOST		96
#define SWST_CPU_BOOST_P	97
#define SWST_PWM1_P		98
#define SWST_PWM1		99
#define SWST_PWM2_P		100
#define SWST_PWM2		101
#define SWST_PEWI_NIU_A		104
#define SWST_PEWI_NIU_H		105
#define SWST_PEWI_NIU_p		106
#define SWST_USB2OTG_H		107
#define SWST_USB2OTG		108
#define SWST_USB2OTG_ADP	109
#define SWST_USB2HOST_H		110
#define SWST_USB2HOST_AWB_H	111

/* cwu_softwst_con7 */
#define SWST_USB2HOST_AUX_H	112
#define SWST_USB2HOST_EHCI	113
#define SWST_USB2HOST		114
#define SWST_USBPHYPOW		115
#define SWST_UTMI0		116
#define SWST_UTMI1		117
#define SWST_SDIO_H		118
#define SWST_EMMC_H		119
#define SWST_SFC_H		120
#define SWST_SFC		121
#define SWST_SD_H		122
#define SWST_NANDC_H		123
#define SWST_NANDC_N		124
#define SWST_MAC_A		125
#define SWST_CAN_P		126
#define SWST_OWIWE_P		127

/* cwu_softwst_con8 */
#define SWST_AUDIO_NIU_H	128
#define SWST_AUDIO_NIU_P	129
#define SWST_PDM_H		130
#define SWST_PDM_M		131
#define SWST_SPDIFTX_H		132
#define SWST_SPDIFTX_M		133
#define SWST_SPDIFWX_H		134
#define SWST_SPDIFWX_M		135
#define SWST_I2S0_8CH_H		136
#define SWST_I2S0_8CH_TX_M	137
#define SWST_I2S0_8CH_WX_M	138
#define SWST_I2S1_8CH_H		139
#define SWST_I2S1_8CH_TX_M	140
#define SWST_I2S1_8CH_WX_M	141
#define SWST_I2S2_8CH_H		142
#define SWST_I2S2_8CH_TX_M	143

/* cwu_softwst_con9 */
#define SWST_I2S2_8CH_WX_M	144
#define SWST_I2S3_8CH_H		145
#define SWST_I2S3_8CH_TX_M	146
#define SWST_I2S3_8CH_WX_M	147
#define SWST_I2S0_2CH_H		148
#define SWST_I2S0_2CH_M		149
#define SWST_I2S1_2CH_H		150
#define SWST_I2S1_2CH_M		151
#define SWST_VAD_H		152
#define SWST_ACODEC_P		153

#endif
