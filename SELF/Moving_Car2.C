
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void full();
void car();
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c://turboc3//bgi");
 full();
 car();
 getch();
 closegraph();
}
void full()
{
 //two line
 line(1,150,800,150);
 line(1,380,800,380);

 //1st mountain
 line(100,70,1,150);
 line(100,70,200,150);

 //2nd mountain
 line(300,70,200,150);
 line(300,70,400,150);

 //3rd mountain
 line(500,70,400,150);
 line(500,70,600,150);

 //void space
 line(600,150,700,1);

 //sun
 ellipse(200,130,20,160,50,50);
}

void car()
{
int i;
for(i=1;i<600;i++)
{
full();
 line(100+i,350,100+i,370);
 line(100+i,350,110+i,350);
 line(110+i,350,130+i,325);
 line(130+i,325,190+i,325);
 line(190+i,325,210+i,350);
 line(210+i,350,240+i,350);
 line(240+i,350,240+i,370);

 //adjust whele
 line(100+i,370,110+i,370);
 line(130+i,370,210+i,370);
 line(230+i,370,240+i,370);

 //middle window
 line(120+i,350,135+i,330);
 line(120+i,350,160+i,350);
 line(160+i,350,160+i,330);
 line(160+i,330,135+i,330);

 //right window
 line(165+i,350,165+i,330);
 line(188+i,330,205+i,350);
 line(165+i,350,205+i,350);
 line(165+i,330,188+i,330);

 circle(120+i,370,10);
 circle(220+i,370,10);

 //right whele
 pieslice(120+i,370,0-i,1-i,10);

 pieslice(120+i,370,90-i,91-i,10);

 pieslice(120+i,370,180-i,181-i,10);

 pieslice(120+i,370,270-i,271-i,10);

 //right whele
 pieslice(220+i,370,0-i,1-i,10);

 pieslice(220+i,370,90-i,91-i,10);

 pieslice(220+i,370,180-i,181-i,10);

 pieslice(220+i,370,270-i,271-i,10);

 delay(15);
 cleardevice();
}

}