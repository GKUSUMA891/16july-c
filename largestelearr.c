#include<stdio.h>
void main()
{
	int a[]={7,8,5,11,6};
	int i=0;
        int n=sizeof(a)/sizeof(a[0]);
	int l=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>l)
			l=a[i];
	}
	printf("largest element is: %d ",l);
}
