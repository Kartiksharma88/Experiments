//Program to store the information of student marks using structures and find
//total marks of individual student.
#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    int rollno;
    int marks[5];
    int total;
};
int main()
{
    struct student s[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter the roll no of student %d: ",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter the marks of 5 subjects of student %d: ",i+1);
        for(j=0;j<5;j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
    }
    for(i=0;i<5;i++)
    {
        s[i].total=0;
        for(j=0;j<5;j++)
        {
            s[i].total=s[i].total+s[i].marks[j];
        }
    }
    printf("The total marks of each student are: \n");
    for(i=0;i<5;i++)
    {
        printf("The total marks of %s are: %d\n",s[i].name,s[i].total);
    }
    return 0;
}
