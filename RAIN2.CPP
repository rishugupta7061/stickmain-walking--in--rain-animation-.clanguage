#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
int gdriver=DETECT,gmode,x,y,j,i;
initgraph(&gdriver,&gmode, "");
//MAN
for(j=1;j<600;j=j+5)
{
line(0,400,800,400);
circle(30+j,280,20);//HEAD
line(30+j,300,30+j,350);//BODY
line(30+j,330,70+j,330);//hand
if(j%2==0){
line(30+j,350,25+j,400);// left leg
line(30+j,350,10+j,400);//right leg
}
else{
line(30+j,350,35+j,400);
delay(20);
}
//UMBRELLA
line(70+j,250,70+j,330);
pieslice(70+j,250,180,0,80);
//RAIN
for(i=0;i<300;i++)
{
x=random(800);
y=random(800);
outtextxy(x,y,"/");
}
delay(170);
cleardevice();
}
getch();
closegraph();
}














