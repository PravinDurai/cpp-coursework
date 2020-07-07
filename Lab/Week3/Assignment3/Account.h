#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
#include<string.h>

using namespace std;

class Account
{
	private:
		int accountNumber;
		string accountHolderName;
		float money;
	public:
		 
		Account();
		Account(int, string, float);
		~Account();
		
		float getMoney();
		int getAccountNumber();
		string getAccountHolderName();
		
		void setMoney(float);
		
		void printDetails();
	
};
#endif