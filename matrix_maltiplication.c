#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],c[5][5],i,j,k,m,n,p,r,s,t;
    printf("Enter Order of first Matrix :");
    scanf("%d %d",&m,&n);
    printf("Enter Order of Second Matrix :");
    scanf("%d %d",&p,&r);
    if(n!=p)
    printf("Matrix Multiplication is Not Possible.");
    else
    {
        printf("Enter first matrix :\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter Second matrix :\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<r;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("Multiplyed matrix :\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<r;j++)
            {
                c[i][j]=0;
                for(k=0;k<r;k++)
                {
                    c[i][j]=c[i][j]+a[j][k]*b[k][j];
                }
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
}