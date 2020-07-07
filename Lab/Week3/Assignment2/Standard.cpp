#include"Standard.h"

Standard::Standard()
{
	
}

Standard::Standard(float weight)
{
	this->weight=weight;
}

Standard::~Standard()
{
	
}

float Standard::getFee()
{
	return(fee);
}

void Standard::setWeight(float)
{
	this->weight=weight;
}


float Standard::getWeight()
{
	return(weight);
}
		
float Standard::calculateStandardPrice()
{
	return(fee*weight);
}
		
void Standard::displayDetails()
{
	cout<<"\n\n--------------------------------------------------------\n";
	cout<<"\n                         Receipt						 \n";
	cout<<"\n--------------------------------------------------------\n";
	cout<<"\nFee             :\t"<<fee;
	cout<<"\nWeight          :\t"<<weight;
	cout<<"\nStandard Charge  :\t"<<calculateStandardPrice();
}
