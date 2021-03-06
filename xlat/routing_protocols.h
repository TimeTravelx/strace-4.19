/* Generated by ./xlat/gen.sh from ./xlat/routing_protocols.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat routing_protocols in mpers mode

#else

static
const struct xlat routing_protocols[] = {
#if defined(RTPROT_UNSPEC) || (defined(HAVE_DECL_RTPROT_UNSPEC) && HAVE_DECL_RTPROT_UNSPEC)
  XLAT(RTPROT_UNSPEC),
#endif
#if defined(RTPROT_REDIRECT) || (defined(HAVE_DECL_RTPROT_REDIRECT) && HAVE_DECL_RTPROT_REDIRECT)
  XLAT(RTPROT_REDIRECT),
#endif
#if defined(RTPROT_KERNEL) || (defined(HAVE_DECL_RTPROT_KERNEL) && HAVE_DECL_RTPROT_KERNEL)
  XLAT(RTPROT_KERNEL),
#endif
#if defined(RTPROT_BOOT) || (defined(HAVE_DECL_RTPROT_BOOT) && HAVE_DECL_RTPROT_BOOT)
  XLAT(RTPROT_BOOT),
#endif
#if defined(RTPROT_STATIC) || (defined(HAVE_DECL_RTPROT_STATIC) && HAVE_DECL_RTPROT_STATIC)
  XLAT(RTPROT_STATIC),
#endif
#if defined(RTPROT_GATED) || (defined(HAVE_DECL_RTPROT_GATED) && HAVE_DECL_RTPROT_GATED)
  XLAT(RTPROT_GATED),
#endif
#if defined(RTPROT_RA) || (defined(HAVE_DECL_RTPROT_RA) && HAVE_DECL_RTPROT_RA)
  XLAT(RTPROT_RA),
#endif
#if defined(RTPROT_MRT) || (defined(HAVE_DECL_RTPROT_MRT) && HAVE_DECL_RTPROT_MRT)
  XLAT(RTPROT_MRT),
#endif
#if defined(RTPROT_ZEBRA) || (defined(HAVE_DECL_RTPROT_ZEBRA) && HAVE_DECL_RTPROT_ZEBRA)
  XLAT(RTPROT_ZEBRA),
#endif
#if defined(RTPROT_BIRD) || (defined(HAVE_DECL_RTPROT_BIRD) && HAVE_DECL_RTPROT_BIRD)
  XLAT(RTPROT_BIRD),
#endif
#if defined(RTPROT_DNROUTED) || (defined(HAVE_DECL_RTPROT_DNROUTED) && HAVE_DECL_RTPROT_DNROUTED)
  XLAT(RTPROT_DNROUTED),
#endif
#if defined(RTPROT_XORP) || (defined(HAVE_DECL_RTPROT_XORP) && HAVE_DECL_RTPROT_XORP)
  XLAT(RTPROT_XORP),
#endif
#if defined(RTPROT_NTK) || (defined(HAVE_DECL_RTPROT_NTK) && HAVE_DECL_RTPROT_NTK)
  XLAT(RTPROT_NTK),
#endif
#if defined(RTPROT_DHCP) || (defined(HAVE_DECL_RTPROT_DHCP) && HAVE_DECL_RTPROT_DHCP)
  XLAT(RTPROT_DHCP),
#endif
#if defined(RTPROT_MROUTED) || (defined(HAVE_DECL_RTPROT_MROUTED) && HAVE_DECL_RTPROT_MROUTED)
  XLAT(RTPROT_MROUTED),
#endif
#if defined(RTPROT_BABEL) || (defined(HAVE_DECL_RTPROT_BABEL) && HAVE_DECL_RTPROT_BABEL)
  XLAT(RTPROT_BABEL),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
