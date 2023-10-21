
#include<iostream>
#include<fstream>

using namespace std;
main()
{
	int rno,fee;
	char name[50];

	cout<<"Enter the Roll Number:";
	cin>>rno;
	
	cout<<"\nEnter the Name:";
	cin>>name;
	
	cout<<"\nEnter the Fee:";
	cin>>fee;

	ofstream fout("C:\student.txt");

	fout<<rno<<"\t"<<name<<"\t"<<fee; 

	fout.close();

	ifstream fin("C:\student.txt");

	fin>>rno>>name>>fee; 

	fin.close();

	cout<<endl<<"Roll number of "<<name<<" is "<<rno<<" and his fee is "<<fee<<endl;
	return 0;
}

