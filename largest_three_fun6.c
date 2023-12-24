#include<stdio.h>
void large(int,int,int);
void main()
{
    int a,b,c; 
printf("Enter three Number : ");
scanf("%d %d %d",&a,&b,&c);
large(a,b,c);
}
void large(int a,int b,int c)
{
    if(a>b && a>c)
    printf("Largest Value is %d",a);
    else if(b>c)
    printf("Largest Value is %d",b);
    else
    printf("Largest Value is %d",c);

}