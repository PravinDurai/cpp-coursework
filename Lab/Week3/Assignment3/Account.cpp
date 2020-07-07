#include"Account.h"

		Account::Account()
		{
			
		}
		
		Account::Account(int accountNumber, string accountHolderName, float money)
		{
			this->accountNumber=accountNumber;
			this->accountHolderName=accountHolderName;
			this->money=money;
		}
		
		Account::~Account()
		{
			
		}
		
		float Account::getMoney()
		{
			return(money);
		}
		
		int Account::getAccountNumber()
		{
			return(accountNumber);
		}
		
		string Account::getAccountHolderName()
		{
			return(accountHolderName);
		}
		
		void Account::setMoney(float money)
		{
			this->money=money;
		}
		
		void Account::printDetails()
		{
			cout<<"\n\nAccount Number        :\t"<<accountNumber;
			cout<<"\nAccountHolderName     :\t"<<accountHolderName;
			cout<<"\nBalanceAmount		   :\t"<<money;
		}