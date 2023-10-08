// This program draws a square inside a circle
// using drawArc to draw the circle

#include "graphics.h"
#include <math.h>

int main(void)
{
    drawRect(100-50*sqrt(2),100-50*sqrt(2),100*sqrt(2),100*sqrt(2));
    drawArc(0,0,200,200,0,360);
    return 0;
}