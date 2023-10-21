#include <iostream>
using namespace std;
class Employee
{
	int id;
	public:
		Employee(int id=5)
		{
			this->id=id;
		}
		virtual int salary()
		{
			cout<<"in salary function of employee\n";
		}
		void show()
		{
			cout<<"Id of employee is "<<id<<endl;
		}
};

class wageemployee:public Employee
{
	int hrs, rate;
	public:
		wageemployee(int hrs=2, int rate=30, int id=5):Employee(id)
		{
			this->hrs=hrs;
			this->rate=rate;
		}
		
		int salary()
		{
			cout<<"in salary function of wageemployee\n";
			return (hrs*rate);
		}
		
		void show()
		{
			Employee::show();
			cout<<"Hours is "<<hrs<<endl;
			cout<<"Rate is "<<rate<<endl;
			salary();
		}
};

class salesmanager:public wageemployee
{
	int sales, com;
	public:
		salesmanager(int hrs=2, int sales=100, int rate=30, int com=100, int id=5):wageemployee(hrs, rate, id)
		{
			this->sales=sales;
			this->com=com;
		}
		
		int salary()
		{
			cout<<"in salary function of salesmanager\n";
			return ((wageemployee::salary())+com*sales);
		}
		
		void show()
		{
			Employee::show();
			cout<<"Sales is "<<sales<<endl;
			cout<<"Commission is "<<com<<endl;
			salary();
		}
};

int main()
{
	cout<<"FOR EMPLOYEE\n";
	Employee * ptr;
	Employee e;
	ptr = &e;
	ptr->salary();
	
	wageemployee we;
	ptr=&we;
	ptr->salary();
	
	salesmanager sm;
	ptr=&sm;
	ptr->salary();
	
}
