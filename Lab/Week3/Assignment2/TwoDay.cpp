#include"TwoDay.h"

TwoDay::TwoDay()
{
	
}

TwoDay::TwoDay(float weight) : Standard(weight)
{
	
}

TwoDay::~TwoDay()
{
	
}

float TwoDay::calculateTwoDayPrice()
{
	return(Standard::calculateStandardPrice()+4);
}

void TwoDay::displayDetails()
{
	Standard::displayDetails();
	cout<<"\nTotal Fare for Two Day Delivery (standard charge + 4) :\t"<<calculateTwoDayPrice();
	cout<<"\n(Including the transport cost)";
}