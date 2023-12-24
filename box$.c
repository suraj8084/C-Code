#include<stdio.h>
void main()
{
    int i,j,k,l;
        for (i=1;i<=5;i++)
    {
        if(i==5)
        {
            for(j=1;j<=3;j++)
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
            for(j=1;j<=i-2;j++)
            {
                printf(" ");
            }   
        }       
        for(l=1;l<=1;l++)
{
    printf("$");
}
        if(i==1)
        {
            for(j=1;j<=3;j++)
            {
                printf("*");
            }
        }
else if( i>=2 && i<=4)
        {   
            for(j=1;j<=4-i;j++)
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