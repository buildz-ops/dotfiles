static const char norm_fg[] = "#dfe1e6";
static const char norm_bg[] = "#11161e";
static const char norm_border[] = "#9c9da1";

static const char sel_fg[] = "#dfe1e6";
static const char sel_bg[] = "#707888";
static const char sel_border[] = "#dfe1e6";

static const char urg_fg[] = "#dfe1e6";
static const char urg_bg[] = "#686970";
static const char urg_border[] = "#686970";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
