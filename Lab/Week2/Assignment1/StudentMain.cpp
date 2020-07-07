#include<iostream>
#include<string.h>
#include"Student.h"
int main()
{
	Student s[10];
	int regNumber;
	string name;
	string module;
	char opt;
	int m1;
	int m2;
	int m3;
	int m4;
	for(int i=0;i<2;i++)
	{
		cout<<"\nEnter the Student Reg Number :\t";
		cin>>regNumber;
		s[i].setRegNumber(regNumber);
		cout<<"\nEnter the Student Name :\t";
		cin>>name;
		s[i].setName(name);
		cout<<"\nEnter the Marks scored in C :\t";
		cin>>m1;
		s[i].setM1(m1);
		cout<<"\nEnter the Marks scored in CPP :\t";
		cin>>m2;
		s[i].setM2(m2);
		cout<<"\nEnter the Marks scored in JAVA :\t";
		cin>>m3;
		s[i].setM3(m3);
		cout<<"\nEnter the Marks scored in PYTHON :\t";
		cin>>m4;
		s[i].setM4(m4);
	}
	s[0].displayAllMarks(s,2);
	do
	{
		cout<<"\nEnter the module that has to be displayed\nPlease make sure you type the contents in \"CAPS\"";
		cin>>module;
		cout<<"\nDisplay Marks \n";
		int* marks=s[0].displayMark(module,s,2);
		cout<<"\nDraw Graph \n";
		s[0].drawGraph(module,marks);
		cout<<"\nDo you wish to continue :\t(Y/N)";
		cin>>opt;
	}while(opt=='Y'||opt=='y');
	return(0);
}