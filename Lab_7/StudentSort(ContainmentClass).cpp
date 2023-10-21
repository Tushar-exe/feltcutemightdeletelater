#include<iostream>
using namespace std;
#include<string.h>
class Date
{
	int dd, mm, yy;
	public:
		Date()
		{
			dd=0;
			mm=0;
			yy=0;
		}
		Date(int d, int m, int y)
		{
			dd=d;
			mm=m;
			yy=y;
		}
		void setDate()
		{
			cout<<"\tEnter Day: ";
			cin>>dd;
			cout<<"\tEnter month: ";
			cin>>mm;
			cout<<"\tEnter Year: ";
			cin>>yy;
		}
		void showDate()
		{
			cout<<"Date of birth is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};


class Student
{
	public:
	int rno, fees;
	char name[10];
	Date dobj;
	Student()
	{
		rno=0;
		fees=1000;
		strcpy(name, "User");
	}
	Student(int rno, int fees, char* name, int d, int m, int y): dobj(d, m, y)
	{
		this->fees=fees;
		this->rno=rno;
		strcpy(this->name, name);
	}
	void show()
	{
		cout<<"Name of the student is "<<name<<" and roll number is "<<rno<<" and fees is "<<fees<<endl;
		dobj.showDate();	
	}
	void setData()
	{
		cout<<endl;
		cout<<"\tEnter Name: ";
		cin>>name;
		cout<<"\tEnter Roll no: ";
		cin>>rno;
		cout<<"\tEnter Fees: ";
		cin>>fees;
		dobj.setDate();
	}
};
int main()
{
	int n;
	cout<<"Enter number of students: ";
	cin>>n;
	cout<<endl;
	Student s[n], temp;
	for (int i=0; i<n; i++)
	{
		s[i].setData();
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((s[i].rno)>(s[j].rno))
			{
				
				temp=s[i]; //copy constructor will be called implicitly.
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		s[i].show();
		cout<<endl;
	}
}
