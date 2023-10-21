

#include <iostream>
using namespace std;
int cal_len(char *);
int main()
{
	char a[]="PG-DAC";
	int result;
	result=cal_len(a);
	cout<<"The length of the string is"<<result;
	
	return 0;
	
}

int cal_len(char *b)
{
	int len=0;
	int i;
	for(i=0;b[i]!='\0';i++)
	len++;
	
	return len;
}


//
#include <stdio.h>
#include<string.h>

int main()
{
	char a[]="PG-DAC";
	char b[]="CDAC ";
	int result;

	printf("The length of the string is:%d\n",strlen(a));
	printf("The length of the string is:%d\n",strlen(b));
	printf("Concatinated string is: %s\n", strcat(b,a));	
	printf("Reversed string is: %s\n", strrev(b));
	printf("Copied string: %s\n", strcpy(b,a));
	printf("Compare string: %d\n",strcmp(a,b));
	return 0;
	
}

#include<stdio.h>
#include<string.h>
void ustrcat(char*, char*);
int main()
{
	char a[]="abc", b[]="xyz";
	char res[]={"pqrstuvw"};
	
	cout<<"Enter string1:";
	cin>>a;
	cout<<"Enter string2:";
	cin>>b;
    cout<<"before concat string is:%s %d\n"<<a<<&a;
   
	ustrcat(a, b);//abcxyz
	cout<<"Concatinated string is:%s %d\n"<< a<<&a;//abcxyz
		//strcpy(b,a);
	cout<<a;
	cout<<sizeof(a);
	cout<<&a;
	cout<<strlen(a);
}

void ustrcat(char* p, char* q)
{
	int i;
	for(i=0; *p!='\0';i++)
	{
		p++;
	}
	while(*q!='\0')
	{
		*p=*q;
		p++;
		q++;
	}
	*q='\0';
	
}
//
//
//
//#include <stdio.h>
//#include <string.h>
//
//void check_palindrome(char *a);
//
//int main()
//{
//	char a[]={"Anurag"};
//	char *b=&a[];
//	int i,j;
//	int l=strlen(a);
//	int flag=0;
//	
//	for(i=0,j=l-1;j>i;i++,j--)
//	{
//		char ch=a[i];
//		a[i]=a[j];
//		a[j]=ch;
//		
//	}
//	cout<<b;
//	cout<<<a;
//	
//	
//}
