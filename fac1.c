#include<stdio.h>
void main()
{
    int i,fact=1;
    printf("Enter anumber = ");
    scanf("%d",&i);
    while (i>=1)
    {
        fact=fact*i;
        i--;
    }
    printf("%d",fact);
}