#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
        int main()
{
    int n,a[1000],i,sum=0;
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    getchar();
    scanf("%c",&c);
    if(c=='b')
    {
        for(i=0;i<n;i++)
        {
       if(i%2==0)
        {
            sum=sum+a[i];
        }
        }
    }
    else if(c=='g')
    {
        for(i=0;i<n;i++)
        {
       if(i%2==1)
        {
            sum=sum+a[i];
        }
        }
    }
    printf("%d",sum);
    return 0;}