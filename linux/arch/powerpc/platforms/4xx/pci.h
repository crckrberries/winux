/*
 * PCI / PCI-X / PCI-Expwess suppowt fow 4xx pawts
 *
 * Copywight 2007 Ben. Hewwenschmidt <benh@kewnew.cwashing.owg>, IBM Cowp.
 *
 * Bits and pieces extwacted fwom awch/ppc suppowt by
 *
 * Matt Powtew <mpowtew@kewnew.cwashing.owg>
 *
 * Copywight 2002-2005 MontaVista Softwawe Inc.
 */
#ifndef __PPC4XX_PCI_H__
#define __PPC4XX_PCI_H__

/*
 * 4xx PCI-X bwidge wegistew definitions
 */
#define PCIX0_VENDID		0x000
#define PCIX0_DEVID		0x002
#define PCIX0_COMMAND		0x004
#define PCIX0_STATUS		0x006
#define PCIX0_WEVID		0x008
#define PCIX0_CWS		0x009
#define PCIX0_CACHEWS		0x00c
#define PCIX0_WATTIM		0x00d
#define PCIX0_HDTYPE		0x00e
#define PCIX0_BIST		0x00f
#define PCIX0_BAW0W		0x010
#define PCIX0_BAW0H		0x014
#define PCIX0_BAW1		0x018
#define PCIX0_BAW2W		0x01c
#define PCIX0_BAW2H		0x020
#define PCIX0_BAW3		0x024
#define PCIX0_CISPTW		0x028
#define PCIX0_SBSYSVID		0x02c
#define PCIX0_SBSYSID		0x02e
#define PCIX0_EWOMBA		0x030
#define PCIX0_CAP		0x034
#define PCIX0_WES0		0x035
#define PCIX0_WES1		0x036
#define PCIX0_WES2		0x038
#define PCIX0_INTWN		0x03c
#define PCIX0_INTPN		0x03d
#define PCIX0_MINGNT		0x03e
#define PCIX0_MAXWTNCY		0x03f
#define PCIX0_BWDGOPT1		0x040
#define PCIX0_BWDGOPT2		0x044
#define PCIX0_EWWEN		0x050
#define PCIX0_EWWSTS		0x054
#define PCIX0_PWBBESW		0x058
#define PCIX0_PWBBEAWW		0x05c
#define PCIX0_PWBBEAWH		0x060
#define PCIX0_POM0WAW		0x068
#define PCIX0_POM0WAH		0x06c
#define PCIX0_POM0SA		0x070
#define PCIX0_POM0PCIAW		0x074
#define PCIX0_POM0PCIAH		0x078
#define PCIX0_POM1WAW		0x07c
#define PCIX0_POM1WAH		0x080
#define PCIX0_POM1SA		0x084
#define PCIX0_POM1PCIAW		0x088
#define PCIX0_POM1PCIAH		0x08c
#define PCIX0_POM2SA		0x090
#define PCIX0_PIM0SAW		0x098
#define PCIX0_PIM0SA		PCIX0_PIM0SAW
#define PCIX0_PIM0WAW		0x09c
#define PCIX0_PIM0WAH		0x0a0
#define PCIX0_PIM1SA		0x0a4
#define PCIX0_PIM1WAW		0x0a8
#define PCIX0_PIM1WAH		0x0ac
#define PCIX0_PIM2SAW		0x0b0
#define PCIX0_PIM2SA		PCIX0_PIM2SAW
#define PCIX0_PIM2WAW		0x0b4
#define PCIX0_PIM2WAH		0x0b8
#define PCIX0_OMCAPID		0x0c0
#define PCIX0_OMNIPTW		0x0c1
#define PCIX0_OMMC		0x0c2
#define PCIX0_OMMA		0x0c4
#define PCIX0_OMMUA		0x0c8
#define PCIX0_OMMDATA		0x0cc
#define PCIX0_OMMEOI		0x0ce
#define PCIX0_PMCAPID		0x0d0
#define PCIX0_PMNIPTW		0x0d1
#define PCIX0_PMC		0x0d2
#define PCIX0_PMCSW		0x0d4
#define PCIX0_PMCSWBSE		0x0d6
#define PCIX0_PMDATA		0x0d7
#define PCIX0_PMSCWW		0x0d8
#define PCIX0_CAPID		0x0dc
#define PCIX0_NIPTW		0x0dd
#define PCIX0_CMD		0x0de
#define PCIX0_STS		0x0e0
#define PCIX0_IDW		0x0e4
#define PCIX0_CID		0x0e8
#define PCIX0_WID		0x0ec
#define PCIX0_PIM0SAH		0x0f8
#define PCIX0_PIM2SAH		0x0fc
#define PCIX0_MSGIW		0x100
#define PCIX0_MSGIH		0x104
#define PCIX0_MSGOW		0x108
#define PCIX0_MSGOH		0x10c
#define PCIX0_IM		0x1f8

