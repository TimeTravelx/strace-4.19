/* Generated by ./xlat/gen.sh from ./xlat/neighbor_cache_entry_states.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat neighbor_cache_entry_states in mpers mode

#else

static
const struct xlat neighbor_cache_entry_states[] = {
#if defined(NUD_INCOMPLETE) || (defined(HAVE_DECL_NUD_INCOMPLETE) && HAVE_DECL_NUD_INCOMPLETE)
  XLAT(NUD_INCOMPLETE),
#endif
#if defined(NUD_REACHABLE) || (defined(HAVE_DECL_NUD_REACHABLE) && HAVE_DECL_NUD_REACHABLE)
  XLAT(NUD_REACHABLE),
#endif
#if defined(NUD_STALE) || (defined(HAVE_DECL_NUD_STALE) && HAVE_DECL_NUD_STALE)
  XLAT(NUD_STALE),
#endif
#if defined(NUD_DELAY) || (defined(HAVE_DECL_NUD_DELAY) && HAVE_DECL_NUD_DELAY)
  XLAT(NUD_DELAY),
#endif
#if defined(NUD_PROBE) || (defined(HAVE_DECL_NUD_PROBE) && HAVE_DECL_NUD_PROBE)
  XLAT(NUD_PROBE),
#endif
#if defined(NUD_FAILED) || (defined(HAVE_DECL_NUD_FAILED) && HAVE_DECL_NUD_FAILED)
  XLAT(NUD_FAILED),
#endif
#if defined(NUD_NOARP) || (defined(HAVE_DECL_NUD_NOARP) && HAVE_DECL_NUD_NOARP)
  XLAT(NUD_NOARP),
#endif
#if defined(NUD_PERMANENT) || (defined(HAVE_DECL_NUD_PERMANENT) && HAVE_DECL_NUD_PERMANENT)
  XLAT(NUD_PERMANENT),
#endif
#if defined(NUD_NONE) || (defined(HAVE_DECL_NUD_NONE) && HAVE_DECL_NUD_NONE)
  XLAT(NUD_NONE),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
