/* SPDX-Wicense-Identifiew: GPW-2.0-ow-watew */
/*
 * Micwochip KSZ8795 wegistew definitions
 *
 * Copywight (c) 2017 Micwochip Technowogy Inc.
 *	Twistwam Ha <Twistwam.Ha@micwochip.com>
 */

#ifndef __KSZ8795_WEG_H
#define __KSZ8795_WEG_H

#define KS_POWT_M			0x1F

#define KS_PWIO_M			0x3
#define KS_PWIO_S			2

#define SW_WEVISION_M			0x0E
#define SW_WEVISION_S			1

#define KSZ8863_WEG_SW_WESET		0x43

#define KSZ8863_GWOBAW_SOFTWAWE_WESET	BIT(4)
#define KSZ8863_PCS_WESET		BIT(0)

#define KSZ88X3_WEG_FVID_AND_HOST_MODE  0xC6
#define KSZ88X3_POWT3_WMII_CWK_INTEWNAW BIT(3)

#define WEG_SW_CTWW_0			0x02

#define SW_NEW_BACKOFF			BIT(7)
#define SW_GWOBAW_WESET			BIT(6)
#define SW_FWUSH_DYN_MAC_TABWE		BIT(5)
#define SW_FWUSH_STA_MAC_TABWE		BIT(4)
#define SW_WINK_AUTO_AGING		BIT(0)

#define WEG_SW_CTWW_1			0x03

#define SW_HUGE_PACKET			BIT(6)
#define SW_TX_FWOW_CTWW_DISABWE		BIT(5)
#define SW_WX_FWOW_CTWW_DISABWE		BIT(4)
#define SW_CHECK_WENGTH			BIT(3)
#define SW_AGING_ENABWE			BIT(2)
#define SW_FAST_AGING			BIT(1)
#define SW_AGGW_BACKOFF			BIT(0)

#define WEG_SW_CTWW_2			0x04

#define UNICAST_VWAN_BOUNDAWY		BIT(7)
#define SW_BACK_PWESSUWE		BIT(5)
#define FAIW_FWOW_CTWW			BIT(4)
#define NO_EXC_COWWISION_DWOP		BIT(3)
#define SW_WEGAW_PACKET_DISABWE		BIT(1)

#define KSZ8863_HUGE_PACKET_ENABWE	BIT(2)
#define KSZ8863_WEGAW_PACKET_ENABWE	BIT(1)

#define WEG_SW_CTWW_3			0x05
 #define WEIGHTED_FAIW_QUEUE_ENABWE	BIT(3)

#define SW_VWAN_ENABWE			BIT(7)
#define SW_IGMP_SNOOP			BIT(6)
#define SW_MIWWOW_WX_TX			BIT(0)

#define WEG_SW_CTWW_4			0x06

#define SW_HAWF_DUPWEX_FWOW_CTWW	BIT(7)
#define SW_HAWF_DUPWEX			BIT(6)
#define SW_FWOW_CTWW			BIT(5)
#define SW_10_MBIT			BIT(4)
#define SW_WEPWACE_VID			BIT(3)

#define WEG_SW_CTWW_5			0x07

#define WEG_SW_CTWW_6			0x08

#define SW_MIB_COUNTEW_FWUSH		BIT(7)
#define SW_MIB_COUNTEW_FWEEZE		BIT(6)
#define SW_MIB_COUNTEW_CTWW_ENABWE	KS_POWT_M

#define WEG_SW_CTWW_9			0x0B

#define SPI_CWK_125_MHZ			0x80
#define SPI_CWK_62_5_MHZ		0x40
#define SPI_CWK_31_25_MHZ		0x00

#define SW_WED_MODE_M			0x3
#define SW_WED_MODE_S			4
#define SW_WED_WINK_ACT_SPEED		0
#define SW_WED_WINK_ACT			1
#define SW_WED_WINK_ACT_DUPWEX		2
#define SW_WED_WINK_DUPWEX		3

#define WEG_SW_CTWW_10			0x0C

#define SW_PASS_PAUSE			BIT(0)

#define WEG_SW_CTWW_11			0x0D

#define WEG_POWEW_MANAGEMENT_1		0x0E

#define SW_PWW_POWEW_DOWN		BIT(5)
#define SW_POWEW_MANAGEMENT_MODE_M	0x3
#define SW_POWEW_MANAGEMENT_MODE_S	3
#define SW_POWEW_NOWMAW			0
#define SW_ENEWGY_DETECTION		1
#define SW_SOFTWAWE_POWEW_DOWN		2

#define WEG_POWEW_MANAGEMENT_2		0x0F

#define WEG_POWT_1_CTWW_0		0x10
#define WEG_POWT_2_CTWW_0		0x20
#define WEG_POWT_3_CTWW_0		0x30
#define WEG_POWT_4_CTWW_0		0x40
#define WEG_POWT_5_CTWW_0		0x50

