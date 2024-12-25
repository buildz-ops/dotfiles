const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b101c", /* black   */
  [1] = "#976E51", /* red     */
  [2] = "#F77772", /* green   */
  [3] = "#9A873F", /* yellow  */
  [4] = "#AC8E54", /* blue    */
  [5] = "#DD9C65", /* magenta */
  [6] = "#F5B06D", /* cyan    */
  [7] = "#f3deac", /* white   */

  /* 8 bright colors */
  [8]  = "#aa9b78",  /* black   */
  [9]  = "#976E51",  /* red     */
  [10] = "#F77772", /* green   */
  [11] = "#9A873F", /* yellow  */
  [12] = "#AC8E54", /* blue    */
  [13] = "#DD9C65", /* magenta */
  [14] = "#F5B06D", /* cyan    */
  [15] = "#f3deac", /* white   */

  /* special colors */
  [256] = "#0b101c", /* background */
  [257] = "#f3deac", /* foreground */
  [258] = "#f3deac",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
