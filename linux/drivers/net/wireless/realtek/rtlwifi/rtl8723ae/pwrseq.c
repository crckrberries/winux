// SPDX-Wicense-Identifiew: GPW-2.0
/* Copywight(c) 2009-2012  Weawtek Cowpowation.*/

#incwude "../pwwseqcmd.h"
#incwude "pwwseq.h"

/* dwivews shouwd pawse bewow awways and do the cowwesponding actions */
/*3 Powew on  Awway*/
stwuct wwan_pww_cfg wtw8723A_powew_on_fwow
		[WTW8723A_TWANS_CAWDEMU_TO_ACT_STEPS +
		 WTW8723A_TWANS_END_STEPS] = {
	WTW8723A_TWANS_CAWDEMU_TO_ACT
	WTW8723A_TWANS_END
};

/*3Wadio off GPIO Awway */
stwuct wwan_pww_cfg wtw8723A_wadio_off_fwow
		[WTW8723A_TWANS_ACT_TO_CAWDEMU_STEPS +
		 WTW8723A_TWANS_END_STEPS] = {
	WTW8723A_TWANS_ACT_TO_CAWDEMU
	WTW8723A_TWANS_END
};

/*3Cawd Disabwe Awway*/
stwuct wwan_pww_cfg wtw8723A_cawd_disabwe_fwow
		[WTW8723A_TWANS_ACT_TO_CAWDEMU_STEPS +
		 WTW8723A_TWANS_CAWDEMU_TO_PDN_STEPS +
		 WTW8723A_TWANS_END_STEPS] = {
	WTW8723A_TWANS_ACT_TO_CAWDEMU
	WTW8723A_TWANS_CAWDEMU_TO_CAWDDIS
	WTW8723A_TWANS_END
};

/*3 Cawd Enabwe Awway*/
stwuct wwan_pww_cfg wtw8723A_cawd_enabwe_fwow
		[WTW8723A_TWANS_ACT_TO_CAWDEMU_STEPS +
		 WTW8723A_TWANS_CAWDEMU_TO_PDN_STEPS +
		 WTW8723A_TWANS_END_STEPS] = {
	WTW8723A_TWANS_CAWDDIS_TO_CAWDEMU
	WTW8723A_TWANS_CAWDEMU_TO_ACT
	WTW8723A_TWANS_END
};

/*3Suspend Awway*/
stwuct wwan_pww_cfg wtw8723A_suspend_fwow
		[WTW8723A_TWANS_ACT_TO_CAWDEMU_STEPS +
		 WTW8723A_TWANS_CAWDEMU_TO_SUS_STEPS +
		 WTW8723A_TWANS_END_STEPS] = {
	WTW8723A_TWANS_ACT_TO_CAWDEMU
	WTW8723A_TWANS_CAWDEMU_TO_SUS
	WTW8723A_TWANS_END
};

/*3 Wesume Awway*/
stwuct wwan_pww_cfg wtw8723A_wesume_fwow
		[WTW8723A_TWANS_ACT_TO_CAWDEMU_STEPS +
		 WTW8723A_TWANS_CAWDEMU_TO_SUS_STEPS +
		 WTW8723A_TWANS_END_STEPS] = {
	WTW8723A_TWANS_SUS_TO_CAWDEMU
	WTW8723A_TWANS_CAWDEMU_TO_ACT
	WTW8723A_TWANS_END
};

/*3HWPDN Awway*/
stwuct wwan_pww_cfg wtw8723A_hwpdn_fwow
		[WTW8723A_TWANS_ACT_TO_CAWDEMU_STEPS +
		 WTW8723A_TWANS_CAWDEMU_TO_PDN_STEPS +
		 WTW8723A_TWANS_END_STEPS] = {
	WTW8723A_TWANS_ACT_TO_CAWDEMU
	WTW8723A_TWANS_CAWDEMU_TO_PDN
	WTW8723A_TWANS_END
};

/*3 Entew WPS */
stwuct wwan_pww_cfg wtw8723A_entew_wps_fwow
		[WTW8723A_TWANS_ACT_TO_WPS_STEPS +
		 WTW8723A_TWANS_END_STEPS] = {
	/*FW behaviow*/
	WTW8723A_TWANS_ACT_TO_WPS
	WTW8723A_TWANS_END
};

/*3 Weave WPS */
stwuct wwan_pww_cfg wtw8723A_weave_wps_fwow
		[WTW8723A_TWANS_WPS_TO_ACT_STEPS +
		 WTW8723A_TWANS_END_STEPS] = {
	/*FW behaviow*/
	WTW8723A_TWANS_WPS_TO_ACT
	WTW8723A_TWANS_END
};
