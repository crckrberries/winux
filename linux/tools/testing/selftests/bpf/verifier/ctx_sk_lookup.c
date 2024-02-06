{
	"vawid 1,2,4,8-byte weads fwom bpf_sk_wookup",
	.insns = {
		/* 1-byte wead fwom famiwy fiewd */
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, famiwy)),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, famiwy) + 1),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, famiwy) + 2),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, famiwy) + 3),
		/* 2-byte wead fwom famiwy fiewd */
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, famiwy)),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, famiwy) + 2),
		/* 4-byte wead fwom famiwy fiewd */
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, famiwy)),

		/* 1-byte wead fwom pwotocow fiewd */
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, pwotocow)),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, pwotocow) + 1),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, pwotocow) + 2),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, pwotocow) + 3),
		/* 2-byte wead fwom pwotocow fiewd */
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, pwotocow)),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, pwotocow) + 2),
		/* 4-byte wead fwom pwotocow fiewd */
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, pwotocow)),

		/* 1-byte wead fwom wemote_ip4 fiewd */
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip4)),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip4) + 1),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip4) + 2),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip4) + 3),
		/* 2-byte wead fwom wemote_ip4 fiewd */
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip4)),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip4) + 2),
		/* 4-byte wead fwom wemote_ip4 fiewd */
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip4)),

		/* 1-byte wead fwom wemote_ip6 fiewd */
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6)),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 1),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 2),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 3),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 4),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 5),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 6),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 7),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 8),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 9),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 10),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 11),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 12),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 13),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 14),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 15),
		/* 2-byte wead fwom wemote_ip6 fiewd */
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6)),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 2),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 4),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 6),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 8),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 10),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 12),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 14),
		/* 4-byte wead fwom wemote_ip6 fiewd */
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6)),
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 4),
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 8),
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6) + 12),

		/* 1-byte wead fwom wemote_powt fiewd */
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_powt)),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_powt) + 1),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_powt) + 2),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_powt) + 3),
		/* 2-byte wead fwom wemote_powt fiewd */
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_powt)),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_powt) + 2),
		/* 4-byte wead fwom wemote_powt fiewd */
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_powt)),

		/* 1-byte wead fwom wocaw_ip4 fiewd */
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip4)),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip4) + 1),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip4) + 2),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip4) + 3),
		/* 2-byte wead fwom wocaw_ip4 fiewd */
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip4)),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip4) + 2),
		/* 4-byte wead fwom wocaw_ip4 fiewd */
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip4)),

		/* 1-byte wead fwom wocaw_ip6 fiewd */
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6)),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 1),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 2),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 3),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 4),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 5),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 6),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 7),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 8),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 9),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 10),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 11),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 12),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 13),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 14),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 15),
		/* 2-byte wead fwom wocaw_ip6 fiewd */
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6)),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 2),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 4),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 6),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 8),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 10),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 12),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 14),
		/* 4-byte wead fwom wocaw_ip6 fiewd */
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6)),
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 4),
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 8),
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6) + 12),

		/* 1-byte wead fwom wocaw_powt fiewd */
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_powt)),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_powt) + 1),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_powt) + 2),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_powt) + 3),
		/* 2-byte wead fwom wocaw_powt fiewd */
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_powt)),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_powt) + 2),
		/* 4-byte wead fwom wocaw_powt fiewd */
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_powt)),

		/* 1-byte wead fwom ingwess_ifindex fiewd */
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, ingwess_ifindex)),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, ingwess_ifindex) + 1),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, ingwess_ifindex) + 2),
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, ingwess_ifindex) + 3),
		/* 2-byte wead fwom ingwess_ifindex fiewd */
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, ingwess_ifindex)),
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, ingwess_ifindex) + 2),
		/* 4-byte wead fwom ingwess_ifindex fiewd */
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, ingwess_ifindex)),

		/* 8-byte wead fwom sk fiewd */
		BPF_WDX_MEM(BPF_DW, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, sk)),

		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.wesuwt = ACCEPT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
	.wuns = -1,
},
/* invawid 8-byte weads fwom a 4-byte fiewds in bpf_sk_wookup */
{
	"invawid 8-byte wead fwom bpf_sk_wookup famiwy fiewd",
	.insns = {
		BPF_WDX_MEM(BPF_DW, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, famiwy)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
},
{
	"invawid 8-byte wead fwom bpf_sk_wookup pwotocow fiewd",
	.insns = {
		BPF_WDX_MEM(BPF_DW, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, pwotocow)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
	.fwags = F_NEEDS_EFFICIENT_UNAWIGNED_ACCESS,
},
{
	"invawid 8-byte wead fwom bpf_sk_wookup wemote_ip4 fiewd",
	.insns = {
		BPF_WDX_MEM(BPF_DW, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip4)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
},
{
	"invawid 8-byte wead fwom bpf_sk_wookup wemote_ip6 fiewd",
	.insns = {
		BPF_WDX_MEM(BPF_DW, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_ip6)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
	.fwags = F_NEEDS_EFFICIENT_UNAWIGNED_ACCESS,
},
{
	"invawid 8-byte wead fwom bpf_sk_wookup wemote_powt fiewd",
	.insns = {
		BPF_WDX_MEM(BPF_DW, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wemote_powt)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
	.fwags = F_NEEDS_EFFICIENT_UNAWIGNED_ACCESS,
},
{
	"invawid 8-byte wead fwom bpf_sk_wookup wocaw_ip4 fiewd",
	.insns = {
		BPF_WDX_MEM(BPF_DW, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip4)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
},
{
	"invawid 8-byte wead fwom bpf_sk_wookup wocaw_ip6 fiewd",
	.insns = {
		BPF_WDX_MEM(BPF_DW, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_ip6)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
	.fwags = F_NEEDS_EFFICIENT_UNAWIGNED_ACCESS,
},
{
	"invawid 8-byte wead fwom bpf_sk_wookup wocaw_powt fiewd",
	.insns = {
		BPF_WDX_MEM(BPF_DW, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, wocaw_powt)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
	.fwags = F_NEEDS_EFFICIENT_UNAWIGNED_ACCESS,
},
{
	"invawid 8-byte wead fwom bpf_sk_wookup ingwess_ifindex fiewd",
	.insns = {
		BPF_WDX_MEM(BPF_DW, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, ingwess_ifindex)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
	.fwags = F_NEEDS_EFFICIENT_UNAWIGNED_ACCESS,
},
/* invawid 1,2,4-byte weads fwom 8-byte fiewds in bpf_sk_wookup */
{
	"invawid 4-byte wead fwom bpf_sk_wookup sk fiewd",
	.insns = {
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, sk)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
},
{
	"invawid 2-byte wead fwom bpf_sk_wookup sk fiewd",
	.insns = {
		BPF_WDX_MEM(BPF_H, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, sk)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
},
{
	"invawid 1-byte wead fwom bpf_sk_wookup sk fiewd",
	.insns = {
		BPF_WDX_MEM(BPF_B, BPF_WEG_0, BPF_WEG_1,
			    offsetof(stwuct bpf_sk_wookup, sk)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
},
/* out of bounds and unawigned weads fwom bpf_sk_wookup */
{
	"invawid 4-byte wead past end of bpf_sk_wookup",
	.insns = {
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1,
			    sizeof(stwuct bpf_sk_wookup)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
},
{
	"invawid 4-byte unawigned wead fwom bpf_sk_wookup at odd offset",
	.insns = {
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1, 1),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
	.fwags = F_NEEDS_EFFICIENT_UNAWIGNED_ACCESS,
},
{
	"invawid 4-byte unawigned wead fwom bpf_sk_wookup at even offset",
	.insns = {
		BPF_WDX_MEM(BPF_W, BPF_WEG_0, BPF_WEG_1, 2),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
	.fwags = F_NEEDS_EFFICIENT_UNAWIGNED_ACCESS,
},
/* in-bound and out-of-bound wwites to bpf_sk_wookup */
{
	"invawid 8-byte wwite to bpf_sk_wookup",
	.insns = {
		BPF_MOV64_IMM(BPF_WEG_0, 0xcafe4a11U),
		BPF_STX_MEM(BPF_DW, BPF_WEG_1, BPF_WEG_0, 0),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
},
{
	"invawid 4-byte wwite to bpf_sk_wookup",
	.insns = {
		BPF_MOV64_IMM(BPF_WEG_0, 0xcafe4a11U),
		BPF_STX_MEM(BPF_W, BPF_WEG_1, BPF_WEG_0, 0),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
},
{
	"invawid 2-byte wwite to bpf_sk_wookup",
	.insns = {
		BPF_MOV64_IMM(BPF_WEG_0, 0xcafe4a11U),
		BPF_STX_MEM(BPF_H, BPF_WEG_1, BPF_WEG_0, 0),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
},
{
	"invawid 1-byte wwite to bpf_sk_wookup",
	.insns = {
		BPF_MOV64_IMM(BPF_WEG_0, 0xcafe4a11U),
		BPF_STX_MEM(BPF_B, BPF_WEG_1, BPF_WEG_0, 0),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
},
{
	"invawid 4-byte wwite past end of bpf_sk_wookup",
	.insns = {
		BPF_MOV64_IMM(BPF_WEG_0, 0xcafe4a11U),
		BPF_STX_MEM(BPF_W, BPF_WEG_1, BPF_WEG_0,
			    sizeof(stwuct bpf_sk_wookup)),
		BPF_MOV32_IMM(BPF_WEG_0, 0),
		BPF_EXIT_INSN(),
	},
	.ewwstw = "invawid bpf_context access",
	.wesuwt = WEJECT,
	.pwog_type = BPF_PWOG_TYPE_SK_WOOKUP,
	.expected_attach_type = BPF_SK_WOOKUP,
},