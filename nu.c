#include<stdio.h>
#include<math.h>
int power(int,int);
void main()
{
    int n,r,c,a,term=0,sum=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%10;
        n=n/10;
        term++;
        c=term;
    }
    
    for(int i=1;i<=c;i++)
    {
        r=n%10;
        n=n/10;
        a=power(r,c);
        sum=sum+a;
        printf("%d",power(r,3));
    printf("%d",c);
    }
    
    
}
int power(int r,int c)
{
    if(c==0)
    return 1;
    
    return r*power(r,c-1);
}