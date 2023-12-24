#include<stdio.h>
void main()
{
    int i,j;
    for (i=1;i<=7;i++)
            {
                printf("*");
            }
    for (i=1;i<=4;i++)
    {
         if(i>=2 && i<=4)
        {
            for(j=3;j>=i-1;j--)
            {
                printf("*");
            }
            for(j=1;j<=2*i-3;j++)
            {
                printf(" ");
            }
            for(j=3;j>=i-1;j--)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}