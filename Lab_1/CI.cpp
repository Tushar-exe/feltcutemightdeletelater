#include<iostream>
using namespace std;
int main()
{
	
	double prn,intr,CI,amt;
	
	prn=10000;
	intr=5;
	
	amt=prn*((1+intr/100)*(1+intr/100));
	CI=amt-prn;
	cout<<"CI is "<<CI;
	cout<<"amount is "<<amt;
}
