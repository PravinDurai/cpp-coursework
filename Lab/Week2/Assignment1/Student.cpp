#include "Student.h"
using namespace std;
		/*
		Student()
		{
			
		}

		
		Student(int regNumber,string name,int m1,int m2, int m3,int m4):Module(m1,m2,m3,m4)
		{
			this->regNumber=regNumber;
			this->name=name;
		}
		*/
		
		
		void Student::setRegNumber(int regNumber)
		{
			this->regNumber=regNumber;
		}
		int Student::getRegNumber()
		{
			return(regNumber);
		}
		void Student::setName(string name)
		{
			this->name=name;
		}
		string Student::getName()
		{
			return(name);
		}
		
		int* Student::displayMark(string module,Student* studentInfo,int size)
		{
			int min=100;
			int max=0;
			int count=size;
			int average=0;
			int* marks =new int(4);
			int m;
			
			if(module=="C")
				m=0;
			if(module=="CPP")
				m=1;
			if(module=="JAVA")
				m=2;
			if(module=="PYTHON")
				m=3;
			switch(m)
			{
				case 0:
				{
					try
					{
						for(int i=0;i<size;i++)
						{
								if(min>(*(studentInfo+i)).getM1())
									min=(*(studentInfo+i)).getM1();
								if(max<(*(studentInfo+i)).getM1())
									max=(*(studentInfo+i)).getM1();
								average+=(*(studentInfo+i)).getM1();
						}
					}
					catch(const char* msg)
					{
						cout<<"Caught in Exception inside class :\tStudent\tMethod :\tdisplayMark\nCase \"cpp\"\n";
					}
				}
				break;
				case 1:
				{
					try
					{
						for(int i=0;i<size;i++)
						{
								if(min>(*(studentInfo+i)).getM2())
									min=(*(studentInfo+i)).getM2();
								if(max<(*(studentInfo+i)).getM2())
									max=(*(studentInfo+i)).getM2();
								average+=(*(studentInfo+i)).getM2();
						}
					}
					catch(const char* msg)
					{
						cout<<"Caught in Exception inside class :\tStudent\tMethod :\tdisplayMark\nCase \"java\"\n";
					}
					
				}
				break;
				case 2:
				{
					try
					{
						for(int i=0;i<size;i++)
						{
								if(min>(*(studentInfo+i)).getM3())
									min=(*(studentInfo+i)).getM3();
								if(max<(*(studentInfo+i)).getM3())
									max=(*(studentInfo+i)).getM3();
								average+=(*(studentInfo+i)).getM3();
						}
					}
					catch(const char* msg)
					{
						cout<<"Caught in Exception inside class :\tStudent\tMethod :\tdisplayMark\nCase \"java\"\n";
					}
					
				}
				break;
				case 3:
				{
					try
					{
						for(int i=0;i<size;i++)
						{
								if(min>(*(studentInfo+i)).getM4())
									min=(*(studentInfo+i)).getM4();
								if(max<(*(studentInfo+i)).getM4())
									max=(*(studentInfo+i)).getM4();
								average+=(*(studentInfo+i)).getM4();
						}
					}
					catch(const char* msg)
					{
						cout<<"Caught in Exception inside class :\tStudent\tMethod :\tdisplayMark\nCase \"java\"\n";
					}
					
				}
				break;
			}
			
			average/=count;
			
			cout<<"\nMin :\t"<<min;
			cout<<"\nMax :\t"<<max;
			cout<<"\nAverage :\t"<<average;
			cout<<"\nNumber of Students Appeared for the Exam :\t"<<count;
			
			marks[0]=min;
			marks[1]=max;
			marks[2]=count;
			marks[3]=average;
			
			return(marks);
		}
		
		void Student::displayAllMarks(Student* studentInfo,int size)
		{
			for(int i=0;i<size;i++)
			{
				(*(studentInfo+i)).displayModuleMarks();
			}
		}
		
		void Student::drawGraph(string module,int* marks)
		{
			int count=0;
			cout<<"\nThe Graph show \nMin, Max, Average and the total for the "<<module<<" module\n\n";
			cout<<"Scale   :\t1 2 3 4 5 6 7 8 9 10\n";
			for(int i=0;i<4;i++)
			{
				count=0;
				switch(i)
				{
					case 0:
					cout<<"Min     :\t";
					break;
					case 1:
					cout<<"Max     :\t";
					break;
					case 2:
					cout<<"Count   :\t";
					break;
					case 3:
					cout<<"Average :\t";
					break;
				}
				if((*(marks+i)>=0)&&(*(marks+i)<=10))
					count=1;
				if((*(marks+i)>10)&&(*(marks+i)<=20))
					count=2;
				if((*(marks+i)>20)&&(*(marks+i)<=30))
					count=3;
				if((*(marks+i)>30)&&(*(marks+i)<=40))
					count=4;
				if((*(marks+i)>40)&&(*(marks+i)<=50))
					count=5;
				if((*(marks+i)>50)&&(*(marks+i)<=60))
					count=6;
				if((*(marks+i)>60)&&(*(marks+i)<=70))
					count=7;
				if((*(marks+i)>70)&&(*(marks+i)<=80))
					count=8;
				if((*(marks+i)>80)&&(*(marks+i)<=90))
					count=9;
				if((*(marks+i)>90)&&(*(marks+i)<=100))
					count=10;
				for(int j=0;j<count;j++)
					cout<<"* ";
				cout<<"\n";
			}
			
		}