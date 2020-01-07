#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	if(n/2==0)
	{
	for(i=1;i<=n/2;i++)
	{
		for(j=n/2;j>i;j--)
			printf(" ");
		for(k=0;k<(2*i)-1;k++)
			printf("*");
		printf("\n");
	}
	for(i=0;i<n-(n/2);i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0;k<2*((n-n/2)-i)-1;k++)
			printf("*");
		printf("\n");
	}
	}
	else
	{
	for(i=1;i<=n/2;i++)
	{
		for(j=n/2;j>=i;j--)
			printf(" ");
		for(k=0;k<(2*i)-1;k++)
			printf("*");
		printf("\n");
	}
	for(i=0;i<n-(n/2);i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0;k<2*((n-n/2)-i)-1;k++)
			printf("*");
		printf("\n");
	}
	}
	return 0;
}
