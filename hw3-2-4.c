#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,k;
    for(i=0; i<=4; i++)
    {
        printf("\n");
        k=pow(2,i);
        for(j=k-i; j<=10;j++)
        {
            printf("%d",j);
        }
    }
}