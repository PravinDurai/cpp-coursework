#ifndef NUMBERGUESSINGGAME_H
#define NUMBERGUESSINGGAME_H

#include<iostream>
#include<string.h>
#include<cstdlib>

using namespace std;

class NumberGuessingGame
{
	private:
		int number;
		int guess;
		int vGuess[1000];
		int pos;
	public:
		void setNumber(int);
		void setGuess(int);
		void setPos(int);
		int getNumber();
		int getGuess();
		int getPos();
		
		string rules(int&);
		void displayAllValidGuess();
		
	
};

#endif