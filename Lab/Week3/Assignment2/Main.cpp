#include"NextDay.h"
#include"TwoDay.h"

int main()
{
	NextDay* nd=new NextDay(10);
	nd->displayDetails();
	TwoDay* td=new TwoDay(10);
	td->displayDetails();
	return(0);
}