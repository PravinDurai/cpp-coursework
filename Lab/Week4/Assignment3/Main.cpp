#include<vector>
#include"Shape.h"
#include"Circle.h"
#include"Oval.h"
#include"Square.h"
#include"Rectangle.h"
#include"Triangle.h"

int main()
{
	Shape* s1=new Circle(2);
	Shape* s2=new Oval(1,2);
	Shape* s3=new Square(2);
	Shape* s4=new Rectangle(1, 2);
	Shape* s5=new Triangle(1,2);
	
	vector<Shape*> vShape;
	vShape.push_back(s1);
	vShape.push_back(s2);
	vShape.push_back(s3);
	vShape.push_back(s4);
	vShape.push_back(s5);
	
	for(Shape* temp:vShape)
		temp->display();
	
	return(0);
}