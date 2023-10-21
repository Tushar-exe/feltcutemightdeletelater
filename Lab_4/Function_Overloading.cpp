#include<iostream>
using namespace std;

class Employee
{
   int id;
   char name[20];
   float sal;
   
   public:
   	
   	void Data()
   	{
   		cin>>id>>name>>sal;
	}
	   
	void display()
	{
		cout<<"Employee id:"<<id<<endl<<"Employee Name: "<<name<<endl<<"Employee Salary: "<<sal<<endl;
	}
	
	void annual_Sal(float a,float b)
	{
		cout<<"sum of float values:"<<a+b<<endl;
	}
	
    void annual_Sal(int a,int b)
	{
		cout<<"sum of int values:"<<a+b<<endl;
	}	
};


int main()
{
	Employee e;
	e.Data();
	e.display();
	e.annual_Sal(250,350);
	e.annual_Sal(250.45f,350.60);

	
	return 0;
}
