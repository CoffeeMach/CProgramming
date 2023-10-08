// This is a drawing of the tall BT Tower to scale
// This drawing took 2 hours to finish!
// It is a surprising image!

#include "graphics.h"

#define y0h 4
#define y 8
#define y1h 12
#define y2h 20
#define x0h 4.25
#define x 8.5
#define x1h 12.75

int main(void)
{
    setWindowSize(400,1500);
    setColour(black);
    fillRect(0,0,400,1500);
    setColour(white);
    fillOval(30,30,5,5);
    fillOval(20,50,5,5);
    fillOval(40,40,4,4);
    fillOval(260,60,6,6);
    fillOval(300,90,5,5);
    fillOval(320,50,7,7);
    sleep(350);
    fillOval(70,30,5,5);
    fillOval(40,70,6,6);
    fillOval(360,40,4,4);
    fillOval(350,50,6,6);
    fillOval(150,60,7,7);
    sleep(350);
    fillOval(90,100,4,4);
    fillOval(110,30,4,4);
    fillOval(120,20,5,5);
    fillOval(250,40,7,7);
    fillOval(280,30,5,5);
    fillOval(290,20,4,4);
    sleep(350);
    fillOval(250,70,4,4);
    fillOval(270,50,5,5);
    fillOval(30,80,7,7);
    fillOval(80,50,5,5);
    fillOval(280,80,7,7);
    sleep(350);
    fillOval(310,110,5,5);
    fillOval(330,120,5,5);
    fillOval(370,40,3,3);
    fillArc(100,120,20,20,90,250);
    fillOval(100,60,7,7);
    fillOval(390,140,7,7);
    fillOval(395,80,5,5);
    setColour(magenta);
    drawLine(200-x,0,200-x,3*y);
    drawRect(200-x,3*y,2*x,2*y);
    drawRect(200-x1h,5*y,3*x,y1h);
    drawLine(200-x,6.5*y,200-x0h,9.5*y);
    drawLine(200+x,6.5*y,200+x0h,9.5*y);
    sleep(350);
    drawRect(200-3*x,9.5*y,6*x,2*y);
    drawRect(200-2.5*x,11.5*y,5*x,y0h);
    drawRect(200-1.3*x,12*y,2.6*x,1.5*y);
    drawRect(200-2*x,13.5*y,4*x,y);
    drawRect(200-5*x,14.5*y,10*x,2.5*y);
    drawLine(200-5.5*x,17.5*y,200-4.5*x,17*y);
    sleep(350);
    drawLine(200+4.5*x,17*y,200+5.5*x,17.5*y);
    drawRect(200-5.5*x,17.5*y,11*x,2.5*y);
    drawString("BT",200+2.8*x,16.5*y);
    drawString("BT",200+2.8*x,16.6*y);
    drawString("BT",200+2.8*x,16.4*y);
    setColour(black);
    drawLine(200-5.4*x,17.5*y,200+5.4*x,17.5*y);
    setColour(magenta);
    drawRect(200-5.3*x,20*y,10.6*x,2*y);
    drawLine(200-4.5*x,22*y,200-4*x,25*y);
    sleep(350);
    drawLine(200+4.5*x,22*y,200+4*x,25*y);
    drawLine(200-4*x,25*y,200+4*x,25*y);
    drawLine(200-2*x,25*y,200-x1h,25.5*y);
    drawLine(200+2*x,25*y,200+x1h,25.5*y);
    drawLine(200-4*x,25.5*y,200+4*x,25.5*y);
    drawLine(200-3.8*x,26.5*y,200+3.8*x,26.5*y);
    drawLine(200-4*x,25.5*y,200-3.8*x,26.5*y);
    sleep(350);
    drawLine(200+4*x,25.5*y,200+3.8*x,26.5*y);
    drawRect(200-1.2*x,26.5*y,2.4*x,1.5*y);
    fillOval(200-1.8*x,26.8*y,x,x);
    fillOval(200+0.5*x,27.3*y,x0h,x0h);
    drawRect(200-2.3*x,28*y,4.6*x,y0h);
    drawRect(200-1.2*x,28.5*y,2.4*x,3*y);
    fillOval(200+0.8*x,28.8*y,x1h,x1h);
    fillOval(200-1.8*x,29*y,2*x,2*x);
    drawRect(200-3.5*x,31.5*y,7*x,y0h);
    sleep(350);
    drawRect(200-1.2*x,32*y,2.4*x,2.5*y);
    fillOval(200-0.8*x,32.5*y,1.7*x,1.7*x);
    fillOval(200+x1h,32.3*y,1.5*x,1.5*x);
    drawRect(200-3.5*x,34.5*y,7*x,y0h);
    drawRect(200-1.2*x,35*y,2.4*x,1.5*y);
    fillOval(200-0.6*x,35.3*y,x,x);
    fillOval(200+x1h,35.7*y,x0h,x0h);
    drawRect(200-3*x,36.5*y,6*x,y0h);
    drawLine(200-1.2*x,37*y,200-2*x,40*y);
    sleep(350);
    drawLine(200+1.2*x,37*y,200+2*x,40*y);
    fillOval(200-2*x,38*y,x1h,x1h);
    fillOval(200+0.3*x,38.2*y,1.2*x,1.2*x);
    fillOval(200+1.7*x,37.4*y,x0h,x0h);
    drawRect(200-4*x,40*y,8*x,y0h);
    drawRect(200-3*x,40.5*y,6*x,y1h);
    drawRect(200-1.5*x,42*y,3*x,0.4*y);
    drawRect(200-2*x,42.4*y,4*x,0.6*y);
    drawRect(200-3.5*x,43*y,7*x,y0h);
    sleep(350);
    drawRect(200-2.8*x,43.5*y,5.6*x,1.5*y);
    drawRect(200-4*x,45*y,8*x,30*y);
    drawRect(200-1.5*x,75*y,3*x,y);
    drawRect(200-4*x,76*y,8*x,2*y);
    drawRect(200-3*x,45*y,6*x,30*y);
    drawRect(200-2*x,45*y,4*x,30*y);
    drawRect(200-x,45*y,2*x,30*y);
    drawLine(200,45*y,200,75*y);
    sleep(350);
    drawRect(200-4*x,46.8*y,8*x,26*y);
    drawRect(200-4*x,47*y,8*x,26*y);
    drawRect(200-4*x,48.8*y,8*x,22*y);
    drawRect(200-4*x,49*y,8*x,22*y);
    drawRect(200-4*x,50.8*y,8*x,18*y);
    drawRect(200-4*x,51*y,8*x,18*y);
    drawRect(200-4*x,52.8*y,8*x,16*y);
    drawRect(200-4*x,53*y,8*x,16*y);
    drawRect(200-4*x,54.8*y,8*x,12*y);
    drawRect(200-4*x,55*y,8*x,12*y);
    drawRect(200-4*x,56.8*y,8*x,8*y);
    drawRect(200-4*x,57*y,8*x,8*y);
    drawRect(200-4*x,58.8*y,8*x,4*y);
    drawRect(200-4*x,59*y,8*x,4*y);
    drawLine(200-4*x,60.8*y,200+4*x,60.8*y);
    drawLine(200-4*x,61*y,200+4*x,61*y);
    sleep(350);
    setColour(cyan);
    drawRect(0,500,30,500);
    drawRect(30,400,70,800);
    sleep(350);
    drawRect(70,1200,100,300);
    drawRect(100,450,200-4*x-100,500);
    drawRect(200+4*x,380,50,500);
    drawRect(250+4*x,550,150+4*x,300);
    setColour(magenta);
    drawLine(200-4*x,45*y,200-4*x,80*y);
    drawLine(200+4*x,45*y,200+4*x,80*y);
    setColour(black);
    drawLine(200-4*x,75*y,200-4*x,76*y);
    drawLine(200+4*x,75*y,200+4*x,76*y);
    sleep(350);
    setColour(cyan);
    drawArc(350,300,200,200,0,360);
    return 0;
}