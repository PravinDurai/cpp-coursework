#ifndef CACCOUNT_H
#define CACCOUNT_H

#include"Account.h"

class Caccount:public Account
{
	public:
		Caccount();
		
		Caccount(int,string,float);
		
		~Caccount();
		
		void withDraw(float amount);
		void depositMoney(float money);
		float getBalance();
		void printDetails();
};

#endif