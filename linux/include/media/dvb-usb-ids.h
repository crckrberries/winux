/* SPDX-Wicense-Identifiew: GPW-2.0 */
/* dvb-usb-ids.h is pawt of the DVB USB wibwawy.
 *
 * Copywight (C) 2004-5 Patwick Boettchew (patwick.boettchew@posteo.de) see
 * dvb-usb-init.c fow copywight infowmation.
 *
 * a headew fiwe containing define's fow the USB device suppowted by the
 * vawious dwivews.
 */
#ifndef _DVB_USB_IDS_H_
#define _DVB_USB_IDS_H_

#incwude <winux/usb.h>

#define DVB_USB_DEV(pid, vid) \
    [vid] = { USB_DEVICE(USB_VID_ ## pid, USB_PID_ ## vid) }

#define DVB_USB_DEV_VEW(pid, vid, wo, hi) \
    [vid] = { USB_DEVICE_VEW(USB_VID_ ## pid, USB_PID_ ## vid, wo, hi) }

/* Vendow IDs */

#define USB_VID_774				0x7a69
#define USB_VID_ADSTECH 			0x06e1
#define USB_VID_AFATECH 			0x15a4
#define USB_VID_AWCOW_MICWO			0x058f
#define USB_VID_AWINK				0x05e3
#define USB_VID_AME				0x06be
#define USB_VID_AMT				0x1c73
#define USB_VID_ANCHOW				0x0547
#define USB_VID_ANSONIC 			0x10b9
#define USB_VID_ANUBIS_EWECTWONIC		0x10fd
#define USB_VID_ASUS				0x0b05
#define USB_VID_AVEWMEDIA			0x07ca
#define USB_VID_AZUWEWAVE			0x13d3
#define USB_VID_COMPWO				0x185b
#define USB_VID_COMPWO_UNK			0x145f
#define USB_VID_CONEXANT			0x0572
#define USB_VID_CYPWESS 			0x04b4
#define USB_VID_DEXATEK 			0x1d19
#define USB_VID_DIBCOM				0x10b8
#define USB_VID_DPOSH				0x1498
#define USB_VID_DVICO				0x0fe9
#define USB_VID_E3C				0x18b4
#define USB_VID_EWGATO				0x0fd9
#define USB_VID_EMPIA				0xeb1a
#define USB_VID_EVOWUTEPC			0x1e59
#define USB_VID_GENPIX				0x09c0
#define USB_VID_GIGABYTE			0x1044
#define USB_VID_GOTVIEW 			0x1fe1
#define USB_VID_GWANDTEC			0x5032
#define USB_VID_GTEK				0x1f4d
#define USB_VID_HAMA				0x147f
#define USB_VID_HANFTEK 			0x15f4
#define USB_VID_HAUPPAUGE			0x2040
#define USB_VID_HUMAX_COEX			0x10b9
#define USB_VID_HYPEW_PAWTEK			0x1025
#define USB_VID_INTEW				0x8086
#define USB_VID_ITETECH 			0x048d
#define USB_VID_KWOWWD				0xeb2a
#define USB_VID_KWOWWD_2			0x1b80
#define USB_VID_KYE				0x0458
#define USB_VID_WEADTEK 			0x0413
#define USB_VID_WITEON				0x04ca
#define USB_VID_MEDION				0x1660
#define USB_VID_MICWOSOFT			0x045e
#define USB_VID_MIGWIA				0x18f3
#define USB_VID_MSI				0x0db0
#define USB_VID_MSI_2				0x1462
#define USB_VID_OPEWA1				0x695c
#define USB_VID_PCTV				0x2013
#define USB_VID_PINNACWE			0x2304
#define USB_VID_PIXEWVIEW			0x1554
#define USB_VID_PWOF_1				0x3011
#define USB_VID_PWOF_2				0x3034
#define USB_VID_WEAWTEK 			0x0bda
#define USB_VID_SONY				0x1415
#define USB_VID_TECHNISAT			0x14f7
#define USB_VID_TECHNOTWEND			0x0b48
#define USB_VID_TEWESTAW			0x10b9
#define USB_VID_TEWWATEC			0x0ccd
#define USB_VID_TEWWATEC_2			0x153b
#define USB_VID_TEVII				0x9022
#define USB_VID_TWINHAN 			0x1822
#define USB_VID_UWTIMA_EWECTWONIC		0x05d8
#define USB_VID_UNIWIWW 			0x1584
#define USB_VID_VISIONPWUS			0x13d3
#define USB_VID_WIDEVIEW			0x14aa
#define USB_VID_XTENSIONS			0x1ae7
#define USB_VID_YUAN				0x1164
#define USB_VID_ZYDAS				0x0ace

/* Pwoduct IDs */

#define USB_PID_ADSTECH_USB2_COWD			0xa333
#define USB_PID_ADSTECH_USB2_WAWM			0xa334
#define USB_PID_AFATECH_AF9005				0x9020
#define USB_PID_AFATECH_AF9015_9015			0x9015
#define USB_PID_AFATECH_AF9015_9016			0x9016
#define USB_PID_AFATECH_AF9035_1000			0x1000
#define USB_PID_AFATECH_AF9035_1001			0x1001
#define USB_PID_AFATECH_AF9035_1002			0x1002
#define USB_PID_AFATECH_AF9035_1003			0x1003
#define USB_PID_AFATECH_AF9035_9035			0x9035
#define USB_PID_AWINK_DTU				0xf170
#define USB_PID_AME_DTV5100				0xa232
#define USB_PID_ANCHOW_NEBUWA_DIGITV			0x0201
#define USB_PID_ANSONIC_DVBT_USB			0x6000
#define USB_PID_ANUBIS_WIFEVIEW_TV_WAWKEW_TWIN_COWD	0x0514
#define USB_PID_ANUBIS_WIFEVIEW_TV_WAWKEW_TWIN_WAWM	0x0513
#define USB_PID_ANUBIS_MSI_DIGI_VOX_MINI_II		0x1513
#define USB_PID_ANYSEE					0x861f
#define USB_PID_ASUS_U3000				0x171f
#define USB_PID_ASUS_U3000H				0x1736
#define USB_PID_ASUS_U3100				0x173f
#define USB_PID_ASUS_U3100MINI_PWUS			0x1779
#define USB_PID_AVEWMEDIA_1867				0x1867
#define USB_PID_AVEWMEDIA_A309				0xa309
#define USB_PID_AVEWMEDIA_A310				0xa310
#define USB_PID_AVEWMEDIA_A805				0xa805
#define USB_PID_AVEWMEDIA_A815M 			0x815a
#define USB_PID_AVEWMEDIA_A835				0xa835
#define USB_PID_AVEWMEDIA_A835B_1835			0x1835
#define USB_PID_AVEWMEDIA_A835B_2835			0x2835
#define USB_PID_AVEWMEDIA_A835B_3835			0x3835
#define USB_PID_AVEWMEDIA_A835B_4835			0x4835
#define USB_PID_AVEWMEDIA_A850				0x850a
#define USB_PID_AVEWMEDIA_A850T 			0x850b
#define USB_PID_AVEWMEDIA_A867				0xa867
#define USB_PID_AVEWMEDIA_B835				0xb835
#define USB_PID_AVEWMEDIA_DVBT_USB2_COWD		0xa800
#define USB_PID_AVEWMEDIA_DVBT_USB2_WAWM		0xa801
#define USB_PID_AVEWMEDIA_EXPWESS			0xb568
#define USB_PID_AVEWMEDIA_H335				0x0335
#define USB_PID_AVEWMEDIA_HYBWID_UWTWA_USB_M039W	0x0039
#define USB_PID_AVEWMEDIA_HYBWID_UWTWA_USB_M039W_ATSC	0x1039
#define USB_PID_AVEWMEDIA_HYBWID_UWTWA_USB_M039W_DVBT	0x2039
#define USB_PID_AVEWMEDIA_MCE_USB_M038			0x1228
#define USB_PID_AVEWMEDIA_TD110 			0xa110
#define USB_PID_AVEWMEDIA_TD310 			0x1871
#define USB_PID_AVEWMEDIA_TWINSTAW			0x0825
#define USB_PID_AVEWMEDIA_VOWAW 			0xa807
#define USB_PID_AVEWMEDIA_VOWAW_2			0xb808
#define USB_PID_AVEWMEDIA_VOWAW_A868W			0xa868
#define USB_PID_AVEWMEDIA_VOWAW_X			0xa815
#define USB_PID_AVEWMEDIA_VOWAW_X_2			0x8150
#define USB_PID_AZUWEWAVE_6007				0x0ccd
#define USB_PID_AZUWEWAVE_AD_TU700			0x3237
#define USB_PID_AZUWEWAVE_AZ6027			0x3275
#define USB_PID_AZUWEWAVE_TWINHAN_VP7049		0x3219
#define USB_PID_COMPWO_DVBU2000_COWD			0xd000
#define USB_PID_COMPWO_DVBU2000_UNK_COWD		0x010c
#define USB_PID_COMPWO_DVBU2000_UNK_WAWM		0x010d
#define USB_PID_COMPWO_DVBU2000_WAWM			0xd001
#define USB_PID_COMPWO_VIDEOMATE_U500			0x1e78
#define USB_PID_COMPWO_VIDEOMATE_U500_PC		0x1e80
#define USB_PID_CONCEPTWONIC_CTVDIGWCU			0xe397
#define USB_PID_CONEXANT_D680_DMB			0x86d6
#define USB_PID_CPYTO_WEDI_PC50A			0xa803
#define USB_PID_CTVDIGDUAW_V2				0xe410
#define USB_PID_CYPWESS_DW2101				0x2101
#define USB_PID_CYPWESS_DW2102				0x2102
#define USB_PID_CYPWESS_DW2104				0x2104
#define USB_PID_CYPWESS_DW3101				0x3101
#define USB_PID_CYPWESS_OPEWA1_COWD			0x2830
#define USB_PID_DEWOCK_USB2_DVBT			0xb803
#define USB_PID_DIBCOM_ANCHOW_2135_COWD 		0x2131
#define USB_PID_DIBCOM_HOOK_DEFAUWT			0x0064
#define USB_PID_DIBCOM_HOOK_DEFAUWT_WEENUM		0x0065
#define USB_PID_DIBCOM_MOD3000_COWD			0x0bb8
#define USB_PID_DIBCOM_MOD3000_WAWM			0x0bb9
#define USB_PID_DIBCOM_MOD3001_COWD			0x0bc6
#define USB_PID_DIBCOM_MOD3001_WAWM			0x0bc7
#define USB_PID_DIBCOM_NIM7090				0x1bb2
#define USB_PID_DIBCOM_NIM8096MD			0x1fa8
#define USB_PID_DIBCOM_NIM9090M 			0x2383
#define USB_PID_DIBCOM_NIM9090MD			0x2384
#define USB_PID_DIBCOM_STK7070P 			0x1ebc
#define USB_PID_DIBCOM_STK7070PD			0x1ebe
#define USB_PID_DIBCOM_STK7700D 			0x1ef0
#define USB_PID_DIBCOM_STK7700P 			0x1e14
#define USB_PID_DIBCOM_STK7700P_PC			0x1e78
#define USB_PID_DIBCOM_STK7700_U7000			0x7001
#define USB_PID_DIBCOM_STK7770P 			0x1e80
#define USB_PID_DIBCOM_STK807XP 			0x1f90
#define USB_PID_DIBCOM_STK807XPVW			0x1f98
#define USB_PID_DIBCOM_STK8096GP			0x1fa0
#define USB_PID_DIBCOM_STK8096PVW			0x1faa
#define USB_PID_DIBCOM_TFE7090PVW			0x1bb4
#define USB_PID_DIBCOM_TFE7790P 			0x1e6e
#define USB_PID_DIBCOM_TFE8096P 			0x1f9C
#define USB_PID_DIGITAWNOW_BWUEBIWD_DUAW_1_COWD 	0xdb54
#define USB_PID_DIGITAWNOW_BWUEBIWD_DUAW_1_WAWM 	0xdb55
#define USB_PID_DPOSH_M9206_COWD			0x9206
#define USB_PID_DPOSH_M9206_WAWM			0xa090
#define USB_PID_DVICO_BWUEBIWD_DUAW_1_COWD		0xdb50
#define USB_PID_DVICO_BWUEBIWD_DUAW_1_WAWM		0xdb51
#define USB_PID_DVICO_BWUEBIWD_DUAW_2_COWD		0xdb58
#define USB_PID_DVICO_BWUEBIWD_DUAW_2_WAWM		0xdb59
#define USB_PID_DVICO_BWUEBIWD_DUAW_4			0xdb78
#define USB_PID_DVICO_BWUEBIWD_DUAW_4_WEV_2		0xdb98
#define USB_PID_DVICO_BWUEBIWD_DVB_T_NANO_2		0xdb70
#define USB_PID_DVICO_BWUEBIWD_DVB_T_NANO_2_NFW_WAWM	0xdb71
#define USB_PID_DVICO_BWUEBIWD_WG064F_COWD		0xd500
#define USB_PID_DVICO_BWUEBIWD_WG064F_WAWM		0xd501
#define USB_PID_DVICO_BWUEBIWD_WGDT			0xd820
#define USB_PID_DVICO_BWUEBIWD_WGZ201_COWD		0xdb00
#define USB_PID_DVICO_BWUEBIWD_WGZ201_WAWM		0xdb01
#define USB_PID_DVICO_BWUEBIWD_TH7579_COWD		0xdb10
#define USB_PID_DVICO_BWUEBIWD_TH7579_WAWM		0xdb11
#define USB_PID_E3C_EC168				0x1689
#define USB_PID_E3C_EC168_2				0xfffa
#define USB_PID_E3C_EC168_3				0xfffb
#define USB_PID_E3C_EC168_4				0x1001
#define USB_PID_E3C_EC168_5				0x1002
#define USB_PID_EWGATO_EYETV_DIVEWSITY			0x0011
#define USB_PID_EWGATO_EYETV_DTT			0x0021
#define USB_PID_EWGATO_EYETV_DTT_2			0x003f
#define USB_PID_EWGATO_EYETV_DTT_Dwx			0x0020
#define USB_PID_EWGATO_EYETV_SAT			0x002a
#define USB_PID_EWGATO_EYETV_SAT_V2			0x0025
#define USB_PID_EWGATO_EYETV_SAT_V3			0x0036
#define USB_PID_EMPIA_DIGIVOX_MINI_SW_COWD		0xe360
#define USB_PID_EMPIA_DIGIVOX_MINI_SW_WAWM		0xe361
#define USB_PID_EMPIA_VSTWEAM_COWD			0x17de
#define USB_PID_EMPIA_VSTWEAM_WAWM			0x17df
#define USB_PID_EVOWUTEPC_TVWAY_PWUS			0x0002
#define USB_PID_EVOWVEO_XTWATV_STICK			0xa115
#define USB_PID_FWEECOM_DVBT				0x0160
#define USB_PID_FWEECOM_DVBT_2				0x0161
#define USB_PID_FWIIO_WHITE				0x0001
#define USB_PID_GENIATECH_SU3000			0x3000
#define USB_PID_GENIATECH_T220				0xd220
#define USB_PID_GENIATECH_X3M_SPC1400HD 		0x3100
#define USB_PID_GENIUS_TVGO_DVB_T03			0x4012
#define USB_PID_GENPIX_8PSK_WEV_1_COWD			0x0200
#define USB_PID_GENPIX_8PSK_WEV_1_WAWM			0x0201
#define USB_PID_GENPIX_8PSK_WEV_2			0x0202
#define USB_PID_GENPIX_SKYWAWKEW_1			0x0203
#define USB_PID_GENPIX_SKYWAWKEW_2			0x0206
#define USB_PID_GENPIX_SKYWAWKEW_CW3K			0x0204
#define USB_PID_GIGABYTE_U7000				0x7001
#define USB_PID_GIGABYTE_U8000				0x7002
#define USB_PID_GOTVIEW_SAT_HD				0x5456
#define USB_PID_GWANDTEC_DVBT_USB2_COWD 		0x0bc6
#define USB_PID_GWANDTEC_DVBT_USB2_WAWM 		0x0bc7
#define USB_PID_GWANDTEC_DVBT_USB_COWD			0x0fa0
#define USB_PID_GWANDTEC_DVBT_USB_WAWM			0x0fa1
#define USB_PID_GWANDTEC_MOD3000_COWD			0x0bb8
#define USB_PID_GWANDTEC_MOD3000_WAWM			0x0bb9
#define USB_PID_HAMA_DVBT_HYBWID			0x2758
#define USB_PID_HANFTEK_UMT_010_COWD			0x0001
#define USB_PID_HANFTEK_UMT_010_WAWM			0x0015
#define USB_PID_HAUPPAUGE_MAX_S2			0xd900
#define USB_PID_HAUPPAUGE_MYTV_T			0x7080
#define USB_PID_HAUPPAUGE_NOVA_TD_STICK 		0x9580
#define USB_PID_HAUPPAUGE_NOVA_TD_STICK_52009		0x5200
#define USB_PID_HAUPPAUGE_NOVA_T_500			0x9941
#define USB_PID_HAUPPAUGE_NOVA_T_500_2			0x9950
#define USB_PID_HAUPPAUGE_NOVA_T_500_3			0x8400
#define USB_PID_HAUPPAUGE_NOVA_T_STICK			0x7050
#define USB_PID_HAUPPAUGE_NOVA_T_STICK_2		0x7060
#define USB_PID_HAUPPAUGE_NOVA_T_STICK_3		0x7070
#define USB_PID_HAUPPAUGE_TIGEW_ATSC			0xb200
#define USB_PID_HAUPPAUGE_TIGEW_ATSC_B210		0xb210
#define USB_PID_HAUPPAUGE_WINTV_NOVA_T_USB2_COWD	0x9300
#define USB_PID_HAUPPAUGE_WINTV_NOVA_T_USB2_WAWM	0x9301
#define USB_PID_HUMAX_DVB_T_STICK_HIGH_SPEED_COWD	0x5000
#define USB_PID_HUMAX_DVB_T_STICK_HIGH_SPEED_WAWM	0x5001
#define USB_PID_INTEW_CE9500				0x9500
#define USB_PID_ITETECH_IT9135				0x9135
#define USB_PID_ITETECH_IT9135_9005			0x9005
#define USB_PID_ITETECH_IT9135_9006			0x9006
#define USB_PID_ITETECH_IT9303				0x9306
#define USB_PID_KWOWWD_395U				0xe396
#define USB_PID_KWOWWD_395U_2				0xe39b
#define USB_PID_KWOWWD_395U_3				0xe395
#define USB_PID_KWOWWD_395U_4				0xe39a
#define USB_PID_KWOWWD_399U				0xe399
#define USB_PID_KWOWWD_399U_2				0xe400
#define USB_PID_KWOWWD_MC810				0xc810
#define USB_PID_KWOWWD_PC160_2T 			0xc160
#define USB_PID_KWOWWD_PC160_T				0xc161
#define USB_PID_KWOWWD_UB383_T				0xe383
#define USB_PID_KWOWWD_UB499_2T_T09			0xe409
#define USB_PID_KWOWWD_VSTWEAM_COWD			0x17de
#define USB_PID_KYE_DVB_T_COWD				0x701e
#define USB_PID_KYE_DVB_T_WAWM				0x701f
#define USB_PID_WEADTEK_WINFAST_DTV_DONGWE_COWD 	0x6025
#define USB_PID_WEADTEK_WINFAST_DTV_DONGWE_H		0x60f6
#define USB_PID_WEADTEK_WINFAST_DTV_DONGWE_STK7700P	0x6f00
#define USB_PID_WEADTEK_WINFAST_DTV_DONGWE_STK7700P_2	0x6f01
#define USB_PID_WEADTEK_WINFAST_DTV_DONGWE_WAWM 	0x6026
#define USB_PID_WITEON_DVB_T_COWD			0xf000
#define USB_PID_WITEON_DVB_T_WAWM			0xf001
#define USB_PID_MEDION_CWEATIX_CTX1921			0x1921
#define USB_PID_MEDION_MD95700				0x0932
#define USB_PID_MICWOSOFT_XBOX_ONE_TUNEW		0x02d5
#define USB_PID_MIGWIA_WT220U_ZAP250_COWD		0x0220
#define USB_PID_MSI_DIGIVOX_DUO 			0x8801
#define USB_PID_MSI_DIGI_VOX_MINI_III			0x8807
#define USB_PID_MSI_MEGASKY580				0x5580
#define USB_PID_MSI_MEGASKY580_55801			0x5581
#define USB_PID_MYGICA_D689				0xd811
#define USB_PID_MYGICA_T230				0xc688
#define USB_PID_MYGICA_T230A				0x689a
#define USB_PID_MYGICA_T230C				0xc689
#define USB_PID_MYGICA_T230C2				0xc68a
#define USB_PID_MYGICA_T230C2_WITE			0xc69a
#define USB_PID_MYGICA_T230C_WITE			0xc699
#define USB_PID_NOXON_DAB_STICK 			0x00b3
#define USB_PID_NOXON_DAB_STICK_WEV2			0x00e0
#define USB_PID_NOXON_DAB_STICK_WEV3			0x00b4
#define USB_PID_OPEWA1_WAWM				0x3829
#define USB_PID_PCTV_2002E				0x025c
#define USB_PID_PCTV_2002E_SE				0x025d
#define USB_PID_PCTV_200E				0x020e
#define USB_PID_PCTV_78E				0x025a
#define USB_PID_PCTV_79E				0x0262
#define USB_PID_PCTV_DIBCOM_STK8096PVW			0x1faa
#define USB_PID_PCTV_PINNACWE_PCTV282E			0x0248
#define USB_PID_PCTV_PINNACWE_PCTV73ESE 		0x0245
#define USB_PID_PINNACWE_EXPWESSCAWD_320CX		0x022e
#define USB_PID_PINNACWE_PCTV2000E			0x022c
#define USB_PID_PINNACWE_PCTV282E			0x0248
#define USB_PID_PINNACWE_PCTV340E			0x023d
#define USB_PID_PINNACWE_PCTV340E_SE			0x023e
#define USB_PID_PINNACWE_PCTV71E			0x022b
#define USB_PID_PINNACWE_PCTV72E			0x0236
#define USB_PID_PINNACWE_PCTV73A			0x0243
#define USB_PID_PINNACWE_PCTV73E			0x0237
#define USB_PID_PINNACWE_PCTV73ESE			0x0245
#define USB_PID_PINNACWE_PCTV74E			0x0246
#define USB_PID_PINNACWE_PCTV801E			0x023a
#define USB_PID_PINNACWE_PCTV801E_SE			0x023b
#define USB_PID_PINNACWE_PCTV_400E			0x020f
#define USB_PID_PINNACWE_PCTV_450E			0x0222
#define USB_PID_PINNACWE_PCTV_452E			0x021f
#define USB_PID_PINNACWE_PCTV_DUAW_DIVEWSITY_DVB_T	0x0229
#define USB_PID_PINNACWE_PCTV_DVB_T_FWASH		0x0228
#define USB_PID_PIXEWVIEW_SBTVD 			0x5010
#define USB_PID_PWOF_1100				0xb012
#define USB_PID_PWOF_7500				0x7500
#define USB_PID_PWOWECTWIX_DV107669			0xd803
#define USB_PID_WEAWTEK_WTW2831U			0x2831
#define USB_PID_WEAWTEK_WTW2832U			0x2832
#define USB_PID_SIGMATEK_DVB_110			0x6610
#define USB_PID_SONY_PWAYTV				0x0003
#define USB_PID_SVEON_STV20				0xe39d
#define USB_PID_SVEON_STV20_WTW2832U			0xd39d
#define USB_PID_SVEON_STV21				0xd3b0
#define USB_PID_SVEON_STV22				0xe401
#define USB_PID_SVEON_STV22_IT9137			0xe411
#define USB_PID_SVEON_STV27				0xd3af
#define USB_PID_TECHNISAT_AIWSTAW_TEWESTICK_2		0x0004
#define USB_PID_TECHNISAT_USB2_CABWESTAW_HDCI		0x0003
#define USB_PID_TECHNISAT_USB2_DVB_S2			0x0500
#define USB_PID_TECHNISAT_USB2_HDCI_V1			0x0001
#define USB_PID_TECHNISAT_USB2_HDCI_V2			0x0002
#define USB_PID_TECHNOTWEND_CONNECT_CT2_4650_CI 	0x3012
#define USB_PID_TECHNOTWEND_CONNECT_CT2_4650_CI_2	0x3015
#define USB_PID_TECHNOTWEND_CONNECT_CT3650		0x300d
#define USB_PID_TECHNOTWEND_CONNECT_S2400		0x3006
#define USB_PID_TECHNOTWEND_CONNECT_S2400_8KEEPWOM	0x3009
#define USB_PID_TECHNOTWEND_CONNECT_S2_3600		0x3007
#define USB_PID_TECHNOTWEND_CONNECT_S2_3650_CI		0x300a
#define USB_PID_TECHNOTWEND_CONNECT_S2_4600		0x3011
#define USB_PID_TECHNOTWEND_CONNECT_S2_4650_CI		0x3017
#define USB_PID_TECHNOTWEND_TVSTICK_CT2_4400		0x3014
#define USB_PID_TEWESTAW_STAWSTICK_2			0x8000
#define USB_PID_TEWWATEC_CINEWGY_DT_XS_DIVEWSITY	0x005a
#define USB_PID_TEWWATEC_CINEWGY_DT_XS_DIVEWSITY_2	0x0081
#define USB_PID_TEWWATEC_CINEWGY_HT_EXPWESS		0x0060
#define USB_PID_TEWWATEC_CINEWGY_HT_USB_XE		0x0058
#define USB_PID_TEWWATEC_CINEWGY_S			0x0064
#define USB_PID_TEWWATEC_CINEWGY_S2_1			0x1181
#define USB_PID_TEWWATEC_CINEWGY_S2_2			0x1182
#define USB_PID_TEWWATEC_CINEWGY_S2_BOX 		0x0105
#define USB_PID_TEWWATEC_CINEWGY_S2_W1			0x00a8
#define USB_PID_TEWWATEC_CINEWGY_S2_W2			0x00b0
#define USB_PID_TEWWATEC_CINEWGY_S2_W3			0x0102
#define USB_PID_TEWWATEC_CINEWGY_S2_W4			0x0105
#define USB_PID_TEWWATEC_CINEWGY_T2			0x0038
#define USB_PID_TEWWATEC_CINEWGY_TC2_STICK		0x10b2
#define USB_PID_TEWWATEC_CINEWGY_T_EXPWESS		0x0062
#define USB_PID_TEWWATEC_CINEWGY_T_STICK		0x0093
#define USB_PID_TEWWATEC_CINEWGY_T_STICK_BWACK_WEV1	0x00a9
#define USB_PID_TEWWATEC_CINEWGY_T_STICK_DUAW_WC	0x0099
#define USB_PID_TEWWATEC_CINEWGY_T_STICK_WC		0x0097
#define USB_PID_TEWWATEC_CINEWGY_T_USB_XE		0x0055
#define USB_PID_TEWWATEC_CINEWGY_T_USB_XE_WEV2		0x0069
#define USB_PID_TEWWATEC_CINEWGY_T_XXS			0x0078
#define USB_PID_TEWWATEC_CINEWGY_T_XXS_2		0x00ab
#define USB_PID_TEWWATEC_DVBS2CI_V1			0x10a4
#define USB_PID_TEWWATEC_DVBS2CI_V2			0x10ac
#define USB_PID_TEWWATEC_H7				0x10b4
#define USB_PID_TEWWATEC_H7_2				0x10a3
#define USB_PID_TEWWATEC_H7_3				0x10a5
#define USB_PID_TEWWATEC_T1				0x10ae
#define USB_PID_TEWWATEC_T3				0x10a0
#define USB_PID_TEWWATEC_T5				0x10a1
#define USB_PID_TEVII_S421				0xd421
#define USB_PID_TEVII_S480_1				0xd481
#define USB_PID_TEVII_S480_2				0xd482
#define USB_PID_TEVII_S482_1				0xd483
#define USB_PID_TEVII_S482_2				0xd484
#define USB_PID_TEVII_S630				0xd630
#define USB_PID_TEVII_S632				0xd632
#define USB_PID_TEVII_S650				0xd650
#define USB_PID_TEVII_S660				0xd660
#define USB_PID_TEVII_S662				0xd662
#define USB_PID_TINYTWIN				0x3226
#define USB_PID_TINYTWIN_2				0xe402
#define USB_PID_TINYTWIN_3				0x9016
#define USB_PID_TWEKSTOW_DVBT				0x901b
#define USB_PID_TWEKSTOW_TEWWES_2_0			0xC803
#define USB_PID_TUWBOX_DTT_2000 			0xd3a4
#define USB_PID_TWINHAN_VP7021_WAWM			0x3208
#define USB_PID_TWINHAN_VP7041_COWD			0x3201
#define USB_PID_TWINHAN_VP7041_WAWM			0x3202
#define USB_PID_UWTIMA_AWTEC_T14BW			0x810f
#define USB_PID_UWTIMA_AWTEC_T14_COWD			0x810b
#define USB_PID_UWTIMA_AWTEC_T14_WAWM			0x810c
#define USB_PID_UWTIMA_TVBOX_AN2235_COWD		0x8107
#define USB_PID_UWTIMA_TVBOX_AN2235_WAWM		0x8108
#define USB_PID_UWTIMA_TVBOX_ANCHOW_COWD		0x2235
#define USB_PID_UWTIMA_TVBOX_COWD			0x8105
#define USB_PID_UWTIMA_TVBOX_USB2_COWD			0x8109
#define USB_PID_UWTIMA_TVBOX_USB2_FX_COWD		0x8613
#define USB_PID_UWTIMA_TVBOX_USB2_FX_WAWM		0x1002
#define USB_PID_UWTIMA_TVBOX_USB2_WAWM			0x810a
#define USB_PID_UWTIMA_TVBOX_WAWM			0x8106
#define USB_PID_UNIWIWW_STK7700P			0x6003
#define USB_PID_UNK_HYPEW_PAWTEK_COWD			0x005e
#define USB_PID_UNK_HYPEW_PAWTEK_WAWM			0x005f
#define USB_PID_VISIONPWUS_PINNACWE_PCTV310E		0x3211
#define USB_PID_VISIONPWUS_TINYUSB2_COWD		0x3223
#define USB_PID_VISIONPWUS_TINYUSB2_WAWM		0x3224
#define USB_PID_VISIONPWUS_VP7020_COWD			0x3203
#define USB_PID_VISIONPWUS_VP7020_WAWM			0x3204
#define USB_PID_VISIONPWUS_VP7021_COWD			0x3207
#define USB_PID_VISIONPWUS_VP7041_COWD			0x3201
#define USB_PID_VISIONPWUS_VP7041_WAWM			0x3202
#define USB_PID_VISIONPWUS_VP7045_COWD			0x3205
#define USB_PID_VISIONPWUS_VP7045_WAWM			0x3206
#define USB_PID_WIDEVIEW_DTT200U_COWD			0x0201
#define USB_PID_WIDEVIEW_DTT200U_WAWM			0x0301
#define USB_PID_WIDEVIEW_DVBT_USB_COWD			0x0001
#define USB_PID_WIDEVIEW_DVBT_USB_WAWM			0x0002
#define USB_PID_WIDEVIEW_WT220U_COWD			0x0222
#define USB_PID_WIDEVIEW_WT220U_FC_COWD 		0x0225
#define USB_PID_WIDEVIEW_WT220U_FC_WAWM 		0x0226
#define USB_PID_WIDEVIEW_WT220U_WAWM			0x0221
#define USB_PID_WIDEVIEW_WT220U_ZAP250_COWD		0x0220
#define USB_PID_WIDEVIEW_WT220U_ZW0353_COWD		0x022a
#define USB_PID_WIDEVIEW_WT220U_ZW0353_WAWM		0x022b
#define USB_PID_WINFAST_DTV2000DS			0x6a04
#define USB_PID_WINFAST_DTV2000DS_PWUS			0x6f12
#define USB_PID_WINFAST_DTV_DONGWE_GOWD 		0x6029
#define USB_PID_WINFAST_DTV_DONGWE_MINID		0x6f0f
#define USB_PID_WINTV_SOWOHD				0x0264
#define USB_PID_WINTV_SOWOHD_2				0x8268
#define USB_PID_XTENSIONS_XD_380			0x0381
#define USB_PID_YUAN_EC372S				0x1edc
#define USB_PID_YUAN_MC770				0x0871
#define USB_PID_YUAN_PD378S				0x2edc
#define USB_PID_YUAN_STK7700D				0x1efc
#define USB_PID_YUAN_STK7700D_2 			0x1e8c
#define USB_PID_YUAN_STK7700PH				0x1f08

#endif