#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    int xc, yc, r;
    int x = 0, y;
    int d;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    printf("Enter x coordinate: ");
    scanf("%d", &xc);

    printf("Enter y coordinate: ");
    scanf("%d", &yc);

    printf("Enter radius: ");
    scanf("%d", &r);

    y = r;
    d = 3 - 2 * r;

    while (x <= y)
    {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);

        if (d < 0)
            d = d + 4 * x + 6;
        else
        {
            d = d + 4 * (x - y) + 10;
            y--;
        }

        x++;
        delay(100);
    }

    getch();
    closegraph();
    return 0;
}