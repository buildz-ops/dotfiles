const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1b1e25", /* black   */
  [1] = "#4B5063", /* red     */
  [2] = "#4B566B", /* green   */
  [3] = "#566277", /* yellow  */
  [4] = "#606B7E", /* blue    */
  [5] = "#5C6882", /* magenta */
  [6] = "#636F86", /* cyan    */
  [7] = "#afb8c3", /* white   */

  /* 8 bright colors */
  [8]  = "#7a8088",  /* black   */
  [9]  = "#4B5063",  /* red     */
  [10] = "#4B566B", /* green   */
  [11] = "#566277", /* yellow  */
  [12] = "#606B7E", /* blue    */
  [13] = "#5C6882", /* magenta */
  [14] = "#636F86", /* cyan    */
  [15] = "#afb8c3", /* white   */

  /* special colors */
  [256] = "#1b1e25", /* background */
  [257] = "#afb8c3", /* foreground */
  [258] = "#afb8c3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
