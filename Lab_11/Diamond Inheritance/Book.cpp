#include "Book.h"

Book::Book()
{
	cout<<"In Constructor of Book."<<endl;
}

Book::Book(char* bName, int bRefNo, char* aName, int aRefNo, char* dName, int dRefNo, char* lName, int lRefNo):
Author(aName, aRefNo), Distributor(dName, dRefNo), Library(lName, lRefNo)
{
	strcpy(this->bName, bName);
	this->bRefNo=bRefNo;
	
	
}

void Book::display()
{
	Library::display();
	Distributor::display();
	Author::display();
	cout<<"Book Name is "<<bName<<" and reference number is "<<bRefNo<<endl;
}

Book::~Book()
{
	cout<<"In Destructor of Book."<<endl;
}
