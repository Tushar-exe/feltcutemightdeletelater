#include <iostream>
using namespace std;

template <class S>
S Swap(S& a, S& b)
{
	S temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swapping:"<<a<<" "<<b<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	cout<<"Before swapping:"<<a<<" "<<b<<endl;
	Swap (a,b);
	
}
