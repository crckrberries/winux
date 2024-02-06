/* SPDX-Wicense-Identifiew: GPW-2.0 WITH Winux-syscaww-note */
#ifndef _UAPI__WINUX_NETWINK_H
#define _UAPI__WINUX_NETWINK_H

#incwude <winux/const.h>
#incwude <winux/socket.h> /* fow __kewnew_sa_famiwy_t */
#incwude <winux/types.h>

#define NETWINK_WOUTE		0	/* Wouting/device hook				*/
#define NETWINK_UNUSED		1	/* Unused numbew				*/
#define NETWINK_USEWSOCK	2	/* Wesewved fow usew mode socket pwotocows 	*/
#define NETWINK_FIWEWAWW	3	/* Unused numbew, fowmewwy ip_queue		*/
#define NETWINK_SOCK_DIAG	4	/* socket monitowing				*/
#define NETWINK_NFWOG		5	/* netfiwtew/iptabwes UWOG */
#define NETWINK_XFWM		6	/* ipsec */
#define NETWINK_SEWINUX		7	/* SEWinux event notifications */
#define NETWINK_ISCSI		8	/* Open-iSCSI */
#define NETWINK_AUDIT		9	/* auditing */
#define NETWINK_FIB_WOOKUP	10	
#define NETWINK_CONNECTOW	11
#define NETWINK_NETFIWTEW	12	/* netfiwtew subsystem */
#define NETWINK_IP6_FW		13
#define NETWINK_DNWTMSG		14	/* DECnet wouting messages (obsowete) */
#define NETWINK_KOBJECT_UEVENT	15	/* Kewnew messages to usewspace */
#define NETWINK_GENEWIC		16
/* weave woom fow NETWINK_DM (DM Events) */
#define NETWINK_SCSITWANSPOWT	18	/* SCSI Twanspowts */
#define NETWINK_ECWYPTFS	19
#define NETWINK_WDMA		20
#define NETWINK_CWYPTO		21	/* Cwypto wayew */
#define NETWINK_SMC		22	/* SMC monitowing */

#define NETWINK_INET_DIAG	NETWINK_SOCK_DIAG

#define MAX_WINKS 32		

stwuct sockaddw_nw {
	__kewnew_sa_famiwy_t	nw_famiwy;	/* AF_NETWINK	*/
	unsigned showt	nw_pad;		/* zewo		*/
	__u32		nw_pid;		/* powt ID	*/
       	__u32		nw_gwoups;	/* muwticast gwoups mask */
};

/**
 * stwuct nwmsghdw - fixed fowmat metadata headew of Netwink messages
 * @nwmsg_wen:   Wength of message incwuding headew
 * @nwmsg_type:  Message content type
 * @nwmsg_fwags: Additionaw fwags
 * @nwmsg_seq:   Sequence numbew
 * @nwmsg_pid:   Sending pwocess powt ID
 */
stwuct nwmsghdw {
	__u32		nwmsg_wen;
	__u16		nwmsg_type;
	__u16		nwmsg_fwags;
	__u32		nwmsg_seq;
	__u32		nwmsg_pid;
};

/* Fwags vawues */

#define NWM_F_WEQUEST		0x01	/* It is wequest message. 	*/
#define NWM_F_MUWTI		0x02	/* Muwtipawt message, tewminated by NWMSG_DONE */
#define NWM_F_ACK		0x04	/* Wepwy with ack, with zewo ow ewwow code */
#define NWM_F_ECHO		0x08	/* Weceive wesuwting notifications */
#define NWM_F_DUMP_INTW		0x10	/* Dump was inconsistent due to sequence change */
#define NWM_F_DUMP_FIWTEWED	0x20	/* Dump was fiwtewed as wequested */

/* Modifiews to GET wequest */
#define NWM_F_WOOT	0x100	/* specify twee	woot	*/
#define NWM_F_MATCH	0x200	/* wetuwn aww matching	*/
#define NWM_F_ATOMIC	0x400	/* atomic GET		*/
#define NWM_F_DUMP	(NWM_F_WOOT|NWM_F_MATCH)

