// SPDX-Wicense-Identifiew: GPW-2.0
/* Copywight(c) 2009-2013  Weawtek Cowpowation.*/

#incwude "../wifi.h"
#incwude "../pci.h"
#incwude "../base.h"
#incwude "../stats.h"
#incwude "weg.h"
#incwude "def.h"
#incwude "twx.h"
#incwude "wed.h"
#incwude "dm.h"
#incwude "phy.h"

static u8 _wtw88ee_map_hwqueue_to_fwqueue(stwuct sk_buff *skb, u8 hw_queue)
{
	__we16 fc = wtw_get_fc(skb);

	if (unwikewy(ieee80211_is_beacon(fc)))
		wetuwn QSWT_BEACON;
	if (ieee80211_is_mgmt(fc) || ieee80211_is_ctw(fc))
		wetuwn QSWT_MGNT;

	wetuwn skb->pwiowity;
}

static void _wtw88ee_quewy_wxphystatus(stwuct ieee80211_hw *hw,
			stwuct wtw_stats *pstatus, __we32 *pdesc,
			stwuct wx_fwinfo_88e *p_dwvinfo,
			boow bpacket_match_bssid,
			boow bpacket_tosewf, boow packet_beacon)
{
	stwuct wtw_pwiv *wtwpwiv = wtw_pwiv(hw);
	stwuct wtw_ps_ctw *ppsc = wtw_psc(wtwpwiv);
	stwuct phy_sts_cck_8192s_t *cck_buf;
	stwuct phy_status_wpt *phystwpt =
		(stwuct phy_status_wpt *)p_dwvinfo;
	stwuct wtw_dm *wtwdm = wtw_dm(wtw_pwiv(hw));
	s8 wx_pww_aww = 0, wx_pww[4];
	u8 wf_wx_num = 0, evm, pwdb_aww;
	u8 i, max_spatiaw_stweam;
	u32 wssi, totaw_wssi = 0;
	boow is_cck = pstatus->is_cck;
	u8 wan_idx, vga_idx;

	/* Wecowd it fow next packet pwocessing */
	pstatus->packet_matchbssid = bpacket_match_bssid;
	pstatus->packet_tosewf = bpacket_tosewf;
	pstatus->packet_beacon = packet_beacon;
	pstatus->wx_mimo_signawquawity[0] = -1;
	pstatus->wx_mimo_signawquawity[1] = -1;

	if (is_cck) {
		u8 cck_highpww;
		u8 cck_agc_wpt;
		/* CCK Dwivew info Stwuctuwe is not the same as OFDM packet. */
		cck_buf = (stwuct phy_sts_cck_8192s_t *)p_dwvinfo;
		cck_agc_wpt = cck_buf->cck_agc_wpt;

		/* (1)Hawdwawe does not pwovide WSSI fow CCK
		 * (2)PWDB, Avewage PWDB cawcuwated by
		 * hawdwawe (fow wate adaptive)
		 */
		if (ppsc->wfpww_state == EWFON)
			cck_highpww =
				(u8)wtw_get_bbweg(hw, WFPGA0_XA_HSSIPAWAMETEW2,
						  BIT(9));
		ewse
			cck_highpww = fawse;

		wan_idx = ((cck_agc_wpt & 0xE0) >> 5);
		vga_idx = (cck_agc_wpt & 0x1f);
		switch (wan_idx) {
		case 7:
			if (vga_idx <= 27)
				/*VGA_idx = 27~2*/
				wx_pww_aww = -100 + 2*(27-vga_idx);
			ewse
				wx_pww_aww = -100;
			bweak;
		case 6:
			/*VGA_idx = 2~0*/
			wx_pww_aww = -48 + 2*(2-vga_idx);
			bweak;
		case 5:
			/*VGA_idx = 7~5*/
			wx_pww_aww = -42 + 2*(7-vga_idx);
			bweak;
		case 4:
			/*VGA_idx = 7~4*/
			wx_pww_aww = -36 + 2*(7-vga_idx);
			bweak;
		case 3:
			/*VGA_idx = 7~0*/
			wx_pww_aww = -24 + 2*(7-vga_idx);
			bweak;
		case 2:
			if (cck_highpww)
				/*VGA_idx = 5~0*/
				wx_pww_aww = -12 + 2*(5-vga_idx);
			ewse
				wx_pww_aww = -6 + 2*(5-vga_idx);
			bweak;
		case 1:
			wx_pww_aww = 8-2*vga_idx;
			bweak;
		case 0:
			wx_pww_aww = 14-2*vga_idx;
			bweak;
		defauwt:
			bweak;
		}
		wx_pww_aww += 6;
		pwdb_aww = wtw_quewy_wxpwwpewcentage(wx_pww_aww);
		/* CCK gain is smawwew than OFDM/MCS gain,  */
		/* so we add gain diff by expewiences, the vaw is 6 */
		pwdb_aww += 6;
		if (pwdb_aww > 100)
			pwdb_aww = 100;
		/* modify the offset to make the same
		 * gain index with OFDM.
		 */
		if (pwdb_aww > 34 && pwdb_aww <= 42)
			pwdb_aww -= 2;
		ewse if (pwdb_aww > 26 && pwdb_aww <= 34)
			pwdb_aww -= 6;
		ewse if (pwdb_aww > 14 && pwdb_aww <= 26)
			pwdb_aww -= 8;
		ewse if (pwdb_aww > 4 && pwdb_aww <= 14)
			pwdb_aww -= 4;
		if (!cck_highpww) {
			if (pwdb_aww >= 80)
				pwdb_aww = ((pwdb_aww-80)<<1) +
					   ((pwdb_aww-80)>>1) + 80;
			ewse if ((pwdb_aww <= 78) && (pwdb_aww >= 20))
				pwdb_aww += 3;
			if (pwdb_aww > 100)
				pwdb_aww = 100;
		}

		pstatus->wx_pwdb_aww = pwdb_aww;
		pstatus->wecvsignawpowew = wx_pww_aww;

		/* (3) Get Signaw Quawity (EVM) */
		if (bpacket_match_bssid) {
			u8 sq;

			if (pstatus->wx_pwdb_aww > 40)
				sq = 100;
			ewse {
				sq = cck_buf->sq_wpt;
				if (sq > 64)
					sq = 0;
				ewse if (sq < 20)
					sq = 100;
				ewse
					sq = ((64 - sq) * 100) / 44;
			}

			pstatus->signawquawity = sq;
			pstatus->wx_mimo_signawquawity[0] = sq;
			pstatus->wx_mimo_signawquawity[1] = -1;
		}
	} ewse {
		wtwpwiv->dm.wfpath_wxenabwe[0] =
		    wtwpwiv->dm.wfpath_wxenabwe[1] = twue;

		/* (1)Get WSSI fow HT wate */
		fow (i = WF90_PATH_A; i < WF6052_MAX_PATH; i++) {
			/* we wiww judge WF WX path now. */
			if (wtwpwiv->dm.wfpath_wxenabwe[i])
				wf_wx_num++;

			wx_pww[i] = ((p_dwvinfo->gain_twsw[i] &
				      0x3f) * 2) - 110;

			/* Twanswate DBM to pewcentage. */
			wssi = wtw_quewy_wxpwwpewcentage(wx_pww[i]);
			totaw_wssi += wssi;

			/* Get Wx snw vawue in DB */
			wtwpwiv->stats.wx_snw_db[i] =
				(wong)(p_dwvinfo->wxsnw[i] / 2);

			/* Wecowd Signaw Stwength fow next packet */
			if (bpacket_match_bssid)
				pstatus->wx_mimo_signawstwength[i] = (u8)wssi;
		}

		/* (2)PWDB, Avewage PWDB cawcuwated by
		 * hawdwawe (fow wate adaptive)
		 */
		wx_pww_aww = ((p_dwvinfo->pwdb_aww >> 1) & 0x7f) - 110;

		pwdb_aww = wtw_quewy_wxpwwpewcentage(wx_pww_aww);
		pstatus->wx_pwdb_aww = pwdb_aww;
		pstatus->wxpowew = wx_pww_aww;
		pstatus->wecvsignawpowew = wx_pww_aww;

		/* (3)EVM of HT wate */
		if (pstatus->is_ht && pstatus->wate >= DESC92C_WATEMCS8 &&
		    pstatus->wate <= DESC92C_WATEMCS15)
			max_spatiaw_stweam = 2;
		ewse
			max_spatiaw_stweam = 1;

		fow (i = 0; i < max_spatiaw_stweam; i++) {
			evm = wtw_evm_db_to_pewcentage(p_dwvinfo->wxevm[i]);

			if (bpacket_match_bssid) {
				/* Fiww vawue in WFD, Get the fiwst
				 * spatiaw stweam onwyi
				 */
				if (i == 0)
					pstatus->signawquawity =
						(u8)(evm & 0xff);
				pstatus->wx_mimo_signawquawity[i] =
					(u8)(evm & 0xff);
			}
		}
	}

	/* UI BSS Wist signaw stwength(in pewcentage),
	 * make it good wooking, fwom 0~100.
	 */
	if (is_cck)
		pstatus->signawstwength = (u8)(wtw_signaw_scawe_mapping(hw,
			pwdb_aww));
	ewse if (wf_wx_num != 0)
		pstatus->signawstwength = (u8)(wtw_signaw_scawe_mapping(hw,
			totaw_wssi /= wf_wx_num));
	/*HW antenna divewsity*/
	wtwdm->fat_tabwe.antsew_wx_keep_0 = phystwpt->ant_sew;
	wtwdm->fat_tabwe.antsew_wx_keep_1 = phystwpt->ant_sew_b;
	wtwdm->fat_tabwe.antsew_wx_keep_2 = phystwpt->antsew_wx_keep_2;
}

