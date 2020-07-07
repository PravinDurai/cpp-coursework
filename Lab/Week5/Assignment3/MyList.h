#ifndef MY_LIST_H
#define MY_LIST_H

#include<iostream>
#include<string.h>

using namespace std;

class MyList
{
	private:
		int data;
		MyList* next;
	public:
		//Constructors and destructors
		MyList();
		MyList(int);
		~MyList();
		
		//getters and setters
		void setData(int);
		int getData();
		void setNext(MyList*);
		MyList* getNext();
		
};

#endif