// This program draws a sine wave

#include <stdio.h>
#include <math.h>
#include "graphics.h"

#define pi 3.14

int main(void)
{
    double sin(double x);
    double y = 1.23;
    int x = (int)y;
    while (x < 300)
    {
        drawString(".",x,y);
        x += 0.003;
        int y = sin(x);
    }
    return 0;
}