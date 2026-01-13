#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gd = DETECT, gm;
    int x;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    for(x = 30; x < 600; x++)
    {
        cleardevice();          // clear screen
        circle(x, 200, 30);     // moving circle (radius = 30 px ≈ 3 cm)
        delay(20);              // speed control
    }

    getch();
    closegraph();
    return 0;
}
