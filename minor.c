#include<stdio.h>
void main()
{
    int a[5][5],i,j,m,n,k,l;
    printf("Enter Order of Second Matrix :");
    scanf("%d %d",&m,&n);
    printf("Enter matrix :\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(k=0;k<m;k++)
        {
        for(l=0;l<n;l++)
        {
        printf("M%d%d :\n",k,l);
        for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
        {
        if(i==k || j==l )
        {
        continue;
        }
        else
        {
        printf("%d ",a[i][j]);
        }
        }
        if(i!=k)
        printf("\n");
        }
        }
        }
}