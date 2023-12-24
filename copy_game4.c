#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
/*void num(char a[3][3], int b)
{
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=1;k<=9;k++)
            {
            if(k=b)
            {
                if(a[i][j]=='x');
                {
                    printf("invalied move.");
                    exit;
                }
            }
        }
        }
    }
}*/
void print(char a[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i,j,n,b,z,k,y,w,p,q,r,s,m,c,d,e;
    char a[3][3];
    a[0][0]='_';
    a[0][1]='_';
    a[0][2]='_';
    a[1][0]='_';
    a[1][1]='_';
    a[1][2]='_';
    a[2][0]='_';
    a[2][1]='_';
    a[2][2]='_';

    a[0][0]='x';
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter your choice position : ");
    scanf("%d",&n);

        if(n==1)
            {
                    printf("invalied move.");
                    exit(0);
                }
        else if(n==2)
a[0][1]='o';
 else if(n==3)
a[0][2]='o';
else if(n==4)
a[1][0]='o';
else if(n==5)
a[1][1]='o';
else if(n==6)
a[1][2]='o';
else if(n==7)
a[2][0]='o';
else if(n==8)
a[2][1]='o';
else if(n==9)
a[2][2]='o';
   
    if(n==1)
    {
                    printf("invalied move.");
                    exit(0);
                }
    else if(n==2 || n==3 || n==6)
    {
        srand(time(0));
b = rand()%4 +1;
if(b==1)
    a[1][0]='x';
    else if(b==2)
    a[1][1]='x';
    else if (b==3)
    a[2][0]='x';
    else
    a[2][2]='x';
    }
    else if(n==5 || n==9 || n==8)
    {
        srand(time(0));
b = rand()%4 +1;
if(b==1)
    a[0][1]='x';
    else if(b==2)
    a[0][2]='x';
    else if (b==3)
    a[1][0]='x';
    else
    a[2][0]='x';
    }
    else
    {
        srand(time(0));
b = rand()%4 +1;
if(b==1)
    a[1][1]='x';
    else if(b==2)
    a[0][1]='x';
    else if (b==3)
    a[0][2]='x';
    else
    a[2][2]='x';
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
}
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

/*
int count=1;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
    if(a[0][0]=='x')
    count++;
    else if(a[i][j]=='o' || a[i][j]=='_')
    {
        count++;
    }
    else if(a[i][j]=='x')
    {
        printf("%d",count);
    break;
    }
}}//for 2nd c*/



    printf("Enter your choice position : ");
    scanf("%d",&y);
    //num(a,b);

if(y==1 || y==n || y==z)
{
    printf("invalied move.");
    exit(0);
}

else if(y==2)
a[0][1]='o';
 else if(y==3)
a[0][2]='o';
else if(y==4)
a[1][0]='o';
else if(y==5)
a[1][1]='o';
else if(y==6)
a[1][2]='o';
else if(y==7)
a[2][0]='o';
else if(y==8)
a[2][1]='o';
else if(y==9)
a[2][2]='o';
else
printf("invalid number.");

if(a[0][1]=='x' && b!=3 && y!=3)
{
a[0][2]='x';
print(a);
printf("You lose!");
exit(0);
}

else if(a[0][2]=='x' && b!=2 && y!=2)
{
a[0][1]='x';
print(a);
printf("You lose!");
exit(0);
}

else if(a[1][0]=='x' && b!=7 && y!=7)
{
a[2][0]='x';
print(a);
printf("You lose!");
exit(0);
}

else if(a[2][0]=='x' && b!=4 && y!=4)
{
a[1][0]='x';
print(a);
printf("You lose!");
exit(0);
}

else if(a[1][1]=='x' && b!=9 && y!=9)
{
a[2][2]='x';
print(a);
printf("You lose!");
exit(0);
}

else if(a[2][2]=='x' && b!=5 && y!=5)
{
a[1][1]='x';
print(a);
printf("You lose!");
exit(0);
}

else if(a[0][2]!='x' && n==6 && y==9)
{
a[0][2]='x';
}

else if(a[1][2]!='x' && n==3 && y==9)
{
a[1][2]='x';
}
else if(a[2][2]!='x' && n==3 && y==6)
{
a[2][2]='x';
}

else if(a[0][2]!='x' && n==9 && y==6)
{
a[0][2]='x';
}

else if(a[1][2]!='x' && n==9 && y==3)
{
a[1][2]='x';
}
else if(a[2][2]!='x' && n==6 && y==3)
{
a[2][2]='x';
}


else if(a[2][1]!='x' && n==2 && y==5)
{
a[2][1]='x';
}

else if(a[1][1]!='x' && n==2 && y==8)
{
a[1][1]='x';
}
else if(a[0][1]!='x' && n==5 && y==8)
{
a[0][1]='x';
}
else if(a[2][0]!='x' && n==3 && y==5)
{
a[2][0]='x';
}
else if(a[1][1]!='x' && n==3 && y==7)
{
a[1][1]='x';
}
else if(a[0][2]!='x' && n==5 && y==7)
{
a[0][2]='x';
}
else if(a[1][0]!='x' && n==5 && y==6)
{
a[1][0]='x';
}
else if(a[1][1]!='x' && n==4 && y==6)
{
a[1][1]='x';
}
else if(a[1][2]!='x' && n==4 && y==5)
{
a[1][2]='x';
}
else if(a[2][2]!='x' && n==7 && y==8)
{
a[2][2]='x';
}
else if(a[2][1]!='x' && n==7 && y==9)
{
a[2][1]='x';
}
else if(a[2][0]!='x' && n==8 && y==9)
{
a[2][0]='x';
}


else if(a[2][1]!='x' && n==5 && y==2)
{
a[2][1]='x';
}

else if(a[1][1]!='x' && n==8 && y==2)
{
a[1][1]='x';
}
else if(a[0][1]!='x' && n==8 && y==5)
{
a[0][1]='x';
}
else if(a[2][0]!='x' && n==5 && y==3)
{
a[2][0]='x';
}
else if(a[1][1]!='x' && n==7 && y==3)
{
a[1][1]='x';
}
else if(a[0][2]!='x' && n==7 && y==5)
{
a[0][2]='x';
}
else if(a[1][0]!='x' && n==6 && y==5)
{
a[1][0]='x';
}
else if(a[1][1]!='x' && n==6 && y==4)
{
a[1][1]='x';
}
else if(a[1][2]!='x' && n==5 && y==4)
{
a[1][2]='x';
}
else if(a[2][2]!='x' && n==8 && y==7)
{
a[2][2]='x';
}
else if(a[2][1]!='x' && n==9 && y==7)
{
a[2][1]='x';
}
else if(a[2][0]!='x' && n==9 && y==8)
{
a[2][0]='x';
}
/*
else if(a[0][1]==2 && a[1][1]==5 && a[2][2]==9)
a[1][2]='x';//1l
else if(a[0][1]==2 && a[1][0]==4 && a[2][0]==7)
a[1][2]='x';//2w
else if(a[0][1]==2 && a[2][0]==7 && a[1][0]==4)
a[0][2]='x';//3w
else if(a[0][2]==3 && a[2][0]==7 && a[1][0]==4)
a[0][1]='x';//4w
else if(a[0][2]==3 && a[0][1]==2 && a[1][0]==4)
a[2][1]='x';//5w
else if(a[1][0]==4 && a[0][1]==2 && a[0][2]==3)
a[2][1]='x';//15w
else if(a[1][0]==4 && a[1][1]==5 && a[2][2]==9)
a[0][1]='x';//6l
else if(a[1][0]==4 && a[0][2]==3 && a[0][1]==2)
a[2][0]='x';//7w
else if(a[1][2]==6 && a[0][2]==3 && a[0][1]==2)
a[2][1]='x';//8w
else if(a[1][2]==6 && a[1][0]==4 && a[2][0]==7)
a[0][2]='x';//9d
else if(a[2][0]==7 && a[0][2]==3 && a[0][1]==2)
a[1][2]='x';//10d
else if(a[2][1]==8 && a[0][1]==2 && a[0][2]==3)
a[1][1]='x';//11d
else if(a[2][1]==8 && a[2][0]==7 && a[1][0]==4)
a[1][1]='x';//12l
else if(a[2][2]==9 && a[0][2]==3 && a[0][1]==2)
a[1][1]='x';//13d
else if(a[2][2]==9 && a[2][0]==7 && a[1][0]==4)
a[0][2]='x';//14
*/
/*
else if(a[0][1]=='o' && a[1][1]=='x' && a[2][2]=='o')
a[2][0]='x';//1l
else if(a[0][1]=='o' && a[1][0]=='x' && a[2][0]=='o')
a[1][1]='x';//2w
else if(a[0][1]=='o' && a[2][0]=='x' && a[1][0]=='o')
a[1][1]='x';//3w
else if(a[0][2]=='o' && a[2][0]=='x' && a[1][0]=='o')
a[2][2]='x';//4w
else if(a[0][2]=='o' && a[0][1]=='x' && a[1][0]=='o')
a[1][1]='x';//5w
else if(a[1][0]=='o' && a[0][1]=='x' && a[0][2]=='o')
a[1][1]='x';//15w
else if(a[1][0]=='o' && a[1][1]=='x' && a[2][2]=='o')
a[0][2]='x';//6l
else if(a[1][0]=='o' && a[0][2]=='x' && a[0][1]=='o')
a[1][1]='x';//7w
else if(a[1][2]=='o' && a[0][2]=='x' && a[0][1]=='o')
a[1][1]='x';//8w
else if(a[1][2]=='o' && a[1][0]=='x' && a[2][0]=='o')
a[2][2]='x';//9d
else if(a[2][0]=='o' && a[0][2]=='x' && a[0][1]=='o')
a[2][2]='x';//10d
else if(a[2][1]=='o' && a[0][1]=='x' && a[0][2]=='o')
a[2][2]='x';//11d
else if(a[2][1]=='o' && a[2][0]=='x' && a[1][0]=='o')
a[1][1]='x';//12l
else if(a[2][2]=='o' && a[0][2]=='x' && a[0][1]=='o')
a[2][0]='x';//13d
else if(a[2][2]=='o' && a[2][0]=='x' && a[1][0]=='o')
a[0][2]='x';//14l

*/
else if(n==2 && z==5 && y==9)
a[1][2]='x';//1l
else if(n==2 && z==4 && y==7)
a[1][2]='x';//2w
else if(n==2 && z==7 && y==4)
a[0][2]='x';//3w
else if(n==3 && z==7 && y==4)
a[0][1]='x';//4w
else if(n==3 && z==2 && y==4)
a[2][1]='x';//5w
else if(n==4 && z==2 && y==3)
a[2][1]='x';//15w
else if(n==4 && z==5 && y==9)
a[0][1]='x';//6l
else if(n==4 && z==3 && y==2)
a[2][0]='x';//7w
else if(n==6 && z==3 && y==6)
a[2][1]='x';//8w
else if(n==6 && z==4 && y==7)
a[0][2]='x';//9d
else if(n==7 && z==3 && y==2)
a[1][2]='x';//10d
else if(n==8 && z==2 && y==3)
a[1][1]='x';//11d
else if(n==8 && z==7 && y==4)
a[1][1]='x';//12l
else if(n==9 && z==3 && y==2)
a[1][1]='x';//13d
else if(n==9 && z==7 && y==4)
a[0][2]='x';//14

//for 3th c , c 1,z, you n,y

for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
/*
q=2;
if(a[0][1]=='x' && q!=z)//for position of c
q=3;
else if(a[0][2]=='x' && q!=z)
q=4;
else if(a[1][0]=='x' && q!=z)
q=5;
else if(a[1][1]=='x' && q!=z)
q=6;
else if(a[1][2]=='x' && q!=z)
q=7;
else if(a[2][0]=='x' && q!=z)
q=8;
else if(a[2][1]=='x' && q!=z)
q=9;
else if(a[2][2]=='x' && q!=z)
q=10;
r=q-1;
printf("%d\n",r);*/

for(int q=2;q<=9;q++)
{
    if(q!=z){
switch (q)
{
case 2:
    {
        if(a[0][1]=='x')
        r=q;
    break;
    }
    case 3:
    {
        if(a[0][2]=='x')
        r=q;
    break;
    }
    case 4:
    {
        if(a[1][0]=='x')
        r=q;
    break;
    }
    case 5:
    {
        if(a[1][1]=='x')
        r=q;
    break;
    }
    case 6:
    {
        if(a[1][2]=='x')
        r=q;
    break;
    }
    case 7:
    {
        if(a[2][0]=='x')
        r=q;
    break;
    }
    case 8:
    {
        if(a[2][1]=='x')
        r=q;
    break;
    }
    case 9:
    {
        if(a[2][2]=='x')
        r=q;
    break;
    }
    
default:
    break;
}
    }
}
//printf("%d",r);


printf("Enter your choice position : ");
    scanf("%d",&p);
//for 4th c , c 1,z,r, you n,y,p

if(p==1 || p==n || p==z || p==y || p==r)
{
    printf("invalied move.");
    exit(0);
}

else if(p==2)
a[0][1]='o';
 else if(p==3)
a[0][2]='o';
else if(p==4)
a[1][0]='o';
else if(p==5)
a[1][1]='o';
else if(p==6)
a[1][2]='o';
else if(p==7)
a[2][0]='o';
else if(p==8)
a[2][1]='o';
else if(p==9)
a[2][2]='o';
else
printf("invalid number.");

if(n==5 && y==2 && p==8){print(a);print(a);printf("You Win!");exit(0);}
else if(n==5 && y==8 && p==2){print(a);printf("You Win!");exit(0);}
else if(n==2 && y==5 && p==8){print(a);printf("You Win!");exit(0);}
else if(n==2 && y==8 && p==5){print(a);printf("You Win!");exit(0);}
else if(n==5 && y==2 && p==8){print(a);printf("You Win!");exit(0);}
else if(n==8 && y==2 && p==5){print(a);printf("You Win!");exit(0);}
else if(n==3 && y==6 && p==9){print(a);printf("You Win!");exit(0);}
else if(n==6 && y==3 && p==9){print(a);printf("You Win!");exit(0);}
else if(n==3 && y==9 && p==6){print(a);printf("You Win!");exit(0);}
else if(n==9 && y==3 && p==6){print(a);printf("You Win!");exit(0);}
else if(n==6 && y==9 && p==3){print(a);printf("You Win!");exit(0);}
else if(n==9 && y==6 && p==3){print(a);printf("You Win!");exit(0);}

else if(n==3 && y==5 && p==7){print(a);printf("You Win!");exit(0);}
else if(n==5 && y==3 && p==7){print(a);printf("You Win!");exit(0);}
else if(n==3 && y==7 && p==5){print(a);printf("You Win!");exit(0);}
else if(n==7 && y==3 && p==5){print(a);printf("You Win!");exit(0);}
else if(n==5 && y==7 && p==3){print(a);printf("You Win!");exit(0);}
else if(n==7 && y==5 && p==3){print(a);printf("You Win!");exit(0);}

else if(n==5 && y==6 && p==4){print(a);printf("You Win!");exit(0);}
else if(n==6 && y==3 && p==4){print(a);printf("You Win!");exit(0);}
else if(n==4 && y==5 && p==6){print(a);printf("You Win!");exit(0);}
else if(n==5 && y==4 && p==6){print(a);printf("You Win!");exit(0);}
else if(n==6 && y==4 && p==5){print(a);printf("You Win!");exit(0);}
else if(n==4 && y==6 && p==5){print(a);printf("You Win!");exit(0);}

else if(n==7 && y==8 && p==9){print(a);printf("You Win!");exit(0);}
else if(n==8 && y==7 && p==9){print(a);printf("You Win!");exit(0);}
else if(n==7 && y==9 && p==8){print(a);printf("You Win!");exit(0);}
else if(n==9 && y==7 && p==8){print(a);printf("You Win!");exit(0);}
else if(n==8 && y==9 && p==7){print(a);printf("You Win!");exit(0);}
else if(n==9 && y==8 && p==7){print(a);printf("You Win!");exit(0);}              //for Win

else if(r==2 && n!=3 && p!=3 && y!=3){print(a);printf("You lose!");exit(0);
a[0][2]='x';}
else if(r==3 && n!=2 && p!=2 && y!=2){print(a);printf("You lose!");exit(0);
a[0][1]='x';}
else if(r==4 && n!=7 && p!=7 && y!=7){print(a);printf("You lose!");exit(0);
a[2][0]='x';}
else if(r==7 && n!=4 && p!=4 && y!=4){print(a);printf("You lose!");exit(0);
a[1][0]='x';}
else if(r==5 && n!=9 && p!=9 && y!=9){print(a);printf("You lose!");exit(0);
a[2][2]='x';}
else if(r==9 && n!=5 && p!=5 && y!=5){print(a);printf("You lose!");exit(0);
a[1][1]='x';}



else if(z==5 && r==2 && n!=8 && p!=8 && y!=8){print(a);printf("You lose!");exit(0);
a[2][1]='x';}
else if(z==5 && r==8 && n!=2 && p!=2 && y!=2){print(a);printf("You lose!");exit(0);
a[0][1]='x';}
else if(z==2 && r==5 && n!=8 && p!=8 && y!=8){print(a);printf("You lose!");exit(0);
a[2][1]='x';}
else if(z==2 && r==8 && n!=5 && p!=5 && y!=5){print(a);printf("You lose!");exit(0);
a[1][1]='x';}
else if(z==5 && r==2 && n!=8 && p!=8 && y!=8){print(a);printf("You lose!");exit(0);
a[2][1]='x';}
else if(z==8 && r==2 && n!=5 && p!=5 && y!=5){print(a);printf("You lose!");exit(0);
a[1][1]='x';}
else if(z==3 && r==6 && n!=9 && p!=9 && y!=9){print(a);printf("You lose!");exit(0);
a[2][2]='x';}
else if(z==6 && r==3 && n!=9 && p!=9 && y!=9){print(a);printf("You lose!");exit(0);
a[2][2]='x';}
else if(z==3 && r==9 && n!=6 && p!=6 && y!=6){print(a);printf("You lose!");exit(0);
a[1][2]='x';}
else if(z==9 && r==3 && n!=6 && p!=6 && y!=6){print(a);printf("You lose!");exit(0);
a[1][2]='x';}
else if(z==6 && r==9 && n!=3 && p!=3 && y!=3){print(a);printf("You lose!");exit(0);
a[0][2]='x';}
else if(z==9 && r==6 && n!=3 && p!=3 && y!=3){print(a);printf("You lose!");exit(0);
a[0][2]='x';}

else if(z==3 && r==5 && n!=7 && p!=7 && y!=7){print(a);printf("You lose!");exit(0);
a[2][0]='x';}
else if(z==5 && r==3 && n!=7 && p!=7 && y!=7){print(a);printf("You lose!");exit(0);
a[2][0]='x';}
else if(z==3 && r==7 && n!=5 && p!=5 && y!=5){print(a);printf("You lose!");exit(0);
a[1][1]='x';}
else if(z==7 && r==3 && n!=5 && p!=5 && y!=5){print(a);printf("You lose!");exit(0);
a[1][1]='x';}
else if(z==5 && r==7 && n!=3 && p!=3 && y!=3){print(a);printf("You lose!");exit(0);
a[0][2]='x';}
else if(z==7 && r==5 && n!=3 && p!=3 && y!=3){print(a);printf("You lose!");exit(0);
a[0][2]='x';}

else if(z==5 && r==6 && n!=4 && p!=4 && y!=4){print(a);printf("You lose!");exit(0);
a[1][0]='x';}
else if(z==6 && r==3 && n!=4 && p!=4 && y!=4){print(a);printf("You lose!");exit(0);
a[1][0]='x';}
else if(z==4 && r==5 && n!=6 && p!=6 && y!=6){print(a);printf("You lose!");exit(0);
a[1][2]='x';}
else if(z==5 && r==4 && n!=6 && p!=6 && y!=6){print(a);printf("You lose!");exit(0);
a[1][2]='x';}
else if(z==6 && r==4 && n!=5 && p!=5 && y!=5){print(a);printf("You lose!");exit(0);
a[1][1]='x';}
else if(z==4 && r==6 && n!=5 && p!=5 && y!=5){print(a);printf("You lose!");exit(0);
a[1][1]='x';}

else if(z==7 && r==8 && n!=9 && p!=9 && y!=9){print(a);printf("You lose!");exit(0);
a[2][2]='x';}
else if(z==8 && r==7 && n!=9 && p!=9 && y!=9){print(a);printf("You lose!");exit(0);
a[2][2]='x';}
else if(z==7 && r==9 && n!=8 && p!=8 && y!=8){print(a);printf("You lose!");exit(0);
a[2][1]='x';}
else if(z==9 && r==7 && n!=8 && p!=8 && y!=8){print(a);printf("You lose!");exit(0);
a[2][1]='x';}
else if(z==8 && r==9 && n!=7 && p!=7 && y!=7){print(a);printf("You lose!");exit(0);
a[2][0]='x';}
else if(z==9 && r==8 && n!=7 && p!=7 && y!=7){print(a);printf("You lose!");exit(0);
a[2][0]='x';}                                                                        //for lose


else if(n==5 && p==2 && z!=8 && r!=8){
a[2][1]='x';}
else if(n==5 && p==8 && z!=2 && r!=2){
a[0][1]='x';}
else if(n==2 && p==5 && z!=8 && r!=8){
a[2][1]='x';}
else if(n==2 && p==8 && z!=5 && r!=5){
a[1][1]='x';}
else if(n==5 && p==2 && z!=8 && r!=8){
a[2][1]='x';}
else if(n==8 && p==2 && z!=5 && r!=5){
a[1][1]='x';}
else if(n==3 && p==6 && z!=9 && r!=9){
a[2][2]='x';}
else if(n==6 && p==3 && z!=9 && r!=9){
a[2][2]='x';}
else if(n==3 && p==9 && z!=6 && r!=6){
a[1][2]='x';}
else if(n==9 && p==3 && z!=6 && r!=6){
a[1][2]='x';}
else if(n==6 && p==9 && z!=3 && r!=3){
a[0][2]='x';}
else if(n==9 && p==6 && z!=3 && r!=3){
a[0][2]='x';}

else if(n==3 && p==5 && z!=7 && r!=7){
a[2][0]='x';}
else if(n==5 && p==3 && z!=7 && r!=7){
a[2][0]='x';}
else if(n==3 && p==7 && z!=5 && r!=5){
a[1][1]='x';}
else if(n==7 && p==3 && z!=5 && r!=5){
a[1][1]='x';}
else if(n==5 && p==7 && z!=3 && r!=3){
a[0][2]='x';}
else if(n==7 && p==5 && z!=3 && r!=3){
a[0][2]='x';}

else if(n==5 && p==6 && z!=4 && r!=4){
a[1][0]='x';}
else if(n==6 && p==3 && z!=4 && r!=4){
a[1][0]='x';}
else if(n==4 && p==5 && z!=6 && r!=6){
a[1][2]='x';}
else if(n==5 && p==4 && z!=6 && r!=6){
a[1][2]='x';}
else if(n==6 && p==4 && z!=5 && r!=5){
a[1][1]='x';}
else if(n==4 && p==6 && z!=5 && r!=5){
a[1][1]='x';}

else if(n==7 && p==8 && z!=9 && r!=9){
a[2][2]='x';}
else if(n==8 && p==7 && z!=9 && r!=9){
a[2][2]='x';}
else if(n==7 && p==9 && z!=8 && r!=8){
a[2][1]='x';}
else if(n==9 && p==7 && z!=8 && r!=8){
a[2][1]='x';}
else if(n==8 && p==9 && z!=7 && r!=7){
a[2][0]='x';}
else if(n==9 && p==8 && z!=7 && r!=7){
a[2][0]='x';}                                                                        //for win

else if(y==5 && p==2 && z!=8 && r!=8){
a[2][1]='x';}
else if(y==5 && p==8 && z!=2 && r!=2){
a[0][1]='x';}
else if(y==2 && p==5 && z!=8 && r!=8){
a[2][1]='x';}
else if(y==2 && p==8 && z!=5 && r!=5){
a[1][1]='x';}
else if(y==5 && p==2 && z!=8 && r!=8){
a[2][1]='x';}
else if(y==8 && p==2 && z!=5 && r!=5){
a[1][1]='x';}
else if(y==3 && p==6 && z!=9 && r!=9){
a[2][2]='x';}
else if(y==6 && p==3 && z!=9 && r!=9){
a[2][2]='x';}
else if(y==3 && p==9 && z!=6 && r!=6){
a[1][2]='x';}
else if(y==9 && p==3 && z!=6 && r!=6){
a[1][2]='x';}
else if(y==6 && p==9 && z!=3 && r!=3){
a[0][2]='x';}
else if(y==9 && p==6 && z!=3 && r!=3){
a[0][2]='x';}

else if(y==3 && p==5 && z!=7 && r!=7){
a[2][0]='x';}
else if(y==5 && p==3 && z!=7 && r!=7){
a[2][0]='x';}
else if(y==3 && p==7 && z!=5 && r!=5){
a[1][1]='x';}
else if(y==7 && p==3 && z!=5 && r!=5){
a[1][1]='x';}
else if(y==5 && p==7 && z!=3 && r!=3){
a[0][2]='x';}
else if(y==7 && p==5 && z!=3 && r!=3){
a[0][2]='x';}

else if(y==5 && p==6 && z!=4 && r!=4){
a[1][0]='x';}
else if(y==6 && p==3 && z!=4 && r!=4){
a[1][0]='x';}
else if(y==4 && p==5 && z!=6 && r!=6){
a[1][2]='x';}
else if(y==5 && p==4 && z!=6 && r!=6){
a[1][2]='x';}
else if(y==6 && p==4 && z!=5 && r!=5){
a[1][1]='x';}
else if(y==4 && p==6 && z!=5 && r!=5){
a[1][1]='x';}

else if(y==7 && p==8 && z!=9 && r!=9){
a[2][2]='x';}
else if(y==8 && p==7 && z!=9 && r!=9){
a[2][2]='x';}
else if(y==7 && p==9 && z!=8 && r!=8){
a[2][1]='x';}
else if(y==9 && p==7 && z!=8 && r!=8){
a[2][1]='x';}
else if(y==8 && p==9 && z!=7 && r!=7){
a[2][0]='x';}
else if(y==9 && p==8 && z!=7 && r!=7){
a[2][0]='x';}                                                                        //for lose

else if(z!=2 && r!=2 && n!=2 && y!=2 && p!=2)
a[0][1]='x';
else if(z!=3 && r!=3 && n!=3 && y!=3 && p!=3)
a[0][2]='x';
else if(z!=4 && r!=4 && n!=4 && y!=4 && p!=4)
a[1][0]='x';
else if(z!=5 && r!=5 && n!=5 && y!=5 && p!=5)
a[1][1]='x';
else if(z!=6 && r!=6 && n!=6 && y!=6 && p!=6)
a[1][2]='x';
else if(z!=7 && r!=7 && n!=7 && y!=7 && p!=7)
a[2][0]='x';
else if(z!=8 && r!=8 && n!=8 && y!=8 && p!=8)
a[2][1]='x';
else if(z!=9 && r!=9 && n!=9 && y!=9 && p!=9)
a[2][2]='x';




    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
/*
    m=2;
if((a[0][1]=='x' && m!=z) ||(a[0][1]=='x' && m!=r))//for position of c
m=3;
else if((a[0][2]=='x' && m!=z) ||(a[0][2]=='x' && m!=r))
m=4;
else if((a[1][0]=='x' && m!=z) ||(a[1][0]=='x' && m!=r))
m=5;
else if((a[1][1]=='x' && m!=z) ||(a[1][1]=='x' && m!=r))
m=6;
else if((a[1][2]=='x' && m!=z) ||(a[1][2]=='x' && m!=r))
m=7;
else if((a[2][0]=='x' && m!=z) ||(a[2][0]=='x' && m!=r))
m=8;
else if((a[2][1]=='x' && m!=z) ||(a[2][1]=='x' && m!=r))
m=9;
else if((a[2][2]=='x' && m!=z) ||(a[2][2]=='x' && m!=r))
m=10;
s=m-1;*/

for(int m=2;m<=9;m++)
{
    if(m!=z || m!=r){
switch (m)
{
case 2:
    {
        if(a[0][1]=='x')
        s=m;
    break;
    }
    case 3:
    {
        if(a[0][2]=='x')
        s=m;
    break;
    }
    case 4:
    {
        if(a[1][0]=='x')
        s=m;
    break;
    }
    case 5:
    {
        if(a[1][1]=='x')
        s=m;
    break;
    }
    case 6:
    {
        if(a[1][2]=='x')
        s=m;
    break;
    }
    case 7:
    {
        if(a[2][0]=='x')
        s=m;
    break;
    }
    case 8:
    {
        if(a[2][1]=='x')
        s=m;
    break;
    }
    case 9:
    {
        if(a[2][2]=='x')
        s=m;
    break;
    }
    
default:
    break;
}
    }
}

//printf("%d\n",z);
//printf("%d\n",r);
//printf("%d\n",s);
printf("Enter your choice position : ");
    scanf("%d",&c);
//for 5th c , c 1,z,r,s you n,y,p,c

if(c==1 || c==n || c==z || c==y || c==r || c==p || c==s)
{
    printf("invalied move.");
    exit(0);
}

else if(c==2)
a[0][1]='o';
 else if(c==3)
a[0][2]='o';
else if(c==4)
a[1][0]='o';
else if(c==5)
a[1][1]='o';
else if(c==6)
a[1][2]='o';
else if(c==7)
a[2][0]='o';
else if(c==8)
a[2][1]='o';
else if(c==9)
a[2][2]='o';
else
printf("invalid number.");
/*

if(c==5 && y==2 && p==8){print(a);printf("You Win!");exit(0);}
else if(c==5 && y==8 && p==2){print(a);printf("You Win!");exit(0);}
else if(c==2 && y==5 && p==8){print(a);printf("You Win!");exit(0);}
else if(c==2 && y==8 && p==5){print(a);printf("You Win!");exit(0);}
else if(c==5 && y==2 && p==8){print(a);printf("You Win!");exit(0);}
else if(c==8 && y==2 && p==5){print(a);printf("You Win!");exit(0);}
else if(c==3 && y==6 && p==9){print(a);printf("You Win!");exit(0);}
else if(c==6 && y==3 && p==9){print(a);printf("You Win!");exit(0);}
else if(c==3 && y==9 && p==6){print(a);printf("You Win!");exit(0);}
else if(c==9 && y==3 && p==6){print(a);printf("You Win!");exit(0);}
else if(c==6 && y==9 && p==3){print(a);printf("You Win!");exit(0);}
else if(c==9 && y==6 && p==3){print(a);printf("You Win!");exit(0);}
else if(c==3 && y==5 && p==7){print(a);printf("You Win!");exit(0);}
else if(c==5 && y==3 && p==7){print(a);printf("You Win!");exit(0);}
else if(c==3 && y==7 && p==5){print(a);printf("You Win!");exit(0);}
else if(c==7 && y==3 && p==5){print(a);printf("You Win!");exit(0);}
else if(c==5 && y==7 && p==3){print(a);printf("You Win!");exit(0);}
else if(c==7 && y==5 && p==3){print(a);printf("You Win!");exit(0);}
else if(c==5 && y==6 && p==4){print(a);printf("You Win!");exit(0);}
else if(c==6 && y==3 && p==4){print(a);printf("You Win!");exit(0);}
else if(c==4 && y==5 && p==6){print(a);printf("You Win!");exit(0);}
else if(c==5 && y==4 && p==6){print(a);printf("You Win!");exit(0);}
else if(c==6 && y==4 && p==5){print(a);printf("You Win!");exit(0);}
else if(c==4 && y==6 && p==5){print(a);printf("You Win!");exit(0);}
else if(c==7 && y==8 && p==9){print(a);printf("You Win!");exit(0);}
else if(c==8 && y==7 && p==9){print(a);printf("You Win!");exit(0);}
else if(c==7 && y==9 && p==8){print(a);printf("You Win!");exit(0);}
else if(c==9 && y==7 && p==8){print(a);printf("You Win!");exit(0);}
else if(c==8 && y==9 && p==7){print(a);printf("You Win!");exit(0);}
else if(c==9 && y==8 && p==7){print(a);printf("You Win!");exit(0);}              //for Win


else if(n==5 && c==2 && p==8){print(a);printf("You Win!");exit(0);}
else if(n==5 && c==8 && p==2){print(a);printf("You Win!");exit(0);}
else if(n==2 && c==5 && p==8){print(a);printf("You Win!");exit(0);}
else if(n==2 && c==8 && p==5){print(a);printf("You Win!");exit(0);}
else if(n==5 && c==2 && p==8){print(a);printf("You Win!");exit(0);}
else if(n==8 && c==2 && p==5){print(a);printf("You Win!");exit(0);}
else if(n==3 && c==6 && p==9){print(a);printf("You Win!");exit(0);}
else if(n==6 && c==3 && p==9){print(a);printf("You Win!");exit(0);}
else if(n==3 && c==9 && p==6){print(a);printf("You Win!");exit(0);}
else if(n==9 && c==3 && p==6){print(a);printf("You Win!");exit(0);}
else if(n==6 && c==9 && p==3){print(a);printf("You Win!");exit(0);}
else if(n==9 && c==6 && p==3){print(a);printf("You Win!");exit(0);}
else if(n==3 && c==5 && p==7){print(a);printf("You Win!");exit(0);}
else if(n==5 && c==3 && p==7){print(a);printf("You Win!");exit(0);}
else if(n==3 && c==7 && p==5){print(a);printf("You Win!");exit(0);}
else if(n==7 && c==3 && p==5){print(a);printf("You Win!");exit(0);}
else if(n==5 && c==7 && p==3){print(a);printf("You Win!");exit(0);}
else if(n==7 && c==5 && p==3){print(a);printf("You Win!");exit(0);}
else if(n==5 && c==6 && p==4){print(a);printf("You Win!");exit(0);}
else if(n==6 && c==3 && p==4){print(a);printf("You Win!");exit(0);}
else if(n==4 && c==5 && p==6){print(a);printf("You Win!");exit(0);}
else if(n==5 && c==4 && p==6){print(a);printf("You Win!");exit(0);}
else if(n==6 && c==4 && p==5){print(a);printf("You Win!");exit(0);}
else if(n==4 && c==6 && p==5){print(a);printf("You Win!");exit(0);}
else if(n==7 && c==8 && p==9){print(a);printf("You Win!");exit(0);}
else if(n==8 && c==7 && p==9){print(a);printf("You Win!");exit(0);}
else if(n==7 && c==9 && p==8){print(a);printf("You Win!");exit(0);}
else if(n==9 && c==7 && p==8){print(a);printf("You Win!");exit(0);}
else if(n==8 && c==9 && p==7){print(a);printf("You Win!");exit(0);}
else if(n==9 && c==8 && p==7){print(a);printf("You Win!");exit(0);}              //for Win


else if(n==5 && y==2 && c==8){print(a);printf("You Win!");exit(0);}
else if(n==5 && y==8 && c==2){print(a);printf("You Win!");exit(0);}
else if(n==2 && y==5 && c==8){print(a);printf("You Win!");exit(0);}
else if(n==2 && y==8 && c==5){print(a);printf("You Win!");exit(0);}
else if(n==5 && y==2 && c==8){print(a);printf("You Win!");exit(0);}
else if(n==8 && y==2 && c==5){print(a);printf("You Win!");exit(0);}
else if(n==3 && y==6 && c==9){print(a);printf("You Win!");exit(0);}
else if(n==6 && y==3 && c==9){print(a);printf("You Win!");exit(0);}
else if(n==3 && y==9 && c==6){print(a);printf("You Win!");exit(0);}
else if(n==9 && y==3 && c==6){print(a);printf("You Win!");exit(0);}
else if(n==6 && y==9 && c==3){print(a);printf("You Win!");exit(0);}
else if(n==9 && y==6 && c==3){print(a);printf("You Win!");exit(0);}
else if(n==3 && y==5 && c==7){print(a);printf("You Win!");exit(0);}
else if(n==5 && y==3 && c==7){print(a);printf("You Win!");exit(0);}
else if(n==3 && y==7 && c==5){print(a);printf("You Win!");exit(0);}
else if(n==7 && y==3 && c==5){print(a);printf("You Win!");exit(0);}
else if(n==5 && y==7 && c==3){print(a);printf("You Win!");exit(0);}
else if(n==7 && y==5 && c==3){print(a);printf("You Win!");exit(0);}
else if(n==5 && y==6 && c==4){print(a);printf("You Win!");exit(0);}
else if(n==6 && y==3 && c==4){print(a);printf("You Win!");exit(0);}
else if(n==4 && y==5 && c==6){print(a);printf("You Win!");exit(0);}
else if(n==5 && y==4 && c==6){print(a);printf("You Win!");exit(0);}
else if(n==6 && y==4 && c==5){print(a);printf("You Win!");exit(0);}
else if(n==4 && y==6 && c==5){print(a);printf("You Win!");exit(0);}
else if(n==7 && y==8 && c==9){print(a);printf("You Win!");exit(0);}
else if(n==8 && y==7 && c==9){print(a);printf("You Win!");exit(0);}
else if(n==7 && y==9 && c==8){print(a);printf("You Win!");exit(0);}
else if(n==9 && y==7 && c==8){print(a);printf("You Win!");exit(0);}
else if(n==8 && y==9 && c==7){print(a);printf("You Win!");exit(0);}
else if(n==9 && y==8 && c==7){print(a);printf("You Win!");exit(0);}              //for Win
*/
if(a[0][0]=='o' && a[0][1]=='o' && a[0][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[1][0]=='o' && a[1][1]=='o' && a[1][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[2][0]=='o' && a[2][1]=='o' && a[2][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][0]=='o' && a[1][0]=='o' && a[2][0]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][1]=='o' && a[1][1]=='o' && a[2][1]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][2]=='o' && a[1][2]=='o' && a[2][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][0]=='o' && a[1][1]=='o' && a[2][3]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][2]=='o' && a[1][1]=='o' && a[2][0]=='o'){print(a);printf("You Win!");exit(0);}

else if(z!=2 && r!=2 && n!=2 && y!=2 && p!=2 && s!=2 && c!=2)
a[0][1]='x';
else if(z!=3 && r!=3 && n!=3 && y!=3 && p!=3 && s!=3 && c!=3)
a[0][2]='x';
else if(z!=4 && r!=4 && n!=4 && y!=4 && p!=4 && s!=4 && c!=4)
a[1][0]='x';
else if(z!=5 && r!=5 && n!=5 && y!=5 && p!=5 && s!=5 && c!=5)
a[1][1]='x';
else if(z!=6 && r!=6 && n!=6 && y!=6 && p!=6 && s!=6 && c!=6)
a[1][2]='x';
else if(z!=7 && r!=7 && n!=7 && y!=7 && p!=7 && s!=7 && c!=7)
a[2][0]='x';
else if(z!=8 && r!=8 && n!=8 && y!=8 && p!=8 && s!=8 && c!=8)
a[2][1]='x';
else if(z!=9 && r!=9 && n!=9 && y!=9 && p!=9 && s!=9 && c!=9)
a[2][2]='x';

/*
else if(s==2 && d==3){printf("You lose!");exit(0);}
else if(s==3 && d==2){printf("You lose!");exit(0);}
else if(s==4 && d==7){printf("You lose!");exit(0);}
else if(s==7 && d==4){printf("You lose!");exit(0);}
else if(s==5 && d==9){printf("You lose!");exit(0);}
else if(s==9 && d==5){printf("You lose!");exit(0);}

else if(s==2 && r==3){printf("You lose!");exit(0);}
else if(s==3 && r==2){printf("You lose!");exit(0);}
else if(s==4 && r==7){printf("You lose!");exit(0);}
else if(s==7 && r==4){printf("You lose!");exit(0);}
else if(s==5 && r==9){printf("You lose!");exit(0);}
else if(s==9 && r==5){printf("You lose!");exit(0);}

else if(s==2 && z==3){printf("You lose!");exit(0);}
else if(s==3 && z==2){printf("You lose!");exit(0);}
else if(s==4 && z==7){printf("You lose!");exit(0);}
else if(s==7 && z==4){printf("You lose!");exit(0);}
else if(s==5 && z==9){printf("You lose!");exit(0);}
else if(s==9 && z==5){printf("You lose!");exit(0);}

else if(d==2 && s==3){printf("You lose!");exit(0);}
else if(d==3 && s==2){printf("You lose!");exit(0);}
else if(d==4 && s==7){printf("You lose!");exit(0);}
else if(d==7 && s==4){printf("You lose!");exit(0);}
else if(d==5 && s==9){printf("You lose!");exit(0);}
else if(d==9 && s==5){printf("You lose!");exit(0);}

else if(d==2 && r==3){printf("You lose!");exit(0);}
else if(d==3 && r==2){printf("You lose!");exit(0);}
else if(d==4 && r==7){printf("You lose!");exit(0);}
else if(d==7 && r==4){printf("You lose!");exit(0);}
else if(d==5 && r==9){printf("You lose!");exit(0);}
else if(d==9 && r==5){printf("You lose!");exit(0);}

else if(d==2 && z==3){printf("You lose!");exit(0);}
else if(d==3 && z==2){printf("You lose!");exit(0);}
else if(d==4 && z==7){printf("You lose!");exit(0);}
else if(d==7 && z==4){printf("You lose!");exit(0);}
else if(d==5 && z==9){printf("You lose!");exit(0);}
else if(d==9 && z==5){printf("You lose!");exit(0);}

else if(r==2 && d==3){printf("You lose!");exit(0);}
else if(r==3 && d==2){printf("You lose!");exit(0);}
else if(r==4 && d==7){printf("You lose!");exit(0);}
else if(r==7 && d==4){printf("You lose!");exit(0);}
else if(r==5 && d==9){printf("You lose!");exit(0);}
else if(r==9 && d==5){printf("You lose!");exit(0);}

else if(s==2 && d==3){printf("You lose!");exit(0);}
else if(s==3 && d==2){printf("You lose!");exit(0);}
else if(s==4 && d==7){printf("You lose!");exit(0);}
else if(s==7 && d==4){printf("You lose!");exit(0);}
else if(s==5 && d==9){printf("You lose!");exit(0);}
else if(s==9 && d==5){printf("You lose!");exit(0);}

else if(s==2 && d==3){printf("You lose!");exit(0);}
else if(s==3 && d==2){printf("You lose!");exit(0);}
else if(s==4 && d==7){printf("You lose!");exit(0);}
else if(s==7 && d==4){printf("You lose!");exit(0);}
else if(s==5 && d==9){printf("You lose!");exit(0);}
else if(s==9 && d==5){printf("You lose!");exit(0);}

else if(s==2 && d==3){printf("You lose!");exit(0);}
else if(s==3 && d==2){printf("You lose!");exit(0);}
else if(s==4 && d==7){printf("You lose!");exit(0);}
else if(s==7 && d==4){printf("You lose!");exit(0);}
else if(s==5 && d==9){printf("You lose!");exit(0);}
else if(s==9 && d==5){printf("You lose!");exit(0);}

else if(s==2 && d==3){printf("You lose!");exit(0);}
else if(s==3 && d==2){printf("You lose!");exit(0);}
else if(s==4 && d==7){printf("You lose!");exit(0);}
else if(s==7 && d==4){printf("You lose!");exit(0);}
else if(s==5 && d==9){printf("You lose!");exit(0);}
else if(s==9 && d==5){printf("You lose!");exit(0);}

else if(s==2 && d==3){printf("You lose!");exit(0);}
else if(s==3 && d==2){printf("You lose!");exit(0);}
else if(s==4 && d==7){printf("You lose!");exit(0);}
else if(s==7 && d==4){printf("You lose!");exit(0);}
else if(s==5 && d==9){printf("You lose!");exit(0);}
else if(s==9 && d==5){printf("You lose!");exit(0);}*/

if(a[0][0]=='x' && a[0][1]=='x' && a[0][2]=='x'){print(a);printf("You lose!");exit(0);}
else if(a[1][0]=='x' && a[1][1]=='x' && a[1][2]=='x'){print(a);printf("You lose!");exit(0);}
else if(a[2][0]=='x' && a[2][1]=='x' && a[2][2]=='x'){print(a);printf("You lose!");exit(0);}
else if(a[0][0]=='x' && a[1][0]=='x' && a[2][0]=='x'){print(a);printf("You lose!");exit(0);}
else if(a[0][1]=='x' && a[1][1]=='x' && a[2][1]=='x'){print(a);printf("You lose!");exit(0);}
else if(a[0][2]=='x' && a[1][2]=='x' && a[2][2]=='x'){print(a);printf("You lose!");exit(0);}
else if(a[0][0]=='x' && a[1][1]=='x' && a[2][3]=='x'){print(a);printf("You lose!");exit(0);}
else if(a[0][2]=='x' && a[1][1]=='x' && a[2][0]=='x'){print(a);printf("You lose!");exit(0);}



for(int e=2;e<=9;e++)
{
    if(e!=z || e!=r){
switch (e)
{
case 2:
    {
        if(a[0][1]=='x')
        d=e;
    break;
    }
    case 3:
    {
        if(a[0][2]=='x')
        d=e;
    break;
    }
    case 4:
    {
        if(a[1][0]=='x')
        d=e;
    break;
    }
    case 5:
    {
        if(a[1][1]=='x')
        d=e;
    break;
    }
    case 6:
    {
        if(a[1][2]=='x')
        d=e;
    break;
    }
    case 7:
    {
        if(a[2][0]=='x')
        d=e;
    break;
    }
    case 8:
    {
        if(a[2][1]=='x')
        d=e;
    break;
    }
    case 9:
    {
        if(a[2][2]=='x')
        d=e;
    break;
    }
    
default:
    break;
}
    }
}



for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
if(a[0][0]=='x' && a[0][1]=='x' && a[0][2]=='x'){printf("You lose!");exit(0);}
else if(a[1][0]=='x' && a[1][1]=='x' && a[1][2]=='x'){printf("You lose!");exit(0);}
else if(a[2][0]=='x' && a[2][1]=='x' && a[2][2]=='x'){printf("You lose!");exit(0);}
else if(a[0][0]=='x' && a[1][0]=='x' && a[2][0]=='x'){printf("You lose!");exit(0);}
else if(a[0][1]=='x' && a[1][1]=='x' && a[2][1]=='x'){printf("You lose!");exit(0);}
else if(a[0][2]=='x' && a[1][2]=='x' && a[2][2]=='x'){printf("You lose!");exit(0);}
else if(a[0][0]=='x' && a[1][1]=='x' && a[2][3]=='x'){printf("You lose!");exit(0);}
else if(a[0][2]=='x' && a[1][1]=='x' && a[2][0]=='x'){printf("You lose!");exit(0);}
else 
printf("Draw!");
}