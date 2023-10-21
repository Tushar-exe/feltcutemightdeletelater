#include <iostream>
using namespace std;

class A
{
	int a_a=1,a_b=2;
	public:
		A()
		{
			cout<<"In Default Constructor of A Class"<<endl;
		}
		
		virtual void display()
		{
			cout<<"Value of a_a "<<a_a<<endl;
			cout<<"Value of a_b "<<a_b<<endl;
		}
		
		~A()
		{
			cout<<"In Default Destructor of A Class"<<endl;
		}
};

class B
{
	int b_a=3,b_b=4;
	public:
		B()
		{
			cout<<"In Default Constructor of B Class"<<endl;
		}
		
		void display()
		{
			cout<<"Value of b_a "<<b_a<<endl;
			cout<<"Value of b_b "<<b_b<<endl;
		}
		
		~B()
		{
			cout<<"In Default Destructor of B Class"<<endl;
		}
};

class C:public A,public B
{
	int c_a=5,c_b=6;
	public:
		C()
		{
			cout<<"In Default Constructor of C Class"<<endl;
		}
		
		void display()
		{
			cout<<"Value of c_a "<<c_a<<endl;
			cout<<"Value of c_b "<<c_b<<endl;
		}
		
		~C()
		{
			cout<<"In Default Destructor of C Class"<<endl;
		}
};

int main()
{
	A * ptr1 = new A;
	ptr1->display();
	cout<<endl;
	B * ptr2 = new B;
	ptr2->display();
	cout<<endl;
	C * ptr3 = new C;
	ptr3->display();
	return 0;
}
