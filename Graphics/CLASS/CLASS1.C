#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Draw a line
    line(300, 200, 340, 200);
      line(300, 200, 320, 180);
     line(320, 180, 340, 200);
    //line(0, 0, 480, 200);
    circle(320,200,100);
    //circle(320,200,50);
    circle(280,160,20);
    circle(360,160,20);





    //ellipse(320,210,0,360,150,80);
    // Wait for key press
    getch();

    // Close graphics mode
    closegraph();
}