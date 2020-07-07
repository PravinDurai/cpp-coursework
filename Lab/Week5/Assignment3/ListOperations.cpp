#include"ListOperations.h"


MyList* ListOperations::createNode(int data)
{
	MyList* newNode=new MyList(data);
	return(newNode);
}

MyList* ListOperations::createList(MyList* list, int start, int end)
{
	int number;
	do
	{
		number=rand();
	}while(number%end<start);
	number%=end;
	MyList* newNode=createNode(number);
	
	if(list==NULL)
		list=newNode;
	else
	{
		MyList* tempNode=new MyList();
		tempNode=list;
		while(tempNode->getNext()!=NULL)
		{
			tempNode=tempNode->getNext();
		}
		tempNode->setNext(createNode(number));
	}
	return(list);
}

float ListOperations::findSum(MyList* list)
{
	MyList* temp=new MyList();
	temp=list;
	int sum=0;
	while(temp!=NULL)
	{
		sum+=temp->getData();
		temp=temp->getNext();
	}
	return(sum);
}

void ListOperations::printList(MyList* list, int flag)
{
	MyList* temp=new MyList();
	temp=list;
	if(flag==0)
	{
		cout<<temp->getData()<<" ";
	}
	else
	{
		while(temp!=NULL)
		{
			cout<<"\n"<<temp->getData()<<" ";
			temp=temp->getNext();
		}
	}
}

void ListOperations::getInputs(int& start, int& end, int& count)
{
	cout<<"\n-------------------------------------------------------------------------------\n";
	cout<<"\n   Please enter the range of values from which you wish to create the list\n";
	cout<<"\n-------------------------------------------------------------------------------\n";
	cout<<"\nStarts From        :\t";
	cin>>start; 
	cout<<"\nEnds With          :\t";
	cin>>end;
	cout<<"\nNumber of Elements :\t";
	cin>>count;
}