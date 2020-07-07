#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	string input;
	char pop;
	int missMatch=0;
	vector<char> brackets;
	cout<<"\nEnter the String that has to be validated \n";
	getline(cin,input);
	cout<<"\n\n---------------------------------------------------------------------------\n";
	cout<<"\n                               INPUT\n";
	cout<<"\n---------------------------------------------------------------------------\n\n";
	cout<<"\nThe input string is \n";
	cout<<input;
	
	cout<<"\n\n\n---------------------------------------------------------------------------\n";
	cout<<"\n                               OUTPUT\n";
	cout<<"\n---------------------------------------------------------------------------\n";
	for(char t:input)
	{
		if((t=='(')||(t=='[')||(t=='{'))
		{
			brackets.push_back(t);
		}
		if((t==')')||(t==']')||(t=='}'))
		{
			pop=brackets.back();
			if(((pop=='(')&&(t==')'))||((pop=='{')&&(t=='}'))||((pop=='[')&&(t==']')))
			{
				brackets.pop_back();
				cout<<"\nPop operation is performed, The poped character is :\t"<<pop;
			}
			else
			{
				missMatch=1;
				continue;
			}
		}
	}
	
	cout<<"\n\n---------------------------------------------------------------------------\n";
	cout<<"\n                               COMMENTS\n";
	cout<<"\n---------------------------------------------------------------------------\n";
	if((brackets.size()>0)||(missMatch==1))
	{
		if(brackets.size()>0)
		{
			cout<<"\n\nThere are few closing brackets missing\nPlease put the closing brackets for the below open brackets in the appropriate places\n";
			cout<<"\n\nThe Elements present inside the vector are\n";
			for(char t:brackets)
			{
				cout<<"\n"<<t;
			}
		}
		if(missMatch)
		{
			cout<<"\n\nThere are brackets misplaced";
		}
	}
	else
	{
		cout<<"\n\nThe brackets in the given string are equal and are in appropriate place...\nValidation successful...Chill out...";
	}
	cout<<"\n---------------------------------------------------------------------------\n";
	//(int (Main(){Hello Pravin{How are you}[()}]))
	//(int (Main(){Hello Pravin{How are you}[()]}))
	return(0);
}