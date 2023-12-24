#include<stdio.h>
void even(int);
void main()
{
    int n; 
printf("Enter Number : ");
scanf("%d",&n);
even(n);
}
void even(int n)
{
    if(n%2==0)
    printf("Even Number");
    else
    printf("Odd Number");
}