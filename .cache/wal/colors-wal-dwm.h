static const char norm_fg[] = "#dfe4ea";
static const char norm_bg[] = "#12171f";
static const char norm_border[] = "#9c9fa3";

static const char sel_fg[] = "#dfe4ea";
static const char sel_bg[] = "#7496AC";
static const char sel_border[] = "#dfe4ea";

static const char urg_fg[] = "#dfe4ea";
static const char urg_bg[] = "#6E91AF";
static const char urg_border[] = "#6E91AF";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
