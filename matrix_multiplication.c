#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],c[5][5],i,j,m,n,p,q,k;
    printf("Enter the order of 1st matrix = ");
    scanf("%d %d",&m,&n);
    printf("Enter the order of 2nd matrix = ");
    scanf("%d %d",&p,&q);
    if(n!=p)
    printf("Multiplication not possible");
    else
    {
    printf("Enter First matrix : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Second Matrix : ");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Multiplication of Matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
    }
}