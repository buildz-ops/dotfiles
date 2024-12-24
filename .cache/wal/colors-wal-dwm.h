static const char norm_fg[] = "#cdc1ca";
static const char norm_bg[] = "#191e25";
static const char norm_border[] = "#8f878d";

static const char sel_fg[] = "#cdc1ca";
static const char sel_bg[] = "#B79178";
static const char sel_border[] = "#cdc1ca";

static const char urg_fg[] = "#cdc1ca";
static const char urg_bg[] = "#C56E6D";
static const char urg_border[] = "#C56E6D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