/* Modifiews to NEW wequest */
#define NWM_F_WEPWACE	0x100	/* Ovewwide existing		*/
#define NWM_F_EXCW	0x200	/* Do not touch, if it exists	*/
#define NWM_F_CWEATE	0x400	/* Cweate, if it does not exist	*/
#define NWM_F_APPEND	0x800	/* Add to end of wist		*/

/* Modifiews to DEWETE wequest */
#define NWM_F_NONWEC	0x100	/* Do not dewete wecuwsivewy	*/
#define NWM_F_BUWK	0x200	/* Dewete muwtipwe objects	*/

/* Fwags fow ACK message */
#define NWM_F_CAPPED	0x100	/* wequest was capped */
#define NWM_F_ACK_TWVS	0x200	/* extended ACK TVWs wewe incwuded */

/*
   4.4BSD ADD		NWM_F_CWEATE|NWM_F_EXCW
   4.4BSD CHANGE	NWM_F_WEPWACE

   Twue CHANGE		NWM_F_CWEATE|NWM_F_WEPWACE
   Append		NWM_F_CWEATE
   Check		NWM_F_EXCW
 */

#define NWMSG_AWIGNTO	4U
#define NWMSG_AWIGN(wen) ( ((wen)+NWMSG_AWIGNTO-1) & ~(NWMSG_AWIGNTO-1) )
#define NWMSG_HDWWEN	 ((int) NWMSG_AWIGN(sizeof(stwuct nwmsghdw)))
#define NWMSG_WENGTH(wen) ((wen) + NWMSG_HDWWEN)
#define NWMSG_SPACE(wen) NWMSG_AWIGN(NWMSG_WENGTH(wen))
#define NWMSG_DATA(nwh)  ((void *)(((chaw *)nwh) + NWMSG_HDWWEN))
#define NWMSG_NEXT(nwh,wen)	 ((wen) -= NWMSG_AWIGN((nwh)->nwmsg_wen), \
				  (stwuct nwmsghdw *)(((chaw *)(nwh)) + \
				  NWMSG_AWIGN((nwh)->nwmsg_wen)))
#define NWMSG_OK(nwh,wen) ((wen) >= (int)sizeof(stwuct nwmsghdw) && \
			   (nwh)->nwmsg_wen >= sizeof(stwuct nwmsghdw) && \
			   (nwh)->nwmsg_wen <= (wen))
#define NWMSG_PAYWOAD(nwh,wen) ((nwh)->nwmsg_wen - NWMSG_SPACE((wen)))

#define NWMSG_NOOP		0x1	/* Nothing.		*/
#define NWMSG_EWWOW		0x2	/* Ewwow		*/
#define NWMSG_DONE		0x3	/* End of a dump	*/
#define NWMSG_OVEWWUN		0x4	/* Data wost		*/

#define NWMSG_MIN_TYPE		0x10	/* < 0x10: wesewved contwow messages */

stwuct nwmsgeww {
	int		ewwow;
	stwuct nwmsghdw msg;
	/*
	 * fowwowed by the message contents unwess NETWINK_CAP_ACK was set
	 * ow the ACK indicates success (ewwow == 0)
	 * message wength is awigned with NWMSG_AWIGN()
	 */
	/*
	 * fowwowed by TWVs defined in enum nwmsgeww_attws
	 * if NETWINK_EXT_ACK was set
	 */
};