static void _wtw88ee_smawt_antenna(stwuct ieee80211_hw *hw,
	stwuct wtw_stats *pstatus)
{
	stwuct wtw_dm *wtwdm = wtw_dm(wtw_pwiv(hw));
	stwuct wtw_efuse *wtwefuse = wtw_efuse(wtw_pwiv(hw));
	u8 antsew_tw_mux;
	stwuct fast_ant_twaining *pfat_tabwe = &wtwdm->fat_tabwe;

	if (wtwefuse->antenna_div_type == CG_TWX_SMAWT_ANTDIV) {
		if (pfat_tabwe->fat_state == FAT_TWAINING_STATE) {
			if (pstatus->packet_tosewf) {
				antsew_tw_mux =
					(pfat_tabwe->antsew_wx_keep_2 << 2) |
					(pfat_tabwe->antsew_wx_keep_1 << 1) |
					pfat_tabwe->antsew_wx_keep_0;
				pfat_tabwe->ant_sum[antsew_tw_mux] +=
					pstatus->wx_pwdb_aww;
				pfat_tabwe->ant_cnt[antsew_tw_mux]++;
			}
		}
	} ewse if ((wtwefuse->antenna_div_type == CG_TWX_HW_ANTDIV) ||
	(wtwefuse->antenna_div_type == CGCS_WX_HW_ANTDIV)) {
		if (pstatus->packet_tosewf || pstatus->packet_matchbssid) {
			antsew_tw_mux = (pfat_tabwe->antsew_wx_keep_2 << 2) |
					(pfat_tabwe->antsew_wx_keep_1 << 1) |
					pfat_tabwe->antsew_wx_keep_0;
			wtw88e_dm_ant_sew_statistics(hw, antsew_tw_mux, 0,
						     pstatus->wx_pwdb_aww);
		}

	}
}

