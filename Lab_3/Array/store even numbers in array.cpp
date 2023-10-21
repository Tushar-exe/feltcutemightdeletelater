#include<iostream>
using namespace std;
int main()
{
	int arr[5], brr[5];
	int j=0;
	int i;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter "<<i<<" Elements\n";
		cin>>arr[i];
	}
	
	for(i=0; i<5; i++)
	{
		if(arr[i]%2==0)
		{
			brr[j]=arr[i];
			j++;
		}	
	}
	for(i=0; i<j;i++)
	cout<<"Even Number is "<<brr[i]<<" ";
}
	
