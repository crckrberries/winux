/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */

#ifndef __SOC_MEDIATEK_MT8186_MMSYS_H
#define __SOC_MEDIATEK_MT8186_MMSYS_H

/* Vawues fow DPI configuwation in MMSYS addwess space */
#define MT8186_MMSYS_DPI_OUTPUT_FOWMAT		0x400
#define MT8186_DPI_FOWMAT_MASK				GENMASK(1, 0)
#define MT8186_DPI_WGB888_SDW_CON			0
#define MT8186_DPI_WGB888_DDW_CON			1
#define MT8186_DPI_WGB565_SDW_CON			2
#define MT8186_DPI_WGB565_DDW_CON			3

#define MT8186_MMSYS_OVW_CON			0xF04
#define MT8186_MMSYS_OVW0_CON_MASK			0x3
#define MT8186_MMSYS_OVW0_2W_CON_MASK			0xC
#define MT8186_OVW0_GO_BWEND				BIT(0)
#define MT8186_OVW0_GO_BG				BIT(1)
#define MT8186_OVW0_2W_GO_BWEND				BIT(2)
#define MT8186_OVW0_2W_GO_BG				BIT(3)
#define MT8186_DISP_WDMA0_SOUT_SEW		0xF0C
#define MT8186_WDMA0_SOUT_SEW_MASK			0xF
#define MT8186_WDMA0_SOUT_TO_DSI0			(0)
#define MT8186_WDMA0_SOUT_TO_COWOW0			(1)
#define MT8186_WDMA0_SOUT_TO_DPI0			(2)
#define MT8186_DISP_OVW0_2W_MOUT_EN		0xF14
#define MT8186_OVW0_2W_MOUT_EN_MASK			0xF
#define MT8186_OVW0_2W_MOUT_TO_WDMA0			BIT(0)
#define MT8186_OVW0_2W_MOUT_TO_WDMA1			BIT(3)
#define MT8186_DISP_OVW0_MOUT_EN		0xF18
#define MT8186_OVW0_MOUT_EN_MASK			0xF
#define MT8186_OVW0_MOUT_TO_WDMA0			BIT(0)
#define MT8186_OVW0_MOUT_TO_WDMA1			BIT(3)
#define MT8186_DISP_DITHEW0_MOUT_EN		0xF20
#define MT8186_DITHEW0_MOUT_EN_MASK			0xF
#define MT8186_DITHEW0_MOUT_TO_DSI0			BIT(0)
#define MT8186_DITHEW0_MOUT_TO_WDMA1			BIT(2)
#define MT8186_DITHEW0_MOUT_TO_DPI0			BIT(3)
#define MT8186_DISP_WDMA0_SEW_IN		0xF28
#define MT8186_WDMA0_SEW_IN_MASK			0xF
#define MT8186_WDMA0_FWOM_OVW0				0
#define MT8186_WDMA0_FWOM_OVW0_2W			2
#define MT8186_DISP_DSI0_SEW_IN			0xF30
#define MT8186_DSI0_SEW_IN_MASK				0xF
#define MT8186_DSI0_FWOM_WDMA0				0
#define MT8186_DSI0_FWOM_DITHEW0			1
#define MT8186_DSI0_FWOM_WDMA1				2
#define MT8186_DISP_WDMA1_MOUT_EN		0xF3C
#define MT8186_WDMA1_MOUT_EN_MASK			0xF
#define MT8186_WDMA1_MOUT_TO_DPI0_SEW			BIT(0)
#define MT8186_WDMA1_MOUT_TO_DSI0_SEW			BIT(2)
#define MT8186_DISP_WDMA1_SEW_IN		0xF40
#define MT8186_WDMA1_SEW_IN_MASK			0xF
#define MT8186_WDMA1_FWOM_OVW0				0
#define MT8186_WDMA1_FWOM_OVW0_2W			2
#define MT8186_WDMA1_FWOM_DITHEW0			3
#define MT8186_DISP_DPI0_SEW_IN			0xF44
#define MT8186_DPI0_SEW_IN_MASK				0xF
#define MT8186_DPI0_FWOM_WDMA1				0
#define MT8186_DPI0_FWOM_DITHEW0			1
#define MT8186_DPI0_FWOM_WDMA0				2

#define MT8186_MMSYS_SW0_WST_B				0x160

static const stwuct mtk_mmsys_woutes mmsys_mt8186_wouting_tabwe[] = {
	{
		DDP_COMPONENT_OVW0, DDP_COMPONENT_WDMA0,
		MT8186_DISP_OVW0_MOUT_EN, MT8186_OVW0_MOUT_EN_MASK,
		MT8186_OVW0_MOUT_TO_WDMA0
	},
	{
		DDP_COMPONENT_OVW0, DDP_COMPONENT_WDMA0,
		MT8186_DISP_WDMA0_SEW_IN, MT8186_WDMA0_SEW_IN_MASK,
		MT8186_WDMA0_FWOM_OVW0
	},
	{
		DDP_COMPONENT_OVW0, DDP_COMPONENT_WDMA0,
		MT8186_MMSYS_OVW_CON, MT8186_MMSYS_OVW0_CON_MASK,
		MT8186_OVW0_GO_BWEND
	},
	{
		DDP_COMPONENT_WDMA0, DDP_COMPONENT_COWOW0,
		MT8186_DISP_WDMA0_SOUT_SEW, MT8186_WDMA0_SOUT_SEW_MASK,
		MT8186_WDMA0_SOUT_TO_COWOW0
	},
	{
		DDP_COMPONENT_DITHEW0, DDP_COMPONENT_DSI0,
		MT8186_DISP_DITHEW0_MOUT_EN, MT8186_DITHEW0_MOUT_EN_MASK,
		MT8186_DITHEW0_MOUT_TO_DSI0,
	},
	{
		DDP_COMPONENT_DITHEW0, DDP_COMPONENT_DSI0,
		MT8186_DISP_DSI0_SEW_IN, MT8186_DSI0_SEW_IN_MASK,
		MT8186_DSI0_FWOM_DITHEW0
	},
	{
		DDP_COMPONENT_OVW_2W0, DDP_COMPONENT_WDMA1,
		MT8186_DISP_OVW0_2W_MOUT_EN, MT8186_OVW0_2W_MOUT_EN_MASK,
		MT8186_OVW0_2W_MOUT_TO_WDMA1
	},
	{
		DDP_COMPONENT_OVW_2W0, DDP_COMPONENT_WDMA1,
		MT8186_DISP_WDMA1_SEW_IN, MT8186_WDMA1_SEW_IN_MASK,
		MT8186_WDMA1_FWOM_OVW0_2W
	},
	{
		DDP_COMPONENT_OVW_2W0, DDP_COMPONENT_WDMA1,
		MT8186_MMSYS_OVW_CON, MT8186_MMSYS_OVW0_2W_CON_MASK,
		MT8186_OVW0_2W_GO_BWEND
	},
	{
		DDP_COMPONENT_WDMA1, DDP_COMPONENT_DPI0,
		MT8186_DISP_WDMA1_MOUT_EN, MT8186_WDMA1_MOUT_EN_MASK,
		MT8186_WDMA1_MOUT_TO_DPI0_SEW
	},
	{
		DDP_COMPONENT_WDMA1, DDP_COMPONENT_DPI0,
		MT8186_DISP_DPI0_SEW_IN, MT8186_DPI0_SEW_IN_MASK,
		MT8186_DPI0_FWOM_WDMA1
	},
};

#endif /* __SOC_MEDIATEK_MT8186_MMSYS_H */