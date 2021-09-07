#include<iostream>
#include<fstream>
using namespace std;
	int main()
	{
		ofstream outf("ABC");
		int i;
		cin>>i;
		outf<<i;
		outf.close();
		
		ifstream inf("ABC");
		inf>>i;
		cout<<i;
		inf.close();
		return 0;
	}
