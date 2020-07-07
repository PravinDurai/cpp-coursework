#include"MyList.h"

MyList::MyList()
{
	next=NULL;
}

MyList::MyList(string data)
{
	this->data=data;
	next=NULL;
}

MyList::~MyList()
{
	
}

void MyList::setData(string data)
{
	this->data=data;
}

string MyList::getData()
{
	return(data);
}

void MyList::setNext(MyList* next)
{
	this->next=next;
}


MyList* MyList::getNext()
{
	return(next);
}
