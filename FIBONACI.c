#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count,first_term=0,second_term=1,next_term,i;
	printf("Enter the Number of Terms:");
	scanf("%d",&count);
	printf("First %d terms of Fibonacci Series:",count);
	for(i=0;i<count;i++)
	{
		if(i<=1)
			next_term=i;
		else
		{
			next_term=first_term+second_term;
			first_term=second_term;
			second_term=next_term;
		}
		printf(" %d ",next_term);
	}
	return 0;
}
