#include<stdio.h>
void main()
{
    int i,j,k,l;
        for (i=1;i<=5;i++)
    {
        if(i==5)
        {
            printf("$");
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
            if(i==3)    
            printf(" ");
            else if(i==4)
            printf("$ ");  
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
            printf("$");
        }
else if( i>=2 && i<=4)
        {   
            if(i==2)    
            printf(" $");
            else if(i==3)
            printf(" ");
            for(k=1;k<=1;k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}