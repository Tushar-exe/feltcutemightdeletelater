#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int max;
	
	for(int i=0; i<5; i++)
	{
		cout<<"Enter "<<i<<" Elements\n";
		cin>>arr[i];
	}
	max=arr[0];
	for(int i=0; i<5; i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	
	cout<<"Maximum element is "<<max;
}
	
