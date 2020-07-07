#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle:public Shape
{
	private:
		float radius;
	public:
	
		Circle();
		Circle(float);
		
		void setRadius(float);
		float getRadius();
		
		float calculateArea();
		void display();
};

#endif