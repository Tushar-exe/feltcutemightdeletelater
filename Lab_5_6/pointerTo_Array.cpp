#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	int *ptr[5];
	cout<<"enter the array elements"<<endl;
	int i;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	
	}
	
    for(i=0;i<5;i++)
	{
		ptr[i]=&arr[i];
			
	}
	
	for(i=0;i<5;i++)
	{
		cout<<*ptr[i]<<endl;
	}
	
}
