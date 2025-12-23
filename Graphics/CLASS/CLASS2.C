#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Draw a triangle
     line(300, 250, 440, 250);
     line(300, 250, 320, 180);
     line(320, 180, 440, 250);
    circle(210,200,50);

     line(300, 350, 440, 350);

     line(170, 300, 260, 300);
     line(170, 400, 260, 400);
     line(170, 300, 170, 400);
     line(260, 300, 260, 400);



    //ellipse(320,210,0,360,150,80);
    // Wait for key press
    getch();

    // Close graphics mode
    closegraph();
}