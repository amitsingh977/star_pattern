//star pattern with right angled triangle
#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);//Gets number of lines in the pattern
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
