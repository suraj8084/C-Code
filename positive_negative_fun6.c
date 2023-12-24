#include<stdio.h>
void positive(int);
void main()
{
    int n; 
printf("Enter the Number : ");
scanf("%d",&n);
positive(n);
}
void positive(int n)
{
    if(n>0)
    printf("positive");
    else if(n<0)
    printf("negative");
    else
    printf("zero");

}