#include"Oval.h"

Oval::Oval()
{
	
}

Oval::Oval(float majorAxis, float minorAxis)
{
	this->majorAxis=majorAxis;
	this->minorAxis=minorAxis;
}


void Oval::setMajorAxis(float majorAxis)
{
	this->majorAxis=majorAxis;
}

float Oval::getMajorAxis()
{
	return(majorAxis);
}

void Oval::setMinorAxis(float minorAxis)
{
	this->minorAxis=minorAxis;
}

float Oval::getMinorAxis()
{
	return(minorAxis);
}

float Oval::calculateArea()
{
	return(3.14*majorAxis*minorAxis);
}

void Oval::display()
{
	cout<<"\n\n-------------------------------------------------------\n";
	cout<<"\n                            OVAL                         \n";
	cout<<"\n---------------------------------------------------------\n";
	cout<<"\nMajor Axis                          :\t"<<majorAxis;
	cout<<"\nMinor Axis                          :\t"<<minorAxis;
	cout<<"\nArea (3.14 x majorAxis x minorAxis) :\t"<<calculateArea();
}