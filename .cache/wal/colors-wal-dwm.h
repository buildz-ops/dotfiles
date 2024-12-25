static const char norm_fg[] = "#a7aebc";
static const char norm_bg[] = "#1b1e25";
static const char norm_border[] = "#747983";

static const char sel_fg[] = "#a7aebc";
static const char sel_bg[] = "#A65F6A";
static const char sel_border[] = "#a7aebc";

static const char urg_fg[] = "#a7aebc";
static const char urg_bg[] = "#955D6A";
static const char urg_border[] = "#955D6A";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
