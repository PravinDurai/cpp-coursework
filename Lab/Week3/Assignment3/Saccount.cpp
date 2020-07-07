#include"Saccount.h"

		Saccount::Saccount()
		{
			
		}
		
		Saccount::Saccount(int accountNumber,string accountHolderName,float money):Account(accountNumber,accountHolderName,money)
		{
			
		}
		
		Saccount::~Saccount()
		{
			
		}
		
		void Saccount::withDraw(float amount)
		{
			if((Account::getMoney()-amount)>0)
				Account::setMoney(Account::getMoney()-amount);
			else
				cout<<"\nThe amount that you are trying to withdraw is more than your Balance...\nUnfortunately your Account is Saving account so there is no overdraft allowed\nYour Current balance is :\t"<<Account::getMoney();
		}
		
		void Saccount::depositMoney(float money)
		{
			Account::setMoney(getMoney()+money);
		}
		
		float Saccount::calculateInterest()
		{
			return(Account::getMoney()*interest);
		}
		
		float Saccount::getInterest()
		{
			return(interest);
		}
		
		void Saccount::printDetails()
		{
			float interest=calculateInterest();
			float money=Account::getMoney();
			Account::printDetails();
			cout<<"\nInterest    ("<<money<<" x 0.5"<<") :\t"<<interest;
			cout<<"\nTotal Balance is :\t"<<interest+money;
		}
		
		float Saccount::getBalance()
		{
			return(getMoney());
		}