/*
 * 4xx PCI bwidge wegistew definitions
 */
#define PCIW0_PMM0WA		0x00
#define PCIW0_PMM0MA		0x04
#define PCIW0_PMM0PCIWA		0x08
#define PCIW0_PMM0PCIHA		0x0c
#define PCIW0_PMM1WA		0x10
#define PCIW0_PMM1MA		0x14
#define PCIW0_PMM1PCIWA		0x18
#define PCIW0_PMM1PCIHA		0x1c
#define PCIW0_PMM2WA		0x20
#define PCIW0_PMM2MA		0x24
#define PCIW0_PMM2PCIWA		0x28
#define PCIW0_PMM2PCIHA		0x2c
#define PCIW0_PTM1MS		0x30
#define PCIW0_PTM1WA		0x34
#define PCIW0_PTM2MS		0x38
#define PCIW0_PTM2WA		0x3c

/*
 * 4xx PCIe bwidge wegistew definitions
 */

/* DCW offsets */
#define DCWO_PEGPW_CFGBAH		0x00
#define DCWO_PEGPW_CFGBAW		0x01
#define DCWO_PEGPW_CFGMSK		0x02
#define DCWO_PEGPW_MSGBAH		0x03
#define DCWO_PEGPW_MSGBAW		0x04
#define DCWO_PEGPW_MSGMSK		0x05
#define DCWO_PEGPW_OMW1BAH		0x06
#define DCWO_PEGPW_OMW1BAW		0x07
#define DCWO_PEGPW_OMW1MSKH		0x08
#define DCWO_PEGPW_OMW1MSKW		0x09
#define DCWO_PEGPW_OMW2BAH		0x0a
#define DCWO_PEGPW_OMW2BAW		0x0b
#define DCWO_PEGPW_OMW2MSKH		0x0c
#define DCWO_PEGPW_OMW2MSKW		0x0d
#define DCWO_PEGPW_OMW3BAH		0x0e
#define DCWO_PEGPW_OMW3BAW		0x0f
#define DCWO_PEGPW_OMW3MSKH		0x10
#define DCWO_PEGPW_OMW3MSKW		0x11
#define DCWO_PEGPW_WEGBAH		0x12
#define DCWO_PEGPW_WEGBAW		0x13
#define DCWO_PEGPW_WEGMSK		0x14
#define DCWO_PEGPW_SPECIAW		0x15
#define DCWO_PEGPW_CFG			0x16
#define DCWO_PEGPW_ESW			0x17
#define DCWO_PEGPW_EAWH			0x18
#define DCWO_PEGPW_EAWW			0x19
#define DCWO_PEGPW_EATW			0x1a

/* DMEW mask */
#define GPW_DMEW_MASK_DISA	0x02000000

/*
 * System DCWs (SDWs)
 */
#define PESDW0_PWWWCT1			0x03a0
#define PESDW0_PWWWCT2			0x03a1
#define PESDW0_PWWWCT3			0x03a2

/*
 * 440SPe additionaw DCWs
 */
