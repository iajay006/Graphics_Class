#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void main()
{
    int gd = DETECT, gm, i;

    clrscr();

    initgraph(&gd, &gm, "c://turboc3//bgi");

    for(i = 1; i <= 585; i++)
    {
        setcolor(RED + i);
        circle(50 + i, 50, 50);
        circle(585 - i, 150, 50);
        circle(50 + i, 250, 50);
        circle(585 - i, 350, 50);
        circle(40 + i, 445, 43);

        delay(10);
        cleardevice();
    }

    getch();
    closegraph();
}
