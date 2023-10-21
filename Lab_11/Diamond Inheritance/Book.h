#ifndef BOOK_H
#define BOOK_H

#include "Distributor.h"
#include "Author.h"
class Book : public Distributor, public Author
{
	public:
		char bName[20];
		int bRefNo;
		Book();
		Book(char* bName, int bRefNo, char* aName, int aRefNo, char* dName, int dRefNo, char* lName, int lRefNo);
		void display();
		~Book();
	protected:
};

#endif
