#include <iostream>
using namespace std;

template <class X>
void Sort(X * arr)
{
	int i,j;
	int temp[1];
	for(i=0; i<5;i++)
	{
		for(j=0; j<5-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp[1]=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp[1];
			}
		}
	}
	
}

		

int main()
{
	int arr[5]={5,1,8,9,7};
	
	Sort(arr);
	
	for(int i=0; i<5;i++)
		cout<<arr[i]<<" ";
}
