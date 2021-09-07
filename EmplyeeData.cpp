/*C++ program to input and display the employee information with department
and print information using hierachical inheritance*/

#include<iostream>
using namespace std;

class employee{
	protected:
		char name[50];
		int empId;
		char gender[20];
	public:
		void inputBasicInfo()
		{
			cout<<"Enter Employee Name:"<<endl;
			cin>>name;
			cout<<"Enter Emp. ID:"<<endl;
			getchar();
			cin>>empId;
			cout<<"Gender:"<<endl;
			getchar();
			cin>>gender;
		}
		void displayInfo()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"ID:"<<empId<<endl;
			cout<<"Gender:"<<gender<<endl;
		}
};
class deptInfo:private employee{
	protected:
		char deptName[50];
		char workType[50];
		int time;
	public:
		void inputDeptInfo()
		{
			cout<<"Enter Department Name:"<<endl;
			getchar();
			cin>>deptName;
			cout<<"Enter Work Type:"<<endl;
			getchar();
			cin>>workType;
			cout<<"Enter Time in Hours:"<<endl;
			cin>>time;
		}
		void displayDeptInfo()
		{
			cout<<"Department Name:"<<deptName<<endl;
			cout<<"Work Type:"<<workType<<endl;
			cout<<"Time in Hours:"<<time<<endl;
		}
};
class loaninfo:private employee{
	protected:
		char loanDetails[30];
		int amount;
	public:
		void inputLoanInfo()
		{
			cout<<"Enter Loan Details:"<<endl;
			getchar();
			cin>>loanDetails;
			cout<<"Enter Ammount:"<<endl;
			cin>>amount;
		}
		void displayLoanInfo()
		{
			cout<<"Loan Details:"<<loanDetails<<endl;
			cout<<"Loan Ammount:"<<amount<<"/-"<<endl;
		}
};
int main()
{
	employee r;
	r.inputBasicInfo();
	//read and print Departmet Info
	deptInfo r1;
	r1.inputDeptInfo();
	//read and display loan Info.
	loaninfo r2;
	r2.inputLoanInfo();
	
	cout<<endl<<endl;
	
	r.displayInfo();
	r1.displayDeptInfo();
	r2.displayLoanInfo();
	return 0;
}
