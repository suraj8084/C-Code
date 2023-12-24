#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    int age;
    char city[10];
    int marks;
};
void main()
{
    int i,j=0;
    struct student s[5];
    printf("Enter details of 5 student = ");
    for(i=0;i<5;i++)
    {
    scanf("%d %s %d %s %d",&s[i].rollno,s[i].name,&s[i].age,s[i].city,&s[i].marks);
    }
    for(i=0;i<5;i++)
    {
        if(s[i].marks>75)
        {
            j++;
    printf("%d %s %d %s %d",s[i].rollno,s[i].name,s[i].age,s[i].city,s[i].marks);
    }
}
if(j==0)
printf("no student marks are greater than 75.");
}