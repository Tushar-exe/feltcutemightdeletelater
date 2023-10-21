#include<iostream>
using namespace std;

void swap(int&, int&);

int main()
{
	int a,b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	cout<<"Before swap values are: "<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"After swapping values of a & b are: "<<a<<" "<<b<<endl;

}

void swap(int& p, int& q)
{   
	int temp=p;
	p=q;
	q=temp;
	cout<<"After swapping values of p & q are: "<<p<<" "<<q<<endl;
}


