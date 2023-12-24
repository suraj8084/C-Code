#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
srand(time(0));
int number = rand()%100;// 2 indicate number of random variable you want to choose
printf("%d",number);
}