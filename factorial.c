#include<stdio.h>
int factorial(int a);
void main(){
    int a;
    printf("Enter a value : ");
    scanf("%d",&a);
    int c= factorial(a);
    printf("Factorial of %d is %d",a,c);
}
int factorial(int a){
    if(a==0){
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }
}