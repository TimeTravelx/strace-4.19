/* Generated by ./xlat/gen.sh from ./xlat/sysctl_net_ipv4_conf.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat sysctl_net_ipv4_conf in mpers mode

#else

static
const struct xlat sysctl_net_ipv4_conf[] = {
 XLAT(NET_IPV4_CONF_FORWARDING),
 XLAT(NET_IPV4_CONF_MC_FORWARDING),
 XLAT(NET_IPV4_CONF_PROXY_ARP),
 XLAT(NET_IPV4_CONF_ACCEPT_REDIRECTS),
 XLAT(NET_IPV4_CONF_SECURE_REDIRECTS),
 XLAT(NET_IPV4_CONF_SEND_REDIRECTS),
 XLAT(NET_IPV4_CONF_SHARED_MEDIA),
 XLAT(NET_IPV4_CONF_RP_FILTER),
 XLAT(NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE),
 XLAT(NET_IPV4_CONF_BOOTP_RELAY),
 XLAT(NET_IPV4_CONF_LOG_MARTIANS),
 XLAT(NET_IPV4_CONF_TAG),
 XLAT(NET_IPV4_CONF_ARPFILTER),
 XLAT(NET_IPV4_CONF_MEDIUM_ID),
 XLAT(NET_IPV4_CONF_NOXFRM),
 XLAT(NET_IPV4_CONF_NOPOLICY),
#if defined(NET_IPV4_CONF_FORCE_IGMP_VERSION) || (defined(HAVE_DECL_NET_IPV4_CONF_FORCE_IGMP_VERSION) && HAVE_DECL_NET_IPV4_CONF_FORCE_IGMP_VERSION)
  XLAT(NET_IPV4_CONF_FORCE_IGMP_VERSION),
#endif
#if defined(NET_IPV4_CONF_ARP_ANNOUNCE) || (defined(HAVE_DECL_NET_IPV4_CONF_ARP_ANNOUNCE) && HAVE_DECL_NET_IPV4_CONF_ARP_ANNOUNCE)
  XLAT(NET_IPV4_CONF_ARP_ANNOUNCE),
#endif
#if defined(NET_IPV4_CONF_ARP_IGNORE) || (defined(HAVE_DECL_NET_IPV4_CONF_ARP_IGNORE) && HAVE_DECL_NET_IPV4_CONF_ARP_IGNORE)
  XLAT(NET_IPV4_CONF_ARP_IGNORE),
#endif
#if defined(NET_IPV4_CONF_PROMOTE_SECONDARIES) || (defined(HAVE_DECL_NET_IPV4_CONF_PROMOTE_SECONDARIES) && HAVE_DECL_NET_IPV4_CONF_PROMOTE_SECONDARIES)
  XLAT(NET_IPV4_CONF_PROMOTE_SECONDARIES),
#endif
#if defined(NET_IPV4_CONF_ARP_ACCEPT) || (defined(HAVE_DECL_NET_IPV4_CONF_ARP_ACCEPT) && HAVE_DECL_NET_IPV4_CONF_ARP_ACCEPT)
  XLAT(NET_IPV4_CONF_ARP_ACCEPT),
#endif
#if defined(NET_IPV4_CONF_ARP_NOTIFY) || (defined(HAVE_DECL_NET_IPV4_CONF_ARP_NOTIFY) && HAVE_DECL_NET_IPV4_CONF_ARP_NOTIFY)
  XLAT(NET_IPV4_CONF_ARP_NOTIFY),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
