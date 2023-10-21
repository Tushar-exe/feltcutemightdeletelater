#include <iostream>
using namespace std;

class Date
{
	int dd,mm,yy;
	
	public:
		Date()
		{
			cout<<"In Default Constructor\n";
		}
		
		
		Date(int dd, int mm, int yy)
		{
			this->dd=dd;
			this->mm=mm;
			this->yy=yy;
		}
		void show()
		{
			cout<<"Date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		
		~Date()
		{
			cout<<"In Destructor\n";
		}
};

int main()
{
	Date d1(18,9,2023);
	Date d2(d1);
	d1.show();
	d2.show();
}
