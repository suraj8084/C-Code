#include<stdio.h>
#include<math.h>
void main(){
    float n,a,v;
    char x;
    printf("s = sin , c = cos , t = tan \nk=cosec , e = sec , o = cot\n");
    printf("Enter a trigonometry function = ");
    scanf("%s",&x);
    printf("Enter Degree = ");
    scanf("%f",&a);
    n = a*(3.14/180);
    if (x=='s')
    v=sin(n);
    else if (x=='c')
    v=cos(n);
    else if (x=='k')
    v=1/sin(n);
    else if (x=='e')
    v=1/cos(n);
    else if (x=='t')
    v=tan(n);
    else if (x=='o')
    v=1/tan(n);
    printf("Answer = %f",v);
}