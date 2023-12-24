#include<stdio.h>
void main()
{
    int a,b;
    char c;
    printf("enter first number = ");
    scanf("%d",&a);
    getchar();
    printf("enter the operator = ");
    scanf("%c",&c);
    printf("enter second number = ");
    scanf("%d",&b);
    switch(c)
    {
        case '+':
        printf("Sumation = %d",a+b);
        break;
        case '-':
        printf("Substraction = %d",a-b);
        break;
        case '*':
        printf("Multiplycation = %d",a*b);
        break;
        case '/':
        printf("Division = %f",(float)a/b);
        break;
        case '%':
        printf("Remainder = %d",a%b);
        break;
    }
}