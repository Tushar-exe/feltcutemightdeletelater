#include "Distributor.h"

Distributor::Distributor()
{
	cout<<"In Constructor of Distributor."<<endl;
}

Distributor::Distributor(char* dName, int dRefNo):Library(lName, lRefNo)
{
	strcpy(this->dName,dName);
	this->dRefNo=dRefNo;
	
	
}

void Distributor::display()
{
	cout<<"Distributor  Name is "<<dName<<" and reference number is "<<dRefNo<<endl;
}

Distributor::~Distributor()
{
	cout<<"In Destructor of Distributor."<<endl;
}
