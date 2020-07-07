#include"StackOperation.h"

int main()
{
	StackOperation* stackOperation=new StackOperation();
	ListTemplate* node=NULL;
	node=stackOperation->insertLast(node,'a');
	node=stackOperation->insertLast(node,'b');
	node=stackOperation->insertLast(node,'c');
	stackOperation->displayAll(node);
	string line;
	cout<<"\nEnter the line that has to be p[rinted in reverse :\t";
	getline(cin,line);
	cout<<"\nThe Entered Line is :\t"<<line;
	for(int i=0;i<line.length();i++)
	{
		node=stackOperation->insertLast(node,line[i]);
	}
	stackOperation->displayAll(node);
	for(int i=0;i<line.length();i++)
	{
		node=stackOperation->deleteLastNode(node);
	}
	stackOperation->displayAll(node);
	return(0);
}