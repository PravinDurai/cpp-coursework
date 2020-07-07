#include<iostream>
#include<ctime>
#include<vector>
#include<deque>
#include<list>

using namespace std;


clock_t insertFrontDeque(int n)
{
	deque<int> intDeque;
	clock_t start;
	clock_t stop;
	start=clock();
	for(int i=0;i<=n;i++)
	{
		intDeque.push_front(i);
	}
	stop=clock();
	return(stop-start);
}

clock_t insertFrontList(int n)
{
	list<int> intList;
	clock_t start;
	clock_t stop;
	start=clock();
	for(int i=0;i<=n;i++)
	{
		intList.push_front(i);
	}
	stop=clock();
	return(stop-start);
}



clock_t insertLastDeque(int n)
{
	deque<int> intDeque;
	clock_t start;
	clock_t stop;
	start=clock();
	for(int i=0;i<=n;i++)
	{
		intDeque.push_back(i);
	}
	stop=clock();
	return(stop-start);
}

clock_t insertLastList(int n)
{
	list<int> intList;
	clock_t start;
	clock_t stop;
	start=clock();
	for(int i=0;i<=n;i++)
	{
		intList.push_back(i);
	}
	stop=clock();
	return(stop-start);
}

clock_t insertMiddleDeque(int n,int position[])
{
	deque<int> intDeque;
	clock_t start;
	clock_t stop;
	
	deque <int> :: iterator it;
	
	start=clock();
	for(int i=0;i<=n;i++)
	{
		intDeque.push_back(i);
	}
	stop=clock();
	
	//cout<<"\nTime taken for inserting "<<n<<" element at last in Deque is :\t"<<stop-start;
	
	int temp=1000;
	//int arrayPosition[5]={12,22,35,41,47};
	start=clock();
	for(int i=0;i<10;i++)
	{
		for (it = intDeque.begin(); it != intDeque.end(); ++it) 
			if(*it==position[i])
				break;
			intDeque.insert(it,1,temp++);
	}
	
	stop=clock();
	/*For Validation
	for (it = intDeque.begin(); it != intDeque.end(); ++it) 
		cout<<"\n"<<*it;
	*/
	
	return(stop-start);
}

clock_t insertMiddleList(int n,int position[])
{
	list<int> intList;
	clock_t start;
	clock_t stop;
	
	list <int> :: iterator it;
	
	start=clock();
	for(int i=0;i<=n;i++)
	{
		intList.push_back(i);
	}
	stop=clock();
	
	//cout<<"\nTime taken for inserting "<<n<<" element at last of List is :\t"<<stop-start;
	
	int temp=1000;
	//int arrayPosition[5]={12,22,35,41,47};
	start=clock();
	for(int i=0;i<10;i++)
	{
		for (it = intList.begin(); it != intList.end(); ++it) 
			if(*it==position[i])
				break;
			intList.insert(it,1,temp++);
	}
	
	stop=clock();
	/*For Validation
	for (it = intList.begin(); it != intList.end(); ++it) 
		cout<<"\n"<<*it;
	*/
	
	return(stop-start);
}

clock_t searchDeque(int n,int position[])
{
	deque<int> intDeque;
	clock_t start;
	clock_t stop;
	
	deque <int> :: iterator it;
	
	start=clock();
	for(int i=0;i<=n;i++)
	{
		intDeque.push_back(i);
	}
	stop=clock();
	
	//cout<<"\nTime taken for inserting "<<n<<" element at last in Deque is :\t"<<stop-start;
	
	int temp=1000;
	//int arrayPosition[5]={12,22,35,41,47};
	start=clock();
	int found;
	for(int i=0;i<10;i++)
	{
		found=0;
		for (it = intDeque.begin(); it != intDeque.end(); ++it) 
		{
			if(*it==position[i])
			{
				found=1;
				break;
			}
		}
		/*
		if(found)
		{
			cout<<"\nValue "<<position[i]<<" is found";
		}
		else
		{
			cout<<"\nValue "<<position[i]<<" Not Found";
		}
		*/
	}
	
	stop=clock();
	/*For Validation
	for (it = intDeque.begin(); it != intDeque.end(); ++it) 
		cout<<"\n"<<*it;
	*/
	return(stop-start);
}

clock_t searchList(int n,int position[])
{
	list<int> intList;
	clock_t start;
	clock_t stop;
	
	list <int> :: iterator it;
	
	start=clock();
	for(int i=0;i<=n;i++)
	{
		intList.push_back(i);
	}
	
	stop=clock();
	
	//cout<<"\nTime taken for inserting "<<n<<" element at last of List is :\t"<<stop-start;
	
	int temp=1000;
	//int arrayPosition[5]={12,22,35,41,47};
	start=clock();
	int found=0;
	for(int i=0;i<10;i++)
	{
		found=0;
		for (it = intList.begin(); it != intList.end(); ++it) 
		{
			if(*it==position[i])
			{
				found=1;
				break;
			}
		}
		/*
		if(found)
		{
			cout<<"\nValue "<<position[i]<<" is found";
		}
		else
		{
			cout<<"\nValue "<<position[i]<<" Not Found";
		}
		*/
	}
	stop=clock();
	/*For Validation
	for (it = intList.begin(); it != intList.end(); ++it) 
		cout<<"\n"<<*it;
	*/
	return(stop-start);
}


