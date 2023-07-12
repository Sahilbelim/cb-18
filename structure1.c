#include<stdio.h>
struct student{

    char name[20];
    int age;
    float weight;
};
void main()
{
    struct student s1,s2;

    printf("Enter value of student name ");
    scanf("%s", &s1.name);
    printf("Enter vale of student age ");
    scanf("%d", &s1.age);
    printf("Enete value of student weight ");
    scanf("%f", &s1.weight);
    printf("enter value of student name ");
    scanf("%s", &s2.name);
    printf("Enter vale of student age ");
    scanf("%d", &s2.age);
    printf("Enete value of student weight ");
    scanf("%f", &s2.weight);
    printf("enter value of student name ");
    printf("name of student 1 is %s \n", s1.name);
    printf("age  of student 1 is %d \n", s1.age);
    printf("weight  of student 1 is %f \n", s1.weight);

    printf("name of student 2 is %s \n", s2.name);
    printf("age  of student 2 is %d \n", s2.age);
    printf("weight  of student 2 is %f \n", s2.weight);
}