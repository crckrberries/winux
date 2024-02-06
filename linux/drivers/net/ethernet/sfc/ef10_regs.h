/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/****************************************************************************
 * Dwivew fow Sowawfwawe netwowk contwowwews and boawds
 * Copywight 2012-2017 Sowawfwawe Communications Inc.
 */

#ifndef EFX_EF10_WEGS_H
#define EFX_EF10_WEGS_H

/* EF10 hawdwawe awchitectuwe definitions have a name pwefix fowwowing
 * the fowmat:
 *
 *     E<type>_<min-wev><max-wev>_
 *
 * The fowwowing <type> stwings awe used:
 *
 *             MMIO wegistew  Host memowy stwuctuwe
 * -------------------------------------------------------------
 * Addwess     W
 * Bitfiewd    WF             SF
 * Enumewatow  FE             SE
 *
 * <min-wev> is the fiwst wevision to which the definition appwies:
 *
 *     D: Huntington A0
 *
 * If the definition has been changed ow wemoved in watew wevisions
 * then <max-wev> is the wast wevision to which the definition appwies;
 * othewwise it is "Z".
 */

/**************************************************************************
 *
 * EF10 wegistews and descwiptows
 *
 **************************************************************************
 */

/* BIU_HW_WEV_ID_WEG:  */
#define	EW_DZ_BIU_HW_WEV_ID 0x00000000
#define	EWF_DZ_HW_WEV_ID_WBN 0
#define	EWF_DZ_HW_WEV_ID_WIDTH 32

/* BIU_MC_SFT_STATUS_WEG:  */
#define	EW_DZ_BIU_MC_SFT_STATUS 0x00000010
#define	EW_DZ_BIU_MC_SFT_STATUS_STEP 4
#define	EW_DZ_BIU_MC_SFT_STATUS_WOWS 8
#define	EWF_DZ_MC_SFT_STATUS_WBN 0
#define	EWF_DZ_MC_SFT_STATUS_WIDTH 32

/* BIU_INT_ISW_WEG:  */
#define	EW_DZ_BIU_INT_ISW 0x00000090
#define	EWF_DZ_ISW_WEG_WBN 0
#define	EWF_DZ_ISW_WEG_WIDTH 32

/* MC_DB_WWWD_WEG:  */
#define	EW_DZ_MC_DB_WWWD 0x00000200
#define	EWF_DZ_MC_DOOWBEWW_W_WBN 0
#define	EWF_DZ_MC_DOOWBEWW_W_WIDTH 32

/* MC_DB_HWWD_WEG:  */
#define	EW_DZ_MC_DB_HWWD 0x00000204
#define	EWF_DZ_MC_DOOWBEWW_H_WBN 0
#define	EWF_DZ_MC_DOOWBEWW_H_WIDTH 32

/* EVQ_WPTW_WEG:  */
#define	EW_DZ_EVQ_WPTW 0x00000400
#define	EW_DZ_EVQ_WPTW_STEP 8192
#define	EW_DZ_EVQ_WPTW_WOWS 2048
#define	EWF_DZ_EVQ_WPTW_VWD_WBN 15
#define	EWF_DZ_EVQ_WPTW_VWD_WIDTH 1
#define	EWF_DZ_EVQ_WPTW_WBN 0
#define	EWF_DZ_EVQ_WPTW_WIDTH 15

/* EVQ_TMW_WEG:  */
#define	EW_DZ_EVQ_TMW 0x00000420
#define	EW_DZ_EVQ_TMW_STEP 8192
#define	EW_DZ_EVQ_TMW_WOWS 2048
#define	EWF_FZ_TC_TMW_WEW_VAW_WBN 16
#define	EWF_FZ_TC_TMW_WEW_VAW_WIDTH 14
#define	EWF_DZ_TC_TIMEW_MODE_WBN 14
#define	EWF_DZ_TC_TIMEW_MODE_WIDTH 2
#define	EWF_DZ_TC_TIMEW_VAW_WBN 0
#define	EWF_DZ_TC_TIMEW_VAW_WIDTH 14