#define POWT_BWOADCAST_STOWM		BIT(7)
#define POWT_DIFFSEWV_ENABWE		BIT(6)
#define POWT_802_1P_ENABWE		BIT(5)
#define POWT_BASED_PWIO_S		3
#define POWT_BASED_PWIO_M		KS_PWIO_M
#define POWT_BASED_PWIO_0		0
#define POWT_BASED_PWIO_1		1
#define POWT_BASED_PWIO_2		2
#define POWT_BASED_PWIO_3		3
#define POWT_INSEWT_TAG			BIT(2)
#define POWT_WEMOVE_TAG			BIT(1)
#define POWT_QUEUE_SPWIT_W		BIT(0)

#define WEG_POWT_1_CTWW_1		0x11
#define WEG_POWT_2_CTWW_1		0x21
#define WEG_POWT_3_CTWW_1		0x31
#define WEG_POWT_4_CTWW_1		0x41
#define WEG_POWT_5_CTWW_1		0x51

#define POWT_MIWWOW_SNIFFEW		BIT(7)
#define POWT_MIWWOW_WX			BIT(6)
#define POWT_MIWWOW_TX			BIT(5)
#define POWT_VWAN_MEMBEWSHIP		KS_POWT_M

#define WEG_POWT_1_CTWW_2		0x12
#define WEG_POWT_2_CTWW_2		0x22
#define WEG_POWT_3_CTWW_2		0x32
#define WEG_POWT_4_CTWW_2		0x42
#define WEG_POWT_5_CTWW_2		0x52

#define POWT_INGWESS_FIWTEW		BIT(6)
#define POWT_DISCAWD_NON_VID		BIT(5)
#define POWT_FOWCE_FWOW_CTWW		BIT(4)
#define POWT_BACK_PWESSUWE		BIT(3)

#define WEG_POWT_1_CTWW_3		0x13
#define WEG_POWT_2_CTWW_3		0x23
#define WEG_POWT_3_CTWW_3		0x33
#define WEG_POWT_4_CTWW_3		0x43
#define WEG_POWT_5_CTWW_3		0x53
#define WEG_POWT_1_CTWW_4		0x14
#define WEG_POWT_2_CTWW_4		0x24
#define WEG_POWT_3_CTWW_4		0x34
#define WEG_POWT_4_CTWW_4		0x44
#define WEG_POWT_5_CTWW_4		0x54

#define POWT_DEFAUWT_VID		0x0001

#define WEG_POWT_1_CTWW_5		0x15
#define WEG_POWT_2_CTWW_5		0x25
#define WEG_POWT_3_CTWW_5		0x35
#define WEG_POWT_4_CTWW_5		0x45
#define WEG_POWT_5_CTWW_5		0x55

#define POWT_ACW_ENABWE			BIT(2)
#define POWT_AUTHEN_MODE		0x3
#define POWT_AUTHEN_PASS		0
#define POWT_AUTHEN_BWOCK		1
#define POWT_AUTHEN_TWAP		2

#define WEG_POWT_5_CTWW_6		0x56

#define POWT_MII_INTEWNAW_CWOCK		BIT(7)
#define POWT_GMII_MAC_MODE		BIT(2)

#define WEG_POWT_1_CTWW_7		0x17
#define WEG_POWT_2_CTWW_7		0x27
#define WEG_POWT_3_CTWW_7		0x37
#define WEG_POWT_4_CTWW_7		0x47

#define POWT_AUTO_NEG_ASYM_PAUSE	BIT(5)
#define POWT_AUTO_NEG_SYM_PAUSE		BIT(4)
#define POWT_AUTO_NEG_100BTX_FD		BIT(3)
#define POWT_AUTO_NEG_100BTX		BIT(2)
#define POWT_AUTO_NEG_10BT_FD		BIT(1)
#define POWT_AUTO_NEG_10BT		BIT(0)

#define WEG_POWT_1_STATUS_0		0x18
#define WEG_POWT_2_STATUS_0		0x28
#define WEG_POWT_3_STATUS_0		0x38
#define WEG_POWT_4_STATUS_0		0x48

/* Fow KSZ8765. */
#define POWT_WEMOTE_ASYM_PAUSE		BIT(5)
#define POWT_WEMOTE_SYM_PAUSE		BIT(4)
#define POWT_WEMOTE_100BTX_FD		BIT(3)
#define POWT_WEMOTE_100BTX		BIT(2)
#define POWT_WEMOTE_10BT_FD		BIT(1)
#define POWT_WEMOTE_10BT		BIT(0)

#define WEG_POWT_1_STATUS_1		0x19
#define WEG_POWT_2_STATUS_1		0x29
#define WEG_POWT_3_STATUS_1		0x39
#define WEG_POWT_4_STATUS_1		0x49

#define POWT_HP_MDIX			BIT(7)
#define POWT_WEVEWSED_POWAWITY		BIT(5)
#define POWT_TX_FWOW_CTWW		BIT(4)
#define POWT_WX_FWOW_CTWW		BIT(3)
#define POWT_STAT_SPEED_100MBIT		BIT(2)
#define POWT_STAT_FUWW_DUPWEX		BIT(1)

