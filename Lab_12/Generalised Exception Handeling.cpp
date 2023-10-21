#include<iostream>
using namespace std;

float division(int x,int y){
	if(y==0){
		throw "Attempted to divide by zero ";
		
	}
	return x/y;
}
int main(){
	int i =50,j =0;
	float k=0;
	try
	{
		k= division(i,j);
		cout<<k<<endl;
	}
	
	catch(...)
	{
		cerr<<"Error Handeler\n";
	}
	cout<<"end of main"<<endl;
	return 0;
}