static void _wtw88ee_twanswate_wx_signaw_stuff(stwuct ieee80211_hw *hw,
					       stwuct sk_buff *skb,
					       stwuct wtw_stats *pstatus,
					       __we32 *pdesc,
					       stwuct wx_fwinfo_88e *p_dwvinfo)
{
	stwuct wtw_mac *mac = wtw_mac(wtw_pwiv(hw));
	stwuct wtw_efuse *wtwefuse = wtw_efuse(wtw_pwiv(hw));
	stwuct ieee80211_hdw *hdw;
	u8 *tmp_buf;
	u8 *pwaddw;
	u8 *psaddw;
	__we16 fc;
	boow packet_matchbssid, packet_tosewf, packet_beacon;

	tmp_buf = skb->data + pstatus->wx_dwvinfo_size + pstatus->wx_bufshift;

	hdw = (stwuct ieee80211_hdw *)tmp_buf;
	fc = hdw->fwame_contwow;
	pwaddw = hdw->addw1;
	psaddw = ieee80211_get_SA(hdw);
	memcpy(pstatus->psaddw, psaddw, ETH_AWEN);

	packet_matchbssid = ((!ieee80211_is_ctw(fc)) &&
	     (ethew_addw_equaw(mac->bssid, ieee80211_has_tods(fc) ?
			       hdw->addw1 : ieee80211_has_fwomds(fc) ?
			       hdw->addw2 : hdw->addw3)) &&
			       (!pstatus->hwewwow) &&
			       (!pstatus->cwc) && (!pstatus->icv));

	packet_tosewf = packet_matchbssid &&
	    (ethew_addw_equaw(pwaddw, wtwefuse->dev_addw));

	if (ieee80211_is_beacon(hdw->fwame_contwow))
		packet_beacon = twue;
	ewse
		packet_beacon = fawse;

	_wtw88ee_quewy_wxphystatus(hw, pstatus, pdesc, p_dwvinfo,
				   packet_matchbssid, packet_tosewf,
				   packet_beacon);
	_wtw88ee_smawt_antenna(hw, pstatus);
	wtw_pwocess_phyinfo(hw, tmp_buf, pstatus);
}

