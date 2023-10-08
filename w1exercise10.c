// This program shows my feelings at the moment of its production

#include "graphics.h"

int main(void)
{
    drawString("The WHAT YOU FEEL Graph",80,30);
    drawLine(80,40,80,250);
    drawLine(75,250,350,250);

    drawLine(75,229,80,229);
    drawLine(75,208,80,208);
    drawLine(75,187,80,187);
    drawLine(75,166,80,166);
    drawLine(75,145,80,145);
    drawLine(75,124,80,124);
    drawLine(75,103,80,103);
    drawLine(75,82,80,82);
    drawLine(75,61,80,61);
    drawLine(75,40,80,40);

    setColour(magenta);
    fillRect(80,208,45,42);
    setColour(yellow);
    fillRect(125,82,45,168);
    setColour(green);
    fillRect(170,229,45,21);
    setColour(red);
    fillRect(215,166,45,84);
    setColour(blue);
    fillRect(260,61,45,189);
    setColour(black);
    fillRect(305,40,45,210);

    drawRect(80,208,45,42);
    drawRect(125,82,45,168);
    drawRect(170,229,45,21);
    drawRect(215,166,45,84);
    drawRect(260,61,45,189);
    drawRect(305,40,45,210);

    drawString("Fear",90,265);
    drawString("Joy",138,265);
    drawString("Disgust",171,265);
    drawString("Anger",222,265);
    drawString("Sadness",259,265);
    drawString("Stress",312,265);

    drawString("0",62,255);
    drawString("1",62,234);
    drawString("2",62,213);
    drawString("3",62,192);
    drawString("4",62,171);
    drawString("5",62,150);
    drawString("6",62,129);
    drawString("7",62,108);
    drawString("8",62,87);
    drawString("9",62,66);
    drawString("10",55,45);
    return 0;
}