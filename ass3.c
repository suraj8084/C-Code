#include<stdio.h>
int large (int *,int*,int*);
void main()
{
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",large(&a,&b,&c));
}
int large (int *a,int*b,int*c)
{
    if(*a>*b && *a>*c)
    return *a;
    else if(*b>*c)
    return *b;
    else
    return *c; 
}