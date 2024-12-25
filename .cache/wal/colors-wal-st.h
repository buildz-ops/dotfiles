const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1b1e25", /* black   */
  [1] = "#955D6A", /* red     */
  [2] = "#A65F6A", /* green   */
  [3] = "#8E676E", /* yellow  */
  [4] = "#BE616A", /* blue    */
  [5] = "#C25D67", /* magenta */
  [6] = "#C4626A", /* cyan    */
  [7] = "#a7aebc", /* white   */

  /* 8 bright colors */
  [8]  = "#747983",  /* black   */
  [9]  = "#955D6A",  /* red     */
  [10] = "#A65F6A", /* green   */
  [11] = "#8E676E", /* yellow  */
  [12] = "#BE616A", /* blue    */
  [13] = "#C25D67", /* magenta */
  [14] = "#C4626A", /* cyan    */
  [15] = "#a7aebc", /* white   */

  /* special colors */
  [256] = "#1b1e25", /* background */
  [257] = "#a7aebc", /* foreground */
  [258] = "#a7aebc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
