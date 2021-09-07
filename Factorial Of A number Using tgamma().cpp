#include<stdio.h>
int factof(int n)
{
	int fact=1,i;
	if(n==0)
	return 1;
	else
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int n;
	printf("Enter a nUmber:");
	scanf("%d",&n);
	if(n<0)
	printf("Invalid output");
	else
	printf("Factorial of the number %d is %d",n,factof(n));
	
	return 0;
}
