#include<stdio.h>
void main()
{
    int a[5],i,max;
    printf("Enter Number : ");
    for ( i = 0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for ( i = 0; i<5; i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("Max = %d",max);
}