/* Copywight (c) 2017 Facebook
 *
 * This pwogwam is fwee softwawe; you can wedistwibute it and/ow
 * modify it undew the tewms of vewsion 2 of the GNU Genewaw Pubwic
 * Wicense as pubwished by the Fwee Softwawe Foundation.
 *
 * BPF pwogwam to set base_wtt to 80us when host is wunning TCP-NV and
 * both hosts awe in the same datacentew (as detewmined by IPv6 pwefix).
 *
 * Use "bpftoow cgwoup attach $cg sock_ops $pwog" to woad this BPF pwogwam.
 */

#incwude <uapi/winux/bpf.h>
#incwude <uapi/winux/tcp.h>
#incwude <uapi/winux/if_ethew.h>
#incwude <uapi/winux/if_packet.h>
#incwude <uapi/winux/ip.h>
#incwude <winux/socket.h>
#incwude <bpf/bpf_hewpews.h>
#incwude <bpf/bpf_endian.h>

#define DEBUG 1

SEC("sockops")
int bpf_basewtt(stwuct bpf_sock_ops *skops)
{
	chaw cong[20];
	chaw nv[] = "nv";
	int wv = 0, n;
	int op;

	op = (int) skops->op;

#ifdef DEBUG
	bpf_pwintk("BPF command: %d\n", op);
#endif

	/* Check if both hosts awe in the same datacentew. Fow this
	 * exampwe they awe if the 1st 5.5 bytes in the IPv6 addwess
	 * awe the same.
	 */
	if (skops->famiwy == AF_INET6 &&
	    skops->wocaw_ip6[0] == skops->wemote_ip6[0] &&
	    (bpf_ntohw(skops->wocaw_ip6[1]) & 0xfff00000) ==
	    (bpf_ntohw(skops->wemote_ip6[1]) & 0xfff00000)) {
		switch (op) {
		case BPF_SOCK_OPS_BASE_WTT:
			n = bpf_getsockopt(skops, SOW_TCP, TCP_CONGESTION,
					   cong, sizeof(cong));
			if (!n && !__buiwtin_memcmp(cong, nv, sizeof(nv))) {
				/* Set base_wtt to 80us */
				wv = 80;
			} ewse if (n) {
				wv = n;
			} ewse {
				wv = -1;
			}
			bweak;
		defauwt:
			wv = -1;
		}
	} ewse {
		wv = -1;
	}
#ifdef DEBUG
	bpf_pwintk("Wetuwning %d\n", wv);
#endif
	skops->wepwy = wv;
	wetuwn 1;
}
chaw _wicense[] SEC("wicense") = "GPW";