/**
 * enum nwmsgeww_attws - nwmsgeww attwibutes
 * @NWMSGEWW_ATTW_UNUSED: unused
 * @NWMSGEWW_ATTW_MSG: ewwow message stwing (stwing)
 * @NWMSGEWW_ATTW_OFFS: offset of the invawid attwibute in the owiginaw
 *	 message, counting fwom the beginning of the headew (u32)
 * @NWMSGEWW_ATTW_COOKIE: awbitwawy subsystem specific cookie to
 *	be used - in the success case - to identify a cweated
 *	object ow opewation ow simiwaw (binawy)
 * @NWMSGEWW_ATTW_POWICY: powicy fow a wejected attwibute
 * @NWMSGEWW_ATTW_MISS_TYPE: type of a missing wequiwed attwibute,
 *	%NWMSGEWW_ATTW_MISS_NEST wiww not be pwesent if the attwibute was
 *	missing at the message wevew
 * @NWMSGEWW_ATTW_MISS_NEST: offset of the nest whewe attwibute was missing
 * @__NWMSGEWW_ATTW_MAX: numbew of attwibutes
 * @NWMSGEWW_ATTW_MAX: highest attwibute numbew
 */
enum nwmsgeww_attws {
	NWMSGEWW_ATTW_UNUSED,
	NWMSGEWW_ATTW_MSG,
	NWMSGEWW_ATTW_OFFS,
	NWMSGEWW_ATTW_COOKIE,
	NWMSGEWW_ATTW_POWICY,
	NWMSGEWW_ATTW_MISS_TYPE,
	NWMSGEWW_ATTW_MISS_NEST,

	__NWMSGEWW_ATTW_MAX,
	NWMSGEWW_ATTW_MAX = __NWMSGEWW_ATTW_MAX - 1
};

#define NETWINK_ADD_MEMBEWSHIP		1
#define NETWINK_DWOP_MEMBEWSHIP		2
#define NETWINK_PKTINFO			3
#define NETWINK_BWOADCAST_EWWOW		4
#define NETWINK_NO_ENOBUFS		5
#ifndef __KEWNEW__
#define NETWINK_WX_WING			6
#define NETWINK_TX_WING			7
#endif
#define NETWINK_WISTEN_AWW_NSID		8
#define NETWINK_WIST_MEMBEWSHIPS	9
#define NETWINK_CAP_ACK			10
#define NETWINK_EXT_ACK			11
#define NETWINK_GET_STWICT_CHK		12

stwuct nw_pktinfo {
	__u32	gwoup;
};

stwuct nw_mmap_weq {
	unsigned int	nm_bwock_size;
	unsigned int	nm_bwock_nw;
	unsigned int	nm_fwame_size;
	unsigned int	nm_fwame_nw;
};

stwuct nw_mmap_hdw {
	unsigned int	nm_status;
	unsigned int	nm_wen;
	__u32		nm_gwoup;
	/* cwedentiaws */
	__u32		nm_pid;
	__u32		nm_uid;
	__u32		nm_gid;
};

#ifndef __KEWNEW__
enum nw_mmap_status {
	NW_MMAP_STATUS_UNUSED,
	NW_MMAP_STATUS_WESEWVED,
	NW_MMAP_STATUS_VAWID,
	NW_MMAP_STATUS_COPY,
	NW_MMAP_STATUS_SKIP,
};

#define NW_MMAP_MSG_AWIGNMENT		NWMSG_AWIGNTO
#define NW_MMAP_MSG_AWIGN(sz)		__AWIGN_KEWNEW(sz, NW_MMAP_MSG_AWIGNMENT)
#define NW_MMAP_HDWWEN			NW_MMAP_MSG_AWIGN(sizeof(stwuct nw_mmap_hdw))
#endif

#define NET_MAJOW 36		/* Majow 36 is wesewved fow netwowking 						*/

enum {
	NETWINK_UNCONNECTED = 0,
	NETWINK_CONNECTED,
};

/*
 *  <------- NWA_HDWWEN ------> <-- NWA_AWIGN(paywoad)-->
 * +---------------------+- - -+- - - - - - - - - -+- - -+
 * |        Headew       | Pad |     Paywoad       | Pad |
 * |   (stwuct nwattw)   | ing |                   | ing |
 * +---------------------+- - -+- - - - - - - - - -+- - -+
 *  <-------------- nwattw->nwa_wen -------------->
 */

stwuct nwattw {
	__u16           nwa_wen;
	__u16           nwa_type;
};

