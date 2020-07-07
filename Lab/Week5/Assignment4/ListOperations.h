#ifndef LIST_OPERATIONS_H
#define LIST_OPERATIONS_H

#include"MyList.h"
#include<math.h>
#include<chrono>

class ListOperations:public MyList
{
	public:
		//Create a new Node
		MyList* createNode(string);
		//Create List with 10 random integers from 0-100(Here we specify the starting value, ending value)
		MyList* createList(MyList*);
		//Prints the entire list
		void printList(MyList*);
		//Concat List 2 contents to List 1
		MyList* concatList(MyList*, MyList*);
};

#endif