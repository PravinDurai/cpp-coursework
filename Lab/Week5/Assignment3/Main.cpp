#include"ListOperations.h"

int main()
{
	int start;
	int end;
	int count;
	MyList* list=NULL;
	
	ListOperations* lOperations=new ListOperations();
	
	system("CLS");
	
	//Getting the inputs for range and the number of elements/nodes that has to be createdlOperations-
	lOperations->getInputs(start, end, count);
	
	cout<<"\nStart Value :\t"<<start<<"\nStop  Value :\t"<<end<<"\nCount Value :\t"<<count;
	
	//Creating the List based on the input range and count
	for(int i=1;i<=count;i++)
		list=lOperations->createList(list, start, end);
	
	//Print all the nodes using 1 mode
	lOperations->printList(list,1);
	
	cout<<"\n\n-------------------------------------------------------------------------------\n";
	cout<<"\nSUM     : \t"<<lOperations->findSum(list);
	cout<<"\nAVERAGE : \t"<<(lOperations->findSum(list)/count);
	cout<<"\n\n-------------------------------------------------------------------------------\n";
	
}