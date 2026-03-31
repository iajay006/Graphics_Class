#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1416

int main()
{
    int gd = DETECT, gm;

    int x1, y1, x2, y2, x3, y3;
    int rx1, ry1, rx2, ry2, rx3, ry3;
    int cx, cy;
    float angle;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    if (graphresult() != grOk)
    {
        printf("Graphics Error!");
        getch();
        return 0;
    }

    // Triangle points
    x1 = 200; y1 = 200;
    x2 = 250; y2 = 100;
    x3 = 300; y3 = 200;

    cx = 200;
    cy = 200;

    // Draw original triangle
    setcolor(WHITE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Input angle
    printf("Enter angle (in degrees): ");
    scanf("%f", &angle);

    angle = angle * PI / 180;

    // Rotation
    rx1 = cx + (x1 - cx)*cos(angle) - (y1 - cy)*sin(angle);
    ry1 = cy + (x1 - cx)*sin(angle) + (y1 - cy)*cos(angle);

    rx2 = cx + (x2 - cx)*cos(angle) - (y2 - cy)*sin(angle);
    ry2 = cy + (x2 - cx)*sin(angle) + (y2 - cy)*cos(angle);

    rx3 = cx + (x3 - cx)*cos(angle) - (y3 - cy)*sin(angle);
    ry3 = cy + (x3 - cx)*sin(angle) + (y3 - cy)*cos(angle);

    // Draw rotated triangle
    setcolor(GREEN);
    line(rx1, ry1, rx2, ry2);
    line(rx2, ry2, rx3, ry3);
    line(rx3, ry3, rx1, ry1);

    // 🔴 IMPORTANT: Hold screen properly
    outtextxy(10, 20, "Press any key to exit...");
    
    while (!kbhit());   // wait until key pressed
    getch();            // consume key

    closegraph();
    return 0;
}
