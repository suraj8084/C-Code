#include<stdio.h>
float cm(float);
float m(float);
float inch(float);
float feet(float);
int main()
{
     float km;
     printf("Enter a distance in km = ");
     scanf("%f",&km);
     printf("m = %f",m(km));
     printf("\ncm = %f",cm(km));
     printf("\nfeet = %f",feet(km));
     printf("\ninch = %f",inch(km));
     return 0;
}
float m(float km)
{
     float m;
     m = km*1000;
     return m;
}
float cm(float km)
{
     float cm;
     cm = km*100000;
     return cm;
}
float feet(float km)
{
     float feet;
     feet = km*3280.84;
     return feet;
}
float inch(float km)
{
     float inch;
     inch = km*3280.84*12;
     return inch;
}