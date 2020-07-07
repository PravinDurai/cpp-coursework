#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}
	
	for(int i=0;i<10;i++)
	{
		v.emplace(v.begin(),i);
	}
	
	for(int i=90;i<100;i++)
	{
		v.insert(v.begin(),i);
	}
	
	for(int i=0;i<v.size();i++)
		cout<<"\n"<<i<<"th Position is :\t"<<v[i];
	return(0);
}