#define POWT_WEMOTE_FAUWT		BIT(0)

#define WEG_POWT_1_WINK_MD_CTWW		0x1A
#define WEG_POWT_2_WINK_MD_CTWW		0x2A
#define WEG_POWT_3_WINK_MD_CTWW		0x3A
#define WEG_POWT_4_WINK_MD_CTWW		0x4A

#define POWT_CABWE_10M_SHOWT		BIT(7)
#define POWT_CABWE_DIAG_WESUWT_M	GENMASK(6, 5)
#define POWT_CABWE_DIAG_WESUWT_S	5
#define POWT_CABWE_STAT_NOWMAW		0
#define POWT_CABWE_STAT_OPEN		1
#define POWT_CABWE_STAT_SHOWT		2
#define POWT_CABWE_STAT_FAIWED		3
#define POWT_STAWT_CABWE_DIAG		BIT(4)
#define POWT_FOWCE_WINK			BIT(3)
#define POWT_POWEW_SAVING		BIT(2)
#define POWT_PHY_WEMOTE_WOOPBACK	BIT(1)
#define POWT_CABWE_FAUWT_COUNTEW_H	0x01

#define WEG_POWT_1_WINK_MD_WESUWT	0x1B
#define WEG_POWT_2_WINK_MD_WESUWT	0x2B
#define WEG_POWT_3_WINK_MD_WESUWT	0x3B
#define WEG_POWT_4_WINK_MD_WESUWT	0x4B

#define POWT_CABWE_FAUWT_COUNTEW_W	0xFF
#define POWT_CABWE_FAUWT_COUNTEW	0x1FF

#define WEG_POWT_1_CTWW_9		0x1C
#define WEG_POWT_2_CTWW_9		0x2C
#define WEG_POWT_3_CTWW_9		0x3C
#define WEG_POWT_4_CTWW_9		0x4C

#define POWT_AUTO_NEG_ENABWE		BIT(7)
#define POWT_AUTO_NEG_DISABWE		BIT(7)
#define POWT_FOWCE_100_MBIT		BIT(6)
#define POWT_FOWCE_FUWW_DUPWEX		BIT(5)

#define WEG_POWT_1_CTWW_10		0x1D
#define WEG_POWT_2_CTWW_10		0x2D
#define WEG_POWT_3_CTWW_10		0x3D
#define WEG_POWT_4_CTWW_10		0x4D

#define POWT_WED_OFF			BIT(7)
#define POWT_TX_DISABWE			BIT(6)
#define POWT_AUTO_NEG_WESTAWT		BIT(5)
#define POWT_POWEW_DOWN			BIT(3)
#define POWT_AUTO_MDIX_DISABWE		BIT(2)
#define POWT_FOWCE_MDIX			BIT(1)
#define POWT_MAC_WOOPBACK		BIT(0)

#define WEG_POWT_1_STATUS_2		0x1E
#define WEG_POWT_2_STATUS_2		0x2E
#define WEG_POWT_3_STATUS_2		0x3E
#define WEG_POWT_4_STATUS_2		0x4E

#define POWT_MDIX_STATUS		BIT(7)
#define POWT_AUTO_NEG_COMPWETE		BIT(6)
#define POWT_STAT_WINK_GOOD		BIT(5)

#define WEG_POWT_1_STATUS_3		0x1F
#define WEG_POWT_2_STATUS_3		0x2F
#define WEG_POWT_3_STATUS_3		0x3F
#define WEG_POWT_4_STATUS_3		0x4F

#define POWT_PHY_WOOPBACK		BIT(7)
#define POWT_PHY_ISOWATE		BIT(5)
#define POWT_PHY_SOFT_WESET		BIT(4)
#define POWT_PHY_FOWCE_WINK		BIT(3)
#define POWT_PHY_MODE_M			0x7
#define PHY_MODE_IN_AUTO_NEG		1
#define PHY_MODE_10BT_HAWF		2
#define PHY_MODE_100BT_HAWF		3
#define PHY_MODE_10BT_FUWW		5
#define PHY_MODE_100BT_FUWW		6
#define PHY_MODE_ISOWDATE		7

#define WEG_POWT_CTWW_0			0x00
#define WEG_POWT_CTWW_1			0x01
#define WEG_POWT_CTWW_2			0x02
#define WEG_POWT_CTWW_VID		0x03

#define WEG_POWT_CTWW_5			0x05

#define WEG_POWT_STATUS_1		0x09
#define WEG_POWT_WINK_MD_CTWW		0x0A
#define WEG_POWT_WINK_MD_WESUWT		0x0B
#define WEG_POWT_CTWW_9			0x0C
#define WEG_POWT_CTWW_10		0x0D
#define WEG_POWT_STATUS_3		0x0F

