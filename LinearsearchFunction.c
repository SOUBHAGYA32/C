//Linear search using Function
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int linearSearch(int *a,int n)
{
	int i,pos=-1;
	for(i=0;i<MAX;i++)
	{
		if(a[i]==n)
		{
			pos=i;
			break;
		}
	}
	return pos;
}
int main()
{
	int i,n,ar[MAX];
	int num;
	int position;
	printf("\n Enter array Elements:\n");
	for(i=0;i<MAX;i++)
		scanf("%d",&ar[i]);
	printf("Now Enter the number to be search:");
	scanf("%d",&num);
	
	//calling linearsearch function
	position=linearSearch(ar,num);
	if(num==-1)
		printf("Element not found.");
	else
		printf("Element found at %d position.\n",position);
	return 0;
}
