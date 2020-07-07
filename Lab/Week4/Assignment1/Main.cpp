#include<iostream>
#include<string.h>
#include"Employee.h"

using namespace std;

int main()
{
	Employee* emp=new Employee(1000,1540,"Pravin",11.5,22700.35);
	emp->displayDetails();
	char opt;
	int baseSalary;
	int empId;
	string name;
	float comissionRate;
	float saleAmount;
	do
	{
		cout<<"\nDo you wish to try with your own custom Input (Y/N)\n";
		cin>>opt;
		if(opt=='Y'||opt=='y')
		{
			system("CLS");
			cout<<"\nEnter Employee Id :\t";
			cin>>empId;
			emp->setEmpId(empId);
			cout<<"\nEnter Employee Name :\t";
			cin>>name;
			emp->setName(name);
			cout<<"\nEnter Base Salary :\t";
			cin>>baseSalary;
			emp->setBaseSalary(baseSalary);
			cout<<"\nEnter Sales Amount :\t";
			cin>>saleAmount;
			emp->setSaleAmount(saleAmount);
			cout<<"\nEnter Comission Rate :\t";
			cin>>comissionRate;
			emp->setComissionRate(comissionRate);
			emp->displayDetails();
			cout<<"\n\n";
		}
	}while(opt=='Y'||opt=='y');
	return(0);
}