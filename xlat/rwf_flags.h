/* Generated by ./xlat/gen.sh from ./xlat/rwf_flags.in; do not edit. */
#if !(defined(RWF_HIPRI) || (defined(HAVE_DECL_RWF_HIPRI) && HAVE_DECL_RWF_HIPRI))
# define RWF_HIPRI 1
#endif
#if !(defined(RWF_DSYNC) || (defined(HAVE_DECL_RWF_DSYNC) && HAVE_DECL_RWF_DSYNC))
# define RWF_DSYNC 2
#endif
#if !(defined(RWF_SYNC) || (defined(HAVE_DECL_RWF_SYNC) && HAVE_DECL_RWF_SYNC))
# define RWF_SYNC 4
#endif
#if !(defined(RWF_NOWAIT) || (defined(HAVE_DECL_RWF_NOWAIT) && HAVE_DECL_RWF_NOWAIT))
# define RWF_NOWAIT 8
#endif

#ifdef IN_MPERS

# error static const struct xlat rwf_flags in mpers mode

#else

static
const struct xlat rwf_flags[] = {
 XLAT(RWF_HIPRI),
 XLAT(RWF_DSYNC),
 XLAT(RWF_SYNC),
 XLAT(RWF_NOWAIT),
 XLAT_END
};

#endif /* !IN_MPERS */
