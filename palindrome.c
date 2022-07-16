#include<stdio.h>
int main()
{
	int i,n=224352;
	int x=0;
	int y=n;
	while(n>0)
	{
		x=x*10+n%10;
		n=n/10;
	}
	if(x==y)
	{
		printf("palindrome");
	}
		else
			printf("not palindrome");
}
