#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    int gd = DETECT, gm;
    int steps, i;
    float dx, dy, xInc, yInc, x, y;

    initgraph(&gd, &gm, "C:\\TC\\BGI");


    printf("Enter x1 coordinate: ");
    scanf("%d", &x1);

    printf("Enter y1 coordinate: ");
    scanf("%d", &y1);

    printf("Enter x2 coordinate: ");
    scanf("%d", &x2);
    
    printf("Enter y2 coordinate: ");
    scanf("%d", &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    if (fabs(dx) > fabs(dy))
        steps = fabs(dx);
    else
        steps = fabs(dy);

    xInc = dx / steps;
    yInc = dy / steps;

    x = x1;
    y = y1;

    for (i = 0; i <= steps; i++)
    {
        putpixel((int)x, (int)y, WHITE);
        x += xInc;
        y += yInc;

        delay(100);
    }

    getch();
    closegraph();
    return 0;
}