#include<stdio.h>
void main()
{
	int i,n=1658;
	int x=0;
	while(n>0)
	{
		x=x*10+n%10;
		n=n/10;
	}
	printf("the nreturn nuimber is:%d ",x);
}
