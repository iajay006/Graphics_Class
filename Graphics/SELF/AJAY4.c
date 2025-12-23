#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gdriver = DETECT, gmode;
    int x = 0, r = 0;

    initgraph(&gdriver, &gmode, "C:\\tc\\bgi");

    while (!kbhit())
    {
        cleardevice();

        /* Road */
        setcolor(WHITE);
        line(0, 300, getmaxx(), 300);

        /* Car body */
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        rectangle(100 + x, 240, 300 + x, 300);
        floodfill(101 + x, 241, RED);

        /* Car top */
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(140 + x, 200, 260 + x, 240);
        floodfill(141 + x, 201, RED);

        /* Wheels */
        setcolor(BLACK);
        setfillstyle(SOLID_FILL, BLACK);
        circle(150 + x, 300, 20);
        circle(250 + x, 300, 20);
        floodfill(150 + x, 300, BLACK);
        floodfill(250 + x, 300, BLACK);

        /* Wheel spokes (rotation effect) */
        setcolor(WHITE);
        line(150 + x, 300,
             150 + x + 20 * cos(r), 300 + 20 * sin(r));
        line(250 + x, 300,
             250 + x + 20 * cos(r), 300 + 20 * sin(r));

        delay(40);

        x += 5;
        r += 1;

        if (x > getmaxx())
            x = -300;
    }

    getch();
    closegraph();
    return 0;
}
