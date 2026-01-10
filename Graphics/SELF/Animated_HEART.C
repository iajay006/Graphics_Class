#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <dos.h>

#define THICKNESS 6

/* Thick line function */
void thickLine(int x1, int y1, int x2, int y2)
{
    int i;
    for (i = -THICKNESS; i <= THICKNESS; i++)
    {
        line(x1 + i, y1, x2 + i, y2);
        line(x1, y1 + i, x2, y2 + i);
    }
}

/* Animated drawing of A */
void draw_A_animated(int cx, int cy, int height)
{
    int i;

    int top_x = cx;
    int top_y = cy - height / 2;

    int left_x  = cx - height / 2;
    int left_y  = cy + height / 2;

    int right_x = cx + height / 2;
    int right_y = cy + height / 2;

    int mid_y = cy;

    setcolor(RED);

    /* Left slant (draw slowly) */
    for (i = 0; i <= 100; i++)
    {
        thickLine(
            top_x,
            top_y,
            top_x + (left_x - top_x) * i / 100,
            top_y + (left_y - top_y) * i / 100
        );
        delay(5);
    }

    /* Right slant */
    for (i = 0; i <= 100; i++)
    {
        thickLine(
            top_x,
            top_y,
            top_x + (right_x - top_x) * i / 100,
            top_y + (right_y - top_y) * i / 100
        );
        delay(8);
    }

    /* Middle bar */
    for (i = 0; i <= 100; i++)
    {
        thickLine(
            cx - height / 4,
            mid_y,
            cx - height / 4 + (height / 2) * i / 100,
            mid_y
        );
        delay(8);
    }
}

int main()
{
    int gd = DETECT, gm;
    double t;
    int x, y, px, py;
    int xc = 320, yc = 240;
    int scale = 10;
    int i;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setbkcolor(BLACK);
    cleardevice();

    /* ---------- HEART DRAWING ---------- */
    setcolor(MAGENTA);

    t = 0;
    px = xc + (int)(16 * pow(sin(t), 3) * scale);
    py = yc - (int)((13 * cos(t)
                     - 5 * cos(2*t)
                     - 2 * cos(3*t)
                     - cos(4*t)) * scale);

    for (i = 1; i < 1000; i++)
    {
        t = i * 0.02;

        x = xc + (int)(16 * pow(sin(t), 3) * scale);
        y = yc - (int)((13 * cos(t)
                        - 5 * cos(2*t)
                        - 2 * cos(3*t)
                        - cos(4*t)) * scale);

        thickLine(px, py, x, y);
        px = x;
        py = y;

        delay(5);
    }

    /* ---------- A STARTS IMMEDIATELY AFTER HEART ---------- */
    draw_A_animated(xc, yc + 10,80);

    getch();
    closegraph();
    return 0;
}
