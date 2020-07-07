#include"Rainfall.h"

using namespace std;

int main()
{
	char opt;
	Rainfall* rf=new Rainfall(63.6, 72.8, 132.9, 51.4, 64.8, 111.5, 88.9, 136.5, 122.4, 138.8, 117.6, 138.9);
	cout<<"\nLowest :\t"<<rf->getLowest();
	cout<<"\nHighest :\t"<<rf->getHighest();
	cout<<"\nMean :\t"<<rf->getMean();
	rf->outputBarChart();
	delete(rf);
	cout<<"\n\nDo you wish to continue with your custom input ?\t(Y/N)";
	cout<<"\nEnter your Option (Y/N) :\t";
	cin>>opt;
	if(opt=='Y'||opt=='y')
	{
		Rainfall* customRF=new Rainfall();
		float rfValues[12];
		do
		{
			for(int i=0;i<12;i++)
			{
				cout<<"\nPlease enter the amount of rainfall for "<<customRF->getMonthName(i)<<" :\t";
				cin>>rfValues[i];
				customRF->setMonthAmount(i+1,rfValues[i]);
			}
			cout<<"\nLowest :\t"<<customRF->getLowest();
			cout<<"\nHighest :\t"<<customRF->getHighest();
			cout<<"\nMean :\t"<<customRF->getMean();
			customRF->outputBarChart();
			cout<<"\n\nDo you wish to continue (Y/N) :\t";
			cin>>opt;
		}while(opt=='y'||opt=='Y');	
		delete(customRF);
	}
	return(0);
}