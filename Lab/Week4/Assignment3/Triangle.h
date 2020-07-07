#ifndef TRIANGLE_H
#define TRIANGLE_H

#include"Shape.h"

class Triangle:public Shape
{
	private:
		float base;
		float height;
	public:
	
		Triangle();
		Triangle(float, float);
		
		void setBase(float);
		float getBase();
		void setHeight(float);
		float getHeight();
		
		float calculateArea();
		void display();
};

#endif