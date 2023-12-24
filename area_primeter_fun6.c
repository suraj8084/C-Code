#include<stdio.h>
int swap(int,int);
void main()
{
    int a,b; 
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
printf("Before Swap a = %d, b = %d",a,b);
swap(a,b);
}
int swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("\nAfter Swap a = %d, b = %d",a,b);
}