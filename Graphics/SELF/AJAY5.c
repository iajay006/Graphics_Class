#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gdriver = DETECT, gmode;

    initgraph(&gdriver, &gmode, "C:\\tc\\bgi");

    /* Display Name on Left Side */
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(100, 200, "GAURAV");

    /* Head */
    circle(300, 120, 40);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300, 120, WHITE);

    /* Eyes */
    setcolor(BLACK);
    circle(285, 110, 5);
    circle(315, 110, 5);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(285, 110, BLACK);
    floodfill(315, 110, BLACK);

    /* Mouth */
    arc(300, 130, 200, 340, 15);

    /* Neck */
    setcolor(WHITE);
    rectangle(290, 160, 310, 180);

    /* Body */
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(260, 180, 340, 300);
    floodfill(261, 181, WHITE);

    /* Arms */
    line(260, 200, 220, 260);
    line(340, 200, 380, 260);

    /* Hands */
    circle(215, 265, 10);
    circle(385, 265, 10);

    /* Legs */
    line(280, 300, 260, 380);
    line(320, 300, 340, 380);

    /* Shoes */
    setfillstyle(SOLID_FILL, RED);
    rectangle(245, 380, 275, 395);
    rectangle(325, 380, 355, 395);
    floodfill(246, 381, WHITE);
    floodfill(326, 381, WHITE);

    /* Ground */
    line(0, 400, getmaxx(), 400);

    getch();
    closegraph();
    return 0;
}
