#include<stdio.h>
void main()
{
    int a[5],i,l;
    for(i=0;i<5;i++)
    {
        printf("Enter %d number = ",i+1);
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>l)
        l=a[i];
    }
    printf("%d",l);
}