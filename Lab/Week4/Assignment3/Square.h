#ifndef SQUARE_H
#define SQUARE_H
#include"Shape.h"

class Square:public Shape
{
	private:
		float side;
	public:
	
		Square();
		Square(float);
		
		void setSide(float);
		float getSide();
		
		float calculateArea();
		void display();
};

#endif