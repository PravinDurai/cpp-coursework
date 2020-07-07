#include"FibonacciFunction.h"
#include<vector>

using namespace std;

int main()
{
	FibonacciFunction* fFunction=new FibonacciFunction();
	int n;
	int position;
	int value;
	cout<<"\nEnter the range for the fibonacci series :\t";
	cin>>n;
	fFunction->generateFibonacciSeries(n);
	cout<<"\nEnter the position value of the Fibonacci Series that has to be displayed :\t";
	cin>>position;
	value=fFunction->getValue(position);
	cout<<"\nThe value in "<<position<<" is :\t"<<value;
	return(0);
}