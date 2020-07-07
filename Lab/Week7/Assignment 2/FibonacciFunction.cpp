#include"FibonacciFunction.h"

vector<int> FibonacciFunction::getSeries()
{
	return(series);
}

void FibonacciFunction::setSeries(vector<int> series)
{
	this->series=series;
}

void FibonacciFunction::generateFibonacciSeries(int n)
{
	int a=0;
	int b=1;
	int k=0;
	for(int i=1;i<=n;i++)
	{
		series.push_back(a);
		a=a+b;
		b=a-b;
		a=a-b;
		b=a+b;
	}
	cout<<"\nThe values stored in vector are \n";
	for(int t:series)
	{
		cout<<t<<"\t";
	}
	
}

int FibonacciFunction::getValue(int position)
{
	if(position<=series.size())
	{
		return(series[position]);
	}
	else
	{
		int a=0;
		int b=1;
		
		for(int t:series)
		{
			a=b;
			b=t;
		}
		
		for(int i=series.size();i<position;i++)
		{
			a=a+b;
			b=a-b;
			a=a-b;
			b=a+b;
			series.push_back(b);
		}
	}
	for(int t:series)
	{
		cout<<t<<"\t";
	}	
	return(series[position]);
}