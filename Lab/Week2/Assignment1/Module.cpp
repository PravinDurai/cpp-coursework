#include "Module.h"


/*
Module()
{
	
}

Module(int m1,int m2,intm3,int m4)
{
	this->m1=m1;
	this->m2=m2;
	this->m3=m3;
	this->m4=m4;
}
*/

void Module::setM1(int m1)
{
	this->m1=m1;
}
int Module::getM1()
{
	return(m1);
}
void Module::setM2(int m2)
{
	this->m2=m2;
}
int Module::getM2()
{
	return(m2);
}
void Module::setM3(int m3)
{
	this->m3=m3;
}
int Module::getM3()
{
	return(m3);
}
void Module::setM4(int m4)
{
	this->m4=m4;
}
int Module::getM4()
{
	return(m4);
}
		
void Module::displayModuleMarks()
{
	cout<<"\nC :\t"<<m1<<"\nCPP :\t"<<m2<<"\nJAVA :\t"<<m3<<"\nPYTHON :\t"<<m4<<"\n";
}