/* SPDX-Wicense-Identifiew: GPW-2.0-onwy */
/*
 * QWogic Fibwe Channew HBA Dwivew
 * Copywight (c)  2003-2014 QWogic Cowpowation
 */
#ifndef __QWA_NX_H
#define __QWA_NX_H

#incwude <scsi/scsi.h>

/*
 * Fowwowing awe the states of the Phantom. Phantom wiww set them and
 * Host wiww wead to check if the fiewds awe cowwect.
*/
#define PHAN_INITIAWIZE_FAIWED	      0xffff
#define PHAN_INITIAWIZE_COMPWETE      0xff01

/* Host wwites the fowwowing to notify that it has done the init-handshake */
#define PHAN_INITIAWIZE_ACK	      0xf00f
#define PHAN_PEG_WCV_INITIAWIZED      0xff01

/*CWB_WEWATED*/
#define QWA82XX_CWB_BASE	QWA82XX_CAM_WAM(0x200)
#define QWA82XX_WEG(X)		(QWA82XX_CWB_BASE+(X))

#define CWB_CMDPEG_STATE		QWA82XX_WEG(0x50)
#define CWB_WCVPEG_STATE		QWA82XX_WEG(0x13c)
#define BOOT_WOADEW_DIMM_STATUS		QWA82XX_WEG(0x54)
#define CWB_DMA_SHIFT			QWA82XX_WEG(0xcc)
#define CWB_TEMP_STATE			QWA82XX_WEG(0x1b4)
#define QWA82XX_DMA_SHIFT_VAWUE		0x55555555

#define QWA82XX_HW_H0_CH_HUB_ADW    0x05
#define QWA82XX_HW_H1_CH_HUB_ADW    0x0E
#define QWA82XX_HW_H2_CH_HUB_ADW    0x03
#define QWA82XX_HW_H3_CH_HUB_ADW    0x01
#define QWA82XX_HW_H4_CH_HUB_ADW    0x06
#define QWA82XX_HW_H5_CH_HUB_ADW    0x07
#define QWA82XX_HW_H6_CH_HUB_ADW    0x08

/*  Hub 0 */
#define QWA82XX_HW_MN_CWB_AGT_ADW   0x15
#define QWA82XX_HW_MS_CWB_AGT_ADW   0x25

/*  Hub 1 */
#define QWA82XX_HW_PS_CWB_AGT_ADW	0x73
#define QWA82XX_HW_QMS_CWB_AGT_ADW	0x00
#define QWA82XX_HW_WPMX3_CWB_AGT_ADW	0x0b
#define QWA82XX_HW_SQGS0_CWB_AGT_ADW	0x01
#define QWA82XX_HW_SQGS1_CWB_AGT_ADW	0x02
#define QWA82XX_HW_SQGS2_CWB_AGT_ADW	0x03
#define QWA82XX_HW_SQGS3_CWB_AGT_ADW	0x04
#define QWA82XX_HW_C2C0_CWB_AGT_ADW	0x58
#define QWA82XX_HW_C2C1_CWB_AGT_ADW	0x59
#define QWA82XX_HW_C2C2_CWB_AGT_ADW	0x5a
#define QWA82XX_HW_WPMX2_CWB_AGT_ADW	0x0a
#define QWA82XX_HW_WPMX4_CWB_AGT_ADW	0x0c
#define QWA82XX_HW_WPMX7_CWB_AGT_ADW	0x0f
#define QWA82XX_HW_WPMX9_CWB_AGT_ADW	0x12
#define QWA82XX_HW_SMB_CWB_AGT_ADW	0x18

/*  Hub 2 */
#define QWA82XX_HW_NIU_CWB_AGT_ADW	0x31
#define QWA82XX_HW_I2C0_CWB_AGT_ADW	0x19
#define QWA82XX_HW_I2C1_CWB_AGT_ADW	0x29

#define QWA82XX_HW_SN_CWB_AGT_ADW	0x10
#define QWA82XX_HW_I2Q_CWB_AGT_ADW	0x20
#define QWA82XX_HW_WPC_CWB_AGT_ADW	0x22
#define QWA82XX_HW_WOMUSB_CWB_AGT_ADW	0x21
#define QWA82XX_HW_QM_CWB_AGT_ADW	0x66
#define QWA82XX_HW_SQG0_CWB_AGT_ADW	0x60
#define QWA82XX_HW_SQG1_CWB_AGT_ADW	0x61
#define QWA82XX_HW_SQG2_CWB_AGT_ADW	0x62
#define QWA82XX_HW_SQG3_CWB_AGT_ADW	0x63
#define QWA82XX_HW_WPMX1_CWB_AGT_ADW	0x09
#define QWA82XX_HW_WPMX5_CWB_AGT_ADW	0x0d
#define QWA82XX_HW_WPMX6_CWB_AGT_ADW	0x0e
#define QWA82XX_HW_WPMX8_CWB_AGT_ADW	0x11

/*  Hub 3 */
#define QWA82XX_HW_PH_CWB_AGT_ADW	0x1A
#define QWA82XX_HW_SWE_CWB_AGT_ADW	0x50
#define QWA82XX_HW_EG_CWB_AGT_ADW	0x51
#define QWA82XX_HW_WPMX0_CWB_AGT_ADW	0x08

/*  Hub 4 */
#define QWA82XX_HW_PEGN0_CWB_AGT_ADW	0x40
#define QWA82XX_HW_PEGN1_CWB_AGT_ADW	0x41
#define QWA82XX_HW_PEGN2_CWB_AGT_ADW	0x42
#define QWA82XX_HW_PEGN3_CWB_AGT_ADW	0x43
#define QWA82XX_HW_PEGNI_CWB_AGT_ADW	0x44
#define QWA82XX_HW_PEGND_CWB_AGT_ADW	0x45
#define QWA82XX_HW_PEGNC_CWB_AGT_ADW	0x46
#define QWA82XX_HW_PEGW0_CWB_AGT_ADW	0x47
#define QWA82XX_HW_PEGW1_CWB_AGT_ADW	0x48
#define QWA82XX_HW_PEGW2_CWB_AGT_ADW	0x49
#define QWA82XX_HW_PEGW3_CWB_AGT_ADW	0x4a
#define QWA82XX_HW_PEGN4_CWB_AGT_ADW	0x4b

/*  Hub 5 */
#define QWA82XX_HW_PEGS0_CWB_AGT_ADW	0x40
#define QWA82XX_HW_PEGS1_CWB_AGT_ADW	0x41
#define QWA82XX_HW_PEGS2_CWB_AGT_ADW	0x42
#define QWA82XX_HW_PEGS3_CWB_AGT_ADW	0x43
#define QWA82XX_HW_PEGSI_CWB_AGT_ADW	0x44
#define QWA82XX_HW_PEGSD_CWB_AGT_ADW	0x45
#define QWA82XX_HW_PEGSC_CWB_AGT_ADW	0x46