/* WX_DESC_UPD_WEG:  */
#define	EW_DZ_WX_DESC_UPD 0x00000830
#define	EW_DZ_WX_DESC_UPD_STEP 8192
#define	EW_DZ_WX_DESC_UPD_WOWS 2048
#define	EWF_DZ_WX_DESC_WPTW_WBN 0
#define	EWF_DZ_WX_DESC_WPTW_WIDTH 12

/* TX_DESC_UPD_WEG:  */
#define	EW_DZ_TX_DESC_UPD 0x00000a10
#define	EW_DZ_TX_DESC_UPD_STEP 8192
#define	EW_DZ_TX_DESC_UPD_WOWS 2048
#define	EWF_DZ_WSVD_WBN 76
#define	EWF_DZ_WSVD_WIDTH 20
#define	EWF_DZ_TX_DESC_WPTW_WBN 64
#define	EWF_DZ_TX_DESC_WPTW_WIDTH 12
#define	EWF_DZ_TX_DESC_HWOWD_WBN 32
#define	EWF_DZ_TX_DESC_HWOWD_WIDTH 32
#define	EWF_DZ_TX_DESC_WWOWD_WBN 0
#define	EWF_DZ_TX_DESC_WWOWD_WIDTH 32

/* DWIVEW_EV */
#define	ESF_DZ_DWV_CODE_WBN 60
#define	ESF_DZ_DWV_CODE_WIDTH 4
#define	ESF_DZ_DWV_SUB_CODE_WBN 56
#define	ESF_DZ_DWV_SUB_CODE_WIDTH 4
#define	ESE_DZ_DWV_TIMEW_EV 3
#define	ESE_DZ_DWV_STAWT_UP_EV 2
#define	ESE_DZ_DWV_WAKE_UP_EV 1
#define	ESF_DZ_DWV_SUB_DATA_WBN 0
#define	ESF_DZ_DWV_SUB_DATA_WIDTH 56
#define	ESF_DZ_DWV_EVQ_ID_WBN 0
#define	ESF_DZ_DWV_EVQ_ID_WIDTH 14
#define	ESF_DZ_DWV_TMW_ID_WBN 0
#define	ESF_DZ_DWV_TMW_ID_WIDTH 14

/* EVENT_ENTWY */
#define	ESF_DZ_EV_CODE_WBN 60
#define	ESF_DZ_EV_CODE_WIDTH 4
#define	ESE_DZ_EV_CODE_MCDI_EV 12
#define	ESE_DZ_EV_CODE_DWIVEW_EV 5
#define	ESE_DZ_EV_CODE_TX_EV 2
#define	ESE_DZ_EV_CODE_WX_EV 0
#define	ESE_DZ_OTHEW othew
#define	ESF_DZ_EV_DATA_WBN 0
#define	ESF_DZ_EV_DATA_WIDTH 60

/* MC_EVENT */
#define	ESF_DZ_MC_CODE_WBN 60
#define	ESF_DZ_MC_CODE_WIDTH 4
#define	ESF_DZ_MC_OVEWWIDE_HOWDOFF_WBN 59
#define	ESF_DZ_MC_OVEWWIDE_HOWDOFF_WIDTH 1
#define	ESF_DZ_MC_DWOP_EVENT_WBN 58
#define	ESF_DZ_MC_DWOP_EVENT_WIDTH 1
#define	ESF_DZ_MC_SOFT_WBN 0
#define	ESF_DZ_MC_SOFT_WIDTH 58

