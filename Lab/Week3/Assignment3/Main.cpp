#include"Caccount.h"
#include"Saccount.h"
#include<conio.h>
	int getAccountType()
	{
		int opt;
		do
		{
			system("CLS");
			cout<<"\n\n--------------------------------------------------\n";
			cout<<"\n                    Account Type                    \n";
			cout<<"\n\n--------------------------------------------------\n";
			cout<<"\n1.                   Current Account                \n";
			cout<<"\n2.                   Saving Account                 \n";
			cout<<"\n\nEnter your option :\t";
			cin>>opt;
			if(opt!=1&&opt!=2)
				cout<<"\nPlease Enter a valid option...";
			getch();
		}while(opt!=1&&opt!=2);
		return(opt);
	}

	template<class T>
	void displayOptions(T& ca,int aType)
	{
		int opt;
		
		do
		{
			system("CLS");
			cout<<"\n\n--------------------------------------------------\n";
			cout<<"\n             Available Operation                    \n";
			cout<<"\n\n--------------------------------------------------\n";
			cout<<"\n1.\tWithdraw";
			cout<<"\n2.\tDeposit Money";
			cout<<"\n3.\tGet Balance";
			cout<<"\n4.\tPrint Customer Details";
			cout<<"\n\nEnter your option :\t";
			cin>>opt;
			if(opt!=1&&opt!=2&&opt!=3&&opt!=4)
				cout<<"\nPlease Enter a valid option...";
			getch();
		}while(opt!=1&&opt!=2&&opt!=3&&opt!=4);
		
		switch(opt)
		{
					case 1:
						float amount;
						cout<<"\nEnter the amount to be withdrawn :\t";
						cin>>amount;
						ca->withDraw(amount);
						break;
					case 2 :
						float money;
						cout<<"\nEnter the amount to be deposited :\t";
						cin>>money;
						ca->depositMoney(money);
						break;
					case 3:
						cout<<"\nBalance Amount is :\t"<<ca->getBalance();
						break;
					case 4 :
						ca->printDetails();
						break;
		}
	}

int main()
{
	char opt1;
	char opt2;
	int aType;
	Caccount* ca=new Caccount(1540,"Pravin",10000);
	cout<<"\nCurrent Account";
	ca->printDetails();
	Saccount* sa=new Saccount(1541,"Navin",20000);
	cout<<"\n\nSavings Account";
	sa->printDetails();

	cout<<"\nDo you wish to try some of the operation that the bank provides you for the above accounts (Y/N) ?";
	cin>>opt1;
	if(opt1=='Y'||opt1=='y')
	{
		do
		{
			aType=getAccountType();
			if(aType==1)
				displayOptions(ca, aType);
			else
				displayOptions(sa, aType);
			
			cout<<"\nDo you wish to try again (Y/N) :\t";
			cin>>opt2;
		}while(opt2=='Y'||opt2=='y');
	}
	delete(ca);
	delete(sa);
	return(0);
}