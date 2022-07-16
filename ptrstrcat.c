#include<stdio.h>
void main()
{
	char *a="hello";
	char *b="kush";
	char c[20];
	int i;
	while(*a!='\0')
	{
		c[i]=*(a+i);
		a++;
		i++;
	}
	while(1)
	{
		c[i]=*(b+i);
		b++;
		i++;
		if(c[i]=='\0')
			break;
		i++;
	}
	printf("concatinated string is: %s",c);
}
