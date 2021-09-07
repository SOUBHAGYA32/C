#include<stdio.h>
int main()
{
	int n=10,k=5;
	int num;
	printf("Input Value:");
	scanf("%d",&num);
	if(num>=1 && num<=5)
	{
		printf("NUMBER OF CANDIES SOLD: %d\n",num);
		printf("NUMBER OF CANDIES AVAILABLE: %d",n-num);
	}
	else
	{
		printf("INVALID INPUT \n");
		printf("NUMBER OF CANDIES LEFT: %d",n);
	}
	return 0;
}
