// This program draws a series of ovals of increasing size.

#include "graphics.h"

int main(void)
{
    int radius = 0;
    int x = 0;
    int y = 0;
    while (radius < 300)
    {
        drawOval(x,y,radius,radius);
        radius = radius + 10;
        x += 10;
    }
    return 0;
}