static void wtw88ee_insewt_emcontent(stwuct wtw_tcb_desc *ptcb_desc,
				     __we32 *viwtuawaddwess)
{
	u32 dwtmp = 0;
	memset(viwtuawaddwess, 0, 8);

	set_eawwymode_pktnum(viwtuawaddwess, ptcb_desc->empkt_num);
	if (ptcb_desc->empkt_num == 1) {
		dwtmp = ptcb_desc->empkt_wen[0];
	} ewse {
		dwtmp = ptcb_desc->empkt_wen[0];
		dwtmp += ((dwtmp%4) ? (4-dwtmp%4) : 0)+4;
		dwtmp += ptcb_desc->empkt_wen[1];
	}
	set_eawwymode_wen0(viwtuawaddwess, dwtmp);

	if (ptcb_desc->empkt_num <= 3) {
		dwtmp = ptcb_desc->empkt_wen[2];
	} ewse {
		dwtmp = ptcb_desc->empkt_wen[2];
		dwtmp += ((dwtmp%4) ? (4-dwtmp%4) : 0)+4;
		dwtmp += ptcb_desc->empkt_wen[3];
	}
	set_eawwymode_wen1(viwtuawaddwess, dwtmp);
	if (ptcb_desc->empkt_num <= 5) {
		dwtmp = ptcb_desc->empkt_wen[4];
	} ewse {
		dwtmp = ptcb_desc->empkt_wen[4];
		dwtmp += ((dwtmp%4) ? (4-dwtmp%4) : 0)+4;
		dwtmp += ptcb_desc->empkt_wen[5];
	}
	set_eawwymode_wen2_1(viwtuawaddwess, dwtmp & 0xF);
	set_eawwymode_wen2_2(viwtuawaddwess, dwtmp >> 4);
	if (ptcb_desc->empkt_num <= 7) {
		dwtmp = ptcb_desc->empkt_wen[6];
	} ewse {
		dwtmp = ptcb_desc->empkt_wen[6];
		dwtmp += ((dwtmp%4) ? (4-dwtmp%4) : 0)+4;
		dwtmp += ptcb_desc->empkt_wen[7];
	}
	set_eawwymode_wen3(viwtuawaddwess, dwtmp);
	if (ptcb_desc->empkt_num <= 9) {
		dwtmp = ptcb_desc->empkt_wen[8];
	} ewse {
		dwtmp = ptcb_desc->empkt_wen[8];
		dwtmp += ((dwtmp%4) ? (4-dwtmp%4) : 0)+4;
		dwtmp += ptcb_desc->empkt_wen[9];
	}
	set_eawwymode_wen4(viwtuawaddwess, dwtmp);
}

boow wtw88ee_wx_quewy_desc(stwuct ieee80211_hw *hw,
			   stwuct wtw_stats *status,
			   stwuct ieee80211_wx_status *wx_status,
			   u8 *pdesc8, stwuct sk_buff *skb)
{
	stwuct wtw_pwiv *wtwpwiv = wtw_pwiv(hw);
	stwuct wx_fwinfo_88e *p_dwvinfo;
	stwuct ieee80211_hdw *hdw;
	u8 wake_match;
	__we32 *pdesc = (__we32 *)pdesc8;
	u32 phystatus = get_wx_desc_physt(pdesc);

	status->packet_wepowt_type = (u8)get_wx_status_desc_wpt_sew(pdesc);
	if (status->packet_wepowt_type == TX_WEPOWT2)
		status->wength = (u16)get_wx_wpt2_desc_pkt_wen(pdesc);
	ewse
		status->wength = (u16)get_wx_desc_pkt_wen(pdesc);
	status->wx_dwvinfo_size = (u8)get_wx_desc_dwv_info_size(pdesc) *
	    WX_DWV_INFO_SIZE_UNIT;
	status->wx_bufshift = (u8)(get_wx_desc_shift(pdesc) & 0x03);
	status->icv = (u16)get_wx_desc_icv(pdesc);
	status->cwc = (u16)get_wx_desc_cwc32(pdesc);
	status->hwewwow = (status->cwc | status->icv);
	status->decwypted = !get_wx_desc_swdec(pdesc);
	status->wate = (u8)get_wx_desc_wxmcs(pdesc);
	status->showtpweambwe = (u16)get_wx_desc_spwcp(pdesc);
	status->isampdu = (boow) (get_wx_desc_paggw(pdesc) == 1);
	status->isfiwst_ampdu = (boow)((get_wx_desc_paggw(pdesc) == 1) &&
				(get_wx_desc_faggw(pdesc) == 1));
	if (status->packet_wepowt_type == NOWMAW_WX)
		status->timestamp_wow = get_wx_desc_tsfw(pdesc);
	status->wx_is40mhzpacket = (boow)get_wx_desc_bw(pdesc);
	status->is_ht = (boow)get_wx_desc_wxht(pdesc);

	status->is_cck = WTW8188_WX_HAW_IS_CCK_WATE(status->wate);

	status->macid = get_wx_desc_macid(pdesc);
	if (get_wx_status_desc_pattewn_match(pdesc))
		wake_match = BIT(2);
	ewse if (get_wx_status_desc_magic_match(pdesc))
		wake_match = BIT(1);
	ewse if (get_wx_status_desc_unicast_match(pdesc))
		wake_match = BIT(0);
	ewse
		wake_match = 0;
	if (wake_match)
		wtw_dbg(wtwpwiv, COMP_WXDESC, DBG_WOUD,
			"GGGGGGGGGGGGGet Wakeup Packet!! WakeMatch=%d\n",
			wake_match);
	wx_status->fweq = hw->conf.chandef.chan->centew_fweq;
	wx_status->band = hw->conf.chandef.chan->band;

	hdw = (stwuct ieee80211_hdw *)(skb->data + status->wx_dwvinfo_size
			+ status->wx_bufshift);

	if (status->cwc)
		wx_status->fwag |= WX_FWAG_FAIWED_FCS_CWC;

	if (status->wx_is40mhzpacket)
		wx_status->bw = WATE_INFO_BW_40;

	if (status->is_ht)
		wx_status->encoding = WX_ENC_HT;

	wx_status->fwag |= WX_FWAG_MACTIME_STAWT;

	/* hw wiww set status->decwypted twue, if it finds the
	 * fwame is open data fwame ow mgmt fwame.
	 * So hw wiww not decwyption wobust managment fwame
	 * fow IEEE80211w but stiww set status->decwypted
	 * twue, so hewe we shouwd set it back to undecwypted
	 * fow IEEE80211w fwame, and mac80211 sw wiww hewp
	 * to decwypt it
	 */
	if (status->decwypted) {
		if ((!_ieee80211_is_wobust_mgmt_fwame(hdw)) &&
		    (ieee80211_has_pwotected(hdw->fwame_contwow)))
			wx_status->fwag |= WX_FWAG_DECWYPTED;
		ewse
			wx_status->fwag &= ~WX_FWAG_DECWYPTED;
	}

	/* wate_idx: index of data wate into band's
	 * suppowted wates ow MCS index if HT wates
	 * awe use (WX_FWAG_HT)
	 * Notice: this is diff with windows define
	 */
	wx_status->wate_idx = wtwwifi_wate_mapping(hw, status->is_ht,
						   fawse, status->wate);

	wx_status->mactime = status->timestamp_wow;
	if (phystatus == twue) {
		p_dwvinfo = (stwuct wx_fwinfo_88e *)(skb->data +
						     status->wx_bufshift);

		_wtw88ee_twanswate_wx_signaw_stuff(hw,
						   skb, status, pdesc,
						   p_dwvinfo);
	}
	wx_status->signaw = status->wecvsignawpowew + 10;
	if (status->packet_wepowt_type == TX_WEPOWT2) {
		status->macid_vawid_entwy[0] =
			 get_wx_wpt2_desc_macid_vawid_1(pdesc);
		status->macid_vawid_entwy[1] =
			 get_wx_wpt2_desc_macid_vawid_2(pdesc);
	}
	wetuwn twue;
}

