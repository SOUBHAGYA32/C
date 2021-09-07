#include<stdio.h>
int main()
{
	int n,rem,evencount=0,oddcount=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	
	while(n>0){
		rem=n%10;
		if(rem%2==0)
		{
			evencount++;
		}
		else
		{
			oddcount++;
		}
		n=n%10;
	}
	printf("Even Count= %d ", evencount);
	printf("Odd count= %d ", oddcount);
	return 0;
}
