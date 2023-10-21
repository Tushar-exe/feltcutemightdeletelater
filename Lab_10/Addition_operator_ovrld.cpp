#include<iostream>
using namespace std;

class Complex{
	int real,img;
	public :
		Complex();
		Complex(int,int);
		void display();
		 Complex operator+( Complex &);
		 Complex operator-( Complex &);
		  Complex operator-( );
};

 Complex::Complex(){
	real = 5;
	img =6;
}

Complex ::Complex(int r,int i){
	real =r;
	img = i;
	
}
 Complex Complex :: operator+(Complex & c){
	Complex t;
	t. real = this->real+ c.real;
	t. img = this->img+c.img;
		return t;
	
}
  Complex  Complex :: operator-(Complex & c){
	
		Complex t;
	t.real = this->real- c.real;
		t. img = this->img-c.img;
		return t;
	
}
 Complex  Complex :: operator-( ){
		Complex t;
	t. real = - real;
		t.img = -img;
		return t;
	
}
 void Complex :: display(){
 	if(img>0)
	
	cout<<"Real and imaginary values are "<<real<<" + "<<img<<" i"<<endl;
	
	else
		cout<<"Real and imaginary values are "<<real<<img<<" i"<<endl;

	
}

int main(){
	
	Complex c1(4,1);
	Complex c2;
	Complex c3 =c1-c2;// c1.operator-(c2);
	c3.display();
	Complex c4 = c1+c2;//c1.operator+(c2);
	c4.display();
	Complex c5 =-c4;
	c5.display();
	
	return 0;
}
