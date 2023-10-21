#include "Library.h"
Library::Library()
{
	cout<<"In Constructor of Library."<<endl;	
}

Library::Library(char * lName, int lRefNo)
{
	strcpy(this->lName, lName);
	this->lRefNo=lRefNo;
	
	
}

void Library::display()
{
	cout<<"Library  Name is "<<lName<<" and reference number is "<<lRefNo<<endl;
}
Library::~Library()
{
	cout<<"In Destructor of Library."<<endl;
}