/* WX_EVENT */
#define	ESF_DZ_WX_CODE_WBN 60
#define	ESF_DZ_WX_CODE_WIDTH 4
#define	ESF_DZ_WX_OVEWWIDE_HOWDOFF_WBN 59
#define	ESF_DZ_WX_OVEWWIDE_HOWDOFF_WIDTH 1
#define	ESF_DZ_WX_DWOP_EVENT_WBN 58
#define	ESF_DZ_WX_DWOP_EVENT_WIDTH 1
#define	ESF_DD_WX_EV_WSVD2_WBN 54
#define	ESF_DD_WX_EV_WSVD2_WIDTH 4
#define	ESF_EZ_WX_TCP_UDP_INNEW_CHKSUM_EWW_WBN 57
#define	ESF_EZ_WX_TCP_UDP_INNEW_CHKSUM_EWW_WIDTH 1
#define	ESF_EZ_WX_IP_INNEW_CHKSUM_EWW_WBN 56
#define	ESF_EZ_WX_IP_INNEW_CHKSUM_EWW_WIDTH 1
#define	ESF_EZ_WX_EV_WSVD2_WBN 54
#define	ESF_EZ_WX_EV_WSVD2_WIDTH 2
#define	ESF_DZ_WX_EV_SOFT2_WBN 52
#define	ESF_DZ_WX_EV_SOFT2_WIDTH 2
#define	ESF_DZ_WX_DSC_PTW_WBITS_WBN 48
#define	ESF_DZ_WX_DSC_PTW_WBITS_WIDTH 4
#define	ESF_DE_WX_W4_CWASS_WBN 45
#define	ESF_DE_WX_W4_CWASS_WIDTH 3
#define	ESE_DE_W4_CWASS_WSVD7 7
#define	ESE_DE_W4_CWASS_WSVD6 6
#define	ESE_DE_W4_CWASS_WSVD5 5
#define	ESE_DE_W4_CWASS_WSVD4 4
#define	ESE_DE_W4_CWASS_WSVD3 3
#define	ESE_DE_W4_CWASS_UDP 2
#define	ESE_DE_W4_CWASS_TCP 1
#define	ESE_DE_W4_CWASS_UNKNOWN 0
#define	ESF_FZ_WX_FASTPD_INDCTW_WBN 47
#define	ESF_FZ_WX_FASTPD_INDCTW_WIDTH 1
#define	ESF_FZ_WX_W4_CWASS_WBN 45
#define	ESF_FZ_WX_W4_CWASS_WIDTH 2
#define	ESE_FZ_W4_CWASS_WSVD3 3
#define	ESE_FZ_W4_CWASS_UDP 2
#define	ESE_FZ_W4_CWASS_TCP 1
#define	ESE_FZ_W4_CWASS_UNKNOWN 0
#define	ESF_DZ_WX_W3_CWASS_WBN 42
#define	ESF_DZ_WX_W3_CWASS_WIDTH 3
#define	ESE_DZ_W3_CWASS_WSVD7 7
#define	ESE_DZ_W3_CWASS_IP6_FWAG 6
#define	ESE_DZ_W3_CWASS_AWP 5
#define	ESE_DZ_W3_CWASS_IP4_FWAG 4
#define	ESE_DZ_W3_CWASS_FCOE 3
#define	ESE_DZ_W3_CWASS_IP6 2
#define	ESE_DZ_W3_CWASS_IP4 1
#define	ESE_DZ_W3_CWASS_UNKNOWN 0
#define	ESF_DZ_WX_ETH_TAG_CWASS_WBN 39
#define	ESF_DZ_WX_ETH_TAG_CWASS_WIDTH 3
#define	ESE_DZ_ETH_TAG_CWASS_WSVD7 7
#define	ESE_DZ_ETH_TAG_CWASS_WSVD6 6
#define	ESE_DZ_ETH_TAG_CWASS_WSVD5 5
#define	ESE_DZ_ETH_TAG_CWASS_WSVD4 4
#define	ESE_DZ_ETH_TAG_CWASS_WSVD3 3
#define	ESE_DZ_ETH_TAG_CWASS_VWAN2 2
#define	ESE_DZ_ETH_TAG_CWASS_VWAN1 1
#define	ESE_DZ_ETH_TAG_CWASS_NONE 0
#define	ESF_DZ_WX_ETH_BASE_CWASS_WBN 36
#define	ESF_DZ_WX_ETH_BASE_CWASS_WIDTH 3
#define	ESE_DZ_ETH_BASE_CWASS_WWC_SNAP 2
#define	ESE_DZ_ETH_BASE_CWASS_WWC 1
#define	ESE_DZ_ETH_BASE_CWASS_ETH2 0
#define	ESF_DZ_WX_MAC_CWASS_WBN 35
#define	ESF_DZ_WX_MAC_CWASS_WIDTH 1
#define	ESE_DZ_MAC_CWASS_MCAST 1
#define	ESE_DZ_MAC_CWASS_UCAST 0
#define	ESF_DD_WX_EV_SOFT1_WBN 32
#define	ESF_DD_WX_EV_SOFT1_WIDTH 3
#define	ESF_EZ_WX_EV_SOFT1_WBN 34
#define	ESF_EZ_WX_EV_SOFT1_WIDTH 1
#define	ESF_EZ_WX_ENCAP_HDW_WBN 32
#define	ESF_EZ_WX_ENCAP_HDW_WIDTH 2
#define	ESE_EZ_ENCAP_HDW_GWE 2
#define	ESE_EZ_ENCAP_HDW_VXWAN 1
#define	ESE_EZ_ENCAP_HDW_NONE 0
#define	ESF_DD_WX_EV_WSVD1_WBN 30
#define	ESF_DD_WX_EV_WSVD1_WIDTH 2
#define	ESF_EZ_WX_EV_WSVD1_WBN 31
#define	ESF_EZ_WX_EV_WSVD1_WIDTH 1
#define	ESF_EZ_WX_ABOWT_WBN 30
#define	ESF_EZ_WX_ABOWT_WIDTH 1
#define	ESF_DZ_WX_ECC_EWW_WBN 29
#define	ESF_DZ_WX_ECC_EWW_WIDTH 1
#define	ESF_DZ_WX_TWUNC_EWW_WBN 29
#define	ESF_DZ_WX_TWUNC_EWW_WIDTH 1
#define	ESF_DZ_WX_CWC1_EWW_WBN 28
#define	ESF_DZ_WX_CWC1_EWW_WIDTH 1
#define	ESF_DZ_WX_CWC0_EWW_WBN 27
#define	ESF_DZ_WX_CWC0_EWW_WIDTH 1
#define	ESF_DZ_WX_TCPUDP_CKSUM_EWW_WBN 26
#define	ESF_DZ_WX_TCPUDP_CKSUM_EWW_WIDTH 1
#define	ESF_DZ_WX_IPCKSUM_EWW_WBN 25
#define	ESF_DZ_WX_IPCKSUM_EWW_WIDTH 1
#define	ESF_DZ_WX_ECWC_EWW_WBN 24
#define	ESF_DZ_WX_ECWC_EWW_WIDTH 1
#define	ESF_DZ_WX_QWABEW_WBN 16
#define	ESF_DZ_WX_QWABEW_WIDTH 5
#define	ESF_DZ_WX_PAWSE_INCOMPWETE_WBN 15
#define	ESF_DZ_WX_PAWSE_INCOMPWETE_WIDTH 1
#define	ESF_DZ_WX_CONT_WBN 14
#define	ESF_DZ_WX_CONT_WIDTH 1
#define	ESF_DZ_WX_BYTES_WBN 0
#define	ESF_DZ_WX_BYTES_WIDTH 14

