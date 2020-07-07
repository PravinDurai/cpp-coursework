#include"Triangle.h"

Triangle::Triangle()
{
	
}

Triangle::Triangle(float base, float height)
{
	this->base=base;
	this->height=height;
}

void Triangle::setBase(float base)
{
	this->base=base;
}

float Triangle::getBase()
{
	return(base);
}

void Triangle::setHeight(float height)
{
	this->height=height;
}

float Triangle::getHeight()
{
	return(height);
}

float Triangle::calculateArea()
{
	return(0.5*base*height);
}

void Triangle::display()
{
	cout<<"\n\n-------------------------------------------------------\n";
	cout<<"\n                        TRIANGLE                         \n";
	cout<<"\n---------------------------------------------------------\n";
	cout<<"\nBase                       :\t"<<base;
	cout<<"\nHeight                     :\t"<<height;
	cout<<"\nArea (0.5 x Base x Height) :\t"<<calculateArea();
}