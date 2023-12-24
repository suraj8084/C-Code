#include<stdio.h>
void main()
{
    int i,j,k,l;
    for (i=1;i<=4;i++)
    {
        if(i=1)
        {
            for (j=1;j<=7;j++)
            {
                printf("*");
            }
        }
        else if(i>=2 && i<=4)
        {
            for(k=3;k>=i-1;k--)
            {
                printf("*");
            }
            for(l=1;l<=2*i-3;l++)
            {
                printf("$");
            }
            for(k=3;k>=i-1;k--)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    
}