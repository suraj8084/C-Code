#include<stdio.h>
void main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=8;j>=i;j--)
        {
            printf(" ");
        }
        printf("*");
        if(i>=1 && i<=4 || i>=6 && i<=9)
        {
        for (int j=1;j<=2*i-2;j++)
        {
            printf(" ");
        }
        }
        else if(i==5)
        {
            for(int j=1;j<=8;j++)
            {
                printf("*");
            }
        }
        printf("*");
        for(int j=8;j>=i;j--)
        {
            printf(" ");
        }
        if(i>=1 && i<=8)
        printf("\n");
    }
}