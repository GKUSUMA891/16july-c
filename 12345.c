#include<stdio.h>
void main()
{
	int i,j,k=1,n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",k);
			k++;
		}
		printf("\n");
	}
	//printf("\n");
}
