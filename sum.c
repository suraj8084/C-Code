#include<stdio.h>
int sum(int a,int b);
void main()
{
    printf("sum = %d",sum(3,5));
}
int sum(int a,int b){
    return a+b;
}