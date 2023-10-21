#ifndef AUTHOR_H
#define AUTHOR_H

#include "Library.h"

class Author : virtual public Library
{
	public:
		char aName[20];
		int aRefNo;
		Author();
		Author(char* aName, int aRefNo);
		void display();
		~Author();
	protected:
};

#endif
