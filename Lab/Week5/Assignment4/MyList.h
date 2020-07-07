#ifndef MY_LIST_H
#define MY_LIST_H

#include<iostream>
#include<string.h>

using namespace std;

class MyList
{
	private:
		string data;
		MyList* next;
	public:
		//Constructors and destructors
		MyList();
		MyList(string);
		~MyList();
		
		//getters and setters
		void setData(string);
		string getData();
		void setNext(MyList*);
		MyList* getNext();
		
};

#endif