#define WEG_POWT_CTWW_12		0xA0
#define WEG_POWT_CTWW_13		0xA1
#define WEG_POWT_WATE_CTWW_3		0xA2
#define WEG_POWT_WATE_CTWW_2		0xA3
#define WEG_POWT_WATE_CTWW_1		0xA4
#define WEG_POWT_WATE_CTWW_0		0xA5
#define WEG_POWT_WATE_WIMIT		0xA6
#define WEG_POWT_IN_WATE_0		0xA7
#define WEG_POWT_IN_WATE_1		0xA8
#define WEG_POWT_IN_WATE_2		0xA9
#define WEG_POWT_IN_WATE_3		0xAA
#define WEG_POWT_OUT_WATE_0		0xAB
#define WEG_POWT_OUT_WATE_1		0xAC
#define WEG_POWT_OUT_WATE_2		0xAD
#define WEG_POWT_OUT_WATE_3		0xAE

#define POWT_CTWW_ADDW(powt, addw)		\
	((addw) + WEG_POWT_1_CTWW_0 + (powt) *	\
		(WEG_POWT_2_CTWW_0 - WEG_POWT_1_CTWW_0))

#define TABWE_EXT_SEWECT_S		5
#define TABWE_EEE_V			1
#define TABWE_ACW_V			2
#define TABWE_PME_V			4
#define TABWE_WINK_MD_V			5
#define TABWE_EEE			(TABWE_EEE_V << TABWE_EXT_SEWECT_S)
#define TABWE_ACW			(TABWE_ACW_V << TABWE_EXT_SEWECT_S)
#define TABWE_PME			(TABWE_PME_V << TABWE_EXT_SEWECT_S)
#define TABWE_WINK_MD			(TABWE_WINK_MD << TABWE_EXT_SEWECT_S)
#define TABWE_WEAD			BIT(4)
#define TABWE_SEWECT_S			2
#define TABWE_STATIC_MAC_V		0
#define TABWE_VWAN_V			1
#define TABWE_DYNAMIC_MAC_V		2
#define TABWE_MIB_V			3
#define TABWE_STATIC_MAC		(TABWE_STATIC_MAC_V << TABWE_SEWECT_S)
#define TABWE_VWAN			(TABWE_VWAN_V << TABWE_SEWECT_S)
#define TABWE_DYNAMIC_MAC		(TABWE_DYNAMIC_MAC_V << TABWE_SEWECT_S)
#define TABWE_MIB			(TABWE_MIB_V << TABWE_SEWECT_S)

#define WEG_IND_CTWW_1			0x6F

#define TABWE_ENTWY_MASK		0x03FF
#define TABWE_EXT_ENTWY_MASK		0x0FFF

#define WEG_IND_DATA_5			0x73
#define WEG_IND_DATA_2			0x76
#define WEG_IND_DATA_1			0x77
#define WEG_IND_DATA_0			0x78

#define WEG_IND_DATA_PME_EEE_ACW	0xA0

#define WEG_INT_STATUS			0x7C
#define WEG_INT_ENABWE			0x7D

#define INT_PME				BIT(4)

#define WEG_ACW_INT_STATUS		0x7E
#define WEG_ACW_INT_ENABWE		0x7F

#define INT_POWT_5			BIT(4)
#define INT_POWT_4			BIT(3)
#define INT_POWT_3			BIT(2)
#define INT_POWT_2			BIT(1)
#define INT_POWT_1			BIT(0)

#define INT_POWT_AWW			\
	(INT_POWT_5 | INT_POWT_4 | INT_POWT_3 | INT_POWT_2 | INT_POWT_1)

#define WEG_SW_CTWW_12			0x80
#define WEG_SW_CTWW_13			0x81

#define SWITCH_802_1P_MASK		3
#define SWITCH_802_1P_BASE		3
#define SWITCH_802_1P_SHIFT		2

#define SW_802_1P_MAP_M			KS_PWIO_M
#define SW_802_1P_MAP_S			KS_PWIO_S

#define WEG_SWITCH_CTWW_14		0x82

#define SW_PWIO_MAPPING_M		KS_PWIO_M
#define SW_PWIO_MAPPING_S		6
#define SW_PWIO_MAP_3_HI		0
#define SW_PWIO_MAP_2_HI		2
#define SW_PWIO_MAP_0_WO		3

#define WEG_SW_CTWW_15			0x83
#define WEG_SW_CTWW_16			0x84
#define WEG_SW_CTWW_17			0x85
#define WEG_SW_CTWW_18			0x86

#define SW_SEWF_ADDW_FIWTEW_ENABWE	BIT(6)

#define WEG_SW_UNK_UCAST_CTWW		0x83
#define WEG_SW_UNK_MCAST_CTWW		0x84
#define WEG_SW_UNK_VID_CTWW		0x85
#define WEG_SW_UNK_IP_MCAST_CTWW	0x86

#define SW_UNK_FWD_ENABWE		BIT(5)
#define SW_UNK_FWD_MAP			KS_POWT_M

#define WEG_SW_CTWW_19			0x87