int main()
{
	int n;
	
	clock_t startTime;
	clock_t stopTime;
	clock_t difference;
	clock_t dequeDifference;
	clock_t listDifference;
	

	cout<<"Enter the number of numbers that has to be inserted in deque :\t";
	cin>>n;
	
	int position[10]={(n/11),(n/10),(n/9),(n/8),(n/7),(n/6),(n/5),(n/4),(n/3),(n/2)};
	int searchArray[10]={(n/10),(n/9),(n/8),(n/7),((n+n)/10),(n/4),(n/3),(n/2),n,(n+n)};
	//(n+n) -> is a number that won't be present in my deque or list but in order to confirm that the list/deque has to run through the entire content
	
	cout<<"\n\nInserting Element at in Front ";
	cout<<"\n-----------------------------------------------------------------------------";
	dequeDifference=insertFrontDeque(n);
	cout<<"\nTime Taken for the Deque to insert "<<n<<" elements is :\t"<<dequeDifference;
	
	listDifference=insertFrontList(n);
	cout<<"\nTime Taken for the List to insert "<<n<<" elements is :\t"<<listDifference;
	cout<<"\n-----------------------------------------------------------------------------";
	if(dequeDifference<listDifference)
		cout<<"\nWinner is :\t Deque";
	else
		cout<<"\nWinner is LIST";
	cout<<"\n-----------------------------------------------------------------------------";
	
	
	cout<<"\n\nInserting Element at the last ";
	cout<<"\n-----------------------------------------------------------------------------";
	dequeDifference=insertLastDeque(n);
	cout<<"\nTime Taken for the Deque to insert "<<n<<" elements is :\t"<<dequeDifference;
	
	listDifference=insertLastList(n);
	cout<<"\nTime Taken for the List to insert "<<n<<" elements is :\t"<<listDifference;
	cout<<"\n-----------------------------------------------------------------------------";
	if(dequeDifference<listDifference)
		cout<<"\nWinner is :\t Deque";
	else
		cout<<"\nWinner is LIST";
	cout<<"\n-----------------------------------------------------------------------------";
	
	cout<<"\n\n\nInserting in Middle";
	cout<<"\n-----------------------------------------------------------------------------";
	dequeDifference=insertMiddleDeque(n,position);
	cout<<"\nTime taken for inserting 10 element in middle in Deque is :\t"<<dequeDifference;
	listDifference=insertMiddleList(n,position);
	cout<<"\nTime taken for inserting 10 element in middle in List is :\t"<<listDifference;
	cout<<"\n-----------------------------------------------------------------------------";
	if(dequeDifference<listDifference)
		cout<<"\nWinner is :\t Deque";
	else
		cout<<"\nWinner is LIST";
	cout<<"\n-----------------------------------------------------------------------------";
	
	cout<<"\n\n\nSearching element";
	cout<<"\n-----------------------------------------------------------------------------";
	dequeDifference=searchDeque(n,searchArray);
	cout<<"\nTime taken for searching 10 element in Deque is :\t"<<dequeDifference;
	listDifference=searchList(n,searchArray);
	cout<<"\nTime taken for searching 10 element in List is :\t"<<listDifference;
	cout<<"\n-----------------------------------------------------------------------------";
	if(dequeDifference<listDifference)
		cout<<"\nWinner is :\t Deque";
	else
		cout<<"\nWinner is LIST";
	cout<<"\n-----------------------------------------------------------------------------";
	
	cout<<"\n\n\n\n-----------------------------------------------------------------------------\n";
	cout<<"\n                             Exceptional Cases";
	cout<<"\n\n-----------------------------------------------------------------------------\n";
	
	cout<<"\n\nInserting Element in Front  and Last in Deque";
	cout<<"\n-----------------------------------------------------------------------------";
	dequeDifference=insertFrontDeque(n);
	cout<<"\nTime Taken for the Deque to insert "<<n<<" elements at Front is :\t"<<dequeDifference;
	
	listDifference=insertLastDeque(n);
	cout<<"\nTime Taken for the Deque to insert "<<n<<" elements at Last is :\t"<<listDifference;
	cout<<"\n-----------------------------------------------------------------------------";
	if(dequeDifference<listDifference)
		cout<<"\nWinner is :\t Inserting in Front of Deque";
	else
		cout<<"\nWinner is :\t Inserting in Back of Deque";
	cout<<"\n-----------------------------------------------------------------------------";
	
	cout<<"\n\nInserting Element in Front  and Last in List";
	cout<<"\n-----------------------------------------------------------------------------";
	dequeDifference=insertFrontList(n);
	cout<<"\nTime Taken for the List to insert "<<n<<" elements at Front is :\t"<<dequeDifference;
	
	listDifference=insertLastList(n);
	cout<<"\nTime Taken for the List to insert "<<n<<" elements at Last is :\t"<<listDifference;
	cout<<"\n-----------------------------------------------------------------------------";
	if(dequeDifference<listDifference)
		cout<<"\nWinner is :\t Inserting in Front of List";
	else
		cout<<"\nWinner is :\t Inserting in Back of List";
	cout<<"\n-----------------------------------------------------------------------------";
	cout<<"\n\n\nNote:\nWhen i Ran for Multiple iteration i was able to see in some cases \nInserting Element at Last of List Wins over Inserting Elements at the Front";
	return(0);
}