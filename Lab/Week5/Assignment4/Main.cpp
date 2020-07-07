#include"ListOperations.h"

int main()
{
	MyList* list1=NULL;
	MyList* list2=NULL;
	//Create List 1
	ListOperations* lOperation=new ListOperations();
	list1=lOperation->createList(list1);
	//Display List 1
	cout<<"\n\nList 1";
	lOperation->printList(list1);
	//Create List 2
	list2=lOperation->createList(list2);
	//Display List 2
	cout<<"\n\nList 2";
	lOperation->printList(list2);
	//Concat List 2 into List 1
	list1=lOperation->concatList(list1, list2);
	//Display List 1
	cout<<"\n\nList 1 After Concat";
	lOperation->printList(list1);
	//Display List 2
	cout<<"\n\nList 2 After Concat";
	lOperation->printList(list2);
	//Note :
	//In this code we have just concatinated both the list. But still List 2 and List 1 concatinated contents
	//share the same memory, So if we make any changes in the list 2 then list 1 contents should also change.
	
}