#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
	private:
		int empId;
		string name;
		string designation;
		
		
	public:
		
		Employee();
		Employee(int,string);
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