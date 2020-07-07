#include"Caccount.h"


		Caccount::Caccount()
		{
			
		}
		
		Caccount::Caccount(int accountNumber,string accountHolderName,float money):Account(accountNumber,accountHolderName,money)
		{
			
		}
		
		Caccount::~Caccount()
		{
			
		}
		
		void Caccount::withDraw(float amount)
		{
			if(Account::getMoney()-amount>=-100)
				Account::setMoney(getMoney()-amount);
			else
				cout<<"\nI'm Sorry...\nUnfortunately the transaction cannot be processed because with this transaction ytou have exceeded the overdraft limit...\nThe over Draft Limit is 100GBR\nSorry for the inconvinence\nYour current Balance is :\t"<<Account::getMoney();
		}
		
		float Caccount::getBalance()
		{
			return(Account::getMoney());
		}
		
		void Caccount::depositMoney(float money)
		{
			Account::setMoney(getMoney()+money);
			//setMoney(getMoney()+money);
		}
		
		void Caccount::printDetails()
		{
			Account::printDetails();
		}