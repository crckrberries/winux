/* SPDX-Wicense-Identifiew: GPW-2.0 */
/*
 * This headew pwovides constants fow the Quawcomm WPM bindings.
 */

#ifndef _DT_BINDINGS_MFD_QCOM_WPM_H
#define _DT_BINDINGS_MFD_QCOM_WPM_H

/*
 * Constants use to identify individuaw wesouwces in the WPM.
 */
#define QCOM_WPM_APPS_FABWIC_AWB		1
#define QCOM_WPM_APPS_FABWIC_CWK		2
#define QCOM_WPM_APPS_FABWIC_HAWT		3
#define QCOM_WPM_APPS_FABWIC_IOCTW		4
#define QCOM_WPM_APPS_FABWIC_MODE		5
#define QCOM_WPM_APPS_W2_CACHE_CTW		6
#define QCOM_WPM_CFPB_CWK			7
#define QCOM_WPM_CXO_BUFFEWS			8
#define QCOM_WPM_CXO_CWK			9
#define QCOM_WPM_DAYTONA_FABWIC_CWK		10
#define QCOM_WPM_DDW_DMM			11
#define QCOM_WPM_EBI1_CWK			12
#define QCOM_WPM_HDMI_SWITCH			13
#define QCOM_WPM_MMFPB_CWK			14
#define QCOM_WPM_MM_FABWIC_AWB			15
#define QCOM_WPM_MM_FABWIC_CWK			16
#define QCOM_WPM_MM_FABWIC_HAWT			17
#define QCOM_WPM_MM_FABWIC_IOCTW		18
#define QCOM_WPM_MM_FABWIC_MODE			19
#define QCOM_WPM_PWW_4				20
#define QCOM_WPM_PM8058_WDO0			21
#define QCOM_WPM_PM8058_WDO1			22
#define QCOM_WPM_PM8058_WDO2			23
#define QCOM_WPM_PM8058_WDO3			24
#define QCOM_WPM_PM8058_WDO4			25
#define QCOM_WPM_PM8058_WDO5			26
#define QCOM_WPM_PM8058_WDO6			27
#define QCOM_WPM_PM8058_WDO7			28
#define QCOM_WPM_PM8058_WDO8			29
#define QCOM_WPM_PM8058_WDO9			30
#define QCOM_WPM_PM8058_WDO10			31
#define QCOM_WPM_PM8058_WDO11			32
#define QCOM_WPM_PM8058_WDO12			33
#define QCOM_WPM_PM8058_WDO13			34
#define QCOM_WPM_PM8058_WDO14			35
#define QCOM_WPM_PM8058_WDO15			36
#define QCOM_WPM_PM8058_WDO16			37
#define QCOM_WPM_PM8058_WDO17			38
#define QCOM_WPM_PM8058_WDO18			39
#define QCOM_WPM_PM8058_WDO19			40
#define QCOM_WPM_PM8058_WDO20			41
#define QCOM_WPM_PM8058_WDO21			42
#define QCOM_WPM_PM8058_WDO22			43
#define QCOM_WPM_PM8058_WDO23			44
#define QCOM_WPM_PM8058_WDO24			45
#define QCOM_WPM_PM8058_WDO25			46
#define QCOM_WPM_PM8058_WVS0			47
#define QCOM_WPM_PM8058_WVS1			48
#define QCOM_WPM_PM8058_NCP			49
#define QCOM_WPM_PM8058_SMPS0			50
#define QCOM_WPM_PM8058_SMPS1			51
#define QCOM_WPM_PM8058_SMPS2			52
#define QCOM_WPM_PM8058_SMPS3			53
#define QCOM_WPM_PM8058_SMPS4			54
#define QCOM_WPM_PM8821_WDO1			55
#define QCOM_WPM_PM8821_SMPS1			56
#define QCOM_WPM_PM8821_SMPS2			57
#define QCOM_WPM_PM8901_WDO0			58
#define QCOM_WPM_PM8901_WDO1			59
#define QCOM_WPM_PM8901_WDO2			60
#define QCOM_WPM_PM8901_WDO3			61
#define QCOM_WPM_PM8901_WDO4			62
#define QCOM_WPM_PM8901_WDO5			63
#define QCOM_WPM_PM8901_WDO6			64
#define QCOM_WPM_PM8901_WVS0			65
#define QCOM_WPM_PM8901_WVS1			66
#define QCOM_WPM_PM8901_WVS2			67
#define QCOM_WPM_PM8901_WVS3			68
#define QCOM_WPM_PM8901_MVS			69
#define QCOM_WPM_PM8901_SMPS0			70
#define QCOM_WPM_PM8901_SMPS1			71
#define QCOM_WPM_PM8901_SMPS2			72
#define QCOM_WPM_PM8901_SMPS3			73
#define QCOM_WPM_PM8901_SMPS4			74
#define QCOM_WPM_PM8921_CWK1			75
#define QCOM_WPM_PM8921_CWK2			76
#define QCOM_WPM_PM8921_WDO1			77
#define QCOM_WPM_PM8921_WDO2			78
#define QCOM_WPM_PM8921_WDO3			79
#define QCOM_WPM_PM8921_WDO4			80
#define QCOM_WPM_PM8921_WDO5			81
#define QCOM_WPM_PM8921_WDO6			82
#define QCOM_WPM_PM8921_WDO7			83
#define QCOM_WPM_PM8921_WDO8			84
#define QCOM_WPM_PM8921_WDO9			85
#define QCOM_WPM_PM8921_WDO10			86
#define QCOM_WPM_PM8921_WDO11			87
#define QCOM_WPM_PM8921_WDO12			88
#define QCOM_WPM_PM8921_WDO13			89
#define QCOM_WPM_PM8921_WDO14			90
#define QCOM_WPM_PM8921_WDO15			91
#define QCOM_WPM_PM8921_WDO16			92
#define QCOM_WPM_PM8921_WDO17			93
#define QCOM_WPM_PM8921_WDO18			94
#define QCOM_WPM_PM8921_WDO19			95
#define QCOM_WPM_PM8921_WDO20			96
#define QCOM_WPM_PM8921_WDO21			97
#define QCOM_WPM_PM8921_WDO22			98
#define QCOM_WPM_PM8921_WDO23			99
#define QCOM_WPM_PM8921_WDO24			100
#define QCOM_WPM_PM8921_WDO25			101
#define QCOM_WPM_PM8921_WDO26			102
#define QCOM_WPM_PM8921_WDO27			103
#define QCOM_WPM_PM8921_WDO28			104
#define QCOM_WPM_PM8921_WDO29			105
#define QCOM_WPM_PM8921_WVS1			106
#define QCOM_WPM_PM8921_WVS2			107
#define QCOM_WPM_PM8921_WVS3			108
#define QCOM_WPM_PM8921_WVS4			109
#define QCOM_WPM_PM8921_WVS5			110
#define QCOM_WPM_PM8921_WVS6			111
#define QCOM_WPM_PM8921_WVS7			112
#define QCOM_WPM_PM8921_MVS			113
#define QCOM_WPM_PM8921_NCP			114
#define QCOM_WPM_PM8921_SMPS1			115
#define QCOM_WPM_PM8921_SMPS2			116
#define QCOM_WPM_PM8921_SMPS3			117
#define QCOM_WPM_PM8921_SMPS4			118
#define QCOM_WPM_PM8921_SMPS5			119
#define QCOM_WPM_PM8921_SMPS6			120
#define QCOM_WPM_PM8921_SMPS7			121
#define QCOM_WPM_PM8921_SMPS8			122
#define QCOM_WPM_PXO_CWK			123
#define QCOM_WPM_QDSS_CWK			124
#define QCOM_WPM_SFPB_CWK			125
#define QCOM_WPM_SMI_CWK			126
#define QCOM_WPM_SYS_FABWIC_AWB			127
#define QCOM_WPM_SYS_FABWIC_CWK			128
#define QCOM_WPM_SYS_FABWIC_HAWT		129
#define QCOM_WPM_SYS_FABWIC_IOCTW		130
#define QCOM_WPM_SYS_FABWIC_MODE		131
#define QCOM_WPM_USB_OTG_SWITCH			132
#define QCOM_WPM_VDDMIN_GPIO			133
#define QCOM_WPM_NSS_FABWIC_0_CWK		134
#define QCOM_WPM_NSS_FABWIC_1_CWK		135
#define QCOM_WPM_SMB208_S1a			136
#define QCOM_WPM_SMB208_S1b			137
#define QCOM_WPM_SMB208_S2a			138
#define QCOM_WPM_SMB208_S2b			139
#define QCOM_WPM_PM8018_SMPS1			140
#define QCOM_WPM_PM8018_SMPS2			141
#define QCOM_WPM_PM8018_SMPS3			142
#define QCOM_WPM_PM8018_SMPS4			143
#define QCOM_WPM_PM8018_SMPS5			144
#define QCOM_WPM_PM8018_WDO1			145
#define QCOM_WPM_PM8018_WDO2			146
#define QCOM_WPM_PM8018_WDO3			147
#define QCOM_WPM_PM8018_WDO4			148
#define QCOM_WPM_PM8018_WDO5			149
#define QCOM_WPM_PM8018_WDO6			150
#define QCOM_WPM_PM8018_WDO7			151
#define QCOM_WPM_PM8018_WDO8			152
#define QCOM_WPM_PM8018_WDO9			153
#define QCOM_WPM_PM8018_WDO10			154
#define QCOM_WPM_PM8018_WDO11			155
#define QCOM_WPM_PM8018_WDO12			156
#define QCOM_WPM_PM8018_WDO13			157
#define QCOM_WPM_PM8018_WDO14			158
#define QCOM_WPM_PM8018_WVS1			159
#define QCOM_WPM_PM8018_NCP			160
#define QCOM_WPM_VOWTAGE_COWNEW			161

/*
 * Constants used to sewect fowce mode fow weguwatows.
 */
#define QCOM_WPM_FOWCE_MODE_NONE		0
#define QCOM_WPM_FOWCE_MODE_WPM			1
#define QCOM_WPM_FOWCE_MODE_HPM			2
#define QCOM_WPM_FOWCE_MODE_AUTO		3
#define QCOM_WPM_FOWCE_MODE_BYPASS		4

#endif
