
#include <bits/stdc++.h>
using namespace std;
int check_Num(int ,int);
int main()
{
	int num1, num2;
	cout<<"Enter the Two Numbers\n";
	cin>>num1>>num2;
	
	int result=check_Num(num1,num2);
//	cout<<result;
	return 0;
}



int check_Num(int num1, int num2)
{
	if(num1>num2)
	{
	cout<<"The greater number is "<<num1;
}
	if(num1==num2)
	cout<<"Both the numbers are equal";
	
	
	
}

*/
/*

#include <bits/stdc++.h>
using namespace std;

//int Is_Armstrong(int num);

int main()
{
	int num;
	cin>>num;
	int res=0;
//	int temp;
	
	while(num>0)
	{
		int num1=num%10;
		res=res+num1;
		num=num/10;	
		
		
	}
	

//if (temp==res)
//cout<<"given no is armstrong number";

cout<<"the sum is:"<<res;
	return 0;
}
*/




#include <bits/stdc++.h>
using namespace std;
void cal_Fibonacci(int);
int main()
{
	

	
	cal_Fibonacci(10);
	
}

void cal_Fibonacci(int a)
{
    int num1=0;
	int num2=1;
	int num3;
	
	cout<<num1<<" "<<num2<<" ";
	
	for(int i=2;i<=a;i++)
	{
		num3=num1+num2;
		cout<<num3<<" ";
		num1=num2;
		num2=num3;
	}
}