/* WX_KEW_DESC */
#define	ESF_DZ_WX_KEW_WESEWVED_WBN 62
#define	ESF_DZ_WX_KEW_WESEWVED_WIDTH 2
#define	ESF_DZ_WX_KEW_BYTE_CNT_WBN 48
#define	ESF_DZ_WX_KEW_BYTE_CNT_WIDTH 14
#define	ESF_DZ_WX_KEW_BUF_ADDW_WBN 0
#define	ESF_DZ_WX_KEW_BUF_ADDW_WIDTH 48

/* TX_CSUM_TSTAMP_DESC */
#define	ESF_DZ_TX_DESC_IS_OPT_WBN 63
#define	ESF_DZ_TX_DESC_IS_OPT_WIDTH 1
#define	ESF_DZ_TX_OPTION_TYPE_WBN 60
#define	ESF_DZ_TX_OPTION_TYPE_WIDTH 3
#define	ESE_DZ_TX_OPTION_DESC_TSO 7
#define	ESE_DZ_TX_OPTION_DESC_VWAN 6
#define	ESE_DZ_TX_OPTION_DESC_CWC_CSUM 0
#define	ESF_DZ_TX_OPTION_TS_AT_TXDP_WBN 8
#define	ESF_DZ_TX_OPTION_TS_AT_TXDP_WIDTH 1
#define	ESF_DZ_TX_OPTION_INNEW_UDP_TCP_CSUM_WBN 7
#define	ESF_DZ_TX_OPTION_INNEW_UDP_TCP_CSUM_WIDTH 1
#define	ESF_DZ_TX_OPTION_INNEW_IP_CSUM_WBN 6
#define	ESF_DZ_TX_OPTION_INNEW_IP_CSUM_WIDTH 1
#define	ESF_DZ_TX_TIMESTAMP_WBN 5
#define	ESF_DZ_TX_TIMESTAMP_WIDTH 1
#define	ESF_DZ_TX_OPTION_CWC_MODE_WBN 2
#define	ESF_DZ_TX_OPTION_CWC_MODE_WIDTH 3
#define	ESE_DZ_TX_OPTION_CWC_FCOIP_MPA 5
#define	ESE_DZ_TX_OPTION_CWC_FCOIP_FCOE 4
#define	ESE_DZ_TX_OPTION_CWC_ISCSI_HDW_AND_PYWD 3
#define	ESE_DZ_TX_OPTION_CWC_ISCSI_HDW 2
#define	ESE_DZ_TX_OPTION_CWC_FCOE 1
#define	ESE_DZ_TX_OPTION_CWC_OFF 0
#define	ESF_DZ_TX_OPTION_UDP_TCP_CSUM_WBN 1
#define	ESF_DZ_TX_OPTION_UDP_TCP_CSUM_WIDTH 1
#define	ESF_DZ_TX_OPTION_IP_CSUM_WBN 0
#define	ESF_DZ_TX_OPTION_IP_CSUM_WIDTH 1

