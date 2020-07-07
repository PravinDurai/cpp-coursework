#include "Rainfall.h"

Rainfall::Rainfall()
{

}

Rainfall::Rainfall(float a, float b,float c,float d,float e,float f,float g,float h,float i,float j,float k,float l)
{
	rData[0]=a;
	rData[1]=b;
	rData[2]=c;
	rData[3]=d;
	rData[4]=e;
	rData[5]=f;
	rData[6]=g;
	rData[7]=h;
	rData[8]=i;
	rData[9]=j;
	rData[10]=k;
	rData[11]=l;
}

Rainfall::~Rainfall()
{
	
}

float Rainfall::getMonthAmount(int monthNumber)
{
	if(monthNumber>=1&&monthNumber<=12)
	{
		return(rData[monthNumber]);
	}
	else
	{
		return(-1);
	}
}

void Rainfall::setMonthAmount(int monthNumber,float value)
{
	if(monthNumber>=1&&monthNumber<=12)
		rData[monthNumber-1]=value;
	else
		cout<<"\nInvalid Month...\nSorry Please enter a valid month and it's corresponding value\n";
}

float Rainfall::getHighest()
{
	float max=0.0;
	for(int i=0;i<12;i++)
		if(max<rData[i])
			max=rData[i];
	return(max);	
}

float Rainfall::getLowest()
{
	float min=rData[0];
	for(int i=1;i<12;i++)
		if(min>rData[i])
			min=rData[i];
	return(min);
}

float Rainfall::getMean()
{
	float sum=0.0;
	for(int i=0;i<12;i++)
		sum+=rData[i];
	return(sum/12);
}

void Rainfall::outputBarChart()
{
			int count=0;
			cout<<"\n\nThe Graph show the amount of rainfal for a given year on a monthly basis\n\n";
			cout<<"Scale       :\t60\t60-80\t80-100\t100-130\t>130\n";

			for(int i=0;i<12;i++)
			{
				count=0;
				
				if(rData[i]<60)
					count=1;
				if((rData[i]>=60)&&(rData[i]<80))
					count=2;
				if((rData[i]>=80)&&(rData[i]<100))
					count=3;
				if((rData[i]>=100)&&(rData[i]<130))
					count=4;
				if(rData[i]>130)
					count=5;
				cout<<month[i];
				for(int k=1;k<=12-month[i].length();k++)
					cout<<" ";
				cout<<":\t";
				for(int j=0;j<count;j++)
					cout<<"*\t";
				
				
				cout<<"\n";
				
			}
}

int Rainfall::getPosition(string monthName)
{
	int pos=-1;
	
	for(int i=0;i<12;i++)
	{
		if(month[i]==monthName)
		{
			pos=i;
			break;
		}
	}
	
	return(pos);
}

string Rainfall::getMonthName(int monthNumber)
{
	return(month[monthNumber]);
}