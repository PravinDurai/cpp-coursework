#ifndef STUDENT_H
#define STUDENT_H

#include<string.h>
#include<iostream>
#include "Module.h"

using namespace std;

class Student: public Module
{
	private:
		int regNumber;
		string name;
	public:
		//Student(){};
		
		//Student(int regNumber,string name,int m1,int m2,int m3,int m4):(m1,m2,m3,m4){};

		//getter and setters
		void setRegNumber(int regNumber);
		int getRegNumber();
		void setName(string name);
		string getName();
		
		//Methods
		int* displayMark(string module,Student* studentInfo,int size); //Display Marks based on module
		void displayAllMarks(Student* studentInfo,int size); //calls the Display method in the Module class
		void drawGraph(string module,int* marks);
		
};

#endif