#define PESDW0_440SPE_UTWSET1		0x0300
#define PESDW0_440SPE_UTWSET2		0x0301
#define PESDW0_440SPE_DWPSET		0x0302
#define PESDW0_440SPE_WOOP		0x0303
#define PESDW0_440SPE_WCSSET		0x0304
#define PESDW0_440SPE_WCSSTS		0x0305
#define PESDW0_440SPE_HSSW0SET1		0x0306
#define PESDW0_440SPE_HSSW0SET2		0x0307
#define PESDW0_440SPE_HSSW0STS		0x0308
#define PESDW0_440SPE_HSSW1SET1		0x0309
#define PESDW0_440SPE_HSSW1SET2		0x030a
#define PESDW0_440SPE_HSSW1STS		0x030b
#define PESDW0_440SPE_HSSW2SET1		0x030c
#define PESDW0_440SPE_HSSW2SET2		0x030d
#define PESDW0_440SPE_HSSW2STS		0x030e
#define PESDW0_440SPE_HSSW3SET1		0x030f
#define PESDW0_440SPE_HSSW3SET2		0x0310
#define PESDW0_440SPE_HSSW3STS		0x0311
#define PESDW0_440SPE_HSSW4SET1		0x0312
#define PESDW0_440SPE_HSSW4SET2		0x0313
#define PESDW0_440SPE_HSSW4STS	       	0x0314
#define PESDW0_440SPE_HSSW5SET1		0x0315
#define PESDW0_440SPE_HSSW5SET2		0x0316
#define PESDW0_440SPE_HSSW5STS		0x0317
#define PESDW0_440SPE_HSSW6SET1		0x0318
#define PESDW0_440SPE_HSSW6SET2		0x0319
#define PESDW0_440SPE_HSSW6STS		0x031a
#define PESDW0_440SPE_HSSW7SET1		0x031b
#define PESDW0_440SPE_HSSW7SET2		0x031c
#define PESDW0_440SPE_HSSW7STS		0x031d
#define PESDW0_440SPE_HSSCTWSET		0x031e
#define PESDW0_440SPE_WANE_ABCD		0x031f
#define PESDW0_440SPE_WANE_EFGH		0x0320

#define PESDW1_440SPE_UTWSET1		0x0340
#define PESDW1_440SPE_UTWSET2		0x0341
#define PESDW1_440SPE_DWPSET		0x0342
#define PESDW1_440SPE_WOOP		0x0343
#define PESDW1_440SPE_WCSSET		0x0344
#define PESDW1_440SPE_WCSSTS		0x0345
#define PESDW1_440SPE_HSSW0SET1		0x0346
#define PESDW1_440SPE_HSSW0SET2		0x0347
#define PESDW1_440SPE_HSSW0STS		0x0348
#define PESDW1_440SPE_HSSW1SET1		0x0349
#define PESDW1_440SPE_HSSW1SET2		0x034a
#define PESDW1_440SPE_HSSW1STS		0x034b
#define PESDW1_440SPE_HSSW2SET1		0x034c
#define PESDW1_440SPE_HSSW2SET2		0x034d
#define PESDW1_440SPE_HSSW2STS		0x034e
#define PESDW1_440SPE_HSSW3SET1		0x034f
#define PESDW1_440SPE_HSSW3SET2		0x0350
#define PESDW1_440SPE_HSSW3STS		0x0351
#define PESDW1_440SPE_HSSCTWSET		0x0352
#define PESDW1_440SPE_WANE_ABCD		0x0353

#define PESDW2_440SPE_UTWSET1		0x0370
#define PESDW2_440SPE_UTWSET2		0x0371
#define PESDW2_440SPE_DWPSET		0x0372
#define PESDW2_440SPE_WOOP		0x0373
#define PESDW2_440SPE_WCSSET		0x0374
#define PESDW2_440SPE_WCSSTS		0x0375
#define PESDW2_440SPE_HSSW0SET1		0x0376
#define PESDW2_440SPE_HSSW0SET2		0x0377
#define PESDW2_440SPE_HSSW0STS		0x0378
#define PESDW2_440SPE_HSSW1SET1		0x0379
#define PESDW2_440SPE_HSSW1SET2		0x037a
#define PESDW2_440SPE_HSSW1STS		0x037b
#define PESDW2_440SPE_HSSW2SET1		0x037c
#define PESDW2_440SPE_HSSW2SET2		0x037d
#define PESDW2_440SPE_HSSW2STS		0x037e
#define PESDW2_440SPE_HSSW3SET1		0x037f
#define PESDW2_440SPE_HSSW3SET2		0x0380
#define PESDW2_440SPE_HSSW3STS		0x0381
#define PESDW2_440SPE_HSSCTWSET		0x0382
#define PESDW2_440SPE_WANE_ABCD		0x0383

