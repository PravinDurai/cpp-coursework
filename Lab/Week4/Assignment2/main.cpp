#include"NextDay.h"
#include"TwoDay.h"
#include<vector>

int main()
{
	Standard* nd1=new NextDay("Navin","7/35B Veeraragavapuram Street,Tiruchendur","Pravin","Flat Number 11, Claredale House, Claredale Street, London",10);
	//nd->displayDetails();
	Standard* td1=new TwoDay("Mahe","7/35B Veeraragavapuram Street,Tiruchendur","Pravin","Flat Number 11, Claredale House, Claredale Street, London",20);
	Standard* nd2=new NextDay("Navin","7/35B Veeraragavapuram Street,Tiruchendur","Pravin","Flat Number 11, Claredale House, Claredale Street, London",30);
	Standard* td2=new TwoDay("Mahe","7/35B Veeraragavapuram Street,Tiruchendur","Pravin","Flat Number 11, Claredale House, Claredale Street, London",40);
	Standard* nd3=new NextDay("Navin","7/35B Veeraragavapuram Street,Tiruchendur","Pravin","Flat Number 11, Claredale House, Claredale Street, London",55.5);
	Standard* td3=new TwoDay("Mahe","7/35B Veeraragavapuram Street,Tiruchendur","Pravin","Flat Number 11, Claredale House, Claredale Street, London",60);
	//td->displayDetails();
	vector<Standard*> v;
	v.push_back(nd1);
	v.push_back(td1);
	v.push_back(nd2);
	v.push_back(td2);
	v.push_back(nd3);
	v.push_back(td3);
	for(Standard* temp:v)
	{
		temp->displayDetails();
	}
	
	return(0);
}