#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[1000];
    int l,c=0,b,z,y,a,max=0,min=1000,x,w;
    printf("Enter String = ");
    gets(s);
    l=strlen(s);
    z=0;
    for(int i=0;i<=l;i++)
    {
        c++;
        if(s[i]==' ')
        {
            a=c-1;
            if(a>max)
            {
                max=a;
            }
            c=0;
            if(a<min)
            {
                min=a;
            }
            z++;
        }
        y=z;
        w=max;
        x=min;
        if(s[i]=='\0')
        {
            a=c-1;
           if(a>w)
           max=a;
           printf("\n");
           if(a<x)
           min=a;
        }
    }
    printf("max letter = %d\nmin letter = %d",max,min);
    getch();
}