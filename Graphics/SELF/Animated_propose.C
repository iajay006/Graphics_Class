#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
void women();
void man();
void rose(int);
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 man();
 getch();
 closegraph();
}
 void man()
 {
 int i;
 for(i=1;i<=230;i+=2)
 {
 if(i%3==0)
 {
 women();
 //man
 circle(100+i,300,15);
 line(100+i,315,100+i,360);
 //leg
 line(100+i,360,90+i,400);
 line(100+i,360,110+i,400);
 //hand 1
 line(100+i,330,90+i,360);
 //
 line(100+i,330,115+i,340);
 line(115+i,340,130+i,330);
   rose(i);
   setcolor(WHITE);
 }

 else
 {
 women();
 //MAN
 circle(100+i,300,15);
 line(100+i,315,100+i,360);
 //leg
 line(100+i,360,95+i,400);
 line(100+i,360,105+i,400);
  //hand 1
 line(100+i,330,101+i,360);
 //
 line(100+i,330,115+i,340);
 line(115+i,340,130+i,330);
rose(i);
setcolor(WHITE);
 }
 delay(100);
 cleardevice();
 }
 }
void women()
{
   line(1,400,800,400);
 //man
 circle(400,300,15);
 //body
 line(400,315,380,365);
 line(400,315,420,365);

 line(380,365,420,365);
 //legs
 line(390,365,390,400);
 line(410,365,410,400);
 //hand
 line(400,330,380,350);
}
 void rose(int i)
 {
 setcolor(GREEN);
 line(130+i,323,130+i,335);
 setcolor(RED);
 circle(130+i,321,2);
 setfillstyle(1,RED);
 floodfill(130+i,321,RED);
 }