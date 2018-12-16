static const char norm_fg[] = "#c4cddb";
static const char norm_bg[] = "#060911";
static const char norm_border[] = "#898f99";

static const char sel_fg[] = "#c4cddb";
static const char sel_bg[] = "#345588";
static const char sel_border[] = "#c4cddb";

static const char urg_fg[] = "#c4cddb";
static const char urg_bg[] = "#A17460";
static const char urg_border[] = "#A17460";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
