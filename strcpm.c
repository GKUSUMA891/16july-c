#include<stdio.h>
int main()
{
	int i;
	char a[]="hello world";
	char b[]="hello word";
	 while(a[i]!='\0' && b[i]!='\0')
	 {
		 if(a[i]!=b[i])
			 break; 
			 i++;
	 }
	 if(a[i]=='\0' && b[i]=='\0')
		 printf("both are equal");
	 else
		 printf("both are not equal");
}
