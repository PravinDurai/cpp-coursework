#include<iostream>

#ifndef MYLIST_H
#define MYLIST_H

template<typename T>
class MyList
{
	private:
		T data;
		MyList* next;
	public:
		MyList* insertLast(MyList*);
		MyList* deleteNode(MyList*);
		bool searchNode(MyList*)'
};

#endif