#include<iostream>
using namespace std;
int fun();
int count=0;
int main()
{
	
	fun();
	fun();
	fun();
	fun();
	fun();
	cout<<"Count of function call is: "<<count<<endl;
}

int fun()
{
	static int a;
	a++;
    count++;
	return a;
}
