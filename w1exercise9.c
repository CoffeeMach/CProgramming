// This program displays the CS department address
// Computer Science Department
// University College London
// Gower Street
// London
// WC1E 6BT

#include "graphics.h"

int main(void)
{
    drawString("UCL CS department address",20,40);
    drawString("UCL CS department address",20.01,40.01);
    drawString("UCL CS department address",19.99,39.99);
    drawString("Computer Science Department",20,70);
    drawString("University College London",20,90);
    drawString("Gower Street",20,110);
    drawString("London",20,130);
    drawString("WC1E 6BT",20,150);
    return 0;
}