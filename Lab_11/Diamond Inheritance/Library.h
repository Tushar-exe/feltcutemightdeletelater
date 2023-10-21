#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
using namespace std;
#include <string.h>
class Library
{
	public:
		char lName[20];
		int lRefNo;
		Library();
		Library(char*, int);
		void display();
		~Library();
	protected:
};

#endif
