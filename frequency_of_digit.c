#include<stdio.h>
void main()
{
    int r,n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    for (int i = 1; n!=0; i++)
    {
        r=n%10;
        if(r==1)
        a++;
        else if(r==2)
        b++;
        else if(r==3)
        c++;
        else if(r==4)
        d++;
        else if(r==5)
        e++;
        else if(r==6)
        f++;
        else if(r==7)
        g++;
        else if(r==8)
        h++;
        else if(r==9)
        i++;
        else if(r==0)
        j++;
        n=n/10;
    }
    printf("The digit 1 is repeated %d times \n",a);
    printf("The digit 2 is repeated %d times \n",b);
    printf("The digit 3 is repeated %d times \n",c);
    printf("The digit 4 is repeated %d times \n",d);
    printf("The digit 5 is repeated %d times \n",e);
    printf("The digit 6 is repeated %d times \n",f);
    printf("The digit 7 is repeated %d times \n",g);
    printf("The digit 8 is repeated %d times \n",h);
    printf("The digit 9 is repeated %d times \n",i);
    printf("The digit 0 is repeated %d times \n",j);
}