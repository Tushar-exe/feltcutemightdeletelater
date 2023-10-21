#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int*b=&a;
	int**c=&b;
	
	cout<<"Value of a:"<<a<<" Addr of pointer a:"<<&a<<endl;
	cout<<"Value at pointer b:"<<*b<<" Addr of pointer b:"<<b<<endl;
	cout<<"Value at pointer c:"<<**c<<" Addr of pointer c:"<<c<<endl;
	
}
