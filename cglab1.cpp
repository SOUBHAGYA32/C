#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd, &gm, (char*)"");
	line(50,50,400,50);
	line(400,50,400,400);
	line(400,400,50,400);
	circle(225,225,175);
	
	getch();
	closegraph();
	return 0;
}
