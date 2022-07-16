#include<stdio.h>
void main()
{
	int i=0,j=0;
	char a[]="hello";
	char b='l';

	while(a[i]!='\0')
	{
		if(a[i]==b)
			break;
				i++;
	}
	printf("first occurence of letter in string is:%s",i);
}
