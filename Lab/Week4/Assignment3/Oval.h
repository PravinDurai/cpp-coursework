#ifndef OVAL_H
#define OVAL_H

#include"Shape.h"

class Oval:public Shape
{
	private:
		float majorAxis;
		float minorAxis;
	public:
	
		Oval();
		Oval(float, float);
		
		void setMajorAxis(float);
		float getMajorAxis();
		void setMinorAxis(float);
		float getMinorAxis();
		
		float calculateArea();
		void display();
};

#endif