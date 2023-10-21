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
	 
	
	 
	 void setDate(int day)
	 {
	 	dd=day;
	 	cout<<"Entered date is: "<<dd<<endl;
	 }

	 
	 void setDate(int day,int mon)
	 {
	    dd=day;
	    mm=mon;
	    cout<<"Entered date is: "<<dd<<"/"<<mm<<endl;
	 }
	 
	 
	  void setDate(int day,int mon,int year)
	 {
	    dd=day;
	    mm=mon;
	    yyyy=year;
	    cout<<"Entered date is: "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
	 }
	 



	
};


int main()
{

	
	Date1 c2; 
	c2.getData();
	c2.display();
	c2.setDate(04);
	c2.setDate(04,06);
	c2.setDate(04,06,2001);
	 


	 
	return 0;
}
