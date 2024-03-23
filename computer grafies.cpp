
#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int gd,gm;
detectgraph(&gd,&gd);
initgraph(&gd,&gd ,"");
char ch;
cout << "Enter a letter: ";
cin >> ch;
switch (ch) {
case 'y':
int gd,gm;
detectgraph(&gd,&gd);
initgraph(&gd,&gd ,"");
setcolor(GREEN);
rectangle(50,50,220,150);
setfillstyle(SOLID_FILL,GREEN);
floodfill(52,51,GREEN);
setcolor(GREEN);
rectangle(40,40,50,300);
setcolor(RED);
circle(130,100,30);
setfillstyle(SOLID_FILL,RED);
floodfill(131,101,RED);
break;
case 'u':
setcolor(RED);
line(60,50,60,160);
line(70,50,70,160);
line(60,160,70,160);
//line(60,50,70,50);
//setfillstyle(SOLID_FILL,WHITE);
// floodfill(20,60,WHITE);
line(70,50,100,30);
line(60,50,30,30);
ellipse(65,30,0,180,35,20);
setfillstyle(SOLID_FILL,RED);
floodfill(65,75,RED);
break;
case 'i':
setcolor(RED);
line(50,70,150,70);
line(50,70,20,100);
line(150,70,180,100);
line(20,100,180,100);
line(20,100,20,150);
line(180,100,180,150);
line(70,100,70,150);
line(130,100,130,150);
line(20,150,180,150);
line(130,150,115,140);
line(180,100,180,150);
line(130,100,115,110);
line(115,110,115,140);
line(70,100,85,110);
line(70,150,85,140);
line(85,140,85,110);
line(70,150,70,160);
line(130,150,130,160);
line(70,160,130,160);
line(80,160,80,180);
line(120,160,120,180);
line(80,180,120,180);
break;
case 'o':
for (int y=200;y>=-40;y--){
setcolor(RED);
circle(200,y,30);
setfillstyle(SOLID_FILL,RED);
floodfill(201,y,RED);
delay(30);
cleardevice();
} break;
case'p':
setcolor(RED);
circle(130,100,30);
setfillstyle(SOLID_FILL,RED);
floodfill(131,101,RED);
break;
default:
cout << "Invalid digit!";
}
getch();
closegraph();
}
