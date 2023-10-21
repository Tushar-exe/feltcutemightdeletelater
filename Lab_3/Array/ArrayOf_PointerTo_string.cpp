#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	char *arr[5]={"Rohan","Rahul","Ram","Rohit","Rachna"};
	int i,x;
		
		for(i=0;i<6;i++)
		{
			x=strlen(arr[i]);
			cout<<arr[i]<<endl; // gives value at arr[i];
			cout<<(arr+i)<<endl;
		
			int j;
		for(j=0;j<=x;j++)
		{
			cout<<*(*(arr+i)+j)<<"  ";	
		}
			cout<<endl;
	}
	return 0;
}
