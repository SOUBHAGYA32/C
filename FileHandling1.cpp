#include<iostream>
#include<fstream>
using namespace std;
	int main()
	{
		ofstream fout;
		fout.open("ABC");
		int i;
		cin>>i;
		fout.close();
		
		ifstream fin;
		fin.open("ABC");
		fin>>i;
		cout<<i;
		fin.close();
		return 0;
	}