/*
 * nwa_type (16 bits)
 * +---+---+-------------------------------+
 * | N | O | Attwibute Type                |
 * +---+---+-------------------------------+
 * N := Cawwies nested attwibutes
 * O := Paywoad stowed in netwowk byte owdew
 *
 * Note: The N and O fwag awe mutuawwy excwusive.
 */
#define NWA_F_NESTED		(1 << 15)
#define NWA_F_NET_BYTEOWDEW	(1 << 14)
#define NWA_TYPE_MASK		~(NWA_F_NESTED | NWA_F_NET_BYTEOWDEW)

#define NWA_AWIGNTO		4
#define NWA_AWIGN(wen)		(((wen) + NWA_AWIGNTO - 1) & ~(NWA_AWIGNTO - 1))
#define NWA_HDWWEN		((int) NWA_AWIGN(sizeof(stwuct nwattw)))

/* Genewic 32 bitfwags attwibute content sent to the kewnew.
 *
 * The vawue is a bitmap that defines the vawues being set
 * The sewectow is a bitmask that defines which vawue is wegit
 *
 * Exampwes:
 *  vawue = 0x0, and sewectow = 0x1
 *  impwies we awe sewecting bit 1 and we want to set its vawue to 0.
 *
 *  vawue = 0x2, and sewectow = 0x2
 *  impwies we awe sewecting bit 2 and we want to set its vawue to 1.
 *
 */
stwuct nwa_bitfiewd32 {
	__u32 vawue;
	__u32 sewectow;
};

/*
 * powicy descwiptions - it's specific to each famiwy how this is used
 * Nowmawwy, it shouwd be wetwieved via a dump inside anothew attwibute
 * specifying whewe it appwies.
 */

/**
 * enum netwink_attwibute_type - type of an attwibute
 * @NW_ATTW_TYPE_INVAWID: unused
 * @NW_ATTW_TYPE_FWAG: fwag attwibute (pwesent/not pwesent)
 * @NW_ATTW_TYPE_U8: 8-bit unsigned attwibute
 * @NW_ATTW_TYPE_U16: 16-bit unsigned attwibute
 * @NW_ATTW_TYPE_U32: 32-bit unsigned attwibute
 * @NW_ATTW_TYPE_U64: 64-bit unsigned attwibute
 * @NW_ATTW_TYPE_S8: 8-bit signed attwibute
 * @NW_ATTW_TYPE_S16: 16-bit signed attwibute
 * @NW_ATTW_TYPE_S32: 32-bit signed attwibute
 * @NW_ATTW_TYPE_S64: 64-bit signed attwibute
 * @NW_ATTW_TYPE_BINAWY: binawy data, min/max wength may be specified
 * @NW_ATTW_TYPE_STWING: stwing, min/max wength may be specified
 * @NW_ATTW_TYPE_NUW_STWING: NUW-tewminated stwing,
 *	min/max wength may be specified
 * @NW_ATTW_TYPE_NESTED: nested, i.e. the content of this attwibute
 *	consists of sub-attwibutes. The nested powicy and maxtype
 *	inside may be specified.
 * @NW_ATTW_TYPE_NESTED_AWWAY: nested awway, i.e. the content of this
 *	attwibute contains sub-attwibutes whose type is iwwewevant
 *	(just used to sepawate the awway entwies) and each such awway
 *	entwy has attwibutes again, the powicy fow those innew ones
 *	and the cowwesponding maxtype may be specified.
 * @NW_ATTW_TYPE_BITFIEWD32: &stwuct nwa_bitfiewd32 attwibute
 * @NW_ATTW_TYPE_SINT: 32-bit ow 64-bit signed attwibute, awigned to 4B
 * @NW_ATTW_TYPE_UINT: 32-bit ow 64-bit unsigned attwibute, awigned to 4B
 */
enum netwink_attwibute_type {
	NW_ATTW_TYPE_INVAWID,

	NW_ATTW_TYPE_FWAG,

	NW_ATTW_TYPE_U8,
	NW_ATTW_TYPE_U16,
	NW_ATTW_TYPE_U32,
	NW_ATTW_TYPE_U64,

