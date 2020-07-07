#include"Circle.h"

Circle::Circle()
{
	
}

Circle::Circle(float radius)
{
	this->radius=radius;
}


void Circle::setRadius(float radius)
{
	this->radius=radius;
}

float Circle::getRadius()
{
	return(radius);
}

float Circle::calculateArea()
{
	return(3.14*radius*radius);
}

void Circle::display()
{
	cout<<"\n\n-------------------------------------------------------\n";
	cout<<"\n                        CIRCLE                           \n";
	cout<<"\n---------------------------------------------------------\n";
	cout<<"\nRadius              :\t"<<radius;
	cout<<"\nArea (3.14 x r x r) :\t"<<calculateArea();
}