#include<stdio.h>
void main()
{
	int a[]={727,8559,13323,76878,12321};
	int l=0,i,x;
	int y=0;
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		x=a[i];
		while(x>0)
		{
			y=y*10+x%10;
			x=x/10;
		}
		if(a[i]==y)
		{
			if(y>l)
				l=y;
		}
		y=0;
	}
	printf("largest palindrome is:%d ",l);
}
