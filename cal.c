#include<stdio.h>
struct num
{
    char c;
    int n;
};
void main()
{
    int i,sum;
    scanf("%d",&sum);
    struct num a[10];
    for(i=0;i<10;i++)
    {
        scanf("%c %d",&a[i].c,&a[i].n);
        
        if (a[i].c=='+')
        {
            sum = sum + a[i].n;
        }
        else if (a[i].c=='-')
        {
            sum = sum - a[i].n;
        }
        else
        {
            sum = sum + a[i].n;
            break;
        }
    }
    printf("%d",sum);
}