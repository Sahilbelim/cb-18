#include<stdio.h> 
int Add(int n1,int n2)
{

    int addition = n1 + n2;
    return addition;
}
int Sub(int n1 ,int n2)
{
    int sub = n1 - n2;
    return sub;
}
void main()
{
    int add, num1, num2,sub;
    num1 = 10;
    num2 = 20;
    sub = Sub(num1, num2);
    printf("subtraction is %d \n", sub);
    add = Add(num1, num2);
    printf("Addition is %d\n", add);
    sub = Sub(60, 80);
    printf("Addition is %d\n", add);

    add = Add(60, 80);
    printf("Addition is %d\n", add);
}