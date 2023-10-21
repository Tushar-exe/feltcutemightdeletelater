#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		demo()
		{
			a=5;
		}
		int add(int a)
		{
			this->a=this->a+a;
			return this->a;
		}
};
int main()
{
	demo d;
	demo d1;
	cout<<"Result= "<<d.add(d1);
}
