#include<iostream>
#include<cmath>
using namespace std;
long mul(long,long);
long noOfDigit(long,long);

int main()
{
	long num1,num2;
	cout<<"Multipication using Divide and Conquer Approach:"<<endl;
	cout<<"Enter First number:"<<endl;
	cin>>num1;
	cout<<"Enter Second Number:"<<endl;
	cin>>num2;
	cout<<"Multipication Of Two number:"<<num1<<"and"<<num2<<"is"<<mul(num1,num2)<<endl;
}
long mul(long u, long v)
{
	long x,y,w,z;
	long num1,num2,p,q,r;
	num2=noOfDigit(u,v);
	if(u==0 || v==0)
	{
		return 0;
	}
	else if(num2<=2)
	{
		return(u*v);
	}
	else
	{
		num1=floor(num2/2);
		w=u/pow(10,num1);
		x=u%(int)pow(10,num1);
		y=v/pow(10,num1);
		z=v%(int)pow(10,num1);
		
		p=mul(w,y);
		q=mul(x,z);
		r=mul(w+x,y+z);
		
		return p*pow(10,2*num1)+(r-p-q)*pow(10,num1)+q;
		
	}
}
long noOfDigit(long num1,long num2)
{
	long max;
	int b=0;
	if(num1>=num2)
	{
		max=num1;
	}
	else
	{
		max=num2;
	
	}
	while(max>0)
	{
		max=max/10;
		b++;
	}
	return b;
}
