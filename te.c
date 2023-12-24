#include<stdio.h>
void main(){
    int i,j;
    char a[3][3]={'x','o','o','o','x','o','o','o','o'};
int count=1,z,r,q;
if(a[0][1]=='x')
z=2;
else if(a[0][2]=='x')
z=3;
else if(a[1][0]=='x')
z=4;
else if(a[1][1]=='x')
z=5;
else if(a[1][2]=='x')
z=6;
else if(a[2][0]=='x')
z=7;
else if(a[2][1]=='x')
z=8;
else if(a[2][2]=='x')
z=9;

a[2][1]='x';
for(int i=2;i<=9;i++)
{
    if(i!=z){
switch (i)
{
case 2:
    {
        if(a[0][1]=='x')
        printf("%d",i);
    break;
    }
    case 3:
    {
        if(a[0][2]=='x')
        printf("%d",i);
    break;
    }
    case 4:
    {
        if(a[1][0]=='x')
        printf("%d",i);
    break;
    }
    case 5:
    {
        if(a[1][1]=='x')
        printf("%d",i);
    break;
    }
    case 6:
    {
        if(a[1][2]=='x')
        printf("%d",i);
    break;
    }
    case 7:
    {
        if(a[2][0]=='x')
        printf("%d",i);
    break;
    }
    case 8:
    {
        if(a[2][1]=='x')
        printf("%d",i);
    break;
    }
    case 9:
    {
        if(a[2][2]=='x')
        printf("%d",i);
    break;
    }
    
default:
    break;
}
    }
}


printf("\n%d",z);
}