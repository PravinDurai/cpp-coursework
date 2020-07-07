#ifndef LIST_H
#define LIST_H

#include"ListTemplate.h"
#include<iostream>
#include<string.h>

using namespace std;

class List
{
	public:
		virtual ListTemplate* createNode()=0;
		ListTemplate* insertLast(ListTemplate*,char c);
		//bool insertFront(ListTemplate*);
		ListTemplate* deleteLastNode(ListTemplate*);
		//ListTemplate* deleteFrontNode(ListTemplate*);
	
		//Used to find whether a value is present or not
		//Also the last to pointer are used to store the value of the previous and the next node of the node that contains the value
		//bool searchValue(char,ListTemplate*,ListTemplate*,ListTemplate*);
	
		void displayAll(ListTemplate*);
};
#endif