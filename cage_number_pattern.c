
#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);//Enter the number of lines in pyramid 
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<i;j++)
            printf("%d ",n-j); 
        for(k=0;k<2*(n-i)-1;k++)
            printf("%d ",n-j);
        
        for(j=n-j+1;j<=n;j++)
            printf("%d ",j);
        
        printf("\n");
    }

    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
            printf("%d ",j);
        for(k=0;k<(2*i)-1;k++)
            printf("%d ",j);
        for(j=i+1;j<=n;j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}
