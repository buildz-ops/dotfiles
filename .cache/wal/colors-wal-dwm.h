static const char norm_fg[] = "#f3deac";
static const char norm_bg[] = "#0b101c";
static const char norm_border[] = "#aa9b78";

static const char sel_fg[] = "#f3deac";
static const char sel_bg[] = "#F77772";
static const char sel_border[] = "#f3deac";

static const char urg_fg[] = "#f3deac";
static const char urg_bg[] = "#976E51";
static const char urg_border[] = "#976E51";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
