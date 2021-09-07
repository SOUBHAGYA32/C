#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,gcd;
	int i;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	for(i=1;i<=a && i<=b;i++)
	{
		if((a%i==0) && (b%i==0))
		{
			gcd=i;
		}
	}
	printf("\nGcD of %d and %d is %d",a,b,gcd);
	printf("\n");
	return 0;
}
