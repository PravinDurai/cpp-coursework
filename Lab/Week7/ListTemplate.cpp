#include<iostream>

template<typename T>
class MyList
{
	private:
		T data;
		MyList* next;
	public:
		MyList* insertLast(MyList*)=0;
		MyList* deleteNode(MyList*)=0;
		bool searchNode(MyList*)=0;
};

