#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
	private:
		int baseSalary=0;
		int empId;
		string name;
		string designation;
		float comissionRate;
		float saleAmount;
	
	public:
		
		Employee();
		Employee(int,int,string,float,float);
		~Employee();
		int getBaseSalary();
		int getEmpId();
		string getName();
		string getDesignation();
		void setBaseSalary(int baseSalary);
		void setEmpId(int empId);
		void setName(string name);
		void setSaleAmount(float);
		void setComissionRate(float);
		float calculateIncentives();
		float calculateEarnings();
		
		void displayDetails();
};

#endif