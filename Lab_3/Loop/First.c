#include <stdio.h>
#include <string.h>

//void check_palindrome(char *a);

int main()
{
	char a[]={"Anurag"};
	//char *b=&a[];
	int i,j;
	int l=strlen(a);
	int flag=0;
	
	for(i=0,j=l-1;j>i;i++,j--)
	{
		char ch=a[i];
		a[i]=a[j];
		a[j]=ch;
		
	}
	printf("%s\n",b);
	printf("%s\n",a);
	
	
}
