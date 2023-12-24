#include<stdio.h>
float area(float *r);
float perimeter(float *r);
void main()
{
    float r;
    printf("Enter radius = ");
    scanf("%f",&r);
    printf("area = %f\n",area(&r));
    printf("perimeter = %f\n",perimeter(&r));
}
float area(float *r)
{
    float pi=3.14,area;
    area = pi*(*r)*(*r);
    return area;
}

float perimeter(float *r)
{
    float pi=3.14,perimeter;
    perimeter = 2*pi*(*r);
    return perimeter;
}
