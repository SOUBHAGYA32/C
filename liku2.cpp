#include <iostream>
using namespace std;
int main()
	{
		char*p="hello";
		char*q=p;
		cout<<p<<endl<<q<<endl;
		q="good bye";
		cout<<p<<endl<<q<<endl;
		return 0;
	}
