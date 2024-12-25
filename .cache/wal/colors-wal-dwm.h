static const char norm_fg[] = "#d0d4d7";
static const char norm_bg[] = "#0C0D18";
static const char norm_border[] = "#919496";

static const char sel_fg[] = "#d0d4d7";
static const char sel_bg[] = "#AE8C68";
static const char sel_border[] = "#d0d4d7";

static const char urg_fg[] = "#d0d4d7";
static const char urg_bg[] = "#555D69";
static const char urg_border[] = "#555D69";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
