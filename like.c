#include<stdio.h>
void main()
{
    int i,j,k;
    
    for (i=1;i<=5;i++)
    {
        if(i>=1 && i<=3)
        {
            for(k=1;k<=i-1;k++)
            {
                printf(" ");
            }
            for(j=1;j<=2*i-1;j++)
            {
                printf("*");
            }
        }
        else if( i>=4 && i<=5)
        {
            for(j=1;j<=11-(i*2);j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}