#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;

class Shape
{
	public:
		
		Shape();
		Shape(float);
		
		virtual float calculateArea()=0;
		virtual void display()=0;
};

#endif