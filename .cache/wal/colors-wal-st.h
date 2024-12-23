const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#12171f", /* black   */
  [1] = "#6E91AF", /* red     */
  [2] = "#7496AC", /* green   */
  [3] = "#7CA8C2", /* yellow  */
  [4] = "#8DA2B4", /* blue    */
  [5] = "#9AB5C7", /* magenta */
  [6] = "#B4C7D5", /* cyan    */
  [7] = "#dfe4ea", /* white   */

  /* 8 bright colors */
  [8]  = "#9c9fa3",  /* black   */
  [9]  = "#6E91AF",  /* red     */
  [10] = "#7496AC", /* green   */
  [11] = "#7CA8C2", /* yellow  */
  [12] = "#8DA2B4", /* blue    */
  [13] = "#9AB5C7", /* magenta */
  [14] = "#B4C7D5", /* cyan    */
  [15] = "#dfe4ea", /* white   */

  /* special colors */
  [256] = "#12171f", /* background */
  [257] = "#dfe4ea", /* foreground */
  [258] = "#dfe4ea",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