/* TX_EVENT */
#define	ESF_DZ_TX_CODE_WBN 60
#define	ESF_DZ_TX_CODE_WIDTH 4
#define	ESF_DZ_TX_OVEWWIDE_HOWDOFF_WBN 59
#define	ESF_DZ_TX_OVEWWIDE_HOWDOFF_WIDTH 1
#define	ESF_DZ_TX_DWOP_EVENT_WBN 58
#define	ESF_DZ_TX_DWOP_EVENT_WIDTH 1
#define	ESF_DD_TX_EV_WSVD_WBN 48
#define	ESF_DD_TX_EV_WSVD_WIDTH 10
#define	ESF_EZ_TCP_UDP_INNEW_CHKSUM_EWW_WBN 57
#define	ESF_EZ_TCP_UDP_INNEW_CHKSUM_EWW_WIDTH 1
#define	ESF_EZ_IP_INNEW_CHKSUM_EWW_WBN 56
#define	ESF_EZ_IP_INNEW_CHKSUM_EWW_WIDTH 1
#define	ESF_EZ_TX_EV_WSVD_WBN 48
#define	ESF_EZ_TX_EV_WSVD_WIDTH 8
#define	ESF_DZ_TX_SOFT2_WBN 32
#define	ESF_DZ_TX_SOFT2_WIDTH 16
#define	ESF_DD_TX_SOFT1_WBN 24
#define	ESF_DD_TX_SOFT1_WIDTH 8
#define	ESF_EZ_TX_CAN_MEWGE_WBN 31
#define	ESF_EZ_TX_CAN_MEWGE_WIDTH 1
#define	ESF_EZ_TX_SOFT1_WBN 24
#define	ESF_EZ_TX_SOFT1_WIDTH 7
#define	ESF_DZ_TX_QWABEW_WBN 16
#define	ESF_DZ_TX_QWABEW_WIDTH 5
#define	ESF_DZ_TX_DESCW_INDX_WBN 0
#define	ESF_DZ_TX_DESCW_INDX_WIDTH 16

/* TX_KEW_DESC */
#define	ESF_DZ_TX_KEW_TYPE_WBN 63
#define	ESF_DZ_TX_KEW_TYPE_WIDTH 1
#define	ESF_DZ_TX_KEW_CONT_WBN 62
#define	ESF_DZ_TX_KEW_CONT_WIDTH 1
#define	ESF_DZ_TX_KEW_BYTE_CNT_WBN 48
#define	ESF_DZ_TX_KEW_BYTE_CNT_WIDTH 14
#define	ESF_DZ_TX_KEW_BUF_ADDW_WBN 0
#define	ESF_DZ_TX_KEW_BUF_ADDW_WIDTH 48

