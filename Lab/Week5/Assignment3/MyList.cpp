#include"MyList.h"

MyList::MyList()
{
	next=NULL;
}

MyList::MyList(int data)
{
	this->data=data;
	next=NULL;
}

MyList::~MyList()
{
	
}

void MyList::setData(int data)
{
	this->data=data;
}

int MyList::getData()
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
