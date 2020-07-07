#ifndef LIST_OPERATIONS_H
#define LIST_OPERATIONS_H

#include"MyList.h"
#include<math.h>
#include<chrono>

class ListOperations:public MyList
{
	public:
		void getInputs(int&, int&, int&);
		//Create a new Node
		MyList* createNode(int);
		//Create List with 10 random integers from 0-100(Here we specify the starting value, ending value)
		MyList* createList(MyList*, int, int);
		//Insert Node (since there is no condition given where we have to inser we are inserting the elements at last
		void insertLast();
		//Prints the entire list, The int (second argument determines whether to print the entire node or just one node.
		void printList(MyList*, int);
		//Find sum of all the nodes
		float findSum(MyList*);
		
};

#endif