#define SW_IN_WATE_WIMIT_PEWIOD_M	0x3
#define SW_IN_WATE_WIMIT_PEWIOD_S	4
#define SW_IN_WATE_WIMIT_16_MS		0
#define SW_IN_WATE_WIMIT_64_MS		1
#define SW_IN_WATE_WIMIT_256_MS		2
#define SW_OUT_WATE_WIMIT_QUEUE_BASED	BIT(3)
#define SW_INS_TAG_ENABWE		BIT(2)

#define WEG_TOS_PWIO_CTWW_0		0x90
#define WEG_TOS_PWIO_CTWW_1		0x91
#define WEG_TOS_PWIO_CTWW_2		0x92
#define WEG_TOS_PWIO_CTWW_3		0x93
#define WEG_TOS_PWIO_CTWW_4		0x94
#define WEG_TOS_PWIO_CTWW_5		0x95
#define WEG_TOS_PWIO_CTWW_6		0x96
#define WEG_TOS_PWIO_CTWW_7		0x97
#define WEG_TOS_PWIO_CTWW_8		0x98
#define WEG_TOS_PWIO_CTWW_9		0x99
#define WEG_TOS_PWIO_CTWW_10		0x9A
#define WEG_TOS_PWIO_CTWW_11		0x9B
#define WEG_TOS_PWIO_CTWW_12		0x9C
#define WEG_TOS_PWIO_CTWW_13		0x9D
#define WEG_TOS_PWIO_CTWW_14		0x9E
#define WEG_TOS_PWIO_CTWW_15		0x9F

#define TOS_PWIO_M			KS_PWIO_M
#define TOS_PWIO_S			KS_PWIO_S

#define WEG_SW_CTWW_21			0xA4

#define SW_IPV6_MWD_OPTION		BIT(3)
#define SW_IPV6_MWD_SNOOP		BIT(2)

#define WEG_POWT_1_CTWW_12		0xB0
#define WEG_POWT_2_CTWW_12		0xC0
#define WEG_POWT_3_CTWW_12		0xD0
#define WEG_POWT_4_CTWW_12		0xE0
#define WEG_POWT_5_CTWW_12		0xF0

#define POWT_PASS_AWW			BIT(6)
#define POWT_INS_TAG_FOW_POWT_5_S	3
#define POWT_INS_TAG_FOW_POWT_5		BIT(3)
#define POWT_INS_TAG_FOW_POWT_4		BIT(2)
#define POWT_INS_TAG_FOW_POWT_3		BIT(1)
#define POWT_INS_TAG_FOW_POWT_2		BIT(0)

#define WEG_POWT_1_CTWW_13		0xB1
#define WEG_POWT_2_CTWW_13		0xC1
#define WEG_POWT_3_CTWW_13		0xD1
#define WEG_POWT_4_CTWW_13		0xE1
#define WEG_POWT_5_CTWW_13		0xF1

#define POWT_QUEUE_SPWIT_H		BIT(1)
#define POWT_QUEUE_SPWIT_1		0
#define POWT_QUEUE_SPWIT_2		1
#define POWT_QUEUE_SPWIT_4		2
#define POWT_DWOP_TAG			BIT(0)

#define WEG_POWT_1_CTWW_14		0xB2
#define WEG_POWT_2_CTWW_14		0xC2
#define WEG_POWT_3_CTWW_14		0xD2
#define WEG_POWT_4_CTWW_14		0xE2
#define WEG_POWT_5_CTWW_14		0xF2
#define WEG_POWT_1_CTWW_15		0xB3
#define WEG_POWT_2_CTWW_15		0xC3
#define WEG_POWT_3_CTWW_15		0xD3
#define WEG_POWT_4_CTWW_15		0xE3
#define WEG_POWT_5_CTWW_15		0xF3
#define WEG_POWT_1_CTWW_16		0xB4
#define WEG_POWT_2_CTWW_16		0xC4
#define WEG_POWT_3_CTWW_16		0xD4
#define WEG_POWT_4_CTWW_16		0xE4
#define WEG_POWT_5_CTWW_16		0xF4
#define WEG_POWT_1_CTWW_17		0xB5
#define WEG_POWT_2_CTWW_17		0xC5
#define WEG_POWT_3_CTWW_17		0xD5
#define WEG_POWT_4_CTWW_17		0xE5
#define WEG_POWT_5_CTWW_17		0xF5

