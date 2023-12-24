#include<stdio.h>
void main()
{
    int i,n;
    float sum=0;
    printf("Enter a number = ");
    scanf("%d",n);
    for(i=1;i<=n;i++)
    
        sum=sum+(float)1/i*i;
    
    printf("Sum Of Series = %f",sum);
}