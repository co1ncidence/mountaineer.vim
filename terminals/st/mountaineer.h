/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f0f0f", /* black   */
  [1] = "#ac8a8c", /* red     */
  [2] = "#8aac8b", /* green   */
  [3] = "#aca98a", /* yellow  */
  [4] = "#8f8aac", /* blue    */
  [5] = "#ac8aac", /* magenta */
  [6] = "#8aabac", /* cyan    */
  [7] = "#e7e7e7", /* white   */

  /* 8 bright colors */
  [8]  = "#191919", /* black   */
  [9]  = "#c49ea0", /* red     */
  [10] = "#9ec49f", /* green   */
  [11] = "#c4c19e", /* yellow  */
  [12] = "#a39ec4", /* blue    */
  [13] = "#c49ec4", /* magenta */
  [14] = "#9ec3c4", /* cyan    */
  [15] = "#f5f5f5", /* white   */

  /* special colors */
  [256] = "#050505", /* background */
  [257] = "#f0f0f0", /* foreground */
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
