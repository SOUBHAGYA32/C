#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd, &gm, (char*)"");
	int x=250;
	int y=250;
	int radius=100;
	circle(x,y,radius);
	getch();
	closegraph();
	return 0;
}
