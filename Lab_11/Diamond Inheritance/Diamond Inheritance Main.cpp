#include <iostream>
using namespace std;
#include"Library.h"
#include"Distributor.h"
#include"Author.h"
#include"Book.h"
int main() 
{
	Book b1("As You Know It...", 1003, "Omkar Ware", 1023, "Kindle", 1020, "CDAC Library", 1024);
	b1.display();
	return 0;
}
