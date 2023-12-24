#include<stdio.h>
void main()
{
    int i,j ;
    for(i=1;i<=6;i++)
    {
        if (i==1 || i==6)
        {
            for(j=1;j<=6;j++)
            {
                printf("*");
            }
        }
        else if(i>=2 && i<=5)
        {
            for(j=1;j<=6-i;j++)
            {
                printf(" ");
            }
            printf("*");
        }
        
        printf("\n");
    }
}