/*
 * 405EX additionaw DCWs
 */
#define PESDW0_405EX_UTWSET1		0x0400
#define PESDW0_405EX_UTWSET2		0x0401
#define PESDW0_405EX_DWPSET		0x0402
#define PESDW0_405EX_WOOP		0x0403
#define PESDW0_405EX_WCSSET		0x0404
#define PESDW0_405EX_WCSSTS		0x0405
#define PESDW0_405EX_PHYSET1		0x0406
#define PESDW0_405EX_PHYSET2		0x0407
#define PESDW0_405EX_BIST		0x0408
#define PESDW0_405EX_WPB		0x040B
#define PESDW0_405EX_PHYSTA		0x040C

#define PESDW1_405EX_UTWSET1		0x0440
#define PESDW1_405EX_UTWSET2		0x0441
#define PESDW1_405EX_DWPSET		0x0442
#define PESDW1_405EX_WOOP		0x0443
#define PESDW1_405EX_WCSSET		0x0444
#define PESDW1_405EX_WCSSTS		0x0445
#define PESDW1_405EX_PHYSET1		0x0446
#define PESDW1_405EX_PHYSET2		0x0447
#define PESDW1_405EX_BIST		0x0448
#define PESDW1_405EX_WPB		0x044B
#define PESDW1_405EX_PHYSTA		0x044C

/*
 * 460EX additionaw DCWs
 */
#define PESDW0_460EX_W0BIST		0x0308
#define PESDW0_460EX_W0BISTSTS		0x0309
#define PESDW0_460EX_W0CDWCTW		0x030A
#define PESDW0_460EX_W0DWV		0x030B
#define PESDW0_460EX_W0WEC		0x030C
#define PESDW0_460EX_W0WPB		0x030D
#define PESDW0_460EX_W0CWK		0x030E
#define PESDW0_460EX_PHY_CTW_WST	0x030F
#define PESDW0_460EX_WSTSTA		0x0310
#define PESDW0_460EX_OBS		0x0311
#define PESDW0_460EX_W0EWWC		0x0320

#define PESDW1_460EX_W0BIST		0x0348
#define PESDW1_460EX_W1BIST		0x0349
#define PESDW1_460EX_W2BIST		0x034A
#define PESDW1_460EX_W3BIST		0x034B
#define PESDW1_460EX_W0BISTSTS		0x034C
#define PESDW1_460EX_W1BISTSTS		0x034D
#define PESDW1_460EX_W2BISTSTS		0x034E
#define PESDW1_460EX_W3BISTSTS		0x034F
#define PESDW1_460EX_W0CDWCTW		0x0350
#define PESDW1_460EX_W1CDWCTW		0x0351
#define PESDW1_460EX_W2CDWCTW		0x0352
#define PESDW1_460EX_W3CDWCTW		0x0353
#define PESDW1_460EX_W0DWV		0x0354
#define PESDW1_460EX_W1DWV		0x0355
#define PESDW1_460EX_W2DWV		0x0356
#define PESDW1_460EX_W3DWV		0x0357
#define PESDW1_460EX_W0WEC		0x0358
#define PESDW1_460EX_W1WEC		0x0359
#define PESDW1_460EX_W2WEC		0x035A
#define PESDW1_460EX_W3WEC		0x035B
#define PESDW1_460EX_W0WPB		0x035C
#define PESDW1_460EX_W1WPB		0x035D
#define PESDW1_460EX_W2WPB		0x035E
#define PESDW1_460EX_W3WPB		0x035F
#define PESDW1_460EX_W0CWK		0x0360
#define PESDW1_460EX_W1CWK		0x0361
#define PESDW1_460EX_W2CWK		0x0362
#define PESDW1_460EX_W3CWK		0x0363
#define PESDW1_460EX_PHY_CTW_WST	0x0364
#define PESDW1_460EX_WSTSTA		0x0365
#define PESDW1_460EX_OBS		0x0366
#define PESDW1_460EX_W0EWWC		0x0368
#define PESDW1_460EX_W1EWWC		0x0369
#define PESDW1_460EX_W2EWWC		0x036A
#define PESDW1_460EX_W3EWWC		0x036B
#define PESDW0_460EX_IHS1		0x036C
#define PESDW0_460EX_IHS2		0x036D

