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
int Mul(int num1, int num2 )
{
    int multi = num1 * num2;
    return multi;
}
float Div(float num1,float num2)
{
    float div = num1 / num2;
    return div;
}
void main()
{
    int add, num1, num2,sub,mul;
    float div;
    num1 = 10;
    num2 = 20;
    sub = Sub(num1, num2);
    printf("subtraction is %d \n", sub);
    add = Add(num1, num2);
    printf("Addition is %d\n", add);
    sub = Sub(60, 80);
    printf("subtraction is %d\n", sub);

    add = Add(60, 80);
    printf("Addition is %d\n", add);

    mul=Mul(70,80);
    printf("multiplication is %d \n ", mul);

    div = Div(50, 3);
    printf("division is %f \n", div);

    
}