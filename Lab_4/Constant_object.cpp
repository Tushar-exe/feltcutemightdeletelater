#include<iostream>
using namespace std;

class Constant
{
	int a,b;
	public:
	Constant()
	{
	}
		
	void sum(int a,int b)
 	{
 		cout<<"Inside normal function sum of two no is:"<<a+b<<endl;
	}	
	
	void cons_Sum(int a,int b)const
	{
		cout<<"Inside const function sum of two no is"<<a+b<<endl;
	}
};

int main()
{   
    const Constant c1;
    Constant c2;
    c2.sum(10,20);		//non constant object-> non constant function
    c1.cons_Sum(30,40); //constant object-> constant function
    c2.cons_Sum(5,10);	// non constant object-> constant function
}

