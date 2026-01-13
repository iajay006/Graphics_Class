// Code by Ajay (Corrected & Optimized)
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>

void full();
void car();

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    full();
    car();

    getch();
    closegraph();
    return 0;
}

void full()
{
    /* Road lines (within 640px width) */
   line(1,380,639,380);
}

void car()
{
    int i;

    for(i = 0; i < 500; i++)
    {
        cleardevice();
        full();

        /* Car body */
        line(100+i,350,100+i,370);
        line(100+i,350,110+i,350);
        line(110+i,350,130+i,325);
        line(130+i,325,190+i,325);
        line(190+i,325,210+i,350);
        line(210+i,350,240+i,350);
        line(240+i,350,240+i,370);

        /* Bottom adjustments */
        line(100+i,370,110+i,370);
        line(130+i,370,210+i,370);
        line(230+i,370,240+i,370);

        /* Middle window */
        line(120+i,350,135+i,330);
        line(120+i,350,160+i,350);
        line(160+i,350,160+i,330);
        line(160+i,330,135+i,330);

        /* Right window */
        line(165+i,350,165+i,330);
        line(188+i,330,205+i,350);
        line(165+i,350,205+i,350);
        line(165+i,330,188+i,330);

        /* Wheels */
        circle(120+i,370,10);
        circle(220+i,370,10);

        pieslice(120+i,370,i%360,(i+30)%360,10);
        pieslice(220+i,370,i%360,(i+30)%360,10);

        delay(15);
    }
}
