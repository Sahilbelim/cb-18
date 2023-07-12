#include<stdio.h>
int Add(int n1,int n2)
{
    int add;
    add = n1 + n2;
    return add;
}
int Sub(int number1 ,int number2)
{
    int sub;
    sub = number1 - number2;
    return sub;
}
void main()
{
    int num1, num2,add,sub;
    printf("Enter value of number 1 ");
    scanf("%d",&num1);
    printf("Enter value of number 2 ");
    scanf("%d",&num2);
   
    // Add(20,30);
    // Add(70, 80);
   add= Add(num1, num2);
   printf(" Addition of number 1 and 2 is %d \n", add);
   sub=Sub(num1, num2);
   printf("subtraction of number 1 and 2 is %d ", sub);
}