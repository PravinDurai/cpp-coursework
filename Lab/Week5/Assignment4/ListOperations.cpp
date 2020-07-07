#include"ListOperations.h"


MyList* ListOperations::createNode(string data)
{
	MyList* newNode=new MyList(data);
	return(newNode);
}

MyList* ListOperations::createList(MyList* list)
{
	char op;
	int i=1;
	string data;
	MyList* tempNode=new MyList();
	do
	{
		MyList* newNode=new MyList();
	
		cout<<"\nEnter the input string for node "<<i<<" :\t";
		i++;
		cin>>data;
		newNode->setData(data);
		
		if(list==NULL)
		{
			list=newNode;
			tempNode=list;
		}
		else
		{
			tempNode->setNext(newNode);
			tempNode=tempNode->getNext();
		}
		
		cout<<"\nDo you wish to continue (Y/N) :\t";
		cin>>op;
		
	}while(op=='Y'||op=='y');
	return(list);
}

MyList* ListOperations::concatList(MyList* list1, MyList* list2)
{
	MyList* temp1=new MyList();
	temp1=list1;
	MyList* temp2=new MyList();
	temp2=list2;
	while(temp1->getNext()!=NULL)
		temp1=temp1->getNext();
	temp1->setNext(temp2);
	return(list1);
}
void ListOperations::printList(MyList* list)
{
	MyList* temp=new MyList();
	temp=list;
	while(temp!=NULL)
	{
		cout<<"\n"<<temp->getData()<<" ";
		temp=temp->getNext();
	}
}