#include<stdio.h>
void main()
{
	int i,l=0,s;
        int a[]={7,6,8,11,9};
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		if(a[i]>l)
		{
		s=l;
		l=a[i];
		}
			else if(a[i]>s)
			{	
				s=a[i];
			}
	}
	printf("second largest elements in the array is: %d ",s);
}
