#include<iostream>
using namespace std;
void prntline();
void integer()
{
	int i;
	cout<<"\nInteger\t\t"<<sizeof(i)<<endl;
}
void floats()
{
	float f;
	cout<<"\nFloat\t\t"<<sizeof(f)<<endl;
}
void character()
{
	char c;
	cout<<"\nCharacter       "<<sizeof(c)<<endl;
}
void doubles()
{
	double d;
	cout<<"\nDouble\t\t"<<sizeof(d)<<endl;
}
int main()
{
	prntline();
	cout<<"\nDatatype       "<<"Size"<<endl;
	prntline();
	integer();
	prntline();
	floats();
	prntline();
	doubles();
	prntline();
	character();
	prntline();
	return 0;
}

void prntline()
{
	int i=0;
	while(i<=10)
	{
		cout<<"===";
		i++;
	}
}
