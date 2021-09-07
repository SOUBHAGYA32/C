//Program to demonstrate  e.g of tellg() and tellp() functions
#include<iostream>
#include<fstream>
using namespace std;
	int main()
	{
		fstream f;
		//open file ABC.TXT in and write mode
		f.open("ABC.txt",ios::out);
		f<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ";// write
		//print the position
		cout<<"Current Position is:"<<f.tellp()<<endl;
		f.close();
		
		//Again open file in read mode
		f.open("ABC.txt",ios::in);
		cout<<"After opening file position is:"<<f.tellg()<<endl;
		
		//read the characters untill end of file is not found
		char ch;
		while(!f.eof())
		{
			cout<<"At position:"<<f.tellg();//current position
			f>>ch;//read char from file
			cout<<"Character \""<<ch<<"\""<<endl;
		}
		f.close();
		return 0;
	}
