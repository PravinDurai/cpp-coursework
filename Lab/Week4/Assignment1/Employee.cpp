#include"Employee.h"

		Employee::Employee()
		{
			
		}
		
		Employee::Employee(int baseSalary,int empId,string name,float comissionRate,float saleAmount)
		{
			setBaseSalary(baseSalary);
			this->empId=empId;
			this->name=name;
			this->comissionRate=comissionRate;
			this->saleAmount=saleAmount;
		}
		
		Employee::~Employee()
		{
			
		}
		
		int Employee::getBaseSalary()
		{
			return(baseSalary);
		}
		
		int Employee::getEmpId()
		{
			return(empId);
		}
		
		string Employee::getName()
		{
			return(name);
		}
		
		string Employee::getDesignation()
		{
			return(designation);
		}
		
		void Employee::setBaseSalary(int baseSalary)
		{
			this->baseSalary=baseSalary;
			if(baseSalary>0)
				designation="Senior Employee";
			else
				designation="Associate";
		}
		
		void Employee::setEmpId(int empId)
		{
			this->empId=empId;
		}
		
		void Employee::setName(string name)
		{
			this->name=name;
		}
		
		void Employee::setSaleAmount(float saleAmount)
		{
			this->saleAmount=saleAmount;
		}
		
		void Employee::setComissionRate(float comissionRate)
		{
			this->comissionRate=comissionRate;
		}
		
		float Employee::calculateIncentives()
		{
			return((comissionRate/100)*saleAmount);
		}
		
		float Employee::calculateEarnings()
		{
			return(baseSalary+calculateIncentives());
		}
		
		void Employee::displayDetails()
		{
			cout<<"\nEmployee ID    :\t"<<empId;
			cout<<"\nDesignation    :\t"<<designation;
			cout<<"\nEmployee Name  :\t"<<name;
			cout<<"\nBase Salary    :\t"<<baseSalary;
			cout<<"\nComission Rate :\t"<<comissionRate;
			cout<<"\nSale Amount    :\t"<<saleAmount;
			cout<<"\nIncentive      :\t"<<calculateIncentives();
			cout<<"\nEarnings       :\t"<<calculateEarnings();
		}