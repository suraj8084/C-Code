#include<stdio.h>
#include <stdlib.h>
int marks_summation(int *marks,int number_of_students,char gender)
{
    int sum = 0;
    if(gender=='b')
    {
        for(int i=0;i<number_of_students;i++)
        {
       if(i%2==0)
        {
            printf("%d\n",*marks);
            sum=sum+(*marks);
        }
        }
    }
    else if(gender=='g')
    {
        for(int i=0;i<number_of_students;i++)
        {
       if(i%2==1)
        {
            printf("%d\n",*marks+i);
            sum=sum+(*marks+i);
        }
        }
    }
return sum;
}
//int free(marks);
int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    //free(marks);
 
    return 0;
}