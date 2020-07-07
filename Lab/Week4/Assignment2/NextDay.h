#ifndef NEXTDAY_H
#define NEXTDAY_H

#include"Standard.h"

class NextDay : public Standard
{
	public:
		NextDay();
		NextDay(string,string,string,string,float);
		~NextDay();
		
		float calculatePrice();
		void displayDetails();
	
};
#endif