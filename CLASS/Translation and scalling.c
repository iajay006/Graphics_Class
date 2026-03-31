#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3;
    int tx, ty;
    float sx, sy;

    // Declare variables (Turbo C style)
    int tx1, ty1, tx2, ty2, tx3, ty3;
    int sx1, sy1, sx2, sy2, sx3, sy3;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // -------- Input Section --------

    x1=200;
    y1=100;
    x2=250;
    y2=50;
    x3=300;
    y3=100;

    /*
    printf("Enter coordinates of triangle:\n");

    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter y1: ");
    scanf("%d", &y1);

    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter y2: ");
    scanf("%d", &y2);

    printf("Enter x3: ");
    scanf("%d", &x3);
    printf("Enter y3: ");
    scanf("%d", &y3);

    */

    // -------- Draw Original Triangle --------
    setcolor(WHITE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // -------- Translation --------
    printf("\n--- Translation ---\n");
    printf("Enter tx: ");
    scanf("%d", &tx);
    printf("Enter ty: ");
    scanf("%d", &ty);

    tx1 = x1 + tx;
    ty1 = y1 + ty;
    tx2 = x2 + tx;
    ty2 = y2 + ty;
    tx3 = x3 + tx;
    ty3 = y3 + ty;

    setcolor(GREEN);
    line(tx1, ty1, tx2, ty2);
    line(tx2, ty2, tx3, ty3);
    line(tx3, ty3, tx1, ty1);

    // -------- Scaling --------
    printf("\n--- Scaling ---\n");
    printf("Enter sx: ");
    scanf("%f", &sx);
    printf("Enter sy: ");
    scanf("%f", &sy);

    sx1 = x1 * sx;
    sy1 = y1 * sy;
    sx2 = x2 * sx;
    sy2 = y2 * sy;
    sx3 = x3 * sx;
    sy3 = y3 * sy;

    setcolor(RED);
    line(sx1, sy1, sx2, sy2);
    line(sx2, sy2, sx3, sy3);
    line(sx3, sy3, sx1, sy1);

    getch();
    closegraph();
    return 0;
}
