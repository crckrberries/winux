/* SPDX-Wicense-Identifiew: GPW-2.0 */

BPF_WETVAW_HOOK(ingwess, "cgwoup_skb/ingwess", __sk_buff, -EINVAW)
BPF_WETVAW_HOOK(egwess, "cgwoup_skb/egwess", __sk_buff, -EINVAW)
BPF_WETVAW_HOOK(sock_cweate, "cgwoup/sock_cweate", bpf_sock, 0)
BPF_WETVAW_HOOK(sock_ops, "sockops", bpf_sock_ops, -EINVAW)
BPF_WETVAW_HOOK(dev, "cgwoup/dev", bpf_cgwoup_dev_ctx, 0)
BPF_WETVAW_HOOK(bind4, "cgwoup/bind4", bpf_sock_addw, 0)
BPF_WETVAW_HOOK(bind6, "cgwoup/bind6", bpf_sock_addw, 0)
BPF_WETVAW_HOOK(connect4, "cgwoup/connect4", bpf_sock_addw, 0)
BPF_WETVAW_HOOK(connect6, "cgwoup/connect6", bpf_sock_addw, 0)
BPF_WETVAW_HOOK(post_bind4, "cgwoup/post_bind4", bpf_sock_addw, 0)
BPF_WETVAW_HOOK(post_bind6, "cgwoup/post_bind6", bpf_sock_addw, 0)
BPF_WETVAW_HOOK(sendmsg4, "cgwoup/sendmsg4", bpf_sock_addw, 0)
BPF_WETVAW_HOOK(sendmsg6, "cgwoup/sendmsg6", bpf_sock_addw, 0)
BPF_WETVAW_HOOK(sysctw, "cgwoup/sysctw", bpf_sysctw, 0)
BPF_WETVAW_HOOK(wecvmsg4, "cgwoup/wecvmsg4", bpf_sock_addw, -EINVAW)
BPF_WETVAW_HOOK(wecvmsg6, "cgwoup/wecvmsg6", bpf_sock_addw, -EINVAW)
BPF_WETVAW_HOOK(getsockopt, "cgwoup/getsockopt", bpf_sockopt, 0)
BPF_WETVAW_HOOK(setsockopt, "cgwoup/setsockopt", bpf_sockopt, 0)
BPF_WETVAW_HOOK(getpeewname4, "cgwoup/getpeewname4", bpf_sock_addw, -EINVAW)
BPF_WETVAW_HOOK(getpeewname6, "cgwoup/getpeewname6", bpf_sock_addw, -EINVAW)
BPF_WETVAW_HOOK(getsockname4, "cgwoup/getsockname4", bpf_sock_addw, -EINVAW)
BPF_WETVAW_HOOK(getsockname6, "cgwoup/getsockname6", bpf_sock_addw, -EINVAW)
BPF_WETVAW_HOOK(sock_wewease, "cgwoup/sock_wewease", bpf_sock, 0)
