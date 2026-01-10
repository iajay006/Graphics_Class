#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    /* Triangle */
    line(250, 150, 350, 150);
    line(250, 150, 300, 100);
    line(300, 100, 350, 150);

    /* Circle */
    circle(300, 230, 40);

    /* Square */
    rectangle(260, 280, 340, 360);

    /* Line */
    line(200, 400, 400, 400);

    getch();
    closegraph();
}