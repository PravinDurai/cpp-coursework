#ifndef SACCOUNT_H
#define SACCOUNT_H

#include"Account.h"
using namespace std;

class Saccount:public Account
{
	private:
		float interest=0.5;
	public:
		
		Saccount();
		Saccount(int,string,float);
		~Saccount();
		
		void withDraw(float amount);
		void depositMoney(float money);
		float calculateInterest();
		float getBalance();
		float getInterest();
		void printDetails();
};

#endif