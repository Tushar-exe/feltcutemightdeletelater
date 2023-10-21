#include<iostream>
using namespace std;
class Default
{
	int a,b,c,d;
	public:	
		Default(int a=1, int b=2,int c=3,int d=4)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			
			cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<endl;
		}
		
};

int main()
{
	Default D;
	Default D1(10);
	Default D2(10,20);
	Default D3(10,20,30);
	Default D4(10,20,30,40);
	
}
