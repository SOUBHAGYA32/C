#include<stdio.h>
#define pi 3.141
int main()
{
	int r;
	float area;
	printf("Enter a radious of the circle:");
	scanf("%d",&r);
	area=pi*r*r;
	printf("Area of the Circle is  %d %f:",r,area);
	return 0;
}
