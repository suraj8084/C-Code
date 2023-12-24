#include<stdio.h>
void main()
{
    int i,j,k=i+1,l=i+1, m=i+1;
        for (i=1;i<=6;i++)
    {
        for(j=1;j<=6-i;j++)
        {
            printf(" ");
        }
        printf("%d ",1);
        if(i>=2 && i<=6)
        {
        printf("%d ",i-1);
        if(i>=3 && i<=6)
        {
            printf("%d ",m);
            m=m+i-1;
            if(i>=4 && i<=6)
        {
            printf("%d ",l);
            l=l+((i-3)*3);
        }
        if(i>=5 && i<=6)
        {
            printf("%d ",k);
            k=k+4;
            if(i==6)
        {
            printf("%d ",1);
        }}}}
        printf("\n");
    }
}