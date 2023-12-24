#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n;
    float *num;
    float sum=0,mean;
    printf("Input the number of student.\n");
    scanf("%d",&n);
    num=(float*)malloc(n*sizeof(float));
    printf("Input heights for %d student \n",n);
    for(i=0;i<n;i++)
    scanf("%f",&num[i]);
    for(i=0;i<n;i++)
    sum=sum+num[i];
    mean=sum/(float)n;
    printf("Average height = %f\n",mean);
}