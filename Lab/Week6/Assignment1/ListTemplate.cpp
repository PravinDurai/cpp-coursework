#include"ListTemplate.h"

ListTemplate::ListTemplate()
{
	
}

ListTemplate::ListTemplate(char c)
{
	this->c=c;
}

ListTemplate::~ListTemplate()
{
	
}

void ListTemplate::setValue(char c)
{
	this->c=c;
}

char ListTemplate::getValue()
{
	return(c);
}

void ListTemplate::setNext(ListTemplate* next)
{
	this->next=next;
}

ListTemplate* ListTemplate::getNext()
{
	return(next);
}

char ListTemplate::display()
{
	cout<<"\nValue :\t"<<c;
}