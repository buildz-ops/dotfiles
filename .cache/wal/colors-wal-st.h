const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1a1e25", /* black   */
  [1] = "#577092", /* red     */
  [2] = "#5F7AA0", /* green   */
  [3] = "#917690", /* yellow  */
  [4] = "#7587AE", /* blue    */
  [5] = "#6B94AF", /* magenta */
  [6] = "#7AACC5", /* cyan    */
  [7] = "#ccbdcd", /* white   */

  /* 8 bright colors */
  [8]  = "#8e848f",  /* black   */
  [9]  = "#577092",  /* red     */
  [10] = "#5F7AA0", /* green   */
  [11] = "#917690", /* yellow  */
  [12] = "#7587AE", /* blue    */
  [13] = "#6B94AF", /* magenta */
  [14] = "#7AACC5", /* cyan    */
  [15] = "#ccbdcd", /* white   */

  /* special colors */
  [256] = "#1a1e25", /* background */
  [257] = "#ccbdcd", /* foreground */
  [258] = "#ccbdcd",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
