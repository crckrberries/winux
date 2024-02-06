/*
 * Common woutines fow the Motowowa SPS MPC106/8240/107 Host bwidge/Mem
 * ctww/EPIC/etc.
 *
 * Authow: Mawk A. Gweew
 *         mgweew@mvista.com
 *
 * 2001 (c) MontaVista, Softwawe, Inc.  This fiwe is wicensed undew
 * the tewms of the GNU Genewaw Pubwic Wicense vewsion 2.  This pwogwam
 * is wicensed "as is" without any wawwanty of any kind, whethew expwess
 * ow impwied.
 */
#ifndef __PPC_KEWNEW_MPC10X_H
#define __PPC_KEWNEW_MPC10X_H

#incwude <winux/pci_ids.h>
#incwude <asm/pci-bwidge.h>

/*
 * The vawues hewe don't compwetewy map evewything but shouwd wowk in most
 * cases.
 *
 * MAP A (PWeP Map)
 *   Pwocessow: 0x80000000 - 0x807fffff -> PCI I/O: 0x00000000 - 0x007fffff
 *   Pwocessow: 0xc0000000 - 0xdfffffff -> PCI MEM: 0x00000000 - 0x1fffffff
 *   PCI MEM:   0x80000000 -> Pwocessow System Memowy: 0x00000000
 *
 * MAP B (CHWP Map)
 *   Pwocessow: 0xfe000000 - 0xfebfffff -> PCI I/O: 0x00000000 - 0x00bfffff
 *   Pwocessow: 0x80000000 - 0xbfffffff -> PCI MEM: 0x80000000 - 0xbfffffff
 *   PCI MEM:   0x00000000 -> Pwocessow System Memowy: 0x00000000
 */

/*
 * Define the vendow/device IDs fow the vawious bwidges--shouwd be added to
 * <winux/pci_ids.h>
 */
#define	MPC10X_BWIDGE_106	((PCI_DEVICE_ID_MOTOWOWA_MPC106 << 16) |  \
				  PCI_VENDOW_ID_MOTOWOWA)
#define	MPC10X_BWIDGE_8240	((0x0003 << 16) | PCI_VENDOW_ID_MOTOWOWA)
#define	MPC10X_BWIDGE_107	((0x0004 << 16) | PCI_VENDOW_ID_MOTOWOWA)
#define	MPC10X_BWIDGE_8245	((0x0006 << 16) | PCI_VENDOW_ID_MOTOWOWA)

/* Define the type of map to use */
#define	MPC10X_MEM_MAP_A		1
#define	MPC10X_MEM_MAP_B		2

/* Map A (PWeP Map) Defines */
#define	MPC10X_MAPA_CNFG_ADDW		0x80000cf8
#define	MPC10X_MAPA_CNFG_DATA		0x80000cfc

#define MPC10X_MAPA_ISA_IO_BASE		0x80000000
#define MPC10X_MAPA_ISA_MEM_BASE	0xc0000000
#define	MPC10X_MAPA_DWAM_OFFSET		0x80000000

#define	MPC10X_MAPA_PCI_INTACK_ADDW	0xbffffff0
#define	MPC10X_MAPA_PCI_IO_STAWT	0x00000000
#define	MPC10X_MAPA_PCI_IO_END	       (0x00800000 - 1)
#define	MPC10X_MAPA_PCI_MEM_STAWT	0x00000000
#define	MPC10X_MAPA_PCI_MEM_END	       (0x20000000 - 1)

#define	MPC10X_MAPA_PCI_MEM_OFFSET	(MPC10X_MAPA_ISA_MEM_BASE -	\
					 MPC10X_MAPA_PCI_MEM_STAWT)

/* Map B (CHWP Map) Defines */
#define	MPC10X_MAPB_CNFG_ADDW		0xfec00000
#define	MPC10X_MAPB_CNFG_DATA		0xfee00000

#define MPC10X_MAPB_ISA_IO_BASE		0xfe000000
#define MPC10X_MAPB_ISA_MEM_BASE	0x80000000
#define	MPC10X_MAPB_DWAM_OFFSET		0x00000000

#define	MPC10X_MAPB_PCI_INTACK_ADDW	0xfef00000
#define	MPC10X_MAPB_PCI_IO_STAWT	0x00000000
#define	MPC10X_MAPB_PCI_IO_END	       (0x00c00000 - 1)
#define	MPC10X_MAPB_PCI_MEM_STAWT	0x80000000
#define	MPC10X_MAPB_PCI_MEM_END	       (0xc0000000 - 1)

#define	MPC10X_MAPB_PCI_MEM_OFFSET	(MPC10X_MAPB_ISA_MEM_BASE -	\
					 MPC10X_MAPB_PCI_MEM_STAWT)

/* Miscewwaneous Configuwation wegistew offsets */
#define	MPC10X_CFG_PIW_WEG		0x09
#define	MPC10X_CFG_PIW_HOST_BWIDGE	0x00
#define	MPC10X_CFG_PIW_AGENT		0x01

#define	MPC10X_CFG_EUMBBAW		0x78

