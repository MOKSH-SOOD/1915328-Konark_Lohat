#include<stdio.h>
struct student 
{
    char name[50];
    int roll;
    int age;
    int marks;
    char sex;
} s[5];
int main()
{
    int i;
    printf("Enter the information of students: \n");
    for (i=0; i<5; i++)
    {
        s[i].roll = i+1;
        printf("\nFor Roll Number %d: \n", s[i].roll);
        printf("Enter Name: ");
        scanf("%s", &s[i].name);
        printf("Enter Age: ");
        scanf("%d", &s[i].age);
        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
        printf("Enter the Sex:");
        scanf("%s", &s[i].sex);
        printf("\n\n");
    }
    printf("Information Entered is: \n\n");
    for (i=0; i<5; i++)
    {
        printf("\nRoll Number: %d\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Marks: %d\n", s[i].marks);
        printf("Sex: %s\n", s[i].sex);
        printf("\n\n");
    }
    return 0;
}