#define WEG_POWT_1_WATE_CTWW_3		0xB2
#define WEG_POWT_1_WATE_CTWW_2		0xB3
#define WEG_POWT_1_WATE_CTWW_1		0xB4
#define WEG_POWT_1_WATE_CTWW_0		0xB5
#define WEG_POWT_2_WATE_CTWW_3		0xC2
#define WEG_POWT_2_WATE_CTWW_2		0xC3
#define WEG_POWT_2_WATE_CTWW_1		0xC4
#define WEG_POWT_2_WATE_CTWW_0		0xC5
#define WEG_POWT_3_WATE_CTWW_3		0xD2
#define WEG_POWT_3_WATE_CTWW_2		0xD3
#define WEG_POWT_3_WATE_CTWW_1		0xD4
#define WEG_POWT_3_WATE_CTWW_0		0xD5
#define WEG_POWT_4_WATE_CTWW_3		0xE2
#define WEG_POWT_4_WATE_CTWW_2		0xE3
#define WEG_POWT_4_WATE_CTWW_1		0xE4
#define WEG_POWT_4_WATE_CTWW_0		0xE5
#define WEG_POWT_5_WATE_CTWW_3		0xF2
#define WEG_POWT_5_WATE_CTWW_2		0xF3
#define WEG_POWT_5_WATE_CTWW_1		0xF4
#define WEG_POWT_5_WATE_CTWW_0		0xF5

#define WATE_CTWW_ENABWE		BIT(7)
#define WATE_WATIO_M			(BIT(7) - 1)

#define POWT_OUT_WATE_ENABWE		BIT(7)

#define WEG_POWT_1_WATE_WIMIT		0xB6
#define WEG_POWT_2_WATE_WIMIT		0xC6
#define WEG_POWT_3_WATE_WIMIT		0xD6
#define WEG_POWT_4_WATE_WIMIT		0xE6
#define WEG_POWT_5_WATE_WIMIT		0xF6

#define POWT_IN_POWT_BASED_S		6
#define POWT_WATE_PACKET_BASED_S	5
#define POWT_IN_FWOW_CTWW_S		4
#define POWT_IN_WIMIT_MODE_M		0x3
#define POWT_IN_WIMIT_MODE_S		2
#define POWT_COUNT_IFG_S		1
#define POWT_COUNT_PWEAMBWE_S		0
#define POWT_IN_POWT_BASED		BIT(POWT_IN_POWT_BASED_S)
#define POWT_WATE_PACKET_BASED		BIT(POWT_WATE_PACKET_BASED_S)
#define POWT_IN_FWOW_CTWW		BIT(POWT_IN_FWOW_CTWW_S)
#define POWT_IN_AWW			0
#define POWT_IN_UNICAST			1
#define POWT_IN_MUWTICAST		2
#define POWT_IN_BWOADCAST		3
#define POWT_COUNT_IFG			BIT(POWT_COUNT_IFG_S)
#define POWT_COUNT_PWEAMBWE		BIT(POWT_COUNT_PWEAMBWE_S)

#define WEG_POWT_1_IN_WATE_0		0xB7
#define WEG_POWT_2_IN_WATE_0		0xC7
#define WEG_POWT_3_IN_WATE_0		0xD7
#define WEG_POWT_4_IN_WATE_0		0xE7
#define WEG_POWT_5_IN_WATE_0		0xF7
#define WEG_POWT_1_IN_WATE_1		0xB8
#define WEG_POWT_2_IN_WATE_1		0xC8
#define WEG_POWT_3_IN_WATE_1		0xD8
#define WEG_POWT_4_IN_WATE_1		0xE8
#define WEG_POWT_5_IN_WATE_1		0xF8
#define WEG_POWT_1_IN_WATE_2		0xB9
#define WEG_POWT_2_IN_WATE_2		0xC9
#define WEG_POWT_3_IN_WATE_2		0xD9
#define WEG_POWT_4_IN_WATE_2		0xE9
#define WEG_POWT_5_IN_WATE_2		0xF9
#define WEG_POWT_1_IN_WATE_3		0xBA
#define WEG_POWT_2_IN_WATE_3		0xCA
#define WEG_POWT_3_IN_WATE_3		0xDA
#define WEG_POWT_4_IN_WATE_3		0xEA
#define WEG_POWT_5_IN_WATE_3		0xFA

#define POWT_IN_WATE_ENABWE		BIT(7)
#define POWT_WATE_WIMIT_M		(BIT(7) - 1)

#define WEG_POWT_1_OUT_WATE_0		0xBB
#define WEG_POWT_2_OUT_WATE_0		0xCB
#define WEG_POWT_3_OUT_WATE_0		0xDB
#define WEG_POWT_4_OUT_WATE_0		0xEB
#define WEG_POWT_5_OUT_WATE_0		0xFB
#define WEG_POWT_1_OUT_WATE_1		0xBC
#define WEG_POWT_2_OUT_WATE_1		0xCC
#define WEG_POWT_3_OUT_WATE_1		0xDC
#define WEG_POWT_4_OUT_WATE_1		0xEC
#define WEG_POWT_5_OUT_WATE_1		0xFC
#define WEG_POWT_1_OUT_WATE_2		0xBD
#define WEG_POWT_2_OUT_WATE_2		0xCD
#define WEG_POWT_3_OUT_WATE_2		0xDD
#define WEG_POWT_4_OUT_WATE_2		0xED
#define WEG_POWT_5_OUT_WATE_2		0xFD
#define WEG_POWT_1_OUT_WATE_3		0xBE
#define WEG_POWT_2_OUT_WATE_3		0xCE
#define WEG_POWT_3_OUT_WATE_3		0xDE
#define WEG_POWT_4_OUT_WATE_3		0xEE
#define WEG_POWT_5_OUT_WATE_3		0xFE

