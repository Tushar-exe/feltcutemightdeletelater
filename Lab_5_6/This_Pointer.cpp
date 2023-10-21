#include <iostream>
using namespace std;

class Learn
{
   int a, b;
   int p;float q;
   public:
   	
   	 	
   	void show()
   	{  
   	   cout<<a<<endl<<b<<endl;
   		
	   }
	   
	   	void show2()
   	{  
   	   cout<<p<<endl<<q<<endl;
   		
	   }
	   

   	Learn(int a,int b)
   	{
   	   this->a=a;
   	   this->b=b;
   	   
	   }
	   
	   Learn(int p,float q)
	   {
   	   this->p=p;
   	   this->q=q;
   	   
	   }
   	
  
	
};

int main()
{
	Learn l1(10,20);
	l1.show();
	Learn l2(10,20.20f);
		l2.show2();
	return 0;
}





