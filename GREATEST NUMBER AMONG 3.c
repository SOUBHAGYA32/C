#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	printf("Enter three Numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a>b) && (a>c))
	{
		printf("A is greater");
		exit(0);
	}
	else if((b>a) && (b>c))
	{
		printf("B is greater:");
		exit(0);
	}
	else {
	
		printf("C is greater:");
		exit(0);
	}
	return 0;
}
