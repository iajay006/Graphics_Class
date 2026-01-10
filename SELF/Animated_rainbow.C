#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
  int gd=DETECT,gm,i,x,y;
  initgraph(&gd,&gm,"c://turboc3//bgi");
  x=getmaxx()/2;
  y=getmaxy()/2;
for(i=0;i<=200;i++)
 {
  setcolor(i/20);
  arc(x,y,0,180,20+i);
  delay(15);
 }
 getch();
 closegraph();
}