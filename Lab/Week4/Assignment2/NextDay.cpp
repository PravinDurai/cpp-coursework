#include"NextDay.h"

NextDay::NextDay()
{
	
}

NextDay::NextDay(string senderName, string senderAddress, string receiverName, string receiverAddress, float weight) : Standard(senderName, senderAddress, receiverName, receiverAddress, weight)
{
	
}

NextDay::~NextDay()
{
	
}

float NextDay::calculatePrice()
{
	return(getFee()*getWeight()+3.5*getWeight());
}

void NextDay::displayDetails()
{
	cout<<"\n\n\n--------------------------------------------------------\n";
	cout<<"\n                         Receipt						 \n";
	cout<<"\n--------------------------------------------------------\n";
	cout<<"\nSender Name     :\t"<<getSenderName();
	cout<<"\nSender Address  :\t"<<getSenderAddress();
	cout<<"\nReceiver Name   :\t"<<getReceiverName();
	cout<<"\nReceiver Address:\t"<<getReceiverAddress();
	cout<<"\nFee             :\t"<<getFee();
	cout<<"\nWeight          :\t"<<getWeight();
	cout<<"\nTotal Fare for Next Day Delivery (3.5 x "<<getWeight()<< " + standard charge) :\t"<<calculatePrice();
	cout<<"\n(Including the transport cost)";
}