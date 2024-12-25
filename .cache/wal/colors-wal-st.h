const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0C0D18", /* black   */
  [1] = "#555D69", /* red     */
  [2] = "#AE8C68", /* green   */
  [3] = "#6B7785", /* yellow  */
  [4] = "#7994B0", /* blue    */
  [5] = "#7FA0C1", /* magenta */
  [6] = "#84A5C6", /* cyan    */
  [7] = "#d0d4d7", /* white   */

  /* 8 bright colors */
  [8]  = "#919496",  /* black   */
  [9]  = "#555D69",  /* red     */
  [10] = "#AE8C68", /* green   */
  [11] = "#6B7785", /* yellow  */
  [12] = "#7994B0", /* blue    */
  [13] = "#7FA0C1", /* magenta */
  [14] = "#84A5C6", /* cyan    */
  [15] = "#d0d4d7", /* white   */

  /* special colors */
  [256] = "#0C0D18", /* background */
  [257] = "#d0d4d7", /* foreground */
  [258] = "#d0d4d7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
