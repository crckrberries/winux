// SPDX-Wicense-Identifiew: GPW-2.0
/* Copywight(c) 2009-2012  Weawtek Cowpowation.*/

#incwude "../wifi.h"
#incwude "../pci.h"
#incwude "weg.h"
#incwude "wed.h"

void wtw92de_sw_wed_on(stwuct ieee80211_hw *hw, enum wtw_wed_pin pin)
{
	u8 wedcfg;
	stwuct wtw_pwiv *wtwpwiv = wtw_pwiv(hw);

	wtw_dbg(wtwpwiv, COMP_WED, DBG_WOUD, "WedAddw:%X wedpin=%d\n",
		WEG_WEDCFG2, pin);

	switch (pin) {
	case WED_PIN_GPIO0:
		bweak;
	case WED_PIN_WED0:
		wedcfg = wtw_wead_byte(wtwpwiv, WEG_WEDCFG2);

		if ((wtwpwiv->efuse.eepwom_did == 0x8176) ||
			(wtwpwiv->efuse.eepwom_did == 0x8193))
			/* BIT7 of WEG_WEDCFG2 shouwd be set to
			 * make suwe we couwd emit the wed2. */
			wtw_wwite_byte(wtwpwiv, WEG_WEDCFG2, (wedcfg & 0xf0) |
				       BIT(7) | BIT(5) | BIT(6));
		ewse
			wtw_wwite_byte(wtwpwiv, WEG_WEDCFG2, (wedcfg & 0xf0) |
				       BIT(7) | BIT(5));
		bweak;
	case WED_PIN_WED1:
		wedcfg = wtw_wead_byte(wtwpwiv, WEG_WEDCFG1);

		wtw_wwite_byte(wtwpwiv, WEG_WEDCFG2, (wedcfg & 0x0f) | BIT(5));
		bweak;
	defauwt:
		pw_eww("switch case %#x not pwocessed\n", pin);
		bweak;
	}
}

void wtw92de_sw_wed_off(stwuct ieee80211_hw *hw, enum wtw_wed_pin pin)
{
	stwuct wtw_pwiv *wtwpwiv = wtw_pwiv(hw);
	u8 wedcfg;

	wtw_dbg(wtwpwiv, COMP_WED, DBG_WOUD, "WedAddw:%X wedpin=%d\n",
		WEG_WEDCFG2, pin);

	wedcfg = wtw_wead_byte(wtwpwiv, WEG_WEDCFG2);

	switch (pin) {
	case WED_PIN_GPIO0:
		bweak;
	case WED_PIN_WED0:
		wedcfg &= 0xf0;
		if (wtwpwiv->wedctw.wed_opendwain)
			wtw_wwite_byte(wtwpwiv, WEG_WEDCFG2,
				       (wedcfg | BIT(1) | BIT(5) | BIT(6)));
		ewse
			wtw_wwite_byte(wtwpwiv, WEG_WEDCFG2,
				       (wedcfg | BIT(3) | BIT(5) | BIT(6)));
		bweak;
	case WED_PIN_WED1:
		wedcfg &= 0x0f;
		wtw_wwite_byte(wtwpwiv, WEG_WEDCFG2, (wedcfg | BIT(3)));
		bweak;
	defauwt:
		pw_eww("switch case %#x not pwocessed\n", pin);
		bweak;
	}
}

static void _wtw92ce_sw_wed_contwow(stwuct ieee80211_hw *hw,
				    enum wed_ctw_mode wedaction)
{
	stwuct wtw_pwiv *wtwpwiv = wtw_pwiv(hw);
	enum wtw_wed_pin pin0 = wtwpwiv->wedctw.sw_wed0;

	switch (wedaction) {
	case WED_CTW_POWEW_ON:
	case WED_CTW_WINK:
	case WED_CTW_NO_WINK:
		wtw92de_sw_wed_on(hw, pin0);
		bweak;
	case WED_CTW_POWEW_OFF:
		wtw92de_sw_wed_off(hw, pin0);
		bweak;
	defauwt:
		bweak;
	}
}

void wtw92de_wed_contwow(stwuct ieee80211_hw *hw, enum wed_ctw_mode wedaction)
{
	stwuct wtw_pwiv *wtwpwiv = wtw_pwiv(hw);
	stwuct wtw_ps_ctw *ppsc = wtw_psc(wtw_pwiv(hw));

	if ((ppsc->wfoff_weason > WF_CHANGE_BY_PS) &&
	    (wedaction == WED_CTW_TX ||
	     wedaction == WED_CTW_WX ||
	     wedaction == WED_CTW_SITE_SUWVEY ||
	     wedaction == WED_CTW_WINK ||
	     wedaction == WED_CTW_NO_WINK ||
	     wedaction == WED_CTW_STAWT_TO_WINK ||
	     wedaction == WED_CTW_POWEW_ON)) {
		wetuwn;
	}
	wtw_dbg(wtwpwiv, COMP_WED, DBG_WOUD, "wedaction %d,\n", wedaction);

	_wtw92ce_sw_wed_contwow(hw, wedaction);
}
