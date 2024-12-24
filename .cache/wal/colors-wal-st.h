const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#11161e", /* black   */
  [1] = "#686970", /* red     */
  [2] = "#707888", /* green   */
  [3] = "#848582", /* yellow  */
  [4] = "#9FAB98", /* blue    */
  [5] = "#ABC392", /* magenta */
  [6] = "#B7BDC9", /* cyan    */
  [7] = "#dfe1e6", /* white   */

  /* 8 bright colors */
  [8]  = "#9c9da1",  /* black   */
  [9]  = "#686970",  /* red     */
  [10] = "#707888", /* green   */
  [11] = "#848582", /* yellow  */
  [12] = "#9FAB98", /* blue    */
  [13] = "#ABC392", /* magenta */
  [14] = "#B7BDC9", /* cyan    */
  [15] = "#dfe1e6", /* white   */

  /* special colors */
  [256] = "#11161e", /* background */
  [257] = "#dfe1e6", /* foreground */
  [258] = "#dfe1e6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
