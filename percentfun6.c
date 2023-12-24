 #include<stdio.h>
 float per(int,int);
 void main(){
     int a,b;
     printf("Enter a Number = ");
     scanf("%d",&a);
     printf("Number 2nd  = ");
     scanf("%d",&b);
     printf("percentage = %f",per(a,b));
 }
 float per(int a,int b)
 {
     float c;
     c=(float)a/2+(float)b/2;
     return c;
 }