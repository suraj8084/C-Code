#include<stdio.h>
void main()
{
 int a,b;
 printf("Enter number the value of a and b in binary\n");
 scanf("%d %d",&a ,&b);
 printf("A AND B = %d\n",a && b);
 printf("A OR B = %d\n",a ||b);
 printf("A XOR B = %d\n",a !=b);
}