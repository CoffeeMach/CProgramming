// This program draws a regular heptagon
// To see the symmetry, activate drawOval command
// This project took 1.30 hours to finish

#include "graphics.h"

#define c 91.11558521
#define hc 45.55779261
#define h 94.60173113
#define s1x 82.09230565
#define s1y 39.5335708
#define s2x 20.27512512
#define s2y 88.83112726

int main(void)
{
    // drawOval(0,0,210,210);
    drawLine(105-hc,105+h,105+hc,105+h);
    drawLine(105,0,105+s1x,s1y);
    drawLine(105-s1x,s1y,105,0);
    drawLine(105+s1x,s1y,105+s1x+s2x,s1y+s2y);
    drawLine(105-s1x-s2x,s1y+s2y,105-s1x,s1y);
    drawLine(105+hc,105+h,105+s1x+s2x,s1y+s2y);
    drawLine(105-s1x-s2x,s1y+s2y,105-hc,105+h);
    return 0;
}