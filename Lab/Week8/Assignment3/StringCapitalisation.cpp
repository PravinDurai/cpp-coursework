#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string validateStringCapitalisation(string input)
{
	ostringstream output;
	int i=0;
	int spaceFound=0;
	int iteration=0;
	for(char t:input)
	{		
		if(t=='!')
			break;
		else
		{
			if(t==' '||t==','||t=='.')
			{
				spaceFound=1;
				output<<t;
				continue;
			}
			if(spaceFound)
			{
				spaceFound=0;
				if(((int)t>=(int)'a')&&((int)t<=(int)'z'))
				{
					output<<(char)((int)t-32);
					cout<<"\nChar converted to caps is :\t"<<(char)((int)t-32);
				}
				else
				{
					output<<t;
				}
			}
			else
			{
				if(iteration==0)
				{
					if(((int)t>=(int)'a')&&((int)t<=(int)'z'))
					{
						output<<(char)((int)t-32);
						cout<<"\nChar converted to caps is :\t"<<(char)((int)t-32);
					}
					else
					{
						output<<t;
					}
				}
				else
				{
					output<<t;
				}
			}
			
		}
		iteration++;
	}
	cout<<"\nThe value of output is :\t"<<output.str();
	return(output.str());
}

int main()
{
	string input;
	string validateString;
	cout<<"\nEnter the Input String that has to be validated/converted\n";
	getline(cin,input);
	cout<<"\nThe input String is :\t"<<input;
	
	validateString=validateStringCapitalisation(input);
	cout<<"\nThe value of Validation String in the Main function is :\t"<<validateString;
	return(0);
}