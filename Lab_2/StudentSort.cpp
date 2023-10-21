#include<iostream>
using namespace std;
#include <string.h>

class Date1
{
	int dd, mm, yy;
	public:
		Date1()
		{
			dd=01;
			mm=01;
			yy=1999;
		}
		
		Date1(int d, int m, int y)
		{
			dd=d;
			mm=m;
			yy=y;
		}
		
		void setData()
		{
			cout<<"\nEnter Day:\n";
			cin>>dd;
			cout<<"\nEnter Month:\n";
			cin>>mm;
			cout<<"\nEnter Year:\n";
			cin>>yy;
		}
		
		void showData()
		{
			cout<<"Date of Birth is: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
class Student
{
 	public:
 		int id, marks;
		char name[10];
 		Date1 d1;
 		Student()
 		{
 			id=00;
 			marks=100;
 		    strcpy(name, "Omkar");
		}
		
		Student(const char * name, int id, int marks, int d, int m, int y):d1(d,m,y)
		{
			
			this->id=id;
			this->marks=marks;
			strcpy(this->name, name);
		}
		
		void setData()
		{
			cout<<"\nEnter Student Name:\n";
			cin>>name;
			cout<<"\nEnter Student id:\n";
			cin>>id;
			cout<<"\nEnter Student Marks:\n";
			cin>>marks;
			d1.setData();
		}
		
		void showData()
		{
			cout<<"Student with id number: "<<id<<" has marks "<<marks<<endl;
			d1.showData();
		}
 };
 
int main()
{
//	Student s("Omkar", 3, 98, 26, 9, 2023);
	Student s[3];
	for (int i=0; i<3; i++)
	{
		s[i].setData();
	}
	
	//Sorting
	for(int i=0; i<3; i++)
	{
		for(int j=i+1; j<3; j++)
		{
			if((s[i].id)>(s[j].id))
			{
				int temp=0;
				temp=s[i].id;
				s[i].id=s[j].id;
				s[j].id=temp;
			}
		}
	}
	cout<<endl;
	for (int i=0; i<3; i++)
	{
		s[i].showData();
		cout<<endl;
	}
	
	return 0;
}
 
 
