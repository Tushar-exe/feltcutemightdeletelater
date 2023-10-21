#include<iostream>
using namespace std;
int main()
{
   int num;
   cin>>num;
   int flag=1;
   
   for(int i=2;i<num;i++)
   {
   	
   	if(num%i==0){
	   
    cout<<"Not a prime number";
    flag=0;
    break;
}
}

if(flag==1)
   	 cout<<"The given number is a prime number";
	  
	   
	   return 0;
}