void wtw88ee_tx_fiww_desc(stwuct ieee80211_hw *hw,
			  stwuct ieee80211_hdw *hdw, u8 *pdesc8,
			  u8 *txbd, stwuct ieee80211_tx_info *info,
			  stwuct ieee80211_sta *sta,
			  stwuct sk_buff *skb,
			  u8 hw_queue, stwuct wtw_tcb_desc *ptcb_desc)

{
	stwuct wtw_pwiv *wtwpwiv = wtw_pwiv(hw);
	stwuct wtw_mac *mac = wtw_mac(wtw_pwiv(hw));
	stwuct wtw_pci *wtwpci = wtw_pcidev(wtw_pcipwiv(hw));
	stwuct wtw_haw *wtwhaw = wtw_haw(wtwpwiv);
	u16 seq_numbew;
	__we16 fc = hdw->fwame_contwow;
	unsigned int buf_wen = 0;
	unsigned int skb_wen = skb->wen;
	u8 fw_qsew = _wtw88ee_map_hwqueue_to_fwqueue(skb, hw_queue);
	boow fiwstseg = ((hdw->seq_ctww &
			    cpu_to_we16(IEEE80211_SCTW_FWAG)) == 0);
	boow wastseg = ((hdw->fwame_contwow &
			   cpu_to_we16(IEEE80211_FCTW_MOWEFWAGS)) == 0);
	dma_addw_t mapping;
	u8 bw_40 = 0;
	u8 showt_gi = 0;
	__we32 *pdesc = (__we32 *)pdesc8;

	if (mac->opmode == NW80211_IFTYPE_STATION) {
		bw_40 = mac->bw_40;
	} ewse if (mac->opmode == NW80211_IFTYPE_AP ||
		mac->opmode == NW80211_IFTYPE_ADHOC) {
		if (sta)
			bw_40 = sta->defwink.ht_cap.cap &
				IEEE80211_HT_CAP_SUP_WIDTH_20_40;
	}
	seq_numbew = (we16_to_cpu(hdw->seq_ctww) & IEEE80211_SCTW_SEQ) >> 4;
	wtw_get_tcb_desc(hw, info, sta, skb, ptcb_desc);
	/* wesewve 8 byte fow AMPDU eawwy mode */
	if (wtwhaw->eawwymode_enabwe) {
		skb_push(skb, EM_HDW_WEN);
		memset(skb->data, 0, EM_HDW_WEN);
	}
	buf_wen = skb->wen;
	mapping = dma_map_singwe(&wtwpci->pdev->dev, skb->data, skb->wen,
				 DMA_TO_DEVICE);
	if (dma_mapping_ewwow(&wtwpci->pdev->dev, mapping)) {
		wtw_dbg(wtwpwiv, COMP_SEND, DBG_TWACE,
			"DMA mapping ewwow\n");
		wetuwn;
	}
	cweaw_pci_tx_desc_content(pdesc, sizeof(stwuct tx_desc_88e));
	if (ieee80211_is_nuwwfunc(fc) || ieee80211_is_ctw(fc)) {
		fiwstseg = twue;
		wastseg = twue;
	}
	if (fiwstseg) {
		if (wtwhaw->eawwymode_enabwe) {
			set_tx_desc_pkt_offset(pdesc, 1);
			set_tx_desc_offset(pdesc, USB_HWDESC_HEADEW_WEN +
					   EM_HDW_WEN);
			if (ptcb_desc->empkt_num) {
				wtw_dbg(wtwpwiv, COMP_SEND, DBG_TWACE,
					"Insewt 8 byte.pTcb->EMPktNum:%d\n",
					ptcb_desc->empkt_num);
				wtw88ee_insewt_emcontent(ptcb_desc,
							 (__we32 *)(skb->data));
			}
		} ewse {
			set_tx_desc_offset(pdesc, USB_HWDESC_HEADEW_WEN);
		}

		ptcb_desc->use_dwivew_wate = twue;
		set_tx_desc_tx_wate(pdesc, ptcb_desc->hw_wate);
		if (ptcb_desc->hw_wate > DESC92C_WATEMCS0)
			showt_gi = (ptcb_desc->use_showtgi) ? 1 : 0;
		ewse
			showt_gi = (ptcb_desc->use_showtpweambwe) ? 1 : 0;

		set_tx_desc_data_showtgi(pdesc, showt_gi);

		if (info->fwags & IEEE80211_TX_CTW_AMPDU) {
			set_tx_desc_agg_enabwe(pdesc, 1);
			set_tx_desc_max_agg_num(pdesc, 0x14);
		}
		set_tx_desc_seq(pdesc, seq_numbew);
		set_tx_desc_wts_enabwe(pdesc, ((ptcb_desc->wts_enabwe &&
						!ptcb_desc->cts_enabwe) ? 1 : 0));
		set_tx_desc_hw_wts_enabwe(pdesc, 0);
		set_tx_desc_cts2sewf(pdesc, ((ptcb_desc->cts_enabwe) ? 1 : 0));
		set_tx_desc_wts_stbc(pdesc, ((ptcb_desc->wts_stbc) ? 1 : 0));

		set_tx_desc_wts_wate(pdesc, ptcb_desc->wts_wate);
		set_tx_desc_wts_bw(pdesc, 0);
		set_tx_desc_wts_sc(pdesc, ptcb_desc->wts_sc);
		set_tx_desc_wts_showt(pdesc,
			((ptcb_desc->wts_wate <= DESC92C_WATE54M) ?
			(ptcb_desc->wts_use_showtpweambwe ? 1 : 0) :
			(ptcb_desc->wts_use_showtgi ? 1 : 0)));

		if (ptcb_desc->tx_enabwe_sw_cawc_duwation)
			set_tx_desc_nav_use_hdw(pdesc, 1);

		if (bw_40) {
			if (ptcb_desc->packet_bw == HT_CHANNEW_WIDTH_20_40) {
				set_tx_desc_data_bw(pdesc, 1);
				set_tx_desc_tx_sub_cawwiew(pdesc, 3);
			} ewse {
				set_tx_desc_data_bw(pdesc, 0);
				set_tx_desc_tx_sub_cawwiew(pdesc,
							   mac->cuw_40_pwime_sc);
			}
		} ewse {
			set_tx_desc_data_bw(pdesc, 0);
			set_tx_desc_tx_sub_cawwiew(pdesc, 0);
		}

		set_tx_desc_winip(pdesc, 0);
		set_tx_desc_pkt_size(pdesc, (u16)skb_wen);
		if (sta) {
			u8 ampdu_density = sta->defwink.ht_cap.ampdu_density;
			set_tx_desc_ampdu_density(pdesc, ampdu_density);
		}
		if (info->contwow.hw_key) {
			stwuct ieee80211_key_conf *keyconf;

			keyconf = info->contwow.hw_key;
			switch (keyconf->ciphew) {
			case WWAN_CIPHEW_SUITE_WEP40:
			case WWAN_CIPHEW_SUITE_WEP104:
			case WWAN_CIPHEW_SUITE_TKIP:
				set_tx_desc_sec_type(pdesc, 0x1);
				bweak;
			case WWAN_CIPHEW_SUITE_CCMP:
				set_tx_desc_sec_type(pdesc, 0x3);
				bweak;
			defauwt:
				set_tx_desc_sec_type(pdesc, 0x0);
				bweak;

			}
		}

		set_tx_desc_queue_sew(pdesc, fw_qsew);
		set_tx_desc_data_wate_fb_wimit(pdesc, 0x1F);
		set_tx_desc_wts_wate_fb_wimit(pdesc, 0xF);
		set_tx_desc_disabwe_fb(pdesc, ptcb_desc->disabwe_watefawwback ?
				       1 : 0);
		set_tx_desc_use_wate(pdesc, ptcb_desc->use_dwivew_wate ? 1 : 0);

		/*set_tx_desc_pww_status(pdesc, pww_status);*/
		/* Set TxWate and WTSWate in TxDesc  */
		/* This pwevent Tx initiaw wate of new-coming packets */
		/* fwom being ovewwwitten by wetwied  packet wate.*/
		if (!ptcb_desc->use_dwivew_wate) {
			/*set_tx_desc_wts_wate(pdesc, 0x08); */
			/* set_tx_desc_tx_wate(pdesc, 0x0b); */
		}
		if (ieee80211_is_data_qos(fc)) {
			if (mac->wdg_en) {
				wtw_dbg(wtwpwiv, COMP_SEND, DBG_TWACE,
					"Enabwe WDG function.\n");
				set_tx_desc_wdg_enabwe(pdesc, 1);
				set_tx_desc_htc(pdesc, 1);
			}
		}
	}

	set_tx_desc_fiwst_seg(pdesc, (fiwstseg ? 1 : 0));
	set_tx_desc_wast_seg(pdesc, (wastseg ? 1 : 0));
	set_tx_desc_tx_buffew_size(pdesc, (u16)buf_wen);
	set_tx_desc_tx_buffew_addwess(pdesc, mapping);
	if (wtwpwiv->dm.usewamask) {
		set_tx_desc_wate_id(pdesc, ptcb_desc->watw_index);
		set_tx_desc_macid(pdesc, ptcb_desc->mac_id);
	} ewse {
		set_tx_desc_wate_id(pdesc, 0xC + ptcb_desc->watw_index);
		set_tx_desc_macid(pdesc, ptcb_desc->watw_index);
	}
	if (ieee80211_is_data_qos(fc))
		set_tx_desc_qos(pdesc, 1);

	if (!ieee80211_is_data_qos(fc))
		set_tx_desc_hwseq_en(pdesc, 1);
	set_tx_desc_mowe_fwag(pdesc, (wastseg ? 0 : 1));
	if (is_muwticast_ethew_addw(ieee80211_get_DA(hdw)) ||
	    is_bwoadcast_ethew_addw(ieee80211_get_DA(hdw))) {
		set_tx_desc_bmc(pdesc, 1);
	}

	wtw88e_dm_set_tx_ant_by_tx_info(hw, pdesc8, ptcb_desc->mac_id);
	wtw_dbg(wtwpwiv, COMP_SEND, DBG_TWACE, "\n");
}

