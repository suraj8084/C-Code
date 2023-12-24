#include<stdio.h>
struct complex
{
    float real;
    float imag;
};
void swap_ref(struct complex *a,struct complex *b);
void main()
{
    struct complex x={10.0,3.0},y={20.0,4.0};
    printf("%f, %f\n",x.real,x.imag);
    printf("%f, %f\n",y.real,y.imag);
    swap_ref(&x,&y);
}
void swap_ref(struct complex *a,struct complex *b)
{
    struct complex temp;
    temp = *a;
    *a=*b;
    *b=temp;
    printf("%f,%f\n",a->real,a->imag);
    printf("%f,%f\n",b->real,b->imag);
}
