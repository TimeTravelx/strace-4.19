/* Generated by ./xlat/gen.sh from ./xlat/bsg_protocol.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat bsg_protocol in mpers mode

#else

static
const struct xlat bsg_protocol[] = {
#if defined(BSG_PROTOCOL_SCSI) || (defined(HAVE_DECL_BSG_PROTOCOL_SCSI) && HAVE_DECL_BSG_PROTOCOL_SCSI)
  XLAT(BSG_PROTOCOL_SCSI),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
