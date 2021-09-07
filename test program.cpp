//c++ program to print right oriented angled pyramid
#include<iostream>
using namespace std;

int main()
{
	int i,space,rows,k=1;
	cout<<"Enter the number of rows:";
	cin>>rows;
	for(i=0;i<=rows;i++)
	{
		for(space=i;space<rows;space++)
		{
			cout<<"\t";
		}
		for(k=1;k<=i;k++)
		{
			cout<<k<<"\t";
		}
		cout<<"\n";
		
	}
	
	return 0;
}
