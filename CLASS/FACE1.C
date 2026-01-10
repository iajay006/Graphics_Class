#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    /* Face */
    setcolor(YELLOW);
    circle(320, 240, 120);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(320, 240, YELLOW);

    /* Eyes (white) */
    setcolor(WHITE);
    circle(280, 200, 20);
    circle(360, 200, 20);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(280, 200, WHITE);
    floodfill(360, 200, WHITE);

    /* Pupils */
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(285, 205, 8);
    circle(365, 205, 8);
    floodfill(285, 205, BLACK);
    floodfill(365, 205, BLACK);

    /* Eyebrows */
    line(260, 170, 300, 170);
    line(340, 170, 380, 170);

    /* Nose */
    line(320, 220, 305, 250);
    line(320, 220, 335, 250);
    line(305, 250, 335, 250);

    /* Big Smile */
    setlinestyle(SOLID_LINE, 0, 3);
    arc(320, 260, 200, 340, 60);

    /* Cheeks */
    setcolor(LIGHTRED);
    setfillstyle(SOLID_FILL, LIGHTRED);
    circle(250, 260, 12);
    circle(390, 260, 12);
    floodfill(250, 260, LIGHTRED);
    floodfill(390, 260, LIGHTRED);

    /* Text */
    setcolor(WHITE);
    outtextxy(285, 420, "SMILE FACE");

    getch();
    closegraph();
}
