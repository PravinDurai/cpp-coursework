#include"TwoDay.h"

TwoDay::TwoDay()
{
	
}

TwoDay::TwoDay(string senderName, string senderAddress, string receiverName, string receiverAddress, float weight) : Standard(senderName, senderAddress, receiverName, receiverAddress, weight)
{
	
}

TwoDay::~TwoDay()
{
	
}

float TwoDay::calculatePrice()
{
	return(getFee()*getWeight()+4);
}

void TwoDay::displayDetails()
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
	cout<<"\nTotal Fare for Two Day Delivery (standard charge + 4) :\t"<<calculatePrice();
	cout<<"\n(Including the transport cost)";
}