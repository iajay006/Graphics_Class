#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    /* Face */
    setcolor(RED);
    circle(320, 240, 120);
    setfillstyle(SOLID_FILL, RED);
    floodfill(320, 240, RED);

    /* Eyes */
    setcolor(WHITE);
    circle(280, 210, 18);
    circle(360, 210, 18);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(280, 210, WHITE);
    floodfill(360, 210, WHITE);

    /* Pupils */
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(285, 215, 7);
    circle(365, 215, 7);
    floodfill(285, 215, BLACK);
    floodfill(365, 215, BLACK);

    /* Angry Eyebrows */
    setcolor(BLACK);
    line(255, 185, 305, 170);  // left eyebrow
    line(335, 170, 385, 185);  // right eyebrow

    /* Nose */
    line(320, 230, 305, 255);
    line(320, 230, 335, 255);
    line(305, 255, 335, 255);

    /* Angry Mouth */
    setlinestyle(SOLID_LINE, 0, 3);
    arc(320, 285, 20, 160, 40);

    /* Text */
    setcolor(WHITE);
    outtextxy(280, 420, "ANGRY FACE");

    getch();
    closegraph();
}
