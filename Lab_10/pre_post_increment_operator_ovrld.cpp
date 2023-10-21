#include<iostream>
using namespace std;

class Complex
{
	int real, img;
	
	public:
		Complex();
		Complex(int,int);
		Complex operator++();
		Complex operator++(int);
		void display();
		
};
Complex :: Complex()
{
	real = 10;
	img = 20;
}
Complex ::Complex(int real ,int img)
{
	this->real=real;
	this->img=img;
}
Complex Complex :: operator++()
{
	++real;
	++img;
	return (*this);
}
Complex Complex :: operator++(int)
{
	Complex temp = (*this); 
	++this->real;
	++this->img;
	return temp;
}
void Complex::display()
{
	if(img>0)
	cout<<"Real and imaginary values are "<<real<<" + "<<img<<" i"<<endl;
	else
	cout<<"Real and imaginary values are "<<real<<img<<" i"<<endl;

}

int main()
{
	Complex c1;
	Complex c2=++c1;
	c1.display();
	c2.display();
	Complex c3=c1++;
	c3.display();
	c1.display();

	
	
	return 0;
}
 