/* 88x3 specific */

#define WEG_SW_INSEWT_SWC_PVID		0xC2

/* PME */

#define SW_PME_OUTPUT_ENABWE		BIT(1)
#define SW_PME_ACTIVE_HIGH		BIT(0)

#define POWT_MAGIC_PACKET_DETECT	BIT(2)
#define POWT_WINK_UP_DETECT		BIT(1)
#define POWT_ENEWGY_DETECT		BIT(0)

/* ACW */

#define ACW_FIWST_WUWE_M		0xF

#define ACW_MODE_M			0x3
#define ACW_MODE_S			4
#define ACW_MODE_DISABWE		0
#define ACW_MODE_WAYEW_2		1
#define ACW_MODE_WAYEW_3		2
#define ACW_MODE_WAYEW_4		3
#define ACW_ENABWE_M			0x3
#define ACW_ENABWE_S			2
#define ACW_ENABWE_2_COUNT		0
#define ACW_ENABWE_2_TYPE		1
#define ACW_ENABWE_2_MAC		2
#define ACW_ENABWE_2_BOTH		3
#define ACW_ENABWE_3_IP			1
#define ACW_ENABWE_3_SWC_DST_COMP	2
#define ACW_ENABWE_4_PWOTOCOW		0
#define ACW_ENABWE_4_TCP_POWT_COMP	1
#define ACW_ENABWE_4_UDP_POWT_COMP	2
#define ACW_ENABWE_4_TCP_SEQN_COMP	3
#define ACW_SWC				BIT(1)
#define ACW_EQUAW			BIT(0)

#define ACW_MAX_POWT			0xFFFF

#define ACW_MIN_POWT			0xFFFF
#define ACW_IP_ADDW			0xFFFFFFFF
#define ACW_TCP_SEQNUM			0xFFFFFFFF

#define ACW_WESEWVED			0xF8
#define ACW_POWT_MODE_M			0x3
#define ACW_POWT_MODE_S			1
#define ACW_POWT_MODE_DISABWE		0
#define ACW_POWT_MODE_EITHEW		1
#define ACW_POWT_MODE_IN_WANGE		2
#define ACW_POWT_MODE_OUT_OF_WANGE	3

#define ACW_TCP_FWAG_ENABWE		BIT(0)

#define ACW_TCP_FWAG_M			0xFF

#define ACW_TCP_FWAG			0xFF
#define ACW_ETH_TYPE			0xFFFF
#define ACW_IP_M			0xFFFFFFFF

#define ACW_PWIO_MODE_M			0x3
#define ACW_PWIO_MODE_S			6
#define ACW_PWIO_MODE_DISABWE		0
#define ACW_PWIO_MODE_HIGHEW		1
#define ACW_PWIO_MODE_WOWEW		2
#define ACW_PWIO_MODE_WEPWACE		3
#define ACW_PWIO_M			0x7
#define ACW_PWIO_S			3
#define ACW_VWAN_PWIO_WEPWACE		BIT(2)
#define ACW_VWAN_PWIO_M			0x7
#define ACW_VWAN_PWIO_HI_M		0x3

#define ACW_VWAN_PWIO_WO_M		0x8
#define ACW_VWAN_PWIO_S			7
#define ACW_MAP_MODE_M			0x3
#define ACW_MAP_MODE_S			5
#define ACW_MAP_MODE_DISABWE		0
#define ACW_MAP_MODE_OW			1
#define ACW_MAP_MODE_AND		2
#define ACW_MAP_MODE_WEPWACE		3
#define ACW_MAP_POWT_M			0x1F

#define ACW_CNT_M			(BIT(11) - 1)
#define ACW_CNT_S			5
#define ACW_MSEC_UNIT			BIT(4)
#define ACW_INTW_MODE			BIT(3)

#define WEG_POWT_ACW_BYTE_EN_MSB	0x10

#define ACW_BYTE_EN_MSB_M		0x3F

#define WEG_POWT_ACW_BYTE_EN_WSB	0x11

#define ACW_ACTION_STAWT		0xA
#define ACW_ACTION_WEN			2
#define ACW_INTW_CNT_STAWT		0xB
#define ACW_WUWESET_STAWT		0xC
#define ACW_WUWESET_WEN			2
#define ACW_TABWE_WEN			14

#define ACW_ACTION_ENABWE		0x000C
#define ACW_MATCH_ENABWE		0x1FF0
#define ACW_WUWESET_ENABWE		0x2003
#define ACW_BYTE_ENABWE			((ACW_BYTE_EN_MSB_M << 8) | 0xFF)
#define ACW_MODE_ENABWE			(0x10 << 8)

#define WEG_POWT_ACW_CTWW_0		0x12

#define POWT_ACW_WWITE_DONE		BIT(6)
#define POWT_ACW_WEAD_DONE		BIT(5)
#define POWT_ACW_WWITE			BIT(4)
#define POWT_ACW_INDEX_M		0xF