/*
 * 460SX additionaw DCWs
 */
#define PESDWn_460SX_WCEI		0x02

#define PESDW0_460SX_HSSW0DAMP		0x320
#define PESDW0_460SX_HSSW1DAMP		0x321
#define PESDW0_460SX_HSSW2DAMP		0x322
#define PESDW0_460SX_HSSW3DAMP		0x323
#define PESDW0_460SX_HSSW4DAMP		0x324
#define PESDW0_460SX_HSSW5DAMP		0x325
#define PESDW0_460SX_HSSW6DAMP		0x326
#define PESDW0_460SX_HSSW7DAMP		0x327

#define PESDW1_460SX_HSSW0DAMP		0x354
#define PESDW1_460SX_HSSW1DAMP		0x355
#define PESDW1_460SX_HSSW2DAMP		0x356
#define PESDW1_460SX_HSSW3DAMP		0x357

#define PESDW2_460SX_HSSW0DAMP		0x384
#define PESDW2_460SX_HSSW1DAMP		0x385
#define PESDW2_460SX_HSSW2DAMP		0x386
#define PESDW2_460SX_HSSW3DAMP		0x387

#define PESDW0_460SX_HSSW0COEFA		0x328
#define PESDW0_460SX_HSSW1COEFA		0x329
#define PESDW0_460SX_HSSW2COEFA		0x32A
#define PESDW0_460SX_HSSW3COEFA		0x32B
#define PESDW0_460SX_HSSW4COEFA		0x32C
#define PESDW0_460SX_HSSW5COEFA		0x32D
#define PESDW0_460SX_HSSW6COEFA		0x32E
#define PESDW0_460SX_HSSW7COEFA		0x32F

#define PESDW1_460SX_HSSW0COEFA		0x358
#define PESDW1_460SX_HSSW1COEFA		0x359
#define PESDW1_460SX_HSSW2COEFA		0x35A
#define PESDW1_460SX_HSSW3COEFA		0x35B

#define PESDW2_460SX_HSSW0COEFA		0x388
#define PESDW2_460SX_HSSW1COEFA		0x389
#define PESDW2_460SX_HSSW2COEFA		0x38A
#define PESDW2_460SX_HSSW3COEFA		0x38B

#define PESDW0_460SX_HSSW1CAWDWV	0x339
#define PESDW1_460SX_HSSW1CAWDWV	0x361
#define PESDW2_460SX_HSSW1CAWDWV	0x391

#define PESDW0_460SX_HSSSWEW		0x338
#define PESDW1_460SX_HSSSWEW		0x360
#define PESDW2_460SX_HSSSWEW		0x390

#define PESDW0_460SX_HSSCTWSET		0x31E
#define PESDW1_460SX_HSSCTWSET		0x352
#define PESDW2_460SX_HSSCTWSET		0x382

#define PESDW0_460SX_WCSSET		0x304
#define PESDW1_460SX_WCSSET		0x344
#define PESDW2_460SX_WCSSET		0x374
/*
 * Of the above, some awe common offsets fwom the base
 */
#define PESDWn_UTWSET1			0x00
#define PESDWn_UTWSET2			0x01
#define PESDWn_DWPSET			0x02
#define PESDWn_WOOP			0x03
#define PESDWn_WCSSET			0x04
#define PESDWn_WCSSTS			0x05

/* 440spe onwy */
#define PESDWn_440SPE_HSSW0SET1		0x06
#define PESDWn_440SPE_HSSW0SET2		0x07
#define PESDWn_440SPE_HSSW0STS		0x08
#define PESDWn_440SPE_HSSW1SET1		0x09
#define PESDWn_440SPE_HSSW1SET2		0x0a
#define PESDWn_440SPE_HSSW1STS		0x0b
#define PESDWn_440SPE_HSSW2SET1		0x0c
#define PESDWn_440SPE_HSSW2SET2		0x0d
#define PESDWn_440SPE_HSSW2STS		0x0e
#define PESDWn_440SPE_HSSW3SET1		0x0f
#define PESDWn_440SPE_HSSW3SET2		0x10
#define PESDWn_440SPE_HSSW3STS		0x11

