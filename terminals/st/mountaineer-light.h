/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#4c4c4c", /* black   */
  [1] = "#786162", /* red     */
  [2] = "#617878", /* green   */
  [3] = "#787661", /* yellow  */
  [4] = "#646178", /* blue    */
  [5] = "#786178", /* magenta */
  [6] = "#617878", /* cyan    */
  [7] = "#e7e7e7", /* white   */

  /* 8 bright colors */
  [8]  = "#575757", /* black   */
  [9]  = "#786162", /* red     */
  [10] = "#617878", /* green   */
  [11] = "#787661", /* yellow  */
  [12] = "#646178", /* blue    */
  [13] = "#786178", /* magenta */
  [14] = "#617878", /* cyan    */
  [15] = "#f5f5f5", /* white   */

  /* special colors */
  [256] = "#f0f0f0", /* background */
  [257] = "#363636", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;

