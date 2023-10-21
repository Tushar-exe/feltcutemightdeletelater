#include<iostream>
using namespace std;
class time
{
      int hr;
      int min;
      int sec;
      public:
             time(int h,int m,int s)
             {
                   hr=h;
                   min=m;
                   sec=s;
             }
             
             friend time operator-(time &,int);
             friend time operator+(time &,int);
             void display()
             {
                  cout<<"time:"<<hr<<":"<<min<<":"<<sec<<endl;
             }
};
time operator-(time &x,int y)
{
     x.hr= x.hr-y;
     x.min= x.min-y;
     x.sec= x.sec-y;
     return x;
}
time operator+(time &x,int y)
{
     x.hr= x.hr+y;
     x.min= x.min+y;
     x.sec= x.sec+y;
     return x;
}
int main()
{
    int hr,min,sec;
    cout<<"Enter hr:";
    cin>>hr;
    cout<<"Enter Min:";
    cin>>min;
    cout<<"Enter sec:";
    cin>>sec;
    
    time t(hr,min,sec);
    t=t-1;
    t.display();
    
    return 0;
}
