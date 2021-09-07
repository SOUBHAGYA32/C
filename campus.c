#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	printf("Enter The Size of the Array:");
	scanf("%d",&n);
	
	//Validation
	if(n<=0){
		printf("Array size should be greater than 0");
		exit(0);
	}
	
	int n1,n2;
	n1 = (n%2==0) ? (n/2) : ((n/2)+1);
	n2 = n - n1;
	
	int arr1[n1];
	int arr2[n2];
	int n3;
	printf("Enter the Values of the Array:");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	//Bubble Sort for Ascending order
	for(i=0;i<n1-1;i++){
		for(j=0;j<n1-i-1;j++){
			if(arr1[j]>arr1[j+1]){
				n3 = arr1[j];
				arr1[j]=arr1[j+1];
				arr1[j+1]=n3;
			}
		}
	}
	//Bubble Sort For Descending Order
	for(i=0;i<n2-1;i++){
		for(j=0;j<n2-i-1;j++){
			if(arr2[j]<arr2[j+1]){
				n3 = arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=n3;
			}
		}
	}
	
	//Displaying Array
	printf("\n");
	for(i=0;i<n1;i++){
		printf("%d\n",arr1[i]);
	}
	for(i=0;i<n2;i++){
		printf("%d\n",arr2[i]);
	}
	
	return 0;
}
