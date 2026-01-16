#include "graphics.h"
#include <math.h>

int main(void)
{
    drawRect(200,100,40+40*sqrt(2),40+40*sqrt(2));
    setColour(white);
    drawRect(200,100,20*sqrt(2),20*sqrt(2));
    drawRect(200+40+20*sqrt(2),100,20*sqrt(2),20*sqrt(2));
    drawRect(200,100+40+20*sqrt(2),20*sqrt(2),20*sqrt(2));
    drawRect(200+40+20*sqrt(2),100+40+20*sqrt(2),20*sqrt(2),20*sqrt(2));
    setColour(black);
    drawLine(200,100+20*sqrt(2),200+20*sqrt(2),100);
    drawLine(200,100+40+20*sqrt(2),200+20*sqrt(2),100+40+40*sqrt(2));
    drawLine(200+40+20*sqrt(2),100,200+40+40*sqrt(2),100+20*sqrt(2));
    drawLine(200+40+40*sqrt(2),100+40+20*sqrt(2),200+40+20*sqrt(2),100+40+40*sqrt(2));
    drawLine(60,25,110,25);
    drawLine(110,25,145,60);
    drawLine(145,60,145,110);
    drawLine(145,110,110,145);
    drawLine(110,145,60,145);
    drawLine(60,145,25,110);
    drawLine(25,110,25,60);
    drawLine(25,60,60,25);
    return 0;
}