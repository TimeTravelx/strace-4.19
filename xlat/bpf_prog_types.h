/* Generated by ./xlat/gen.sh from ./xlat/bpf_prog_types.in; do not edit. */
#if !(defined(BPF_PROG_TYPE_UNSPEC) || (defined(HAVE_DECL_BPF_PROG_TYPE_UNSPEC) && HAVE_DECL_BPF_PROG_TYPE_UNSPEC))
# define BPF_PROG_TYPE_UNSPEC 0
#endif
#if !(defined(BPF_PROG_TYPE_SOCKET_FILTER) || (defined(HAVE_DECL_BPF_PROG_TYPE_SOCKET_FILTER) && HAVE_DECL_BPF_PROG_TYPE_SOCKET_FILTER))
# define BPF_PROG_TYPE_SOCKET_FILTER 1
#endif
#if !(defined(BPF_PROG_TYPE_KPROBE) || (defined(HAVE_DECL_BPF_PROG_TYPE_KPROBE) && HAVE_DECL_BPF_PROG_TYPE_KPROBE))
# define BPF_PROG_TYPE_KPROBE 2
#endif
#if !(defined(BPF_PROG_TYPE_SCHED_CLS) || (defined(HAVE_DECL_BPF_PROG_TYPE_SCHED_CLS) && HAVE_DECL_BPF_PROG_TYPE_SCHED_CLS))
# define BPF_PROG_TYPE_SCHED_CLS 3
#endif
#if !(defined(BPF_PROG_TYPE_SCHED_ACT) || (defined(HAVE_DECL_BPF_PROG_TYPE_SCHED_ACT) && HAVE_DECL_BPF_PROG_TYPE_SCHED_ACT))
# define BPF_PROG_TYPE_SCHED_ACT 4
#endif
#if !(defined(BPF_PROG_TYPE_TRACEPOINT) || (defined(HAVE_DECL_BPF_PROG_TYPE_TRACEPOINT) && HAVE_DECL_BPF_PROG_TYPE_TRACEPOINT))
# define BPF_PROG_TYPE_TRACEPOINT 5
#endif
#if !(defined(BPF_PROG_TYPE_XDP) || (defined(HAVE_DECL_BPF_PROG_TYPE_XDP) && HAVE_DECL_BPF_PROG_TYPE_XDP))
# define BPF_PROG_TYPE_XDP 6
#endif
#if !(defined(BPF_PROG_TYPE_PERF_EVENT) || (defined(HAVE_DECL_BPF_PROG_TYPE_PERF_EVENT) && HAVE_DECL_BPF_PROG_TYPE_PERF_EVENT))
# define BPF_PROG_TYPE_PERF_EVENT 7
#endif
#if !(defined(BPF_PROG_TYPE_CGROUP_SKB) || (defined(HAVE_DECL_BPF_PROG_TYPE_CGROUP_SKB) && HAVE_DECL_BPF_PROG_TYPE_CGROUP_SKB))
# define BPF_PROG_TYPE_CGROUP_SKB 8
#endif
#if !(defined(BPF_PROG_TYPE_CGROUP_SOCK) || (defined(HAVE_DECL_BPF_PROG_TYPE_CGROUP_SOCK) && HAVE_DECL_BPF_PROG_TYPE_CGROUP_SOCK))
# define BPF_PROG_TYPE_CGROUP_SOCK 9
#endif
#if !(defined(BPF_PROG_TYPE_LWT_IN) || (defined(HAVE_DECL_BPF_PROG_TYPE_LWT_IN) && HAVE_DECL_BPF_PROG_TYPE_LWT_IN))
# define BPF_PROG_TYPE_LWT_IN 10
#endif
#if !(defined(BPF_PROG_TYPE_LWT_OUT) || (defined(HAVE_DECL_BPF_PROG_TYPE_LWT_OUT) && HAVE_DECL_BPF_PROG_TYPE_LWT_OUT))
# define BPF_PROG_TYPE_LWT_OUT 11
#endif
#if !(defined(BPF_PROG_TYPE_LWT_XMIT) || (defined(HAVE_DECL_BPF_PROG_TYPE_LWT_XMIT) && HAVE_DECL_BPF_PROG_TYPE_LWT_XMIT))
# define BPF_PROG_TYPE_LWT_XMIT 12
#endif
#if !(defined(BPF_PROG_TYPE_SOCK_OPS) || (defined(HAVE_DECL_BPF_PROG_TYPE_SOCK_OPS) && HAVE_DECL_BPF_PROG_TYPE_SOCK_OPS))
# define BPF_PROG_TYPE_SOCK_OPS 13
#endif

#ifdef IN_MPERS

# error static const struct xlat bpf_prog_types in mpers mode

#else

static
const struct xlat bpf_prog_types[] = {
 XLAT(BPF_PROG_TYPE_UNSPEC),
 XLAT(BPF_PROG_TYPE_SOCKET_FILTER),
 XLAT(BPF_PROG_TYPE_KPROBE),
 XLAT(BPF_PROG_TYPE_SCHED_CLS),
 XLAT(BPF_PROG_TYPE_SCHED_ACT),
 XLAT(BPF_PROG_TYPE_TRACEPOINT),
 XLAT(BPF_PROG_TYPE_XDP),
 XLAT(BPF_PROG_TYPE_PERF_EVENT),
 XLAT(BPF_PROG_TYPE_CGROUP_SKB),
 XLAT(BPF_PROG_TYPE_CGROUP_SOCK),
 XLAT(BPF_PROG_TYPE_LWT_IN),
 XLAT(BPF_PROG_TYPE_LWT_OUT),
 XLAT(BPF_PROG_TYPE_LWT_XMIT),
 XLAT(BPF_PROG_TYPE_SOCK_OPS),
 XLAT_END
};

#endif /* !IN_MPERS */