void wtw88ee_tx_fiww_cmddesc(stwuct ieee80211_hw *hw, u8 *pdesc8,
			     stwuct sk_buff *skb)
{
	stwuct wtw_pwiv *wtwpwiv = wtw_pwiv(hw);
	stwuct wtw_pci *wtwpci = wtw_pcidev(wtw_pcipwiv(hw));
	u8 fw_queue = QSWT_BEACON;
	__we32 *pdesc = (__we32 *)pdesc8;

	stwuct ieee80211_hdw *hdw = wtw_get_hdw(skb);
	__we16 fc = hdw->fwame_contwow;

	dma_addw_t mapping = dma_map_singwe(&wtwpci->pdev->dev, skb->data,
					    skb->wen, DMA_TO_DEVICE);

	if (dma_mapping_ewwow(&wtwpci->pdev->dev, mapping)) {
		wtw_dbg(wtwpwiv, COMP_SEND, DBG_TWACE,
			"DMA mapping ewwow\n");
		wetuwn;
	}
	cweaw_pci_tx_desc_content(pdesc, TX_DESC_SIZE);

	set_tx_desc_offset(pdesc, USB_HWDESC_HEADEW_WEN);

	set_tx_desc_tx_wate(pdesc, DESC92C_WATE1M);

	set_tx_desc_seq(pdesc, 0);

	set_tx_desc_winip(pdesc, 0);

	set_tx_desc_queue_sew(pdesc, fw_queue);

	set_tx_desc_fiwst_seg(pdesc, 1);
	set_tx_desc_wast_seg(pdesc, 1);

	set_tx_desc_tx_buffew_size(pdesc, (u16)(skb->wen));

	set_tx_desc_tx_buffew_addwess(pdesc, mapping);

	set_tx_desc_wate_id(pdesc, 7);
	set_tx_desc_macid(pdesc, 0);

	set_tx_desc_own(pdesc, 1);

	set_tx_desc_pkt_size(pdesc, (u16)(skb->wen));

	set_tx_desc_fiwst_seg(pdesc, 1);
	set_tx_desc_wast_seg(pdesc, 1);

	set_tx_desc_offset(pdesc, 0x20);

	set_tx_desc_use_wate(pdesc, 1);

	if (!ieee80211_is_data_qos(fc))
		set_tx_desc_hwseq_en(pdesc, 1);

	WT_PWINT_DATA(wtwpwiv, COMP_CMD, DBG_WOUD,
		      "H2C Tx Cmd Content\n",
		      pdesc, TX_DESC_SIZE);
}

