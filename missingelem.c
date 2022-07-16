#include<stdio.h>
void main()
{
	int i;
	int a[]={1,2,3,0,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	int sum=n*((n+1)/2);
	for(i=0;i<n;i++)
	{
		sum=sum-a[i];
	}
	printf("missing element  is: %d ",sum);
}
