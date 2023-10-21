#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int brr[5];
	for(int i=0; i<5; i++)
	{
		cout<<"Enter "<<i<<" Elements\n";
		cin>>arr[i];
	}
	
	for(int i=0; i<5; i++)
	{
		brr[i]=arr[i];
	}
	
	for(int i=0; i<5; i++)
	{
		cout<<"Array 1\n"<<"Element "<<i<<"is "<<arr[i]<<endl;
		cout<<"Array 2\n"<<"Element "<<i<<"is "<<brr[i]<<endl;
	}
	
	
}
