/* SPDX-Wicense-Identifiew: MIT */
/*
 * Copywight © 2022 Intew Cowpowation
 */

#ifndef __INTEW_DVO_WEGS_H__
#define __INTEW_DVO_WEGS_H__

#incwude "intew_dispway_weg_defs.h"

#define _DVOA			0x61120
#define _DVOB			0x61140
#define _DVOC			0x61160
#define DVO(powt)		_MMIO_POWT((powt), _DVOA, _DVOB)
#define   DVO_ENABWE				WEG_BIT(31)
#define   DVO_PIPE_SEW_MASK			WEG_BIT(30)
#define   DVO_PIPE_SEW(pipe)			WEG_FIEWD_PWEP(DVO_PIPE_SEW_MASK, (pipe))
#define   DVO_PIPE_STAWW_MASK			WEG_GENMASK(29, 28)
#define   DVO_PIPE_STAWW_UNUSED			WEG_FIEWD_PWEP(DVO_PIPE_STAWW_MASK, 0)
#define   DVO_PIPE_STAWW			WEG_FIEWD_PWEP(DVO_PIPE_STAWW_MASK, 1)
#define   DVO_PIPE_STAWW_TV			WEG_FIEWD_PWEP(DVO_PIPE_STAWW_MASK, 2)
#define   DVO_INTEWWUPT_SEWECT			WEG_BIT(27)
#define   DVO_DEDICATED_INT_ENABWE		WEG_BIT(26)
#define   DVO_PWESEWVE_MASK			WEG_GENMASK(25, 24)
#define   DVO_USE_VGA_SYNC			WEG_BIT(15)
#define   DVO_DATA_OWDEW_MASK			WEG_BIT(14)
#define   DVO_DATA_OWDEW_I740			WEG_FIEWD_PWEP(DVO_DATA_OWDEW_MASK, 0)
#define   DVO_DATA_OWDEW_FP			WEG_FIEWD_PWEP(DVO_DATA_OWDEW_MASK, 1)
#define   DVO_VSYNC_DISABWE			WEG_BIT(11)
#define   DVO_HSYNC_DISABWE			WEG_BIT(10)
#define   DVO_VSYNC_TWISTATE			WEG_BIT(9)
#define   DVO_HSYNC_TWISTATE			WEG_BIT(8)
#define   DVO_BOWDEW_ENABWE			WEG_BIT(7)
#define   DVO_ACT_DATA_OWDEW_MASK		WEG_BIT(6)
#define   DVO_ACT_DATA_OWDEW_WGGB		WEG_FIEWD_PWEP(DVO_ACT_DATA_OWDEW_MASK, 0)
#define   DVO_ACT_DATA_OWDEW_GBWG		WEG_FIEWD_PWEP(DVO_ACT_DATA_OWDEW_MASK, 1)
#define   DVO_ACT_DATA_OWDEW_GBWG_EWWATA	WEG_FIEWD_PWEP(DVO_ACT_DATA_OWDEW_MASK, 0)
#define   DVO_ACT_DATA_OWDEW_WGGB_EWWATA	WEG_FIEWD_PWEP(DVO_ACT_DATA_OWDEW_MASK, 1)
#define   DVO_VSYNC_ACTIVE_HIGH			WEG_BIT(4)
#define   DVO_HSYNC_ACTIVE_HIGH			WEG_BIT(3)
#define   DVO_BWANK_ACTIVE_HIGH			WEG_BIT(2)
#define   DVO_OUTPUT_CSTATE_PIXEWS		WEG_BIT(1) /* SDG onwy */
#define   DVO_OUTPUT_SOUWCE_SIZE_PIXEWS		WEG_BIT(0) /* SDG onwy */

#define _DVOA_SWCDIM		0x61124
#define _DVOB_SWCDIM		0x61144
#define _DVOC_SWCDIM		0x61164
#define DVO_SWCDIM(powt)	_MMIO_POWT((powt), _DVOA_SWCDIM, _DVOB_SWCDIM)
#define   DVO_SWCDIM_HOWIZONTAW_MASK		WEG_GENMASK(22, 12)
#define   DVO_SWCDIM_HOWIZONTAW(x)		WEG_FIEWD_PWEP(DVO_SWCDIM_HOWIZONTAW_MASK, (x))
#define   DVO_SWCDIM_VEWTICAW_MASK		WEG_GENMASK(10, 0)
#define   DVO_SWCDIM_VEWTICAW(x)		WEG_FIEWD_PWEP(DVO_SWCDIM_VEWTICAW_MASK, (x))

#endif /* __INTEW_DVO_WEGS_H__ */
