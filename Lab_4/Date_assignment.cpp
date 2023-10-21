#include<iostream>
using namespace std;

class Date1
{
     int dd,mm,yyyy;
     
    public:
     void getData()
     {
     	cout<<"Enter the DD-MM-YYYY: "<<endl;
     	cin>>dd>>mm>>yyyy;
	 }
	 
	 void display()
	 {
	 	cout<<"Entered date is: "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
	 }
	 
	 void display2()
	 {
	 	cout<<"Modified date is: "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
	 }
	 
	 
	 void setDate(int d)
	 {
	 	dd=d;
	 }
	 int getDate()
	 {
	 	return dd;
	 }
	 
	 
	  void setMonth(int m)
	 {
	 	mm=m;
	 }
	 
	 int getMonth()
	 {
	 	return mm;
	 }
	 
	 
	  void setYear(int y)
	 {
	 	yyyy=y;
	 }
	 
	 int getYear()
	 {
	 	return yyyy;
	 }


	
};


int main()
{
	Date1 c1;
	c1.getData();
	c1.display();
	cout<<"Size of object:"<<sizeof(c1)<<endl;
	
	Date1 c2; 
	c2.setDate(04);
	c2.setMonth(06);
	c2.setYear(2001);
	 
	c2.getDate();
	c2.getMonth();
	c2.getYear();
	c2.display2();
	 
	return 0;
}
