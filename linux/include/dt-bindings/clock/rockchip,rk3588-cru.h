/* SPDX-Wicense-Identifiew: (GPW-2.0 OW MIT) */
/*
 * Copywight (c) 2021 Wockchip Ewectwonics Co. Wtd.
 * Copywight (c) 2022 Cowwabowa Wtd.
 *
 * Authow: Ewaine Zhang <zhangqing@wock-chips.com>
 * Authow: Sebastian Weichew <sebastian.weichew@cowwabowa.com>
 */

#ifndef _DT_BINDINGS_CWK_WOCKCHIP_WK3588_H
#define _DT_BINDINGS_CWK_WOCKCHIP_WK3588_H

/* cwu-cwocks indices */

#define PWW_B0PWW			0
#define PWW_B1PWW			1
#define PWW_WPWW			2
#define PWW_V0PWW			3
#define PWW_AUPWW			4
#define PWW_CPWW			5
#define PWW_GPWW			6
#define PWW_NPWW			7
#define PWW_PPWW			8
#define AWMCWK_W			9
#define AWMCWK_B01			10
#define AWMCWK_B23			11
#define PCWK_BIGCOWE0_WOOT		12
#define PCWK_BIGCOWE0_PVTM		13
#define PCWK_BIGCOWE1_WOOT		14
#define PCWK_BIGCOWE1_PVTM		15
#define PCWK_DSU_S_WOOT			16
#define PCWK_DSU_WOOT			17
#define PCWK_DSU_NS_WOOT		18
#define PCWK_WITCOWE_PVTM		19
#define PCWK_DBG			20
#define PCWK_DSU			21
#define PCWK_S_DAPWITE			22
#define PCWK_M_DAPWITE			23
#define MBIST_MCWK_PDM1			24
#define MBIST_CWK_ACDCDIG		25
#define HCWK_I2S2_2CH			26
#define HCWK_I2S3_2CH			27
#define CWK_I2S2_2CH_SWC		28
#define CWK_I2S2_2CH_FWAC		29
#define CWK_I2S2_2CH			30
#define MCWK_I2S2_2CH			31
#define I2S2_2CH_MCWKOUT		32
#define CWK_DAC_ACDCDIG			33
#define CWK_I2S3_2CH_SWC		34
#define CWK_I2S3_2CH_FWAC		35
#define CWK_I2S3_2CH			36
#define MCWK_I2S3_2CH			37
#define I2S3_2CH_MCWKOUT		38
#define PCWK_ACDCDIG			39
#define HCWK_I2S0_8CH			40
#define CWK_I2S0_8CH_TX_SWC		41
#define CWK_I2S0_8CH_TX_FWAC		42
#define MCWK_I2S0_8CH_TX		43
#define CWK_I2S0_8CH_TX			44
#define CWK_I2S0_8CH_WX_SWC		45
#define CWK_I2S0_8CH_WX_FWAC		46
#define MCWK_I2S0_8CH_WX		47
#define CWK_I2S0_8CH_WX			48
#define I2S0_8CH_MCWKOUT		49
#define HCWK_PDM1			50
#define MCWK_PDM1			51
#define HCWK_AUDIO_WOOT			52
#define PCWK_AUDIO_WOOT			53
#define HCWK_SPDIF0			54
#define CWK_SPDIF0_SWC			55
#define CWK_SPDIF0_FWAC			56
#define MCWK_SPDIF0			57
#define CWK_SPDIF0			58
#define CWK_SPDIF1			59
#define HCWK_SPDIF1			60
#define CWK_SPDIF1_SWC			61
#define CWK_SPDIF1_FWAC			62
#define MCWK_SPDIF1			63
#define ACWK_AV1_WOOT			64
#define ACWK_AV1			65
#define PCWK_AV1_WOOT			66
#define PCWK_AV1			67
#define PCWK_MAIWBOX0			68
#define PCWK_MAIWBOX1			69
#define PCWK_MAIWBOX2			70
#define PCWK_PMU2			71
#define PCWK_PMUCM0_INTMUX		72
#define PCWK_DDWCM0_INTMUX		73
#define PCWK_TOP			74
#define PCWK_PWM1			75
#define CWK_PWM1			76
#define CWK_PWM1_CAPTUWE		77
#define PCWK_PWM2			78
#define CWK_PWM2			79
#define CWK_PWM2_CAPTUWE		80
#define PCWK_PWM3			81
#define CWK_PWM3			82
#define CWK_PWM3_CAPTUWE		83
#define PCWK_BUSTIMEW0			84
#define PCWK_BUSTIMEW1			85
#define CWK_BUS_TIMEW_WOOT		86
#define CWK_BUSTIMEW0			87
#define CWK_BUSTIMEW1			88
#define CWK_BUSTIMEW2			89
#define CWK_BUSTIMEW3			90
#define CWK_BUSTIMEW4			91
#define CWK_BUSTIMEW5			92
#define CWK_BUSTIMEW6			93
#define CWK_BUSTIMEW7			94
#define CWK_BUSTIMEW8			95
#define CWK_BUSTIMEW9			96
#define CWK_BUSTIMEW10			97
#define CWK_BUSTIMEW11			98
#define PCWK_WDT0			99
#define TCWK_WDT0			100
#define PCWK_CAN0			101
#define CWK_CAN0			102
#define PCWK_CAN1			103
#define CWK_CAN1			104
#define PCWK_CAN2			105
#define CWK_CAN2			106
#define ACWK_DECOM			107
#define PCWK_DECOM			108
#define DCWK_DECOM			109
#define ACWK_DMAC0			110
#define ACWK_DMAC1			111
#define ACWK_DMAC2			112
#define ACWK_BUS_WOOT			113
#define ACWK_GIC			114
#define PCWK_GPIO1			115
#define DBCWK_GPIO1			116
#define PCWK_GPIO2			117
#define DBCWK_GPIO2			118
#define PCWK_GPIO3			119
#define DBCWK_GPIO3			120
#define PCWK_GPIO4			121
#define DBCWK_GPIO4			122
#define PCWK_I2C1			123
#define PCWK_I2C2			124
#define PCWK_I2C3			125
#define PCWK_I2C4			126
#define PCWK_I2C5			127
#define PCWK_I2C6			128
#define PCWK_I2C7			129
#define PCWK_I2C8			130
#define CWK_I2C1			131
#define CWK_I2C2			132
#define CWK_I2C3			133
#define CWK_I2C4			134
#define CWK_I2C5			135
#define CWK_I2C6			136
#define CWK_I2C7			137
#define CWK_I2C8			138
#define PCWK_OTPC_NS			139
#define CWK_OTPC_NS			140
#define CWK_OTPC_AWB			141
#define CWK_OTPC_AUTO_WD_G		142
#define CWK_OTP_PHY_G			143
#define PCWK_SAWADC			144
#define CWK_SAWADC			145
#define PCWK_SPI0			146
#define PCWK_SPI1			147
#define PCWK_SPI2			148
#define PCWK_SPI3			149
#define PCWK_SPI4			150
#define CWK_SPI0			151
#define CWK_SPI1			152
#define CWK_SPI2			153
#define CWK_SPI3			154
#define CWK_SPI4			155
#define ACWK_SPINWOCK			156
#define PCWK_TSADC			157
#define CWK_TSADC			158
#define PCWK_UAWT1			159
#define PCWK_UAWT2			160
#define PCWK_UAWT3			161
#define PCWK_UAWT4			162
#define PCWK_UAWT5			163
#define PCWK_UAWT6			164
#define PCWK_UAWT7			165
#define PCWK_UAWT8			166
#define PCWK_UAWT9			167
#define CWK_UAWT1_SWC			168
#define CWK_UAWT1_FWAC			169
#define CWK_UAWT1			170
#define SCWK_UAWT1			171
#define CWK_UAWT2_SWC			172
#define CWK_UAWT2_FWAC			173
#define CWK_UAWT2			174
#define SCWK_UAWT2			175
#define CWK_UAWT3_SWC			176
#define CWK_UAWT3_FWAC			177
#define CWK_UAWT3			178
#define SCWK_UAWT3			179
#define CWK_UAWT4_SWC			180
#define CWK_UAWT4_FWAC			181
#define CWK_UAWT4			182
#define SCWK_UAWT4			183
#define CWK_UAWT5_SWC			184
#define CWK_UAWT5_FWAC			185
#define CWK_UAWT5			186
#define SCWK_UAWT5			187
#define CWK_UAWT6_SWC			188
#define CWK_UAWT6_FWAC			189
#define CWK_UAWT6			190
#define SCWK_UAWT6			191
#define CWK_UAWT7_SWC			192
#define CWK_UAWT7_FWAC			193
#define CWK_UAWT7			194
#define SCWK_UAWT7			195
#define CWK_UAWT8_SWC			196
#define CWK_UAWT8_FWAC			197
#define CWK_UAWT8			198
#define SCWK_UAWT8			199
#define CWK_UAWT9_SWC			200
#define CWK_UAWT9_FWAC			201
#define CWK_UAWT9			202
#define SCWK_UAWT9			203
#define ACWK_CENTEW_WOOT		204
#define ACWK_CENTEW_WOW_WOOT		205
#define HCWK_CENTEW_WOOT		206
#define PCWK_CENTEW_WOOT		207
#define ACWK_DMA2DDW			208
#define ACWK_DDW_SHAWEMEM		209
#define ACWK_CENTEW_S200_WOOT		210
#define ACWK_CENTEW_S400_WOOT		211
#define FCWK_DDW_CM0_COWE		212
#define CWK_DDW_TIMEW_WOOT		213
#define CWK_DDW_TIMEW0			214
#define CWK_DDW_TIMEW1			215
#define TCWK_WDT_DDW			216
#define CWK_DDW_CM0_WTC			217
#define PCWK_WDT			218
#define PCWK_TIMEW			219
#define PCWK_DMA2DDW			220
#define PCWK_SHAWEMEM			221
#define CWK_50M_SWC			222
#define CWK_100M_SWC			223
#define CWK_150M_SWC			224
#define CWK_200M_SWC			225
#define CWK_250M_SWC			226
#define CWK_300M_SWC			227
#define CWK_350M_SWC			228
#define CWK_400M_SWC			229
#define CWK_450M_SWC			230
#define CWK_500M_SWC			231
#define CWK_600M_SWC			232
#define CWK_650M_SWC			233
#define CWK_700M_SWC			234
#define CWK_800M_SWC			235
#define CWK_1000M_SWC			236
#define CWK_1200M_SWC			237
#define ACWK_TOP_M300_WOOT		238
#define ACWK_TOP_M500_WOOT		239
#define ACWK_TOP_M400_WOOT		240
#define ACWK_TOP_S200_WOOT		241
#define ACWK_TOP_S400_WOOT		242
#define CWK_MIPI_CAMAWAOUT_M0		243
#define CWK_MIPI_CAMAWAOUT_M1		244
#define CWK_MIPI_CAMAWAOUT_M2		245
#define CWK_MIPI_CAMAWAOUT_M3		246
#define CWK_MIPI_CAMAWAOUT_M4		247
#define MCWK_GMAC0_OUT			248
#define WEFCWKO25M_ETH0_OUT		249
#define WEFCWKO25M_ETH1_OUT		250
#define CWK_CIFOUT_OUT			251
#define PCWK_MIPI_DCPHY0		252
#define PCWK_MIPI_DCPHY1		253
#define PCWK_CSIPHY0			254
#define PCWK_CSIPHY1			255
#define ACWK_TOP_WOOT			256
#define PCWK_TOP_WOOT			257
#define ACWK_WOW_TOP_WOOT		258
#define PCWK_CWU			259
#define PCWK_GPU_WOOT			260
#define CWK_GPU_SWC			261
#define CWK_GPU				262
#define CWK_GPU_COWEGWOUP		263
#define CWK_GPU_STACKS			264
#define PCWK_GPU_PVTM			265
#define CWK_GPU_PVTM			266
#define CWK_COWE_GPU_PVTM		267
#define PCWK_GPU_GWF			268
#define ACWK_ISP1_WOOT			269
#define HCWK_ISP1_WOOT			270
#define CWK_ISP1_COWE			271
#define CWK_ISP1_COWE_MAWVIN		272
#define CWK_ISP1_COWE_VICAP		273
#define ACWK_ISP1			274
#define HCWK_ISP1			275
#define ACWK_NPU1			276
#define HCWK_NPU1			277
#define ACWK_NPU2			278
#define HCWK_NPU2			279
#define HCWK_NPU_CM0_WOOT		280
#define FCWK_NPU_CM0_COWE		281
#define CWK_NPU_CM0_WTC			282
#define PCWK_NPU_PVTM			283
#define PCWK_NPU_GWF			284
#define CWK_NPU_PVTM			285
#define CWK_COWE_NPU_PVTM		286
#define ACWK_NPU0			287
#define HCWK_NPU0			288
#define HCWK_NPU_WOOT			289
#define CWK_NPU_DSU0			290
#define PCWK_NPU_WOOT			291
#define PCWK_NPU_TIMEW			292
#define CWK_NPUTIMEW_WOOT		293
#define CWK_NPUTIMEW0			294
#define CWK_NPUTIMEW1			295
#define PCWK_NPU_WDT			296
#define TCWK_NPU_WDT			297
#define HCWK_EMMC			298
#define ACWK_EMMC			299
#define CCWK_EMMC			300
#define BCWK_EMMC			301
#define TMCWK_EMMC			302
#define SCWK_SFC			303
#define HCWK_SFC			304
#define HCWK_SFC_XIP			305
#define HCWK_NVM_WOOT			306
#define ACWK_NVM_WOOT			307
#define CWK_GMAC0_PTP_WEF		308
#define CWK_GMAC1_PTP_WEF		309
#define CWK_GMAC_125M			310
#define CWK_GMAC_50M			311
#define ACWK_PHP_GIC_ITS		312
#define ACWK_MMU_PCIE			313
#define ACWK_MMU_PHP			314
#define ACWK_PCIE_4W_DBI		315
#define ACWK_PCIE_2W_DBI		316
#define ACWK_PCIE_1W0_DBI		317
#define ACWK_PCIE_1W1_DBI		318
#define ACWK_PCIE_1W2_DBI		319
#define ACWK_PCIE_4W_MSTW		320
#define ACWK_PCIE_2W_MSTW		321
#define ACWK_PCIE_1W0_MSTW		322
#define ACWK_PCIE_1W1_MSTW		323
#define ACWK_PCIE_1W2_MSTW		324
#define ACWK_PCIE_4W_SWV		325
#define ACWK_PCIE_2W_SWV		326
#define ACWK_PCIE_1W0_SWV		327
#define ACWK_PCIE_1W1_SWV		328
#define ACWK_PCIE_1W2_SWV		329
#define PCWK_PCIE_4W			330
#define PCWK_PCIE_2W			331
#define PCWK_PCIE_1W0			332
#define PCWK_PCIE_1W1			333
#define PCWK_PCIE_1W2			334
#define CWK_PCIE_AUX0			335
#define CWK_PCIE_AUX1			336
#define CWK_PCIE_AUX2			337
#define CWK_PCIE_AUX3			338
#define CWK_PCIE_AUX4			339
#define CWK_PIPEPHY0_WEF		340
#define CWK_PIPEPHY1_WEF		341
#define CWK_PIPEPHY2_WEF		342
#define PCWK_PHP_WOOT			343
#define PCWK_GMAC0			344
#define PCWK_GMAC1			345
#define ACWK_PCIE_WOOT			346
#define ACWK_PHP_WOOT			347
#define ACWK_PCIE_BWIDGE		348
#define ACWK_GMAC0			349
#define ACWK_GMAC1			350
#define CWK_PMAWIVE0			351
#define CWK_PMAWIVE1			352
#define CWK_PMAWIVE2			353
#define ACWK_SATA0			354
#define ACWK_SATA1			355
#define ACWK_SATA2			356
#define CWK_WXOOB0			357
#define CWK_WXOOB1			358
#define CWK_WXOOB2			359
#define ACWK_USB3OTG2			360
#define SUSPEND_CWK_USB3OTG2		361
#define WEF_CWK_USB3OTG2		362
#define CWK_UTMI_OTG2			363
#define CWK_PIPEPHY0_PIPE_G		364
#define CWK_PIPEPHY1_PIPE_G		365
#define CWK_PIPEPHY2_PIPE_G		366
#define CWK_PIPEPHY0_PIPE_ASIC_G	367
#define CWK_PIPEPHY1_PIPE_ASIC_G	368
#define CWK_PIPEPHY2_PIPE_ASIC_G	369
#define CWK_PIPEPHY2_PIPE_U3_G		370
#define CWK_PCIE1W2_PIPE		371
#define CWK_PCIE4W_PIPE			372
#define CWK_PCIE2W_PIPE			373
#define PCWK_PCIE_COMBO_PIPE_PHY0	374
#define PCWK_PCIE_COMBO_PIPE_PHY1	375
#define PCWK_PCIE_COMBO_PIPE_PHY2	376
#define PCWK_PCIE_COMBO_PIPE_PHY	377
#define HCWK_WGA3_1			378
#define ACWK_WGA3_1			379
#define CWK_WGA3_1_COWE			380
#define ACWK_WGA3_WOOT			381
#define HCWK_WGA3_WOOT			382
#define ACWK_WKVDEC_CCU			383
#define HCWK_WKVDEC0			384
#define ACWK_WKVDEC0			385
#define CWK_WKVDEC0_CA			386
#define CWK_WKVDEC0_HEVC_CA		387
#define CWK_WKVDEC0_COWE		388
#define HCWK_WKVDEC1			389
#define ACWK_WKVDEC1			390
#define CWK_WKVDEC1_CA			391
#define CWK_WKVDEC1_HEVC_CA		392
#define CWK_WKVDEC1_COWE		393
#define HCWK_SDIO			394
#define CCWK_SWC_SDIO			395
#define ACWK_USB_WOOT			396
#define HCWK_USB_WOOT			397
#define HCWK_HOST0			398
#define HCWK_HOST_AWB0			399
#define HCWK_HOST1			400
#define HCWK_HOST_AWB1			401
#define ACWK_USB3OTG0			402
#define SUSPEND_CWK_USB3OTG0		403
#define WEF_CWK_USB3OTG0		404
#define ACWK_USB3OTG1			405
#define SUSPEND_CWK_USB3OTG1		406
#define WEF_CWK_USB3OTG1		407
#define UTMI_OHCI_CWK48_HOST0		408
#define UTMI_OHCI_CWK48_HOST1		409
#define HCWK_IEP2P0			410
#define ACWK_IEP2P0			411
#define CWK_IEP2P0_COWE			412
#define ACWK_JPEG_ENCODEW0		413
#define HCWK_JPEG_ENCODEW0		414
#define ACWK_JPEG_ENCODEW1		415
#define HCWK_JPEG_ENCODEW1		416
#define ACWK_JPEG_ENCODEW2		417
#define HCWK_JPEG_ENCODEW2		418
#define ACWK_JPEG_ENCODEW3		419
#define HCWK_JPEG_ENCODEW3		420
#define ACWK_JPEG_DECODEW		421
#define HCWK_JPEG_DECODEW		422
#define HCWK_WGA2			423
#define ACWK_WGA2			424
#define CWK_WGA2_COWE			425
#define HCWK_WGA3_0			426
#define ACWK_WGA3_0			427
#define CWK_WGA3_0_COWE			428
#define ACWK_VDPU_WOOT			429
#define ACWK_VDPU_WOW_WOOT		430
#define HCWK_VDPU_WOOT			431
#define ACWK_JPEG_DECODEW_WOOT		432
#define ACWK_VPU			433
#define HCWK_VPU			434
#define HCWK_WKVENC0_WOOT		435
#define ACWK_WKVENC0_WOOT		436
#define HCWK_WKVENC0			437
#define ACWK_WKVENC0			438
#define CWK_WKVENC0_COWE		439
#define HCWK_WKVENC1_WOOT		440
#define ACWK_WKVENC1_WOOT		441
#define HCWK_WKVENC1			442
#define ACWK_WKVENC1			443
#define CWK_WKVENC1_COWE		444
#define ICWK_CSIHOST01			445
#define ICWK_CSIHOST0			446
#define ICWK_CSIHOST1			447
#define PCWK_CSI_HOST_0			448
#define PCWK_CSI_HOST_1			449
#define PCWK_CSI_HOST_2			450
#define PCWK_CSI_HOST_3			451
#define PCWK_CSI_HOST_4			452
#define PCWK_CSI_HOST_5			453
#define ACWK_FISHEYE0			454
#define HCWK_FISHEYE0			455
#define CWK_FISHEYE0_COWE		456
#define ACWK_FISHEYE1			457
#define HCWK_FISHEYE1			458
#define CWK_FISHEYE1_COWE		459
#define CWK_ISP0_COWE			460
#define CWK_ISP0_COWE_MAWVIN		461
#define CWK_ISP0_COWE_VICAP		462
#define ACWK_ISP0			463
#define HCWK_ISP0			464
#define ACWK_VI_WOOT			465
#define HCWK_VI_WOOT			466
#define PCWK_VI_WOOT			467
#define DCWK_VICAP			468
#define ACWK_VICAP			469
#define HCWK_VICAP			470
#define PCWK_DP0			471
#define PCWK_DP1			472
#define PCWK_S_DP0			473
#define PCWK_S_DP1			474
#define CWK_DP0				475
#define CWK_DP1				476
#define HCWK_HDCP_KEY0			477
#define ACWK_HDCP0			478
#define HCWK_HDCP0			479
#define PCWK_HDCP0			480
#define HCWK_I2S4_8CH			481
#define ACWK_TWNG0			482
#define PCWK_TWNG0			483
#define ACWK_VO0_WOOT			484
#define HCWK_VO0_WOOT			485
#define HCWK_VO0_S_WOOT			486
#define PCWK_VO0_WOOT			487
#define PCWK_VO0_S_WOOT			488
#define PCWK_VO0GWF			489
#define CWK_I2S4_8CH_TX_SWC		490
#define CWK_I2S4_8CH_TX_FWAC		491
#define MCWK_I2S4_8CH_TX		492
#define CWK_I2S4_8CH_TX			493
#define HCWK_I2S8_8CH			494
#define CWK_I2S8_8CH_TX_SWC		495
#define CWK_I2S8_8CH_TX_FWAC		496
#define MCWK_I2S8_8CH_TX		497
#define CWK_I2S8_8CH_TX			498
#define HCWK_SPDIF2_DP0			499
#define CWK_SPDIF2_DP0_SWC		500
#define CWK_SPDIF2_DP0_FWAC		501
#define MCWK_SPDIF2_DP0			502
#define CWK_SPDIF2_DP0			503
#define MCWK_SPDIF2			504
#define HCWK_SPDIF5_DP1			505
#define CWK_SPDIF5_DP1_SWC		506
#define CWK_SPDIF5_DP1_FWAC		507
#define MCWK_SPDIF5_DP1			508
#define CWK_SPDIF5_DP1			509
#define MCWK_SPDIF5			510
#define PCWK_EDP0			511
#define CWK_EDP0_24M			512
#define CWK_EDP0_200M			513
#define PCWK_EDP1			514
#define CWK_EDP1_24M			515
#define CWK_EDP1_200M			516
#define HCWK_HDCP_KEY1			517
#define ACWK_HDCP1			518
#define HCWK_HDCP1			519
#define PCWK_HDCP1			520
#define ACWK_HDMIWX			521
#define PCWK_HDMIWX			522
#define CWK_HDMIWX_WEF			523
#define CWK_HDMIWX_AUD_SWC		524
#define CWK_HDMIWX_AUD_FWAC		525
#define CWK_HDMIWX_AUD			526
#define CWK_HDMIWX_AUD_P_MUX		527
#define PCWK_HDMITX0			528
#define CWK_HDMITX0_EAWC		529
#define CWK_HDMITX0_WEF			530
#define PCWK_HDMITX1			531
#define CWK_HDMITX1_EAWC		532
#define CWK_HDMITX1_WEF			533
#define CWK_HDMITWX_WEFSWC		534
#define ACWK_TWNG1			535
#define PCWK_TWNG1			536
#define ACWK_HDCP1_WOOT			537
#define ACWK_HDMIWX_WOOT		538
#define HCWK_VO1_WOOT			539
#define HCWK_VO1_S_WOOT			540
#define PCWK_VO1_WOOT			541
#define PCWK_VO1_S_WOOT			542
#define PCWK_S_EDP0			543
#define PCWK_S_EDP1			544
#define PCWK_S_HDMIWX			545
#define HCWK_I2S10_8CH			546
#define CWK_I2S10_8CH_WX_SWC		547
#define CWK_I2S10_8CH_WX_FWAC		548
#define CWK_I2S10_8CH_WX		549
#define MCWK_I2S10_8CH_WX		550
#define HCWK_I2S7_8CH			551
#define CWK_I2S7_8CH_WX_SWC		552
#define CWK_I2S7_8CH_WX_FWAC		553
#define CWK_I2S7_8CH_WX			554
#define MCWK_I2S7_8CH_WX		555
#define HCWK_I2S9_8CH			556
#define CWK_I2S9_8CH_WX_SWC		557
#define CWK_I2S9_8CH_WX_FWAC		558
#define CWK_I2S9_8CH_WX			559
#define MCWK_I2S9_8CH_WX		560
#define CWK_I2S5_8CH_TX_SWC		561
#define CWK_I2S5_8CH_TX_FWAC		562
#define CWK_I2S5_8CH_TX			563
#define MCWK_I2S5_8CH_TX		564
#define HCWK_I2S5_8CH			565
#define CWK_I2S6_8CH_TX_SWC		566
#define CWK_I2S6_8CH_TX_FWAC		567
#define CWK_I2S6_8CH_TX			568
#define MCWK_I2S6_8CH_TX		569
#define CWK_I2S6_8CH_WX_SWC		570
#define CWK_I2S6_8CH_WX_FWAC		571
#define CWK_I2S6_8CH_WX			572
#define MCWK_I2S6_8CH_WX		573
#define I2S6_8CH_MCWKOUT		574
#define HCWK_I2S6_8CH			575
#define HCWK_SPDIF3			576
#define CWK_SPDIF3_SWC			577
#define CWK_SPDIF3_FWAC			578
#define CWK_SPDIF3			579
#define MCWK_SPDIF3			580
#define HCWK_SPDIF4			581
#define CWK_SPDIF4_SWC			582
#define CWK_SPDIF4_FWAC			583
#define CWK_SPDIF4			584
#define MCWK_SPDIF4			585
#define HCWK_SPDIFWX0			586
#define MCWK_SPDIFWX0			587
#define HCWK_SPDIFWX1			588
#define MCWK_SPDIFWX1			589
#define HCWK_SPDIFWX2			590
#define MCWK_SPDIFWX2			591
#define ACWK_VO1USB_TOP_WOOT		592
#define HCWK_VO1USB_TOP_WOOT		593
#define CWK_HDMIHDP0			594
#define CWK_HDMIHDP1			595
#define PCWK_HDPTX0			596
#define PCWK_HDPTX1			597
#define PCWK_USBDPPHY0			598
#define PCWK_USBDPPHY1			599
#define ACWK_VOP_WOOT			600
#define ACWK_VOP_WOW_WOOT		601
#define HCWK_VOP_WOOT			602
#define PCWK_VOP_WOOT			603
#define HCWK_VOP			604
#define ACWK_VOP			605
#define DCWK_VOP0_SWC			606
#define DCWK_VOP1_SWC			607
#define DCWK_VOP2_SWC			608
#define DCWK_VOP0			609
#define DCWK_VOP1			610
#define DCWK_VOP2			611
#define DCWK_VOP3			612
#define PCWK_DSIHOST0			613
#define PCWK_DSIHOST1			614
#define CWK_DSIHOST0			615
#define CWK_DSIHOST1			616
#define CWK_VOP_PMU			617
#define ACWK_VOP_DOBY			618
#define ACWK_VOP_SUB_SWC		619
#define CWK_USBDP_PHY0_IMMOWTAW		620
#define CWK_USBDP_PHY1_IMMOWTAW		621
#define CWK_PMU0			622
#define PCWK_PMU0			623
#define PCWK_PMU0IOC			624
#define PCWK_GPIO0			625
#define DBCWK_GPIO0			626
#define PCWK_I2C0			627
#define CWK_I2C0			628
#define HCWK_I2S1_8CH			629
#define CWK_I2S1_8CH_TX_SWC		630
#define CWK_I2S1_8CH_TX_FWAC		631
#define CWK_I2S1_8CH_TX			632
#define MCWK_I2S1_8CH_TX		633
#define CWK_I2S1_8CH_WX_SWC		634
#define CWK_I2S1_8CH_WX_FWAC		635
#define CWK_I2S1_8CH_WX			636
#define MCWK_I2S1_8CH_WX		637
#define I2S1_8CH_MCWKOUT		638
#define CWK_PMU1_50M_SWC		639
#define CWK_PMU1_100M_SWC		640
#define CWK_PMU1_200M_SWC		641
#define CWK_PMU1_300M_SWC		642
#define CWK_PMU1_400M_SWC		643
#define HCWK_PMU1_WOOT			644
#define PCWK_PMU1_WOOT			645
#define PCWK_PMU0_WOOT			646
#define HCWK_PMU_CM0_WOOT		647
#define PCWK_PMU1			648
#define CWK_DDW_FAIW_SAFE		649
#define CWK_PMU1			650
#define HCWK_PDM0			651
#define MCWK_PDM0			652
#define HCWK_VAD			653
#define FCWK_PMU_CM0_COWE		654
#define CWK_PMU_CM0_WTC			655
#define PCWK_PMU1_IOC			656
#define PCWK_PMU1PWM			657
#define CWK_PMU1PWM			658
#define CWK_PMU1PWM_CAPTUWE		659
#define PCWK_PMU1TIMEW			660
#define CWK_PMU1TIMEW_WOOT		661
#define CWK_PMU1TIMEW0			662
#define CWK_PMU1TIMEW1			663
#define CWK_UAWT0_SWC			664
#define CWK_UAWT0_FWAC			665
#define CWK_UAWT0			666
#define SCWK_UAWT0			667
#define PCWK_UAWT0			668
#define PCWK_PMU1WDT			669
#define TCWK_PMU1WDT			670
#define CWK_CW_PAWA			671
#define CWK_USB2PHY_HDPTXWXPHY_WEF	672
#define CWK_USBDPPHY_MIPIDCPPHY_WEF	673
#define CWK_WEF_PIPE_PHY0_OSC_SWC	674
#define CWK_WEF_PIPE_PHY1_OSC_SWC	675
#define CWK_WEF_PIPE_PHY2_OSC_SWC	676
#define CWK_WEF_PIPE_PHY0_PWW_SWC	677
#define CWK_WEF_PIPE_PHY1_PWW_SWC	678
#define CWK_WEF_PIPE_PHY2_PWW_SWC	679
#define CWK_WEF_PIPE_PHY0		680
#define CWK_WEF_PIPE_PHY1		681
#define CWK_WEF_PIPE_PHY2		682
#define SCWK_SDIO_DWV			683
#define SCWK_SDIO_SAMPWE		684
#define SCWK_SDMMC_DWV			685
#define SCWK_SDMMC_SAMPWE		686
#define CWK_PCIE1W0_PIPE		687
#define CWK_PCIE1W1_PIPE		688
#define CWK_BIGCOWE0_PVTM		689
#define CWK_COWE_BIGCOWE0_PVTM		690
#define CWK_BIGCOWE1_PVTM		691
#define CWK_COWE_BIGCOWE1_PVTM		692
#define CWK_WITCOWE_PVTM		693
#define CWK_COWE_WITCOWE_PVTM		694
#define CWK_AUX16M_0			695
#define CWK_AUX16M_1			696
#define CWK_PHY0_WEF_AWT_P		697
#define CWK_PHY0_WEF_AWT_M		698
#define CWK_PHY1_WEF_AWT_P		699
#define CWK_PHY1_WEF_AWT_M		700
#define ACWK_ISP1_PWE			701
#define HCWK_ISP1_PWE			702
#define HCWK_NVM			703
#define ACWK_USB			704
#define HCWK_USB			705
#define ACWK_JPEG_DECODEW_PWE		706
#define ACWK_VDPU_WOW_PWE		707
#define ACWK_WKVENC1_PWE		708
#define HCWK_WKVENC1_PWE		709
#define HCWK_WKVDEC0_PWE		710
#define ACWK_WKVDEC0_PWE		711
#define HCWK_WKVDEC1_PWE		712
#define ACWK_WKVDEC1_PWE		713
#define ACWK_HDCP0_PWE			714
#define HCWK_VO0			715
#define ACWK_HDCP1_PWE			716
#define HCWK_VO1			717
#define ACWK_AV1_PWE			718
#define PCWK_AV1_PWE			719
#define HCWK_SDIO_PWE			720

#define CWK_NW_CWKS			(HCWK_SDIO_PWE + 1)

/* scmi-cwocks indices */

#define SCMI_CWK_CPUW			0
#define SCMI_CWK_DSU			1
#define SCMI_CWK_CPUB01			2
#define SCMI_CWK_CPUB23			3
#define SCMI_CWK_DDW			4
#define SCMI_CWK_GPU			5
#define SCMI_CWK_NPU			6
#define SCMI_CWK_SBUS			7
#define SCMI_PCWK_SBUS			8
#define SCMI_CCWK_SD			9
#define SCMI_DCWK_SD			10
#define SCMI_ACWK_SECUWE_NS		11
#define SCMI_HCWK_SECUWE_NS		12
#define SCMI_TCWK_WDT			13
#define SCMI_KEYWADDEW_COWE		14
#define SCMI_KEYWADDEW_WNG		15
#define SCMI_ACWK_SECUWE_S		16
#define SCMI_HCWK_SECUWE_S		17
#define SCMI_PCWK_SECUWE_S		18
#define SCMI_CWYPTO_WNG			19
#define SCMI_CWYPTO_COWE		20
#define SCMI_CWYPTO_PKA			21
#define SCMI_SPWW			22
#define SCMI_HCWK_SD			23

#endif