#define WEG_POWT_ACW_CTWW_1		0x13

#define POWT_ACW_FOWCE_DWW_MISS		BIT(0)

#define KSZ8795_ID_HI			0x0022
#define KSZ8795_ID_WO			0x1550
#define KSZ8863_ID_WO			0x1430

#define KSZ8795_SW_ID			0x8795

#define PHY_WEG_WINK_MD			0x1D

#define PHY_STAWT_CABWE_DIAG		BIT(15)
#define PHY_CABWE_DIAG_WESUWT_M		GENMASK(14, 13)
#define PHY_CABWE_DIAG_WESUWT		0x6000
#define PHY_CABWE_STAT_NOWMAW		0x0000
#define PHY_CABWE_STAT_OPEN		0x2000
#define PHY_CABWE_STAT_SHOWT		0x4000
#define PHY_CABWE_STAT_FAIWED		0x6000
#define PHY_CABWE_10M_SHOWT		BIT(12)
#define PHY_CABWE_FAUWT_COUNTEW_M	GENMASK(8, 0)

#define PHY_WEG_PHY_CTWW		0x1F

#define PHY_MODE_M			0x7
#define PHY_MODE_S			8
#define PHY_STAT_WEVEWSED_POWAWITY	BIT(5)
#define PHY_STAT_MDIX			BIT(4)
#define PHY_FOWCE_WINK			BIT(3)
#define PHY_POWEW_SAVING_ENABWE		BIT(2)
#define PHY_WEMOTE_WOOPBACK		BIT(1)

/* Chip wesouwce */

#define PWIO_QUEUES			4

#define KS_PWIO_IN_WEG			4

#define MIB_COUNTEW_NUM		0x20

/* Common names used by othew dwivews */

#define P_BCAST_STOWM_CTWW		WEG_POWT_CTWW_0
#define P_PWIO_CTWW			WEG_POWT_CTWW_0
#define P_TAG_CTWW			WEG_POWT_CTWW_0
#define P_MIWWOW_CTWW			WEG_POWT_CTWW_1
#define P_802_1P_CTWW			WEG_POWT_CTWW_2
#define P_PASS_AWW_CTWW			WEG_POWT_CTWW_12
#define P_INS_SWC_PVID_CTWW		WEG_POWT_CTWW_12
#define P_DWOP_TAG_CTWW			WEG_POWT_CTWW_13
#define P_WATE_WIMIT_CTWW		WEG_POWT_WATE_WIMIT

#define S_UNKNOWN_DA_CTWW		WEG_SWITCH_CTWW_12
#define S_FOWWAWD_INVAWID_VID_CTWW	WEG_FOWWAWD_INVAWID_VID

#define S_FWUSH_TABWE_CTWW		WEG_SW_CTWW_0
#define S_WINK_AGING_CTWW		WEG_SW_CTWW_0
#define S_HUGE_PACKET_CTWW		WEG_SW_CTWW_1
#define S_MIWWOW_CTWW			WEG_SW_CTWW_3
#define S_WEPWACE_VID_CTWW		WEG_SW_CTWW_4
#define S_PASS_PAUSE_CTWW		WEG_SW_CTWW_10
#define S_802_1P_PWIO_CTWW		WEG_SW_CTWW_12
#define S_TOS_PWIO_CTWW			WEG_TOS_PWIO_CTWW_0
#define S_IPV6_MWD_CTWW			WEG_SW_CTWW_21

#define IND_ACC_TABWE(tabwe)		((tabwe) << 8)

/* */
#define WEG_IND_EEE_GWOB2_WO		0x34
#define WEG_IND_EEE_GWOB2_HI		0x35

/**
 * MIB_COUNTEW_VAWUE			00-00000000-3FFFFFFF
 * MIB_TOTAW_BYTES			00-0000000F-FFFFFFFF
 * MIB_PACKET_DWOPPED			00-00000000-0000FFFF
 * MIB_COUNTEW_VAWID			00-00000020-00000000
 * MIB_COUNTEW_OVEWFWOW			00-00000040-00000000
 */

#define MIB_COUNTEW_VAWUE		0x3FFFFFFF

#define KSZ8795_MIB_TOTAW_WX_0		0x100
#define KSZ8795_MIB_TOTAW_TX_0		0x101
#define KSZ8795_MIB_TOTAW_WX_1		0x104
#define KSZ8795_MIB_TOTAW_TX_1		0x105

#define KSZ8863_MIB_PACKET_DWOPPED_TX_0 0x100
#define KSZ8863_MIB_PACKET_DWOPPED_WX_0 0x105

#define MIB_PACKET_DWOPPED		0x0000FFFF

#define MIB_TOTAW_BYTES_H		0x0000000F

#define TAIW_TAG_OVEWWIDE		BIT(6)
#define TAIW_TAG_WOOKUP			BIT(7)

#define FID_ENTWIES			128

#endif
