/*#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,rev_num;
	printf("Enter a Number:");
	scanf("%d",&num);
	rev_num= reverse_function(num);
	printf("After reverse the no is : %d",rev_num);
	return 0;
}
int sum=0,rem;
reverse_function(int num)
{
	if(num){
		rem=num%10;
		sum=sum*10+rem;
		reverse_function(num/10);
	}
	else
	{
		return sum;
		
	}
} */

#include<stdio.h>
#include<stdlib.h>

int main(){
	int num,rem,reverse_num=0;
	printf("Enter a Number:");
	scanf("%d",&num);
	
	while(num>=1)
	{
		rem=num%10;
		reverse_num= reverse_num*10+rem;
		num=num/10;
	}
	printf("Reverse of input Number is : %d", reverse_num);
	return 0;
}
