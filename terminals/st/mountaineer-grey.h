/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#303030", /* black   */
  [1] = "#d5bbbc", /* red     */
  [2] = "#bbd5bd", /* green   */
  [3] = "#d5d5bb", /* yellow  */
  [4] = "#bcbbd5", /* blue    */
  [5] = "#d5bbd3", /* magenta */
  [6] = "#bbd5d4", /* cyan    */
  [7] = "#e7e7e7", /* white   */

  /* 8 bright colors */
  [8]  = "#3d3d3d", /* black   */
  [9]  = "#dcc7c8", /* red     */
  [10] = "#c7dcca", /* green   */
  [11] = "#dcdcc7", /* yellow  */
  [12] = "#c8c7dc", /* blue    */
  [13] = "#dcc7db", /* magenta */
  [14] = "#c7dcdc", /* cyan    */
  [15] = "#f0f0f0", /* white   */

  /* special colors */
  [256] = "#232323", /* background */
  [257] = "#d9dbda", /* foreground */
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
