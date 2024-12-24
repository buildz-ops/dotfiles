static const char norm_fg[] = "#ccbdcd";
static const char norm_bg[] = "#1a1e25";
static const char norm_border[] = "#8e848f";

static const char sel_fg[] = "#ccbdcd";
static const char sel_bg[] = "#5F7AA0";
static const char sel_border[] = "#ccbdcd";

static const char urg_fg[] = "#ccbdcd";
static const char urg_bg[] = "#577092";
static const char urg_border[] = "#577092";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
