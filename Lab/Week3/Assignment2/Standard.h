#ifndef STANDARD_H
#define STANDARD_H

#include<iostream>

using namespace std;

class Standard
{
	private:
		float fee=2.6;
		float weight;
	public:
		Standard();
		Standard(float);
		~Standard();
		
		float getFee();
		void setWeight(float);
		float getWeight();
		
		float calculateStandardPrice();
		void displayDetails();
};

#endif