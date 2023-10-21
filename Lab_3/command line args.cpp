#include <iostream>
using namespace std;

int main(int argc)
{
	cin>>argc;

	for (int i = 0; i < argc; ++i)
		cout << argc << "\n";
	
	cout << "You have entered " << argc <<" \nIt is printed " << argc << " times"<< endl;

	return 0;
}

