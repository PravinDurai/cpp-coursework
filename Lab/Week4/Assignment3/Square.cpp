#include"Square.h"

Square::Square()
{
	
}

Square::Square(float side)
{
	this->side=side;
}


void Square::setSide(float side)
{
	this->side=side;
}

float Square::getSide()
{
	return(side);
}

float Square::calculateArea()
{
	return(side*side);
}

void Square::display()
{
	cout<<"\n\n-------------------------------------------------------\n";
	cout<<"\n                          SQUARE                         \n";
	cout<<"\n---------------------------------------------------------\n";
	cout<<"\nSide                :\t"<<side;
	cout<<"\nArea (side x side)  :\t"<<calculateArea();
}