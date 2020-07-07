#include"NextDay.h"

NextDay::NextDay()
{
	
}

NextDay::NextDay(float weight) : Standard(weight)
{
	
}

NextDay::~NextDay()
{
	
}

float NextDay::calculateNextDayPrice()
{
	return(Standard::calculateStandardPrice()+3.5*getWeight());
}

void NextDay::displayDetails()
{
	Standard::displayDetails();
	cout<<"\nTotal Fare for Next Day Delivery (3.5 x "<<getWeight()<< " + standard charge) :\t"<<calculateNextDayPrice();
	cout<<"\n(Including the transport cost)";
}