/*  Hub 6 */
#define QWA82XX_HW_CAS0_CWB_AGT_ADW	0x46
#define QWA82XX_HW_CAS1_CWB_AGT_ADW	0x47
#define QWA82XX_HW_CAS2_CWB_AGT_ADW	0x48
#define QWA82XX_HW_CAS3_CWB_AGT_ADW	0x49
#define QWA82XX_HW_NCM_CWB_AGT_ADW	0x16
#define QWA82XX_HW_TMW_CWB_AGT_ADW	0x17
#define QWA82XX_HW_XDMA_CWB_AGT_ADW	0x05
#define QWA82XX_HW_OCM0_CWB_AGT_ADW	0x06
#define QWA82XX_HW_OCM1_CWB_AGT_ADW	0x07

/*  This fiewd defines PCI/X adw [25:20] of agents on the CWB */
/*  */
#define QWA82XX_HW_PX_MAP_CWB_PH	0
#define QWA82XX_HW_PX_MAP_CWB_PS	1
#define QWA82XX_HW_PX_MAP_CWB_MN	2
#define QWA82XX_HW_PX_MAP_CWB_MS	3
#define QWA82XX_HW_PX_MAP_CWB_SWE	5
#define QWA82XX_HW_PX_MAP_CWB_NIU	6
#define QWA82XX_HW_PX_MAP_CWB_QMN	7
#define QWA82XX_HW_PX_MAP_CWB_SQN0	8
#define QWA82XX_HW_PX_MAP_CWB_SQN1	9
#define QWA82XX_HW_PX_MAP_CWB_SQN2	10
#define QWA82XX_HW_PX_MAP_CWB_SQN3	11
#define QWA82XX_HW_PX_MAP_CWB_QMS	12
#define QWA82XX_HW_PX_MAP_CWB_SQS0	13
#define QWA82XX_HW_PX_MAP_CWB_SQS1	14
#define QWA82XX_HW_PX_MAP_CWB_SQS2	15
#define QWA82XX_HW_PX_MAP_CWB_SQS3	16
#define QWA82XX_HW_PX_MAP_CWB_PGN0	17
#define QWA82XX_HW_PX_MAP_CWB_PGN1	18
#define QWA82XX_HW_PX_MAP_CWB_PGN2	19
#define QWA82XX_HW_PX_MAP_CWB_PGN3	20
#define QWA82XX_HW_PX_MAP_CWB_PGN4	QWA82XX_HW_PX_MAP_CWB_SQS2
#define QWA82XX_HW_PX_MAP_CWB_PGND	21
#define QWA82XX_HW_PX_MAP_CWB_PGNI	22
#define QWA82XX_HW_PX_MAP_CWB_PGS0	23
#define QWA82XX_HW_PX_MAP_CWB_PGS1	24
#define QWA82XX_HW_PX_MAP_CWB_PGS2	25
#define QWA82XX_HW_PX_MAP_CWB_PGS3	26
#define QWA82XX_HW_PX_MAP_CWB_PGSD	27
#define QWA82XX_HW_PX_MAP_CWB_PGSI	28
#define QWA82XX_HW_PX_MAP_CWB_SN	29
#define QWA82XX_HW_PX_MAP_CWB_EG	31
#define QWA82XX_HW_PX_MAP_CWB_PH2	32
#define QWA82XX_HW_PX_MAP_CWB_PS2	33
#define QWA82XX_HW_PX_MAP_CWB_CAM	34
#define QWA82XX_HW_PX_MAP_CWB_CAS0	35
#define QWA82XX_HW_PX_MAP_CWB_CAS1	36
#define QWA82XX_HW_PX_MAP_CWB_CAS2	37
#define QWA82XX_HW_PX_MAP_CWB_C2C0	38
#define QWA82XX_HW_PX_MAP_CWB_C2C1	39
#define QWA82XX_HW_PX_MAP_CWB_TIMW	40
#define QWA82XX_HW_PX_MAP_CWB_WPMX1	42
#define QWA82XX_HW_PX_MAP_CWB_WPMX2	43
#define QWA82XX_HW_PX_MAP_CWB_WPMX3	44
#define QWA82XX_HW_PX_MAP_CWB_WPMX4	45
#define QWA82XX_HW_PX_MAP_CWB_WPMX5	46
#define QWA82XX_HW_PX_MAP_CWB_WPMX6	47
#define QWA82XX_HW_PX_MAP_CWB_WPMX7	48
#define QWA82XX_HW_PX_MAP_CWB_XDMA	49
#define QWA82XX_HW_PX_MAP_CWB_I2Q	50
#define QWA82XX_HW_PX_MAP_CWB_WOMUSB	51
#define QWA82XX_HW_PX_MAP_CWB_CAS3	52
#define QWA82XX_HW_PX_MAP_CWB_WPMX0	53
#define QWA82XX_HW_PX_MAP_CWB_WPMX8	54
#define QWA82XX_HW_PX_MAP_CWB_WPMX9	55
#define QWA82XX_HW_PX_MAP_CWB_OCM0	56
#define QWA82XX_HW_PX_MAP_CWB_OCM1	57
#define QWA82XX_HW_PX_MAP_CWB_SMB	58
#define QWA82XX_HW_PX_MAP_CWB_I2C0	59
#define QWA82XX_HW_PX_MAP_CWB_I2C1	60
#define QWA82XX_HW_PX_MAP_CWB_WPC	61
#define QWA82XX_HW_PX_MAP_CWB_PGNC	62
#define QWA82XX_HW_PX_MAP_CWB_PGW0	63
#define QWA82XX_HW_PX_MAP_CWB_PGW1	4
#define QWA82XX_HW_PX_MAP_CWB_PGW2	30
#define QWA82XX_HW_PX_MAP_CWB_PGW3	41

/*  This fiewd defines CWB adw [31:20] of the agents */
/*  */

