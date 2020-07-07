#ifndef TWODAY_H
#define TWODAY_H

#include"Standard.h"

class TwoDay : public Standard
{
	public:
		TwoDay();
		TwoDay(string,string,string,string,float);
		~TwoDay();
		
		float calculatePrice();
		void displayDetails();
	
};
#endif