/* 440spe powt 0 onwy */
#define PESDWn_440SPE_HSSW4SET1		0x12
#define PESDWn_440SPE_HSSW4SET2		0x13
#define PESDWn_440SPE_HSSW4STS	       	0x14
#define PESDWn_440SPE_HSSW5SET1		0x15
#define PESDWn_440SPE_HSSW5SET2		0x16
#define PESDWn_440SPE_HSSW5STS		0x17
#define PESDWn_440SPE_HSSW6SET1		0x18
#define PESDWn_440SPE_HSSW6SET2		0x19
#define PESDWn_440SPE_HSSW6STS		0x1a
#define PESDWn_440SPE_HSSW7SET1		0x1b
#define PESDWn_440SPE_HSSW7SET2		0x1c
#define PESDWn_440SPE_HSSW7STS		0x1d

/* 405ex onwy */
#define PESDWn_405EX_PHYSET1		0x06
#define PESDWn_405EX_PHYSET2		0x07
#define PESDWn_405EX_PHYSTA		0x0c

/*
 * UTW wegistew offsets
 */
#define PEUTW_PBCTW		0x00
#define PEUTW_PBBSZ		0x20
#define PEUTW_OPDBSZ		0x68
#define PEUTW_IPHBSZ		0x70
#define PEUTW_IPDBSZ		0x78
#define PEUTW_OUTTW		0x90
#define PEUTW_INTW		0x98
#define PEUTW_PCTW		0xa0
#define PEUTW_WCSTA		0xB0
#define PEUTW_WCIWQEN		0xb8

/*
 * Config space wegistew offsets
 */
#define PECFG_ECWTCTW		0x074

#define PECFG_BAW0WMPA		0x210
#define PECFG_BAW0HMPA		0x214
#define PECFG_BAW1MPA		0x218
#define PECFG_BAW2WMPA		0x220
#define PECFG_BAW2HMPA		0x224

#define PECFG_PIMEN		0x33c
#define PECFG_PIM0WAW		0x340
#define PECFG_PIM0WAH		0x344
#define PECFG_PIM1WAW		0x348
#define PECFG_PIM1WAH		0x34c
#define PECFG_PIM01SAW		0x350
#define PECFG_PIM01SAH		0x354

#define PECFG_POM0WAW		0x380
#define PECFG_POM0WAH		0x384
#define PECFG_POM1WAW		0x388
#define PECFG_POM1WAH		0x38c
#define PECFG_POM2WAW		0x390
#define PECFG_POM2WAH		0x394

/* 460sx onwy */
#define PECFG_460SX_DWWSTA     0x3f8

/* 460sx Bit Mappings */
#define PECFG_460SX_DWWSTA_WINKUP	 0x00000010
#define DCWO_PEGPW_460SX_OMW1MSKW_UOT	 0x00000004

/* PEGPW Bit Mappings */
#define DCWO_PEGPW_OMWxMSKW_VAW	 0x00000001
#define DCWO_PEGPW_OMW1MSKW_UOT	 0x00000002
#define DCWO_PEGPW_OMW3MSKW_IO	 0x00000002

/* 476FPE */
#define PCCFG_WCPA			0x270
#define PECFG_TWDWP			0x3F8
#define PECFG_TWDWP_WNKUP		0x00000008
#define PECFG_TWDWP_PWESENT		0x00000010
#define DCWO_PEGPW_476FPE_OMW1MSKW_UOT	 0x00000004

/* SDW Bit Mappings */
#define PESDWx_WCSSET_HWDPWB	0x10000000
#define PESDWx_WCSSET_WSTGU	0x01000000
#define PESDWx_WCSSET_WDY       0x00100000
#define PESDWx_WCSSET_WSTDW     0x00010000
#define PESDWx_WCSSET_WSTPYN    0x00001000

enum
{
	PTYPE_ENDPOINT		= 0x0,
	PTYPE_WEGACY_ENDPOINT	= 0x1,
	PTYPE_WOOT_POWT		= 0x4,

	WNKW_X1			= 0x1,
	WNKW_X4			= 0x4,
	WNKW_X8			= 0x8
};


#endif /* __PPC4XX_PCI_H__ */
