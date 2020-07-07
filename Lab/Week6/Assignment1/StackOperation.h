#ifndef STACK_OPERATION_H
#define STACK_OPERATION_H

#include"List.h"
#include"ListTemplate.h"

class StackOperation:public ListTemplate,public List
{
	public:
		ListTemplate* createNode();
	
		ListTemplate* insertLast(ListTemplate*,char c);
	
		ListTemplate* deleteLastNode(ListTemplate*);
	
		void displayAll(ListTemplate*);
};
#endif