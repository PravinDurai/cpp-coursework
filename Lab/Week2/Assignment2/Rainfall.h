#ifndef RAINFALL_H
#define RAINFALL_H


#include<iostream>
#include<string.h>

using namespace std;

class Rainfall
{
	private:
		string month[12]={"January","Febuary","March","April","May","June","July","August","September","October","November","December"};
		float rData[12];
	public:
		Rainfall();
		Rainfall(float a, float b,float c,float d,float e,float f,float g,float h,float i,float j,float k,float l);
		
		~Rainfall();
		float getMonthAmount(int monthName);
		void setMonthAmount(int month,float value);
		float getHighest();
		float getLowest();
		float getMean();
		void outputBarChart();
		string getMonthName(int monthNumber);
		
		int getPosition(string monthName);
};

#endif