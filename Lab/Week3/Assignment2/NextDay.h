#ifndef NEXTDAY_H
#define NEXTDAY_H

#include"Standard.h"

class NextDay : public Standard
{
	public:
		NextDay();
		NextDay(float);
		~NextDay();
		
		float calculateNextDayPrice();
		void displayDetails();
	
};
#endif