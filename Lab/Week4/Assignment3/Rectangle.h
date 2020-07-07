#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Square.h"

class Rectangle:public Square
{
	private:
		float breath;
	public:
	
		Rectangle();
		Rectangle(float, float);
		
		void setBreath(float);
		float getBreath();
		
		float calculateArea();
		void display();
};

#endif