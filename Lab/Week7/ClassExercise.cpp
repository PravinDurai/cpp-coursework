#include<iostream>

using namespace std;

main()
{
    int ar[]={1,3,4,1,5,6,1,2,5};
    for(int i=0;i<9;i++)
    {
		cout<<"\nDistance of "<<ar[i]<<" if any duplicate exist\n";
       for(int j=i+1;j<9;j++)
       {
          if(ar[i]==ar[j])
             cout<<"\nDistance :\t"<<j-i;
       }
	}
}

/*
----------------------------------------------------

main()
{
    int ar[]={1,3,4,1,5,6,1,2,5};
    for(int i=0;i<9;i++)
    {
		cout<<"\nDistance of "<<*(ar+i)<<" if any duplicate exist\n";
       for(int j=i+1;j<9;j++)
       {
          if(*(ar+i)==*(ar+j))
             cout<<"\nDistance :\t"<<(ar+j)-(ar+i);
       }
    }
}
*/