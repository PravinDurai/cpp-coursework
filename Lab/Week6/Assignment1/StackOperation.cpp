#include"StackOperation.h"

ListTemplate* StackOperation::createNode()
{
	ListTemplate* node=new ListTemplate();
	return(node);
}
	
ListTemplate* StackOperation::insertLast(ListTemplate* node,char c)
{
	try
	{
		if(node!=NULL)
		{
			ListTemplate* temp=new ListTemplate();
			temp=node;
			while(temp->getNext()!=NULL)
			{
				temp=temp->getNext();
			}	
			temp->setNext(createNode());
			temp->getNext()->setValue(c);
		}
		else
		{
			node=createNode();
			node->setValue(c);
		}
	}
	catch(const char* msg)
	{
		cout<<"Caught in Exception inside Class :\tStackOperation\tMethod :\tInsertLast\nAnd the exception is :\t"<<msg;
	}
	return(node);
	
}
	
ListTemplate* StackOperation::deleteLastNode(ListTemplate* node)
{
	ListTemplate* temp=new ListTemplate();
	char c;
	temp=node;
	ListTemplate* prevNode=new ListTemplate();
	if(temp->getNext()!=NULL)
	{
		while(temp->getNext()!=NULL)
		{
			prevNode=temp;
			c=temp->getNext()->getValue();
			temp=temp->getNext();
		}
		prevNode->setNext(NULL);
		
	}
	else
	{
		c=temp->getValue();
		temp=NULL;
	}
	cout<<"\nValue Deleted is :\t"<<c;
	return(node);
}

void StackOperation::displayAll(ListTemplate* node)
{
	ListTemplate* temp=new ListTemplate();
	temp=node;
	while(temp!=NULL)
	{
		temp->display();
		temp=temp->getNext();
	}
}