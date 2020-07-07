#ifndef LIST_TEMPLATE_H
#define LIST_TEMPLATE_H

#include<iostream>
#include<string.h>

using namespace std;

class ListTemplate
{
	private:
		char c;
		ListTemplate* next=NULL;
	public:
	
		ListTemplate();
		ListTemplate(char c);
		~ListTemplate();
		void setValue(char c);
		char getValue();
		void setNext(ListTemplate*);
		ListTemplate* getNext();
		char display();
};
#endif