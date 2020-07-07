#ifndef STANDARD_H
#define STANDARD_H

#include<iostream>

using namespace std;

class Standard
{
	private:
		string senderName;
		string receiverName;
		string senderAddress;
		string receiverAddress;
		float fee=2.6;
		float weight;
	public:
		Standard();
		Standard(string, string, string, string, float);
		~Standard();
		
		float getFee();
		void setWeight(float);
		float getWeight();
		void setSenderName(string);
		string getSenderName();
		void setSenderAddress(string);
		string getSenderAddress();
		void setReceiverName(string);
		string getReceiverName();
		void setReceiverAddress(string);
		string getReceiverAddress();
		
		virtual float calculatePrice()=0;
		virtual void displayDetails()=0;
};

#endif