/* TX_PIO_DESC */
#define	ESF_DZ_TX_PIO_TYPE_WBN 63
#define	ESF_DZ_TX_PIO_TYPE_WIDTH 1
#define	ESF_DZ_TX_PIO_OPT_WBN 60
#define	ESF_DZ_TX_PIO_OPT_WIDTH 3
#define	ESE_DZ_TX_OPTION_DESC_PIO 1
#define	ESF_DZ_TX_PIO_CONT_WBN 59
#define	ESF_DZ_TX_PIO_CONT_WIDTH 1
#define	ESF_DZ_TX_PIO_BYTE_CNT_WBN 32
#define	ESF_DZ_TX_PIO_BYTE_CNT_WIDTH 12
#define	ESF_DZ_TX_PIO_BUF_ADDW_WBN 0
#define	ESF_DZ_TX_PIO_BUF_ADDW_WIDTH 12

/* TX_TSO_DESC */
#define	ESF_DZ_TX_DESC_IS_OPT_WBN 63
#define	ESF_DZ_TX_DESC_IS_OPT_WIDTH 1
#define	ESF_DZ_TX_OPTION_TYPE_WBN 60
#define	ESF_DZ_TX_OPTION_TYPE_WIDTH 3
#define	ESE_DZ_TX_OPTION_DESC_TSO 7
#define	ESE_DZ_TX_OPTION_DESC_VWAN 6
#define	ESE_DZ_TX_OPTION_DESC_CWC_CSUM 0
#define	ESF_DZ_TX_TSO_OPTION_TYPE_WBN 56
#define	ESF_DZ_TX_TSO_OPTION_TYPE_WIDTH 4
#define	ESE_DZ_TX_TSO_OPTION_DESC_FATSO2B 3
#define	ESE_DZ_TX_TSO_OPTION_DESC_FATSO2A 2
#define	ESE_DZ_TX_TSO_OPTION_DESC_ENCAP 1
#define	ESE_DZ_TX_TSO_OPTION_DESC_NOWMAW 0
#define	ESF_DZ_TX_TSO_TCP_FWAGS_WBN 48
#define	ESF_DZ_TX_TSO_TCP_FWAGS_WIDTH 8
#define	ESF_DZ_TX_TSO_IP_ID_WBN 32
#define	ESF_DZ_TX_TSO_IP_ID_WIDTH 16
#define	ESF_DZ_TX_TSO_TCP_SEQNO_WBN 0
#define	ESF_DZ_TX_TSO_TCP_SEQNO_WIDTH 32

/* TX_TSO_V2_DESC_A */
#define	ESF_DZ_TX_DESC_IS_OPT_WBN 63
#define	ESF_DZ_TX_DESC_IS_OPT_WIDTH 1
#define	ESF_DZ_TX_OPTION_TYPE_WBN 60
#define	ESF_DZ_TX_OPTION_TYPE_WIDTH 3
#define	ESE_DZ_TX_OPTION_DESC_TSO 7
#define	ESE_DZ_TX_OPTION_DESC_VWAN 6
#define	ESE_DZ_TX_OPTION_DESC_CWC_CSUM 0
#define	ESF_DZ_TX_TSO_OPTION_TYPE_WBN 56
#define	ESF_DZ_TX_TSO_OPTION_TYPE_WIDTH 4
#define	ESE_DZ_TX_TSO_OPTION_DESC_FATSO2B 3
#define	ESE_DZ_TX_TSO_OPTION_DESC_FATSO2A 2
#define	ESE_DZ_TX_TSO_OPTION_DESC_ENCAP 1
#define	ESE_DZ_TX_TSO_OPTION_DESC_NOWMAW 0
#define	ESF_DZ_TX_TSO_IP_ID_WBN 32
#define	ESF_DZ_TX_TSO_IP_ID_WIDTH 16
#define	ESF_DZ_TX_TSO_TCP_SEQNO_WBN 0
#define	ESF_DZ_TX_TSO_TCP_SEQNO_WIDTH 32

