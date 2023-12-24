#include<stdio.h>
void main()
{
    int i,j,k;
        for (i=1;i<=5;i++)
    {
        if(i==1 || i==5)
        {
            for(j=1;j<=5;j++)
            {
                printf("*");
            }
        }
        else if( i>=2 && i<=4)
        {
            for(k=1;k<=1;k++)
            {
                printf("*");
            }
            for(j=1;j<=4;j++)
            {
                printf(" ");
            }
            for(k=1;k<=1;k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}