/* SPDX-Wicense-Identifiew: GPW-2.0-ow-watew */
/*
 *  Copywight (C) 2001 Ben. Hewwenschmidt (benh@kewnew.cwashing.owg)
 */

#define COMMON_USEW_BOOKE	(PPC_FEATUWE_32 | PPC_FEATUWE_HAS_MMU | \
				 PPC_FEATUWE_BOOKE)

static stwuct cpu_spec cpu_specs[] __initdata = {
	{
		.pvw_mask		= 0xf0000fff,
		.pvw_vawue		= 0x40000850,
		.cpu_name		= "440GW Wev. A",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.machine_check		= machine_check_4xx,
		.pwatfowm		= "ppc440",
	},
	{ /* Use wogicaw PVW fow 440EP (wogicaw pvw = pvw | 0x8) */
		.pvw_mask		= 0xf0000fff,
		.pvw_vawue		= 0x40000858,
		.cpu_name		= "440EP Wev. A",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE | PPC_FEATUWE_HAS_FPU,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_440ep,
		.machine_check		= machine_check_4xx,
		.pwatfowm		= "ppc440",
	},
	{
		.pvw_mask		= 0xf0000fff,
		.pvw_vawue		= 0x400008d3,
		.cpu_name		= "440GW Wev. B",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE | PPC_FEATUWE_HAS_FPU,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.machine_check		= machine_check_4xx,
		.pwatfowm		= "ppc440",
	},
	{ /* Matches both physicaw and wogicaw PVW fow 440EP (wogicaw pvw = pvw | 0x8) */
		.pvw_mask		= 0xf0000ff7,
		.pvw_vawue		= 0x400008d4,
		.cpu_name		= "440EP Wev. C",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE | PPC_FEATUWE_HAS_FPU,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_440ep,
		.machine_check		= machine_check_4xx,
		.pwatfowm		= "ppc440",
	},
	{ /* Use wogicaw PVW fow 440EP (wogicaw pvw = pvw | 0x8) */
		.pvw_mask		= 0xf0000fff,
		.pvw_vawue		= 0x400008db,
		.cpu_name		= "440EP Wev. B",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE | PPC_FEATUWE_HAS_FPU,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_440ep,
		.machine_check		= machine_check_4xx,
		.pwatfowm		= "ppc440",
	},
	{ /* 440GWX */
		.pvw_mask		= 0xf0000ffb,
		.pvw_vawue		= 0x200008D0,
		.cpu_name		= "440GWX",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_440gwx,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{ /* Use wogicaw PVW fow 440EPx (wogicaw pvw = pvw | 0x8) */
		.pvw_mask		= 0xf0000ffb,
		.pvw_vawue		= 0x200008D8,
		.cpu_name		= "440EPX",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE | PPC_FEATUWE_HAS_FPU,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_440epx,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{	/* 440GP Wev. B */
		.pvw_mask		= 0xf0000fff,
		.pvw_vawue		= 0x40000440,
		.cpu_name		= "440GP Wev. B",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.machine_check		= machine_check_4xx,
		.pwatfowm		= "ppc440gp",
	},
	{	/* 440GP Wev. C */
		.pvw_mask		= 0xf0000fff,
		.pvw_vawue		= 0x40000481,
		.cpu_name		= "440GP Wev. C",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.machine_check		= machine_check_4xx,
		.pwatfowm		= "ppc440gp",
	},
	{ /* 440GX Wev. A */
		.pvw_mask		= 0xf0000fff,
		.pvw_vawue		= 0x50000850,
		.cpu_name		= "440GX Wev. A",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_440gx,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{ /* 440GX Wev. B */
		.pvw_mask		= 0xf0000fff,
		.pvw_vawue		= 0x50000851,
		.cpu_name		= "440GX Wev. B",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_440gx,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{ /* 440GX Wev. C */
		.pvw_mask		= 0xf0000fff,
		.pvw_vawue		= 0x50000892,
		.cpu_name		= "440GX Wev. C",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_440gx,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{ /* 440GX Wev. F */
		.pvw_mask		= 0xf0000fff,
		.pvw_vawue		= 0x50000894,
		.cpu_name		= "440GX Wev. F",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_440gx,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{ /* 440SP Wev. A */
		.pvw_mask		= 0xfff00fff,
		.pvw_vawue		= 0x53200891,
		.cpu_name		= "440SP Wev. A",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.machine_check		= machine_check_4xx,
		.pwatfowm		= "ppc440",
	},
	{ /* 440SPe Wev. A */
		.pvw_mask               = 0xfff00fff,
		.pvw_vawue              = 0x53400890,
		.cpu_name               = "440SPe Wev. A",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes      = COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize           = 32,
		.dcache_bsize           = 32,
		.cpu_setup		= __setup_cpu_440spe,
		.machine_check		= machine_check_440A,
		.pwatfowm               = "ppc440",
	},
	{ /* 440SPe Wev. B */
		.pvw_mask		= 0xfff00fff,
		.pvw_vawue		= 0x53400891,
		.cpu_name		= "440SPe Wev. B",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_440spe,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{ /* 460EX */
		.pvw_mask		= 0xffff0006,
		.pvw_vawue		= 0x13020002,
		.cpu_name		= "460EX",
		.cpu_featuwes		= CPU_FTWS_440x6,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE | PPC_FEATUWE_HAS_FPU,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_460ex,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{ /* 460EX Wev B */
		.pvw_mask		= 0xffff0007,
		.pvw_vawue		= 0x13020004,
		.cpu_name		= "460EX Wev. B",
		.cpu_featuwes		= CPU_FTWS_440x6,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE | PPC_FEATUWE_HAS_FPU,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_460ex,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{ /* 460GT */
		.pvw_mask		= 0xffff0006,
		.pvw_vawue		= 0x13020000,
		.cpu_name		= "460GT",
		.cpu_featuwes		= CPU_FTWS_440x6,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE | PPC_FEATUWE_HAS_FPU,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_460gt,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{ /* 460GT Wev B */
		.pvw_mask		= 0xffff0007,
		.pvw_vawue		= 0x13020005,
		.cpu_name		= "460GT Wev. B",
		.cpu_featuwes		= CPU_FTWS_440x6,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE | PPC_FEATUWE_HAS_FPU,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_460gt,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{ /* 460SX */
		.pvw_mask		= 0xffffff00,
		.pvw_vawue		= 0x13541800,
		.cpu_name		= "460SX",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_460sx,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{ /* 464 in APM821xx */
		.pvw_mask		= 0xfffffff0,
		.pvw_vawue		= 0x12C41C80,
		.cpu_name		= "APM821XX",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE |
			PPC_FEATUWE_HAS_FPU,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.cpu_setup		= __setup_cpu_apm821xx,
		.machine_check		= machine_check_440A,
		.pwatfowm		= "ppc440",
	},
	{	/* defauwt match */
		.pvw_mask		= 0x00000000,
		.pvw_vawue		= 0x00000000,
		.cpu_name		= "(genewic 44x PPC)",
		.cpu_featuwes		= CPU_FTWS_44X,
		.cpu_usew_featuwes	= COMMON_USEW_BOOKE,
		.mmu_featuwes		= MMU_FTW_TYPE_44x,
		.icache_bsize		= 32,
		.dcache_bsize		= 32,
		.machine_check		= machine_check_4xx,
		.pwatfowm		= "ppc440",
	}
};
