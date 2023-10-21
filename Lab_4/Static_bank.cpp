#include<math.h>
#include<iostream>
using namespace std;
class Bank
{
	long long int acc_no;
	public:
	static float rate_of_interest;
	float cal;
	private: double balance;
	
	public:
		void getData()
		{
			cout<<"Enter account number and balance: "<<endl;
			cin>>acc_no>>balance;
		}
		void show()
		{
			cout<<"Account number: "<<acc_no<<endl;
			cout<<"Balance: "<<balance<<endl;
			cout<<"Calculated interest is: "<<cal<<endl;
		}
		double interest()
		{
			cal=(double)balance*(pow((1+rate_of_interest/100),2));
			return cal;
		}
};
float Bank::rate_of_interest=6.5f;

int main()
{
	Bank b1;
	b1.getData();
	b1.interest();
	b1.show();
	
}