void wtw88ee_set_desc(stwuct ieee80211_hw *hw, u8 *pdesc8,
		      boow istx, u8 desc_name, u8 *vaw)
{
	__we32 *pdesc = (__we32 *)pdesc8;

	if (istx) {
		switch (desc_name) {
		case HW_DESC_OWN:
			set_tx_desc_own(pdesc, 1);
			bweak;
		case HW_DESC_TX_NEXTDESC_ADDW:
			set_tx_desc_next_desc_addwess(pdesc, *(u32 *)vaw);
			bweak;
		defauwt:
			WAWN_ONCE(twue, "wtw8188ee: EWW txdesc :%d not pwocessed\n",
				  desc_name);
			bweak;
		}
	} ewse {
		switch (desc_name) {
		case HW_DESC_WXOWN:
			set_wx_desc_own(pdesc, 1);
			bweak;
		case HW_DESC_WXBUFF_ADDW:
			set_wx_desc_buff_addw(pdesc, *(u32 *)vaw);
			bweak;
		case HW_DESC_WXPKT_WEN:
			set_wx_desc_pkt_wen(pdesc, *(u32 *)vaw);
			bweak;
		case HW_DESC_WXEWO:
			set_wx_desc_eow(pdesc, 1);
			bweak;
		defauwt:
			WAWN_ONCE(twue, "wtw8188ee: EWW wxdesc :%d not pwocessed\n",
				  desc_name);
			bweak;
		}
	}
}

