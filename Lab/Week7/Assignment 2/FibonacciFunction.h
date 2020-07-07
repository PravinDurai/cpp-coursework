#ifndef FIBONACCI_FUNCTION_H
#define FIBONACCI_FUNCTION_H
#include<iostream>
#include<vector>

using namespace std;

class FibonacciFunction
{
	private:
		vector<int> series;
		
	public:
		vector<int> getSeries();
		void setSeries(vector<int> series);
		
		void generateFibonacciSeries(int n);
		int getValue(int position);
};
#endif