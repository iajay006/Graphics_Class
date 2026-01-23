#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <dos.h>

#define PI 3.14159265

void main()
{
    int gd = DETECT, gm;
    int cx = 320, cy = 210, r = 120;
    int h = 0, m = 0, s = 0;
    int i;
    float angle;
    char ch;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    while (1)
    {
        cleardevice();

        /* Outer circle */
     
        circle(320,210,120);

        /* Numbers */

	outtextxy(315,70,"12");
	outtextxy(460,210,"3");
	outtextxy(180,210,"9");
	outtextxy(320,350,"6");

	//CENTER
	setcolor (WHITE);
	circle(320,210,5);
	setfillstyle (SOLID_FILL,WHITE);
	floodfill (320,210,WHITE);

        /* Hour dots */
        for (i = 0; i < 12; i++)
        {
            if (i == 0 || i == 3 || i == 6 || i == 9)
                continue;

            angle = (i * 30 - 90) * PI / 180;
            circle(cx + (r - 10) * cos(angle),
                   cy + (r - 10) * sin(angle), 3);
        }

        /* Second hand */
        angle = (s * 6 - 90) * PI / 180;
        setcolor(RED);
        line(cx, cy,
             cx + (r - 15) * cos(angle),
             cy + (r - 15) * sin(angle));

        /* Minute hand */
        angle = (m * 6 - 90) * PI / 180;
        setcolor(BLUE);
        line(cx, cy,
             cx + (r - 25) * cos(angle),
             cy + (r - 25) * sin(angle));

        /* Hour hand */
        angle = ((h * 30) + (m / 2) - 90) * PI / 180;
        setcolor(WHITE);
        line(cx, cy,
             cx + (r - 45) * cos(angle),
             cy + (r - 45) * sin(angle));

        delay(1000);

        /* Time update */
        s++;
        if (s == 60)
        {
            s = 0;
            m++;
        }
        if (m == 60)
        {
            m = 0;
            h = (h + 1) % 12;
        }

        /* ---- EXIT on ENTER key ---- */
        if (kbhit())
        {
            ch = getch();
            if (ch == 13)   /* ENTER key */
                break;
        }
    }

    closegraph();
}