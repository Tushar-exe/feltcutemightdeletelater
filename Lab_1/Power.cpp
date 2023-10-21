#include <iostream>
using namespace std;
int main()
{
	int base, ans=1, pow;
	
	cout<<"Enter Base \n";
	cin>>base;
	cout<<"Enter Exponent \n";
	cin>>pow;
	
	for(int i=1; i<=pow;i++)
	{
		ans=ans*base;
	}
	cout<<"Power of base "<<base<<" to the exponent of "<<pow<<" is "<<ans;
	
}
