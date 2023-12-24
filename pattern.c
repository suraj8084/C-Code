#include<stdio.h>
void main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=n-i+1;j--)
        {
            printf("%d ",j);
        }
        for(j=2*(n-i)-1;j>=1;j--)
        {
        printf("%d ",n+1-i);
        }
        for(j=n-i+1;j<=n;j++)
        {
            if(j==1)
            continue;
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i+1;j--)
        {
            printf("%d ",j);
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(i==n)
            continue;
        printf("%d ",i+1);
        }
for(j=i+1;j<=n;j++)
        {
            printf("%d ",j);
        }
        if(i==n)
            continue;
        printf("\n");
    }
}