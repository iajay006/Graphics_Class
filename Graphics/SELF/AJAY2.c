#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics */
   initgraph(&gdriver, &gmode, "C:\\tc\\bgi");

   /* check for errors */
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   /* draw a circle at center of screen */
   circle(getmaxx() / 2, getmaxy() / 2, 100);

   /* wait and close */
   getch();
   closegraph();
   return 0;
}