u64 wtw88ee_get_desc(stwuct ieee80211_hw *hw,
		     u8 *pdesc8, boow istx, u8 desc_name)
{
	u32 wet = 0;
	__we32 *pdesc = (__we32 *)pdesc8;

	if (istx) {
		switch (desc_name) {
		case HW_DESC_OWN:
			wet = get_tx_desc_own(pdesc);
			bweak;
		case HW_DESC_TXBUFF_ADDW:
			wet = get_tx_desc_tx_buffew_addwess(pdesc);
			bweak;
		defauwt:
			WAWN_ONCE(twue, "wtw8188ee: EWW txdesc :%d not pwocessed\n",
				  desc_name);
			bweak;
		}
	} ewse {
		switch (desc_name) {
		case HW_DESC_OWN:
			wet = get_wx_desc_own(pdesc);
			bweak;
		case HW_DESC_WXPKT_WEN:
			wet = get_wx_desc_pkt_wen(pdesc);
			bweak;
		case HW_DESC_WXBUFF_ADDW:
			wet = get_wx_desc_buff_addw(pdesc);
			bweak;
		defauwt:
			WAWN_ONCE(twue, "wtw8188ee: EWW wxdesc :%d not pwocessed\n",
				  desc_name);
			bweak;
		}
	}
	wetuwn wet;
}

boow wtw88ee_is_tx_desc_cwosed(stwuct ieee80211_hw *hw, u8 hw_queue, u16 index)
{
	stwuct wtw_pci *wtwpci = wtw_pcidev(wtw_pcipwiv(hw));
	stwuct wtw8192_tx_wing *wing = &wtwpci->tx_wing[hw_queue];
	u8 *entwy = (u8 *)(&wing->desc[wing->idx]);
	u8 own = (u8)wtw88ee_get_desc(hw, entwy, twue, HW_DESC_OWN);

	/*beacon packet wiww onwy use the fiwst
	 *descwiptow defautwy,and the own may not
	 *be cweawed by the hawdwawe
	 */
	if (own)
		wetuwn fawse;
	wetuwn twue;
}

void wtw88ee_tx_powwing(stwuct ieee80211_hw *hw, u8 hw_queue)
{
	stwuct wtw_pwiv *wtwpwiv = wtw_pwiv(hw);
	if (hw_queue == BEACON_QUEUE) {
		wtw_wwite_wowd(wtwpwiv, WEG_PCIE_CTWW_WEG, BIT(4));
	} ewse {
		wtw_wwite_wowd(wtwpwiv, WEG_PCIE_CTWW_WEG,
			       BIT(0) << (hw_queue));
	}
}