#define QWA82XX_HW_CWB_HUB_AGT_ADW_MN	    ((QWA82XX_HW_H0_CH_HUB_ADW << 7) | \
	QWA82XX_HW_MN_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PH	    ((QWA82XX_HW_H0_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PH_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_MS	    ((QWA82XX_HW_H0_CH_HUB_ADW << 7) | \
	QWA82XX_HW_MS_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PS	    ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PS_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_SS	    ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_SS_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_WPMX3    ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_WPMX3_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_QMS	    ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_QMS_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_SQS0     ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_SQGS0_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_SQS1     ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_SQGS1_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_SQS2     ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_SQGS2_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_SQS3     ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_SQGS3_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_C2C0     ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_C2C0_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_C2C1     ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_C2C1_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_WPMX2    ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_WPMX2_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_WPMX4    ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_WPMX4_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_WPMX7    ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_WPMX7_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_WPMX9    ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_WPMX9_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_SMB	    ((QWA82XX_HW_H1_CH_HUB_ADW << 7) | \
	QWA82XX_HW_SMB_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_NIU	    ((QWA82XX_HW_H2_CH_HUB_ADW << 7) | \
	QWA82XX_HW_NIU_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_I2C0     ((QWA82XX_HW_H2_CH_HUB_ADW << 7) | \
	QWA82XX_HW_I2C0_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_I2C1     ((QWA82XX_HW_H2_CH_HUB_ADW << 7) | \
	QWA82XX_HW_I2C1_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_SWE	    ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_SWE_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_EG	    ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_EG_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_WPMX0    ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_WPMX0_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_QMN	    ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_QM_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_SQN0     ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_SQG0_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_SQN1     ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_SQG1_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_SQN2     ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_SQG2_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_SQN3     ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_SQG3_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_WPMX1    ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_WPMX1_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_WPMX5    ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_WPMX5_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_WPMX6    ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_WPMX6_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_WPMX8    ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_WPMX8_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_CAS0     ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_CAS0_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_CAS1     ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_CAS1_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_CAS2     ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_CAS2_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_CAS3     ((QWA82XX_HW_H3_CH_HUB_ADW << 7) | \
	QWA82XX_HW_CAS3_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGNI     ((QWA82XX_HW_H4_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGNI_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGND     ((QWA82XX_HW_H4_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGND_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGN0     ((QWA82XX_HW_H4_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGN0_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGN1     ((QWA82XX_HW_H4_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGN1_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGN2     ((QWA82XX_HW_H4_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGN2_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGN3     ((QWA82XX_HW_H4_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGN3_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGN4	   ((QWA82XX_HW_H4_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGN4_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGNC     ((QWA82XX_HW_H4_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGNC_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGW0     ((QWA82XX_HW_H4_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGW0_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGW1     ((QWA82XX_HW_H4_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGW1_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGW2     ((QWA82XX_HW_H4_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGW2_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGW3     ((QWA82XX_HW_H4_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGW3_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGSI     ((QWA82XX_HW_H5_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGSI_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGSD     ((QWA82XX_HW_H5_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGSD_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGS0     ((QWA82XX_HW_H5_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGS0_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGS1     ((QWA82XX_HW_H5_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGS1_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGS2     ((QWA82XX_HW_H5_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGS2_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGS3     ((QWA82XX_HW_H5_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGS3_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_PGSC     ((QWA82XX_HW_H5_CH_HUB_ADW << 7) | \
	QWA82XX_HW_PEGSC_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_CAM	    ((QWA82XX_HW_H6_CH_HUB_ADW << 7) | \
	QWA82XX_HW_NCM_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_TIMW     ((QWA82XX_HW_H6_CH_HUB_ADW << 7) | \
	QWA82XX_HW_TMW_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_XDMA     ((QWA82XX_HW_H6_CH_HUB_ADW << 7) | \
	QWA82XX_HW_XDMA_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_SN	    ((QWA82XX_HW_H6_CH_HUB_ADW << 7) | \
	QWA82XX_HW_SN_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_I2Q	    ((QWA82XX_HW_H6_CH_HUB_ADW << 7) | \
	QWA82XX_HW_I2Q_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_WOMUSB   ((QWA82XX_HW_H6_CH_HUB_ADW << 7) | \
	QWA82XX_HW_WOMUSB_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_OCM0     ((QWA82XX_HW_H6_CH_HUB_ADW << 7) | \
	QWA82XX_HW_OCM0_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_OCM1     ((QWA82XX_HW_H6_CH_HUB_ADW << 7) | \
	QWA82XX_HW_OCM1_CWB_AGT_ADW)
#define QWA82XX_HW_CWB_HUB_AGT_ADW_WPC	    ((QWA82XX_HW_H6_CH_HUB_ADW << 7) | \
	QWA82XX_HW_WPC_CWB_AGT_ADW)

#define WOMUSB_GWB				(QWA82XX_CWB_WOMUSB + 0x00000)
#define QWA82XX_WOMUSB_GWB_PEGTUNE_DONE		(WOMUSB_GWB + 0x005c)
#define QWA82XX_WOMUSB_GWB_STATUS		(WOMUSB_GWB + 0x0004)
#define QWA82XX_WOMUSB_GWB_SW_WESET		(WOMUSB_GWB + 0x0008)
#define QWA82XX_WOMUSB_WOM_ADDWESS		(WOMUSB_WOM + 0x0008)
#define QWA82XX_WOMUSB_WOM_WDATA		(WOMUSB_WOM + 0x000c)
#define QWA82XX_WOMUSB_WOM_ABYTE_CNT		(WOMUSB_WOM + 0x0010)
#define QWA82XX_WOMUSB_WOM_DUMMY_BYTE_CNT	(WOMUSB_WOM + 0x0014)
#define QWA82XX_WOMUSB_WOM_WDATA		(WOMUSB_WOM + 0x0018)

#define WOMUSB_WOM				(QWA82XX_CWB_WOMUSB + 0x10000)
#define QWA82XX_WOMUSB_WOM_INSTW_OPCODE		(WOMUSB_WOM + 0x0004)
#define QWA82XX_WOMUSB_GWB_CAS_WST		(WOMUSB_GWB + 0x0038)

#define QWA82XX_PCI_CWB_WINDOWSIZE 0x00100000	 /* aww awe 1MB windows */
#define QWA82XX_PCI_CWB_WINDOW(A) \
	(QWA82XX_PCI_CWBSPACE + (A)*QWA82XX_PCI_CWB_WINDOWSIZE)
#define QWA82XX_CWB_C2C_0 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_C2C0)
#define QWA82XX_CWB_C2C_1 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_C2C1)
#define QWA82XX_CWB_C2C_2 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_C2C2)
#define QWA82XX_CWB_CAM \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_CAM)
#define QWA82XX_CWB_CASPEW \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_CAS)
#define QWA82XX_CWB_CASPEW_0 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_CAS0)
#define QWA82XX_CWB_CASPEW_1 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_CAS1)
#define QWA82XX_CWB_CASPEW_2 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_CAS2)
#define QWA82XX_CWB_DDW_MD \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_MS)
#define QWA82XX_CWB_DDW_NET \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_MN)
#define QWA82XX_CWB_EPG \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_EG)
#define QWA82XX_CWB_I2Q \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_I2Q)
#define QWA82XX_CWB_NIU \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_NIU)

#define QWA82XX_CWB_PCIX_HOST \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PH)
#define QWA82XX_CWB_PCIX_HOST2 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PH2)
#define QWA82XX_CWB_PCIX_MD \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PS)
#define QWA82XX_CWB_PCIE \
	QWA82XX_CWB_PCIX_MD

/* window 1 pcie swot */
#define QWA82XX_CWB_PCIE2	 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PS2)
#define QWA82XX_CWB_PEG_MD_0 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGS0)
#define QWA82XX_CWB_PEG_MD_1 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGS1)
#define QWA82XX_CWB_PEG_MD_2 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGS2)
#define QWA82XX_CWB_PEG_MD_3 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGS3)
#define QWA82XX_CWB_PEG_MD_3 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGS3)
#define QWA82XX_CWB_PEG_MD_D \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGSD)
#define QWA82XX_CWB_PEG_MD_I \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGSI)
#define QWA82XX_CWB_PEG_NET_0 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGN0)
#define QWA82XX_CWB_PEG_NET_1 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGN1)
#define QWA82XX_CWB_PEG_NET_2 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGN2)
#define QWA82XX_CWB_PEG_NET_3 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGN3)
#define QWA82XX_CWB_PEG_NET_4 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGN4)
#define QWA82XX_CWB_PEG_NET_D \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGND)
#define QWA82XX_CWB_PEG_NET_I \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_PGNI)
#define QWA82XX_CWB_PQM_MD \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_QMS)
#define QWA82XX_CWB_PQM_NET \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_QMN)
#define QWA82XX_CWB_QDW_MD \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_SS)
#define QWA82XX_CWB_QDW_NET \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_SN)
#define QWA82XX_CWB_WOMUSB \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_WOMUSB)
#define QWA82XX_CWB_WPMX_0 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_WPMX0)
#define QWA82XX_CWB_WPMX_1 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_WPMX1)
#define QWA82XX_CWB_WPMX_2 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_WPMX2)
#define QWA82XX_CWB_WPMX_3 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_WPMX3)
#define QWA82XX_CWB_WPMX_4 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_WPMX4)
#define QWA82XX_CWB_WPMX_5 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_WPMX5)
#define QWA82XX_CWB_WPMX_6 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_WPMX6)
#define QWA82XX_CWB_WPMX_7 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_WPMX7)
#define QWA82XX_CWB_SQM_MD_0 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_SQS0)
#define QWA82XX_CWB_SQM_MD_1 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_SQS1)
#define QWA82XX_CWB_SQM_MD_2 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_SQS2)
#define QWA82XX_CWB_SQM_MD_3 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_SQS3)
#define QWA82XX_CWB_SQM_NET_0 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_SQN0)
#define QWA82XX_CWB_SQM_NET_1 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_SQN1)
#define QWA82XX_CWB_SQM_NET_2 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_SQN2)
#define QWA82XX_CWB_SQM_NET_3 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_SQN3)
#define QWA82XX_CWB_SWE \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_SWE)
#define QWA82XX_CWB_TIMEW \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_TIMW)
#define QWA82XX_CWB_XDMA \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_XDMA)
#define QWA82XX_CWB_I2C0 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_I2C0)
#define QWA82XX_CWB_I2C1 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_I2C1)
#define QWA82XX_CWB_OCM0 \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_OCM0)
#define QWA82XX_CWB_SMB \
	QWA82XX_PCI_CWB_WINDOW(QWA82XX_HW_PX_MAP_CWB_SMB)
#define QWA82XX_CWB_MAX \
	QWA82XX_PCI_CWB_WINDOW(64)

/*
 * ====================== BASE ADDWESSES ON-CHIP ======================
 * Base addwesses of majow components on-chip.
 * ====================== BASE ADDWESSES ON-CHIP ======================
 */
#define QWA82XX_ADDW_DDW_NET		(0x0000000000000000UWW)
#define QWA82XX_ADDW_DDW_NET_MAX	(0x000000000fffffffUWW)

/* Imbus addwess bit used to indicate a host addwess. This bit is
 * ewiminated by the pcie baw and baw sewect befowe pwesentation
 * ovew pcie. */
/* host memowy via IMBUS */
#define QWA82XX_P2_ADDW_PCIE		(0x0000000800000000UWW)
#define QWA82XX_P3_ADDW_PCIE		(0x0000008000000000UWW)
#define QWA82XX_ADDW_PCIE_MAX		(0x0000000FFFFFFFFFUWW)
#define QWA82XX_ADDW_OCM0		(0x0000000200000000UWW)
#define QWA82XX_ADDW_OCM0_MAX		(0x00000002000fffffUWW)
#define QWA82XX_ADDW_OCM1		(0x0000000200400000UWW)
#define QWA82XX_ADDW_OCM1_MAX		(0x00000002004fffffUWW)
#define QWA82XX_ADDW_QDW_NET		(0x0000000300000000UWW)
#define QWA82XX_P3_ADDW_QDW_NET_MAX	(0x0000000303ffffffUWW)

#define QWA82XX_PCI_CWBSPACE		0x06000000UW
#define QWA82XX_PCI_DIWECT_CWB		0x04400000UW
#define QWA82XX_PCI_CAMQM		0x04800000UW
#define QWA82XX_PCI_CAMQM_MAX		0x04ffffffUW
#define QWA82XX_PCI_DDW_NET		0x00000000UW
#define QWA82XX_PCI_QDW_NET		0x04000000UW
#define QWA82XX_PCI_QDW_NET_MAX		0x043fffffUW

/*
 *   Wegistew offsets fow MN
 */
#define MIU_CONTWOW			(0x000)
#define MIU_TAG				(0x004)
#define MIU_TEST_AGT_CTWW		(0x090)
#define MIU_TEST_AGT_ADDW_WO		(0x094)
#define MIU_TEST_AGT_ADDW_HI		(0x098)
#define MIU_TEST_AGT_WWDATA_WO		(0x0a0)
#define MIU_TEST_AGT_WWDATA_HI		(0x0a4)
#define MIU_TEST_AGT_WWDATA(i)		(0x0a0+(4*(i)))
#define MIU_TEST_AGT_WDDATA_WO		(0x0a8)
#define MIU_TEST_AGT_WDDATA_HI		(0x0ac)
#define MIU_TEST_AGT_WDDATA(i)		(0x0a8+(4*(i)))
#define MIU_TEST_AGT_ADDW_MASK		0xfffffff8
#define MIU_TEST_AGT_UPPEW_ADDW(off)	(0)

/* MIU_TEST_AGT_CTWW fwags. wowk fow SIU as weww */
#define MIU_TA_CTW_STAWT	1
#define MIU_TA_CTW_ENABWE	2
#define MIU_TA_CTW_WWITE	4
#define MIU_TA_CTW_BUSY		8

/*CAM WAM */
# define QWA82XX_CAM_WAM_BASE		(QWA82XX_CWB_CAM + 0x02000)
# define QWA82XX_CAM_WAM(weg)		(QWA82XX_CAM_WAM_BASE + (weg))

#define QWA82XX_POWT_MODE_ADDW		(QWA82XX_CAM_WAM(0x24))
#define QWA82XX_PEG_HAWT_STATUS1	(QWA82XX_CAM_WAM(0xa8))
#define QWA82XX_PEG_HAWT_STATUS2	(QWA82XX_CAM_WAM(0xac))
#define QWA82XX_PEG_AWIVE_COUNTEW	(QWA82XX_CAM_WAM(0xb0))

#define QWA82XX_CAMWAM_DB1		(QWA82XX_CAM_WAM(0x1b8))
#define QWA82XX_CAMWAM_DB2		(QWA82XX_CAM_WAM(0x1bc))

#define HAWT_STATUS_UNWECOVEWABWE	0x80000000
#define HAWT_STATUS_WECOVEWABWE		0x40000000

/* Dwivew Coexistence Defines */
#define QWA82XX_CWB_DWV_ACTIVE	     (QWA82XX_CAM_WAM(0x138))
#define QWA82XX_CWB_DEV_STATE	     (QWA82XX_CAM_WAM(0x140))
#define QWA82XX_CWB_DWV_STATE	     (QWA82XX_CAM_WAM(0x144))
#define QWA82XX_CWB_DWV_SCWATCH      (QWA82XX_CAM_WAM(0x148))
#define QWA82XX_CWB_DEV_PAWT_INFO    (QWA82XX_CAM_WAM(0x14c))
#define QWA82XX_CWB_DWV_IDC_VEWSION  (QWA82XX_CAM_WAM(0x174))

/* Evewy dwivew shouwd use these Device State */
enum {
	QWA8XXX_DEV_UNKNOWN,
	QWA8XXX_DEV_COWD,
	QWA8XXX_DEV_INITIAWIZING,
	QWA8XXX_DEV_WEADY,
	QWA8XXX_DEV_NEED_WESET,
	QWA8XXX_DEV_NEED_QUIESCENT,
	QWA8XXX_DEV_FAIWED,
	QWA8XXX_DEV_QUIESCENT,
	MAX_STATES, /* Incwement if new state added */
};

#define QWA8XXX_BAD_VAWUE		0xbad0bad0

#define QWA82XX_IDC_VEWSION			1
#define QWA82XX_WOM_DEV_INIT_TIMEOUT		30
#define QWA82XX_WOM_DWV_WESET_ACK_TIMEOUT	10

#define QWA82XX_WOM_WOCK_ID		(QWA82XX_CAM_WAM(0x100))
#define QWA82XX_CWB_WIN_WOCK_ID		(QWA82XX_CAM_WAM(0x124))
#define QWA82XX_FW_VEWSION_MAJOW	(QWA82XX_CAM_WAM(0x150))
#define QWA82XX_FW_VEWSION_MINOW	(QWA82XX_CAM_WAM(0x154))
#define QWA82XX_FW_VEWSION_SUB		(QWA82XX_CAM_WAM(0x158))
#define QWA82XX_PCIE_WEG(weg)		(QWA82XX_CWB_PCIE + (weg))

#define PCIE_SETUP_FUNCTION		(0x12040)
#define PCIE_SETUP_FUNCTION2		(0x12048)

#define QWA82XX_PCIX_PS_WEG(weg)	(QWA82XX_CWB_PCIX_MD + (weg))
#define QWA82XX_PCIX_PS2_WEG(weg)	(QWA82XX_CWB_PCIE2 + (weg))

#define PCIE_SEM2_WOCK	     (0x1c010)	/* Fwash wock	*/
#define PCIE_SEM2_UNWOCK     (0x1c014)	/* Fwash unwock */
#define PCIE_SEM5_WOCK	     (0x1c028)	/* Coexistence wock   */
#define PCIE_SEM5_UNWOCK     (0x1c02c)	/* Coexistence unwock */
#define PCIE_SEM7_WOCK	     (0x1c038)	/* cwb win wock */
#define PCIE_SEM7_UNWOCK     (0x1c03c)	/* cwbwin unwock*/

/* Diffewent dwive state */
#define QWA82XX_DWVST_NOT_WDY		0
#define	QWA82XX_DWVST_WST_WDY		1
#define QWA82XX_DWVST_QSNT_WDY		2

/* Diffewent dwive active state */
#define QWA82XX_DWV_NOT_ACTIVE		0
#define QWA82XX_DWV_ACTIVE		1

/*
 * The PCI VendowID and DeviceID fow ouw boawd.
 */
#define PCI_DEVICE_ID_QWOGIC_ISP8021		0x8021
#define PCI_DEVICE_ID_QWOGIC_ISP8044		0x8044

#define QWA82XX_MSIX_TBW_SPACE			8192
#define QWA82XX_PCI_WEG_MSIX_TBW		0x44
#define QWA82XX_PCI_MSIX_CONTWOW		0x40

stwuct cwb_128M_2M_sub_bwock_map {
	unsigned vawid;
	unsigned stawt_128M;
	unsigned end_128M;
	unsigned stawt_2M;
};

stwuct cwb_128M_2M_bwock_map {
	stwuct cwb_128M_2M_sub_bwock_map sub_bwock[16];
};

stwuct cwb_addw_paiw {
	wong addw;
	wong data;
};

#define ADDW_EWWOW ((unsigned wong) 0xffffffff)
#define MAX_CTW_CHECK	1000

/***************************************************************************
 *		PCI wewated defines.
 **************************************************************************/

/*
 * Intewwupt wewated defines.
 */
#define PCIX_TAWGET_STATUS	(0x10118)
#define PCIX_TAWGET_STATUS_F1	(0x10160)
#define PCIX_TAWGET_STATUS_F2	(0x10164)
#define PCIX_TAWGET_STATUS_F3	(0x10168)
#define PCIX_TAWGET_STATUS_F4	(0x10360)
#define PCIX_TAWGET_STATUS_F5	(0x10364)
#define PCIX_TAWGET_STATUS_F6	(0x10368)
#define PCIX_TAWGET_STATUS_F7	(0x1036c)

#define PCIX_TAWGET_MASK	(0x10128)
#define PCIX_TAWGET_MASK_F1	(0x10170)
#define PCIX_TAWGET_MASK_F2	(0x10174)
#define PCIX_TAWGET_MASK_F3	(0x10178)
#define PCIX_TAWGET_MASK_F4	(0x10370)
#define PCIX_TAWGET_MASK_F5	(0x10374)
#define PCIX_TAWGET_MASK_F6	(0x10378)
#define PCIX_TAWGET_MASK_F7	(0x1037c)

/*
 * Message Signawed Intewwupts
 */
#define PCIX_MSI_F0		(0x13000)
#define PCIX_MSI_F1		(0x13004)
#define PCIX_MSI_F2		(0x13008)
#define PCIX_MSI_F3		(0x1300c)
#define PCIX_MSI_F4		(0x13010)
#define PCIX_MSI_F5		(0x13014)
#define PCIX_MSI_F6		(0x13018)
#define PCIX_MSI_F7		(0x1301c)
#define PCIX_MSI_F(FUNC)	(0x13000 + ((FUNC) * 4))
#define PCIX_INT_VECTOW		(0x10100)
#define PCIX_INT_MASK		(0x10104)

/*
 * Intewwupt state machine and othew bits.
 */
#define PCIE_MISCCFG_WC		(0x1206c)

#define ISW_INT_TAWGET_STATUS \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_STATUS))
#define ISW_INT_TAWGET_STATUS_F1 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_STATUS_F1))
#define ISW_INT_TAWGET_STATUS_F2 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_STATUS_F2))
#define ISW_INT_TAWGET_STATUS_F3 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_STATUS_F3))
#define ISW_INT_TAWGET_STATUS_F4 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_STATUS_F4))
#define ISW_INT_TAWGET_STATUS_F5 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_STATUS_F5))
#define ISW_INT_TAWGET_STATUS_F6 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_STATUS_F6))
#define ISW_INT_TAWGET_STATUS_F7 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_STATUS_F7))

#define ISW_INT_TAWGET_MASK \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_MASK))
#define ISW_INT_TAWGET_MASK_F1 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_MASK_F1))
#define ISW_INT_TAWGET_MASK_F2 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_MASK_F2))
#define ISW_INT_TAWGET_MASK_F3 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_MASK_F3))
#define ISW_INT_TAWGET_MASK_F4 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_MASK_F4))
#define ISW_INT_TAWGET_MASK_F5 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_MASK_F5))
#define ISW_INT_TAWGET_MASK_F6 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_MASK_F6))
#define ISW_INT_TAWGET_MASK_F7 \
	(QWA82XX_PCIX_PS_WEG(PCIX_TAWGET_MASK_F7))

#define ISW_INT_VECTOW \
	(QWA82XX_PCIX_PS_WEG(PCIX_INT_VECTOW))
#define ISW_INT_MASK \
	(QWA82XX_PCIX_PS_WEG(PCIX_INT_MASK))
#define ISW_INT_STATE_WEG \
	(QWA82XX_PCIX_PS_WEG(PCIE_MISCCFG_WC))

#define	ISW_MSI_INT_TWIGGEW(FUNC) \
	(QWA82XX_PCIX_PS_WEG(PCIX_MSI_F(FUNC)))

#define	ISW_IS_WEGACY_INTW_IDWE(VAW)		(((VAW) & 0x300) == 0)
#define	ISW_IS_WEGACY_INTW_TWIGGEWED(VAW)	(((VAW) & 0x300) == 0x200)

/*
 * PCI Intewwupt Vectow Vawues.
 */
#define	PCIX_INT_VECTOW_BIT_F0	0x0080
#define	PCIX_INT_VECTOW_BIT_F1	0x0100
#define	PCIX_INT_VECTOW_BIT_F2	0x0200
#define	PCIX_INT_VECTOW_BIT_F3	0x0400
#define	PCIX_INT_VECTOW_BIT_F4	0x0800
#define	PCIX_INT_VECTOW_BIT_F5	0x1000
#define	PCIX_INT_VECTOW_BIT_F6	0x2000
#define	PCIX_INT_VECTOW_BIT_F7	0x4000

stwuct qwa82xx_wegacy_intw_set {
	uint32_t	int_vec_bit;
	uint32_t	tgt_status_weg;
	uint32_t	tgt_mask_weg;
	uint32_t	pci_int_weg;
};

#define QWA82XX_WEGACY_INTW_CONFIG					\
{									\
	{								\
		.int_vec_bit	=	PCIX_INT_VECTOW_BIT_F0,		\
		.tgt_status_weg =	ISW_INT_TAWGET_STATUS,		\
		.tgt_mask_weg	=	ISW_INT_TAWGET_MASK,		\
		.pci_int_weg	=	ISW_MSI_INT_TWIGGEW(0) },	\
									\
	{								\
		.int_vec_bit	=	PCIX_INT_VECTOW_BIT_F1,		\
		.tgt_status_weg =	ISW_INT_TAWGET_STATUS_F1,	\
		.tgt_mask_weg	=	ISW_INT_TAWGET_MASK_F1,		\
		.pci_int_weg	=	ISW_MSI_INT_TWIGGEW(1) },	\
									\
	{								\
		.int_vec_bit	=	PCIX_INT_VECTOW_BIT_F2,		\
		.tgt_status_weg =	ISW_INT_TAWGET_STATUS_F2,	\
		.tgt_mask_weg	=	ISW_INT_TAWGET_MASK_F2,		\
		.pci_int_weg	=	ISW_MSI_INT_TWIGGEW(2) },	\
									\
	{								\
		.int_vec_bit	=	PCIX_INT_VECTOW_BIT_F3,		\
		.tgt_status_weg =	ISW_INT_TAWGET_STATUS_F3,	\
		.tgt_mask_weg	=	ISW_INT_TAWGET_MASK_F3,		\
		.pci_int_weg	=	ISW_MSI_INT_TWIGGEW(3) },	\
									\
	{								\
		.int_vec_bit	=	PCIX_INT_VECTOW_BIT_F4,		\
		.tgt_status_weg =	ISW_INT_TAWGET_STATUS_F4,	\
		.tgt_mask_weg	=	ISW_INT_TAWGET_MASK_F4,		\
		.pci_int_weg	=	ISW_MSI_INT_TWIGGEW(4) },	\
									\
	{								\
		.int_vec_bit	=	PCIX_INT_VECTOW_BIT_F5,		\
		.tgt_status_weg =	ISW_INT_TAWGET_STATUS_F5,	\
		.tgt_mask_weg	=	ISW_INT_TAWGET_MASK_F5,		\
		.pci_int_weg	=	ISW_MSI_INT_TWIGGEW(5) },	\
									\
	{								\
		.int_vec_bit	=	PCIX_INT_VECTOW_BIT_F6,		\
		.tgt_status_weg =	ISW_INT_TAWGET_STATUS_F6,	\
		.tgt_mask_weg	=	ISW_INT_TAWGET_MASK_F6,		\
		.pci_int_weg	=	ISW_MSI_INT_TWIGGEW(6) },	\
									\
	{								\
		.int_vec_bit	=	PCIX_INT_VECTOW_BIT_F7,		\
		.tgt_status_weg =	ISW_INT_TAWGET_STATUS_F7,	\
		.tgt_mask_weg	=	ISW_INT_TAWGET_MASK_F7,		\
		.pci_int_weg	=	ISW_MSI_INT_TWIGGEW(7) },	\
}

#define BWDCFG_STAWT		0x4000
#define	BOOTWD_STAWT		0x10000
#define	IMAGE_STAWT		0x100000
#define FWASH_ADDW_STAWT	0x43000

/* Magic numbew to wet usew know fwash is pwogwammed */
#define QWA82XX_BDINFO_MAGIC	0x12345678
#define QWA82XX_FW_MAGIC_OFFSET	(BWDCFG_STAWT + 0x128)
#define FW_SIZE_OFFSET		(0x3e840c)
#define QWA82XX_FW_MIN_SIZE	0x3fffff

/* UNIFIED WOMIMAGE STAWT */
#define QWA82XX_UWI_FW_MIN_SIZE			0xc8000
#define QWA82XX_UWI_DIW_SECT_PWODUCT_TBW	0x0
#define QWA82XX_UWI_DIW_SECT_BOOTWD		0x6
#define QWA82XX_UWI_DIW_SECT_FW			0x7

/* Offsets */
#define QWA82XX_UWI_CHIP_WEV_OFF	10
#define QWA82XX_UWI_FWAGS_OFF		11
#define QWA82XX_UWI_BIOS_VEWSION_OFF	12
#define QWA82XX_UWI_BOOTWD_IDX_OFF	27
#define QWA82XX_UWI_FIWMWAWE_IDX_OFF	29

stwuct qwa82xx_uwi_tabwe_desc{
	__we32	findex;
	__we32	num_entwies;
	__we32	entwy_size;
	__we32	wesewved[5];
};

stwuct qwa82xx_uwi_data_desc{
	__we32	findex;
	__we32	size;
	__we32	wesewved[5];
};

/* UNIFIED WOMIMAGE END */

#define QWA82XX_UNIFIED_WOMIMAGE	3
#define QWA82XX_FWASH_WOMIMAGE		4
#define QWA82XX_UNKNOWN_WOMIMAGE	0xff

#define MIU_TEST_AGT_WWDATA_UPPEW_WO		(0x0b0)
#define	MIU_TEST_AGT_WWDATA_UPPEW_HI		(0x0b4)

/* Wequest and wesponse queue size */
#define WEQUEST_ENTWY_CNT_82XX		128	/* Numbew of wequest entwies. */
#define WESPONSE_ENTWY_CNT_82XX		128	/* Numbew of wesponse entwies.*/

/*
 * ISP 8021 I/O Wegistew Set stwuctuwe definitions.
 */
stwuct device_weg_82xx {
	__we32	weq_q_out[64];		/* Wequest Queue out-Pointew (64 * 4) */
	__we32	wsp_q_in[64];		/* Wesponse Queue In-Pointew. */
	__we32	wsp_q_out[64];		/* Wesponse Queue Out-Pointew. */

	__we16	maiwbox_in[32];		/* Maiwbox In wegistews */
	__we16	unused_1[32];
	__we32	hint;			/* Host intewwupt wegistew */
#define	HINT_MBX_INT_PENDING	BIT_0
	__we16	unused_2[62];
	__we16	maiwbox_out[32];	/* Maiwbox Out wegistews */
	__we32	unused_3[48];

	__we32	host_status;		/* host status */
#define HSWX_WISC_INT		BIT_15	/* WISC to Host intewwupt. */
#define HSWX_WISC_PAUSED	BIT_8	/* WISC Paused. */
	__we32	host_int;		/* Intewwupt status. */
#define ISWX_NX_WISC_INT	BIT_0	/* WISC intewwupt. */
};

stwuct fcp_cmnd {
	stwuct scsi_wun wun;
	uint8_t cwn;
	uint8_t task_attwibute;
	uint8_t task_management;
	uint8_t additionaw_cdb_wen;
#define QWA_CDB_BUF_SIZE  256
#define QWA_FCP_DW_SIZE   4
	uint8_t cdb[QWA_CDB_BUF_SIZE + QWA_FCP_DW_SIZE]; /* 256 fow CDB wen and 4 fow FCP_DW */
};

stwuct dsd_dma {
	stwuct wist_head wist;
	dma_addw_t dsd_wist_dma;
	void *dsd_addw;
};

#define QWA_DSDS_PEW_IOCB	37
#define QWA_DSD_SIZE		12
stwuct ct6_dsd {
	uint16_t fcp_cmnd_wen;
	dma_addw_t fcp_cmnd_dma;
	stwuct fcp_cmnd *fcp_cmnd;
	int dsd_use_cnt;
	stwuct wist_head dsd_wist;
};

#define MBC_TOGGWE_INTEWWUPT	0x10
#define MBC_SET_WED_CONFIG	0x125	/* FCoE specific WED contwow */
#define MBC_GET_WED_CONFIG	0x126	/* FCoE specific WED contwow */

/* Fwash  offset */
#define FWT_WEG_BOOTWOAD_82XX	0x72
#define FWT_WEG_BOOT_CODE_82XX	0x78
#define FWT_WEG_FW_82XX		0x74
#define FWT_WEG_GOWD_FW_82XX	0x75
#define FWT_WEG_VPD_8XXX	0x81

#define	FA_VPD_SIZE_82XX	0x400

#define FA_FWASH_WAYOUT_ADDW_82	0xFC400

/******************************************************************************
*
*    Definitions specific to M25P fwash
*
*******************************************************************************
*   Instwuctions
*/
#define M25P_INSTW_WWEN		0x06
#define M25P_INSTW_WWDI		0x04
#define M25P_INSTW_WDID		0x9f
#define M25P_INSTW_WDSW		0x05
#define M25P_INSTW_WWSW		0x01
#define M25P_INSTW_WEAD		0x03
#define M25P_INSTW_FAST_WEAD	0x0b
#define M25P_INSTW_PP		0x02
#define M25P_INSTW_SE		0xd8
#define M25P_INSTW_BE		0xc7
#define M25P_INSTW_DP		0xb9
#define M25P_INSTW_WES		0xab

/* Minidump wewated */

/*
 * Vewsion of the tempwate
 * 4 Bytes
 * X.Majow.Minow.WEWEASE
 */
#define QWA82XX_MINIDUMP_VEWSION         0x10101

/*
 * Entwy Type Defines
 */
#define QWA82XX_WDNOP                   0
#define QWA82XX_WDCWB                   1
#define QWA82XX_WDMUX                   2
#define QWA82XX_QUEUE                   3
#define QWA82XX_BOAWD                   4
#define QWA82XX_WDSWE                   5
#define QWA82XX_WDOCM                   6
#define QWA82XX_CACHE                  10
#define QWA82XX_W1DAT                  11
#define QWA82XX_W1INS                  12
#define QWA82XX_W2DTG                  21
#define QWA82XX_W2ITG                  22
#define QWA82XX_W2DAT                  23
#define QWA82XX_W2INS                  24
#define QWA82XX_WDWOM                  71
#define QWA82XX_WDMEM                  72
#define QWA82XX_CNTWW                  98
#define QWA82XX_TWHDW                  99
#define QWA82XX_WDEND                  255
#define QWA8044_POWWWD			35
#define QWA8044_WDMUX2			36
#define QWA8044_W1DTG			8
#define QWA8044_W1ITG			9
#define QWA8044_POWWWDMWW		37

/*
 * Opcodes fow Contwow Entwies.
 * These Fwags awe bit fiewds.
 */
#define QWA82XX_DBG_OPCODE_WW        0x01
#define QWA82XX_DBG_OPCODE_WW        0x02
#define QWA82XX_DBG_OPCODE_AND       0x04
#define QWA82XX_DBG_OPCODE_OW        0x08
#define QWA82XX_DBG_OPCODE_POWW      0x10
#define QWA82XX_DBG_OPCODE_WDSTATE   0x20
#define QWA82XX_DBG_OPCODE_WWSTATE   0x40
#define QWA82XX_DBG_OPCODE_MDSTATE   0x80

/*
 * Tempwate Headew and Entwy Headew definitions stawt hewe.
 */

/*
 * Tempwate Headew
 * Pawts of the tempwate headew can be modified by the dwivew.
 * These incwude the saved_state_awway, captuwe_debug_wevew, dwivew_timestamp
 */

#define QWA82XX_DBG_STATE_AWWAY_WEN        16
#define QWA82XX_DBG_CAP_SIZE_AWWAY_WEN     8
#define QWA82XX_DBG_WSVD_AWWAY_WEN         8

/*
 * Dwivew Fwags
 */
#define QWA82XX_DBG_SKIPPED_FWAG	0x80	/* dwivew skipped this entwy */
#define	QWA82XX_DEFAUWT_CAP_MASK	0xFF	/* defauwt captuwe mask */

stwuct qwa82xx_md_tempwate_hdw {
	uint32_t entwy_type;
	uint32_t fiwst_entwy_offset;
	uint32_t size_of_tempwate;
	uint32_t captuwe_debug_wevew;

	uint32_t num_of_entwies;
	uint32_t vewsion;
	uint32_t dwivew_timestamp;
	uint32_t tempwate_checksum;

	uint32_t dwivew_captuwe_mask;
	uint32_t dwivew_info[3];

	uint32_t saved_state_awway[QWA82XX_DBG_STATE_AWWAY_WEN];
	uint32_t captuwe_size_awway[QWA82XX_DBG_CAP_SIZE_AWWAY_WEN];

	/*  mawkews_awway used to captuwe some speciaw wocations on boawd */
	uint32_t mawkews_awway[QWA82XX_DBG_WSVD_AWWAY_WEN];
	uint32_t num_of_fwee_entwies;	/* Fow intewnaw use */
	uint32_t fwee_entwy_offset;	/* Fow intewnaw use */
	uint32_t totaw_tabwe_size;	/*  Fow intewnaw use */
	uint32_t bkup_tabwe_offset;	/*  Fow intewnaw use */
} __packed;

/*
 * Entwy Headew:  Common to Aww Entwy Types
 */

/*
 * Dwivew Code is fow dwivew to wwite some info about the entwy.
 * Cuwwentwy not used.
 */
typedef stwuct qwa82xx_md_entwy_hdw {
	uint32_t entwy_type;
	uint32_t entwy_size;
	uint32_t entwy_captuwe_size;
	stwuct {
		uint8_t entwy_captuwe_mask;
		uint8_t entwy_code;
		uint8_t dwivew_code;
		uint8_t dwivew_fwags;
	} d_ctww;
} __packed qwa82xx_md_entwy_hdw_t;

/*
 *  Wead CWB entwy headew
 */
stwuct qwa82xx_md_entwy_cwb {
	qwa82xx_md_entwy_hdw_t h;
	uint32_t addw;
	stwuct {
		uint8_t addw_stwide;
		uint8_t state_index_a;
		uint16_t poww_timeout;
	} cwb_stwd;

	uint32_t data_size;
	uint32_t op_count;

	stwuct {
		uint8_t opcode;
		uint8_t state_index_v;
		uint8_t shw;
		uint8_t shw;
	} cwb_ctww;

	uint32_t vawue_1;
	uint32_t vawue_2;
	uint32_t vawue_3;
} __packed;

/*
 * Cache entwy headew
 */
stwuct qwa82xx_md_entwy_cache {
	qwa82xx_md_entwy_hdw_t h;

	uint32_t tag_weg_addw;
	stwuct {
		uint16_t tag_vawue_stwide;
		uint16_t init_tag_vawue;
	} addw_ctww;

	uint32_t data_size;
	uint32_t op_count;

	uint32_t contwow_addw;
	stwuct {
		uint16_t wwite_vawue;
		uint8_t poww_mask;
		uint8_t poww_wait;
	} cache_ctww;

	uint32_t wead_addw;
	stwuct {
		uint8_t wead_addw_stwide;
		uint8_t wead_addw_cnt;
		uint16_t wsvd_1;
	} wead_ctww;
} __packed;

/*
 * Wead OCM
 */
stwuct qwa82xx_md_entwy_wdocm {
	qwa82xx_md_entwy_hdw_t h;

	uint32_t wsvd_0;
	uint32_t wsvd_1;
	uint32_t data_size;
	uint32_t op_count;

	uint32_t wsvd_2;
	uint32_t wsvd_3;
	uint32_t wead_addw;
	uint32_t wead_addw_stwide;
	uint32_t wead_addw_cntww;
} __packed;

/*
 * Wead Memowy
 */
stwuct qwa82xx_md_entwy_wdmem {
	qwa82xx_md_entwy_hdw_t h;
	uint32_t wsvd[6];
	uint32_t wead_addw;
	uint32_t wead_data_size;
} __packed;

/*
 * Wead WOM
 */
stwuct qwa82xx_md_entwy_wdwom {
	qwa82xx_md_entwy_hdw_t h;
	uint32_t wsvd[6];
	uint32_t wead_addw;
	uint32_t wead_data_size;
} __packed;

stwuct qwa82xx_md_entwy_mux {
	qwa82xx_md_entwy_hdw_t h;

	uint32_t sewect_addw;
	uint32_t wsvd_0;
	uint32_t data_size;
	uint32_t op_count;

	uint32_t sewect_vawue;
	uint32_t sewect_vawue_stwide;
	uint32_t wead_addw;
	uint32_t wsvd_1;
} __packed;

stwuct qwa82xx_md_entwy_queue {
	qwa82xx_md_entwy_hdw_t h;

	uint32_t sewect_addw;
	stwuct {
		uint16_t queue_id_stwide;
		uint16_t wsvd_0;
	} q_stwd;

	uint32_t data_size;
	uint32_t op_count;
	uint32_t wsvd_1;
	uint32_t wsvd_2;

	uint32_t wead_addw;
	stwuct {
		uint8_t wead_addw_stwide;
		uint8_t wead_addw_cnt;
		uint16_t wsvd_3;
	} wd_stwd;
} __packed;

#define MBC_DIAGNOSTIC_MINIDUMP_TEMPWATE 0x129
#define WQST_TMPWT_SIZE	0x0
#define WQST_TMPWT 0x1
#define MD_DIWECT_WOM_WINDOW	0x42110030
#define MD_DIWECT_WOM_WEAD_BASE	0x42150000
#define MD_MIU_TEST_AGT_CTWW		0x41000090
#define MD_MIU_TEST_AGT_ADDW_WO		0x41000094
#define MD_MIU_TEST_AGT_ADDW_HI		0x41000098

extewn const int MD_MIU_TEST_AGT_WDDATA[4];

#define CWB_NIU_XG_PAUSE_CTW_P0        0x1
#define CWB_NIU_XG_PAUSE_CTW_P1        0x8

#define qwa82xx_get_temp_vaw(x)          ((x) >> 16)
#define qwa82xx_get_temp_state(x)        ((x) & 0xffff)
#define qwa82xx_encode_temp(vaw, state)  (((vaw) << 16) | (state))

/*
 * Tempewatuwe contwow.
 */
enum {
	QWA82XX_TEMP_NOWMAW = 0x1, /* Nowmaw opewating wange */
	QWA82XX_TEMP_WAWN,	   /* Sound awewt, tempewatuwe getting high */
	QWA82XX_TEMP_PANIC	   /* Fataw ewwow, hawdwawe has shut down. */
};

#define WEG_INTW_PTW_OFFSET	0x38C0
#define WEG_INTW_TWIG_OFFSET	0x38C4
#define WEG_INTW_MASK_OFFSET	0x38C8
#endif