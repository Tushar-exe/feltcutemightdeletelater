#include<iostream>
using namespace std;
int fun();
int fun_local();
int main()
{
	
	//cout<<"Value of i in main: "<<i<<endl;
	fun();
	fun();
	fun();
	fun();
	fun_local();
	fun_local();
	fun_local();
	fun_local();
}

int fun()
{
	static int a=0;
	cout<<"Value of a in static variable: "<<a<<endl;
	a++;
	return a;
}

int fun_local()
{
	 int a=0;
	cout<<"Value of a in local variable: "<<a<<endl;
	a++;
	return a;
}

