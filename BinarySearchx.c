#include<stdio.h>
int main()
{
	int i,first,last,mid,search,n,arr[100];
	printf("Enter the Number of Elements:");
	scanf("%d",&n);
	printf("Enter %d Elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	 printf("Enter The search Element:");
	 scanf("%d",&search);
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(arr[mid]<search)
		{
			first=mid+1;
		}
		else if(arr[mid]==search){
			printf("%d is found in %d location",search,mid+1);
			break;
		}
		else{
			last=mid-1;
			mid=(first+last)/2;
		}
		
	}
	if(first>last){
		printf("%d is not present in the list \n",search);
	}
	return 0;
}
