/* Generated by ./xlat/gen.sh from ./xlat/qm_which.in; do not edit. */

static const struct xlat qm_which[] = {
 XLAT(0),
#if defined(QM_MODULES) || (defined(HAVE_DECL_QM_MODULES) && HAVE_DECL_QM_MODULES)
 XLAT(QM_MODULES),
#endif
#if defined(QM_DEPS) || (defined(HAVE_DECL_QM_DEPS) && HAVE_DECL_QM_DEPS)
 XLAT(QM_DEPS),
#endif
#if defined(QM_REFS) || (defined(HAVE_DECL_QM_REFS) && HAVE_DECL_QM_REFS)
 XLAT(QM_REFS),
#endif
#if defined(QM_SYMBOLS) || (defined(HAVE_DECL_QM_SYMBOLS) && HAVE_DECL_QM_SYMBOLS)
 XLAT(QM_SYMBOLS),
#endif
#if defined(QM_INFO) || (defined(HAVE_DECL_QM_INFO) && HAVE_DECL_QM_INFO)
 XLAT(QM_INFO),
#endif
 XLAT_END
};
