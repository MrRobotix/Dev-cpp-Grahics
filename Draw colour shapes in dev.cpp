#include<graphics.h>
#include<iostream>

using namespace std;
int main()
{
	initwindow(800,800);
	int bcolor=WHITE;
	
	//For Circle
	setfillstyle(SOLID_FILL,YELLOW);
	circle(140,150,80);
	floodfill(140,150,bcolor);
	
	//For Triangle
	setfillstyle(SOLID_FILL,CYAN);
	line(140,290,50,450);
	line(140,290,230,450);
	line(50,450,230,450);
	floodfill(401,110,WHITE);
	
	//For Rectangle
	setfillstyle(SOLID_FILL,RED);
	line(400,100,600,100);
	line(400,100,400,200);
	line(400,200,600,200);
	line(600,100,600,200);
	floodfill(401,110,WHITE);
	
	//For Square
	setfillstyle(SOLID_FILL,BLUE);
	line(400,300,550,300);
	line(400,300,400,450);
	line(550,300,550,450);
	line(400,450,550,450);
	floodfill(401,305,WHITE);
	
	getch();
	return 0;
	
}
