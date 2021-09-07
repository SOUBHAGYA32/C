#include<stdio.h>
#include<stdlib.h>
void mergeSort(int ar[], int l, int r)
{
	int mid=0;
  	if(l<r)
	{
		mid=(l+r)/2;
		mergeSort(ar,l,m);
		mergeSort(ar,m+1,r);
		mergeArray(ar,l,mid,r);
		
	}
}
void mergeArray(int ar[], int l, int mid, int r)
{
	int nl,nr,i,j;
	n1=mid-l+1;
	nr=r-mid;
	int L[n1],R[n2];
	for(i=0;i<=nl;i++)
	{
		L[i]=ar[l+i];
	}
	for(i=0;i<=nr;i++0)
	{
		R[i]=ar[mid+l+i];
	}
	i=0
}