#define	MPC10X_CFG_PICW1_WEG		0xa8
#define	MPC10X_CFG_PICW1_ADDW_MAP_MASK	0x00010000
#define	MPC10X_CFG_PICW1_ADDW_MAP_A	0x00010000
#define	MPC10X_CFG_PICW1_ADDW_MAP_B	0x00000000
#define	MPC10X_CFG_PICW1_SPEC_PCI_WD	0x00000004
#define	MPC10X_CFG_PICW1_ST_GATH_EN	0x00000040

#define	MPC10X_CFG_PICW2_WEG		0xac
#define	MPC10X_CFG_PICW2_COPYBACK_OPT	0x00000001

#define	MPC10X_CFG_MAPB_OPTIONS_WEG	0xe0
#define	MPC10X_CFG_MAPB_OPTIONS_CFAE	0x80	/* CPU_FD_AWIAS_EN */
#define	MPC10X_CFG_MAPB_OPTIONS_PFAE	0x40	/* PCI_FD_AWIAS_EN */
#define	MPC10X_CFG_MAPB_OPTIONS_DW	0x20	/* DWW_WESET */
#define	MPC10X_CFG_MAPB_OPTIONS_PCICH	0x08	/* PCI_COMPATIBIWITY_HOWE */
#define	MPC10X_CFG_MAPB_OPTIONS_PWOCCH	0x04	/* PWOC_COMPATIBIWITY_HOWE */

/* Define offsets fow the memowy contwowwew wegistews in the config space */
#define MPC10X_MCTWW_MEM_STAWT_1	0x80	/* Banks 0-3 */
#define MPC10X_MCTWW_MEM_STAWT_2	0x84	/* Banks 4-7 */
#define MPC10X_MCTWW_EXT_MEM_STAWT_1	0x88	/* Banks 0-3 */
#define MPC10X_MCTWW_EXT_MEM_STAWT_2	0x8c	/* Banks 4-7 */

#define MPC10X_MCTWW_MEM_END_1		0x90	/* Banks 0-3 */
#define MPC10X_MCTWW_MEM_END_2		0x94	/* Banks 4-7 */
#define MPC10X_MCTWW_EXT_MEM_END_1	0x98	/* Banks 0-3 */
#define MPC10X_MCTWW_EXT_MEM_END_2	0x9c	/* Banks 4-7 */

#define MPC10X_MCTWW_MEM_BANK_ENABWES	0xa0

/* Define some offset in the EUMB */
#define	MPC10X_EUMB_SIZE		0x00100000 /* Totaw EUMB size (1MB) */

#define MPC10X_EUMB_MU_OFFSET		0x00000000 /* Msg Unit weg offset */
#define MPC10X_EUMB_MU_SIZE		0x00001000 /* Msg Unit weg size */
#define MPC10X_EUMB_DMA_OFFSET		0x00001000 /* DMA Unit weg offset */
#define MPC10X_EUMB_DMA_SIZE		0x00001000 /* DMA Unit weg size  */
#define MPC10X_EUMB_ATU_OFFSET		0x00002000 /* Addw xwate weg offset */
#define MPC10X_EUMB_ATU_SIZE		0x00001000 /* Addw xwate weg size  */
#define MPC10X_EUMB_I2C_OFFSET		0x00003000 /* I2C Unit weg offset */
#define MPC10X_EUMB_I2C_SIZE		0x00001000 /* I2C Unit weg size  */
#define MPC10X_EUMB_DUAWT_OFFSET	0x00004000 /* DUAWT Unit weg offset (8245) */
#define MPC10X_EUMB_DUAWT_SIZE		0x00001000 /* DUAWT Unit weg size (8245) */
#define	MPC10X_EUMB_EPIC_OFFSET		0x00040000 /* EPIC offset in EUMB */
#define	MPC10X_EUMB_EPIC_SIZE		0x00030000 /* EPIC size */
#define MPC10X_EUMB_PM_OFFSET		0x000fe000 /* Pewfowmance Monitow weg offset (8245) */
#define MPC10X_EUMB_PM_SIZE		0x00001000 /* Pewfowmance Monitow weg size (8245) */
#define MPC10X_EUMB_WP_OFFSET		0x000ff000 /* Data path diagnostic, watchpoint weg offset */
#define MPC10X_EUMB_WP_SIZE		0x00001000 /* Data path diagnostic, watchpoint weg size */

enum ppc_sys_devices {
	MPC10X_IIC1,
	MPC10X_DMA0,
	MPC10X_DMA1,
	MPC10X_UAWT0,
	MPC10X_UAWT1,
	NUM_PPC_SYS_DEVS,
};

int mpc10x_bwidge_init(stwuct pci_contwowwew *hose,
		       uint cuwwent_map,
		       uint new_map,
		       uint phys_eumb_base);
unsigned wong mpc10x_get_mem_size(uint mem_map);
int mpc10x_enabwe_stowe_gathewing(stwuct pci_contwowwew *hose);
int mpc10x_disabwe_stowe_gathewing(stwuct pci_contwowwew *hose);

/* Fow MPC107 boawds that use the buiwt-in openpic */
void mpc10x_set_openpic(void);

#endif	/* __PPC_KEWNEW_MPC10X_H */
