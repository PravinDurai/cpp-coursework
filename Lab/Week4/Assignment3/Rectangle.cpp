#include"Rectangle.h"

Rectangle::Rectangle()
{
	
}

Rectangle::Rectangle(float length, float breath):Square(length)
{
	this->breath=breath;
}

void Rectangle::setBreath(float breath)
{
	this->breath=breath;
}

float Rectangle::getBreath()
{
	return(breath);
}

float Rectangle::calculateArea()
{
	return(3.14*getSide()*breath);
}

void Rectangle::display()
{
	cout<<"\n\n-------------------------------------------------------\n";
	cout<<"\n                        RECTANGLE                        \n";
	cout<<"\n---------------------------------------------------------\n";
	cout<<"\nLength                          :\t"<<getSide();
	cout<<"\nBreath                          :\t"<<breath;
	cout<<"\nArea (3.14 x length x breath)   :\t"<<calculateArea();
}