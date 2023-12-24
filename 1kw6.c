#include<stdio.h>
void main()
{
    float km,m,cm,feet,inch;
    printf("Enter the distance in km :");
    scanf("%f",&km);
    m = km*1000;
    cm = km*100000;
    feet = km *3280.84;
    inch = feet*12;
    printf("\nm = %f",m);
    printf("\ncm = %f",cm);
    printf("\nfeet = %f",feet);
    printf("\ninch = %f",inch);
}