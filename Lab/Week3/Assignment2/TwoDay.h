#ifndef TWODAY_H
#define TWODAY_H

#include"Standard.h"

class TwoDay : public Standard
{
	public:
		TwoDay();
		TwoDay(float);
		~TwoDay();
		
		float calculateTwoDayPrice();
		void displayDetails();
	
};
#endif