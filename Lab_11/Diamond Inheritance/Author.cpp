#include "Author.h"

Author::Author()
{
	cout<<"In Constructor of Author."<<endl;
}

Author::Author(char* aName, int aRefNo):Library(lName, lRefNo)
{
	strcpy(this->aName,aName);
	this->aRefNo=aRefNo;
	
	
}

void Author::display()
{
	cout<<"Author Name is "<<lName<<" and reference number is "<<lRefNo<<endl;
}
Author::~Author()
{
	cout<<"In Destructor of Author."<<endl;
}
