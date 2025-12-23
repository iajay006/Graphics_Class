#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gdriver = DETECT, gmode;
    int x = 0;

    initgraph(&gdriver, &gmode, "C:\\tc\\bgi");

    while (x < getmaxx() - 150)
    {
        cleardevice();

        /* Car body */
        rectangle(50 + x, 200, 200 + x, 250);
        rectangle(70 + x, 170, 180 + x, 200);

        /* Wheels */
        circle(80 + x, 250, 15);
        circle(170 + x, 250, 15);

        /* Road */
        line(0, 265, getmaxx(), 265);

        delay(50);   /* speed control */
        x += 5;      /* movement */
    }

    getch();
    closegraph();
    return 0;
}