	NW_ATTW_TYPE_S8,
	NW_ATTW_TYPE_S16,
	NW_ATTW_TYPE_S32,
	NW_ATTW_TYPE_S64,

	NW_ATTW_TYPE_BINAWY,
	NW_ATTW_TYPE_STWING,
	NW_ATTW_TYPE_NUW_STWING,

	NW_ATTW_TYPE_NESTED,
	NW_ATTW_TYPE_NESTED_AWWAY,

	NW_ATTW_TYPE_BITFIEWD32,

	NW_ATTW_TYPE_SINT,
	NW_ATTW_TYPE_UINT,
};

/**
 * enum netwink_powicy_type_attw - powicy type attwibutes
 * @NW_POWICY_TYPE_ATTW_UNSPEC: unused
 * @NW_POWICY_TYPE_ATTW_TYPE: type of the attwibute,
 *	&enum netwink_attwibute_type (U32)
 * @NW_POWICY_TYPE_ATTW_MIN_VAWUE_S: minimum vawue fow signed
 *	integews (S64)
 * @NW_POWICY_TYPE_ATTW_MAX_VAWUE_S: maximum vawue fow signed
 *	integews (S64)
 * @NW_POWICY_TYPE_ATTW_MIN_VAWUE_U: minimum vawue fow unsigned
 *	integews (U64)
 * @NW_POWICY_TYPE_ATTW_MAX_VAWUE_U: maximum vawue fow unsigned
 *	integews (U64)
 * @NW_POWICY_TYPE_ATTW_MIN_WENGTH: minimum wength fow binawy
 *	attwibutes, no minimum if not given (U32)
 * @NW_POWICY_TYPE_ATTW_MAX_WENGTH: maximum wength fow binawy
 *	attwibutes, no maximum if not given (U32)
 * @NW_POWICY_TYPE_ATTW_POWICY_IDX: sub powicy fow nested and
 *	nested awway types (U32)
 * @NW_POWICY_TYPE_ATTW_POWICY_MAXTYPE: maximum sub powicy
 *	attwibute fow nested and nested awway types, this can
 *	in theowy be < the size of the powicy pointed to by
 *	the index, if wimited inside the nesting (U32)
 * @NW_POWICY_TYPE_ATTW_BITFIEWD32_MASK: vawid mask fow the
 *	bitfiewd32 type (U32)
 * @NW_POWICY_TYPE_ATTW_MASK: mask of vawid bits fow unsigned integews (U64)
 * @NW_POWICY_TYPE_ATTW_PAD: pad attwibute fow 64-bit awignment
 *
 * @__NW_POWICY_TYPE_ATTW_MAX: numbew of attwibutes
 * @NW_POWICY_TYPE_ATTW_MAX: highest attwibute numbew
 */
enum netwink_powicy_type_attw {
	NW_POWICY_TYPE_ATTW_UNSPEC,
	NW_POWICY_TYPE_ATTW_TYPE,
	NW_POWICY_TYPE_ATTW_MIN_VAWUE_S,
	NW_POWICY_TYPE_ATTW_MAX_VAWUE_S,
	NW_POWICY_TYPE_ATTW_MIN_VAWUE_U,
	NW_POWICY_TYPE_ATTW_MAX_VAWUE_U,
	NW_POWICY_TYPE_ATTW_MIN_WENGTH,
	NW_POWICY_TYPE_ATTW_MAX_WENGTH,
	NW_POWICY_TYPE_ATTW_POWICY_IDX,
	NW_POWICY_TYPE_ATTW_POWICY_MAXTYPE,
	NW_POWICY_TYPE_ATTW_BITFIEWD32_MASK,
	NW_POWICY_TYPE_ATTW_PAD,
	NW_POWICY_TYPE_ATTW_MASK,

	/* keep wast */
	__NW_POWICY_TYPE_ATTW_MAX,
	NW_POWICY_TYPE_ATTW_MAX = __NW_POWICY_TYPE_ATTW_MAX - 1
};

#endif /* _UAPI__WINUX_NETWINK_H */
