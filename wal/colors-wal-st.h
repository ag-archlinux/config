const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#060911", /* black   */
  [1] = "#A17460", /* red     */
  [2] = "#345588", /* green   */
  [3] = "#61708B", /* yellow  */
  [4] = "#7888A1", /* blue    */
  [5] = "#7C98C2", /* magenta */
  [6] = "#8C99AE", /* cyan    */
  [7] = "#c4cddb", /* white   */

  /* 8 bright colors */
  [8]  = "#898f99",  /* black   */
  [9]  = "#A17460",  /* red     */
  [10] = "#345588", /* green   */
  [11] = "#61708B", /* yellow  */
  [12] = "#7888A1", /* blue    */
  [13] = "#7C98C2", /* magenta */
  [14] = "#8C99AE", /* cyan    */
  [15] = "#c4cddb", /* white   */

  /* special colors */
  [256] = "#060911", /* background */
  [257] = "#c4cddb", /* foreground */
  [258] = "#c4cddb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
