/*Create a class of EMPLOYEE That has data members such as ID,Name
Designation and Salary.Create 10 Employee records,write them into a file,
read back the records and display it into the Screen -2017 BPUT*/


#include<iostream>
#include<fstream>
using namespace std;
 //Class of EMPLOYEE
 class EMPLOYEE
 {
 	int id;
 	char name[50];
 	char desig[50];
 	float salary;
 	public:
 		EMPLOYEE() { }
 		void getData();
 		void display();
};
void EMPLOYEE::getData()
{
	cout<<"Enter Employee ID:"<<endl;
	cin>>id;
	cout<<"Enter Employee Name:"<<endl;
	getchar();
	cin>>name;
	cout<<"Enter Employee Designation:"<<endl;
	getchar();
	cin>>desig;
	cout<<"Enter Salary:"<<endl;
	cin>>salary;
}
void EMPLOYEE::display()
{
	cout<<"\n ID:"<<id<<endl;
	cout<<"\n NAME:"<<name<<endl;
	cout<<"\n DESIGNATION:"<<desig<<endl;
	cout<<"\n SALARY:"<<salary<<endl;
}
int main()
{
	EMPLOYEE emp[10];
	fstream file;
	int i;
	file.open("empdata.txt",ios::out);
	cout<<"\n Writing Employee Information to the file:-"<<endl;
	cout<<"\n Enter 10 Employees Details to the file:"<<endl;
	for(i=0;i<10;i++)
	{
		emp[i].getData();
		file.write((char*)&emp[i],sizeof(emp[i]));
	}
	file.close();
	file.open("empdata.txt",ios::in);
	cout<<"\n Reading Employee Information to the File:"<<endl;
	for(i=0;i<10;i++)
	{
		file.read((char*)&emp[i], sizeof(emp[i]));
		emp[i].display();
	}
	file.close();
	return 0;
}

