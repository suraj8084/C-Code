#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    char s,c;
    char i,a[3][3],num;
    printf("Choose Your Character : ");
    scanf("%c",&s);
    srand(time(0));
    num = rand()%9 + 1;
    printf("%d",num);
    if(s=='x')
    {
        c=='o';
    }
    else if(s=='o')
    {
        c=='x';
    }
    srand(time(0));
    num = rand()%9 + 1;
    
    if(num==1)
    {
        a[0][0]=c;
    }
    else if(num==2)
    {
        a[0][1]=c;
    }
    else if(num==3)
    {
        a[0][2]=c;
    }
    else if(num==4)
    {
        a[1][0]=c;
    }
    else if(num==5)
    {
        a[1][1]=c;
    }
    else if(num==6)
    {
        a[1][2]=c;
    }
    else if(num==7)
    {
        a[2][0]=c;
    }
    else if(num==8)
    {
        a[2][1]=c;
    }
    else if(num==9)
    {
        a[2][2]=c;
    }   
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for
            if(num==1)
            printf("%c",a[i][j]);
        }
    }
            
}