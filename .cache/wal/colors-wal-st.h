const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#191e25", /* black   */
  [1] = "#C56E6D", /* red     */
  [2] = "#B79178", /* green   */
  [3] = "#3C6281", /* yellow  */
  [4] = "#5B7294", /* blue    */
  [5] = "#8D788C", /* magenta */
  [6] = "#678DB2", /* cyan    */
  [7] = "#cdc1ca", /* white   */

  /* 8 bright colors */
  [8]  = "#8f878d",  /* black   */
  [9]  = "#C56E6D",  /* red     */
  [10] = "#B79178", /* green   */
  [11] = "#3C6281", /* yellow  */
  [12] = "#5B7294", /* blue    */
  [13] = "#8D788C", /* magenta */
  [14] = "#678DB2", /* cyan    */
  [15] = "#cdc1ca", /* white   */

  /* special colors */
  [256] = "#191e25", /* background */
  [257] = "#cdc1ca", /* foreground */
  [258] = "#cdc1ca",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
