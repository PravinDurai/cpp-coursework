#include"NumberGuessingGame.h"

int main()
{
	int guess;
	char opt;
	char cheatOP;
	int cheatFlag=0;
	do
	{
		NumberGuessingGame ngg;
		ngg.setPos(0);
		do
		{
			ngg.setNumber(rand());
		}while((ngg.getNumber()<999)||(ngg.getNumber()>10000));
		
		do
		{
			cout<<"\nGo ahead and make your guess :\t";
			cin>>guess;
			ngg.setGuess(guess);
			cout<<ngg.rules(cheatFlag);
			if(cheatFlag!=1)
			{
				cout<<"\n<<<< CHEAT >>>> :\tDo you wish to know the generated Number (Y/N):\t";
				cin>>cheatOP;
				if(cheatOP=='Y'||cheatOP=='y')
				{
					cout<<"\nThe Generated Random Number is :\t"<<ngg.getNumber();
				}
			}
		}while(ngg.getGuess()!=ngg.getNumber());
		cout<<"\nAll the valid guess that you have made are below\n";
		ngg.displayAllValidGuess();
		cout<<"\nDo you wish to play again (Y/N):\t";
		cin>>opt;
		if(opt=='Y'||opt=='y')
			cheatFlag=0;
	}while(opt=='Y'||opt=='y');
}