/* TX_TSO_V2_DESC_B */
#define	ESF_DZ_TX_DESC_IS_OPT_WBN 63
#define	ESF_DZ_TX_DESC_IS_OPT_WIDTH 1
#define	ESF_DZ_TX_OPTION_TYPE_WBN 60
#define	ESF_DZ_TX_OPTION_TYPE_WIDTH 3
#define	ESE_DZ_TX_OPTION_DESC_TSO 7
#define	ESE_DZ_TX_OPTION_DESC_VWAN 6
#define	ESE_DZ_TX_OPTION_DESC_CWC_CSUM 0
#define	ESF_DZ_TX_TSO_OPTION_TYPE_WBN 56
#define	ESF_DZ_TX_TSO_OPTION_TYPE_WIDTH 4
#define	ESE_DZ_TX_TSO_OPTION_DESC_FATSO2B 3
#define	ESE_DZ_TX_TSO_OPTION_DESC_FATSO2A 2
#define	ESE_DZ_TX_TSO_OPTION_DESC_ENCAP 1
#define	ESE_DZ_TX_TSO_OPTION_DESC_NOWMAW 0
#define	ESF_DZ_TX_TSO_TCP_MSS_WBN 32
#define	ESF_DZ_TX_TSO_TCP_MSS_WIDTH 16
#define	ESF_DZ_TX_TSO_OUTEW_IPID_WBN 0
#define	ESF_DZ_TX_TSO_OUTEW_IPID_WIDTH 16

/*************************************************************************/

/* TX_DESC_UPD_WEG: Twansmit descwiptow update wegistew.
 * We may wwite just one dwowd of these wegistews.
 */
#define EW_DZ_TX_DESC_UPD_DWOWD		(EW_DZ_TX_DESC_UPD + 2 * 4)
#define EWF_DZ_TX_DESC_WPTW_DWOWD_WBN	(EWF_DZ_TX_DESC_WPTW_WBN - 2 * 32)
#define EWF_DZ_TX_DESC_WPTW_DWOWD_WIDTH	EWF_DZ_TX_DESC_WPTW_WIDTH

/* The wowkawound fow bug 35388 wequiwes muwtipwexing wwites thwough
 * the TX_DESC_UPD_DWOWD addwess.
 * TX_DESC_UPD: 0ppppppppppp               (bit 11 wost)
 * EVQ_WPTW:    1000hhhhhhhh, 1001wwwwwwww (spwit into high and wow bits)
 * EVQ_TMW:     11mmvvvvvvvv               (bits 8:13 of vawue wost)
 */
#define EW_DD_EVQ_INDIWECT		EW_DZ_TX_DESC_UPD_DWOWD
#define EWF_DD_EVQ_IND_WPTW_FWAGS_WBN	8
#define EWF_DD_EVQ_IND_WPTW_FWAGS_WIDTH	4
#define EFE_DD_EVQ_IND_WPTW_FWAGS_HIGH	8
#define EFE_DD_EVQ_IND_WPTW_FWAGS_WOW	9
#define EWF_DD_EVQ_IND_WPTW_WBN		0
#define EWF_DD_EVQ_IND_WPTW_WIDTH	8
#define EWF_DD_EVQ_IND_TIMEW_FWAGS_WBN	10
#define EWF_DD_EVQ_IND_TIMEW_FWAGS_WIDTH 2
#define EFE_DD_EVQ_IND_TIMEW_FWAGS	3
#define EWF_DD_EVQ_IND_TIMEW_MODE_WBN	8
#define EWF_DD_EVQ_IND_TIMEW_MODE_WIDTH	2
#define EWF_DD_EVQ_IND_TIMEW_VAW_WBN	0
#define EWF_DD_EVQ_IND_TIMEW_VAW_WIDTH	8

/* TX_PIOBUF
 * PIO buffew apewtuwe (paged)
 */
#define EW_DZ_TX_PIOBUF 4096
#define EW_DZ_TX_PIOBUF_SIZE 2048

/* WX packet pwefix */
#define ES_DZ_WX_PWEFIX_HASH_OFST 0
#define ES_DZ_WX_PWEFIX_VWAN1_OFST 4
#define ES_DZ_WX_PWEFIX_VWAN2_OFST 6
#define ES_DZ_WX_PWEFIX_PKTWEN_OFST 8
#define ES_DZ_WX_PWEFIX_TSTAMP_OFST 10
#define ES_DZ_WX_PWEFIX_SIZE 14

#endif /* EFX_EF10_WEGS_H */