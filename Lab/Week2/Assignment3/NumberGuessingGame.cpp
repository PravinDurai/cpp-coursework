#include"NumberGuessingGame.h"

void NumberGuessingGame::setPos(int number)
{
	pos=number;
}

void NumberGuessingGame::setNumber(int number)
{
	this->number=number;
}

void NumberGuessingGame::setGuess(int guess)
{
	this->guess=guess;
}

int NumberGuessingGame::getPos()
{
	return(pos);
}

int NumberGuessingGame::getNumber()
{
	return(number);
}

int NumberGuessingGame::getGuess()
{
	return(guess);
}

string NumberGuessingGame::rules(int& cheatFlag)
{
	if(guess<999||guess>=10000)
		return("\nThe number is between 1000 - 9999 \nSo Please make a guess within this limit\n");
	if(guess>number)
	{
		*(vGuess+(++pos))=guess;
		return("\nYour guess is higher than the number\ntry again");
	}
	if(guess<number)
	{
		*(vGuess+(++pos))=guess;
		return("\nYour guess is less than the number\ntry again");
	}
	if(guess==number)
	{
		*(vGuess+(++pos))=guess;
		cheatFlag=1;
		return("\nPerfect Guess...\nCongrats...\n\n");
	}
}

void NumberGuessingGame::displayAllValidGuess()
{
	for(int i=1;i<pos;i++)
			cout<<"\n"<<i<<" valid guess is :\t"<<*(vGuess+i);
}