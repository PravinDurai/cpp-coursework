#include"Standard.h"

Standard::Standard()
{
	
}

Standard::Standard(string senderName, string senderAddress, string receiverName, string receiverAddress, float weight)
{
	this->senderName=senderName;
	this->senderAddress=senderAddress;
	this->receiverName=receiverName;
	this->receiverAddress=receiverAddress;
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

void Standard::setSenderName(string senderName)
{
	this->senderName=senderName;
}


string Standard::getSenderName()
{
	return(senderName);
}

void Standard::setSenderAddress(string senderAddress)
{
	this->senderAddress=senderAddress;
}

string Standard::getSenderAddress()
{
	return(senderAddress);
}

void Standard::setReceiverName(string receiverName)
{
	this->receiverName=receiverName;
}

string Standard::getReceiverName()
{
	return(receiverName);
}

void Standard::setReceiverAddress(string receiverAddress)
{
	this->receiverAddress=receiverAddress;
}

string Standard::getReceiverAddress()
{
	return(receiverAddress);
}