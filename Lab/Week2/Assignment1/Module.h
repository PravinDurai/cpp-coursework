#ifndef MODULE_H
#define MODULE_H

#include<string.h>
#include<iostream>
using namespace std;

class Module
{
	private:
		int m1;
		int m2;
		int m3;
		int m4;
	public:
		
		//Constructors
		/*
		Module();
		Module(int m1,int m2,int m3,int m4);
		*/
		//Getters and Setters
		void setM1(int m1);
		int getM1();
		void setM2(int m2);
		int getM2();
		void setM3(int m3);
		int getM3();
		void setM4(int m4);
		int getM4();
		
		//Methods
		void displayModuleMarks(); //Display all the marks of the module
		
};
#endif