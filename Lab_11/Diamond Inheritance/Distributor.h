#ifndef DISTRIBUTOR_H
#define DISTRIBUTOR_H


#include "Library.h"

class Distributor : virtual public Library
{
	public:
		char dName[20];
		int dRefNo;
		Distributor();
		Distributor(char* dName, int dRefNo);
		void display();
		~Distributor();
	protected:
};

#endif
